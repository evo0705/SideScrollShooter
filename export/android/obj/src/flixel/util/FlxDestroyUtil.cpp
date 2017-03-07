#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace util{

Void FlxDestroyUtil_obj::__construct()
{
	return null();
}

//FlxDestroyUtil_obj::~FlxDestroyUtil_obj() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return  new FlxDestroyUtil_obj; }
hx::ObjectPtr< FlxDestroyUtil_obj > FlxDestroyUtil_obj::__new()
{  hx::ObjectPtr< FlxDestroyUtil_obj > _result_ = new FlxDestroyUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDestroyUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDestroyUtil_obj > _result_ = new FlxDestroyUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDestroyUtil_obj::destroy( ::flixel::interfaces::IFlxDestroyable object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",16,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(17)
	bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(18)
		object->destroy();
	}
	HX_STACK_LINE(19)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

cpp::ArrayBase FlxDestroyUtil_obj::destroyArray( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",31,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(32)
	bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			bool tmp1 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			if ((tmp2)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(36)
			Dynamic tmp3 = array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::flixel::util::FlxDestroyUtil_obj::destroy(tmp3);
		}
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

Dynamic FlxDestroyUtil_obj::put( ::flixel::interfaces::IFlxPooled object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",49,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(50)
	bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(51)
		object->put();
	}
	HX_STACK_LINE(52)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

cpp::ArrayBase FlxDestroyUtil_obj::putArray( cpp::ArrayBase array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",63,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(64)
	bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	if ((tmp)){
		HX_STACK_LINE(66)
		while((true)){
			HX_STACK_LINE(66)
			bool tmp1 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			if ((tmp2)){
				HX_STACK_LINE(66)
				break;
			}
			HX_STACK_LINE(68)
			Dynamic tmp3 = array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			::flixel::util::FlxDestroyUtil_obj::put(tmp3);
		}
	}
	HX_STACK_LINE(71)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

::openfl::_legacy::display::BitmapData FlxDestroyUtil_obj::dispose( ::openfl::_legacy::display::BitmapData Bitmap){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",81,0xaf22421a)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_LINE(82)
	bool tmp = (Bitmap != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(83)
		Bitmap->dispose();
	}
	HX_STACK_LINE(84)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

bool FlxDestroyUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { outValue = put_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { outValue = putArray_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { outValue = destroyArray_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxDestroyUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("destroyArray","\x3f","\x66","\x8f","\x17"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putArray","\x4a","\xec","\x83","\x21"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

void FlxDestroyUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxDestroyUtil","\xc4","\xca","\x9f","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDestroyUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxDestroyUtil_obj >;
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

} // end namespace flixel
} // end namespace util
