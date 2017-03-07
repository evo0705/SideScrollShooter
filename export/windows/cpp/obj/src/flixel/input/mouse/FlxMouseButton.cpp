#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouseButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","new",0xa21f5d96,"flixel.input.mouse.FlxMouseButton.new","flixel/input/mouse/FlxMouseButton.hx",11,0x7fcdf6f7)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(27)
	this->last = (int)0;
	HX_STACK_LINE(26)
	this->current = (int)0;
	HX_STACK_LINE(36)
	this->_ID = ID;
	HX_STACK_LINE(37)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(37)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(37)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(37)
		point->_inPool = false;
		HX_STACK_LINE(37)
		tmp = point;
	}
	HX_STACK_LINE(37)
	this->_justPressedPosition = tmp;
}
;
	return null();
}

//FlxMouseButton_obj::~FlxMouseButton_obj() { }

Dynamic FlxMouseButton_obj::__CreateEmpty() { return  new FlxMouseButton_obj; }
hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxMouseButton_obj > _result_ = new FlxMouseButton_obj();
	_result_->__construct(ID);
	return _result_;}

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButton_obj > _result_ = new FlxMouseButton_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxMouseButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxMouseButton_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxMouseButton_obj >(this); }
Void FlxMouseButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","update",0x2ce19e93,"flixel.input.mouse.FlxMouseButton.update","flixel/input/mouse/FlxMouseButton.hx",44,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		int tmp = this->last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(45)
			int tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			tmp2 = (tmp4 == (int)-1);
		}
		else{
			HX_STACK_LINE(45)
			tmp2 = false;
		}
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(47)
			this->current = (int)0;
		}
		else{
			HX_STACK_LINE(49)
			int tmp3 = this->last;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			if ((tmp4)){
				HX_STACK_LINE(49)
				int tmp6 = this->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				tmp5 = (tmp7 == (int)2);
			}
			else{
				HX_STACK_LINE(49)
				tmp5 = false;
			}
			HX_STACK_LINE(49)
			if ((tmp5)){
				HX_STACK_LINE(51)
				this->current = (int)1;
			}
			else{
				HX_STACK_LINE(53)
				int tmp6 = this->last;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				bool tmp7 = (tmp6 == (int)-2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				if ((tmp7)){
					HX_STACK_LINE(53)
					int tmp9 = this->current;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(53)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(53)
					tmp8 = (tmp10 == (int)-2);
				}
				else{
					HX_STACK_LINE(53)
					tmp8 = false;
				}
				HX_STACK_LINE(53)
				if ((tmp8)){
					HX_STACK_LINE(55)
					this->current = (int)0;
				}
			}
		}
		HX_STACK_LINE(58)
		int tmp3 = this->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		this->last = tmp3;
		HX_STACK_LINE(60)
		int tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		bool tmp5 = (tmp4 == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			int tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			tmp7 = (tmp9 == (int)-2);
		}
		else{
			HX_STACK_LINE(60)
			tmp7 = true;
		}
		HX_STACK_LINE(60)
		if ((tmp7)){
			HX_STACK_LINE(62)
			::flixel::util::FlxPoint tmp8 = this->_justPressedPosition;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			::flixel::input::mouse::FlxMouse tmp9 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			int tmp10 = tmp9->screenX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			::flixel::input::mouse::FlxMouse tmp11 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			int tmp12 = tmp11->screenY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			tmp8->set(tmp10,tmp12);
			HX_STACK_LINE(63)
			::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			this->_justPressedTimeInTicks = tmp13->ticks;
		}
		else{
			HX_STACK_LINE(65)
			int tmp8 = this->current;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			bool tmp9 = (tmp8 == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			if ((tmp10)){
				HX_STACK_LINE(65)
				int tmp12 = this->current;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(65)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(65)
				tmp11 = (tmp13 == (int)-2);
			}
			else{
				HX_STACK_LINE(65)
				tmp11 = true;
			}
			HX_STACK_LINE(65)
			if ((tmp11)){
				HX_STACK_LINE(67)
				int tmp12 = this->_ID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				::flixel::util::FlxPoint tmp13 = this->_justPressedPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				::flixel::input::mouse::FlxMouse tmp14 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(67)
				::flixel::util::FlxPoint tmp15 = tmp14->getScreenPosition(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				Float tmp16 = this->_justPressedTimeInTicks;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				::flixel::input::FlxSwipe tmp17 = ::flixel::input::FlxSwipe_obj::__new(tmp12,tmp13,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(67)
				::flixel::FlxG_obj::swipes->push(tmp17);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,update,(void))

Void FlxMouseButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","destroy",0x9f3f8d30,"flixel.input.mouse.FlxMouseButton.destroy","flixel/input/mouse/FlxMouseButton.hx",72,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::flixel::util::FlxPoint tmp = this->_justPressedPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		this->_justPressedPosition = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,destroy,(void))

Void FlxMouseButton_obj::onDown( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onDown",0x8ad419ab,"flixel.input.mouse.FlxMouseButton.onDown","flixel/input/mouse/FlxMouseButton.hx",77,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(116)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(118)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(122)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

Void FlxMouseButton_obj::onUp( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onUp",0x3a027364,"flixel.input.mouse.FlxMouseButton.onUp","flixel/input/mouse/FlxMouseButton.hx",131,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(140)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		if ((tmp1)){
			HX_STACK_LINE(142)
			this->current = (int)-2;
		}
		else{
			HX_STACK_LINE(144)
			int tmp2 = this->current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			if ((tmp3)){
				HX_STACK_LINE(146)
				this->current = (int)-1;
			}
			else{
				HX_STACK_LINE(150)
				this->current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

Void FlxMouseButton_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","reset",0x3c7a1085,"flixel.input.mouse.FlxMouseButton.reset","flixel/input/mouse/FlxMouseButton.hx",158,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->current = (int)0;
		HX_STACK_LINE(160)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,reset,(void))

bool FlxMouseButton_obj::pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","pressed",0xb4a032d8,"flixel.input.mouse.FlxMouseButton.pressed","flixel/input/mouse/FlxMouseButton.hx",167,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,pressed,return )

bool FlxMouseButton_obj::justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","justPressed",0x4d33c10c,"flixel.input.mouse.FlxMouseButton.justPressed","flixel/input/mouse/FlxMouseButton.hx",173,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	if ((tmp2)){
		HX_STACK_LINE(173)
		int tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		tmp3 = (tmp5 == (int)-2);
	}
	else{
		HX_STACK_LINE(173)
		tmp3 = true;
	}
	HX_STACK_LINE(173)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justPressed,return )

bool FlxMouseButton_obj::justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","justReleased",0x46eb3713,"flixel.input.mouse.FlxMouseButton.justReleased","flixel/input/mouse/FlxMouseButton.hx",179,0x7fcdf6f7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	if ((tmp2)){
		HX_STACK_LINE(179)
		int tmp4 = this->current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		tmp3 = (tmp5 == (int)-2);
	}
	else{
		HX_STACK_LINE(179)
		tmp3 = true;
	}
	HX_STACK_LINE(179)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,justReleased,return )

int FlxMouseButton_obj::LEFT;

int FlxMouseButton_obj::MIDDLE;

int FlxMouseButton_obj::RIGHT;

int FlxMouseButton_obj::FAST_PRESS_RELEASE;

int FlxMouseButton_obj::JUST_RELEASED;

int FlxMouseButton_obj::RELEASED;

int FlxMouseButton_obj::PRESSED;

int FlxMouseButton_obj::JUST_PRESSED;


FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(_ID,"_ID");
	HX_MARK_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_MARK_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(_ID,"_ID");
	HX_VISIT_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_VISIT_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
}

Dynamic FlxMouseButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ID") ) { return _ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { return _justPressedPosition; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { return _justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ID") ) { _ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { _justPressedPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { _justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxMouseButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("_ID","\xfa","\x55","\x48","\x00"));
	outFields->push(HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad"));
	outFields->push(HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsInt,(int)offsetof(FlxMouseButton_obj,_ID),HX_HCSTRING("_ID","\xfa","\x55","\x48","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouseButton_obj,_justPressedPosition),HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad")},
	{hx::fsFloat,(int)offsetof(FlxMouseButton_obj,_justPressedTimeInTicks),HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxMouseButton_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::MIDDLE,HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::FAST_PRESS_RELEASE,HX_HCSTRING("FAST_PRESS_RELEASE","\x68","\x2d","\x0a","\x63")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::JUST_RELEASED,HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::RELEASED,HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{hx::fsInt,(void *) &FlxMouseButton_obj::JUST_PRESSED,HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("_ID","\xfa","\x55","\x48","\x00"),
	HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad"),
	HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::FAST_PRESS_RELEASE,"FAST_PRESS_RELEASE");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::JUST_PRESSED,"JUST_PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::FAST_PRESS_RELEASE,"FAST_PRESS_RELEASE");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::JUST_PRESSED,"JUST_PRESSED");
};

#endif

hx::Class FlxMouseButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("MIDDLE","\x55","\x7f","\xe1","\xfe"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("FAST_PRESS_RELEASE","\x68","\x2d","\x0a","\x63"),
	HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6"),
	HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d"),
	::String(null()) };

void FlxMouseButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouseButton","\xa4","\x9a","\xd7","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxMouseButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouseButton_obj >;
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

void FlxMouseButton_obj::__boot()
{
	LEFT= (int)-1;
	MIDDLE= (int)-2;
	RIGHT= (int)-3;
	FAST_PRESS_RELEASE= (int)-2;
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
