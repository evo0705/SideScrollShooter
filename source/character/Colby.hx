package character;

import flixel.FlxG;
import flixel.FlxState;
import Player;

/**
 * ...
 * @author 
 */
class Colby extends Player
{
	
	public function new(ENV:Environment, State:FlxState)
	{
		super(0, 0, AssetPaths.char_0001__png, State);
		name = "Colby";
		maxHealth = health = 30;
		maxBattery = battery = 12;
		exp = 0; maxExp = firstLevelXP = 150;
		handgunPro = 30;
		moveSpeed = 100;
		jumpPower = 245;
		
		drag.x = moveSpeed * 8;
		acceleration.y = ENV.gravity;
		maxVelocity.set(moveSpeed, ENV.gravity);
		
		onJumpSound = FlxG.sound.load(AssetPaths.jump_0001__ogg);
		onMoveSound = FlxG.sound.load(AssetPaths.walk_0001__ogg);
		onStepSound = FlxG.sound.load(AssetPaths.step_0002__ogg);
		
		setSize(16, 28);
		centerOffsets();
		offset.y = 4;
	}
}