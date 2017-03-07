#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNI
#include <openfl/_legacy/utils/JNI.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIMemberField
#include <openfl/_legacy/utils/JNIMemberField.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIMethod
#include <openfl/_legacy/utils/JNIMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_JNIStaticField
#include <openfl/_legacy/utils/JNIStaticField.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void JNI_obj::__construct()
{
	return null();
}

//JNI_obj::~JNI_obj() { }

Dynamic JNI_obj::__CreateEmpty() { return  new JNI_obj; }
hx::ObjectPtr< JNI_obj > JNI_obj::__new()
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap JNI_obj::alreadyCreated;

::String JNI_obj::base64;

bool JNI_obj::initialized;

Dynamic JNI_obj::callMember( Dynamic method,Dynamic jobject,cpp::ArrayBase a){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","callMember",0xddc3f3e2,"openfl._legacy.utils.JNI.callMember","openfl/_legacy/utils/JNI.hx",21,0x5c37961d)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(21)
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(23)
			Dynamic tmp1 = method(jobject);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(24)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			return tmp1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(25)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			return tmp1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(26)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			return tmp1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(27)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			return tmp1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(28)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			return tmp1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(29)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			return tmp1;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(30)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			return tmp1;
		}
		;break;
		default: {
			HX_STACK_LINE(31)
			return null();
		}
	}
	HX_STACK_LINE(21)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

Dynamic JNI_obj::callStatic( Dynamic method,cpp::ArrayBase a){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","callStatic",0xdf09ee36,"openfl._legacy.utils.JNI.callStatic","openfl/_legacy/utils/JNI.hx",40,0x5c37961d)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(40)
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(42)
			Dynamic tmp1 = method();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(43)
			Dynamic tmp1 = method(a->__GetItem((int)0));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			return tmp1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(44)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			return tmp1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(45)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			return tmp1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(46)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			return tmp1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(47)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			return tmp1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(48)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(48)
			return tmp1;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(49)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			return tmp1;
		}
		;break;
		default: {
			HX_STACK_LINE(50)
			return null();
		}
	}
	HX_STACK_LINE(40)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

Dynamic JNI_obj::createInterface( Dynamic haxeClass,::String className,::String classDef){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","createInterface",0x71872493,"openfl._legacy.utils.JNI.createInterface","openfl/_legacy/utils/JNI.hx",57,0x5c37961d)
	HX_STACK_ARG(haxeClass,"haxeClass")
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(classDef,"classDef")
	HX_STACK_LINE(59)
	::haxe::io::Bytes bytes = null();		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(61)
	::haxe::ds::StringMap tmp = ::openfl::_legacy::utils::JNI_obj::alreadyCreated;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::String tmp1 = className;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	if ((tmp4)){
		HX_STACK_LINE(63)
		::String tmp5 = classDef;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		::String tmp6 = ::openfl::_legacy::utils::JNI_obj::base64;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		::String tmp7 = ::haxe::crypto::BaseCode_obj::decode(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::ofString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		bytes = tmp8;
		HX_STACK_LINE(64)
		::haxe::io::Bytes tmp9 = bytes;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		::haxe::io::Bytes tmp10 = ::haxe::zip::Uncompress_obj::run(tmp9,(int)9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		bytes = tmp10;
		HX_STACK_LINE(65)
		::haxe::ds::StringMap tmp11 = ::openfl::_legacy::utils::JNI_obj::alreadyCreated;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		::String tmp12 = className;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		tmp11->set(tmp12,true);
	}
	HX_STACK_LINE(69)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createInterface,return )

::openfl::_legacy::utils::JNIMemberField JNI_obj::createMemberField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","createMemberField",0x3589395a,"openfl._legacy.utils.JNI.createMemberField","openfl/_legacy/utils/JNI.hx",75,0x5c37961d)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(77)
	::openfl::_legacy::utils::JNI_obj::init();
	HX_STACK_LINE(79)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::String tmp1 = memberName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	::String tmp2 = signature;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	Dynamic tmp3 = ::openfl::_legacy::utils::JNI_obj::lime_jni_create_field(tmp,tmp1,tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	::openfl::_legacy::utils::JNIMemberField tmp4 = ::openfl::_legacy::utils::JNIMemberField_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

Dynamic JNI_obj::createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("openfl._legacy.utils.JNI","createMemberMethod",0x2b555e41,"openfl._legacy.utils.JNI.createMemberMethod","openfl/_legacy/utils/JNI.hx",84,0x5c37961d)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(86)
		::openfl::_legacy::utils::JNI_obj::init();
		HX_STACK_LINE(88)
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		className = tmp;
		HX_STACK_LINE(89)
		::String tmp1 = className;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		::String tmp2 = memberName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::String tmp3 = signature;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		bool tmp4 = quietFail;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		Dynamic tmp5 = ::openfl::_legacy::utils::JNI_obj::lime_jni_create_method(tmp1,tmp2,tmp3,false,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Dynamic handle = tmp5;		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(91)
		bool tmp6 = (handle == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		if ((tmp6)){
			HX_STACK_LINE(93)
			bool tmp7 = quietFail;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			if ((tmp7)){
				HX_STACK_LINE(95)
				return null();
			}
			HX_STACK_LINE(99)
			::String tmp8 = (HX_HCSTRING("Could not find member function \"","\xc5","\x79","\x42","\xb4") + memberName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(103)
		::openfl::_legacy::utils::JNIMethod tmp7 = ::openfl::_legacy::utils::JNIMethod_obj::__new(handle);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		::openfl::_legacy::utils::JNIMethod method = tmp7;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(104)
		bool tmp8 = useArray;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		Dynamic tmp9 = method->getMemberMethod(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

::openfl::_legacy::utils::JNIStaticField JNI_obj::createStaticField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","createStaticField",0x48534e86,"openfl._legacy.utils.JNI.createStaticField","openfl/_legacy/utils/JNI.hx",109,0x5c37961d)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(111)
	::openfl::_legacy::utils::JNI_obj::init();
	HX_STACK_LINE(113)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::String tmp1 = memberName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::String tmp2 = signature;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	Dynamic tmp3 = ::openfl::_legacy::utils::JNI_obj::lime_jni_create_field(tmp,tmp1,tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	::openfl::_legacy::utils::JNIStaticField tmp4 = ::openfl::_legacy::utils::JNIStaticField_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

Dynamic JNI_obj::createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("openfl._legacy.utils.JNI","createStaticMethod",0x895dcf95,"openfl._legacy.utils.JNI.createStaticMethod","openfl/_legacy/utils/JNI.hx",118,0x5c37961d)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(120)
		::openfl::_legacy::utils::JNI_obj::init();
		HX_STACK_LINE(122)
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		className = tmp;
		HX_STACK_LINE(123)
		::String tmp1 = className;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		::String tmp2 = memberName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		::String tmp3 = signature;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		bool tmp4 = quietFail;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Dynamic tmp5 = ::openfl::_legacy::utils::JNI_obj::lime_jni_create_method(tmp1,tmp2,tmp3,true,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Dynamic handle = tmp5;		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(125)
		bool tmp6 = (handle == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		if ((tmp6)){
			HX_STACK_LINE(127)
			bool tmp7 = quietFail;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			if ((tmp7)){
				HX_STACK_LINE(129)
				return null();
			}
			HX_STACK_LINE(133)
			::String tmp8 = (HX_HCSTRING("Could not find static function \"","\xf1","\xb7","\xfa","\x62") + memberName);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(137)
		::openfl::_legacy::utils::JNIMethod tmp7 = ::openfl::_legacy::utils::JNIMethod_obj::__new(handle);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		::openfl::_legacy::utils::JNIMethod method = tmp7;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(138)
		bool tmp8 = useArray;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		Dynamic tmp9 = method->getStaticMethod(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

Dynamic JNI_obj::getEnv( ){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","getEnv",0xfa690a41,"openfl._legacy.utils.JNI.getEnv","openfl/_legacy/utils/JNI.hx",143,0x5c37961d)
	HX_STACK_LINE(145)
	::openfl::_legacy::utils::JNI_obj::init();
	HX_STACK_LINE(147)
	Dynamic tmp = ::openfl::_legacy::utils::JNI_obj::lime_jni_get_env();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

Void JNI_obj::init( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.JNI","init",0xa26141da,"openfl._legacy.utils.JNI.init","openfl/_legacy/utils/JNI.hx",152,0x5c37961d)
		HX_STACK_LINE(154)
		bool tmp = ::openfl::_legacy::utils::JNI_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(156)
			::openfl::_legacy::utils::JNI_obj::initialized = true;
			HX_STACK_LINE(157)
			Dynamic tmp2 = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_init_callback","\x2e","\x39","\x57","\x95"),(int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(158)
			Dynamic tmp3 = ::openfl::_legacy::utils::JNI_obj::onCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			method(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

Dynamic JNI_obj::onCallback( Dynamic object,Dynamic method,Dynamic args){
	HX_STACK_FRAME("openfl._legacy.utils.JNI","onCallback",0x0a9ba84e,"openfl._legacy.utils.JNI.onCallback","openfl/_legacy/utils/JNI.hx",165,0x5c37961d)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(167)
	Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Dynamic tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	Dynamic field = tmp2;		HX_STACK_VAR(field,"field");
	HX_STACK_LINE(169)
	bool tmp3 = (field != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	if ((tmp3)){
		HX_STACK_LINE(171)
		Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		Dynamic tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		Dynamic tmp6 = args;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		Dynamic tmp7 = ::Reflect_obj::callMethod(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		return tmp7;
	}
	HX_STACK_LINE(175)
	Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(175)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(175)
	::String tmp6 = (HX_HCSTRING("onCallback - unknown field ","\x2b","\x28","\x2a","\x3c") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(175)
	Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("JNI.hx","\xd9","\xc8","\x0d","\xb0"),175,HX_HCSTRING("openfl._legacy.utils.JNI","\xe4","\xcd","\xbf","\x3d"),HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(175)
	::haxe::Log_obj::trace(tmp6,tmp7);
	HX_STACK_LINE(176)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

Dynamic JNI_obj::lime_jni_create_field;

Dynamic JNI_obj::lime_jni_create_method;

Dynamic JNI_obj::lime_jni_get_env;

Dynamic JNI_obj::lime_jni_call_member;

Dynamic JNI_obj::lime_jni_call_static;


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { outValue = base64; return true;  }
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = alreadyCreated; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createInterface") ) { outValue = createInterface_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_jni_get_env") ) { outValue = lime_jni_get_env; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { outValue = lime_jni_call_member; return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { outValue = lime_jni_call_static; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jni_create_field") ) { outValue = lime_jni_create_field; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jni_create_method") ) { outValue = lime_jni_create_method; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &JNI_obj::alreadyCreated,HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79")},
	{hx::fsString,(void *) &JNI_obj::base64,HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55")},
	{hx::fsBool,(void *) &JNI_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNI_obj::lime_jni_create_field,HX_HCSTRING("lime_jni_create_field","\x3b","\xa8","\xe1","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNI_obj::lime_jni_create_method,HX_HCSTRING("lime_jni_create_method","\x40","\xf4","\x5d","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNI_obj::lime_jni_get_env,HX_HCSTRING("lime_jni_get_env","\xc0","\xb2","\xe3","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNI_obj::lime_jni_call_member,HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JNI_obj::lime_jni_call_static,HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::base64,"base64");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_create_field,"lime_jni_create_field");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_create_method,"lime_jni_create_method");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_get_env,"lime_jni_get_env");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_call_static,"lime_jni_call_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::base64,"base64");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_create_field,"lime_jni_create_field");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_create_method,"lime_jni_create_method");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_get_env,"lime_jni_get_env");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_call_static,"lime_jni_call_static");
};

#endif

hx::Class JNI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79"),
	HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("createInterface","\x1d","\xeb","\xce","\xda"),
	HX_HCSTRING("createMemberField","\x64","\x36","\x37","\x55"),
	HX_HCSTRING("createMemberMethod","\xf7","\xc9","\xe4","\xc3"),
	HX_HCSTRING("createStaticField","\x90","\x4b","\x01","\x68"),
	HX_HCSTRING("createStaticMethod","\x4b","\x3b","\xed","\x21"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"),
	HX_HCSTRING("lime_jni_create_field","\x3b","\xa8","\xe1","\x17"),
	HX_HCSTRING("lime_jni_create_method","\x40","\xf4","\x5d","\x56"),
	HX_HCSTRING("lime_jni_get_env","\xc0","\xb2","\xe3","\xd3"),
	HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),
	HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),
	::String(null()) };

void JNI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.JNI","\xe4","\xcd","\xbf","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JNI_obj >;
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

void JNI_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/utils/JNI.hx",14,0x5c37961d)
		{
			HX_STACK_LINE(14)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14)
			return tmp1;
		}
		return null();
	}
};
	alreadyCreated= _Function_0_1::Block();
	base64= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
	initialized= false;
	lime_jni_create_field= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_create_field","\x1d","\x84","\x2e","\x09"),(int)4);
	lime_jni_create_method= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_create_method","\x1e","\x7e","\x51","\x88"),(int)5);
	lime_jni_get_env= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_get_env","\x1e","\x62","\xc8","\x11"),(int)0);
	lime_jni_call_member= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_call_member","\xb5","\xb5","\xb2","\x8a"),(int)3);
	lime_jni_call_static= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_jni_call_static","\x09","\xb0","\xf8","\x8b"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
