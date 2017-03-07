#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Bars)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(WeaponAttribute)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,ui,FlxVirtualPad)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Asset,::flixel::FlxState State);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Asset,::flixel::FlxState State);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::String name;
		Float moveSpeed;
		Float jumpPower;
		::flixel::addons::weapon::FlxWeapon weapon;
		::WeaponAttribute weaponAttribute;
		int airJumpLimit;
		bool jumpBoost;
		int level;
		int firstLevelXP;
		Float maxHealth;
		int maxBattery;
		int maxExp;
		int battery;
		int exp;
		int endurance;
		int handgunPro;
		int smgPro;
		int shotgunPro;
		int riflePro;
		int handgunBullet;
		int smgBullet;
		int shotgunBullet;
		int rifleBullet;
		int maxHandgunBullet;
		int maxSmgBullet;
		int maxShotgunBullet;
		int maxRifleBullet;
		int statPoint;
		int skillPoint;
		::flixel::ui::FlxVirtualPad vPad;
		bool controllable;
		bool noDrop;
		::flixel::util::FlxPoint _spriteSize;
		bool _secondJumpReady;
		bool _vPadJumpReleased;
		int _currentAirJump;
		Float _jumpDelay;
		Float _jumpDelayLeft;
		::flixel::_system::FlxSound onJumpSound;
		::flixel::_system::FlxSound onMoveSound;
		::flixel::_system::FlxSound onStepSound;
		::Bars healthBar;
		::Bars batteryBar;
		::Bars expBar;
		::Bars ammoBar;
		::flixel::group::FlxGroup hud;
		::flixel::util::FlxPoint decentGesture;
		::flixel::FlxState gameState;
		virtual Void resetMaxHealth( Float Value);
		Dynamic resetMaxHealth_dyn();

		virtual Void addHealth( Float value);
		Dynamic addHealth_dyn();

		::flixel::FlxSprite weaponSprite;
		::flixel::addons::weapon::FlxWeapon weaponToRemove;
		virtual Void setWeapon( ::flixel::util::FlxRect Bounds,::WeaponAttribute Attribute);
		Dynamic setWeapon_dyn();

		virtual Void createVirtualPad( );
		Dynamic createVirtualPad_dyn();

		virtual Void update( );

		virtual Void playAnimation( );
		Dynamic playAnimation_dyn();

		virtual Void controls( );
		Dynamic controls_dyn();

		virtual Void moveLeft( );
		Dynamic moveLeft_dyn();

		virtual Void moveRight( );
		Dynamic moveRight_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void shoot( );
		Dynamic shoot_dyn();

		virtual bool checkBullet( );
		Dynamic checkBullet_dyn();

		virtual Void consumeBullet( );
		Dynamic consumeBullet_dyn();

		virtual Void levelUp( );
		Dynamic levelUp_dyn();

		virtual Array< int > Experience( );
		Dynamic Experience_dyn();

};


#endif /* INCLUDED_Player */ 
