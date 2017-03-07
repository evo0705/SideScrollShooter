#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils_Endian
#include <openfl/utils/Endian.h>
#endif
namespace openfl{
namespace utils{

Void Endian_obj::__construct()
{
	return null();
}

//Endian_obj::~Endian_obj() { }

Dynamic Endian_obj::__CreateEmpty() { return  new Endian_obj; }
hx::ObjectPtr< Endian_obj > Endian_obj::__new()
{  hx::ObjectPtr< Endian_obj > _result_ = new Endian_obj();
	_result_->__construct();
	return _result_;}

Dynamic Endian_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Endian_obj > _result_ = new Endian_obj();
	_result_->__construct();
	return _result_;}

::String Endian_obj::_BIG_ENDIAN;

::String Endian_obj::_LITTLE_ENDIAN;


Endian_obj::Endian_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Endian_obj::_BIG_ENDIAN,HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")},
	{hx::fsString,(void *) &Endian_obj::_LITTLE_ENDIAN,HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Endian_obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Endian_obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#endif

hx::Class Endian_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),
	HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),
	::String(null()) };

void Endian_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.Endian","\xf6","\x00","\x8a","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Endian_obj >;
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

void Endian_obj::__boot()
{
	_BIG_ENDIAN= HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	_LITTLE_ENDIAN= HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
}

} // end namespace openfl
} // end namespace utils
