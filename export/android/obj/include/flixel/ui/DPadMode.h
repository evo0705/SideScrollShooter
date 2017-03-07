#ifndef INCLUDED_flixel_ui_DPadMode
#define INCLUDED_flixel_ui_DPadMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,ui,DPadMode)
namespace flixel{
namespace ui{


class DPadMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DPadMode_obj OBJ_;

	public:
		DPadMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.ui.DPadMode","\xba","\x8a","\xf6","\x92"); }
		::String __ToString() const { return HX_HCSTRING("DPadMode.","\x7c","\x35","\xbb","\x44") + tag; }

		static ::flixel::ui::DPadMode FULL;
		static inline ::flixel::ui::DPadMode FULL_dyn() { return FULL; }
		static ::flixel::ui::DPadMode LEFT_RIGHT;
		static inline ::flixel::ui::DPadMode LEFT_RIGHT_dyn() { return LEFT_RIGHT; }
		static ::flixel::ui::DPadMode NONE;
		static inline ::flixel::ui::DPadMode NONE_dyn() { return NONE; }
		static ::flixel::ui::DPadMode UP_DOWN;
		static inline ::flixel::ui::DPadMode UP_DOWN_dyn() { return UP_DOWN; }
		static ::flixel::ui::DPadMode UP_LEFT_RIGHT;
		static inline ::flixel::ui::DPadMode UP_LEFT_RIGHT_dyn() { return UP_LEFT_RIGHT; }
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_DPadMode */ 
