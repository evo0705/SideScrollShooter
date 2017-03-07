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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_GraphicButton
#include <flixel/ui/_FlxTypedButton/GraphicButton.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxTypedButton","new",0xc7e33f04,"flixel.ui.FlxTypedButton.new","flixel/ui/FlxTypedButton.hx",19,0x752be24c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(72)
	this->_pressedMouse = false;
	HX_STACK_LINE(42)
	this->allowHighlightOnMobile = false;
	HX_STACK_LINE(37)
	this->allowSwiping = true;
	HX_STACK_LINE(83)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(85)
	this->loadGraphic(hx::ClassOf< ::flixel::ui::_FlxTypedButton::GraphicButton >(),true,(int)80,(int)20,null(),null());
	HX_STACK_LINE(87)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp2 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(OnClick,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	this->onUp = tmp2;
	HX_STACK_LINE(88)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp3 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	this->onDown = tmp3;
	HX_STACK_LINE(89)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp4 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	this->onOver = tmp4;
	HX_STACK_LINE(90)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp5 = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	this->onOut = tmp5;
	HX_STACK_LINE(92)
	this->labelAlphas = Array_obj< Float >::__new().Add(((Float)0.8)).Add(((Float)1.0)).Add(((Float)0.5));
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(93)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(93)
		::flixel::util::FlxPool tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		Float tmp9 = X1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		Float tmp10 = Y1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		tmp6 = point;
	}
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(93)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(93)
		::flixel::util::FlxPool tmp8 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		Float tmp10 = X1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		Float tmp11 = Y1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		tmp7 = point;
	}
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::flixel::util::FlxPool tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp11 = tmp10->set((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		tmp8 = point;
	}
	HX_STACK_LINE(93)
	this->labelOffsets = Array_obj< ::Dynamic >::__new().Add(tmp6).Add(tmp7).Add(tmp8);
	HX_STACK_LINE(95)
	this->set_status((int)0);
	HX_STACK_LINE(98)
	::flixel::util::FlxPoint tmp9 = this->scrollFactor;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(98)
	tmp9->set(null(),null());
	HX_STACK_LINE(101)
	::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(101)
	::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(101)
	::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(101)
	Dynamic tmp13 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(101)
	tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
}
;
	return null();
}

//FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > _result_ = new FlxTypedButton_obj();
	_result_->__construct(__o_X,__o_Y,OnClick);
	return _result_;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > _result_ = new FlxTypedButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","destroy",0xe11bbd9e,"flixel.ui.FlxTypedButton.destroy","flixel/ui/FlxTypedButton.hx",109,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Dynamic tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		this->set_label(tmp1);
		HX_STACK_LINE(112)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp2 = this->onUp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		this->onUp = tmp3;
		HX_STACK_LINE(113)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp4 = this->onDown;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		this->onDown = tmp5;
		HX_STACK_LINE(114)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp6 = this->onOver;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		this->onOver = tmp7;
		HX_STACK_LINE(115)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp8 = this->onOut;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(115)
		this->onOut = tmp9;
		HX_STACK_LINE(117)
		this->labelOffsets = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);
		HX_STACK_LINE(119)
		this->labelAlphas = null();
		HX_STACK_LINE(120)
		this->_pressedTouch = null();
		HX_STACK_LINE(123)
		::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		Dynamic tmp13 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		tmp11->removeEventListener(tmp12,tmp13,null());
		HX_STACK_LINE(126)
		this->super::destroy();
	}
return null();
}


Void FlxTypedButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","update",0xc4b5d5e5,"flixel.ui.FlxTypedButton.update","flixel/ui/FlxTypedButton.hx",133,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->super::update();
		HX_STACK_LINE(136)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp1)){
			HX_STACK_LINE(138)
			return null();
		}
		HX_STACK_LINE(143)
		this->updateButton();
		HX_STACK_LINE(147)
		int tmp2 = this->status;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		int nextFrame = tmp2;		HX_STACK_VAR(nextFrame,"nextFrame");
		HX_STACK_LINE(157)
		::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		int tmp4 = nextFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		tmp3->set_frameIndex(tmp4);
	}
return null();
}


Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","draw",0x18618ce0,"flixel.ui.FlxTypedButton.draw","flixel/ui/FlxTypedButton.hx",164,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->super::draw();
		HX_STACK_LINE(167)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(167)
			Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			tmp2 = tmp4->__Field(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(167)
			tmp2 = false;
		}
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(169)
			Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			tmp3->__Field(HX_HCSTRING("set_cameras","\x51","\xf1","\x98","\x73"), hx::paccDynamic )(this->get_cameras());
			HX_STACK_LINE(170)
			Dynamic tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			tmp4->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
		}
	}
return null();
}


Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateButton",0x576ba5b7,"flixel.ui.FlxTypedButton.updateButton","flixel/ui/FlxTypedButton.hx",194,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		bool overlapFound = false;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(199)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(199)
				if ((tmp1)){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(199)
				::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(199)
				::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(199)
				++(_g);
				HX_STACK_LINE(202)
				::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				::flixel::FlxCamera tmp4 = camera;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(202)
				::flixel::util::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(202)
				tmp3->getWorldPosition(tmp4,tmp5);
				HX_STACK_LINE(204)
				::flixel::util::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				::flixel::FlxCamera tmp7 = camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				bool tmp8 = this->overlapsPoint(tmp6,true,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(204)
				if ((tmp8)){
					HX_STACK_LINE(206)
					overlapFound = true;
					HX_STACK_LINE(207)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						::flixel::input::mouse::FlxMouse tmp10 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(207)
						::flixel::input::mouse::FlxMouseButton _this = tmp10->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(207)
						bool tmp11 = (_this->current == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(207)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(207)
						if ((tmp12)){
							HX_STACK_LINE(207)
							tmp9 = (_this->current == (int)-2);
						}
						else{
							HX_STACK_LINE(207)
							tmp9 = true;
						}
					}
					HX_STACK_LINE(207)
					::flixel::input::mouse::FlxMouse tmp10 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(207)
					int tmp11 = tmp10->_leftButton->current;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(207)
					bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(207)
					this->updateStatus(true,tmp9,tmp12,null());
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(213)
					::flixel::input::touch::FlxTouchManager tmp9 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(213)
					Array< ::Dynamic > _g3 = tmp9->list;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(213)
					while((true)){
						HX_STACK_LINE(213)
						bool tmp10 = (_g2 < _g3->length);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(213)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(213)
						if ((tmp11)){
							HX_STACK_LINE(213)
							break;
						}
						HX_STACK_LINE(213)
						::flixel::input::touch::FlxTouch tmp12 = _g3->__get(_g2).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(213)
						::flixel::input::touch::FlxTouch touch = tmp12;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(213)
						++(_g2);
						HX_STACK_LINE(215)
						::flixel::FlxCamera tmp13 = camera;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(215)
						::flixel::util::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(215)
						touch->getWorldPosition(tmp13,tmp14);
						HX_STACK_LINE(217)
						::flixel::util::FlxPoint tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(217)
						::flixel::FlxCamera tmp16 = camera;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(217)
						bool tmp17 = this->overlapsPoint(tmp15,true,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(217)
						if ((tmp17)){
							HX_STACK_LINE(219)
							overlapFound = true;
							HX_STACK_LINE(220)
							bool tmp18 = (touch->_current == (int)2);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(220)
							bool tmp19 = (touch->_current > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(220)
							::flixel::input::touch::FlxTouch tmp20 = touch;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(220)
							this->updateStatus(true,tmp18,tmp19,tmp20);
							HX_STACK_LINE(221)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(227)
		bool tmp = overlapFound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			this->updateStatus(false,false,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

Void FlxTypedButton_obj::updateStatus( bool Overlap,bool JustPressed,bool Pressed,::flixel::input::touch::FlxTouch Touch){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatus",0x83872af7,"flixel.ui.FlxTypedButton.updateStatus","flixel/ui/FlxTypedButton.hx",242,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Overlap,"Overlap")
		HX_STACK_ARG(JustPressed,"JustPressed")
		HX_STACK_ARG(Pressed,"Pressed")
		HX_STACK_ARG(Touch,"Touch")
		HX_STACK_LINE(243)
		bool tmp = Overlap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		if ((tmp)){
			HX_STACK_LINE(245)
			bool tmp1 = JustPressed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(245)
			if ((tmp1)){
				HX_STACK_LINE(247)
				this->_pressedTouch = Touch;
				HX_STACK_LINE(248)
				bool tmp2 = (Touch == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(248)
				if ((tmp2)){
					HX_STACK_LINE(250)
					this->_pressedMouse = true;
				}
				HX_STACK_LINE(252)
				this->onDownHandler();
			}
			else{
				HX_STACK_LINE(254)
				int tmp2 = this->status;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(254)
				bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				if ((tmp3)){
					HX_STACK_LINE(257)
					bool tmp4 = this->allowSwiping;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(257)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(257)
					if ((tmp4)){
						HX_STACK_LINE(257)
						tmp5 = Pressed;
					}
					else{
						HX_STACK_LINE(257)
						tmp5 = false;
					}
					HX_STACK_LINE(257)
					if ((tmp5)){
						HX_STACK_LINE(259)
						this->onDownHandler();
					}
					else{
						HX_STACK_LINE(263)
						this->onOverHandler();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(267)
			int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(267)
			bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			if ((tmp2)){
				HX_STACK_LINE(269)
				this->onOutHandler();
			}
		}
		HX_STACK_LINE(274)
		::flixel::input::touch::FlxTouch tmp1 = this->_pressedTouch;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		if ((tmp2)){
			HX_STACK_LINE(274)
			::flixel::input::touch::FlxTouch tmp4 = this->_pressedTouch;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			::flixel::input::touch::FlxTouch tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			int tmp6 = tmp5->_current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			tmp3 = (tmp6 == (int)-1);
		}
		else{
			HX_STACK_LINE(274)
			tmp3 = false;
		}
		HX_STACK_LINE(274)
		if ((tmp3)){
			HX_STACK_LINE(276)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,updateStatus,(void))

Void FlxTypedButton_obj::onUpEventListener( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpEventListener",0x0f960298,"flixel.ui.FlxTypedButton.onUpEventListener","flixel/ui/FlxTypedButton.hx",287,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(288)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		if ((tmp1)){
			HX_STACK_LINE(288)
			tmp2 = this->exists;
		}
		else{
			HX_STACK_LINE(288)
			tmp2 = false;
		}
		HX_STACK_LINE(288)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(288)
		if ((tmp3)){
			HX_STACK_LINE(288)
			tmp4 = this->active;
		}
		else{
			HX_STACK_LINE(288)
			tmp4 = false;
		}
		HX_STACK_LINE(288)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		if ((tmp4)){
			HX_STACK_LINE(288)
			int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(288)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(288)
			tmp5 = (tmp7 == (int)2);
		}
		else{
			HX_STACK_LINE(288)
			tmp5 = false;
		}
		HX_STACK_LINE(288)
		if ((tmp5)){
			HX_STACK_LINE(290)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onUpEventListener,(void))

Void FlxTypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpHandler",0xf0255834,"flixel.ui.FlxTypedButton.onUpHandler","flixel/ui/FlxTypedButton.hx",299,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		this->set_status((int)0);
		HX_STACK_LINE(301)
		this->_pressedMouse = false;
		HX_STACK_LINE(302)
		this->_pressedTouch = null();
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp = this->onUp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(304)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(304)
			if ((tmp1)){
				HX_STACK_LINE(304)
				_this->callback();
			}
			HX_STACK_LINE(304)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(304)
			if ((tmp2)){
				HX_STACK_LINE(304)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

Void FlxTypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onDownHandler",0x6003504d,"flixel.ui.FlxTypedButton.onDownHandler","flixel/ui/FlxTypedButton.hx",311,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->set_status((int)2);
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp = this->onDown;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(314)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(314)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			if ((tmp1)){
				HX_STACK_LINE(314)
				_this->callback();
			}
			HX_STACK_LINE(314)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(314)
			if ((tmp2)){
				HX_STACK_LINE(314)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

Void FlxTypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOverHandler",0x3b6b999b,"flixel.ui.FlxTypedButton.onOverHandler","flixel/ui/FlxTypedButton.hx",321,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		this->set_status((int)1);
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp = this->onOver;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(324)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(324)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(324)
			if ((tmp1)){
				HX_STACK_LINE(324)
				_this->callback();
			}
			HX_STACK_LINE(324)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(324)
			if ((tmp2)){
				HX_STACK_LINE(324)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

Void FlxTypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOutHandler",0x1cacc3b7,"flixel.ui.FlxTypedButton.onOutHandler","flixel/ui/FlxTypedButton.hx",331,0x752be24c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		this->set_status((int)0);
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp = this->onOut;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(334)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(334)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(334)
			if ((tmp1)){
				HX_STACK_LINE(334)
				_this->callback();
			}
			HX_STACK_LINE(334)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			if ((tmp2)){
				HX_STACK_LINE(334)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

Dynamic FlxTypedButton_obj::set_label( Dynamic Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_label",0xd03f57fb,"flixel.ui.FlxTypedButton.set_label","flixel/ui/FlxTypedButton.hx",338,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(339)
	bool tmp = (Value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	if ((tmp)){
		HX_STACK_LINE(342)
		Value->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("put","\xcf","\x62","\x55","\x00"), hx::paccDynamic )();
		HX_STACK_LINE(343)
		::flixel::util::FlxPoint tmp1 = this->scrollFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		Value->__FieldRef(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")) = tmp1;
	}
	HX_STACK_LINE(345)
	Dynamic tmp1 = this->label = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_label,return )

int FlxTypedButton_obj::set_status( int Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_status",0x23ac634b,"flixel.ui.FlxTypedButton.set_status","flixel/ui/FlxTypedButton.hx",349,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(350)
	int tmp = this->labelAlphas->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	if ((tmp2)){
		HX_STACK_LINE(350)
		Dynamic tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(350)
		tmp3 = false;
	}
	HX_STACK_LINE(350)
	if ((tmp3)){
		HX_STACK_LINE(352)
		Dynamic tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(352)
		Float tmp5 = this->alpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		Float tmp6 = this->labelAlphas->__get(Value);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(352)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(352)
		tmp4->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(354)
	int tmp4 = this->status = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(354)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Float FlxTypedButton_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_x",0xd772faff,"flixel.ui.FlxTypedButton.set_x","flixel/ui/FlxTypedButton.hx",358,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(359)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	this->super::set_x(tmp);
	HX_STACK_LINE(361)
	Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	if ((tmp2)){
		HX_STACK_LINE(363)
		Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(363)
		::flixel::util::FlxPoint tmp6 = this->labelOffsets->__get(tmp5).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(363)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(363)
		tmp3->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp8);
	}
	HX_STACK_LINE(365)
	Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	return tmp3;
}


Float FlxTypedButton_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_y",0xd772fb00,"flixel.ui.FlxTypedButton.set_y","flixel/ui/FlxTypedButton.hx",369,0x752be24c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(370)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	this->super::set_y(tmp);
	HX_STACK_LINE(372)
	Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	if ((tmp2)){
		HX_STACK_LINE(374)
		Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(374)
		::flixel::util::FlxPoint tmp6 = this->labelOffsets->__get(tmp5).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(374)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(374)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(374)
		tmp3->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp8);
	}
	HX_STACK_LINE(376)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(376)
	return tmp3;
}



FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(allowHighlightOnMobile,"allowHighlightOnMobile");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_MARK_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(allowHighlightOnMobile,"allowHighlightOnMobile");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_VISIT_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_label") ) { return set_label_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return allowSwiping; }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { return _pressedTouch; }
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { return _pressedMouse; }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return onUpEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowHighlightOnMobile") ) { return allowHighlightOnMobile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == hx::paccAlways) return set_label(inValue);label=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp == hx::paccAlways) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { _pressedTouch=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { _pressedMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"allowHighlightOnMobile") ) { allowHighlightOnMobile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTypedButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"));
	outFields->push(HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"));
	outFields->push(HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"));
	outFields->push(HX_HCSTRING("allowHighlightOnMobile","\x6c","\x7a","\x3a","\xbf"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"));
	outFields->push(HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"));
	outFields->push(HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"));
	outFields->push(HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"));
	outFields->push(HX_HCSTRING("_pressedTouch","\x9c","\x7c","\xbf","\x65"));
	outFields->push(HX_HCSTRING("_pressedMouse","\x02","\x7b","\xf1","\x5d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedButton_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedButton_obj,labelOffsets),HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTypedButton_obj,labelAlphas),HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowSwiping),HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowHighlightOnMobile),HX_HCSTRING("allowHighlightOnMobile","\x6c","\x7a","\x3a","\xbf")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onUp),HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onDown),HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOver),HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec")},
	{hx::fsObject /*::flixel::ui::_FlxTypedButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOut),HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(FlxTypedButton_obj,_pressedTouch),HX_HCSTRING("_pressedTouch","\x9c","\x7c","\xbf","\x65")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,_pressedMouse),HX_HCSTRING("_pressedMouse","\x02","\x7b","\xf1","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"),
	HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"),
	HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"),
	HX_HCSTRING("allowHighlightOnMobile","\x6c","\x7a","\x3a","\xbf"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"),
	HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"),
	HX_HCSTRING("_pressedTouch","\x9c","\x7c","\xbf","\x65"),
	HX_HCSTRING("_pressedMouse","\x02","\x7b","\xf1","\x5d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("updateButton","\xdb","\x08","\xa4","\xd9"),
	HX_HCSTRING("updateStatus","\x1b","\x8e","\xbf","\x05"),
	HX_HCSTRING("onUpEventListener","\xf4","\xbc","\xef","\x3b"),
	HX_HCSTRING("onUpHandler","\x90","\xa5","\xd0","\xa3"),
	HX_HCSTRING("onDownHandler","\xa9","\xac","\x21","\xcf"),
	HX_HCSTRING("onOverHandler","\xf7","\xf5","\x89","\xaa"),
	HX_HCSTRING("onOutHandler","\xdb","\x26","\xe5","\x9e"),
	HX_HCSTRING("set_label","\x57","\x56","\xa9","\x96"),
	HX_HCSTRING("set_status","\x6f","\xf5","\x00","\xfa"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxTypedButton","\x12","\xad","\x96","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTypedButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedButton_obj >;
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
} // end namespace ui
