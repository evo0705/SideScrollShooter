#include <hxcpp.h>

#ifndef INCLUDED_WeaponID
#include <WeaponID.h>
#endif

::WeaponID WeaponID_obj::Handgun001;

::WeaponID WeaponID_obj::Handgun002;

::WeaponID WeaponID_obj::Handgun003;

::WeaponID WeaponID_obj::Handgun004;

::WeaponID WeaponID_obj::SMG001;

::WeaponID WeaponID_obj::SMG002;

::WeaponID WeaponID_obj::SMG003;

HX_DEFINE_CREATE_ENUM(WeaponID_obj)

int WeaponID_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Handgun001","\x80","\x04","\xf8","\xa9")) return 0;
	if (inName==HX_HCSTRING("Handgun002","\x81","\x04","\xf8","\xa9")) return 1;
	if (inName==HX_HCSTRING("Handgun003","\x82","\x04","\xf8","\xa9")) return 2;
	if (inName==HX_HCSTRING("Handgun004","\x83","\x04","\xf8","\xa9")) return 3;
	if (inName==HX_HCSTRING("SMG001","\xe4","\x59","\x8c","\xb4")) return 4;
	if (inName==HX_HCSTRING("SMG002","\xe5","\x59","\x8c","\xb4")) return 5;
	if (inName==HX_HCSTRING("SMG003","\xe6","\x59","\x8c","\xb4")) return 6;
	return super::__FindIndex(inName);
}

int WeaponID_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Handgun001","\x80","\x04","\xf8","\xa9")) return 0;
	if (inName==HX_HCSTRING("Handgun002","\x81","\x04","\xf8","\xa9")) return 0;
	if (inName==HX_HCSTRING("Handgun003","\x82","\x04","\xf8","\xa9")) return 0;
	if (inName==HX_HCSTRING("Handgun004","\x83","\x04","\xf8","\xa9")) return 0;
	if (inName==HX_HCSTRING("SMG001","\xe4","\x59","\x8c","\xb4")) return 0;
	if (inName==HX_HCSTRING("SMG002","\xe5","\x59","\x8c","\xb4")) return 0;
	if (inName==HX_HCSTRING("SMG003","\xe6","\x59","\x8c","\xb4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic WeaponID_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Handgun001","\x80","\x04","\xf8","\xa9")) return Handgun001;
	if (inName==HX_HCSTRING("Handgun002","\x81","\x04","\xf8","\xa9")) return Handgun002;
	if (inName==HX_HCSTRING("Handgun003","\x82","\x04","\xf8","\xa9")) return Handgun003;
	if (inName==HX_HCSTRING("Handgun004","\x83","\x04","\xf8","\xa9")) return Handgun004;
	if (inName==HX_HCSTRING("SMG001","\xe4","\x59","\x8c","\xb4")) return SMG001;
	if (inName==HX_HCSTRING("SMG002","\xe5","\x59","\x8c","\xb4")) return SMG002;
	if (inName==HX_HCSTRING("SMG003","\xe6","\x59","\x8c","\xb4")) return SMG003;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Handgun001","\x80","\x04","\xf8","\xa9"),
	HX_HCSTRING("Handgun002","\x81","\x04","\xf8","\xa9"),
	HX_HCSTRING("Handgun003","\x82","\x04","\xf8","\xa9"),
	HX_HCSTRING("Handgun004","\x83","\x04","\xf8","\xa9"),
	HX_HCSTRING("SMG001","\xe4","\x59","\x8c","\xb4"),
	HX_HCSTRING("SMG002","\xe5","\x59","\x8c","\xb4"),
	HX_HCSTRING("SMG003","\xe6","\x59","\x8c","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeaponID_obj::Handgun001,"Handgun001");
	HX_MARK_MEMBER_NAME(WeaponID_obj::Handgun002,"Handgun002");
	HX_MARK_MEMBER_NAME(WeaponID_obj::Handgun003,"Handgun003");
	HX_MARK_MEMBER_NAME(WeaponID_obj::Handgun004,"Handgun004");
	HX_MARK_MEMBER_NAME(WeaponID_obj::SMG001,"SMG001");
	HX_MARK_MEMBER_NAME(WeaponID_obj::SMG002,"SMG002");
	HX_MARK_MEMBER_NAME(WeaponID_obj::SMG003,"SMG003");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeaponID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::Handgun001,"Handgun001");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::Handgun002,"Handgun002");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::Handgun003,"Handgun003");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::Handgun004,"Handgun004");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::SMG001,"SMG001");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::SMG002,"SMG002");
	HX_VISIT_MEMBER_NAME(WeaponID_obj::SMG003,"SMG003");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class WeaponID_obj::__mClass;

Dynamic __Create_WeaponID_obj() { return new WeaponID_obj; }

void WeaponID_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("WeaponID","\xd7","\x01","\x4e","\x67"), hx::TCanCast< WeaponID_obj >,sStaticFields,sMemberFields,
	&__Create_WeaponID_obj, &__Create,
	&super::__SGetClass(), &CreateWeaponID_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void WeaponID_obj::__boot()
{
hx::Static(Handgun001) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("Handgun001","\x80","\x04","\xf8","\xa9"),0);
hx::Static(Handgun002) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("Handgun002","\x81","\x04","\xf8","\xa9"),1);
hx::Static(Handgun003) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("Handgun003","\x82","\x04","\xf8","\xa9"),2);
hx::Static(Handgun004) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("Handgun004","\x83","\x04","\xf8","\xa9"),3);
hx::Static(SMG001) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("SMG001","\xe4","\x59","\x8c","\xb4"),4);
hx::Static(SMG002) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("SMG002","\xe5","\x59","\x8c","\xb4"),5);
hx::Static(SMG003) = hx::CreateEnum< WeaponID_obj >(HX_HCSTRING("SMG003","\xe6","\x59","\x8c","\xb4"),6);
}


