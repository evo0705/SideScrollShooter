package;

import Bars.BarType;
import flixel.addons.weapon.FlxBullet;
import flixel.addons.weapon.FlxWeapon;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxTypedGroup;
import flixel.input.gamepad.LogitechButtonID;
import flixel.system.FlxSound;
import flixel.ui.FlxButton;
import flixel.ui.FlxVirtualPad;
import flixel.util.FlxPoint;
import flixel.input.touch.FlxTouch;
import flixel.util.FlxRect;
import WeaponAttribute.WeaponType;

/**
 * ...
 * @author 
 */
class Player extends FlxSprite
{
	
	public var name:String = "";
	public var moveSpeed:Float = 10;
	public var jumpPower:Float = 10;
	public var weapon:FlxWeapon;
	public var weaponAttribute:WeaponAttribute;
	public var airJumpLimit:Int = 0;
	
	public var level:Int = 1;
	public var firstLevelXP:Int = 150;
	public var maxHealth:Float = 0;
	public var maxBattery:Int = 0;
	public var maxExp:Int = 0;
	public var battery:Int = 0;
	public var exp:Int = 0;
	
	// Stats
	public var endurance:Int = 0;
	public var handgunPro:Int = 0;
	public var smgPro:Int = 0;
	public var shotgunPro:Int = 0;
	public var riflePro:Int = 0;
	
	public var handgunBullet:Int = 100;
	public var smgBullet:Int = 1500;
	public var shotgunBullet:Int = 0;
	public var rifleBullet:Int = 0;
	public var maxHandgunBullet:Int = 100;
	public var maxSmgBullet:Int = 1500;
	public var maxShotgunBullet:Int = 20;
	public var maxRifleBullet:Int = 45;
	
	public var statPoint:Int = 0;
	public var skillPoint:Int = 0;
	
	
	public var vPad:FlxVirtualPad;
	public var controllable:Bool = true;
	
	public var noDrop:Bool = false;
	
	private var _spriteSize:FlxPoint = new FlxPoint(32, 32);
	private var _secondJumpReady:Bool = false;
	private var _vPadJumpReleased:Bool = true;
	private var _currentAirJump:Int = 0;
	private var _jumpDelay:Float = .3;
	private var _jumpDelayLeft:Float = 0;
	
	public var onJumpSound:FlxSound;
	public var onMoveSound:FlxSound;
	public var onStepSound:FlxSound;
		
	private var healthBar:Bars;
	private var batteryBar:Bars;
	private var expBar:Bars;
	private var ammoBar:Bars;
	public var hud:FlxGroup;
	
	private var decentGesture:FlxPoint;
	private var gameState:FlxState;

	public function new(X:Float=0, Y:Float=0, Asset:String, State:FlxState) 
	{
		super(X, Y);
		gameState = State;
		loadGraphic(Asset, true, Std.int(_spriteSize.x), Std.int(_spriteSize.y));
		setFacingFlip(FlxObject.LEFT, true, false);
		setFacingFlip(FlxObject.RIGHT, false, false);
		facing = FlxObject.RIGHT;
		
		animation.add("stand", [0, 1], 3);
		animation.add("stand-weapon", [2, 3], 3);
		animation.add("move", [4, 5, 6, 7, 6, 5], 10);
		animation.add("move-weapon", [8, 9, 10, 11, 10, 9], 10);
		animation.add("jump", [12], 1, false);
		animation.add("jump-weapon", [13], 1, false);
		animation.add("fall", [14], 3);
		animation.add("fall-weapon", [15], 3);
		animation.add("shoot", [16, 16], 1, false);
		//animation.add("giggle", [10, 11], 10, true);
		//animation.add("laugh", [12, 13], 10, true);
		//animation.add("talk", [14, 15, 16, 15], 10, true);
		
		solid = true;
		
		createVirtualPad();
		
		healthBar = new Bars(this, BarType.Health, 4, 4, 1);
		batteryBar = new Bars(this, BarType.Battery, 4, 12, 1);
		expBar = new Bars(this, BarType.EXP, 11, 11, 1);
		ammoBar = new Bars(this, BarType.AMMO, 4, 20, maxHandgunBullet);
		
		hud = new FlxGroup();
		hud.add(healthBar);
		hud.add(batteryBar);
		hud.add(ammoBar);
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
	
	public var weaponSprite:FlxSprite;
	public var weaponToRemove:FlxWeapon;
	public function setWeapon(Bounds:FlxRect, Attribute:WeaponAttribute) {
		gameState.remove(weaponSprite);
		if (weapon != null) weaponToRemove = weapon;
		weaponAttribute = Attribute;
		var damageBuff:Float = 0;
		if (weaponAttribute.type == WeaponType.Handgun) {
			damageBuff = Math.sqrt(handgunPro);
		}
		else if (weaponAttribute.type == WeaponType.Rifle) {
			damageBuff = Math.sqrt(riflePro);
		}
		else if (weaponAttribute.type == WeaponType.SMG) {
			damageBuff = Math.sqrt(smgPro);
		}
		else if (weaponAttribute.type == WeaponType.Shotgun) {
			damageBuff = Math.sqrt(shotgunPro);
		}
		weaponAttribute.minDamage = (damageBuff == 0 ? 0.5 : damageBuff) * weaponAttribute.minDamage;
		weaponAttribute.maxDamage = (damageBuff == 0 ? 0.5 : damageBuff) * weaponAttribute.maxDamage;
		weaponSprite = new FlxSprite(x, y);
		weaponSprite.setFacingFlip(FlxObject.LEFT, true, false);
		weaponSprite.setFacingFlip(FlxObject.RIGHT, false, false);
		weaponSprite.loadGraphic(Attribute.asset, true, 21, 10);
		weaponSprite.animation.add(Attribute.animations[0][0], Attribute.animations[0][1], Attribute.animations[0][2], Attribute.animations[0][3]);
		weaponSprite.animation.add(Attribute.animations[1][0], Attribute.animations[1][1], Attribute.animations[1][2], Attribute.animations[1][3]);
		weaponSprite.animation.play(Attribute.animations[0][0]);
		weaponSprite.offset.x = -28;
		weaponSprite.offset.y = -12;
		weaponSprite.setPosition(x - width, y);
		weaponSprite.facing = facing;
		weaponSprite.offset.x = (facing == FlxObject.LEFT ? 1 : -28);
		weapon = new FlxWeapon(Attribute.name, this);
		weapon.setBulletSpeed(Attribute.bulletSpeed);
		weapon.setBulletDirection(0, Attribute.bulletSpeed);
		weapon.setBulletLifeSpan(Attribute.bulletLifeSpan);
		weapon.fireRate = Attribute.fireRate;
		weapon.setBulletElasticity(Attribute.elasticity);
		weapon.setBulletBounds(Bounds);
		weapon.setBulletRandomFactor(Attribute.randomAngle, Attribute.randomSpeed, Attribute.randomPosition, Attribute.randomLifeSpan);
		
		weapon.group = new FlxTypedGroup<FlxBullet>(Std.int(Attribute.bulletLifeSpan * 1000 / Attribute.fireRate));
		for (b in 0...weaponAttribute.bulletCount)
		{
			var tempBullet:FlxBullet = new Bullet(weapon, 0, Attribute.minDamage, Attribute.maxDamage);
			tempBullet.loadGraphic(Attribute.bulletAsset, true, Attribute.bulletWidth, Attribute.bulletHeight);
			// firing animation
			tempBullet.addAnimation(Attribute.bulletAnimations[0][0], Attribute.bulletAnimations[0][1], Attribute.bulletAnimations[0][2], Attribute.bulletAnimations[0][3]);
			tempBullet.animation.play(Attribute.bulletAnimations[0][0]);
			// kill animation
			tempBullet.addAnimation(Attribute.bulletAnimations[1][0], Attribute.bulletAnimations[1][1], Attribute.bulletAnimations[1][2], Attribute.bulletAnimations[1][3]);
			weapon.group.add(tempBullet);
		}
		gameState.add(weaponSprite);
		gameState.add(weapon.group);
	}
	
	private inline function createVirtualPad() {
		vPad = new FlxVirtualPad(DPadMode.LEFT_RIGHT, ActionMode.A_B);
		vPad.alpha = .8;
		vPad.antialiasing = true;
		vPad.buttonLeft.loadGraphic("assets/images/dpadleft.png", false, 48, 48);
		vPad.buttonLeft.setGraphicSize(Math.round(FlxG.width / 8), Math.round(FlxG.width / 8));
		vPad.buttonLeft.scale.set(.6, .6);
		vPad.buttonLeft.setPosition(FlxG.width / 15, FlxG.height - 10 - vPad.buttonLeft.height);
		vPad.buttonRight.loadGraphic("assets/images/dpadright.png", false, 48, 48);
		vPad.buttonRight.setGraphicSize(Math.round(FlxG.width / 8), Math.round(FlxG.width / 8));
		vPad.buttonRight.scale.set(.6, .6);
		vPad.buttonRight.setPosition(vPad.buttonLeft.x + vPad.buttonLeft.width + 10, vPad.buttonLeft.y);
		vPad.buttonA.loadGraphic("assets/images/dpadA.png", false, 48, 48);
		vPad.buttonA.setGraphicSize(Math.round(FlxG.width / 8), Math.round(FlxG.width / 8));
		vPad.buttonA.scale.set(.6, .6);
		vPad.buttonA.setPosition(FlxG.width - FlxG.width / 15 - vPad.buttonA.width, FlxG.height - 10 - vPad.buttonLeft.height);
		vPad.buttonB.loadGraphic("assets/images/dpadB.png", false, 48, 48);
		vPad.buttonB.setGraphicSize(Math.round(FlxG.width / 8), Math.round(FlxG.width / 8));
		vPad.buttonB.scale.set(.6, .6);
		vPad.buttonB.setPosition(vPad.buttonA.x - vPad.buttonA.width - 10, vPad.buttonA.y);	
	}
	
	override public function update() {
		acceleration.x = 0;
		
		playAnimation();
		
		if (justTouched(FlxObject.FLOOR)) { onStepSound.play();  _currentAirJump = 0; }
			
		controls();
		
		healthBar.setMaxValue(maxHealth);
		healthBar.setCurrentValue(health);
		healthBar.update();
		batteryBar.setMaxValue(maxBattery);
		batteryBar.setCurrentValue(battery);
		batteryBar.update();
		if (weapon != null) {
			if(weaponAttribute.type == WeaponType.Handgun){	
				ammoBar.setMaxValue(maxHandgunBullet);
				ammoBar.setCurrentValue(handgunBullet, "Handgun");
			}
			else if(weaponAttribute.type == WeaponType.Shotgun){	
				ammoBar.setMaxValue(maxShotgunBullet);
				ammoBar.setCurrentValue(shotgunBullet, "Shotgun");
			}
			else if(weaponAttribute.type == WeaponType.Rifle){	
				ammoBar.setMaxValue(maxRifleBullet);
				ammoBar.setCurrentValue(rifleBullet, "Rifle");
			}
			else if(weaponAttribute.type == WeaponType.SMG){	
				ammoBar.setMaxValue(maxSmgBullet);
				ammoBar.setCurrentValue(smgBullet, "SMG");
			}
		}
		ammoBar.update();
		
		if (exp < maxExp) {
			expBar.setMaxValue(maxExp);
			expBar.setCurrentValue(exp);
			expBar.update();
		}else {
			levelUp();
		}
		
		if (weaponToRemove != null) {
			var readyToRemove:Bool = true;
			for (bullet in weaponToRemove.group) {
				if (bullet.alive) readyToRemove = false;
			}
			if (readyToRemove) {
				gameState.remove(weaponToRemove.group);
			}
		}
					
		super.update();
		
		if (weaponSprite != null) {
			weaponSprite.setPosition(x - width, y);
		}
	}
	
	private function playAnimation() {
		if (velocity.x != 0) {
			animation.play("move" + (weaponSprite != null ? "-weapon" : ""));	
		}else if (velocity.y == 0) {
			if (animation.getByName("shoot").finished)
				animation.play("stand" + (weaponSprite != null ? "-weapon" : ""));
		}
		if (velocity.y < 0) {
			animation.play("jump" + (weaponSprite != null ? "-weapon" : ""));	
		}else if (velocity.y > 0) {
			animation.play("fall" + (weaponSprite != null ? "-weapon" : ""));	
		}
		
		if (weaponSprite.animation.curAnim != null) {
			if (weaponSprite.animation.curAnim.name == "fire") {
				if (weaponSprite.animation.curAnim.curFrame == weaponSprite.animation.getByName(weaponAttribute.animations[1][0]).numFrames) {
					weaponSprite.animation.play(weaponAttribute.animations[0][0]);
					if (animation.curAnim != null && animation.curAnim.name == "shoot") {
						animation.curAnim.curFrame = 1;
					}
					if (facing == FlxObject.RIGHT) {
						weaponSprite.offset.x = -28;
					}
					if (facing == FlxObject.LEFT) {
						weaponSprite.offset.x = 1;	
					}
				}
			}else {
			}
		}
	}
	
	private function controls() {
		if (controllable) {
			if (_jumpDelayLeft > 0) _jumpDelayLeft -= FlxG.elapsed;
			
			// Multitouch Input
			vPad.buttonA.status = FlxButton.NORMAL;
			vPad.buttonB.status = FlxButton.NORMAL;
			vPad.buttonLeft.status = FlxButton.NORMAL;
			vPad.buttonRight.status = FlxButton.NORMAL;
			for (touch in FlxG.touches.list) {
				if (touch.justPressed) {
					if (touch.overlaps(vPad.buttonA) && _vPadJumpReleased && ((isTouching(FlxObject.FLOOR) || (_currentAirJump < airJumpLimit)))) {
						if (_jumpDelayLeft <= 0) {
							if (!isTouching(FlxObject.FLOOR) && _currentAirJump < airJumpLimit) _currentAirJump++;
							_jumpDelayLeft = _jumpDelay;
							jump();
							_vPadJumpReleased = false;
						}
					}
				}
				if (touch.pressed) {
					if (vPad.buttonLeft.overlapsPoint(touch.getScreenPosition())) moveLeft();
					if (vPad.buttonRight.overlapsPoint(touch.getScreenPosition())) moveRight();
					if (vPad.buttonB.overlapsPoint(touch.getScreenPosition())) shoot();
				}
				if (touch.justReleased) {
					if (vPad.buttonA.status == FlxButton.NORMAL) _vPadJumpReleased = true;
				}
			}		
			
			// Keypress Input
			if (!(FlxG.keys.pressed.RIGHT && FlxG.keys.pressed.LEFT)) {
				if (FlxG.keys.pressed.LEFT) moveLeft();
				else if (FlxG.keys.pressed.RIGHT) moveRight();
			}
			if (FlxG.keys.pressed.S || FlxG.gamepads.anyPressed(LogitechButtonID.FOUR)) shoot();
			// Drop to platform below by Down+Jump Key
			if (isTouching(FlxObject.FLOOR) && FlxG.keys.pressed.DOWN && (FlxG.keys.justPressed.D || FlxG.gamepads.anyJustPressed(LogitechButtonID.ONE))) {
				if (!noDrop) 
					y += 5;
			}else if ((FlxG.keys.justPressed.D || FlxG.gamepads.anyJustPressed(LogitechButtonID.ONE)) && 
			((isTouching(FlxObject.FLOOR) || (_currentAirJump < airJumpLimit)))) {
				if (_jumpDelayLeft <= 0) {
					if (!isTouching(FlxObject.FLOOR) && _currentAirJump < airJumpLimit) _currentAirJump++;
					_jumpDelayLeft = _jumpDelay;
					jump();
					_vPadJumpReleased = false;
				}
			}
			
			// Drop to platform below by Gesture Swipe Down
			if (isTouching(FlxObject.FLOOR) && !noDrop) {			
				if (FlxG.mouse.justPressed) {
					decentGesture = new FlxPoint(FlxG.mouse.x, FlxG.mouse.y);
				}
				else if (FlxG.mouse.pressed && decentGesture != null) {
					if (decentGesture.x + 50 > FlxG.mouse.x && decentGesture.x - 50 < FlxG.mouse.x) {
						if (decentGesture.y + 35 < FlxG.mouse.y) {
							y += 5;
							decentGesture = null;	
						}
					}
				}
				else if (FlxG.mouse.justReleased) {
					decentGesture = null;	
				}
			}
			//var touches:Array<FlxTouch> = FlxG.touches.list;
			//for (touch in touches) {
				//if (!(FlxG.keys.pressed.RIGHT && FlxG.keys.pressed.LEFT)) {
					//if (touch.overlaps(vPad.buttonLeft)) moveLeft();
					//if (touch.overlaps(vPad.buttonRight)) moveRight();
				//}
				//
				//if (FlxG.keys.pressed.S || touch.overlaps(vPad.buttonB) || FlxG.gamepads.anyPressed(LogitechButtonID.FOUR)) {
					//shoot();
				//}
				//
				//if (touch.overlaps(vPad.buttonA) && _vPadJumpReleased && ((isTouching(FlxObject.FLOOR) || (_currentAirJump < airJumpLimit)))) {
					//if (_jumpDelayLeft <= 0) {
						//if (!isTouching(FlxObject.FLOOR) && _currentAirJump < airJumpLimit) _currentAirJump++;
						//_jumpDelayLeft = _jumpDelay;
						//jump();
						//_vPadJumpReleased = false;
					//}
				//}
			//}			
			//
			//if (FlxG.keys.pressed.LEFT) moveLeft();
			//else if (FlxG.keys.pressed.RIGHT) moveRight();
			//if (FlxG.keys.pressed.S || FlxG.gamepads.anyPressed(LogitechButtonID.FOUR)) shoot();
			//// Drop to platform below by Down+Jump Key
			//if (isTouching(FlxObject.FLOOR) && FlxG.keys.pressed.DOWN && (FlxG.keys.justPressed.D || FlxG.gamepads.anyJustPressed(LogitechButtonID.ONE))) {
				//if (!noDrop) 
					//y += 5;
			//}else if ((FlxG.keys.justPressed.D || FlxG.gamepads.anyJustPressed(LogitechButtonID.ONE)) && 
			//((isTouching(FlxObject.FLOOR) || (_currentAirJump < airJumpLimit)))) {
				//if (_jumpDelayLeft <= 0) {
					//if (!isTouching(FlxObject.FLOOR) && _currentAirJump < airJumpLimit) _currentAirJump++;
					//_jumpDelayLeft = _jumpDelay;
					//jump();
					//_vPadJumpReleased = false;
				//}
			//}
			//
			//// Drop to platform below by Gesture Swipe Down
			//if (isTouching(FlxObject.FLOOR) && !noDrop) {			
				//if (FlxG.mouse.justPressed) {
					//decentGesture = new FlxPoint(FlxG.mouse.x, FlxG.mouse.y);
				//}
				//else if (FlxG.mouse.pressed && decentGesture != null) {
					//if (decentGesture.x + 50 > FlxG.mouse.x && decentGesture.x - 50 < FlxG.mouse.x) {
						//if (decentGesture.y + 35 < FlxG.mouse.y) {
							//y += 5;
							//decentGesture = null;	
						//}
					//}
				//}
				//else if (FlxG.mouse.justReleased) {
					//decentGesture = null;	
				//}
			//}
			//
			//var justReleases:Array<FlxTouch> = FlxG.touches.justReleased();
			//for (touch in justReleases) {
				//if (touch.overlaps(vPad.buttonA)) vPad.buttonA.status = FlxButton.NORMAL;
				//if (touch.overlaps(vPad.buttonB)) vPad.buttonB.status = FlxButton.NORMAL;
				//if (touch.overlaps(vPad.buttonLeft)) vPad.buttonLeft.status = FlxButton.NORMAL;
				//if (touch.overlaps(vPad.buttonRight)) vPad.buttonRight.status = FlxButton.NORMAL;
			//}
			//if (vPad.buttonA.status == FlxButton.NORMAL) _vPadJumpReleased = true;
		} else {
			vPad.set_visible(false);
		}
	}
	
	private function moveLeft() {
		acceleration.x = -((drag.x + moveSpeed) / 2);
		facing = FlxObject.LEFT;
		if (velocity.y < 0) {
			if (facing == FlxObject.LEFT) {
				velocity.x -= moveSpeed * .1 + jumpPower * .1;
			}
		}
		if (isTouching(FlxObject.FLOOR) && animation.curAnim.curIndex % 2 == 0) onMoveSound.play();
		
		if (weaponSprite != null) {
			weaponSprite.facing = facing;
			weaponSprite.offset.x = 1;	
		}
	}
	
	private function moveRight() {
		acceleration.x = (drag.x + moveSpeed) / 2;
		facing = FlxObject.RIGHT;
		if (velocity.y < 0) {
			if (facing == FlxObject.RIGHT) {
				velocity.x += moveSpeed * .1 + jumpPower * .1;
			}
		}
		if (isTouching(FlxObject.FLOOR) && animation.curAnim.curIndex % 2 == 0) onMoveSound.play();
		
		if (weaponSprite != null) {
			weaponSprite.facing = facing;
			weaponSprite.offset.x = -28;
		}
	}
	
	private function jump() {
		velocity.y = -(jumpPower);
		//_sndJump.play();
	}
	
	private function shoot() {
		if (weapon != null && checkBullet()) {
			if (facing == FlxObject.RIGHT)
				weapon.setBulletOffset(weaponAttribute.bulletOffsetWidth, weaponAttribute.bulletOffsetHeight);
			if (facing == FlxObject.LEFT)
				weapon.setBulletOffset( -weaponAttribute.bulletOffsetWidth + weaponAttribute.bulletWidth / 2, weaponAttribute.bulletOffsetHeight);
			if (weapon.fireFromAngle((facing == FlxObject.RIGHT ? FlxWeapon.BULLET_RIGHT : FlxWeapon.BULLET_LEFT))) {
				weaponAttribute.soundFXFire.play(true);
				if (isTouching(FlxObject.FLOOR) && velocity.x == 0) animation.play("shoot", true);
				weaponSprite.animation.play(weaponAttribute.animations[1][0], true);
				consumeBullet();
			}
		}
	}
	
	private function checkBullet():Bool {
		if (weaponAttribute.type == WeaponType.Handgun) {
			return weaponAttribute.bulletCost <= handgunBullet;
		}else if (weaponAttribute.type == WeaponType.SMG) {
			return weaponAttribute.bulletCost <= smgBullet;
		}else if (weaponAttribute.type == WeaponType.Shotgun) {
			return weaponAttribute.bulletCost <= shotgunBullet;
		}else if (weaponAttribute.type == WeaponType.Rifle) {
			return weaponAttribute.bulletCost <= rifleBullet;
		}
		return false;
	}
	
	private function consumeBullet() {
		if (weaponAttribute.type == WeaponType.Handgun) {
			handgunBullet -= weaponAttribute.bulletCost;
			ammoBar.setCurrentValue(handgunBullet - weaponAttribute.bulletCost);
		}else if (weaponAttribute.type == WeaponType.SMG) {
			ammoBar.setCurrentValue(smgBullet - weaponAttribute.bulletCost);
			smgBullet -= weaponAttribute.bulletCost;
		}else if (weaponAttribute.type == WeaponType.Shotgun) {
			ammoBar.setCurrentValue(shotgunBullet - weaponAttribute.bulletCost);
			shotgunBullet -= weaponAttribute.bulletCost;
		}else if (weaponAttribute.type == WeaponType.Rifle) {
			ammoBar.setCurrentValue(rifleBullet - weaponAttribute.bulletCost);
			rifleBullet -= weaponAttribute.bulletCost;
		}
	}
	
	private function levelUp() {
		level++;
		statPoint += 3;
		skillPoint++;
		exp = exp - maxExp;
		maxExp = Experience()[level];
	}

	public function Experience():Array<Int> {
		var exp:Array<Int> = [firstLevelXP];
		for (i in 1...100) {
			var nextExp:Int = Std.int(exp[i - 1] + Math.sqrt(exp[i - 1]) * Math.sqrt(i + 1));
			if (Std.string(nextExp).length <= 5) {
				nextExp = Math.ceil(nextExp / 10) * 10;
			}else if (Std.string(nextExp).length == 6) {
				nextExp = Math.ceil(nextExp / 100) * 100;
			}else if (Std.string(nextExp).length >= 7) {
				nextExp = Math.ceil(nextExp / 10000) * 10000;
			}
			exp.push(nextExp);
		}
		return exp;
	}
}