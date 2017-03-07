#include <hxcpp.h>

#ifndef INCLUDED_WeaponType
#include <WeaponType.h>
#endif

::WeaponType WeaponType_obj::Handgun;

::WeaponType WeaponType_obj::Rifle;

::WeaponType WeaponType_obj::SMG;

::WeaponType WeaponType_obj::Shotgun;

HX_DEFINE_CREATE_ENUM(WeaponType_obj)

int WeaponType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13")) return 0;
	if (inName==HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c")) return 3;
	if (inName==HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00")) return 1;
	if (inName==HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47")) return 2;
	return super::__FindIndex(inName);
}

int WeaponType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13")) return 0;
	if (inName==HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c")) return 0;
	if (inName==HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00")) return 0;
	if (inName==HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic WeaponType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13")) return Handgun;
	if (inName==HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c")) return Rifle;
	if (inName==HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00")) return SMG;
	if (inName==HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47")) return Shotgun;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13"),
	HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00"),
	HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47"),
	HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeaponType_obj::Handgun,"Handgun");
	HX_MARK_MEMBER_NAME(WeaponType_obj::Rifle,"Rifle");
	HX_MARK_MEMBER_NAME(WeaponType_obj::SMG,"SMG");
	HX_MARK_MEMBER_NAME(WeaponType_obj::Shotgun,"Shotgun");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeaponType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WeaponType_obj::Handgun,"Handgun");
	HX_VISIT_MEMBER_NAME(WeaponType_obj::Rifle,"Rifle");
	HX_VISIT_MEMBER_NAME(WeaponType_obj::SMG,"SMG");
	HX_VISIT_MEMBER_NAME(WeaponType_obj::Shotgun,"Shotgun");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class WeaponType_obj::__mClass;

Dynamic __Create_WeaponType_obj() { return new WeaponType_obj; }

void WeaponType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("WeaponType","\xd6","\x57","\xa1","\x5f"), hx::TCanCast< WeaponType_obj >,sStaticFields,sMemberFields,
	&__Create_WeaponType_obj, &__Create,
	&super::__SGetClass(), &CreateWeaponType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void WeaponType_obj::__boot()
{
hx::Static(Handgun) = hx::CreateEnum< WeaponType_obj >(HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13"),0);
hx::Static(Rifle) = hx::CreateEnum< WeaponType_obj >(HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c"),3);
hx::Static(SMG) = hx::CreateEnum< WeaponType_obj >(HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00"),1);
hx::Static(Shotgun) = hx::CreateEnum< WeaponType_obj >(HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47"),2);
}


