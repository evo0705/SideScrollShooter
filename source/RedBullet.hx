package;

import flixel.addons.weapon.FlxBullet;
import flixel.addons.weapon.FlxWeapon;
import flixel.FlxObject;

/**
 * ...
 * @author 
 */
class RedBullet extends FlxBullet
{

	public function new(Weapon:FlxWeapon, WeaponID:Int) 
	{
		super(Weapon, WeaponID);
	}
	
	override public function kill():Void
	{
		animation.play("kill");
	}
	
	override public function update():Void
	{
		if (animation.finished) {
			exists = false;
		}
		
		if (_weapon.parent.facing == FlxObject.RIGHT) {
			_weapon.setBulletOffset(_halfWidth, 0);
			offset.x = -_weapon.parent._halfWidth + width;
		}
		if (_weapon.parent.facing == FlxObject.LEFT) {
			offset.x = _weapon.parent._halfWidth - width;
		}
		super.update();
	}
	
}