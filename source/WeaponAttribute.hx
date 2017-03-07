package;
import flixel.FlxG;
import flixel.system.FlxSound;
import flixel.util.FlxPoint;
import openfl.utils.Object;

/**
 * ...
 * @author 
 */
enum WeaponID {
	Handgun001;
	Handgun002;
	Handgun003;
	Handgun004;
	SMG001;
	SMG002;
	SMG003;
}

enum WeaponType {
	Handgun;
	SMG;
	Shotgun;
	Rifle;
}

class WeaponAttribute
{
	public static var MAX_BULLET_SPEED:Float = 800;
	
	public var weaponID:WeaponID;
	public var type:WeaponType;
	public var brand:String;
	public var name:String;
	public var asset:String;
	public var fireRate:Int;
	public var bulletCount:Int = 10;
	public var bulletCost:Int;
	public var minDamage:Float;
	public var maxDamage:Float;
	public var soundFXFire:FlxSound;
	public var soundFXHit:FlxSound;
	public var soundFXProjecting:FlxSound;
	public var animations:Array<Array<Object>>;
	public var bulletAsset:String;
	public var bulletWidth:Int;
	public var bulletHeight:Int;
	public var bulletOffsetWidth:Float = 0;
	public var bulletOffsetHeight:Float = 0;
	public var bulletAnimations:Array<Array<Object>>;
	public var bulletSpeed:Int;
	public var bulletLifeSpan:Float;
	public var randomAngle:Int = 0;
	public var randomSpeed:Int = 0;
	public var randomPosition:FlxPoint = new FlxPoint(0, 0);
	public var randomLifeSpan:Int = 0;
	public var elasticity:Float = 0;

	public function new(WID:WeaponID) 
	{
		weaponID = WID;
		if (WID == Handgun004) {
			setAttribute(Handgun, "Terra", "Light Blaster", AssetPaths.gun_0001__png, AssetPaths.bullet_0002__png, 
			500, 2, 200, 0, 1, 3, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 3, 3, 3, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0001__ogg));
			randomAngle = 1;
		}else if (WID == Handgun001) {
			setAttribute(Handgun, "Daisy", "9mm Pistol", AssetPaths.gun_0001__png, AssetPaths.bullet_0003__png, 
			500, 2, 180, 1, 5, 8, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 3, 3, 3, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomAngle = 1;
		}else if (WID == Handgun002) {
			setAttribute(Handgun, "Daisy", "9mm Powered Pistol", AssetPaths.gun_0001__png, AssetPaths.bullet_0003__png,
			500, 2, 190, 1, 10, 20, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 2, 2, 2, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomAngle = 1;
		}else if (WID == Handgun003) {
			setAttribute(Handgun, "Daisy", "SA Compact", AssetPaths.gun_0001__png, AssetPaths.bullet_0003__png,
			500, 2, 200, 1, 25, 40, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 2, 2, 2, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomAngle = 1;
		}else if (WID == SMG001) {
			setAttribute(SMG, "Jupitec", "P30", AssetPaths.gun_0001__png, AssetPaths.bullet_0002__png,
			150, 2, 200, 1, 3, 5, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 2, 2, 2, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomPosition = new FlxPoint(0, 1);
			randomAngle = 5;
		}else if (WID == SMG002) {
			setAttribute(SMG, "Jupitec", "P47", AssetPaths.gun_0001__png, AssetPaths.bullet_0002__png, 
			150, 2, 220, 1, 5, 12, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 2, 2, 2, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomPosition = new FlxPoint(0, 1);
			randomAngle = 5;
		}else if (WID == SMG003) {
			setAttribute(SMG, "Jupitec", "P60", AssetPaths.gun_0001__png, AssetPaths.bullet_0003__png, 
			50, 2, 300, 1, 15, 30, 10, 9, 26, 10.5,
			[["idle", [2], 3, true], ["fire", [3, 2, 2, 2, 2, 2, 2, 2, 2, 2], 30, false]],
			[["fire", [0], 10, true], ["kill", [1, 2, 3], 10, false]], FlxG.sound.load(AssetPaths.gun_0002__ogg));
			randomPosition = new FlxPoint(0, 1);
			randomAngle = 5;
		}
		
		bulletCount = Math.ceil(1000 / fireRate * (bulletLifeSpan + randomLifeSpan));
	}
	
	/**
	 * Set the basic attribute of the weapon and bullets
	 * 
	 * @param	Type		Type of the Weapon e.g Handgun, SMG.
	 * @param	Brand		The brand or manufacturer of the weapon.
	 * @param	Name		The name of the weapon.
	 * @param	Asset		The image asset of weapon. (The weapon owner is holding)
	 * @param	BulletAsset		The image asset of bullet.
	 * @param	FireRate		How fast to fire next bullet in milisecond. (100 is faster than 200)
	 * @param	BulletCount		How many bullets to be loaded.
	 * @param	BulletCost		How many bullet costs to fire once.
	 * @param	MinDamage		The minimum damage.
	 * @param	MaxDamage		The maximum damage.
	 * @param	BulletWidth		The width of the bullet.
	 * @param	BulletHeight		The height of the bullet.
	 * @param	BulletOffsetWidth		Set this to make the bullet looks like firing from the weapon host.
	 * @param	BulletOffsetHeight		Set this to make the bullet looks like firing from the weapon host.
	 * @param	BulletSpeed		The projection speed of the bullet.
	 * @param	BulletLifeSpan		How long does the bullet stays alive.
	 * @param	Animations		Animation of the weapon, e.g [["fire", [0], 15, true], ["kill", [1, 2, 3], 15, false]].
	 * @param	BulletAnimations		Animation of the bullets, e.g [["fire", [0], 15, true], ["kill", [1, 2, 3], 15, false]].
	 * @param	SoundFXFire		The sound when bullet is being fired.
	 */
	private inline function setAttribute(WType:WeaponType, Brand:String, Name:String, Asset:String, BulletAsset:String, FireRate:Int,
	BulletLifeSpan:Float, BulletSpeed:Int, BulletCost:Int, MinDamage:Float, MaxDamage:Float, BulletWidth:Int, BulletHeight:Int, 
	BulletOffsetWidth:Float, BulletOffsetHeight:Float, Animations:Array<Array<Object>>, BulletAnimations:Array<Array<Object>>, SoundFXFire:FlxSound) {
		type = WType; brand = Brand; name = Name; asset = Asset; bulletAsset = BulletAsset; fireRate = FireRate; 
		bulletCost = BulletCost; minDamage = MinDamage; maxDamage = MaxDamage; animations = Animations; bulletWidth = BulletWidth; 
		bulletOffsetWidth = BulletOffsetWidth; bulletHeight = BulletHeight; bulletOffsetHeight = BulletOffsetHeight; 
		bulletSpeed = BulletSpeed; bulletLifeSpan = BulletLifeSpan; bulletAnimations = BulletAnimations; soundFXFire = SoundFXFire;
	}
}