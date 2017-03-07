#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#include <flixel/util/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace util{

Void FlxCallbackPoint_obj::__construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{
HX_STACK_FRAME("flixel.util.FlxCallbackPoint","new",0xcabf2565,"flixel.util.FlxCallbackPoint.new","flixel/util/FlxPoint.hx",312,0xb59f5266)
HX_STACK_THIS(this)
HX_STACK_ARG(setXCallback,"setXCallback")
HX_STACK_ARG(setYCallback,"setYCallback")
HX_STACK_ARG(setXYCallback,"setXYCallback")
{
	HX_STACK_LINE(313)
	super::__construct(null(),null());
	HX_STACK_LINE(315)
	this->_setXCallback = setXCallback;
	HX_STACK_LINE(316)
	this->_setYCallback = setXYCallback;
	HX_STACK_LINE(317)
	this->_setXYCallback = setXYCallback;
	HX_STACK_LINE(319)
	Dynamic tmp = this->_setXCallback_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	if ((tmp1)){
		HX_STACK_LINE(321)
		Dynamic tmp2 = this->_setYCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(322)
			this->_setYCallback = setXCallback;
		}
		HX_STACK_LINE(323)
		Dynamic tmp4 = this->_setXYCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		if ((tmp5)){
			HX_STACK_LINE(324)
			this->_setXYCallback = setXCallback;
		}
	}
}
;
	return null();
}

//FlxCallbackPoint_obj::~FlxCallbackPoint_obj() { }

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return  new FlxCallbackPoint_obj; }
hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{  hx::ObjectPtr< FlxCallbackPoint_obj > _result_ = new FlxCallbackPoint_obj();
	_result_->__construct(setXCallback,setYCallback,setXYCallback);
	return _result_;}

Dynamic FlxCallbackPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCallbackPoint_obj > _result_ = new FlxCallbackPoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::flixel::util::FlxPoint FlxCallbackPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set",0xcac2f0a7,"flixel.util.FlxCallbackPoint.set","flixel/util/FlxPoint.hx",329,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(330)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		this->super::set(tmp,tmp1);
		HX_STACK_LINE(331)
		Dynamic tmp2 = this->_setXYCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		if ((tmp3)){
			HX_STACK_LINE(332)
			this->_setXYCallback(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(333)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Float FlxCallbackPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set_x",0x35ddfba0,"flixel.util.FlxCallbackPoint.set_x","flixel/util/FlxPoint.hx",337,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(338)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	this->super::set_x(tmp);
	HX_STACK_LINE(339)
	Dynamic tmp1 = this->_setXCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	if ((tmp2)){
		HX_STACK_LINE(340)
		this->_setXCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(341)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(341)
	return tmp3;
}


Float FlxCallbackPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.util.FlxCallbackPoint","set_y",0x35ddfba1,"flixel.util.FlxCallbackPoint.set_y","flixel/util/FlxPoint.hx",345,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(346)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	this->super::set_y(tmp);
	HX_STACK_LINE(347)
	Dynamic tmp1 = this->_setYCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	if ((tmp2)){
		HX_STACK_LINE(348)
		this->_setYCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(349)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	return tmp3;
}


Void FlxCallbackPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxCallbackPoint","destroy",0xf0c0e87f,"flixel.util.FlxCallbackPoint.destroy","flixel/util/FlxPoint.hx",353,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		this->super::destroy();
		HX_STACK_LINE(355)
		this->_setXCallback = null();
		HX_STACK_LINE(356)
		this->_setYCallback = null();
		HX_STACK_LINE(357)
		this->_setXYCallback = null();
	}
return null();
}


Void FlxCallbackPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxCallbackPoint","put",0xcac0b7d4,"flixel.util.FlxCallbackPoint.put","flixel/util/FlxPoint.hx",360,0xb59f5266)
		HX_STACK_THIS(this)
	}
return null();
}



FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

Dynamic FlxCallbackPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return _setXCallback; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return _setYCallback; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return _setXYCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCallbackPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCallbackPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_setXCallback","\x3a","\xe1","\x9f","\x40"),
	HX_HCSTRING("_setYCallback","\x3b","\x4a","\x91","\x13"),
	HX_HCSTRING("_setXYCallback","\x49","\x36","\x58","\xb1"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCallbackPoint","\xf3","\x8e","\xc5","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxCallbackPoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCallbackPoint_obj >;
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
