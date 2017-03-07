#ifndef INCLUDED_Bullet
#define INCLUDED_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxBullet)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::flixel::addons::weapon::FlxBullet_obj{
	public:
		typedef ::flixel::addons::weapon::FlxBullet_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID,Float MinDamage,Float MaxDamage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Bullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bullet_obj > __new(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID,Float MinDamage,Float MaxDamage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09"); }

		Float minDamage;
		Float maxDamage;
		Float hitCount;
		Float _currentHitCount;
		virtual Void hitTarget( ::flixel::FlxSprite Target,bool AllowDamage);
		Dynamic hitTarget_dyn();

		virtual Void hitWall( ::flixel::FlxSprite Target);
		Dynamic hitWall_dyn();

		virtual Void kill( );

		virtual Void update( );

		virtual Void postFire( );

};


#endif /* INCLUDED_Bullet */ 
