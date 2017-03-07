#ifndef INCLUDED_WeaponAttribute
#define INCLUDED_WeaponAttribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WeaponAttribute)
HX_DECLARE_CLASS0(WeaponID)
HX_DECLARE_CLASS0(WeaponType)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  WeaponAttribute_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeaponAttribute_obj OBJ_;
		WeaponAttribute_obj();
		Void __construct(::WeaponID WID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="WeaponAttribute")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeaponAttribute_obj > __new(::WeaponID WID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeaponAttribute_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WeaponAttribute","\x80","\x05","\xc8","\xbe"); }

		static void __boot();
		::WeaponID weaponID;
		::WeaponType type;
		::String brand;
		::String name;
		::String asset;
		int fireRate;
		int bulletCount;
		int bulletCost;
		Float minDamage;
		Float maxDamage;
		::flixel::_system::FlxSound soundFXFire;
		::flixel::_system::FlxSound soundFXHit;
		::flixel::_system::FlxSound soundFXProjecting;
		Array< ::Dynamic > animations;
		::String bulletAsset;
		int bulletWidth;
		int bulletHeight;
		Float bulletOffsetWidth;
		Float bulletOffsetHeight;
		Array< ::Dynamic > bulletAnimations;
		int bulletSpeed;
		Float bulletLifeSpan;
		int randomAngle;
		int randomSpeed;
		::flixel::util::FlxPoint randomPosition;
		int randomLifeSpan;
		Float elasticity;
		virtual Void setAttribute( ::WeaponType WType,::String Brand,::String Name,::String Asset,::String BulletAsset,int FireRate,Float BulletLifeSpan,int BulletSpeed,int BulletCost,Float MinDamage,Float MaxDamage,int BulletWidth,int BulletHeight,Float BulletOffsetWidth,Float BulletOffsetHeight,Array< ::Dynamic > Animations,Array< ::Dynamic > BulletAnimations,::flixel::_system::FlxSound SoundFXFire);
		Dynamic setAttribute_dyn();

		static Float MAX_BULLET_SPEED;
};


#endif /* INCLUDED_WeaponAttribute */ 
