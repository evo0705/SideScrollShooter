#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void LogFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",9,0x686ab8c3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->redirectTraces = false;
	HX_STACK_LINE(107)
	Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	this->_standardTraceFunction = tmp;
}
;
	return null();
}

//LogFrontEnd_obj::~LogFrontEnd_obj() { }

Dynamic LogFrontEnd_obj::__CreateEmpty() { return  new LogFrontEnd_obj; }
hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new()
{  hx::ObjectPtr< LogFrontEnd_obj > _result_ = new LogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic LogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogFrontEnd_obj > _result_ = new LogFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void LogFrontEnd_obj::add( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",19,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(21)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::NORMAL;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		this->advanced(tmp,tmp1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

Void LogFrontEnd_obj::warn( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",26,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(28)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->advanced(tmp,tmp1,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

Void LogFrontEnd_obj::error( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",33,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(35)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->advanced(tmp,tmp1,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

Void LogFrontEnd_obj::notice( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",40,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(42)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::NOTICE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		this->advanced(tmp,tmp1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

Void LogFrontEnd_obj::advanced( Dynamic Data,::flixel::_system::debug::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",54,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(FireOnce,"FireOnce")
{
		HX_STACK_LINE(56)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::flixel::_system::debug::FlxDebugger tmp1 = tmp->debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(58)
			this->_standardTraceFunction(Data);
			HX_STACK_LINE(59)
			return null();
		}
		HX_STACK_LINE(62)
		bool tmp3 = (Style == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::flixel::_system::debug::LogStyle tmp4 = ::flixel::_system::debug::LogStyle_obj::NORMAL;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			Style = tmp4;
		}
		HX_STACK_LINE(67)
		Dynamic tmp4 = Data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		if ((tmp6)){
			HX_STACK_LINE(69)
			Data = cpp::ArrayBase_obj::__new().Add(Data);
		}
		HX_STACK_LINE(72)
		::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		::flixel::_system::debug::Log tmp8 = tmp7->debugger->__Field(HX_HCSTRING("log","\x84","\x54","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		Dynamic tmp9 = Data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		::flixel::_system::debug::LogStyle tmp10 = Style;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		bool tmp11 = FireOnce;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(72)
		bool tmp12 = tmp8->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		if ((tmp12)){
			HX_STACK_LINE(75)
			bool tmp13 = (Style->__Field(HX_HCSTRING("errorSound","\xe7","\x7b","\xd0","\xf5"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			if ((tmp13)){
				HX_STACK_LINE(77)
				::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(77)
				::openfl::_legacy::media::Sound tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
					HX_STACK_LINE(77)
					extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
					HX_STACK_LINE(77)
					::String tmp16 = (Style->__Field(HX_HCSTRING("errorSound","\xe7","\x7b","\xd0","\xf5"), hx::paccDynamic ) + extension);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(77)
					tmp15 = ::openfl::_legacy::Assets_obj::getSound(tmp16,null());
				}
				HX_STACK_LINE(77)
				::openfl::_legacy::media::SoundChannel tmp16 = tmp15->play(null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(77)
				tmp14->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp16,null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(81)
			bool tmp14 = Style->__Field(HX_HCSTRING("openConsole","\xad","\x7c","\x17","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			if ((tmp14)){
				HX_STACK_LINE(83)
				::flixel::FlxGame tmp15 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(83)
				tmp15->debugger->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
				HX_STACK_LINE(83)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp16 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(83)
				tmp16->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = true;
			}
			HX_STACK_LINE(86)
			Dynamic tmp15 = Style->__FieldRef(HX_HCSTRING("callbackFunction","\xfd","\xcd","\x91","\x7e")) = null();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(86)
			if ((tmp15)){
				HX_STACK_LINE(88)
				Style->__Field(HX_HCSTRING("callbackFunction","\xfd","\xcd","\x91","\x7e"), hx::paccDynamic )();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

Void LogFrontEnd_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",98,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::flixel::_system::debug::Log tmp1 = tmp->debugger->__Field(HX_HCSTRING("log","\x84","\x54","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		tmp1->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces( bool Redirect){
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",111,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Redirect,"Redirect")
	HX_STACK_LINE(112)
	bool tmp = Redirect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp)){
		HX_STACK_LINE(112)
		tmp1 = this->processTraceData_dyn();
	}
	else{
		HX_STACK_LINE(112)
		tmp1 = this->_standardTraceFunction;
	}
	HX_STACK_LINE(112)
	::haxe::Log_obj::trace = tmp1;
	HX_STACK_LINE(113)
	bool tmp2 = this->redirectTraces = Redirect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

Void LogFrontEnd_obj::processTraceData( Dynamic Data,Dynamic Info){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",123,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Info,"Info")
		HX_STACK_LINE(124)
		cpp::ArrayBase paramArray = cpp::ArrayBase_obj::__new().Add(Data);		HX_STACK_VAR(paramArray,"paramArray");
		HX_STACK_LINE(126)
		bool tmp = (Info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		if ((tmp)){
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			cpp::ArrayBase _g1 = Info->__Field(HX_HCSTRING("customParams","\xd7","\x51","\x18","\xed"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(128)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(128)
				if ((tmp2)){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(128)
				Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(128)
				Dynamic i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				Dynamic tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(130)
				paramArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
			}
		}
		HX_STACK_LINE(134)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::NORMAL;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		this->advanced(paramArray,tmp1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

Dynamic LogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return notice_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return advanced_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return redirectTraces; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return processTraceData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return set_redirectTraces_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return _standardTraceFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp == hx::paccAlways) return set_redirectTraces(inValue);redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LogFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"));
	outFields->push(HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"),
	HX_HCSTRING("_standardTraceFunction","\x81","\xb2","\x89","\x66"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("notice","\x18","\xd8","\xb8","\x31"),
	HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_redirectTraces","\xc7","\xe1","\x1f","\x83"),
	HX_HCSTRING("processTraceData","\xe0","\x2e","\xf4","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.LogFrontEnd","\x5c","\xbd","\x97","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LogFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogFrontEnd_obj >;
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
} // end namespace frontEnds
