#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace openfl{
namespace ui{

::openfl::ui::MultitouchInputMode MultitouchInputMode_obj::GESTURE;

::openfl::ui::MultitouchInputMode MultitouchInputMode_obj::NONE;

::openfl::ui::MultitouchInputMode MultitouchInputMode_obj::TOUCH_POINT;

HX_DEFINE_CREATE_ENUM(MultitouchInputMode_obj)

int MultitouchInputMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21")) return 2;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94")) return 1;
	return super::__FindIndex(inName);
}

int MultitouchInputMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MultitouchInputMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21")) return GESTURE;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94")) return TOUCH_POINT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94"),
	HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultitouchInputMode_obj::GESTURE,"GESTURE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(MultitouchInputMode_obj::TOUCH_POINT,"TOUCH_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_obj::GESTURE,"GESTURE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(MultitouchInputMode_obj::TOUCH_POINT,"TOUCH_POINT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MultitouchInputMode_obj::__mClass;

Dynamic __Create_MultitouchInputMode_obj() { return new MultitouchInputMode_obj; }

void MultitouchInputMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.ui.MultitouchInputMode","\xeb","\xaa","\xbf","\xb3"), hx::TCanCast< MultitouchInputMode_obj >,sStaticFields,sMemberFields,
	&__Create_MultitouchInputMode_obj, &__Create,
	&super::__SGetClass(), &CreateMultitouchInputMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MultitouchInputMode_obj::__boot()
{
hx::Static(GESTURE) = hx::CreateEnum< MultitouchInputMode_obj >(HX_HCSTRING("GESTURE","\x69","\xae","\x1c","\x21"),2);
hx::Static(NONE) = hx::CreateEnum< MultitouchInputMode_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(TOUCH_POINT) = hx::CreateEnum< MultitouchInputMode_obj >(HX_HCSTRING("TOUCH_POINT","\x50","\x84","\xc0","\x94"),1);
}


} // end namespace openfl
} // end namespace ui
