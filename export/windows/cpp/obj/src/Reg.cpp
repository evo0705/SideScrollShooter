#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > _result_ = new Reg_obj();
	_result_->__construct();
	return _result_;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > _result_ = new Reg_obj();
	_result_->__construct();
	return _result_;}

bool Reg_obj::debug;

cpp::ArrayBase Reg_obj::levels;

int Reg_obj::level;

cpp::ArrayBase Reg_obj::scores;

int Reg_obj::score;

Array< ::Dynamic > Reg_obj::saves;


Reg_obj::Reg_obj()
{
}

bool Reg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug; return true;  }
		if (HX_FIELD_EQ(inName,"level") ) { outValue = level; return true;  }
		if (HX_FIELD_EQ(inName,"score") ) { outValue = score; return true;  }
		if (HX_FIELD_EQ(inName,"saves") ) { outValue = saves; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { outValue = levels; return true;  }
		if (HX_FIELD_EQ(inName,"scores") ) { outValue = scores; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Reg_obj::debug,HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Reg_obj::levels,HX_HCSTRING("levels","\x6f","\xbe","\x4f","\xa4")},
	{hx::fsInt,(void *) &Reg_obj::level,HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Reg_obj::scores,HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45")},
	{hx::fsInt,(void *) &Reg_obj::score,HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Reg_obj::saves,HX_HCSTRING("saves","\x96","\x4a","\x8c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
};

#endif

hx::Class Reg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("levels","\x6f","\xbe","\x4f","\xa4"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("scores","\xe1","\x74","\x6b","\x45"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("saves","\x96","\x4a","\x8c","\x77"),
	::String(null()) };

void Reg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reg","\x34","\x91","\x3e","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reg_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reg_obj >;
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

void Reg_obj::__boot()
{
	debug= true;
	levels= cpp::ArrayBase_obj::__new();
	level= (int)0;
	scores= cpp::ArrayBase_obj::__new();
	score= (int)0;
	saves= Array_obj< ::Dynamic >::__new();
}

