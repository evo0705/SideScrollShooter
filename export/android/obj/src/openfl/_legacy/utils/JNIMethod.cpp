#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIMethod
#include <openfl/_legacy/utils/JNIMethod.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void JNIMethod_obj::__construct(Dynamic method)
{
HX_STACK_FRAME("openfl._legacy.utils.JNIMethod","new",0x581cb357,"openfl._legacy.utils.JNIMethod.new","openfl/_legacy/utils/JNI.hx",290,0x5c37961d)
HX_STACK_THIS(this)
HX_STACK_ARG(method,"method")
{
	HX_STACK_LINE(290)
	this->method = method;
}
;
	return null();
}

//JNIMethod_obj::~JNIMethod_obj() { }

Dynamic JNIMethod_obj::__CreateEmpty() { return  new JNIMethod_obj; }
hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new(Dynamic method)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(method);
	return _result_;}

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMethod_obj::callMember( cpp::ArrayBase args){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMethod","callMember",0x99893381,"openfl._legacy.utils.JNIMethod.callMember","openfl/_legacy/utils/JNI.hx",294,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(296)
	Dynamic tmp = args->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	Dynamic jobject = tmp;		HX_STACK_VAR(jobject,"jobject");
	HX_STACK_LINE(297)
	Dynamic tmp1 = this->method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	Dynamic tmp2 = jobject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	Dynamic tmp3 = ::openfl::_legacy::utils::JNIMethod_obj::lime_jni_call_member(tmp1,tmp2,args);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

Dynamic JNIMethod_obj::callStatic( cpp::ArrayBase args){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMethod","callStatic",0x9acf2dd5,"openfl._legacy.utils.JNIMethod.callStatic","openfl/_legacy/utils/JNI.hx",302,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(304)
	Dynamic tmp = this->method;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	Dynamic tmp1 = ::openfl::_legacy::utils::JNIMethod_obj::lime_jni_call_static(tmp,args);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

Dynamic JNIMethod_obj::getMemberMethod( bool useArray){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMethod","getMemberMethod",0x0bfddc08,"openfl._legacy.utils.JNIMethod.getMemberMethod","openfl/_legacy/utils/JNI.hx",309,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(311)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	if ((tmp)){
		HX_STACK_LINE(313)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		return tmp1;
	}
	else{
		HX_STACK_LINE(317)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		return tmp2;
	}
	HX_STACK_LINE(311)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

Dynamic JNIMethod_obj::getStaticMethod( bool useArray){
	HX_STACK_FRAME("openfl._legacy.utils.JNIMethod","getStaticMethod",0x6a064d5c,"openfl._legacy.utils.JNIMethod.getStaticMethod","openfl/_legacy/utils/JNI.hx",324,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(326)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	if ((tmp)){
		HX_STACK_LINE(328)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		return tmp1;
	}
	else{
		HX_STACK_LINE(332)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		return tmp2;
	}
	HX_STACK_LINE(326)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )

Dynamic JNIMethod_obj::lime_jni_call_member;

Dynamic JNIMethod_obj::lime_jni_call_static;


JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic JNIMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return getMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return getStaticMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool JNIMethod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { outValue = lime_jni_call_member; return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { outValue = lime_jni_call_static; return true;  }
	}
	return false;
}

Dynamic JNIMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIMethod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { lime_jni_call_member=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { lime_jni_call_static=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMethod_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIMethod_obj::lime_jni_call_member,HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIMethod_obj::lime_jni_call_static,HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"),
	HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::lime_jni_call_static,"lime_jni_call_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::lime_jni_call_static,"lime_jni_call_static");
};

#endif

hx::Class JNIMethod_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),
	HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),
	::String(null()) };

void JNIMethod_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.JNIMethod","\xe5","\xbb","\x24","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIMethod_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIMethod_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMethod_obj >;
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

void JNIMethod_obj::__boot()
{
	lime_jni_call_member= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_call_member","\xb5","\xb5","\xb2","\x8a"),(int)3);
	lime_jni_call_static= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_call_static","\x09","\xb0","\xf8","\x8b"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
