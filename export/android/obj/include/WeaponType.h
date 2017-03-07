#ifndef INCLUDED_WeaponType
#define INCLUDED_WeaponType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WeaponType)


class WeaponType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef WeaponType_obj OBJ_;

	public:
		WeaponType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("WeaponType","\xd6","\x57","\xa1","\x5f"); }
		::String __ToString() const { return HX_HCSTRING("WeaponType.","\x98","\x83","\x8b","\x4d") + tag; }

		static ::WeaponType Handgun;
		static inline ::WeaponType Handgun_dyn() { return Handgun; }
		static ::WeaponType Rifle;
		static inline ::WeaponType Rifle_dyn() { return Rifle; }
		static ::WeaponType SMG;
		static inline ::WeaponType SMG_dyn() { return SMG; }
		static ::WeaponType Shotgun;
		static inline ::WeaponType Shotgun_dyn() { return Shotgun; }
};


#endif /* INCLUDED_WeaponType */ 
