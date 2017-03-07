package;

import flixel.addons.weapon.FlxBullet;
import flixel.addons.weapon.FlxWeapon;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxRandom;

/**
 * ...
 * @author 
 */
class Bullet extends FlxBullet
{
	
	public var minDamage:Float;
	public var maxDamage:Float;
	public var hitCount:Float = 1;
	private var _currentHitCount:Float = 1;

	public function new(Weapon:FlxWeapon, WeaponID:Int, MinDamage:Float, MaxDamage:Float) 
	{
		super(Weapon, WeaponID);
		minDamage = MinDamage;
		maxDamage = MaxDamage;
		_currentHitCount = hitCount;
		setFacingFlip(FlxObject.LEFT, true, false);
		setFacingFlip(FlxObject.RIGHT, false, false);
		facing = FlxObject.RIGHT;
	}
		
	public function hitTarget(Target:FlxSprite, AllowDamage:Bool):Void
	{
		if (_currentHitCount > 0) {
			velocity.set(0, 0);	
			_currentHitCount--;
			if (AllowDamage)
				Target.hurt(FlxRandom.floatRanged(minDamage, maxDamage));
			animation.play("kill");
		}
	}
	
	public function hitWall(Target:FlxObject):Void {
		if (_currentHitCount > 0) {
			velocity.set(0, 0);	
			x = Target.x + (angle == FlxWeapon.BULLET_RIGHT ? -width : Target.width);
			_currentHitCount--;
			animation.play("kill");
		}
	}
	
	override public function kill() {
		super.kill();
		_currentHitCount = hitCount;
	}
	
	override public function update():Void
	{
		if (velocity.x != 0) {
			angle = (velocity.x > 0 ? FlxWeapon.BULLET_RIGHT : FlxWeapon.BULLET_LEFT);	
		}
		if (animation.finished) {
			kill();
		}
		super.update();
	}
	
	override private function postFire() {
		super.postFire();
	}
}