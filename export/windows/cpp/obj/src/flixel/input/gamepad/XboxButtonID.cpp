#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_XboxButtonID
#include <flixel/input/gamepad/XboxButtonID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void XboxButtonID_obj::__construct()
{
	return null();
}

//XboxButtonID_obj::~XboxButtonID_obj() { }

Dynamic XboxButtonID_obj::__CreateEmpty() { return  new XboxButtonID_obj; }
hx::ObjectPtr< XboxButtonID_obj > XboxButtonID_obj::__new()
{  hx::ObjectPtr< XboxButtonID_obj > _result_ = new XboxButtonID_obj();
	_result_->__construct();
	return _result_;}

Dynamic XboxButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XboxButtonID_obj > _result_ = new XboxButtonID_obj();
	_result_->__construct();
	return _result_;}

int XboxButtonID_obj::A;

int XboxButtonID_obj::B;

int XboxButtonID_obj::X;

int XboxButtonID_obj::Y;

int XboxButtonID_obj::LB;

int XboxButtonID_obj::RB;

int XboxButtonID_obj::BACK;

int XboxButtonID_obj::START;

int XboxButtonID_obj::LEFT_ANALOGUE;

int XboxButtonID_obj::RIGHT_ANALOGUE;

int XboxButtonID_obj::XBOX;

int XboxButtonID_obj::DPAD_UP;

int XboxButtonID_obj::DPAD_DOWN;

int XboxButtonID_obj::DPAD_LEFT;

int XboxButtonID_obj::DPAD_RIGHT;

int XboxButtonID_obj::LEFT_ANALOGUE_X;

int XboxButtonID_obj::LEFT_ANALOGUE_Y;

int XboxButtonID_obj::RIGHT_ANALOGUE_X;

int XboxButtonID_obj::RIGHT_ANALOGUE_Y;

int XboxButtonID_obj::LEFT_TRIGGER;

int XboxButtonID_obj::RIGHT_TRIGGER;


XboxButtonID_obj::XboxButtonID_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &XboxButtonID_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::LB,HX_HCSTRING("LB","\x76","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::RB,HX_HCSTRING("RB","\xb0","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &XboxButtonID_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &XboxButtonID_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &XboxButtonID_obj::LEFT_ANALOGUE,HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30")},
	{hx::fsInt,(void *) &XboxButtonID_obj::RIGHT_ANALOGUE,HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f")},
	{hx::fsInt,(void *) &XboxButtonID_obj::XBOX,HX_HCSTRING("XBOX","\x93","\x20","\x5d","\x3a")},
	{hx::fsInt,(void *) &XboxButtonID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &XboxButtonID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &XboxButtonID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &XboxButtonID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &XboxButtonID_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &XboxButtonID_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &XboxButtonID_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &XboxButtonID_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &XboxButtonID_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &XboxButtonID_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::A,"A");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::B,"B");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::X,"X");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::START,"START");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::XBOX,"XBOX");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(XboxButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::B,"B");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::START,"START");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::XBOX,"XBOX");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(XboxButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#endif

hx::Class XboxButtonID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("LB","\x76","\x42","\x00","\x00"),
	HX_HCSTRING("RB","\xb0","\x47","\x00","\x00"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30"),
	HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f"),
	HX_HCSTRING("XBOX","\x93","\x20","\x5d","\x3a"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	::String(null()) };

void XboxButtonID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.XboxButtonID","\xc3","\x45","\x27","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XboxButtonID_obj >;
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

void XboxButtonID_obj::__boot()
{
	A= (int)10;
	B= (int)11;
	X= (int)12;
	Y= (int)13;
	LB= (int)8;
	RB= (int)9;
	BACK= (int)5;
	START= (int)4;
	LEFT_ANALOGUE= (int)6;
	RIGHT_ANALOGUE= (int)7;
	XBOX= (int)14;
	DPAD_UP= (int)0;
	DPAD_DOWN= (int)1;
	DPAD_LEFT= (int)2;
	DPAD_RIGHT= (int)3;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)2;
	RIGHT_ANALOGUE_Y= (int)3;
	LEFT_TRIGGER= (int)4;
	RIGHT_TRIGGER= (int)5;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
