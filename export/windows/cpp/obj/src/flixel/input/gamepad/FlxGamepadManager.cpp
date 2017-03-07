#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",23,0xccfee0a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	this->globalDeadZone = ((Float)0);
	HX_STACK_LINE(279)
	this->_gamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(282)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	Dynamic tmp2 = this->handleAxisMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	tmp1->addEventListener(HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"),tmp2,null(),null(),null());
	HX_STACK_LINE(283)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	Dynamic tmp5 = this->handleBallMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(283)
	tmp4->addEventListener(HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"),tmp5,null(),null(),null());
	HX_STACK_LINE(284)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(284)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(284)
	Dynamic tmp8 = this->handleButtonDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(284)
	tmp7->addEventListener(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),tmp8,null(),null(),null());
	HX_STACK_LINE(285)
	::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(285)
	::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(285)
	Dynamic tmp11 = this->handleButtonUp_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(285)
	tmp10->addEventListener(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),tmp11,null(),null(),null());
	HX_STACK_LINE(286)
	::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(286)
	::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(286)
	Dynamic tmp14 = this->handleHatMove_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(286)
	tmp13->addEventListener(HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"),tmp14,null(),null(),null());
}
;
	return null();
}

//FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxGamepadManager_obj::operator ::flixel::interfaces::IFlxInput_obj *()
	{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxGamepadManager_obj >(this); }
::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",58,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(59)
	::flixel::input::gamepad::FlxGamepad tmp = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::flixel::input::gamepad::FlxGamepad gamepad = tmp;		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(61)
	bool tmp1 = (gamepad == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(63)
		int tmp2 = GamepadID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Float tmp3 = this->globalDeadZone;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::flixel::input::gamepad::FlxGamepad tmp4 = ::flixel::input::gamepad::FlxGamepad_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		gamepad = tmp4;
		HX_STACK_LINE(64)
		::flixel::input::gamepad::FlxGamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		this->_gamepads[GamepadID] = tmp5;
	}
	HX_STACK_LINE(67)
	::flixel::input::gamepad::FlxGamepad tmp2 = this->firstActive;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	if ((tmp3)){
		HX_STACK_LINE(69)
		this->firstActive = gamepad;
	}
	HX_STACK_LINE(71)
	this->lastActive = gamepad;
	HX_STACK_LINE(73)
	::flixel::input::gamepad::FlxGamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",83,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDsArray,"IDsArray")
	HX_STACK_LINE(84)
	bool tmp = (IDsArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(86)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(89)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(89)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			if ((tmp2)){
				HX_STACK_LINE(89)
				break;
			}
			HX_STACK_LINE(89)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(89)
			++(_g);
			HX_STACK_LINE(91)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp4)){
				HX_STACK_LINE(91)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(91)
				tmp5 = false;
			}
			HX_STACK_LINE(91)
			if ((tmp5)){
				HX_STACK_LINE(93)
				int tmp6 = gamepad->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				IDsArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(97)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",107,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadArray,"GamepadArray")
	HX_STACK_LINE(108)
	bool tmp = (GamepadArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	if ((tmp)){
		HX_STACK_LINE(110)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			if ((tmp2)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(115)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			if ((tmp4)){
				HX_STACK_LINE(115)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(115)
				tmp5 = false;
			}
			HX_STACK_LINE(115)
			if ((tmp5)){
				HX_STACK_LINE(117)
				::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				GamepadArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(121)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",129,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::flixel::input::gamepad::FlxGamepad tmp = this->getFirstActiveGamepad();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::flixel::input::gamepad::FlxGamepad firstActive = tmp;		HX_STACK_VAR(firstActive,"firstActive");
	HX_STACK_LINE(131)
	bool tmp1 = (firstActive == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	if ((tmp1)){
		HX_STACK_LINE(131)
		tmp2 = (int)-1;
	}
	else{
		HX_STACK_LINE(131)
		tmp2 = firstActive->id;
	}
	HX_STACK_LINE(131)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",139,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			if ((tmp1)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			if ((tmp3)){
				HX_STACK_LINE(142)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(142)
				tmp4 = false;
			}
			HX_STACK_LINE(142)
			if ((tmp4)){
				HX_STACK_LINE(144)
				::flixel::input::gamepad::FlxGamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(144)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(148)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",155,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			if ((tmp1)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(156)
			++(_g);
			HX_STACK_LINE(158)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp3)){
				HX_STACK_LINE(158)
				tmp4 = gamepad->anyButton();
			}
			else{
				HX_STACK_LINE(158)
				tmp4 = false;
			}
			HX_STACK_LINE(158)
			if ((tmp4)){
				HX_STACK_LINE(160)
				return true;
			}
		}
	}
	HX_STACK_LINE(164)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",171,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			if ((tmp1)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(174)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			if ((tmp3)){
				HX_STACK_LINE(174)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(174)
				tmp4 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp4)){
				HX_STACK_LINE(176)
				return true;
			}
		}
	}
	HX_STACK_LINE(180)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",190,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(191)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(191)
			if ((tmp1)){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(191)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(191)
			++(_g);
			HX_STACK_LINE(193)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp3)){
				HX_STACK_LINE(193)
				int tmp5 = ButtonID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				tmp4 = gamepad->pressed(tmp6);
			}
			else{
				HX_STACK_LINE(193)
				tmp4 = false;
			}
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(195)
				return true;
			}
		}
	}
	HX_STACK_LINE(199)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",209,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(210)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			if ((tmp1)){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(210)
			++(_g);
			HX_STACK_LINE(212)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			if ((tmp3)){
				HX_STACK_LINE(212)
				int tmp5 = ButtonID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(212)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(212)
				tmp4 = gamepad->justPressed(tmp6);
			}
			else{
				HX_STACK_LINE(212)
				tmp4 = false;
			}
			HX_STACK_LINE(212)
			if ((tmp4)){
				HX_STACK_LINE(214)
				return true;
			}
		}
	}
	HX_STACK_LINE(218)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",228,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(229)
	{
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			if ((tmp1)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(231)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			if ((tmp3)){
				HX_STACK_LINE(231)
				int tmp5 = ButtonID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(231)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(231)
				tmp4 = gamepad->justReleased(tmp6);
			}
			else{
				HX_STACK_LINE(231)
				tmp4 = false;
			}
			HX_STACK_LINE(231)
			if ((tmp4)){
				HX_STACK_LINE(233)
				return true;
			}
		}
	}
	HX_STACK_LINE(237)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",245,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(246)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(246)
				if ((tmp1)){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(246)
				::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(246)
				::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(246)
				++(_g);
				HX_STACK_LINE(248)
				::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(248)
				::flixel::input::gamepad::FlxGamepad tmp4 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(248)
				gamepad = tmp4;
			}
		}
		HX_STACK_LINE(251)
		this->firstActive = null();
		HX_STACK_LINE(252)
		this->lastActive = null();
		HX_STACK_LINE(253)
		this->_gamepads = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",267,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(267)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(267)
		while((true)){
			HX_STACK_LINE(267)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(267)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(267)
			if ((tmp1)){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(267)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(267)
			++(_g);
			HX_STACK_LINE(269)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			if ((tmp3)){
				HX_STACK_LINE(271)
				gamepad->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

Void FlxGamepadManager_obj::handleButtonDown( ::openfl::_legacy::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDown",0x9a9405cf,"flixel.input.gamepad.FlxGamepadManager.handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",361,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(362)
		int tmp = FlashEvent->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->getByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(363)
		int tmp2 = FlashEvent->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = gamepad->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(365)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		if ((tmp4)){
			HX_STACK_LINE(367)
			button->press();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::handleButtonUp( ::openfl::_legacy::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUp",0x87ba4e88,"flixel.input.gamepad.FlxGamepadManager.handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",372,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(373)
		int tmp = FlashEvent->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->getByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(374)
		int tmp2 = FlashEvent->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = gamepad->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(376)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		if ((tmp4)){
			HX_STACK_LINE(378)
			button->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::_legacy::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleAxisMove",0xbb7c51ed,"flixel.input.gamepad.FlxGamepadManager.handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",383,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(384)
		int tmp = FlashEvent->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->getByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(385)
		gamepad->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::_legacy::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleBallMove",0x63851e4b,"flixel.input.gamepad.FlxGamepadManager.handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",389,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(390)
		int tmp = FlashEvent->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->getByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(391)
		Float tmp2 = FlashEvent->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		Float tmp4 = gamepad->deadZone;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		if ((tmp5)){
			HX_STACK_LINE(391)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(391)
			tmp6 = FlashEvent->x;
		}
		HX_STACK_LINE(391)
		gamepad->ball->set_x(tmp6);
		HX_STACK_LINE(392)
		Float tmp7 = FlashEvent->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		Float tmp9 = gamepad->deadZone;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(392)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(392)
		if ((tmp10)){
			HX_STACK_LINE(392)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(392)
			tmp11 = FlashEvent->y;
		}
		HX_STACK_LINE(392)
		gamepad->ball->set_y(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::_legacy::events::JoystickEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleHatMove",0x5f7942d1,"flixel.input.gamepad.FlxGamepadManager.handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",396,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(397)
		int tmp = FlashEvent->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->getByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(398)
		Float tmp2 = FlashEvent->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		Float tmp4 = gamepad->deadZone;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(398)
		if ((tmp5)){
			HX_STACK_LINE(398)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(398)
			tmp6 = FlashEvent->x;
		}
		HX_STACK_LINE(398)
		gamepad->hat->set_x(tmp6);
		HX_STACK_LINE(399)
		Float tmp7 = FlashEvent->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		Float tmp9 = gamepad->deadZone;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(399)
		if ((tmp10)){
			HX_STACK_LINE(399)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(399)
			tmp11 = FlashEvent->y;
		}
		HX_STACK_LINE(399)
		gamepad->hat->set_y(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",408,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(408)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(408)
		while((true)){
			HX_STACK_LINE(408)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(408)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(408)
			if ((tmp1)){
				HX_STACK_LINE(408)
				break;
			}
			HX_STACK_LINE(408)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(408)
			++(_g);
			HX_STACK_LINE(410)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			if ((tmp3)){
				HX_STACK_LINE(412)
				gamepad->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",417,0xccfee0a6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",421,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",425,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(426)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(427)
		while((true)){
			HX_STACK_LINE(427)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(427)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(427)
			if ((tmp1)){
				HX_STACK_LINE(427)
				break;
			}
			HX_STACK_LINE(427)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(427)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(427)
			++(_g);
			HX_STACK_LINE(429)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			if ((tmp3)){
				HX_STACK_LINE(431)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(434)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

Float FlxGamepadManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","set_globalDeadZone",0x5e4d5a03,"flixel.input.gamepad.FlxGamepadManager.set_globalDeadZone","flixel/input/gamepad/FlxGamepadManager.hx",444,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DeadZone,"DeadZone")
	HX_STACK_LINE(445)
	this->globalDeadZone = DeadZone;
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(446)
		while((true)){
			HX_STACK_LINE(446)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(446)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(446)
			if ((tmp1)){
				HX_STACK_LINE(446)
				break;
			}
			HX_STACK_LINE(446)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(446)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(446)
			++(_g);
			HX_STACK_LINE(448)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(448)
			if ((tmp3)){
				HX_STACK_LINE(450)
				gamepad->deadZone = DeadZone;
			}
		}
	}
	HX_STACK_LINE(453)
	Float tmp = this->globalDeadZone;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,set_globalDeadZone,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp == hx::paccAlways ? get_numActiveGamepads() : numActiveGamepads; }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp == hx::paccAlways) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGamepadManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"));
	outFields->push(HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"));
	outFields->push(HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"));
	outFields->push(HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"));
	outFields->push(HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1")},
	{hx::fsInt,(int)offsetof(FlxGamepadManager_obj,numActiveGamepads),HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b")},
	{hx::fsFloat,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"),
	HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"),
	HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"),
	HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"),
	HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("getActiveGamepadIDs","\x53","\xfc","\xe8","\xb1"),
	HX_HCSTRING("getActiveGamepads","\xce","\x8f","\x6a","\x56"),
	HX_HCSTRING("getFirstActiveGamepadID","\x7c","\xc1","\x52","\x55"),
	HX_HCSTRING("getFirstActiveGamepad","\x61","\x27","\x31","\xc9"),
	HX_HCSTRING("anyButton","\xfe","\xc9","\x3f","\x37"),
	HX_HCSTRING("anyInput","\x7e","\x21","\xd0","\x3c"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("handleButtonDown","\x3c","\x11","\x2b","\x7c"),
	HX_HCSTRING("handleButtonUp","\xb5","\xb4","\x09","\xaa"),
	HX_HCSTRING("handleAxisMove","\x1a","\xb8","\xcb","\xdd"),
	HX_HCSTRING("handleBallMove","\x78","\x84","\xd4","\x85"),
	HX_HCSTRING("handleHatMove","\x44","\x81","\x80","\xc3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("get_numActiveGamepads","\x55","\x84","\xe4","\xc9"),
	HX_HCSTRING("set_globalDeadZone","\xb0","\xda","\x4f","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadManager","\x3b","\x35","\x83","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxGamepadManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadManager_obj >;
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
} // end namespace input
} // end namespace gamepad
