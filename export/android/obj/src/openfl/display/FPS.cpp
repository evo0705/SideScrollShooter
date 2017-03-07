#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
namespace openfl{
namespace display{

Void FPS_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_color)
{
HX_STACK_FRAME("openfl.display.FPS","new",0xe5d2c231,"openfl.display.FPS.new","openfl/display/FPS.hx",19,0x584764e1)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_color,"color")
Float x = __o_x.Default(10);
Float y = __o_y.Default(10);
int color = __o_color.Default(0);
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(23)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->set_x(tmp);
	HX_STACK_LINE(24)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->set_y(tmp1);
	HX_STACK_LINE(26)
	this->currentFPS = (int)0;
	HX_STACK_LINE(27)
	this->set_selectable(false);
	HX_STACK_LINE(28)
	this->set_mouseEnabled(false);
	HX_STACK_LINE(29)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"),(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	this->set_defaultTextFormat(tmp2);
	HX_STACK_LINE(30)
	this->set_text(HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83"));
	HX_STACK_LINE(32)
	this->cacheCount = (int)0;
	HX_STACK_LINE(33)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(35)
	::String tmp3 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	Dynamic tmp4 = this->this_onEnterFrame_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	this->addEventListener(tmp3,tmp4,null(),null(),null());
}
;
	return null();
}

//FPS_obj::~FPS_obj() { }

Dynamic FPS_obj::__CreateEmpty() { return  new FPS_obj; }
hx::ObjectPtr< FPS_obj > FPS_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_color)
{  hx::ObjectPtr< FPS_obj > _result_ = new FPS_obj();
	_result_->__construct(__o_x,__o_y,__o_color);
	return _result_;}

Dynamic FPS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPS_obj > _result_ = new FPS_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FPS_obj::this_onEnterFrame( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl.display.FPS","this_onEnterFrame",0x56ef2d46,"openfl.display.FPS.this_onEnterFrame","openfl/display/FPS.hx",47,0x584764e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(49)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Float currentTime = tmp;		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(50)
		Float tmp1 = currentTime;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		this->times->push(tmp1);
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			Float tmp2 = this->times->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			Float tmp3 = (currentTime - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			if ((tmp5)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(54)
			this->times->shift();
		}
		HX_STACK_LINE(58)
		int tmp2 = this->times->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		int currentCount = tmp2;		HX_STACK_VAR(currentCount,"currentCount");
		HX_STACK_LINE(59)
		int tmp3 = currentCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		int tmp4 = this->cacheCount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		this->currentFPS = tmp7;
		HX_STACK_LINE(61)
		int tmp8 = currentCount;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		int tmp9 = this->cacheCount;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		if ((tmp10)){
			HX_STACK_LINE(63)
			int tmp11 = this->currentFPS;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			::String tmp12 = (HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			this->set_text(tmp12);
		}
		HX_STACK_LINE(67)
		this->cacheCount = currentCount;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FPS_obj,this_onEnterFrame,(void))


FPS_obj::FPS_obj()
{
}

void FPS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS);
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(cacheCount,"cacheCount");
	HX_MARK_MEMBER_NAME(times,"times");
	::openfl::_legacy::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(cacheCount,"cacheCount");
	HX_VISIT_MEMBER_NAME(times,"times");
	::openfl::_legacy::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FPS_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return currentFPS; }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { return cacheCount; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return this_onEnterFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FPS_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { cacheCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FPS_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FPS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"));
	outFields->push(HX_HCSTRING("cacheCount","\x2d","\xab","\x1b","\x8d"));
	outFields->push(HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FPS_obj,currentFPS),HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7")},
	{hx::fsInt,(int)offsetof(FPS_obj,cacheCount),HX_HCSTRING("cacheCount","\x2d","\xab","\x1b","\x8d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FPS_obj,times),HX_HCSTRING("times","\xc6","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentFPS","\x30","\x71","\x28","\xc7"),
	HX_HCSTRING("cacheCount","\x2d","\xab","\x1b","\x8d"),
	HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"),
	HX_HCSTRING("this_onEnterFrame","\xb5","\x0f","\x1f","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

#endif

hx::Class FPS_obj::__mClass;

void FPS_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.FPS","\xbf","\xd5","\x7f","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FPS_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FPS_obj >;
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

} // end namespace openfl
} // end namespace display
