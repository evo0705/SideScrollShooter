#ifndef INCLUDED_openfl__legacy_utils_JNIMemberField
#define INCLUDED_openfl__legacy_utils_JNIMemberField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,JNIMemberField)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  JNIMemberField_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNIMemberField_obj OBJ_;
		JNIMemberField_obj();
		Void __construct(Dynamic field);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.JNIMemberField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JNIMemberField_obj > __new(Dynamic field);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNIMemberField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JNIMemberField","\xfb","\x8c","\x1f","\x2d"); }

		static void __boot();
		Dynamic field;
		virtual Dynamic get( Dynamic jobject);
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic jobject,Dynamic value);
		Dynamic set_dyn();

		static Dynamic lime_jni_get_member;
		static Dynamic &lime_jni_get_member_dyn() { return lime_jni_get_member;}
		static Dynamic lime_jni_set_member;
		static Dynamic &lime_jni_set_member_dyn() { return lime_jni_set_member;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_JNIMemberField */ 
