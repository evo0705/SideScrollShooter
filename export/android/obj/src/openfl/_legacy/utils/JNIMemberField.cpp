#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIMemberField
#include <openfl/_legacy/utils/JNIMemberField.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void JNIMemberField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("openfl._legacy.utils.JNIMemberField","new",0x6b2f776e,"openfl._legacy.utils.JNIMemberField.new","openfl/_legacy/utils/JNI.hx",206,0x5c37961d)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(206)
	this->field = field;
}
;
	return null();
}

//JNIMemberField_obj::~JNIMemberField_obj() { }

Dynamic JNIMemberField_obj::__CreateEmpty() { return  new JNIMemberField_obj; }
hx::ObjectPtr< JNIMemberField_obj > JNIMemberField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIMemberField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMemberField_obj::get( Dynamic jobject){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMemberField","get",0x6b2a27a4,"openfl._legacy.utils.JNIMemberField.get","openfl/_legacy/utils/JNI.hx",211,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_LINE(213)
	Dynamic tmp = this->field;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	Dynamic tmp1 = jobject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	Dynamic tmp2 = ::openfl::_legacy::utils::JNIMemberField_obj::lime_jni_get_member(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

Dynamic JNIMemberField_obj::set( Dynamic jobject,Dynamic value){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMemberField","set",0x6b3342b0,"openfl._legacy.utils.JNIMemberField.set","openfl/_legacy/utils/JNI.hx",218,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	Dynamic tmp = this->field;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	Dynamic tmp1 = jobject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	::openfl::_legacy::utils::JNIMemberField_obj::lime_jni_set_member(tmp,tmp1,tmp2);
	HX_STACK_LINE(221)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )

Dynamic JNIMemberField_obj::lime_jni_get_member;

Dynamic JNIMemberField_obj::lime_jni_set_member;


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIMemberField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
	}
	return super::__Field(inName,inCallProp);
}

bool JNIMemberField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_member") ) { outValue = lime_jni_get_member; return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_set_member") ) { outValue = lime_jni_set_member; return true;  }
	}
	return false;
}

Dynamic JNIMemberField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIMemberField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_member") ) { lime_jni_get_member=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_member") ) { lime_jni_set_member=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMemberField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIMemberField_obj::lime_jni_get_member,HX_HCSTRING("lime_jni_get_member","\x67","\xf9","\x77","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIMemberField_obj::lime_jni_set_member,HX_HCSTRING("lime_jni_set_member","\xdb","\x97","\xf5","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::lime_jni_get_member,"lime_jni_get_member");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::lime_jni_set_member,"lime_jni_set_member");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::lime_jni_get_member,"lime_jni_get_member");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::lime_jni_set_member,"lime_jni_set_member");
};

#endif

hx::Class JNIMemberField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_get_member","\x67","\xf9","\x77","\xa1"),
	HX_HCSTRING("lime_jni_set_member","\xdb","\x97","\xf5","\xa4"),
	::String(null()) };

void JNIMemberField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.JNIMemberField","\x7c","\xe8","\xaf","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIMemberField_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIMemberField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMemberField_obj >;
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

void JNIMemberField_obj::__boot()
{
	lime_jni_get_member= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_get_member","\xc9","\xb8","\x8c","\x14"),(int)2);
	lime_jni_set_member= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_set_member","\x3d","\x57","\x0a","\x18"),(int)3);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
