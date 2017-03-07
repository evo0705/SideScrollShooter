#ifndef INCLUDED_flixel_ui_ActionMode
#define INCLUDED_flixel_ui_ActionMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,ui,ActionMode)
namespace flixel{
namespace ui{


class ActionMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ActionMode_obj OBJ_;

	public:
		ActionMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.ui.ActionMode","\xa1","\x10","\xff","\x90"); }
		::String __ToString() const { return HX_HCSTRING("ActionMode.","\xb5","\xbb","\xef","\xc2") + tag; }

		static ::flixel::ui::ActionMode A;
		static inline ::flixel::ui::ActionMode A_dyn() { return A; }
		static ::flixel::ui::ActionMode A_B;
		static inline ::flixel::ui::ActionMode A_B_dyn() { return A_B; }
		static ::flixel::ui::ActionMode A_B_C;
		static inline ::flixel::ui::ActionMode A_B_C_dyn() { return A_B_C; }
		static ::flixel::ui::ActionMode A_B_X_Y;
		static inline ::flixel::ui::ActionMode A_B_X_Y_dyn() { return A_B_X_Y; }
		static ::flixel::ui::ActionMode NONE;
		static inline ::flixel::ui::ActionMode NONE_dyn() { return NONE; }
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_ActionMode */ 
