#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#define INCLUDED_flixel_system_debug_ButtonAlignment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,ButtonAlignment)
namespace flixel{
namespace _system{
namespace debug{


class ButtonAlignment_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ButtonAlignment_obj OBJ_;

	public:
		ButtonAlignment_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.system.debug.ButtonAlignment","\xe9","\x8a","\xfd","\x14"); }
		::String __ToString() const { return HX_HCSTRING("ButtonAlignment.","\x9d","\x88","\x59","\x27") + tag; }

		static ::flixel::_system::debug::ButtonAlignment LEFT;
		static inline ::flixel::_system::debug::ButtonAlignment LEFT_dyn() { return LEFT; }
		static ::flixel::_system::debug::ButtonAlignment MIDDLE;
		static inline ::flixel::_system::debug::ButtonAlignment MIDDLE_dyn() { return MIDDLE; }
		static ::flixel::_system::debug::ButtonAlignment RIGHT;
		static inline ::flixel::_system::debug::ButtonAlignment RIGHT_dyn() { return RIGHT; }
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_ButtonAlignment */ 
