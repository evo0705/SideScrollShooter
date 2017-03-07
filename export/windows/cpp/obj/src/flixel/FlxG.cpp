#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
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
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
namespace flixel{

Void FlxG_obj::__construct()
{
	return null();
}

//FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > _result_ = new FlxG_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > _result_ = new FlxG_obj();
	_result_->__construct();
	return _result_;}

bool FlxG_obj::autoPause;

bool FlxG_obj::fixedTimestep;

Float FlxG_obj::timeScale;

int FlxG_obj::worldDivisions;

::flixel::FlxCamera FlxG_obj::camera;

::flixel::_system::FlxVersion FlxG_obj::VERSION;

::flixel::FlxGame FlxG_obj::game;

int FlxG_obj::drawFramerate;

Float FlxG_obj::elapsed;

Float FlxG_obj::maxElapsed;

int FlxG_obj::width;

int FlxG_obj::height;

::flixel::_system::scaleModes::BaseScaleMode FlxG_obj::scaleMode;

bool FlxG_obj::fullscreen;

::flixel::util::FlxRect FlxG_obj::worldBounds;

::flixel::util::FlxSave FlxG_obj::save;

::flixel::input::mouse::FlxMouse FlxG_obj::mouse;

::flixel::input::touch::FlxTouchManager FlxG_obj::touches;

Array< ::Dynamic > FlxG_obj::swipes;

::flixel::input::keyboard::FlxKeyboard FlxG_obj::keys;

::flixel::input::gamepad::FlxGamepadManager FlxG_obj::gamepads;

::flixel::_system::frontEnds::InputFrontEnd FlxG_obj::inputs;

::flixel::_system::frontEnds::ConsoleFrontEnd FlxG_obj::console;

::flixel::_system::frontEnds::LogFrontEnd FlxG_obj::log;

::flixel::_system::frontEnds::BitmapLogFrontEnd FlxG_obj::bitmapLog;

::flixel::_system::frontEnds::WatchFrontEnd FlxG_obj::watch;

::flixel::_system::frontEnds::DebuggerFrontEnd FlxG_obj::debugger;

::flixel::_system::frontEnds::VCRFrontEnd FlxG_obj::vcr;

::flixel::_system::frontEnds::BitmapFrontEnd FlxG_obj::bitmap;

::flixel::_system::frontEnds::CameraFrontEnd FlxG_obj::cameras;

::flixel::_system::frontEnds::PluginFrontEnd FlxG_obj::plugins;

::flixel::_system::frontEnds::SoundFrontEnd FlxG_obj::sound;

::flixel::_system::frontEnds::SignalFrontEnd FlxG_obj::signals;

::flixel::_system::scaleModes::BaseScaleMode FlxG_obj::_scaleMode;

Void FlxG_obj::resizeGame( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxG","resizeGame",0x80aafe0d,"flixel.FlxG.resizeGame","flixel/FlxG.hx",285,0x8e176836)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(286)
		::flixel::_system::scaleModes::BaseScaleMode tmp = ::flixel::FlxG_obj::_scaleMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		tmp->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeGame,(void))

Void FlxG_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetGame",0x7560e13a,"flixel.FlxG.resetGame","flixel/FlxG.hx",293,0x8e176836)
		HX_STACK_LINE(294)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		tmp->_resetGame = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::switchState( ::flixel::FlxState State){
{
		HX_STACK_FRAME("flixel.FlxG","switchState",0xbec45396,"flixel.FlxG.switchState","flixel/FlxG.hx",301,0x8e176836)
		HX_STACK_ARG(State,"State")
		HX_STACK_LINE(302)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		tmp->_requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetState",0x34b927c9,"flixel.FlxG.resetState","flixel/FlxG.hx",310,0x8e176836)
		HX_STACK_LINE(310)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		::flixel::FlxState tmp1 = tmp->_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		::flixel::FlxState tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::flixel::FlxState State = tmp3;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(310)
		::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		tmp4->_requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

bool FlxG_obj::overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_FRAME("flixel.FlxG","overlap",0x37194f20,"flixel.FlxG.overlap","flixel/FlxG.hx",327,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_ARG(ProcessCallback,"ProcessCallback")
	HX_STACK_LINE(328)
	bool tmp = (ObjectOrGroup1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	if ((tmp)){
		HX_STACK_LINE(330)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		ObjectOrGroup1 = tmp1->_state;
	}
	HX_STACK_LINE(332)
	bool tmp1 = (ObjectOrGroup2 == ObjectOrGroup1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	if ((tmp1)){
		HX_STACK_LINE(334)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(336)
	int tmp2 = ::flixel::FlxG_obj::worldDivisions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	::flixel::_system::FlxQuadTree_obj::divisions = tmp2;
	HX_STACK_LINE(337)
	::flixel::util::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(337)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(337)
	::flixel::util::FlxRect tmp5 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(337)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(337)
	::flixel::util::FlxRect tmp7 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(337)
	Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(337)
	::flixel::util::FlxRect tmp9 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(337)
	Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(337)
	::flixel::_system::FlxQuadTree tmp11 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp4,tmp6,tmp8,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(337)
	::flixel::_system::FlxQuadTree quadTree = tmp11;		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(338)
	::flixel::FlxBasic tmp12 = ObjectOrGroup1;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(338)
	::flixel::FlxBasic tmp13 = ObjectOrGroup2;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(338)
	Dynamic tmp14 = NotifyCallback;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(338)
	Dynamic tmp15 = ProcessCallback;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(338)
	quadTree->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp12,tmp13,tmp14,tmp15);
	HX_STACK_LINE(339)
	bool tmp16 = quadTree->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(339)
	bool result = tmp16;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(340)
	quadTree->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
	HX_STACK_LINE(341)
	bool tmp17 = result;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(341)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_FRAME("flixel.FlxG","pixelPerfectOverlap",0x4d139839,"flixel.FlxG.pixelPerfectOverlap","flixel/FlxG.hx",355,0x8e176836)
	HX_STACK_ARG(Sprite1,"Sprite1")
	HX_STACK_ARG(Sprite2,"Sprite2")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(356)
		::flixel::FlxSprite tmp = Sprite1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		::flixel::FlxSprite tmp1 = Sprite2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		int tmp2 = AlphaTolerance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		bool tmp4 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,pixelPerfectOverlap,return )

bool FlxG_obj::collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_FRAME("flixel.FlxG","collide",0x7b6cbb17,"flixel.FlxG.collide","flixel/FlxG.hx",374,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_LINE(375)
	::flixel::FlxBasic tmp = ObjectOrGroup1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	::flixel::FlxBasic tmp1 = ObjectOrGroup2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	Dynamic tmp2 = NotifyCallback;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	Dynamic tmp3 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	bool tmp4 = ::flixel::FlxG_obj::overlap(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(375)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

Void FlxG_obj::openURL( ::String URL,::String __o_Target){
::String Target = __o_Target.Default(HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
	HX_STACK_FRAME("flixel.FlxG","openURL",0xce3ec95e,"flixel.FlxG.openURL","flixel/FlxG.hx",421,0x8e176836)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Target,"Target")
{
		HX_STACK_LINE(422)
		::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(424)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^https?://","\x48","\xee","\xdd","\x38"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		::String tmp1 = URL;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(424)
		bool tmp2 = tmp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		if ((tmp3)){
			HX_STACK_LINE(425)
			prefix = HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a");
		}
		HX_STACK_LINE(426)
		::String tmp4 = (prefix + URL);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		::openfl::_legacy::net::URLRequest tmp5 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		::String tmp6 = Target;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(426)
		::openfl::_legacy::Lib_obj::getURL(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,openURL,(void))

Void FlxG_obj::init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_FRAME("flixel.FlxG","init",0x1141e5d7,"flixel.FlxG.init","flixel/FlxG.hx",433,0x8e176836)
		HX_STACK_ARG(Game,"Game")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Zoom,"Zoom")
		HX_STACK_LINE(434)
		::flixel::FlxG_obj::game = Game;
		HX_STACK_LINE(435)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		::flixel::FlxG_obj::width = tmp2;
		HX_STACK_LINE(436)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		::flixel::FlxG_obj::height = tmp5;
		HX_STACK_LINE(437)
		::flixel::FlxCamera_obj::defaultZoom = Zoom;
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(439)
			::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(439)
			int tmp8 = tmp7->get_stageWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(439)
			int Width1 = tmp8;		HX_STACK_VAR(Width1,"Width1");
			HX_STACK_LINE(439)
			::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(439)
			::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(439)
			int tmp11 = tmp10->get_stageHeight();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(439)
			int Height1 = tmp11;		HX_STACK_VAR(Height1,"Height1");
			HX_STACK_LINE(439)
			::flixel::_system::scaleModes::BaseScaleMode tmp12 = ::flixel::FlxG_obj::_scaleMode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(439)
			int tmp13 = Width1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(439)
			int tmp14 = Height1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(439)
			tmp12->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp13,tmp14);
		}
		HX_STACK_LINE(443)
		::flixel::_system::frontEnds::InputFrontEnd tmp6 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::input::keyboard::FlxKeyboard_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		::flixel::input::keyboard::FlxKeyboard tmp8 = tmp6->__Field(HX_HCSTRING("add_flixel_input_keyboard_FlxKeyboard","\x3b","\x4b","\x11","\x84"), hx::paccDynamic )(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(443)
		::flixel::FlxG_obj::keys = tmp8;
		HX_STACK_LINE(447)
		::flixel::_system::frontEnds::InputFrontEnd tmp9 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(447)
		::openfl::_legacy::display::Sprite tmp11 = tmp10->_inputContainer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(447)
		::flixel::input::mouse::FlxMouse tmp12 = ::flixel::input::mouse::FlxMouse_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		::flixel::input::mouse::FlxMouse tmp13 = tmp9->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(447)
		::flixel::FlxG_obj::set_mouse(tmp13);
		HX_STACK_LINE(451)
		::flixel::_system::frontEnds::InputFrontEnd tmp14 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(451)
		::flixel::input::touch::FlxTouchManager tmp15 = ::flixel::input::touch::FlxTouchManager_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(451)
		::flixel::input::touch::FlxTouchManager tmp16 = tmp14->__Field(HX_HCSTRING("add_flixel_input_touch_FlxTouchManager","\xe6","\xdb","\x13","\x1c"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(451)
		::flixel::FlxG_obj::touches = tmp16;
		HX_STACK_LINE(455)
		::flixel::_system::frontEnds::InputFrontEnd tmp17 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(455)
		::flixel::input::gamepad::FlxGamepadManager tmp18 = ::flixel::input::gamepad::FlxGamepadManager_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(455)
		::flixel::input::gamepad::FlxGamepadManager tmp19 = tmp17->__Field(HX_HCSTRING("add_flixel_input_gamepad_FlxGamepadManager","\x26","\xa8","\x4b","\x80"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(455)
		::flixel::FlxG_obj::gamepads = tmp19;
		HX_STACK_LINE(465)
		::flixel::util::FlxSave tmp20 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(465)
		tmp20->bind(HX_HCSTRING("flixel","\x5c","\x42","\x70","\x3d"));
		HX_STACK_LINE(468)
		::flixel::_system::frontEnds::SoundFrontEnd tmp21 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(468)
		tmp21->__Field(HX_HCSTRING("loadSavedPrefs","\xef","\xed","\x3b","\x02"), hx::paccDynamic )();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_FRAME("flixel.FlxG","reset",0x31170d28,"flixel.FlxG.reset","flixel/FlxG.hx",476,0x8e176836)
		HX_STACK_LINE(477)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(478)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		Float tmp1 = (tmp * (int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		::flixel::util::FlxRandom_obj::set_globalSeed(tmp2);
		HX_STACK_LINE(480)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		tmp3->__Field(HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"), hx::paccDynamic )();
		HX_STACK_LINE(481)
		::flixel::_system::frontEnds::InputFrontEnd tmp4 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		tmp4->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )();
		HX_STACK_LINE(483)
		::flixel::_system::frontEnds::SoundFrontEnd tmp5 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		tmp5->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )(true);
		HX_STACK_LINE(485)
		::flixel::FlxG_obj::autoPause = true;
		HX_STACK_LINE(486)
		::flixel::FlxG_obj::fixedTimestep = true;
		HX_STACK_LINE(487)
		::flixel::FlxG_obj::timeScale = ((Float)1.0);
		HX_STACK_LINE(488)
		::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(489)
		::flixel::FlxG_obj::maxElapsed = ((Float)0.1);
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::flixel::util::FlxRect tmp6 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(490)
			::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(490)
			_this->x = (int)-10;
			HX_STACK_LINE(490)
			_this->y = (int)-10;
			HX_STACK_LINE(490)
			int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			int tmp8 = (tmp7 + (int)20);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(490)
			_this->width = tmp8;
			HX_STACK_LINE(490)
			int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(490)
			int tmp10 = (tmp9 + (int)20);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(490)
			_this->height = tmp10;
			HX_STACK_LINE(490)
			_this;
		}
		HX_STACK_LINE(491)
		::flixel::FlxG_obj::worldDivisions = (int)6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

::flixel::_system::scaleModes::BaseScaleMode FlxG_obj::set_scaleMode( ::flixel::_system::scaleModes::BaseScaleMode ScaleMode){
	HX_STACK_FRAME("flixel.FlxG","set_scaleMode",0xb374d549,"flixel.FlxG.set_scaleMode","flixel/FlxG.hx",495,0x8e176836)
	HX_STACK_ARG(ScaleMode,"ScaleMode")
	HX_STACK_LINE(496)
	::flixel::FlxG_obj::_scaleMode = ScaleMode;
	HX_STACK_LINE(497)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	tmp->onResize(null());
	HX_STACK_LINE(498)
	::flixel::_system::scaleModes::BaseScaleMode tmp1 = ScaleMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_scaleMode,return )

::flixel::input::mouse::FlxMouse FlxG_obj::set_mouse( ::flixel::input::mouse::FlxMouse NewMouse){
	HX_STACK_FRAME("flixel.FlxG","set_mouse",0x1e754261,"flixel.FlxG.set_mouse","flixel/FlxG.hx",503,0x8e176836)
	HX_STACK_ARG(NewMouse,"NewMouse")
	HX_STACK_LINE(504)
	::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	if ((tmp1)){
		HX_STACK_LINE(506)
		::flixel::_system::frontEnds::InputFrontEnd tmp2 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		::flixel::input::mouse::FlxMouse tmp3 = NewMouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		::flixel::input::mouse::FlxMouse tmp4 = tmp2->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		::flixel::FlxG_obj::mouse = tmp4;
		HX_STACK_LINE(507)
		::flixel::input::mouse::FlxMouse tmp5 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		return tmp5;
	}
	HX_STACK_LINE(509)
	::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	::flixel::input::mouse::FlxMouse oldMouse = tmp2;		HX_STACK_VAR(oldMouse,"oldMouse");
	HX_STACK_LINE(510)
	::flixel::_system::frontEnds::InputFrontEnd tmp3 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	::flixel::input::mouse::FlxMouse tmp4 = oldMouse;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(510)
	::flixel::input::mouse::FlxMouse tmp5 = NewMouse;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	::flixel::input::mouse::FlxMouse tmp6 = tmp3->__Field(HX_HCSTRING("replace_flixel_input_mouse_FlxMouse","\x1a","\x65","\xd5","\xe3"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(510)
	::flixel::input::mouse::FlxMouse result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(511)
	bool tmp7 = (result != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(511)
	if ((tmp7)){
		HX_STACK_LINE(513)
		::flixel::FlxG_obj::mouse = result;
		HX_STACK_LINE(514)
		oldMouse->destroy();
		HX_STACK_LINE(515)
		::flixel::input::mouse::FlxMouse tmp8 = NewMouse;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(515)
		return tmp8;
	}
	HX_STACK_LINE(517)
	::flixel::input::mouse::FlxMouse tmp8 = oldMouse;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(517)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_mouse,return )

int FlxG_obj::get_updateFramerate( ){
	HX_STACK_FRAME("flixel.FlxG","get_updateFramerate",0x15da1274,"flixel.FlxG.get_updateFramerate","flixel/FlxG.hx",522,0x8e176836)
	HX_STACK_LINE(523)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	int tmp1 = tmp->_stepMS;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	Float tmp2 = (Float((int)1000) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(523)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_updateFramerate,return )

int FlxG_obj::set_updateFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_updateFramerate",0x52770580,"flixel.FlxG.set_updateFramerate","flixel/FlxG.hx",527,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(528)
	int tmp = Framerate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	int tmp1 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(528)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(528)
	if ((tmp2)){
		HX_STACK_LINE(530)
		Dynamic();
	}
	HX_STACK_LINE(533)
	Float tmp3 = (Float((int)1000) / Float(Framerate));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(533)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(533)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(533)
	::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(533)
	tmp6->_stepMS = tmp5;
	HX_STACK_LINE(534)
	::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(534)
	int tmp8 = tmp7->_stepMS;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(534)
	Float tmp9 = (Float(tmp8) / Float((int)1000));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(534)
	::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(534)
	tmp10->_stepSeconds = tmp9;
	HX_STACK_LINE(536)
	::flixel::FlxGame tmp11 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(536)
	int tmp12 = tmp11->_maxAccumulation;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(536)
	::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(536)
	int tmp14 = tmp13->_stepMS;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(536)
	bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(536)
	if ((tmp15)){
		HX_STACK_LINE(538)
		::flixel::FlxGame tmp16 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(538)
		::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(538)
		tmp17->_maxAccumulation = tmp16->_stepMS;
	}
	HX_STACK_LINE(541)
	int tmp16 = Framerate;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(541)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_updateFramerate,return )

int FlxG_obj::set_drawFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_drawFramerate",0x3e23c125,"flixel.FlxG.set_drawFramerate","flixel/FlxG.hx",545,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(546)
	int tmp = Framerate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	int tmp2 = tmp1->_stepMS;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	Float tmp3 = (Float((int)1000) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(546)
	bool tmp5 = (tmp > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	if ((tmp5)){
		HX_STACK_LINE(548)
		Dynamic();
	}
	HX_STACK_LINE(551)
	int tmp6 = Framerate;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(551)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(551)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(551)
	::flixel::FlxG_obj::drawFramerate = tmp8;
	HX_STACK_LINE(553)
	::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(553)
	::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(553)
	bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(553)
	if ((tmp11)){
		HX_STACK_LINE(555)
		::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(555)
		::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(555)
		int tmp14 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(555)
		tmp13->set_frameRate(tmp14);
	}
	HX_STACK_LINE(558)
	int tmp12 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(558)
	Float tmp13 = (Float((int)2000) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(558)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(558)
	int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(558)
	::flixel::FlxGame tmp16 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(558)
	tmp16->_maxAccumulation = tmp15;
	HX_STACK_LINE(560)
	::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(560)
	int tmp18 = tmp17->_maxAccumulation;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(560)
	::flixel::FlxGame tmp19 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(560)
	int tmp20 = tmp19->_stepMS;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(560)
	bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(560)
	if ((tmp21)){
		HX_STACK_LINE(562)
		::flixel::FlxGame tmp22 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(562)
		::flixel::FlxGame tmp23 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(562)
		tmp23->_maxAccumulation = tmp22->_stepMS;
	}
	HX_STACK_LINE(565)
	int tmp22 = Framerate;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(565)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_drawFramerate,return )

bool FlxG_obj::set_fullscreen( bool Value){
	HX_STACK_FRAME("flixel.FlxG","set_fullscreen",0x1eee347f,"flixel.FlxG.set_fullscreen","flixel/FlxG.hx",569,0x8e176836)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(570)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	if ((tmp)){
		HX_STACK_LINE(572)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		tmp2->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(576)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		tmp2->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(579)
	bool tmp1 = ::flixel::FlxG_obj::fullscreen = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_fullscreen,return )

::openfl::_legacy::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_FRAME("flixel.FlxG","get_stage",0xb2caaaee,"flixel.FlxG.get_stage","flixel/FlxG.hx",583,0x8e176836)
	HX_STACK_LINE(584)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_FRAME("flixel.FlxG","get_state",0xb2cab641,"flixel.FlxG.get_state","flixel/FlxG.hx",588,0x8e176836)
	HX_STACK_LINE(589)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	::flixel::FlxState tmp1 = tmp->_state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(589)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )


FlxG_obj::FlxG_obj()
{
}

bool FlxG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log; return true;  }
		if (HX_FIELD_EQ(inName,"vcr") ) { outValue = vcr; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { outValue = game; return true;  }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save; return true;  }
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys; return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { if (inCallProp == hx::paccAlways) { outValue = get_stage(); return true; } }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) { outValue = get_state(); return true; } }
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width; return true;  }
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		if (HX_FIELD_EQ(inName,"watch") ) { outValue = watch; return true;  }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound; return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height; return true;  }
		if (HX_FIELD_EQ(inName,"swipes") ) { outValue = swipes; return true;  }
		if (HX_FIELD_EQ(inName,"inputs") ) { outValue = inputs; return true;  }
		if (HX_FIELD_EQ(inName,"bitmap") ) { outValue = bitmap; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = VERSION; return true;  }
		if (HX_FIELD_EQ(inName,"elapsed") ) { outValue = elapsed; return true;  }
		if (HX_FIELD_EQ(inName,"touches") ) { outValue = touches; return true;  }
		if (HX_FIELD_EQ(inName,"console") ) { outValue = console; return true;  }
		if (HX_FIELD_EQ(inName,"cameras") ) { outValue = cameras; return true;  }
		if (HX_FIELD_EQ(inName,"plugins") ) { outValue = plugins; return true;  }
		if (HX_FIELD_EQ(inName,"signals") ) { outValue = signals; return true;  }
		if (HX_FIELD_EQ(inName,"overlap") ) { outValue = overlap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"collide") ) { outValue = collide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { outValue = gamepads; return true;  }
		if (HX_FIELD_EQ(inName,"debugger") ) { outValue = debugger; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { outValue = autoPause; return true;  }
		if (HX_FIELD_EQ(inName,"timeScale") ) { outValue = timeScale; return true;  }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { outValue = scaleMode; return true;  }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { outValue = bitmapLog; return true;  }
		if (HX_FIELD_EQ(inName,"resetGame") ) { outValue = resetGame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { outValue = set_mouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stage") ) { outValue = get_stage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_state") ) { outValue = get_state_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { outValue = maxElapsed; return true;  }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { outValue = fullscreen; return true;  }
		if (HX_FIELD_EQ(inName,"_scaleMode") ) { outValue = _scaleMode; return true;  }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { outValue = resizeGame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { outValue = worldBounds; return true;  }
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { outValue = fixedTimestep; return true;  }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { outValue = drawFramerate; return true;  }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { outValue = set_scaleMode_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { outValue = worldDivisions; return true;  }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { outValue = set_fullscreen_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { if (inCallProp == hx::paccAlways) { outValue = get_updateFramerate(); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_drawFramerate") ) { outValue = set_drawFramerate_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pixelPerfectOverlap") ) { outValue = pixelPerfectOverlap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_updateFramerate") ) { outValue = get_updateFramerate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_updateFramerate") ) { outValue = set_updateFramerate_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxG_obj::autoPause,HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")},
	{hx::fsBool,(void *) &FlxG_obj::fixedTimestep,HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49")},
	{hx::fsFloat,(void *) &FlxG_obj::timeScale,HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d")},
	{hx::fsInt,(void *) &FlxG_obj::worldDivisions,HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0")},
	{hx::fsObject /*::flixel::FlxCamera*/ ,(void *) &FlxG_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::flixel::_system::FlxVersion*/ ,(void *) &FlxG_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsObject /*::flixel::FlxGame*/ ,(void *) &FlxG_obj::game,HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsInt,(void *) &FlxG_obj::drawFramerate,HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad")},
	{hx::fsFloat,(void *) &FlxG_obj::elapsed,HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsFloat,(void *) &FlxG_obj::maxElapsed,HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")},
	{hx::fsInt,(void *) &FlxG_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &FlxG_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::flixel::_system::scaleModes::BaseScaleMode*/ ,(void *) &FlxG_obj::scaleMode,HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsBool,(void *) &FlxG_obj::fullscreen,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(void *) &FlxG_obj::worldBounds,HX_HCSTRING("worldBounds","\x67","\x1a","\x8b","\x31")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(void *) &FlxG_obj::save,HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouse*/ ,(void *) &FlxG_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::flixel::input::touch::FlxTouchManager*/ ,(void *) &FlxG_obj::touches,HX_HCSTRING("touches","\xed","\x1d","\xf8","\xd8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxG_obj::swipes,HX_HCSTRING("swipes","\xb9","\x42","\x76","\xc5")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyboard*/ ,(void *) &FlxG_obj::keys,HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadManager*/ ,(void *) &FlxG_obj::gamepads,HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb")},
	{hx::fsObject /*::flixel::_system::frontEnds::InputFrontEnd*/ ,(void *) &FlxG_obj::inputs,HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b")},
	{hx::fsObject /*::flixel::_system::frontEnds::ConsoleFrontEnd*/ ,(void *) &FlxG_obj::console,HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsObject /*::flixel::_system::frontEnds::LogFrontEnd*/ ,(void *) &FlxG_obj::log,HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsObject /*::flixel::_system::frontEnds::BitmapLogFrontEnd*/ ,(void *) &FlxG_obj::bitmapLog,HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6")},
	{hx::fsObject /*::flixel::_system::frontEnds::WatchFrontEnd*/ ,(void *) &FlxG_obj::watch,HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5")},
	{hx::fsObject /*::flixel::_system::frontEnds::DebuggerFrontEnd*/ ,(void *) &FlxG_obj::debugger,HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90")},
	{hx::fsObject /*::flixel::_system::frontEnds::VCRFrontEnd*/ ,(void *) &FlxG_obj::vcr,HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00")},
	{hx::fsObject /*::flixel::_system::frontEnds::BitmapFrontEnd*/ ,(void *) &FlxG_obj::bitmap,HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::flixel::_system::frontEnds::CameraFrontEnd*/ ,(void *) &FlxG_obj::cameras,HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3")},
	{hx::fsObject /*::flixel::_system::frontEnds::PluginFrontEnd*/ ,(void *) &FlxG_obj::plugins,HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02")},
	{hx::fsObject /*::flixel::_system::frontEnds::SoundFrontEnd*/ ,(void *) &FlxG_obj::sound,HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsObject /*::flixel::_system::frontEnds::SignalFrontEnd*/ ,(void *) &FlxG_obj::signals,HX_HCSTRING("signals","\x0b","\x6d","\xe2","\x40")},
	{hx::fsObject /*::flixel::_system::scaleModes::BaseScaleMode*/ ,(void *) &FlxG_obj::_scaleMode,HX_HCSTRING("_scaleMode","\xce","\x56","\x76","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::game,"game");
	HX_MARK_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::save,"save");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_MARK_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(FlxG_obj::signals,"signals");
	HX_MARK_MEMBER_NAME(FlxG_obj::_scaleMode,"_scaleMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::game,"game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::save,"save");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_VISIT_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(FlxG_obj::signals,"signals");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_scaleMode,"_scaleMode");
};

#endif

hx::Class FlxG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"),
	HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49"),
	HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d"),
	HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"),
	HX_HCSTRING("worldBounds","\x67","\x1a","\x8b","\x31"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("touches","\xed","\x1d","\xf8","\xd8"),
	HX_HCSTRING("swipes","\xb9","\x42","\x76","\xc5"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb"),
	HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90"),
	HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3"),
	HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("signals","\x0b","\x6d","\xe2","\x40"),
	HX_HCSTRING("_scaleMode","\xce","\x56","\x76","\x87"),
	HX_HCSTRING("resizeGame","\x06","\x84","\x99","\xb8"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("resetState","\xc2","\xad","\xa7","\x6c"),
	HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"),
	HX_HCSTRING("pixelPerfectOverlap","\x20","\x0b","\x1b","\x60"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("set_scaleMode","\xf0","\x90","\x3d","\x32"),
	HX_HCSTRING("set_mouse","\x88","\x5e","\x5f","\x33"),
	HX_HCSTRING("get_updateFramerate","\x5b","\x85","\xe1","\x28"),
	HX_HCSTRING("set_updateFramerate","\x67","\x78","\x7e","\x65"),
	HX_HCSTRING("set_drawFramerate","\x4c","\xdc","\x50","\xd7"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	::String(null()) };

void FlxG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxG","\x07","\xab","\x3b","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxG_obj >;
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

void FlxG_obj::__boot()
{
	autoPause= true;
	fixedTimestep= true;
	timeScale= ((Float)1);
	worldDivisions= (int)6;
	VERSION= ::flixel::_system::FlxVersion_obj::__new((int)3,(int)3,(int)11,null());
	elapsed= ((Float)0);
	maxElapsed= ((Float)0.1);
	fullscreen= false;
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",156,0x8e176836)
		{
			HX_STACK_LINE(156)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(156)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(156)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(156)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(156)
			::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(156)
				::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(156)
				_this->x = X;
				HX_STACK_LINE(156)
				_this->y = Y;
				HX_STACK_LINE(156)
				_this->width = Width;
				HX_STACK_LINE(156)
				_this->height = Height;
				HX_STACK_LINE(156)
				tmp = _this;
			}
			HX_STACK_LINE(156)
			::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(156)
			rect->_inPool = false;
			HX_STACK_LINE(156)
			return rect;
		}
		return null();
	}
};
	worldBounds= _Function_0_1::Block();
	save= ::flixel::util::FlxSave_obj::__new();
	swipes= Array_obj< ::Dynamic >::__new();
	inputs= ::flixel::_system::frontEnds::InputFrontEnd_obj::__new();
	console= ::flixel::_system::frontEnds::ConsoleFrontEnd_obj::__new();
	log= ::flixel::_system::frontEnds::LogFrontEnd_obj::__new();
	bitmapLog= ::flixel::_system::frontEnds::BitmapLogFrontEnd_obj::__new();
	watch= ::flixel::_system::frontEnds::WatchFrontEnd_obj::__new();
	debugger= ::flixel::_system::frontEnds::DebuggerFrontEnd_obj::__new();
	vcr= ::flixel::_system::frontEnds::VCRFrontEnd_obj::__new();
	bitmap= ::flixel::_system::frontEnds::BitmapFrontEnd_obj::__new();
	cameras= ::flixel::_system::frontEnds::CameraFrontEnd_obj::__new();
	plugins= ::flixel::_system::frontEnds::PluginFrontEnd_obj::__new();
	sound= ::flixel::_system::frontEnds::SoundFrontEnd_obj::__new();
	signals= ::flixel::_system::frontEnds::SignalFrontEnd_obj::__new();
struct _Function_0_2{
	inline static ::flixel::_system::scaleModes::BaseScaleMode Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",279,0x8e176836)
		{
			HX_STACK_LINE(279)
			::flixel::_system::scaleModes::RatioScaleMode tmp = ::flixel::_system::scaleModes::RatioScaleMode_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(279)
			return ((::flixel::_system::scaleModes::BaseScaleMode)(tmp));
		}
		return null();
	}
};
	_scaleMode= _Function_0_2::Block();
}

} // end namespace flixel
