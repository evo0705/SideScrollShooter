#ifndef INCLUDED_BarType
#define INCLUDED_BarType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BarType)


class BarType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BarType_obj OBJ_;

	public:
		BarType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("BarType","\x0d","\xde","\xb6","\x5c"); }
		::String __ToString() const { return HX_HCSTRING("BarType.","\x81","\x6d","\x4b","\xc3") + tag; }

		static ::BarType AMMO;
		static inline ::BarType AMMO_dyn() { return AMMO; }
		static ::BarType Battery;
		static inline ::BarType Battery_dyn() { return Battery; }
		static ::BarType EXP;
		static inline ::BarType EXP_dyn() { return EXP; }
		static ::BarType Health;
		static inline ::BarType Health_dyn() { return Health; }
};


#endif /* INCLUDED_BarType */ 
