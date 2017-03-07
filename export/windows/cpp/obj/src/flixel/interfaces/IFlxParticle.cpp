#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
namespace flixel{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"),
	HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b"),
	HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67"),
	HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4"),
	HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1"),
	HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"),
	HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4"),
	HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"),
	HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b"),
	HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42"),
	HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6"),
	HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa"),
	HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6"),
	HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c"),
	HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc"),
	HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.interfaces.IFlxParticle","\x51","\x7b","\xa5","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxParticle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace interfaces
