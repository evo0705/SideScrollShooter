#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_OUYAButtonID
#include <flixel/input/gamepad/OUYAButtonID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void OUYAButtonID_obj::__construct()
{
	return null();
}

//OUYAButtonID_obj::~OUYAButtonID_obj() { }

Dynamic OUYAButtonID_obj::__CreateEmpty() { return  new OUYAButtonID_obj; }
hx::ObjectPtr< OUYAButtonID_obj > OUYAButtonID_obj::__new()
{  hx::ObjectPtr< OUYAButtonID_obj > _result_ = new OUYAButtonID_obj();
	_result_->__construct();
	return _result_;}

Dynamic OUYAButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OUYAButtonID_obj > _result_ = new OUYAButtonID_obj();
	_result_->__construct();
	return _result_;}

int OUYAButtonID_obj::O;

int OUYAButtonID_obj::U;

int OUYAButtonID_obj::Y;

int OUYAButtonID_obj::A;

int OUYAButtonID_obj::LB;

int OUYAButtonID_obj::RB;

int OUYAButtonID_obj::LEFT_ANALOGUE;

int OUYAButtonID_obj::RIGHT_ANALOGUE;

int OUYAButtonID_obj::HOME;

int OUYAButtonID_obj::LEFT_TRIGGER;

int OUYAButtonID_obj::RIGHT_TRIGGER;

int OUYAButtonID_obj::LEFT_ANALOGUE_X;

int OUYAButtonID_obj::LEFT_ANALOGUE_Y;

int OUYAButtonID_obj::RIGHT_ANALOGUE_X;

int OUYAButtonID_obj::RIGHT_ANALOGUE_Y;

int OUYAButtonID_obj::LEFT_TRIGGER_ANALOG;

int OUYAButtonID_obj::RIGHT_TRIGGER_ANALOG;


OUYAButtonID_obj::OUYAButtonID_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OUYAButtonID_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LB,HX_HCSTRING("LB","\x76","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RB,HX_HCSTRING("RB","\xb0","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LEFT_ANALOGUE,HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RIGHT_ANALOGUE,HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::LEFT_TRIGGER_ANALOG,HX_HCSTRING("LEFT_TRIGGER_ANALOG","\x2f","\xd6","\x74","\xa0")},
	{hx::fsInt,(void *) &OUYAButtonID_obj::RIGHT_TRIGGER_ANALOG,HX_HCSTRING("RIGHT_TRIGGER_ANALOG","\x1a","\xd6","\x39","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::O,"O");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::U,"U");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::A,"A");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::LEFT_TRIGGER_ANALOG,"LEFT_TRIGGER_ANALOG");
	HX_MARK_MEMBER_NAME(OUYAButtonID_obj::RIGHT_TRIGGER_ANALOG,"RIGHT_TRIGGER_ANALOG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::O,"O");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::U,"U");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::LEFT_TRIGGER_ANALOG,"LEFT_TRIGGER_ANALOG");
	HX_VISIT_MEMBER_NAME(OUYAButtonID_obj::RIGHT_TRIGGER_ANALOG,"RIGHT_TRIGGER_ANALOG");
};

#endif

hx::Class OUYAButtonID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("LB","\x76","\x42","\x00","\x00"),
	HX_HCSTRING("RB","\xb0","\x47","\x00","\x00"),
	HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30"),
	HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	HX_HCSTRING("LEFT_TRIGGER_ANALOG","\x2f","\xd6","\x74","\xa0"),
	HX_HCSTRING("RIGHT_TRIGGER_ANALOG","\x1a","\xd6","\x39","\x88"),
	::String(null()) };

void OUYAButtonID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.OUYAButtonID","\x7e","\x1c","\xdd","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OUYAButtonID_obj >;
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

void OUYAButtonID_obj::__boot()
{
	O= (int)0;
	U= (int)3;
	Y= (int)4;
	A= (int)1;
	LB= (int)6;
	RB= (int)7;
	LEFT_ANALOGUE= (int)10;
	RIGHT_ANALOGUE= (int)11;
	HOME= (int)2;
	LEFT_TRIGGER= (int)8;
	RIGHT_TRIGGER= (int)9;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)11;
	RIGHT_ANALOGUE_Y= (int)14;
	LEFT_TRIGGER_ANALOG= (int)17;
	RIGHT_TRIGGER_ANALOG= (int)18;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
