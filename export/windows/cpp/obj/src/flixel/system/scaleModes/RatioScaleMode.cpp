#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace _system{
namespace scaleModes{

Void RatioScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",5,0x35e4ce80)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//RatioScaleMode_obj::~RatioScaleMode_obj() { }

Dynamic RatioScaleMode_obj::__CreateEmpty() { return  new RatioScaleMode_obj; }
hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new()
{  hx::ObjectPtr< RatioScaleMode_obj > _result_ = new RatioScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic RatioScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RatioScaleMode_obj > _result_ = new RatioScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void RatioScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",8,0x35e4ce80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(9)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		int tmp1 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		Float ratio = tmp2;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(10)
		Float tmp3 = (Float(Width) / Float(Height));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10)
		Float realRatio = tmp3;		HX_STACK_VAR(realRatio,"realRatio");
		HX_STACK_LINE(12)
		bool tmp4 = (realRatio < ratio);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12)
		if ((tmp4)){
			HX_STACK_LINE(14)
			::flixel::util::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(14)
			int tmp6 = Width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(14)
			tmp5->set_x(tmp6);
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint tmp7 = this->gameSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint tmp8 = this->gameSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(15)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(15)
			Float tmp10 = ratio;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(15)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(15)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(15)
			tmp7->set_y(tmp12);
		}
		else{
			HX_STACK_LINE(19)
			::flixel::util::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			int tmp6 = Height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(19)
			tmp5->set_y(tmp6);
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint tmp7 = this->gameSize;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint tmp8 = this->gameSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(20)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(20)
			Float tmp10 = ratio;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(20)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(20)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			tmp7->set_x(tmp12);
		}
	}
return null();
}



RatioScaleMode_obj::RatioScaleMode_obj()
{
}

Dynamic RatioScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.RatioScaleMode","\x5d","\xbd","\x32","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RatioScaleMode_obj >;
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
} // end namespace system
} // end namespace scaleModes
