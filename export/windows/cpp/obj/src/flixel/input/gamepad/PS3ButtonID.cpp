#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_PS3ButtonID
#include <flixel/input/gamepad/PS3ButtonID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void PS3ButtonID_obj::__construct()
{
	return null();
}

//PS3ButtonID_obj::~PS3ButtonID_obj() { }

Dynamic PS3ButtonID_obj::__CreateEmpty() { return  new PS3ButtonID_obj; }
hx::ObjectPtr< PS3ButtonID_obj > PS3ButtonID_obj::__new()
{  hx::ObjectPtr< PS3ButtonID_obj > _result_ = new PS3ButtonID_obj();
	_result_->__construct();
	return _result_;}

Dynamic PS3ButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PS3ButtonID_obj > _result_ = new PS3ButtonID_obj();
	_result_->__construct();
	return _result_;}

int PS3ButtonID_obj::TRIANGLE_BUTTON;

int PS3ButtonID_obj::CIRCLE_BUTTON;

int PS3ButtonID_obj::X_BUTTON;

int PS3ButtonID_obj::SQUARE_BUTTON;

int PS3ButtonID_obj::L1_BUTTON;

int PS3ButtonID_obj::R1_BUTTON;

int PS3ButtonID_obj::L2_BUTTON;

int PS3ButtonID_obj::R2_BUTTON;

int PS3ButtonID_obj::SELECT_BUTTON;

int PS3ButtonID_obj::START_BUTTON;

int PS3ButtonID_obj::PS_BUTTON;

int PS3ButtonID_obj::LEFT_ANALOGUE_BUTTON;

int PS3ButtonID_obj::RIGHT_ANALOGUE_BUTTON;

int PS3ButtonID_obj::DPAD_UP;

int PS3ButtonID_obj::DPAD_DOWN;

int PS3ButtonID_obj::DPAD_LEFT;

int PS3ButtonID_obj::DPAD_RIGHT;

int PS3ButtonID_obj::LEFT_ANALOGUE_X;

int PS3ButtonID_obj::LEFT_ANALOGUE_Y;

int PS3ButtonID_obj::TRIANGLE_BUTTON_PRESSURE;

int PS3ButtonID_obj::CIRCLE_BUTTON_PRESSURE;

int PS3ButtonID_obj::X_BUTTON_PRESSURE;

int PS3ButtonID_obj::SQUARE_BUTTON_PRESSURE;


PS3ButtonID_obj::PS3ButtonID_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PS3ButtonID_obj::TRIANGLE_BUTTON,HX_HCSTRING("TRIANGLE_BUTTON","\xc9","\xb9","\x1d","\x71")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::CIRCLE_BUTTON,HX_HCSTRING("CIRCLE_BUTTON","\x81","\xe3","\xd0","\xa0")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::X_BUTTON,HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::SQUARE_BUTTON,HX_HCSTRING("SQUARE_BUTTON","\x94","\xf0","\x82","\xfe")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::L1_BUTTON,HX_HCSTRING("L1_BUTTON","\xcc","\x23","\x2d","\x8d")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::R1_BUTTON,HX_HCSTRING("R1_BUTTON","\xd2","\x99","\xd5","\x7e")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::L2_BUTTON,HX_HCSTRING("L2_BUTTON","\xeb","\x95","\x5f","\xc6")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::R2_BUTTON,HX_HCSTRING("R2_BUTTON","\xf1","\x0b","\x08","\xb8")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::SELECT_BUTTON,HX_HCSTRING("SELECT_BUTTON","\x15","\x70","\xb1","\x60")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::START_BUTTON,HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::PS_BUTTON,HX_HCSTRING("PS_BUTTON","\xee","\xef","\xa5","\x71")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::LEFT_ANALOGUE_BUTTON,HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::RIGHT_ANALOGUE_BUTTON,HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::TRIANGLE_BUTTON_PRESSURE,HX_HCSTRING("TRIANGLE_BUTTON_PRESSURE","\x3b","\x78","\x94","\xdf")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::CIRCLE_BUTTON_PRESSURE,HX_HCSTRING("CIRCLE_BUTTON_PRESSURE","\x83","\x57","\x3a","\xc4")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::X_BUTTON_PRESSURE,HX_HCSTRING("X_BUTTON_PRESSURE","\xcb","\x49","\xa1","\xdd")},
	{hx::fsInt,(void *) &PS3ButtonID_obj::SQUARE_BUTTON_PRESSURE,HX_HCSTRING("SQUARE_BUTTON_PRESSURE","\x10","\x90","\xe5","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::X_BUTTON,"X_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::L1_BUTTON,"L1_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::R1_BUTTON,"R1_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::L2_BUTTON,"L2_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::R2_BUTTON,"R2_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::SELECT_BUTTON,"SELECT_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::PS_BUTTON,"PS_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::TRIANGLE_BUTTON_PRESSURE,"TRIANGLE_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::CIRCLE_BUTTON_PRESSURE,"CIRCLE_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::X_BUTTON_PRESSURE,"X_BUTTON_PRESSURE");
	HX_MARK_MEMBER_NAME(PS3ButtonID_obj::SQUARE_BUTTON_PRESSURE,"SQUARE_BUTTON_PRESSURE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::TRIANGLE_BUTTON,"TRIANGLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::CIRCLE_BUTTON,"CIRCLE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::X_BUTTON,"X_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::SQUARE_BUTTON,"SQUARE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::L1_BUTTON,"L1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::R1_BUTTON,"R1_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::L2_BUTTON,"L2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::R2_BUTTON,"R2_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::SELECT_BUTTON,"SELECT_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::PS_BUTTON,"PS_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::TRIANGLE_BUTTON_PRESSURE,"TRIANGLE_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::CIRCLE_BUTTON_PRESSURE,"CIRCLE_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::X_BUTTON_PRESSURE,"X_BUTTON_PRESSURE");
	HX_VISIT_MEMBER_NAME(PS3ButtonID_obj::SQUARE_BUTTON_PRESSURE,"SQUARE_BUTTON_PRESSURE");
};

#endif

hx::Class PS3ButtonID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TRIANGLE_BUTTON","\xc9","\xb9","\x1d","\x71"),
	HX_HCSTRING("CIRCLE_BUTTON","\x81","\xe3","\xd0","\xa0"),
	HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4"),
	HX_HCSTRING("SQUARE_BUTTON","\x94","\xf0","\x82","\xfe"),
	HX_HCSTRING("L1_BUTTON","\xcc","\x23","\x2d","\x8d"),
	HX_HCSTRING("R1_BUTTON","\xd2","\x99","\xd5","\x7e"),
	HX_HCSTRING("L2_BUTTON","\xeb","\x95","\x5f","\xc6"),
	HX_HCSTRING("R2_BUTTON","\xf1","\x0b","\x08","\xb8"),
	HX_HCSTRING("SELECT_BUTTON","\x15","\x70","\xb1","\x60"),
	HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd"),
	HX_HCSTRING("PS_BUTTON","\xee","\xef","\xa5","\x71"),
	HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94"),
	HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("TRIANGLE_BUTTON_PRESSURE","\x3b","\x78","\x94","\xdf"),
	HX_HCSTRING("CIRCLE_BUTTON_PRESSURE","\x83","\x57","\x3a","\xc4"),
	HX_HCSTRING("X_BUTTON_PRESSURE","\xcb","\x49","\xa1","\xdd"),
	HX_HCSTRING("SQUARE_BUTTON_PRESSURE","\x10","\x90","\xe5","\x2d"),
	::String(null()) };

void PS3ButtonID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.PS3ButtonID","\xfa","\x78","\x55","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PS3ButtonID_obj >;
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

void PS3ButtonID_obj::__boot()
{
	TRIANGLE_BUTTON= (int)12;
	CIRCLE_BUTTON= (int)13;
	X_BUTTON= (int)14;
	SQUARE_BUTTON= (int)15;
	L1_BUTTON= (int)10;
	R1_BUTTON= (int)11;
	L2_BUTTON= (int)8;
	R2_BUTTON= (int)9;
	SELECT_BUTTON= (int)0;
	START_BUTTON= (int)3;
	PS_BUTTON= (int)16;
	LEFT_ANALOGUE_BUTTON= (int)1;
	RIGHT_ANALOGUE_BUTTON= (int)2;
	DPAD_UP= (int)4;
	DPAD_DOWN= (int)6;
	DPAD_LEFT= (int)7;
	DPAD_RIGHT= (int)5;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	TRIANGLE_BUTTON_PRESSURE= (int)16;
	CIRCLE_BUTTON_PRESSURE= (int)17;
	X_BUTTON_PRESSURE= (int)18;
	SQUARE_BUTTON_PRESSURE= (int)19;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
