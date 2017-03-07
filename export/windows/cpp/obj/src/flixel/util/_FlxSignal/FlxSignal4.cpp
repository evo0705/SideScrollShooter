#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal4
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignal4_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal4","new",0xd1f9e1e5,"flixel.util._FlxSignal.FlxSignal4.new","flixel/util/FlxSignal.hx",272,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(273)
	super::__construct();
	HX_STACK_LINE(274)
	Dynamic tmp = this->dispatch4_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	this->dispatch = tmp;
}
;
	return null();
}

//FlxSignal4_obj::~FlxSignal4_obj() { }

Dynamic FlxSignal4_obj::__CreateEmpty() { return  new FlxSignal4_obj; }
hx::ObjectPtr< FlxSignal4_obj > FlxSignal4_obj::__new()
{  hx::ObjectPtr< FlxSignal4_obj > _result_ = new FlxSignal4_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSignal4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal4_obj > _result_ = new FlxSignal4_obj();
	_result_->__construct();
	return _result_;}

Void FlxSignal4_obj::dispatch4( Dynamic value1,Dynamic value2,Dynamic value3,Dynamic value4){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal4","dispatch4",0x92a0977f,"flixel.util._FlxSignal.FlxSignal4.dispatch4","flixel/util/FlxSignal.hx",103,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_ARG(value4,"value4")
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		Array< ::Dynamic > _g1 = this->_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			if ((tmp1)){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(279)
			Dynamic tmp3 = value1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			Dynamic tmp4 = value2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			Dynamic tmp5 = value3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			Dynamic tmp6 = value4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			handler->listener(tmp3,tmp4,tmp5,tmp6);
			HX_STACK_LINE(107)
			bool tmp7 = handler->dispatchOnce;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			if ((tmp7)){
				HX_STACK_LINE(108)
				Dynamic tmp8 = handler->listener;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				this->remove(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSignal4_obj,dispatch4,(void))


FlxSignal4_obj::FlxSignal4_obj()
{
}

Dynamic FlxSignal4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch4") ) { return dispatch4_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispatch4","\x3a","\x14","\xf1","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal4_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignal4_obj::__mClass;

void FlxSignal4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignal4","\x73","\x0b","\xc8","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignal4_obj >;
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
} // end namespace _FlxSignal
