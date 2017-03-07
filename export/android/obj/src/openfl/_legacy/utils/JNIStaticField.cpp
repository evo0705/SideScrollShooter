#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIStaticField
#include <openfl/_legacy/utils/JNIStaticField.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void JNIStaticField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("openfl._legacy.utils.JNIStaticField","new",0x6ac9929a,"openfl._legacy.utils.JNIStaticField.new","openfl/_legacy/utils/JNI.hx",248,0x5c37961d)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(248)
	this->field = field;
}
;
	return null();
}

//JNIStaticField_obj::~JNIStaticField_obj() { }

Dynamic JNIStaticField_obj::__CreateEmpty() { return  new JNIStaticField_obj; }
hx::ObjectPtr< JNIStaticField_obj > JNIStaticField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIStaticField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIStaticField_obj::get( ){
	HX_STACK_FRAME("openfl._legacy.utils.JNIStaticField","get",0x6ac442d0,"openfl._legacy.utils.JNIStaticField.get","openfl/_legacy/utils/JNI.hx",253,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	Dynamic tmp = this->field;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	Dynamic tmp1 = ::openfl::_legacy::utils::JNIStaticField_obj::lime_jni_get_static(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(JNIStaticField_obj,get,return )

Dynamic JNIStaticField_obj::set( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.utils.JNIStaticField","set",0x6acd5ddc,"openfl._legacy.utils.JNIStaticField.set","openfl/_legacy/utils/JNI.hx",260,0x5c37961d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	Dynamic tmp = this->field;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	::openfl::_legacy::utils::JNIStaticField_obj::lime_jni_set_static(tmp,tmp1);
	HX_STACK_LINE(263)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,set,return )

Dynamic JNIStaticField_obj::lime_jni_get_static;

Dynamic JNIStaticField_obj::lime_jni_set_static;


JNIStaticField_obj::JNIStaticField_obj()
{
}

void JNIStaticField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIStaticField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIStaticField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIStaticField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool JNIStaticField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_static") ) { outValue = lime_jni_get_static; return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_set_static") ) { outValue = lime_jni_set_static; return true;  }
	}
	return false;
}

Dynamic JNIStaticField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIStaticField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_static") ) { lime_jni_get_static=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_jni_set_static") ) { lime_jni_set_static=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void JNIStaticField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIStaticField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIStaticField_obj::lime_jni_get_static,HX_HCSTRING("lime_jni_get_static","\xbb","\xf3","\xbd","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNIStaticField_obj::lime_jni_set_static,HX_HCSTRING("lime_jni_set_static","\x2f","\x92","\x3b","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::lime_jni_get_static,"lime_jni_get_static");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::lime_jni_set_static,"lime_jni_set_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::lime_jni_get_static,"lime_jni_get_static");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::lime_jni_set_static,"lime_jni_set_static");
};

#endif

hx::Class JNIStaticField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_get_static","\xbb","\xf3","\xbd","\xa2"),
	HX_HCSTRING("lime_jni_set_static","\x2f","\x92","\x3b","\xa6"),
	::String(null()) };

void JNIStaticField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.JNIStaticField","\xa8","\xfd","\x79","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIStaticField_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIStaticField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIStaticField_obj >;
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

void JNIStaticField_obj::__boot()
{
	lime_jni_get_static= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_get_static","\x1d","\xb3","\xd2","\x15"),(int)1);
	lime_jni_set_static= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_set_static","\x91","\x51","\x50","\x19"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
