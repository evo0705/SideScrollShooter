package;

import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledTileSet;
import flixel.FlxSprite;
import flixel.tile.FlxTilemap;
import flixel.util.FlxPoint;
import flixel.util.FlxRect;
import haxe.io.Path;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.util.FlxCollision;

/**
 * ...
 * @author Samuel Lee
 */
class TiledLevel extends TiledMap
{
	public static var NO_DROP:Int = 1;
	
	// Array of tilemaps used for collision
	public var frontgroundTiles:FlxGroup;
	public var foregroundTiles:FlxGroup;
	public var backgroundTiles:FlxGroup;
	public var floors:FlxGroup;
	public var walls:FlxGroup;
	public var deaths:FlxGroup;
	private var platformLayers:Array<FlxTilemap>;
	private var solidLayers:Array<FlxTilemap>;

	public function new(Data:Dynamic) 
	{
		super(Data);
		
		foregroundTiles = new FlxGroup();
		backgroundTiles = new FlxGroup();
		frontgroundTiles = new FlxGroup();
		floors = new FlxGroup();
		walls = new FlxGroup();
		deaths = new FlxGroup();
		
		FlxG.camera.setBounds(0, 0, fullWidth, fullHeight, true);
		
		// Load Tile Maps
		for (tileLayer in layers)
		{
			var tileSheetName:String = tileLayer.properties.get("tileset");
			
			if (tileSheetName == null)
				throw "'tileset' property not defined for the '" + tileLayer.name + "' layer. Please add the property to the layer.";
				
			var tileSet:TiledTileSet = null;
			for (ts in tilesets)
			{
				if (ts.name == tileSheetName)
				{
					tileSet = ts;
					break;
				}
			}
			
			if (tileSet == null)
				throw "Tileset '" + tileSheetName + " not found. Did you mispell the 'tilesheet' property in " + tileLayer.name + "' layer?";
			
			var imagePath 		= new Path("assets/images/" + tileSet.imageSource);
			var processedPath 	= "assets/images/" + imagePath.file + "." + imagePath.ext;
			
			var tilemap:FlxTilemap = new FlxTilemap();
			
			tilemap.widthInTiles = width;
			tilemap.heightInTiles = height;
			tilemap.loadMap(tileLayer.tileArray, processedPath, tileSet.tileWidth, tileSet.tileHeight, 0, 1, 1, 1);
				
			if (tileLayer.properties.contains("scrollFactorX") && tileLayer.properties.contains("scrollFactorY"))
			{
				var factorX:Float = Std.parseFloat(tileLayer.properties.get("scrollFactorX"));
				var factorY:Float = Std.parseFloat(tileLayer.properties.get("scrollFactorY"));
				tilemap.scrollFactor.set(factorX, factorY);
			}
			
			if (tileLayer.properties.contains("back"))
			{
				backgroundTiles.add(tilemap);
			}
			else if (tileLayer.properties.contains("front"))
			{
				frontgroundTiles.add(tilemap);
			}
			else
			{
				foregroundTiles.add(tilemap);
			}
			
			if (tileLayer.properties.contains("platform")) {
				if (platformLayers == null)
					platformLayers = new Array<FlxTilemap>();
				platformLayers.push(tilemap);
			}
			if (tileLayer.properties.contains("solid")) {
				if (solidLayers == null)
					solidLayers = new Array<FlxTilemap>();
				solidLayers.push(tilemap);
			}
		}
		
		if (getObjectGroup("floor") != null) {
			for (o in getObjectGroup("floor").objects) {
				var floor:FlxObject = new FlxObject(o.x, o.y, o.width, o.height);
				floor.immovable = true;
				floor.allowCollisions = FlxObject.CEILING;
				if (cast(o, TiledObject).custom.contains("nodrop")) {
					floor.ID = NO_DROP;
				}
				floors.add(floor);
			}
		}
		
		if (getObjectGroup("wall") != null) {
			for (o in getObjectGroup("wall").objects) {
				var wall:FlxObject = new FlxObject(o.x, o.y, o.width, o.height);
				wall.immovable = true;
				if (cast(o, TiledObject).custom.get("block") == "right") {
					wall.allowCollisions = FlxObject.LEFT;
				}else if (cast(o, TiledObject).custom.get("block") == "left") {
					wall.allowCollisions = FlxObject.RIGHT;
				}
				walls.add(wall);
			}
		}
		
		if (getObjectGroup("death") != null) {
			for (o in getObjectGroup("death").objects) {
				var death:FlxObject = new FlxObject(o.x, o.y, o.width, o.height);
				death.immovable = true;
				deaths.add(death);
			}
		}
	}
	
	/**
	 * Floor could be reach from the bottom
	 */
	public function collideWithLevel(obj:FlxObject, ?notifyCallback:FlxObject->FlxObject->Void, ?processCallback:FlxObject->FlxObject->Bool):Bool
	{
		var floorCollided:Dynamic = null;
		var collided:Bool = false;
		
		var cameraRect:FlxRect = new FlxRect(FlxG.camera.scroll.x - FlxG.camera.width, FlxG.camera.scroll.y - FlxG.camera.height, FlxG.camera.width * 2, FlxG.camera.height * 2);
		
		// floor could be reach from the bottom
		//collided = FlxG.overlap(floors, obj, function(obj1, obj2) { FlxG.collide(obj1, obj2); floorCollided = obj1; }, function(obj1, obj2) { return obj2.y + obj2.height / 2 <= obj1.y; } );
		for (floor in floors) {
			if (cameraRect.overlaps(new FlxRect(cast(floor, FlxObject).x, cast(floor, FlxObject).y, cast(floor, FlxObject).width, cast(floor, FlxObject).height)))
				collided = FlxG.overlap(floor, obj, function(obj1, obj2) { FlxG.collide(obj1, obj2); floorCollided = obj1; }, function(obj1, obj2) { return obj2.y + obj2.height / 2 <= obj1.y; } );
			if (collided) break;
		}
		
		// wall collision
		FlxG.collide(walls, obj);
		
		//collided = FlxG.overlap(floors, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separateY);
		
		FlxG.overlap(deaths, obj, function(obj1, obj2) { obj2.kill(); } );
		
		if (Std.is(obj, Player)) {
			cast(obj, Player).noDrop = false;
			if (collided) {
				if (floorCollided.ID == NO_DROP) {
					cast(obj, Player).noDrop = true;
				}
			}
		}
		
		//if (platformLayers != null)
		//{
			//for (map in platformLayers)
			//{
				//// IMPORTANT: Always collide the map with objects, not the other way around. 
				////			  This prevents odd collision errors (collision separation code off by 1 px). 
				//collided = FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separateY);
			//}
		//}
		//
		//if (solidLayers != null)
		//{
			//for (map in solidLayers)
			//{
				//// IMPORTANT: Always collide the map with objects, not the other way around. 
				////			  This prevents odd collision errors (collision separation code off by 1 px). 
				//collided = FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separate);
			//}
		//}
		return collided;
	}
}