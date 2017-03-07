#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_LogitechButtonID
#include <flixel/input/gamepad/LogitechButtonID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void LogitechButtonID_obj::__construct()
{
	return null();
}

//LogitechButtonID_obj::~LogitechButtonID_obj() { }

Dynamic LogitechButtonID_obj::__CreateEmpty() { return  new LogitechButtonID_obj; }
hx::ObjectPtr< LogitechButtonID_obj > LogitechButtonID_obj::__new()
{  hx::ObjectPtr< LogitechButtonID_obj > _result_ = new LogitechButtonID_obj();
	_result_->__construct();
	return _result_;}

Dynamic LogitechButtonID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogitechButtonID_obj > _result_ = new LogitechButtonID_obj();
	_result_->__construct();
	return _result_;}

int LogitechButtonID_obj::ONE;

int LogitechButtonID_obj::TWO;

int LogitechButtonID_obj::THREE;

int LogitechButtonID_obj::FOUR;

int LogitechButtonID_obj::FIVE;

int LogitechButtonID_obj::SIX;

int LogitechButtonID_obj::SEVEN;

int LogitechButtonID_obj::EIGHT;

int LogitechButtonID_obj::NINE;

int LogitechButtonID_obj::TEN;

int LogitechButtonID_obj::LEFT_ANALOGUE;

int LogitechButtonID_obj::RIGHT_ANALOGUE;

int LogitechButtonID_obj::LEFT_ANALOGUE_X;

int LogitechButtonID_obj::LEFT_ANALOGUE_Y;

int LogitechButtonID_obj::RIGHT_ANALOGUE_X;

int LogitechButtonID_obj::RIGHT_ANALOGUE_Y;


LogitechButtonID_obj::LogitechButtonID_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &LogitechButtonID_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::TWO,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::THREE,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::FOUR,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::FIVE,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::SIX,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::SEVEN,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::EIGHT,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::NINE,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::TEN,HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::LEFT_ANALOGUE,HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::RIGHT_ANALOGUE,HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &LogitechButtonID_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::TEN,"TEN");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::TEN,"TEN");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE,"LEFT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE,"RIGHT_ANALOGUE");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(LogitechButtonID_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
};

#endif

hx::Class LogitechButtonID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),
	HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),
	HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),
	HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),
	HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),
	HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),
	HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),
	HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),
	HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00"),
	HX_HCSTRING("LEFT_ANALOGUE","\xf8","\x26","\x02","\x30"),
	HX_HCSTRING("RIGHT_ANALOGUE","\xa3","\x14","\x81","\x3f"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	::String(null()) };

void LogitechButtonID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.LogitechButtonID","\xeb","\xe2","\x5c","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LogitechButtonID_obj >;
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

void LogitechButtonID_obj::__boot()
{
	ONE= (int)0;
	TWO= (int)1;
	THREE= (int)2;
	FOUR= (int)3;
	FIVE= (int)4;
	SIX= (int)5;
	SEVEN= (int)6;
	EIGHT= (int)7;
	NINE= (int)8;
	TEN= (int)9;
	LEFT_ANALOGUE= (int)10;
	RIGHT_ANALOGUE= (int)11;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)2;
	RIGHT_ANALOGUE_Y= (int)3;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
