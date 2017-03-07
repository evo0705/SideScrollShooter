#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Multitouch
#include <openfl/_legacy/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace ui{

Void Multitouch_obj::__construct()
{
	return null();
}

//Multitouch_obj::~Multitouch_obj() { }

Dynamic Multitouch_obj::__CreateEmpty() { return  new Multitouch_obj; }
hx::ObjectPtr< Multitouch_obj > Multitouch_obj::__new()
{  hx::ObjectPtr< Multitouch_obj > _result_ = new Multitouch_obj();
	_result_->__construct();
	return _result_;}

Dynamic Multitouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Multitouch_obj > _result_ = new Multitouch_obj();
	_result_->__construct();
	return _result_;}

void Multitouch_obj::__init__() {
HX_STACK_FRAME("openfl._legacy.ui.Multitouch","__init__",0x065447c2,"openfl._legacy.ui.Multitouch.__init__","openfl/_legacy/ui/Multitouch.hx",18,0xaba8e463)
{
	HX_STACK_LINE(20)
	::openfl::_legacy::ui::Multitouch_obj::maxTouchPoints = (int)2;
	HX_STACK_LINE(21)
	::openfl::_legacy::ui::Multitouch_obj::supportedGestures = null();
	HX_STACK_LINE(22)
	::openfl::_legacy::ui::Multitouch_obj::supportsGestureEvents = false;
}
}

int Multitouch_obj::maxTouchPoints;

Array< ::String > Multitouch_obj::supportedGestures;

bool Multitouch_obj::supportsGestureEvents;

bool Multitouch_obj::supportsTouchEvents;

::openfl::ui::MultitouchInputMode Multitouch_obj::get_inputMode( ){
	HX_STACK_FRAME("openfl._legacy.ui.Multitouch","get_inputMode",0xa405dcb2,"openfl._legacy.ui.Multitouch.get_inputMode","openfl/_legacy/ui/Multitouch.hx",34,0xaba8e463)
	HX_STACK_LINE(36)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Dynamic tmp2 = tmp1->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	bool tmp3 = ::openfl::_legacy::ui::Multitouch_obj::lime_stage_get_multitouch_active(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	if ((tmp3)){
		HX_STACK_LINE(38)
		return ::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT;
	}
	else{
		HX_STACK_LINE(42)
		return ::openfl::ui::MultitouchInputMode_obj::NONE;
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_inputMode,return )

::openfl::ui::MultitouchInputMode Multitouch_obj::set_inputMode( ::openfl::ui::MultitouchInputMode value){
	HX_STACK_FRAME("openfl._legacy.ui.Multitouch","set_inputMode",0xe90bbebe,"openfl._legacy.ui.Multitouch.set_inputMode","openfl/_legacy/ui/Multitouch.hx",49,0xaba8e463)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	bool tmp = (value == ::openfl::ui::MultitouchInputMode_obj::GESTURE);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(53)
		::openfl::ui::MultitouchInputMode tmp1 = ::openfl::_legacy::ui::Multitouch_obj::get_inputMode();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		return tmp1;
	}
	HX_STACK_LINE(57)
	::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	Dynamic tmp3 = tmp2->__handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	bool tmp4 = (value == ::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	::openfl::_legacy::ui::Multitouch_obj::lime_stage_set_multitouch_active(tmp3,tmp4);
	HX_STACK_LINE(58)
	::openfl::ui::MultitouchInputMode tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Multitouch_obj,set_inputMode,return )

bool Multitouch_obj::get_supportsTouchEvents( ){
	HX_STACK_FRAME("openfl._legacy.ui.Multitouch","get_supportsTouchEvents",0xc394bd79,"openfl._legacy.ui.Multitouch.get_supportsTouchEvents","openfl/_legacy/ui/Multitouch.hx",63,0xaba8e463)
	HX_STACK_LINE(63)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	Dynamic tmp2 = tmp1->__handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	bool tmp3 = ::openfl::_legacy::ui::Multitouch_obj::lime_stage_get_multitouch_supported(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_supportsTouchEvents,return )

Dynamic Multitouch_obj::lime_stage_get_multitouch_supported;

Dynamic Multitouch_obj::lime_stage_get_multitouch_active;

Dynamic Multitouch_obj::lime_stage_set_multitouch_active;


Multitouch_obj::Multitouch_obj()
{
}

bool Multitouch_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { if (inCallProp == hx::paccAlways) { outValue = get_inputMode(); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_inputMode") ) { outValue = get_inputMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_inputMode") ) { outValue = set_inputMode_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = maxTouchPoints; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { outValue = supportedGestures; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { outValue = inCallProp == hx::paccAlways ? get_supportsTouchEvents() : supportsTouchEvents; return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { outValue = supportsGestureEvents; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_supportsTouchEvents") ) { outValue = get_supportsTouchEvents_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_active") ) { outValue = lime_stage_get_multitouch_active; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_multitouch_active") ) { outValue = lime_stage_set_multitouch_active; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_stage_get_multitouch_supported") ) { outValue = lime_stage_get_multitouch_supported; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Multitouch_obj::maxTouchPoints,HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Multitouch_obj::supportedGestures,HX_HCSTRING("supportedGestures","\x18","\xbe","\xc8","\xbc")},
	{hx::fsBool,(void *) &Multitouch_obj::supportsGestureEvents,HX_HCSTRING("supportsGestureEvents","\x5e","\xd6","\xce","\x30")},
	{hx::fsBool,(void *) &Multitouch_obj::supportsTouchEvents,HX_HCSTRING("supportsTouchEvents","\x14","\xf1","\x9d","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Multitouch_obj::lime_stage_get_multitouch_supported,HX_HCSTRING("lime_stage_get_multitouch_supported","\xa9","\x1d","\x94","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Multitouch_obj::lime_stage_get_multitouch_active,HX_HCSTRING("lime_stage_get_multitouch_active","\x6b","\x3f","\x68","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Multitouch_obj::lime_stage_set_multitouch_active,HX_HCSTRING("lime_stage_set_multitouch_active","\x77","\x0d","\x71","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_supported,"lime_stage_get_multitouch_supported");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_active,"lime_stage_get_multitouch_active");
	HX_MARK_MEMBER_NAME(Multitouch_obj::lime_stage_set_multitouch_active,"lime_stage_set_multitouch_active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_supported,"lime_stage_get_multitouch_supported");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_get_multitouch_active,"lime_stage_get_multitouch_active");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::lime_stage_set_multitouch_active,"lime_stage_set_multitouch_active");
};

#endif

hx::Class Multitouch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64"),
	HX_HCSTRING("supportedGestures","\x18","\xbe","\xc8","\xbc"),
	HX_HCSTRING("supportsGestureEvents","\x5e","\xd6","\xce","\x30"),
	HX_HCSTRING("supportsTouchEvents","\x14","\xf1","\x9d","\x6a"),
	HX_HCSTRING("get_inputMode","\x64","\x64","\xef","\xd0"),
	HX_HCSTRING("set_inputMode","\x70","\x46","\xf5","\x15"),
	HX_HCSTRING("get_supportsTouchEvents","\xab","\x97","\xf3","\x72"),
	HX_HCSTRING("lime_stage_get_multitouch_supported","\xa9","\x1d","\x94","\xfe"),
	HX_HCSTRING("lime_stage_get_multitouch_active","\x6b","\x3f","\x68","\x7f"),
	HX_HCSTRING("lime_stage_set_multitouch_active","\x77","\x0d","\x71","\xd3"),
	::String(null()) };

void Multitouch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.ui.Multitouch","\x3c","\x0c","\x3b","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Multitouch_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Multitouch_obj >;
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

void Multitouch_obj::__boot()
{
	lime_stage_get_multitouch_supported= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_multitouch_supported","\x0b","\x41","\xad","\xe4"),(int)1);
	lime_stage_get_multitouch_active= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_multitouch_active","\xc9","\x0a","\x62","\x87"),(int)1);
	lime_stage_set_multitouch_active= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_multitouch_active","\xd5","\xd8","\x6a","\xdb"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace ui
