package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/level-0001.oel", "assets/data/level-0001.oel");
			type.set ("assets/data/level-0001.oel", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/level-0001.tmx", "assets/data/level-0001.tmx");
			type.set ("assets/data/level-0001.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/level-0002.tmx", "assets/data/level-0002.tmx");
			type.set ("assets/data/level-0002.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/map1.oep", "assets/data/map1.oep");
			type.set ("assets/data/map1.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/stage.oep", "assets/data/stage.oep");
			type.set ("assets/data/stage.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/fonts/normal.ttf", "assets/fonts/normal.ttf");
			type.set ("assets/fonts/normal.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/pixelart.ttf", "assets/fonts/pixelart.ttf");
			type.set ("assets/fonts/pixelart.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/pixelmix.ttf", "assets/fonts/pixelmix.ttf");
			type.set ("assets/fonts/pixelmix.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/space.ttf", "assets/fonts/space.ttf");
			type.set ("assets/fonts/space.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/visitor2.ttf", "assets/fonts/visitor2.ttf");
			type.set ("assets/fonts/visitor2.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/images/bar-32-6.png", "assets/images/bar-32-6.png");
			type.set ("assets/images/bar-32-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-64-8.png", "assets/images/bar-64-8.png");
			type.set ("assets/images/bar-64-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-battery-sheet.png", "assets/images/bar-battery-sheet.png");
			type.set ("assets/images/bar-battery-sheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-battery.png", "assets/images/bar-battery.png");
			type.set ("assets/images/bar-battery.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-exp.png", "assets/images/bar-exp.png");
			type.set ("assets/images/bar-exp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-health-sheet.png", "assets/images/bar-health-sheet.png");
			type.set ("assets/images/bar-health-sheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-health.png", "assets/images/bar-health.png");
			type.set ("assets/images/bar-health.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-v-32-8-sheet.png", "assets/images/bar-v-32-8-sheet.png");
			type.set ("assets/images/bar-v-32-8-sheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-v-32-8.png", "assets/images/bar-v-32-8.png");
			type.set ("assets/images/bar-v-32-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bar-v-64-8.png", "assets/images/bar-v-64-8.png");
			type.set ("assets/images/bar-v-64-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bars.png", "assets/images/bars.png");
			type.set ("assets/images/bars.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/batterybar.png", "assets/images/batterybar.png");
			type.set ("assets/images/batterybar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bricks.png", "assets/images/bricks.png");
			type.set ("assets/images/bricks.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet-0001.png", "assets/images/bullet-0001.png");
			type.set ("assets/images/bullet-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet-0002.ase", "assets/images/bullet-0002.ase");
			type.set ("assets/images/bullet-0002.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/bullet-0002.png", "assets/images/bullet-0002.png");
			type.set ("assets/images/bullet-0002.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bullet-0003.ase", "assets/images/bullet-0003.ase");
			type.set ("assets/images/bullet-0003.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/bullet-0003.png", "assets/images/bullet-0003.png");
			type.set ("assets/images/bullet-0003.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/buttonLeft.png", "assets/images/buttonLeft.png");
			type.set ("assets/images/buttonLeft.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/buttonRight.png", "assets/images/buttonRight.png");
			type.set ("assets/images/buttonRight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/char-0001.png", "assets/images/char-0001.png");
			type.set ("assets/images/char-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dpad.ase", "assets/images/dpad.ase");
			type.set ("assets/images/dpad.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/dpad.png", "assets/images/dpad.png");
			type.set ("assets/images/dpad.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dpadA.ase", "assets/images/dpadA.ase");
			type.set ("assets/images/dpadA.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/dpadA.png", "assets/images/dpadA.png");
			type.set ("assets/images/dpadA.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dpadB.ase", "assets/images/dpadB.ase");
			type.set ("assets/images/dpadB.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/dpadB.png", "assets/images/dpadB.png");
			type.set ("assets/images/dpadB.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dpadleft.ase", "assets/images/dpadleft.ase");
			type.set ("assets/images/dpadleft.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/dpadleft.png", "assets/images/dpadleft.png");
			type.set ("assets/images/dpadleft.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/dpadright.ase", "assets/images/dpadright.ase");
			type.set ("assets/images/dpadright.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/dpadright.png", "assets/images/dpadright.png");
			type.set ("assets/images/dpadright.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/emptybar.png", "assets/images/emptybar.png");
			type.set ("assets/images/emptybar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemy-0001.png", "assets/images/enemy-0001.png");
			type.set ("assets/images/enemy-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/floor-0001.png", "assets/images/floor-0001.png");
			type.set ("assets/images/floor-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/gibs-0001.png", "assets/images/gibs-0001.png");
			type.set ("assets/images/gibs-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/gibs.png", "assets/images/gibs.png");
			type.set ("assets/images/gibs.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/gun-0001.ase", "assets/images/gun-0001.ase");
			type.set ("assets/images/gun-0001.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/gun-0001.png", "assets/images/gun-0001.png");
			type.set ("assets/images/gun-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/healthbar.png", "assets/images/healthbar.png");
			type.set ("assets/images/healthbar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/level.png", "assets/images/level.png");
			type.set ("assets/images/level.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Sprite-0002.png", "assets/images/Sprite-0002.png");
			type.set ("assets/images/Sprite-0002.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/stage1.oep", "assets/images/stage1.oep");
			type.set ("assets/images/stage1.oep", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/tiles-0001.ase", "assets/images/tiles-0001.ase");
			type.set ("assets/images/tiles-0001.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tiles-0001.png", "assets/images/tiles-0001.png");
			type.set ("assets/images/tiles-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tree-0001.png", "assets/images/tree-0001.png");
			type.set ("assets/images/tree-0001.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/bgm-0001.ogg", "assets/music/bgm-0001.ogg");
			type.set ("assets/music/bgm-0001.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/bgm-0002.ogg", "assets/music/bgm-0002.ogg");
			type.set ("assets/music/bgm-0002.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/chase.ogg", "assets/music/chase.ogg");
			type.set ("assets/music/chase.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/fairy.ogg", "assets/music/fairy.ogg");
			type.set ("assets/music/fairy.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/fairyland.ogg", "assets/music/fairyland.ogg");
			type.set ("assets/music/fairyland.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/time-break.ogg", "assets/music/time-break.ogg");
			type.set ("assets/music/time-break.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gun-0001.ogg", "assets/sounds/gun-0001.ogg");
			type.set ("assets/sounds/gun-0001.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gun-0002.ogg", "assets/sounds/gun-0002.ogg");
			type.set ("assets/sounds/gun-0002.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/gun-0003.ogg", "assets/sounds/gun-0003.ogg");
			type.set ("assets/sounds/gun-0003.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/jump-0001.ogg", "assets/sounds/jump-0001.ogg");
			type.set ("assets/sounds/jump-0001.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/step-0001.ogg", "assets/sounds/step-0001.ogg");
			type.set ("assets/sounds/step-0001.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step-0002.ogg", "assets/sounds/step-0002.ogg");
			type.set ("assets/sounds/step-0002.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/walk-0001.ogg", "assets/sounds/walk-0001.ogg");
			type.set ("assets/sounds/walk-0001.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/walk-0002.ogg", "assets/sounds/walk-0002.ogg");
			type.set ("assets/sounds/walk-0002.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/fonts/nokiafc22.ttf", "assets/fonts/nokiafc22.ttf");
			type.set ("assets/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/fonts/arial.ttf", "assets/fonts/arial.ttf");
			type.set ("assets/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
