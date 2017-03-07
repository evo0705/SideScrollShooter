package;

import character.Colby;
import enemy.Bandit;
import flixel.effects.particles.FlxEmitter;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.system.FlxSound;
import flixel.ui.FlxButton;
import flixel.util.FlxCollision;
import flixel.util.FlxPoint;
import flixel.util.FlxRect;
import flixel.util.FlxSave;
import flixel.util.FlxSort;
import flixel.effects.FlxFlicker;
import FPS;
import menus.PauseMenu;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	private var _checkpoint:FlxPoint;
	private var _player:Player;
	private var _allSprites:FlxTypedGroup<FlxSprite> = new FlxTypedGroup<FlxSprite>();
	private var _littleGibs:FlxEmitter;
	private var _fps:FPS;
	
	private var _enemies:FlxGroup;
	
	private var _pause:Bool = false;
	
	private var _level:TiledLevel;
	private var _environment:Environment;
	private var _bgm:FlxSound;
	private var _pauseMenu:PauseMenu;	
	 
	override public function create():Void
	{
		super.create();
		
		FlxG.camera.bgColor = 0xFF888888;
		_bgm = FlxG.sound.load("assets/music/fairyland.ogg", .3, true);
		_bgm.play();
		
		// Load the level's tilemaps
		_level = new TiledLevel("assets/data/level-0002.tmx");
		add(_level.backgroundTiles);
		add(_level.foregroundTiles);
		add(_level.floors);
		add(_level.deaths);
		
		_littleGibs = new FlxEmitter();
		_littleGibs.setXSpeed( -150, 150);
		_littleGibs.setYSpeed( -200, 0);
		_littleGibs.setRotation( -720, -720);
		_littleGibs.gravity = 350;
		_littleGibs.bounce = 0.5;
		_littleGibs.makeParticles("assets/images/gibs.png", 100, 10, true, 0.5);
		
		_environment = new Environment();
		_player = new Colby(_environment, this);
		_environment.player = _player;
		_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.Handgun001));
		
		FlxG.camera.setBounds(0, 0, _level.fullWidth, _level.fullHeight, true);
		FlxG.camera.follow(_player, FlxCamera.STYLE_PLATFORMER);
		
		for(gibs in _littleGibs.members){
			_allSprites.add(gibs);
		}
		_allSprites.add(_player);
		add(_allSprites);
		add(_level.frontgroundTiles);
		add(_littleGibs);
		add(_player.vPad);
		add(_player.hud);
		
		for (group in _level.objectGroups)
		{
			for (o in group.objects)
			{
				if (o.type.toLowerCase() == "start") {
					_player.x = o.x;
					_player.y = o.y;
					_checkpoint = new FlxPoint(o.x, o.y);
				}
			}
		}
		
		_enemies = new FlxGroup();
		for (group in _level.objectGroups)
		{
			for (o in group.objects)
			{
				if (o.type.toLowerCase() == "enemy") {
					var enemy:Bandit = new Bandit(o.x, o.y, _environment);
					enemy.resetMaxHealth(100);
					enemy.acceleration.y = 300;
					enemy.drag.x = 1000;
					enemy.setSize(16, 28);
					enemy.centerOffsets();
					enemy.offset.y = 4;
					enemy.solid = true;
					_enemies.add(enemy);
				}
			}
		}
		add(_enemies);
		if (_player.weapon != null) {
			add(_player.weapon.group);
		}
		
		if (Reg.debug) {
			//FlxG.debugger.drawDebug = true;	
			_fps = new FPS(4, 50);
			_fps.alpha = .7;
			_fps.scrollFactor.x = _fps.scrollFactor.y = 0;
			add(_fps);
		}
		
		//var resumeButton = new FlxButton(10, 10);
		//resumeButton.makeGraphic(64, 64, 0xFF0000);
		//resumeButton.scrollFactor.set(0, 0);
		//var mainMenuButton = new FlxButton(resumeButton.x + 10, 10);
		//mainMenuButton.makeGraphic(64, 64, 0xFF0000);
		//mainMenuButton.scrollFactor.set(0, 0);
		//add(resumeButton);
		//add(mainMenuButton);
		
		_pauseMenu = new PauseMenu();
		add(_pauseMenu);
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{	
		_player.vPad.visible = !_pauseMenu.isShowing;
		if (_pauseMenu.isShowing) {
			if (FlxG.keys.justPressed.ESCAPE) _pauseMenu.resumeButton.onDown.fire();
			_pauseMenu.update();
			_bgm.pause();
			return;
		}else {
			if (FlxG.keys.justPressed.ESCAPE) _pauseMenu.pauseButton.onDown.fire();
			_bgm.resume();
		}
		
		super.update();
		
		collisions();
		
		// player died, restart game
		if (!_player.alive) {
			_player.revive();
			_player.setPosition(_checkpoint.x, _checkpoint.y);	
		}
		
		_allSprites.sort(sortByY, FlxSort.DESCENDING);
		
		if (FlxG.keys.justPressed.ONE) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.Handgun001));
		}else if (FlxG.keys.justPressed.TWO) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.Handgun002));
		}else if (FlxG.keys.justPressed.THREE) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.Handgun003));
		}else if (FlxG.keys.justPressed.FOUR) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.SMG001));
		}else if (FlxG.keys.justPressed.FIVE) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.SMG002));
		}else if (FlxG.keys.justPressed.SIX) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.SMG003));
		}else if (FlxG.keys.justPressed.SEVEN) {
			_player.setWeapon(new FlxRect(0, 0, _level.fullWidth, _level.fullHeight), new WeaponAttribute(WeaponAttribute.WeaponID.Handgun004));
		}
	}
	
	private inline function sortByY(order:Int, o1:FlxObject, o2:FlxObject):Int
	{
		return FlxSort.byValues(order, o1.y + o1.width, o2.y + o2.width);
	}
	
	private function collisions():Void {
		
		FlxG.collide(_level.walls, _littleGibs);
		FlxG.collide(_level.floors, _littleGibs);
		
		for (enemy in _enemies.members) {
			_level.collideWithLevel(cast(enemy, FlxSprite));
		}
		
		// Collide with foreground tile layer
		_level.collideWithLevel(_player);
		

		FlxG.overlap(_player, _enemies, function (p, e) {
			if (!FlxFlicker.isFlickering(p)) {
				FlxG.camera.shake(.005, 0.3);
				FlxFlicker.flicker(p, .7, 0.06, true, true);
				p.hurt(1);
			}
		});
		
		// Player Bullets
		if (_player.weapon != null) {
			// Bullet hit Walls
			FlxG.overlap(_level.walls, _player.weapon.group, function (o1, o2) {
				o2.hitWall(o1);
			});
			
			// Bullet hit Enemies
			FlxG.overlap(_enemies, _player.weapon.group, function (obj1, obj2) {
				obj2.hitTarget(obj1, true);
				if (!obj1.alive) {
					_littleGibs.at(cast(obj1, FlxSprite));
					_littleGibs.start(true, 3, 0, 20);
				}
				if (obj1.health <= 0) {
					_player.exp += Std.int(obj1.maxHealth / 2);
				}
			}, function(obj1, obj2) { return FlxCollision.pixelPerfectCheck(obj1, obj2); } );			
		}	
		
		if (_player.weaponToRemove != null) {	
			// Bullet hit Walls
			FlxG.overlap(_level.walls, _player.weaponToRemove.group, function (o1, o2) { 
				o2.hitWall(o1);
			});
			
			// Bullet hit Enemies
			FlxG.overlap(_enemies, _player.weaponToRemove.group, function (obj1, obj2) {
				obj2.hitTarget(obj1, true);
				if (!obj1.alive) {
					_littleGibs.at(cast(obj1, FlxSprite));
					_littleGibs.start(true, 3, 0, 20);
				}
				if (obj1.health <= 0) {
					_player.exp += Std.int(obj1.maxHealth / 2);
				}
			}, function(obj1, obj2) { return FlxCollision.pixelPerfectCheck(obj1, obj2); } );		
		}	
	}
}