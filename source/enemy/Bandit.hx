package enemy;

import flixel.effects.FlxFlicker;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.util.FlxRect;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class Bandit extends FlxSprite
{
	
	public var name:String = "";
	public var moveSpeed:Float = 10;
	public var jumpPower:Float = 245;
	public var allowHurt:Bool = true;
	public var maxHealth:Float = 0;
	
	private var _AIMovementList:Array<Dynamic>;
	private var _environment:Environment;

	public function new(X:Float=0, Y:Float=0, ENV:Environment) 
	{
		super(X, Y);
		loadGraphic(AssetPaths.enemy_0001__png, true, 32, 32);
		setFacingFlip(FlxObject.LEFT, true, false);
		setFacingFlip(FlxObject.RIGHT, false, false);
		facing = FlxObject.LEFT;
		
		animation.add("stand", [0, 1], 3);
		animation.add("move", [2, 3, 4, 5, 4, 3], 10);
		animation.add("jump", [6], 240, false);
		animation.add("fall", [7], 3);
		animation.add("shoot", [8, 8], 3, false);
		animation.add("giggle", [10, 11], 10, true);
		animation.add("laugh", [12, 13], 10, true);
		animation.add("talk", [14, 15, 16, 15], 10, true);
		
		solid = true;
		acceleration.y = ENV.gravity;
		maxVelocity.set(moveSpeed, ENV.gravity);
		_environment = ENV;
		
		setSize(16, 28);
		centerOffsets();
		offset.y = 4;
	}
	
	public function resetMaxHealth(Value:Float) {
		health = maxHealth = Value;
	}
	
	public function addHealth(value:Float) {
		if ((health + value) > maxHealth) {
			value = maxHealth - health;	
		}
		health += (value > 0 ? value :0);
	}
	
	override public function update():Void {
		var cameraRect:FlxRect = new FlxRect(FlxG.camera.scroll.x - FlxG.camera.width, FlxG.camera.scroll.y - FlxG.camera.height, FlxG.camera.width * 2, FlxG.camera.height * 2);
		if (cameraRect.overlaps(new FlxRect(x, y, width, height))) {
			acceleration.x = 0;
			AIMovement();
			super.update();
		}
	}
	
	override public function hurt(Damage:Float):Void {
		if (allowHurt) {
			FlxFlicker.flicker(this, .7, 0.06, true, true);
			super.hurt(Damage);
		}
	}
	
	override public function destroy():Void {
		super.destroy();
	}
	
	private function AIMovement() {
		if (velocity.x == 0)
			animation.play("stand");
		else
			animation.play("move");
			
		if (velocity.y > 0)
			animation.play("fall");
			
		if (_environment.player != null && _environment.player.alive) {
			var playerPosX:Float = _environment.player.x + _environment.player.width / 2;
			var playerPosY:Float = _environment.player.y + _environment.player.height / 2;
			var enemyPosX:Float = x + width / 2;
			var enemyPosY:Float = y + height / 2;
			if(Math.abs(playerPosX - enemyPosX) < 100 && Math.abs(playerPosY - enemyPosY) < height / 2 ){
				if (_environment.player.x + _environment.player.width < x) {
					if (facing == FlxObject.LEFT) moveLeft();
				}else if (_environment.player.x > x + width) {
					if (facing == FlxObject.RIGHT) moveRight();
				}
			}
		};
	}
	
	private function moveLeft() {
		acceleration.x = -((drag.x + moveSpeed) / 2);
		facing = FlxObject.LEFT;
	}
	
	private function moveRight() {
		acceleration.x = (drag.x + moveSpeed) / 2;
		facing = FlxObject.RIGHT;
	}
}