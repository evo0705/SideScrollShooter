#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Multitouch
#include <openfl/_legacy/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouchManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","new",0x0e972b2d,"flixel.input.touch.FlxTouchManager.new","flixel/input/touch/FlxTouchManager.hx",162,0xc27259e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(163)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(164)
	this->_inactiveTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(165)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		tmp = tmp2;
	}
	HX_STACK_LINE(165)
	this->_touchesCache = tmp;
	HX_STACK_LINE(166)
	int tmp1 = ::openfl::_legacy::ui::Multitouch_obj::maxTouchPoints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = tmp1;
	HX_STACK_LINE(167)
	::openfl::_legacy::ui::Multitouch_obj::set_inputMode(::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT);
	HX_STACK_LINE(169)
	::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	::String tmp4 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	Dynamic tmp5 = this->handleTouchBegin_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(170)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(170)
	::String tmp8 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_END;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(170)
	Dynamic tmp9 = this->handleTouchEnd_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(170)
	tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
	HX_STACK_LINE(171)
	::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(171)
	::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(171)
	::String tmp12 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(171)
	Dynamic tmp13 = this->handleTouchMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(171)
	tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
}
;
	return null();
}

//FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > _result_ = new FlxTouchManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > _result_ = new FlxTouchManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxTouchManager_obj::operator ::flixel::interfaces::IFlxInput_obj *()
	{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxTouchManager_obj >(this); }
::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID( int TouchPointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getByID",0x18c2ee75,"flixel.input.touch.FlxTouchManager.getByID","flixel/input/touch/FlxTouchManager.hx",40,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchPointID,"TouchPointID")
	HX_STACK_LINE(41)
	::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = TouchPointID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	::flixel::input::touch::FlxTouch tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getFirst",0xd4f3e5cd,"flixel.input.touch.FlxTouchManager.getFirst","flixel/input/touch/FlxTouchManager.hx",48,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::flixel::input::touch::FlxTouch tmp = this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(51)
		::flixel::input::touch::FlxTouch tmp2 = this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		return tmp2;
	}
	else{
		HX_STACK_LINE(55)
		return null();
	}
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","destroy",0x29a37247,"flixel.input.touch.FlxTouchManager.destroy","flixel/input/touch/FlxTouchManager.hx",64,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(65)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(65)
				if ((tmp1)){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				::flixel::input::touch::FlxTouch tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(65)
				::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(67)
				touch->destroy();
			}
		}
		HX_STACK_LINE(69)
		this->list = null();
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(71)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(71)
				if ((tmp1)){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				::flixel::input::touch::FlxTouch tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(71)
				++(_g);
				HX_STACK_LINE(73)
				touch->destroy();
			}
		}
		HX_STACK_LINE(75)
		this->_inactiveTouches = null();
		HX_STACK_LINE(77)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

Array< ::Dynamic > FlxTouchManager_obj::justStarted( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justStarted",0x4159d442,"flixel.input.touch.FlxTouchManager.justStarted","flixel/input/touch/FlxTouchManager.hx",87,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(88)
	bool tmp = (TouchArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(93)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(95)
	bool tmp1 = (touchLen > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	if ((tmp1)){
		HX_STACK_LINE(97)
		int tmp2 = touchLen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		TouchArray->splice((int)0,tmp2);
	}
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(100)
			++(_g);
			HX_STACK_LINE(102)
			bool tmp5 = (touch->_current == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			if ((tmp5)){
				HX_STACK_LINE(104)
				::flixel::input::touch::FlxTouch tmp6 = touch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				TouchArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(108)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

Array< ::Dynamic > FlxTouchManager_obj::justReleased( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justReleased",0x217e7e9c,"flixel.input.touch.FlxTouchManager.justReleased","flixel/input/touch/FlxTouchManager.hx",118,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(119)
	bool tmp = (TouchArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	if ((tmp)){
		HX_STACK_LINE(121)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(124)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(125)
	bool tmp1 = (touchLen > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp1)){
		HX_STACK_LINE(127)
		int tmp2 = touchLen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		TouchArray->splice((int)0,tmp2);
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			if ((tmp3)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(130)
			++(_g);
			HX_STACK_LINE(132)
			bool tmp5 = (touch->_current == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			if ((tmp5)){
				HX_STACK_LINE(134)
				::flixel::input::touch::FlxTouch tmp6 = touch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				TouchArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(138)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","reset",0x90b1b1dc,"flixel.input.touch.FlxTouchManager.reset","flixel/input/touch/FlxTouchManager.hx",145,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(148)
				::haxe::ds::IntMap tmp2 = this->_touchesCache;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(148)
				int tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				tmp2->remove(tmp3);
			}
;
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(151)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(151)
				if ((tmp3)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				::flixel::input::touch::FlxTouch tmp4 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				::flixel::input::touch::FlxTouch touch = tmp4;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(153)
				touch->deactivate();
				HX_STACK_LINE(154)
				::flixel::input::touch::FlxTouch tmp5 = touch;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(154)
				this->_inactiveTouches->push(tmp5);
			}
		}
		HX_STACK_LINE(157)
		int tmp2 = this->list->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		this->list->splice((int)0,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchBegin",0x51a5a0c5,"flixel.input.touch.FlxTouchManager.handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",180,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(181)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(182)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		if ((tmp3)){
			HX_STACK_LINE(184)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			Float tmp5 = FlashEvent->stageY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			touch->updatePosition(tmp4,tmp5);
			HX_STACK_LINE(186)
			bool tmp6 = (touch->_current > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			if ((tmp6)){
				HX_STACK_LINE(188)
				touch->_current = (int)1;
			}
			else{
				HX_STACK_LINE(192)
				touch->_current = (int)2;
			}
		}
		else{
			HX_STACK_LINE(197)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(197)
			Float tmp5 = FlashEvent->stageY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(197)
			int tmp6 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			::flixel::input::touch::FlxTouch tmp7 = this->recycle(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			touch = tmp7;
			HX_STACK_LINE(198)
			touch->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchEnd",0xa3529b77,"flixel.input.touch.FlxTouchManager.handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",208,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(209)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(211)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		if ((tmp3)){
			HX_STACK_LINE(213)
			bool tmp4 = (touch->_current > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			if ((tmp4)){
				HX_STACK_LINE(215)
				touch->_current = (int)-1;
			}
			else{
				HX_STACK_LINE(219)
				touch->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchMove( ::openfl::_legacy::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchMove",0x4a3ff3f5,"flixel.input.touch.FlxTouchManager.handleTouchMove","flixel/input/touch/FlxTouchManager.hx",230,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(231)
		::haxe::ds::IntMap tmp = this->_touchesCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		int tmp1 = FlashEvent->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		::flixel::input::touch::FlxTouch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(233)
		bool tmp3 = (touch != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		if ((tmp3)){
			HX_STACK_LINE(235)
			Float tmp4 = FlashEvent->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			Float tmp5 = FlashEvent->stageY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			touch->updatePosition(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","add",0x0e8d4cee,"flixel.input.touch.FlxTouchManager.add","flixel/input/touch/FlxTouchManager.hx",246,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(247)
	::flixel::input::touch::FlxTouch tmp = Touch;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	this->list->push(tmp);
	HX_STACK_LINE(248)
	::haxe::ds::IntMap tmp1 = this->_touchesCache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	int tmp2 = Touch->touchPointID;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	::flixel::input::touch::FlxTouch tmp3 = Touch;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	tmp1->set(tmp2,tmp3);
	HX_STACK_LINE(249)
	::flixel::input::touch::FlxTouch tmp4 = Touch;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle( Float X,Float Y,int PointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","recycle",0x3ca95560,"flixel.input.touch.FlxTouchManager.recycle","flixel/input/touch/FlxTouchManager.hx",261,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(PointID,"PointID")
	HX_STACK_LINE(262)
	int tmp = this->_inactiveTouches->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	if ((tmp1)){
		HX_STACK_LINE(264)
		::flixel::input::touch::FlxTouch tmp2 = this->_inactiveTouches->pop().StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::flixel::input::touch::FlxTouch touch = tmp2;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(265)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		int tmp5 = PointID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		touch->reset(tmp3,tmp4,tmp5);
		HX_STACK_LINE(266)
		::flixel::input::touch::FlxTouch tmp6 = touch;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		::flixel::input::touch::FlxTouch tmp7 = this->add(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		return tmp7;
	}
	HX_STACK_LINE(269)
	::flixel::input::touch::FlxTouch tmp2 = ::flixel::input::touch::FlxTouch_obj::__new(X,Y,PointID);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	::flixel::input::touch::FlxTouch tmp3 = this->add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","update",0x8957295c,"flixel.input.touch.FlxTouchManager.update","flixel/input/touch/FlxTouchManager.hx",277,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(278)
		int tmp = this->list->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(279)
		::flixel::input::touch::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(281)
		while((true)){
			HX_STACK_LINE(281)
			bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(281)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			if ((tmp3)){
				HX_STACK_LINE(281)
				break;
			}
			HX_STACK_LINE(283)
			::flixel::input::touch::FlxTouch tmp4 = this->list->__get(i).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(283)
			touch = tmp4;
			HX_STACK_LINE(286)
			bool tmp5 = (touch->_current == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			if ((tmp5)){
				HX_STACK_LINE(288)
				touch->deactivate();
				HX_STACK_LINE(289)
				::haxe::ds::IntMap tmp6 = this->_touchesCache;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(289)
				int tmp7 = touch->touchPointID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(289)
				tmp6->remove(tmp7);
				HX_STACK_LINE(290)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				this->list->splice(tmp8,(int)1);
				HX_STACK_LINE(291)
				::flixel::input::touch::FlxTouch tmp9 = touch;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(291)
				this->_inactiveTouches->push(tmp9);
			}
			else{
				HX_STACK_LINE(295)
				touch->update();
			}
			HX_STACK_LINE(298)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocus",0x9fe44386,"flixel.input.touch.FlxTouchManager.onFocus","flixel/input/touch/FlxTouchManager.hx",302,0xc27259e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocusLost",0x9504548a,"flixel.input.touch.FlxTouchManager.onFocusLost","flixel/input/touch/FlxTouchManager.hx",306,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justStarted") ) { return justStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTouchManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = maxTouchPoints; return true;  }
	}
	return false;
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTouchManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"));
	outFields->push(HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,_inactiveTouches),HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxTouchManager_obj,_touchesCache),HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTouchManager_obj::maxTouchPoints,HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("_inactiveTouches","\x43","\x04","\x4f","\x3d"),
	HX_HCSTRING("_touchesCache","\xf4","\xe3","\xc3","\x76"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("getFirst","\xba","\x87","\x74","\x60"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("justStarted","\x75","\x64","\xdb","\xed"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("handleTouchBegin","\xb2","\x77","\xad","\x79"),
	HX_HCSTRING("handleTouchEnd","\x24","\xed","\xe0","\x4d"),
	HX_HCSTRING("handleTouchMove","\xa8","\x19","\x39","\xdc"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#endif

hx::Class FlxTouchManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxTouchPoints","\xfe","\x7e","\x0e","\x64"),
	::String(null()) };

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.touch.FlxTouchManager","\xbb","\x10","\x25","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTouchManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTouchManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTouchManager_obj >;
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

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
