#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#define INCLUDED_flixel_system_debug_DebuggerLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,DebuggerLayout)
namespace flixel{
namespace _system{
namespace debug{


class DebuggerLayout_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DebuggerLayout_obj OBJ_;

	public:
		DebuggerLayout_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.system.debug.DebuggerLayout","\x53","\xf0","\x62","\x55"); }
		::String __ToString() const { return HX_HCSTRING("DebuggerLayout.","\x03","\x68","\xbf","\x20") + tag; }

		static ::flixel::_system::debug::DebuggerLayout BIG;
		static inline ::flixel::_system::debug::DebuggerLayout BIG_dyn() { return BIG; }
		static ::flixel::_system::debug::DebuggerLayout LEFT;
		static inline ::flixel::_system::debug::DebuggerLayout LEFT_dyn() { return LEFT; }
		static ::flixel::_system::debug::DebuggerLayout MICRO;
		static inline ::flixel::_system::debug::DebuggerLayout MICRO_dyn() { return MICRO; }
		static ::flixel::_system::debug::DebuggerLayout RIGHT;
		static inline ::flixel::_system::debug::DebuggerLayout RIGHT_dyn() { return RIGHT; }
		static ::flixel::_system::debug::DebuggerLayout STANDARD;
		static inline ::flixel::_system::debug::DebuggerLayout STANDARD_dyn() { return STANDARD; }
		static ::flixel::_system::debug::DebuggerLayout TOP;
		static inline ::flixel::_system::debug::DebuggerLayout TOP_dyn() { return TOP; }
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_DebuggerLayout */ 
