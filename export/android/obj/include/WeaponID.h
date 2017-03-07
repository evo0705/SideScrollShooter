#ifndef INCLUDED_WeaponID
#define INCLUDED_WeaponID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WeaponID)


class WeaponID_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef WeaponID_obj OBJ_;

	public:
		WeaponID_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("WeaponID","\xd7","\x01","\x4e","\x67"); }
		::String __ToString() const { return HX_HCSTRING("WeaponID.","\x77","\x9a","\xf3","\xfc") + tag; }

		static ::WeaponID Handgun001;
		static inline ::WeaponID Handgun001_dyn() { return Handgun001; }
		static ::WeaponID Handgun002;
		static inline ::WeaponID Handgun002_dyn() { return Handgun002; }
		static ::WeaponID Handgun003;
		static inline ::WeaponID Handgun003_dyn() { return Handgun003; }
		static ::WeaponID Handgun004;
		static inline ::WeaponID Handgun004_dyn() { return Handgun004; }
		static ::WeaponID SMG001;
		static inline ::WeaponID SMG001_dyn() { return SMG001; }
		static ::WeaponID SMG002;
		static inline ::WeaponID SMG002_dyn() { return SMG002; }
		static ::WeaponID SMG003;
		static inline ::WeaponID SMG003_dyn() { return SMG003; }
};


#endif /* INCLUDED_WeaponID */ 
