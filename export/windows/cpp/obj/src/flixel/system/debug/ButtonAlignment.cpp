#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

::flixel::_system::debug::ButtonAlignment ButtonAlignment_obj::LEFT;

::flixel::_system::debug::ButtonAlignment ButtonAlignment_obj::MIDDLE;

::flixel::_system::debug::ButtonAlignment ButtonAlignment_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(ButtonAlignment_obj)

int ButtonAlignment_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe")) return 1;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 2;
	return super::__FindIndex(inName);
}

int ButtonAlignment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ButtonAlignment_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe")) return MIDDLE;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(ButtonAlignment_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(ButtonAlignment_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ButtonAlignment_obj::__mClass;

Dynamic __Create_ButtonAlignment_obj() { return new ButtonAlignment_obj; }

void ButtonAlignment_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.system.debug.ButtonAlignment","\xe9","\x8a","\xfd","\x14"), hx::TCanCast< ButtonAlignment_obj >,sStaticFields,sMemberFields,
	&__Create_ButtonAlignment_obj, &__Create,
	&super::__SGetClass(), &CreateButtonAlignment_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ButtonAlignment_obj::__boot()
{
hx::Static(LEFT) = hx::CreateEnum< ButtonAlignment_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),0);
hx::Static(MIDDLE) = hx::CreateEnum< ButtonAlignment_obj >(HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe"),1);
hx::Static(RIGHT) = hx::CreateEnum< ButtonAlignment_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),2);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
