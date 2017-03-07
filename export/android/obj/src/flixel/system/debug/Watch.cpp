#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void Watch_obj::__construct(hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.Watch","new",0x42e63119,"flixel.system.debug.Watch.new","flixel/system/debug/Watch.hx",38,0x3c078798)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Closable,"Closable")
bool Closable = __o_Closable.Default(false);
{
	HX_STACK_LINE(39)
	::flixel::_system::debug::GraphicWatch tmp = ::flixel::_system::debug::GraphicWatch_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = Closable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	super::__construct(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),tmp,(int)0,(int)0,true,null(),tmp1);
	HX_STACK_LINE(41)
	::openfl::_legacy::display::Sprite tmp2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	this->_names = tmp2;
	HX_STACK_LINE(42)
	::openfl::_legacy::display::Sprite tmp3 = this->_names;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	tmp3->set_x((int)2);
	HX_STACK_LINE(43)
	::openfl::_legacy::display::Sprite tmp4 = this->_names;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	tmp4->set_y((int)15);
	HX_STACK_LINE(44)
	::openfl::_legacy::display::Sprite tmp5 = this->_names;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	this->addChild(tmp5);
	HX_STACK_LINE(46)
	::openfl::_legacy::display::Sprite tmp6 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->_values = tmp6;
	HX_STACK_LINE(47)
	::openfl::_legacy::display::Sprite tmp7 = this->_values;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(47)
	tmp7->set_x((int)2);
	HX_STACK_LINE(48)
	::openfl::_legacy::display::Sprite tmp8 = this->_values;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	tmp8->set_y((int)15);
	HX_STACK_LINE(49)
	::openfl::_legacy::display::Sprite tmp9 = this->_values;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	this->addChild(tmp9);
	HX_STACK_LINE(51)
	this->_watching = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	::haxe::ds::StringMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp11 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		tmp10 = tmp12;
	}
	HX_STACK_LINE(52)
	this->_quickWatchList = tmp10;
	HX_STACK_LINE(54)
	this->editing = false;
	HX_STACK_LINE(56)
	this->removeAll();
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::flixel::_system::frontEnds::SignalFrontEnd tmp11 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		Dynamic tmp12 = this->removeAll_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		tmp11->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp12);
	}
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(__o_Closable);
	return _result_;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > _result_ = new Watch_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Watch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","destroy",0x14e9de33,"flixel.system.debug.Watch.destroy","flixel/system/debug/Watch.hx",64,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::openfl::_legacy::display::Sprite tmp = this->_names;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(67)
			::openfl::_legacy::display::Sprite tmp2 = this->_names;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			this->removeChild(tmp2);
			HX_STACK_LINE(68)
			this->_names = null();
		}
		HX_STACK_LINE(70)
		::openfl::_legacy::display::Sprite tmp2 = this->_values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		if ((tmp3)){
			HX_STACK_LINE(72)
			::openfl::_legacy::display::Sprite tmp4 = this->_values;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			this->removeChild(tmp4);
			HX_STACK_LINE(73)
			this->_values = null();
		}
		HX_STACK_LINE(75)
		bool tmp4 = (this->_watching != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(77)
			{
				HX_STACK_LINE(77)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(77)
				Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					if ((tmp6)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(77)
					::flixel::_system::debug::WatchEntry tmp7 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(77)
					::flixel::_system::debug::WatchEntry watchEntry = tmp7;		HX_STACK_VAR(watchEntry,"watchEntry");
					HX_STACK_LINE(77)
					++(_g);
					HX_STACK_LINE(79)
					::flixel::_system::debug::WatchEntry tmp8 = watchEntry;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					::flixel::_system::debug::WatchEntry tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					watchEntry = tmp9;
				}
			}
			HX_STACK_LINE(81)
			this->_watching = null();
		}
		HX_STACK_LINE(83)
		this->_quickWatchList = null();
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::flixel::_system::frontEnds::SignalFrontEnd tmp5 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Dynamic tmp6 = this->removeAll_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			tmp5->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(86)
		this->super::destroy();
	}
return null();
}


Void Watch_obj::add( Dynamic AnyObject,::String VariableName,::String DisplayName){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","add",0x42dc52da,"flixel.system.debug.Watch.add","flixel/system/debug/Watch.hx",98,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(DisplayName,"DisplayName")
		HX_STACK_LINE(100)
		::String tmp = VariableName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Dynamic tmp1 = AnyObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Dynamic tmp2 = ::flixel::_system::debug::ConsoleUtil_obj::resolveObjectAndVariable(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		Dynamic varData = tmp2;		HX_STACK_VAR(varData,"varData");
		HX_STACK_LINE(101)
		AnyObject = varData->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );
		HX_STACK_LINE(102)
		VariableName = varData->__Field(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69"), hx::paccDynamic );
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				if ((tmp4)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::flixel::_system::debug::WatchEntry tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				::flixel::_system::debug::WatchEntry watchEntry = tmp5;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				bool tmp6 = (watchEntry->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic ) == AnyObject);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				if ((tmp6)){
					HX_STACK_LINE(107)
					tmp7 = (watchEntry->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ) == VariableName);
				}
				else{
					HX_STACK_LINE(107)
					tmp7 = false;
				}
				HX_STACK_LINE(107)
				if ((tmp7)){
					HX_STACK_LINE(109)
					return null();
				}
			}
		}
		HX_STACK_LINE(114)
		int tmp3 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		int tmp4 = (tmp3 * (int)15);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(114)
		Float tmp9 = (tmp8 - (int)10);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(114)
		Dynamic tmp10 = AnyObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		::String tmp11 = VariableName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		::String tmp12 = DisplayName;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(114)
		::flixel::_system::debug::WatchEntry tmp13 = ::flixel::_system::debug::WatchEntry_obj::__new(tmp4,tmp6,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(114)
		::flixel::_system::debug::WatchEntry watchEntry = tmp13;		HX_STACK_VAR(watchEntry,"watchEntry");
		HX_STACK_LINE(116)
		bool tmp14 = (watchEntry->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(116)
		if ((tmp14)){
			HX_STACK_LINE(118)
			watchEntry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(119)
			watchEntry = null();
			HX_STACK_LINE(120)
			return null();
		}
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Sprite tmp15 = this->_names;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		::openfl::_legacy::text::TextField tmp16 = watchEntry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		tmp15->addChild(tmp16);
		HX_STACK_LINE(124)
		::openfl::_legacy::display::Sprite tmp17 = this->_values;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		::openfl::_legacy::text::TextField tmp18 = watchEntry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		tmp17->addChild(tmp18);
		HX_STACK_LINE(125)
		::flixel::_system::debug::WatchEntry tmp19 = watchEntry;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		this->_watching->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,add,(void))

Void Watch_obj::updateQuickWatch( ::String Name,Dynamic NewValue){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","updateQuickWatch",0xf6d27332,"flixel.system.debug.Watch.updateQuickWatch","flixel/system/debug/Watch.hx",136,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(NewValue,"NewValue")
		HX_STACK_LINE(138)
		::haxe::ds::StringMap tmp = this->_quickWatchList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		::flixel::_system::debug::WatchEntry tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		::flixel::_system::debug::WatchEntry tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		if ((tmp4)){
			HX_STACK_LINE(140)
			int tmp5 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			int tmp6 = (tmp5 * (int)15);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			int tmp9 = this->_width;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			Float tmp11 = (tmp10 - (int)10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			::String tmp12 = Name;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			::flixel::_system::debug::WatchEntry tmp13 = ::flixel::_system::debug::WatchEntry_obj::__new(tmp6,tmp8,tmp11,null(),null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			::flixel::_system::debug::WatchEntry quickWatch = tmp13;		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(141)
			::openfl::_legacy::display::Sprite tmp14 = this->_names;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			::openfl::_legacy::text::TextField tmp15 = quickWatch->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(141)
			tmp14->addChild(tmp15);
			HX_STACK_LINE(142)
			::openfl::_legacy::display::Sprite tmp16 = this->_values;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(142)
			::openfl::_legacy::text::TextField tmp17 = quickWatch->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(142)
			tmp16->addChild(tmp17);
			HX_STACK_LINE(143)
			::flixel::_system::debug::WatchEntry tmp18 = quickWatch;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(143)
			this->_watching->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp18);
			HX_STACK_LINE(144)
			::haxe::ds::StringMap tmp19 = this->_quickWatchList;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(144)
			::String tmp20 = Name;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(144)
			::flixel::_system::debug::WatchEntry tmp21 = quickWatch;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(144)
			tmp19->set(tmp20,tmp21);
		}
		HX_STACK_LINE(148)
		::haxe::ds::StringMap tmp5 = this->_quickWatchList;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		::String tmp6 = Name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		::flixel::_system::debug::WatchEntry tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(148)
		::flixel::_system::debug::WatchEntry quickWatch = tmp7;		HX_STACK_VAR(quickWatch,"quickWatch");
		HX_STACK_LINE(150)
		bool tmp8 = (quickWatch != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		if ((tmp8)){
			HX_STACK_LINE(152)
			Dynamic tmp9 = NewValue;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(152)
			quickWatch->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,updateQuickWatch,(void))

Void Watch_obj::remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","remove",0x17fab52b,"flixel.system.debug.Watch.remove","flixel/system/debug/Watch.hx",164,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_ARG(VariableName,"VariableName")
		HX_STACK_ARG(QuickWatchName,"QuickWatchName")
		HX_STACK_LINE(166)
		bool tmp = (AnyObject == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		if ((tmp1)){
			HX_STACK_LINE(166)
			tmp2 = (VariableName == null());
		}
		else{
			HX_STACK_LINE(166)
			tmp2 = false;
		}
		HX_STACK_LINE(166)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(166)
			tmp3 = (QuickWatchName != null());
		}
		else{
			HX_STACK_LINE(166)
			tmp3 = false;
		}
		HX_STACK_LINE(166)
		if ((tmp3)){
			HX_STACK_LINE(168)
			::haxe::ds::StringMap tmp4 = this->_quickWatchList;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			::String tmp5 = QuickWatchName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			::flixel::_system::debug::WatchEntry tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			::flixel::_system::debug::WatchEntry quickWatch = tmp6;		HX_STACK_VAR(quickWatch,"quickWatch");
			HX_STACK_LINE(170)
			bool tmp7 = (quickWatch != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			if ((tmp7)){
				HX_STACK_LINE(172)
				::flixel::_system::debug::WatchEntry tmp8 = quickWatch;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				::flixel::_system::debug::WatchEntry tmp9 = quickWatch;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				int tmp10 = this->_watching->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				this->removeEntry(tmp8,tmp10);
			}
			HX_STACK_LINE(174)
			::haxe::ds::StringMap tmp8 = this->_quickWatchList;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			::String tmp9 = QuickWatchName;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			tmp8->remove(tmp9);
			HX_STACK_LINE(177)
			return null();
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			int tmp4 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			while((true)){
				HX_STACK_LINE(181)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				if ((tmp6)){
					HX_STACK_LINE(181)
					break;
				}
				HX_STACK_LINE(181)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(183)
				::flixel::_system::debug::WatchEntry tmp8 = this->_watching->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				::flixel::_system::debug::WatchEntry watchEntry = tmp8;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(184)
				bool tmp9 = (watchEntry != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(184)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(184)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(184)
				if ((tmp10)){
					HX_STACK_LINE(184)
					tmp11 = (watchEntry->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic ) == AnyObject);
				}
				else{
					HX_STACK_LINE(184)
					tmp11 = false;
				}
				HX_STACK_LINE(184)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(184)
				if ((tmp11)){
					HX_STACK_LINE(184)
					bool tmp13 = (VariableName == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(184)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(184)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(184)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(184)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(184)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(184)
					if ((tmp18)){
						HX_STACK_LINE(184)
						tmp12 = (watchEntry->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic ) == VariableName);
					}
					else{
						HX_STACK_LINE(184)
						tmp12 = true;
					}
				}
				else{
					HX_STACK_LINE(184)
					tmp12 = false;
				}
				HX_STACK_LINE(184)
				if ((tmp12)){
					HX_STACK_LINE(186)
					::flixel::_system::debug::WatchEntry tmp13 = watchEntry;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(186)
					this->removeEntry(tmp13,tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Watch_obj,remove,(void))

Void Watch_obj::removeEntry( ::flixel::_system::debug::WatchEntry Entry,int Index){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","removeEntry",0x8b219747,"flixel.system.debug.Watch.removeEntry","flixel/system/debug/Watch.hx",195,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Entry,"Entry")
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			Array< ::Dynamic > array = this->_watching;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(196)
			::flixel::_system::debug::WatchEntry tmp = Entry;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(196)
			int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			int index = tmp1;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(196)
			bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			if ((tmp2)){
				HX_STACK_LINE(196)
				int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(196)
				::flixel::_system::debug::WatchEntry tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				array[index] = tmp4;
				HX_STACK_LINE(196)
				array->pop().StaticCast< ::flixel::_system::debug::WatchEntry >();
				HX_STACK_LINE(196)
				array;
			}
			else{
				HX_STACK_LINE(196)
				array;
			}
		}
		HX_STACK_LINE(198)
		::openfl::_legacy::display::Sprite tmp = this->_names;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::openfl::_legacy::text::TextField tmp1 = Entry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(199)
		::openfl::_legacy::display::Sprite tmp2 = this->_values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		::openfl::_legacy::text::TextField tmp3 = Entry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		tmp2->removeChild(tmp3);
		HX_STACK_LINE(200)
		Entry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			int tmp4 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				if ((tmp6)){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(205)
				::flixel::_system::debug::WatchEntry tmp8 = this->_watching->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(205)
				int tmp9 = (i * (int)15);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(205)
				tmp8->__Field(HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"), hx::paccDynamic )(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Watch_obj,removeEntry,(void))

Void Watch_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","removeAll",0x608248b6,"flixel.system.debug.Watch.removeAll","flixel/system/debug/Watch.hx",213,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			while((true)){
				HX_STACK_LINE(214)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(214)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(214)
				if ((tmp1)){
					HX_STACK_LINE(214)
					break;
				}
				HX_STACK_LINE(214)
				::flixel::_system::debug::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(214)
				::flixel::_system::debug::WatchEntry watchEntry = tmp2;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(214)
				++(_g);
				HX_STACK_LINE(216)
				::openfl::_legacy::display::Sprite tmp3 = this->_names;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(216)
				::openfl::_legacy::text::TextField tmp4 = watchEntry->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				tmp3->removeChild(tmp4);
				HX_STACK_LINE(217)
				::openfl::_legacy::display::Sprite tmp5 = this->_values;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(217)
				::openfl::_legacy::text::TextField tmp6 = watchEntry->__Field(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(217)
				tmp5->removeChild(tmp6);
				HX_STACK_LINE(218)
				watchEntry->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(221)
		this->_watching = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(222)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(222)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			tmp = tmp2;
		}
		HX_STACK_LINE(222)
		this->_quickWatchList = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,removeAll,(void))

Void Watch_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","update",0x9a779ef0,"flixel.system.debug.Watch.update","flixel/system/debug/Watch.hx",229,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		this->editing = false;
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(232)
			while((true)){
				HX_STACK_LINE(232)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(232)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(232)
				if ((tmp1)){
					HX_STACK_LINE(232)
					break;
				}
				HX_STACK_LINE(232)
				::flixel::_system::debug::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(232)
				::flixel::_system::debug::WatchEntry watchEntry = tmp2;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(232)
				++(_g);
				HX_STACK_LINE(234)
				bool tmp3 = watchEntry->__Field(HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(234)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(234)
				if ((tmp4)){
					HX_STACK_LINE(235)
					this->editing = true;
				}
			}
		}
	}
return null();
}


Void Watch_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","submit",0xad7870ff,"flixel.system.debug.Watch.submit","flixel/system/debug/Watch.hx",243,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(244)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(244)
				if ((tmp1)){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				::flixel::_system::debug::WatchEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				::flixel::_system::debug::WatchEntry watchEntry = tmp2;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(244)
				++(_g);
				HX_STACK_LINE(246)
				bool tmp3 = watchEntry->__Field(HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(246)
				if ((tmp3)){
					HX_STACK_LINE(247)
					watchEntry->__Field(HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"), hx::paccDynamic )();
				}
			}
		}
		HX_STACK_LINE(250)
		this->editing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Watch_obj,submit,(void))

Void Watch_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Watch","updateSize",0x58f6a3d1,"flixel.system.debug.Watch.updateSize","flixel/system/debug/Watch.hx",258,0x3c078798)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		int tmp2 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		int tmp3 = (tmp2 * (int)15);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		int tmp4 = (tmp3 + (int)17);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		bool tmp5 = (tmp1 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		if ((tmp5)){
			HX_STACK_LINE(261)
			int tmp6 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(261)
			int tmp7 = (tmp6 * (int)15);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			int tmp8 = (tmp7 + (int)17);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			this->_height = tmp8;
		}
		HX_STACK_LINE(264)
		this->super::updateSize();
		HX_STACK_LINE(266)
		::openfl::_legacy::display::Sprite tmp6 = this->_values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(266)
		Float tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(266)
		tmp6->set_x(tmp9);
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			Array< ::Dynamic > _g1 = this->_watching;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				if ((tmp11)){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				::flixel::_system::debug::WatchEntry tmp12 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(268)
				::flixel::_system::debug::WatchEntry watchEntry = tmp12;		HX_STACK_VAR(watchEntry,"watchEntry");
				HX_STACK_LINE(268)
				++(_g);
				HX_STACK_LINE(270)
				int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(270)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(270)
				int tmp15 = this->_width;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(270)
				Float tmp17 = (tmp16 - (int)10);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(270)
				watchEntry->__Field(HX_HCSTRING("updateWidth","\x3d","\x1f","\xfb","\xaf"), hx::paccDynamic )(tmp14,tmp17);
			}
		}
	}
return null();
}


int Watch_obj::MAX_LOG_LINES;

int Watch_obj::LINE_HEIGHT;


Watch_obj::Watch_obj()
{
}

void Watch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Watch);
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(_names,"_names");
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_watching,"_watching");
	HX_MARK_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Watch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(_names,"_names");
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_watching,"_watching");
	HX_VISIT_MEMBER_NAME(_quickWatchList,"_quickWatchList");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Watch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { return _names; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { return _watching; }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeEntry") ) { return removeEntry_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { return _quickWatchList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateQuickWatch") ) { return updateQuickWatch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_names") ) { _names=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_watching") ) { _watching=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_quickWatchList") ) { _quickWatchList=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Watch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"));
	outFields->push(HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92"));
	outFields->push(HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"));
	outFields->push(HX_HCSTRING("_watching","\x52","\x89","\xca","\x46"));
	outFields->push(HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Watch_obj,editing),HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,_names),HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Watch_obj,_values),HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Watch_obj,_watching),HX_HCSTRING("_watching","\x52","\x89","\xca","\x46")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Watch_obj,_quickWatchList),HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Watch_obj::MAX_LOG_LINES,HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12")},
	{hx::fsInt,(void *) &Watch_obj::LINE_HEIGHT,HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"),
	HX_HCSTRING("_names","\x09","\xd7","\x6b","\x92"),
	HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"),
	HX_HCSTRING("_watching","\x52","\x89","\xca","\x46"),
	HX_HCSTRING("_quickWatchList","\x3f","\x0e","\xf2","\x22"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("updateQuickWatch","\x8b","\x93","\x1f","\x3e"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeEntry","\x8e","\x55","\xba","\x6e"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Watch_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Watch_obj::LINE_HEIGHT,"LINE_HEIGHT");
};

#endif

hx::Class Watch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_LOG_LINES","\xc9","\x9f","\x1f","\x12"),
	HX_HCSTRING("LINE_HEIGHT","\x12","\x8c","\xb0","\xea"),
	::String(null()) };

void Watch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Watch","\xa7","\xb0","\xa7","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Watch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Watch_obj >;
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

void Watch_obj::__boot()
{
	MAX_LOG_LINES= (int)1024;
	LINE_HEIGHT= (int)15;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
