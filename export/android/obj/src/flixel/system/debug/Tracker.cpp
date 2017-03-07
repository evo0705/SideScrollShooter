#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TrackerProfile
#include <flixel/system/debug/TrackerProfile.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
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

Void Tracker_obj::__construct(::flixel::_system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle)
{
HX_STACK_FRAME("flixel.system.debug.Tracker","new",0xabada902,"flixel.system.debug.Tracker.new","flixel/system/debug/Tracker.hx",151,0x59950a0f)
HX_STACK_THIS(this)
HX_STACK_ARG(Profile,"Profile")
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(WindowTitle,"WindowTitle")
{
	HX_STACK_LINE(152)
	super::__construct(true);
	HX_STACK_LINE(154)
	::flixel::_system::debug::Tracker_obj::initProfiles();
	HX_STACK_LINE(155)
	this->_object = Object;
	HX_STACK_LINE(156)
	Dynamic tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::flixel::_system::debug::Tracker_obj::objectsBeingTracked->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(158)
	::flixel::_system::debug::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	this->initWatchEntries(tmp1);
	HX_STACK_LINE(160)
	::openfl::_legacy::text::TextField tmp2 = this->_title;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	bool tmp3 = (WindowTitle == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	if ((tmp3)){
		HX_STACK_LINE(160)
		Dynamic tmp5 = this->_object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		Dynamic Obj = tmp5;		HX_STACK_VAR(Obj,"Obj");
		HX_STACK_LINE(160)
		::hx::Class cl;		HX_STACK_VAR(cl,"cl");
		HX_STACK_LINE(160)
		Dynamic tmp6 = Obj;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		if ((tmp7)){
			HX_STACK_LINE(160)
			cl = ((::hx::Class)(Obj));
		}
		else{
			HX_STACK_LINE(160)
			Dynamic tmp8 = Obj;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			cl = tmp9;
		}
		HX_STACK_LINE(160)
		::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(160)
		::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		::String s = tmp9;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(160)
		bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		if ((tmp10)){
			HX_STACK_LINE(160)
			::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(160)
			::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(160)
			s = tmp12;
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(160)
				::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(160)
				s = tmp15;
			}
		}
		HX_STACK_LINE(160)
		tmp4 = s;
	}
	else{
		HX_STACK_LINE(160)
		tmp4 = WindowTitle;
	}
	HX_STACK_LINE(160)
	tmp2->set_text(tmp4);
	HX_STACK_LINE(161)
	this->set_visible(true);
	HX_STACK_LINE(163)
	int tmp5 = this->_watching->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(163)
	int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(163)
	::flixel::_system::debug::WatchEntry tmp7 = this->_watching->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(163)
	Float tmp8 = tmp7->__Field(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"), hx::paccDynamic )->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(163)
	Float lastWatchEntryY = tmp8;		HX_STACK_VAR(lastWatchEntryY,"lastWatchEntryY");
	HX_STACK_LINE(164)
	Float tmp9 = (lastWatchEntryY + (int)30);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(164)
	this->resize((int)200,tmp9);
	HX_STACK_LINE(167)
	int tmp10 = ::flixel::_system::debug::Tracker_obj::_numTrackerWindows;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(167)
	int tmp11 = (tmp10 * (int)80);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(167)
	this->set_x(tmp11);
	HX_STACK_LINE(168)
	int tmp12 = ::flixel::_system::debug::Tracker_obj::_numTrackerWindows;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(168)
	int tmp13 = (tmp12 * (int)25);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(168)
	int tmp14 = (tmp13 + (int)20);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(168)
	this->set_y(tmp14);
	HX_STACK_LINE(169)
	(::flixel::_system::debug::Tracker_obj::_numTrackerWindows)++;
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		::flixel::_system::frontEnds::SignalFrontEnd tmp15 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(171)
		Dynamic tmp16 = this->close_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(171)
		tmp15->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16);
	}
}
;
	return null();
}

//Tracker_obj::~Tracker_obj() { }

Dynamic Tracker_obj::__CreateEmpty() { return  new Tracker_obj; }
hx::ObjectPtr< Tracker_obj > Tracker_obj::__new(::flixel::_system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle)
{  hx::ObjectPtr< Tracker_obj > _result_ = new Tracker_obj();
	_result_->__construct(Profile,Object,WindowTitle);
	return _result_;}

Dynamic Tracker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tracker_obj > _result_ = new Tracker_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Tracker_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","destroy",0xc495fe9c,"flixel.system.debug.Tracker.destroy","flixel/system/debug/Tracker.hx",175,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			Dynamic tmp1 = this->close_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			tmp->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp1);
		}
		HX_STACK_LINE(177)
		(::flixel::_system::debug::Tracker_obj::_numTrackerWindows)--;
		HX_STACK_LINE(178)
		Dynamic tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		::flixel::_system::debug::Tracker_obj::objectsBeingTracked->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(179)
		this->_object = null();
		HX_STACK_LINE(180)
		this->super::destroy();
	}
return null();
}


::flixel::_system::debug::TrackerProfile Tracker_obj::findProfileByClass( ::hx::Class ObjectClass){
	HX_STACK_FRAME("flixel.system.debug.Tracker","findProfileByClass",0xa5ca706f,"flixel.system.debug.Tracker.findProfileByClass","flixel/system/debug/Tracker.hx",184,0x59950a0f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		Array< ::Dynamic > _g1 = ::flixel::_system::debug::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(185)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			if ((tmp1)){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			::flixel::_system::debug::TrackerProfile tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::TrackerProfile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			::flixel::_system::debug::TrackerProfile profile = tmp2;		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(185)
			++(_g);
			HX_STACK_LINE(187)
			bool tmp3 = (profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic ) == ObjectClass);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			if ((tmp3)){
				HX_STACK_LINE(189)
				::flixel::_system::debug::TrackerProfile tmp4 = profile;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfileByClass,return )

Void Tracker_obj::initWatchEntries( ::flixel::_system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","initWatchEntries",0x70db000f,"flixel.system.debug.Tracker.initWatchEntries","flixel/system/debug/Tracker.hx",196,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(197)
		bool tmp = (Profile != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		if ((tmp)){
			HX_STACK_LINE(199)
			::flixel::_system::debug::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			this->addExtensions(tmp1);
			HX_STACK_LINE(200)
			this->addVariables(Profile->__Field(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,initWatchEntries,(void))

Void Tracker_obj::addExtensions( ::flixel::_system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addExtensions",0xdf917cb7,"flixel.system.debug.Tracker.addExtensions","flixel/system/debug/Tracker.hx",205,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(206)
		bool tmp = (Profile->__Field(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		if ((tmp)){
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			Array< ::Dynamic > _g1 = Profile->__Field(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(208)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				if ((tmp2)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::hx::Class tmp3 = _g1->__get(_g).StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				::hx::Class extension = tmp3;		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(210)
				bool tmp4 = (extension != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(210)
				if ((tmp4)){
					HX_STACK_LINE(212)
					::hx::Class tmp5 = extension;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(212)
					::flixel::_system::debug::TrackerProfile tmp6 = this->findProfileByClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(212)
					::flixel::_system::debug::TrackerProfile extensionProfile = tmp6;		HX_STACK_VAR(extensionProfile,"extensionProfile");
					HX_STACK_LINE(213)
					bool tmp7 = (extensionProfile != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					if ((tmp7)){
						HX_STACK_LINE(215)
						this->addVariables(extensionProfile->__Field(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"), hx::paccDynamic ));
						HX_STACK_LINE(216)
						::flixel::_system::debug::TrackerProfile tmp8 = extensionProfile;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(216)
						this->addExtensions(tmp8);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addExtensions,(void))

Void Tracker_obj::addVariables( Array< ::String > Variables){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addVariables",0xa7820774,"flixel.system.debug.Tracker.addVariables","flixel/system/debug/Tracker.hx",224,0x59950a0f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Variables,"Variables")
		HX_STACK_LINE(225)
		bool tmp = (Variables != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		if ((tmp)){
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				bool tmp1 = (_g < Variables->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(227)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(227)
				if ((tmp2)){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::String tmp3 = Variables->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				::String variable = tmp3;		HX_STACK_VAR(variable,"variable");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(229)
				Dynamic tmp4 = this->_object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				::String tmp5 = variable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(229)
				::String tmp6 = variable;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(229)
				this->add(tmp4,tmp5,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addVariables,(void))

Array< ::Dynamic > Tracker_obj::profiles;

cpp::ArrayBase Tracker_obj::objectsBeingTracked;

int Tracker_obj::_numTrackerWindows;

Void Tracker_obj::addProfile( ::flixel::_system::debug::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","addProfile",0x7ed0d4a6,"flixel.system.debug.Tracker.addProfile","flixel/system/debug/Tracker.hx",58,0x59950a0f)
		HX_STACK_ARG(Profile,"Profile")
		HX_STACK_LINE(59)
		bool tmp = (Profile != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		if ((tmp)){
			HX_STACK_LINE(61)
			::flixel::_system::debug::TrackerProfile tmp1 = Profile;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			::flixel::_system::debug::Tracker_obj::profiles->push(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,addProfile,(void))

::flixel::_system::debug::TrackerProfile Tracker_obj::findProfile( Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.Tracker","findProfile",0x4cea5492,"flixel.system.debug.Tracker.findProfile","flixel/system/debug/Tracker.hx",66,0x59950a0f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(67)
	::flixel::_system::debug::Tracker_obj::initProfiles();
	HX_STACK_LINE(69)
	::flixel::_system::debug::TrackerProfile lastMatchingProfile = null();		HX_STACK_VAR(lastMatchingProfile,"lastMatchingProfile");
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Array< ::Dynamic > _g1 = ::flixel::_system::debug::Tracker_obj::profiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			if ((tmp1)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			::flixel::_system::debug::TrackerProfile tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::TrackerProfile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::flixel::_system::debug::TrackerProfile profile = tmp2;		HX_STACK_VAR(profile,"profile");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(72)
			Dynamic tmp3 = Object;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			::hx::Class tmp4 = profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			Dynamic tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::hx::Class tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			bool tmp7 = ::Std_obj::is(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			if ((tmp8)){
				HX_STACK_LINE(72)
				tmp9 = (Object == profile->__Field(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(72)
				tmp9 = true;
			}
			HX_STACK_LINE(72)
			if ((tmp9)){
				HX_STACK_LINE(74)
				lastMatchingProfile = profile;
			}
		}
	}
	HX_STACK_LINE(77)
	::flixel::_system::debug::TrackerProfile tmp = lastMatchingProfile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tracker_obj,findProfile,return )

Void Tracker_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","onStateSwitch",0x8ec46b28,"flixel.system.debug.Tracker.onStateSwitch","flixel/system/debug/Tracker.hx",82,0x59950a0f)
		HX_STACK_LINE(82)
		::flixel::_system::debug::Tracker_obj::_numTrackerWindows = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,onStateSwitch,(void))

Void Tracker_obj::initProfiles( ){
{
		HX_STACK_FRAME("flixel.system.debug.Tracker","initProfiles",0xb7584578,"flixel.system.debug.Tracker.initProfiles","flixel/system/debug/Tracker.hx",86,0x59950a0f)
		HX_STACK_LINE(87)
		bool tmp = (::flixel::_system::debug::Tracker_obj::profiles == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		if ((tmp)){
			HX_STACK_LINE(89)
			::flixel::_system::debug::Tracker_obj::profiles = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxG >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")).Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")).Add(HX_HCSTRING("worldBounds.x","\xb1","\xea","\x53","\xfe")).Add(HX_HCSTRING("worldBounds.y","\xb2","\xea","\x53","\xfe")).Add(HX_HCSTRING("worldBounds.width","\xbf","\xb0","\xca","\x83")).Add(HX_HCSTRING("worldBounds.height","\x0e","\x6f","\xdf","\x83")).Add(HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0")).Add(HX_HCSTRING("updateFramerate","\x44","\xb6","\xd6","\x9d")).Add(HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad")).Add(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")).Add(HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")).Add(HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")).Add(HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49")).Add(HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(91)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				if ((tmp2)){
					HX_STACK_LINE(91)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(91)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxPoint >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00")).Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(94)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				if ((tmp2)){
					HX_STACK_LINE(94)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(94)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxRect >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")).Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(95)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(95)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				if ((tmp2)){
					HX_STACK_LINE(95)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(95)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxBasic >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")).Add(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21")).Add(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(97)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(97)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(97)
				if ((tmp2)){
					HX_STACK_LINE(97)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(97)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxObject >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")).Add(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")).Add(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()).Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(98)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				if ((tmp2)){
					HX_STACK_LINE(98)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(98)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tile::FlxTilemap >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40")).Add(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")).Add(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")).Add(HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16")).Add(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")).Add(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(100)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				if ((tmp2)){
					HX_STACK_LINE(100)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxSprite >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")).Add(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")).Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")).Add(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")).Add(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")).Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxObject >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(101)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxTypedButton >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")).Add(HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(102)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(102)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(102)
				if ((tmp2)){
					HX_STACK_LINE(102)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(102)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::ui::FlxBar >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("min","\x92","\x11","\x53","\x00")).Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")).Add(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")).Add(HX_HCSTRING("pct","\x21","\x53","\x55","\x00")).Add(HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b")).Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(104)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(104)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				if ((tmp2)){
					HX_STACK_LINE(104)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(104)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::text::FlxText >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")).Add(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")).Add(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")).Add(HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde")).Add(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")).Add(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")).Add(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")).Add(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")).Add(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(106)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				if ((tmp2)){
					HX_STACK_LINE(106)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(106)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxTypedGroup >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")).Add(HX_HCSTRING("members.length","\xdb","\xfb","\xd2","\x52")).Add(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(109)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(109)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(109)
				if ((tmp2)){
					HX_STACK_LINE(109)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(109)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::group::FlxSpriteGroup >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxSprite >()).Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(110)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				if ((tmp2)){
					HX_STACK_LINE(110)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(110)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxState >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("persistentUpdate","\xc0","\x3b","\x6b","\x50")).Add(HX_HCSTRING("persistentDraw","\xfb","\x35","\xc6","\xc2")).Add(HX_HCSTRING("destroySubStates","\x88","\x5a","\x28","\x5e")).Add(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::group::FlxTypedGroup >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(111)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(111)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				if ((tmp2)){
					HX_STACK_LINE(111)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(111)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::FlxCamera >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")).Add(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")).Add(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")).Add(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")).Add(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")).Add(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")).Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::FlxBasic >()).Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(113)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(113)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(113)
				if ((tmp2)){
					HX_STACK_LINE(113)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(113)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::tweens::FlxTween >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")).Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")).Add(HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27")).Add(HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c")).Add(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3")).Add(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(116)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(116)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				if ((tmp2)){
					HX_STACK_LINE(116)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(116)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxPath >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("speed","\x87","\x97","\x69","\x81")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")).Add(HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71")).Add(HX_HCSTRING("_nodeIndex","\x71","\xf5","\xec","\xbd")).Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(119)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				if ((tmp2)){
					HX_STACK_LINE(119)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(119)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::util::FlxTimer >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")).Add(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")).Add(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("timeLeft","\xb4","\x8a","\x11","\xe8")).Add(HX_HCSTRING("elapsedTime","\x69","\x5e","\xcd","\xc6")).Add(HX_HCSTRING("loopsLeft","\x36","\x99","\x1c","\x04")).Add(HX_HCSTRING("elapsedLoops","\xb3","\x6f","\xa9","\x95")).Add(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(120)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(120)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(120)
				if ((tmp2)){
					HX_STACK_LINE(120)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(120)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::animation::FlxAnimationController >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1")).Add(HX_HCSTRING("frameName","\x18","\x31","\x80","\x36")).Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")).Add(HX_HCSTRING("paused","\xae","\x40","\x84","\xef")).Add(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")).Add(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(122)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(122)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				if ((tmp2)){
					HX_STACK_LINE(122)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(122)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::mouse::FlxMouse >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")).Add(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")).Add(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")).Add(HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9")).Add(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")).Add(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")).Add(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")).Add(HX_HCSTRING("pressedMiddle","\x97","\xbf","\x58","\x17")).Add(HX_HCSTRING("justPressedMiddle","\xcb","\x59","\xd3","\xc4")).Add(HX_HCSTRING("justReleasedMiddle","\x3e","\xcf","\x55","\xd7")).Add(HX_HCSTRING("pressedRight","\xda","\xdd","\x81","\x58")).Add(HX_HCSTRING("justPressedRight","\x26","\x86","\x9a","\xc0")).Add(HX_HCSTRING("justReleasedRight","\x13","\xc0","\x4a","\x68")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(126)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(126)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				if ((tmp2)){
					HX_STACK_LINE(126)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(126)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::touch::FlxTouch >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")).Add(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")).Add(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")).Add(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")).Add(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")).Add(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")).Add(HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(131)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(131)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(131)
				if ((tmp2)){
					HX_STACK_LINE(131)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(131)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::gamepad::FlxGamepad >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")).Add(HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58")).Add(HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00")).Add(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")).Add(HX_HCSTRING("dpadUp","\xaa","\xeb","\xfa","\xb8")).Add(HX_HCSTRING("dpadDown","\x71","\xaf","\x0f","\x13")).Add(HX_HCSTRING("dpadLeft","\x16","\xbf","\x51","\x18")).Add(HX_HCSTRING("dpadRight","\xed","\x81","\x42","\xa6")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(134)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(134)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(134)
				if ((tmp2)){
					HX_STACK_LINE(134)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(134)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::flixel::input::FlxSwipe >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")).Add(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")).Add(HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82")).Add(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")).Add(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")).Add(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(138)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				if ((tmp2)){
					HX_STACK_LINE(138)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(138)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::display::DisplayObject >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("z","\x7a","\x00","\x00","\x00")).Add(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")).Add(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")).Add(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")).Add(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")).Add(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c")).Add(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c")).Add(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(141)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(141)
				if ((tmp2)){
					HX_STACK_LINE(141)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(141)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Point >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxPoint >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(142)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(142)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(142)
				if ((tmp2)){
					HX_STACK_LINE(142)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(142)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Rectangle >(),null(),Array_obj< ::Dynamic >::__new().Add(hx::ClassOf< ::flixel::util::FlxRect >()));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(143)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(143)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(143)
				if ((tmp2)){
					HX_STACK_LINE(143)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(143)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::flixel::_system::debug::TrackerProfile tmp1 = ::flixel::_system::debug::TrackerProfile_obj::__new(hx::ClassOf< ::openfl::_legacy::geom::Matrix >(),Array_obj< ::String >::__new().Add(HX_HCSTRING("a","\x61","\x00","\x00","\x00")).Add(HX_HCSTRING("b","\x62","\x00","\x00","\x00")).Add(HX_HCSTRING("c","\x63","\x00","\x00","\x00")).Add(HX_HCSTRING("d","\x64","\x00","\x00","\x00")).Add(HX_HCSTRING("tx","\x84","\x65","\x00","\x00")).Add(HX_HCSTRING("ty","\x85","\x65","\x00","\x00")),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(144)
				::flixel::_system::debug::TrackerProfile Profile = tmp1;		HX_STACK_VAR(Profile,"Profile");
				HX_STACK_LINE(144)
				bool tmp2 = (Profile != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(144)
				if ((tmp2)){
					HX_STACK_LINE(144)
					::flixel::_system::debug::TrackerProfile tmp3 = Profile;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(144)
					::flixel::_system::debug::Tracker_obj::profiles->push(tmp3);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracker_obj,initProfiles,(void))


Tracker_obj::Tracker_obj()
{
}

void Tracker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tracker);
	HX_MARK_MEMBER_NAME(_object,"_object");
	::flixel::_system::debug::Watch_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tracker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	::flixel::_system::debug::Watch_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tracker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addVariables") ) { return addVariables_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExtensions") ) { return addExtensions_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initWatchEntries") ) { return initWatchEntries_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"findProfileByClass") ) { return findProfileByClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tracker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { outValue = profiles; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addProfile") ) { outValue = addProfile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findProfile") ) { outValue = findProfile_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initProfiles") ) { outValue = initProfiles_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { outValue = onStateSwitch_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { outValue = _numTrackerWindows; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { outValue = objectsBeingTracked; return true;  }
	}
	return false;
}

Dynamic Tracker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tracker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"profiles") ) { profiles=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_numTrackerWindows") ) { _numTrackerWindows=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"objectsBeingTracked") ) { objectsBeingTracked=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Tracker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tracker_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Tracker_obj::profiles,HX_HCSTRING("profiles","\x2a","\xbb","\xd6","\xec")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Tracker_obj::objectsBeingTracked,HX_HCSTRING("objectsBeingTracked","\x5f","\x25","\x3a","\xd9")},
	{hx::fsInt,(void *) &Tracker_obj::_numTrackerWindows,HX_HCSTRING("_numTrackerWindows","\x52","\x53","\xbe","\x06")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("findProfileByClass","\xd1","\x42","\xd7","\xf5"),
	HX_HCSTRING("initWatchEntries","\xf1","\x15","\xcd","\x8f"),
	HX_HCSTRING("addExtensions","\x95","\xc5","\xb9","\xf3"),
	HX_HCSTRING("addVariables","\x56","\x04","\xb7","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_MARK_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_MARK_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tracker_obj::profiles,"profiles");
	HX_VISIT_MEMBER_NAME(Tracker_obj::objectsBeingTracked,"objectsBeingTracked");
	HX_VISIT_MEMBER_NAME(Tracker_obj::_numTrackerWindows,"_numTrackerWindows");
};

#endif

hx::Class Tracker_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("profiles","\x2a","\xbb","\xd6","\xec"),
	HX_HCSTRING("objectsBeingTracked","\x5f","\x25","\x3a","\xd9"),
	HX_HCSTRING("_numTrackerWindows","\x52","\x53","\xbe","\x06"),
	HX_HCSTRING("addProfile","\x08","\x75","\xd3","\x5a"),
	HX_HCSTRING("findProfile","\xf0","\x09","\x34","\xf3"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("initProfiles","\x5a","\x42","\x8d","\x91"),
	::String(null()) };

void Tracker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Tracker","\x10","\xc0","\x28","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tracker_obj::__GetStatic;
	__mClass->mSetStaticField = &Tracker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tracker_obj >;
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

void Tracker_obj::__boot()
{
	objectsBeingTracked= cpp::ArrayBase_obj::__new();
	_numTrackerWindows= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
