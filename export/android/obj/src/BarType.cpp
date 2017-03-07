#include <hxcpp.h>

#ifndef INCLUDED_BarType
#include <BarType.h>
#endif

::BarType BarType_obj::AMMO;

::BarType BarType_obj::Battery;

::BarType BarType_obj::EXP;

::BarType BarType_obj::Health;

HX_DEFINE_CREATE_ENUM(BarType_obj)

int BarType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AMMO","\x4e","\x8f","\x31","\x2b")) return 3;
	if (inName==HX_HCSTRING("Battery","\xad","\xaf","\x9b","\x98")) return 1;
	if (inName==HX_HCSTRING("EXP","\x7d","\xa8","\x34","\x00")) return 2;
	if (inName==HX_HCSTRING("Health","\xbc","\x9c","\x9a","\x31")) return 0;
	return super::__FindIndex(inName);
}

int BarType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AMMO","\x4e","\x8f","\x31","\x2b")) return 0;
	if (inName==HX_HCSTRING("Battery","\xad","\xaf","\x9b","\x98")) return 0;
	if (inName==HX_HCSTRING("EXP","\x7d","\xa8","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("Health","\xbc","\x9c","\x9a","\x31")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BarType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AMMO","\x4e","\x8f","\x31","\x2b")) return AMMO;
	if (inName==HX_HCSTRING("Battery","\xad","\xaf","\x9b","\x98")) return Battery;
	if (inName==HX_HCSTRING("EXP","\x7d","\xa8","\x34","\x00")) return EXP;
	if (inName==HX_HCSTRING("Health","\xbc","\x9c","\x9a","\x31")) return Health;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Health","\xbc","\x9c","\x9a","\x31"),
	HX_HCSTRING("Battery","\xad","\xaf","\x9b","\x98"),
	HX_HCSTRING("EXP","\x7d","\xa8","\x34","\x00"),
	HX_HCSTRING("AMMO","\x4e","\x8f","\x31","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BarType_obj::AMMO,"AMMO");
	HX_MARK_MEMBER_NAME(BarType_obj::Battery,"Battery");
	HX_MARK_MEMBER_NAME(BarType_obj::EXP,"EXP");
	HX_MARK_MEMBER_NAME(BarType_obj::Health,"Health");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BarType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BarType_obj::AMMO,"AMMO");
	HX_VISIT_MEMBER_NAME(BarType_obj::Battery,"Battery");
	HX_VISIT_MEMBER_NAME(BarType_obj::EXP,"EXP");
	HX_VISIT_MEMBER_NAME(BarType_obj::Health,"Health");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BarType_obj::__mClass;

Dynamic __Create_BarType_obj() { return new BarType_obj; }

void BarType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("BarType","\x0d","\xde","\xb6","\x5c"), hx::TCanCast< BarType_obj >,sStaticFields,sMemberFields,
	&__Create_BarType_obj, &__Create,
	&super::__SGetClass(), &CreateBarType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BarType_obj::__boot()
{
hx::Static(AMMO) = hx::CreateEnum< BarType_obj >(HX_HCSTRING("AMMO","\x4e","\x8f","\x31","\x2b"),3);
hx::Static(Battery) = hx::CreateEnum< BarType_obj >(HX_HCSTRING("Battery","\xad","\xaf","\x9b","\x98"),1);
hx::Static(EXP) = hx::CreateEnum< BarType_obj >(HX_HCSTRING("EXP","\x7d","\xa8","\x34","\x00"),2);
hx::Static(Health) = hx::CreateEnum< BarType_obj >(HX_HCSTRING("Health","\xbc","\x9c","\x9a","\x31"),0);
}


