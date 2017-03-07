#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#define INCLUDED_flixel_addons_weapon_FlxBullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxBullet)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace weapon{


class HXCPP_CLASS_ATTRIBUTES  FlxBullet_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBullet_obj OBJ_;
		FlxBullet_obj();
		Void __construct(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.weapon.FlxBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBullet_obj > __new(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBullet","\x34","\x8c","\x7f","\x56"); }

		bool accelerates;
		int xAcceleration;
		int yAcceleration;
		int rndFactorAngle;
		int rndFactorSpeed;
		int rndFactorLifeSpan;
		Float lifespan;
		::flixel::addons::weapon::FlxWeapon _weapon;
		bool _animated;
		int _bulletSpeed;
		virtual Void addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addAnimation_dyn();

		virtual Void fire( Float FromX,Float FromY,Float VelX,Float VelY);
		Dynamic fire_dyn();

		virtual Void fireAtMouse( Float FromX,Float FromY,int Speed,hx::Null< bool >  RotateBulletTowards);
		Dynamic fireAtMouse_dyn();

		virtual Void fireAtTouch( Float FromX,Float FromY,::flixel::input::touch::FlxTouch Touch,int Speed,hx::Null< bool >  RotateBulletTowards);
		Dynamic fireAtTouch_dyn();

		virtual Void fireAtPosition( Float FromX,Float FromY,Float ToX,Float ToY,int Speed);
		Dynamic fireAtPosition_dyn();

		virtual Void fireAtTarget( Float FromX,Float FromY,::flixel::FlxSprite Target,int Speed);
		Dynamic fireAtTarget_dyn();

		virtual Void fireFromAngle( Float FromX,Float FromY,int FireAngle,int Speed);
		Dynamic fireFromAngle_dyn();

		virtual Void postFire( );
		Dynamic postFire_dyn();

		virtual Void update( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxBullet */ 
