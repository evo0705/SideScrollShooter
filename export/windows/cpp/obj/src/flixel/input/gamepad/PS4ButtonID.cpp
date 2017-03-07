#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_PS4ButtonID
#include <flixel/input/gamepad/PS4ButtonID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void PS4ButtonID_obj::__construct()
{
	return null();
}

//PS4ButtonID_obj::~PS4ButtonID_obj() { }

Dynamic PS4ButtonID_obj::__CreateEmpty() { return  new PS4ButtonID_obj; }
hx::ObjectPtr< PS4ButtonID_obj > PS4ButtonID_obj::__new()
{  hx::ObjectPtr< PS4ButtonID_obj > _result_ = new PS4ButtonID_obj();
	_result_->__construct();
	return _result_;}

Dynamic PS4ButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PS4ButtonID_obj > _result_ = new PS4ButtonID_obj();
	_result_->__construct();
	return _result_;}

int PS4ButtonID_obj::TRIANGLE_BUTTON;

int PS4ButtonID_obj::CIRCLE_BUTTON;

int PS4ButtonID_obj::X_BUTTON;

int PS4ButtonID_obj::SQUARE_BUTTON;

int PS4ButtonID_obj::L1_BUTTON;

int PS4ButtonID_obj::R1_BUTTON;

int PS4ButtonID_obj::L2_BUTTON;

int PS4ButtonID_obj::R2_BUTTON;

int PS4ButtonID_obj::SHARE_BUTTON;

int PS4ButtonID_obj::START_BUTTON;

int PS4ButtonID_obj::PS_BUTTON;

int PS4ButtonID_obj::TOUCHPAD;

int PS4ButtonID_obj::LEFT_ANALOGUE_BUTTON;

int PS4ButtonID_obj::RIGHT_ANALOGUE_BUTTON;

int PS4ButtonID_obj::LEFT_ANALOGUE_X;

int PS4ButtonID_obj::LEFT_ANALOGUE_Y;

int PS4ButtonID_obj::RIGHT_ANALOGUE_X;

int PS4ButtonID_obj::RIGHT_ANALOGUE_Y;

int PS4ButtonID_obj::L2_BUTTON_Y;

int PS4ButtonID_obj::R2_BUTTON_Y;


PS4ButtonID_obj::PS4ButtonID_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PS4ButtonID_obj::TRIANGLE_BUTTON,HX_HCSTRING("TRIANGLE_BUTTON","\xc9","\xb9","\x1d","\x71")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::CIRCLE_BUTTON,HX_HCSTRING("CIRCLE_BUTTON","\x81","\xe3","\xd0","\xa0")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::X_BUTTON,HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::SQUARE_BUTTON,HX_HCSTRING("SQUARE_BUTTON","\x94","\xf0","\x82","\xfe")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::L1_BUTTON,HX_HCSTRING("L1_BUTTON","\xcc","\x23","\x2d","\x8d")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::R1_BUTTON,HX_HCSTRING("R1_BUTTON","\xd2","\x99","\xd5","\x7e")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::L2_BUTTON,HX_HCSTRING("L2_BUTTON","\xeb","\x95","\x5f","\xc6")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::R2_BUTTON,HX_HCSTRING("R2_BUTTON","\xf1","\x0b","\x08","\xb8")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::SHARE_BUTTON,HX_HCSTRING("SHARE_BUTTON","\xb2","\xa8","\x4d","\x59")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::START_BUTTON,HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::PS_BUTTON,HX_HCSTRING("PS_BUTTON","\xee","\xef","\xa5","\x71")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::TOUCHPAD,HX_HCSTRING("TOUCHPAD","\xf4","\xea","\xaf","\x59")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::LEFT_ANALOGUE_BUTTON,HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::RIGHT_ANALOGUE_BUTTON,HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::L2_BUTTON_Y,HX_HCSTRING("L2_BUTTON_Y","\xc5","\x79","\xe1","\xcd")},
	{hx::fsInt,(void *) &PS4ButtonID_obj::R2_BUTTON_Y,HX_HCSTRING("R2_BUTTON_Y","\x4b","\xfd","\x17","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::X_BUTTON,"X_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::L1_BUTTON,"L1_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::R1_BUTTON,"R1_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::L2_BUTTON,"L2_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::R2_BUTTON,"R2_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::SHARE_BUTTON,"SHARE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::PS_BUTTON,"PS_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::TOUCHPAD,"TOUCHPAD");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::L2_BUTTON_Y,"L2_BUTTON_Y");
	HX_MARK_MEMBER_NAME(PS4ButtonID_obj::R2_BUTTON_Y,"R2_BUTTON_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::X_BUTTON,"X_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::L1_BUTTON,"L1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::R1_BUTTON,"R1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::L2_BUTTON,"L2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::R2_BUTTON,"R2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::SHARE_BUTTON,"SHARE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::PS_BUTTON,"PS_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::TOUCHPAD,"TOUCHPAD");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::L2_BUTTON_Y,"L2_BUTTON_Y");
	HX_VISIT_MEMBER_NAME(PS4ButtonID_obj::R2_BUTTON_Y,"R2_BUTTON_Y");
};

#endif

hx::Class PS4ButtonID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TRIANGLE_BUTTON","\xc9","\xb9","\x1d","\x71"),
	HX_HCSTRING("CIRCLE_BUTTON","\x81","\xe3","\xd0","\xa0"),
	HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4"),
	HX_HCSTRING("SQUARE_BUTTON","\x94","\xf0","\x82","\xfe"),
	HX_HCSTRING("L1_BUTTON","\xcc","\x23","\x2d","\x8d"),
	HX_HCSTRING("R1_BUTTON","\xd2","\x99","\xd5","\x7e"),
	HX_HCSTRING("L2_BUTTON","\xeb","\x95","\x5f","\xc6"),
	HX_HCSTRING("R2_BUTTON","\xf1","\x0b","\x08","\xb8"),
	HX_HCSTRING("SHARE_BUTTON","\xb2","\xa8","\x4d","\x59"),
	HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd"),
	HX_HCSTRING("PS_BUTTON","\xee","\xef","\xa5","\x71"),
	HX_HCSTRING("TOUCHPAD","\xf4","\xea","\xaf","\x59"),
	HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94"),
	HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	HX_HCSTRING("L2_BUTTON_Y","\xc5","\x79","\xe1","\xcd"),
	HX_HCSTRING("R2_BUTTON_Y","\x4b","\xfd","\x17","\xd3"),
	::String(null()) };

void PS4ButtonID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.PS4ButtonID","\xfb","\xe1","\x46","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PS4ButtonID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void PS4ButtonID_obj::__boot()
{
	TRIANGLE_BUTTON= (int)3;
	CIRCLE_BUTTON= (int)2;
	X_BUTTON= (int)1;
	SQUARE_BUTTON= (int)0;
	L1_BUTTON= (int)4;
	R1_BUTTON= (int)5;
	L2_BUTTON= (int)6;
	R2_BUTTON= (int)7;
	SHARE_BUTTON= (int)0;
	START_BUTTON= (int)9;
	PS_BUTTON= (int)12;
	TOUCHPAD= (int)13;
	LEFT_ANALOGUE_BUTTON= (int)10;
	RIGHT_ANALOGUE_BUTTON= (int)11;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)2;
	RIGHT_ANALOGUE_Y= (int)5;
	L2_BUTTON_Y= (int)3;
	R2_BUTTON_Y= (int)4;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
