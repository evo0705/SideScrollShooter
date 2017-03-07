#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::openfl::_legacy::display::Sprite CursorContainer)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouse","new",0x1251bd04,"flixel.input.mouse.FlxMouse.new","flixel/input/mouse/FlxMouse.hx",35,0xe4e80b89)
HX_STACK_THIS(this)
HX_STACK_ARG(CursorContainer,"CursorContainer")
{
	HX_STACK_LINE(134)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(133)
	this->_lastY = (int)0;
	HX_STACK_LINE(132)
	this->_lastX = (int)0;
	HX_STACK_LINE(127)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(126)
	this->_wheelUsed = false;
	HX_STACK_LINE(124)
	this->_cursor = null();
	HX_STACK_LINE(63)
	this->useSystemCursor = false;
	HX_STACK_LINE(59)
	this->visible = true;
	HX_STACK_LINE(49)
	this->screenY = (int)0;
	HX_STACK_LINE(45)
	this->screenX = (int)0;
	HX_STACK_LINE(41)
	this->wheel = (int)0;
	HX_STACK_LINE(429)
	super::__construct(null(),null());
	HX_STACK_LINE(431)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(432)
	::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	tmp->set_mouseChildren(false);
	HX_STACK_LINE(433)
	::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	tmp1->set_mouseEnabled(false);
	HX_STACK_LINE(435)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(435)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(435)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(435)
		point->_inPool = false;
		HX_STACK_LINE(435)
		tmp2 = point;
	}
	HX_STACK_LINE(435)
	this->_point = tmp2;
	HX_STACK_LINE(436)
	::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(436)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(436)
		::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(436)
		point->_inPool = false;
		HX_STACK_LINE(436)
		tmp3 = point;
	}
	HX_STACK_LINE(436)
	this->_globalScreenPosition = tmp3;
	HX_STACK_LINE(438)
	::flixel::input::mouse::FlxMouseButton tmp4 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(438)
	this->_leftButton = tmp4;
	HX_STACK_LINE(440)
	::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(440)
	::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(440)
	this->_stage = tmp6;
	HX_STACK_LINE(441)
	::openfl::_legacy::display::Stage tmp7 = this->_stage;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(441)
	::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(441)
	::flixel::input::mouse::FlxMouseButton tmp9 = this->_leftButton;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(441)
	Dynamic tmp10 = tmp9->onDown_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(441)
	tmp7->addEventListener(tmp8,tmp10,null(),null(),null());
	HX_STACK_LINE(442)
	::openfl::_legacy::display::Stage tmp11 = this->_stage;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(442)
	::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(442)
	::flixel::input::mouse::FlxMouseButton tmp13 = this->_leftButton;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(442)
	Dynamic tmp14 = tmp13->onUp_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(442)
	tmp11->addEventListener(tmp12,tmp14,null(),null(),null());
	HX_STACK_LINE(445)
	::flixel::input::mouse::FlxMouseButton tmp15 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(445)
	this->_middleButton = tmp15;
	HX_STACK_LINE(446)
	::flixel::input::mouse::FlxMouseButton tmp16 = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(446)
	this->_rightButton = tmp16;
	HX_STACK_LINE(448)
	::openfl::_legacy::display::Stage tmp17 = this->_stage;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(448)
	::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(448)
	::flixel::input::mouse::FlxMouseButton tmp19 = this->_middleButton;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(448)
	Dynamic tmp20 = tmp19->onDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(448)
	tmp17->addEventListener(tmp18,tmp20,null(),null(),null());
	HX_STACK_LINE(449)
	::openfl::_legacy::display::Stage tmp21 = this->_stage;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(449)
	::String tmp22 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(449)
	::flixel::input::mouse::FlxMouseButton tmp23 = this->_middleButton;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(449)
	Dynamic tmp24 = tmp23->onUp_dyn();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(449)
	tmp21->addEventListener(tmp22,tmp24,null(),null(),null());
	HX_STACK_LINE(450)
	::openfl::_legacy::display::Stage tmp25 = this->_stage;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(450)
	::String tmp26 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(450)
	::flixel::input::mouse::FlxMouseButton tmp27 = this->_rightButton;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(450)
	Dynamic tmp28 = tmp27->onDown_dyn();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(450)
	tmp25->addEventListener(tmp26,tmp28,null(),null(),null());
	HX_STACK_LINE(451)
	::openfl::_legacy::display::Stage tmp29 = this->_stage;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(451)
	::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(451)
	::flixel::input::mouse::FlxMouseButton tmp31 = this->_rightButton;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(451)
	Dynamic tmp32 = tmp31->onUp_dyn();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(451)
	tmp29->addEventListener(tmp30,tmp32,null(),null(),null());
	HX_STACK_LINE(453)
	::openfl::_legacy::display::Stage tmp33 = this->_stage;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(453)
	::String tmp34 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(453)
	Dynamic tmp35 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(453)
	tmp33->addEventListener(tmp34,tmp35,null(),null(),null());
	HX_STACK_LINE(456)
	::openfl::_legacy::display::Stage tmp36 = this->_stage;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(456)
	::String tmp37 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(456)
	Dynamic tmp38 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(456)
	tmp36->addEventListener(tmp37,tmp38,null(),null(),null());
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(458)
		::flixel::_system::frontEnds::SignalFrontEnd tmp39 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(458)
		Dynamic tmp40 = this->onGameStart_dyn();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(458)
		tmp39->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp40);
	}
	HX_STACK_LINE(459)
	::openfl::_legacy::ui::Mouse_obj::hide();
}
;
	return null();
}

//FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::openfl::_legacy::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(CursorContainer);
	return _result_;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > _result_ = new FlxMouse_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxMouse_obj::operator ::flixel::interfaces::IFlxInput_obj *()
	{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxMouse_obj >(this); }
Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","load",0xf3e8bd02,"flixel.input.mouse.FlxMouse.load","flixel/input/mouse/FlxMouse.hx",161,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(XOffset,"XOffset")
	HX_STACK_ARG(YOffset,"YOffset")
{
		HX_STACK_LINE(163)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(165)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			::openfl::_legacy::display::Bitmap tmp3 = this->_cursor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			tmp2->removeChild(tmp3);
		}
		HX_STACK_LINE(169)
		bool tmp2 = (Graphic == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		if ((tmp2)){
			HX_STACK_LINE(171)
			::flixel::input::mouse::_FlxMouse::GraphicCursor tmp3 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			Graphic = tmp3;
		}
		HX_STACK_LINE(174)
		Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		if ((tmp4)){
			HX_STACK_LINE(176)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			::openfl::_legacy::display::Bitmap tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			this->_cursor = tmp6;
		}
		else{
			HX_STACK_LINE(178)
			Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			if ((tmp6)){
				HX_STACK_LINE(180)
				::openfl::_legacy::display::BitmapData tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				tmp7 = hx::TCast< ::openfl::_legacy::display::BitmapData >::cast(Graphic);
				HX_STACK_LINE(180)
				::openfl::_legacy::display::Bitmap tmp8 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(180)
				this->_cursor = tmp8;
			}
			else{
				HX_STACK_LINE(182)
				Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(182)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				if ((tmp8)){
					HX_STACK_LINE(184)
					::openfl::_legacy::display::BitmapData tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(184)
					{
						HX_STACK_LINE(184)
						::String id = Graphic;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(184)
						::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(184)
						tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp10,false);
					}
					HX_STACK_LINE(184)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(184)
					this->_cursor = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					::flixel::input::mouse::_FlxMouse::GraphicCursor tmp9 = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this->_cursor = tmp10;
				}
			}
		}
		HX_STACK_LINE(191)
		::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		int tmp6 = XOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		tmp5->set_x(tmp6);
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Bitmap tmp7 = this->_cursor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		int tmp8 = YOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		tmp7->set_y(tmp8);
		HX_STACK_LINE(193)
		::openfl::_legacy::display::Bitmap tmp9 = this->_cursor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		Float tmp10 = Scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		tmp9->set_scaleX(tmp10);
		HX_STACK_LINE(194)
		::openfl::_legacy::display::Bitmap tmp11 = this->_cursor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(194)
		Float tmp12 = Scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(194)
		tmp11->set_scaleY(tmp12);
		HX_STACK_LINE(226)
		::openfl::_legacy::display::Sprite tmp13 = this->cursorContainer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		::openfl::_legacy::display::Bitmap tmp14 = this->_cursor;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		tmp13->addChild(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))

Void FlxMouse_obj::unload( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","unload",0x5a7132db,"flixel.input.mouse.FlxMouse.unload","flixel/input/mouse/FlxMouse.hx",235,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::openfl::_legacy::display::Bitmap tmp = this->_cursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(238)
			::openfl::_legacy::display::Sprite tmp2 = this->cursorContainer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			if ((tmp3)){
				HX_STACK_LINE(240)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(244)
				::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				::openfl::_legacy::display::Bitmap tmp5 = this->_cursor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(244)
				tmp4->removeChild(tmp5);
				HX_STACK_LINE(245)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

::flixel::util::FlxPoint FlxMouse_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","getWorldPosition",0x19d33b81,"flixel.input.mouse.FlxMouse.getWorldPosition","flixel/input/mouse/FlxMouse.hx",319,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(320)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	if ((tmp)){
		HX_STACK_LINE(322)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		Camera = tmp1;
	}
	HX_STACK_LINE(324)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	if ((tmp1)){
		HX_STACK_LINE(326)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(326)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(326)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(326)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(326)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(326)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(326)
			::flixel::util::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(326)
			point1->_inPool = false;
			HX_STACK_LINE(326)
			tmp2 = point1;
		}
		HX_STACK_LINE(326)
		point = tmp2;
	}
	HX_STACK_LINE(328)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	this->getScreenPosition(tmp2,tmp3);
	HX_STACK_LINE(329)
	::flixel::util::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(329)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(329)
	Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(329)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(329)
	::flixel::util::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(329)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(329)
	Float tmp10 = Camera->scroll->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(329)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(329)
	point->set(tmp7,tmp11);
	HX_STACK_LINE(330)
	::flixel::util::FlxPoint tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(330)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getWorldPosition,return )

::flixel::util::FlxPoint FlxMouse_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","getScreenPosition",0x3fbdd70f,"flixel.input.mouse.FlxMouse.getScreenPosition","flixel/input/mouse/FlxMouse.hx",342,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(343)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	if ((tmp)){
		HX_STACK_LINE(345)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		Camera = tmp1;
	}
	HX_STACK_LINE(347)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	if ((tmp1)){
		HX_STACK_LINE(349)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(349)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(349)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(349)
			point1->_inPool = false;
			HX_STACK_LINE(349)
			tmp2 = point1;
		}
		HX_STACK_LINE(349)
		point = tmp2;
	}
	HX_STACK_LINE(351)
	::flixel::util::FlxPoint tmp2 = this->_globalScreenPosition;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(351)
	Float tmp4 = Camera->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(351)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(351)
	Float tmp6 = Camera->zoom;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(351)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(351)
	point->set_x(tmp7);
	HX_STACK_LINE(352)
	::flixel::util::FlxPoint tmp8 = this->_globalScreenPosition;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(352)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(352)
	Float tmp10 = Camera->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(352)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(352)
	Float tmp12 = Camera->zoom;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(352)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(352)
	point->set_y(tmp13);
	HX_STACK_LINE(353)
	::flixel::util::FlxPoint tmp14 = point;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(353)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getScreenPosition,return )

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","destroy",0x77a13b9e,"flixel.input.mouse.FlxMouse.destroy","flixel/input/mouse/FlxMouse.hx",361,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(362)
		::openfl::_legacy::display::Stage tmp = this->_stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		if ((tmp1)){
			HX_STACK_LINE(364)
			::openfl::_legacy::display::Stage tmp2 = this->_stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			::flixel::input::mouse::FlxMouseButton tmp4 = this->_leftButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(364)
			Dynamic tmp5 = tmp4->onDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(364)
			tmp2->removeEventListener(tmp3,tmp5,null());
			HX_STACK_LINE(365)
			::openfl::_legacy::display::Stage tmp6 = this->_stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(365)
			::flixel::input::mouse::FlxMouseButton tmp8 = this->_leftButton;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(365)
			Dynamic tmp9 = tmp8->onUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(365)
			tmp6->removeEventListener(tmp7,tmp9,null());
			HX_STACK_LINE(368)
			::openfl::_legacy::display::Stage tmp10 = this->_stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(368)
			::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(368)
			::flixel::input::mouse::FlxMouseButton tmp12 = this->_middleButton;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			Dynamic tmp13 = tmp12->onDown_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			tmp10->removeEventListener(tmp11,tmp13,null());
			HX_STACK_LINE(369)
			::openfl::_legacy::display::Stage tmp14 = this->_stage;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(369)
			::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			::flixel::input::mouse::FlxMouseButton tmp16 = this->_middleButton;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			Dynamic tmp17 = tmp16->onUp_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			tmp14->removeEventListener(tmp15,tmp17,null());
			HX_STACK_LINE(370)
			::openfl::_legacy::display::Stage tmp18 = this->_stage;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(370)
			::flixel::input::mouse::FlxMouseButton tmp20 = this->_rightButton;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(370)
			Dynamic tmp21 = tmp20->onDown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(370)
			tmp18->removeEventListener(tmp19,tmp21,null());
			HX_STACK_LINE(371)
			::openfl::_legacy::display::Stage tmp22 = this->_stage;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(371)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(371)
			::flixel::input::mouse::FlxMouseButton tmp24 = this->_rightButton;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(371)
			Dynamic tmp25 = tmp24->onUp_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(371)
			tmp22->removeEventListener(tmp23,tmp25,null());
			HX_STACK_LINE(373)
			::openfl::_legacy::display::Stage tmp26 = this->_stage;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(373)
			::String tmp27 = ::openfl::_legacy::events::Event_obj::MOUSE_LEAVE;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(373)
			Dynamic tmp28 = this->onMouseLeave_dyn();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(373)
			tmp26->removeEventListener(tmp27,tmp28,null());
			HX_STACK_LINE(376)
			::openfl::_legacy::display::Stage tmp29 = this->_stage;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(376)
			::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(376)
			Dynamic tmp31 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(376)
			tmp29->removeEventListener(tmp30,tmp31,null());
		}
		HX_STACK_LINE(379)
		::flixel::util::FlxPoint tmp2 = this->_point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(379)
		this->_point = tmp3;
		HX_STACK_LINE(380)
		::flixel::util::FlxPoint tmp4 = this->_globalScreenPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(380)
		this->_globalScreenPosition = tmp5;
		HX_STACK_LINE(382)
		this->cursorContainer = null();
		HX_STACK_LINE(383)
		this->_cursor = null();
		HX_STACK_LINE(389)
		::flixel::input::mouse::FlxMouseButton tmp6 = this->_leftButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		::flixel::input::mouse::FlxMouseButton tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		this->_leftButton = tmp7;
		HX_STACK_LINE(391)
		::flixel::input::mouse::FlxMouseButton tmp8 = this->_middleButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		::flixel::input::mouse::FlxMouseButton tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(391)
		this->_middleButton = tmp9;
		HX_STACK_LINE(392)
		::flixel::input::mouse::FlxMouseButton tmp10 = this->_rightButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(392)
		::flixel::input::mouse::FlxMouseButton tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(392)
		this->_rightButton = tmp11;
		HX_STACK_LINE(395)
		::openfl::_legacy::display::BitmapData tmp12 = this->_cursorBitmapData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(395)
		::openfl::_legacy::display::BitmapData tmp13 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(395)
		this->_cursorBitmapData = tmp13;
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			::flixel::_system::frontEnds::SignalFrontEnd tmp14 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(396)
			Dynamic tmp15 = this->onGameStart_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(396)
			tmp14->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp15);
		}
		HX_STACK_LINE(398)
		this->super::destroy();
	}
return null();
}


Void FlxMouse_obj::setGlobalScreenPositionUnsafe( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","setGlobalScreenPositionUnsafe",0xfd93bf24,"flixel.input.mouse.FlxMouse.setGlobalScreenPositionUnsafe","flixel/input/mouse/FlxMouse.hx",406,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(407)
		::flixel::util::FlxPoint tmp = this->_globalScreenPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(407)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,setGlobalScreenPositionUnsafe,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","reset",0xe595a773,"flixel.input.mouse.FlxMouse.reset","flixel/input/mouse/FlxMouse.hx",414,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(415)
			::flixel::input::mouse::FlxMouseButton _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			_this->current = (int)0;
			HX_STACK_LINE(415)
			_this->last = (int)0;
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(418)
			::flixel::input::mouse::FlxMouseButton _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(418)
			_this->current = (int)0;
			HX_STACK_LINE(418)
			_this->last = (int)0;
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(419)
			::flixel::input::mouse::FlxMouseButton _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(419)
			_this->current = (int)0;
			HX_STACK_LINE(419)
			_this->last = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","update",0x7bea17e5,"flixel.input.mouse.FlxMouse.update","flixel/input/mouse/FlxMouse.hx",467,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		::flixel::util::FlxPoint tmp = this->_globalScreenPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		Float tmp2 = tmp1->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(468)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		tmp->set_x(tmp3);
		HX_STACK_LINE(469)
		::flixel::util::FlxPoint tmp4 = this->_globalScreenPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		Float tmp6 = tmp5->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(469)
		tmp4->set_y(tmp7);
		HX_STACK_LINE(472)
		bool tmp8 = this->visible;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(472)
		if ((tmp8)){
			HX_STACK_LINE(474)
			::openfl::_legacy::display::Sprite tmp9 = this->cursorContainer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(474)
			::flixel::util::FlxPoint tmp10 = this->_globalScreenPosition;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(474)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(474)
			tmp9->set_x(tmp11);
			HX_STACK_LINE(475)
			::openfl::_legacy::display::Sprite tmp12 = this->cursorContainer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(475)
			::flixel::util::FlxPoint tmp13 = this->_globalScreenPosition;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(475)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(475)
			tmp12->set_y(tmp14);
		}
		HX_STACK_LINE(485)
		this->updateCursor();
		HX_STACK_LINE(488)
		::flixel::input::mouse::FlxMouseButton tmp9 = this->_leftButton;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		tmp9->update();
		HX_STACK_LINE(490)
		::flixel::input::mouse::FlxMouseButton tmp10 = this->_middleButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(490)
		tmp10->update();
		HX_STACK_LINE(491)
		::flixel::input::mouse::FlxMouseButton tmp11 = this->_rightButton;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(491)
		tmp11->update();
		HX_STACK_LINE(495)
		bool tmp12 = this->_wheelUsed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(495)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(495)
		if ((tmp13)){
			HX_STACK_LINE(497)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(499)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocus",0xede20cdd,"flixel.input.mouse.FlxMouse.onFocus","flixel/input/mouse/FlxMouse.hx",506,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		this->reset();
		HX_STACK_LINE(510)
		bool tmp = this->useSystemCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		this->set_useSystemCursor(tmp);
		HX_STACK_LINE(512)
		bool tmp1 = this->_visibleWhenFocusLost;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		this->set_visible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onFocusLost",0xc7f71561,"flixel.input.mouse.FlxMouse.onFocusLost","flixel/input/mouse/FlxMouse.hx",520,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(522)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		this->_visibleWhenFocusLost = tmp;
		HX_STACK_LINE(524)
		bool tmp1 = this->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(524)
		if ((tmp1)){
			HX_STACK_LINE(526)
			this->set_visible(false);
		}
		HX_STACK_LINE(529)
		::openfl::_legacy::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onGameStart",0x61da7695,"flixel.input.mouse.FlxMouse.onGameStart","flixel/input/mouse/FlxMouse.hx",535,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(538)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(538)
		this->set_visible(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::updateCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","updateCursor",0x5b45949b,"flixel.input.mouse.FlxMouse.updateCursor","flixel/input/mouse/FlxMouse.hx",546,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		this->getScreenPosition(null(),tmp);
		HX_STACK_LINE(548)
		::flixel::util::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(548)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		this->screenX = tmp3;
		HX_STACK_LINE(549)
		::flixel::util::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(549)
		this->screenY = tmp6;
		HX_STACK_LINE(551)
		this->getWorldPosition(null(),hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,updateCursor,(void))

Void FlxMouse_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseWheel",0xdc642911,"flixel.input.mouse.FlxMouse.onMouseWheel","flixel/input/mouse/FlxMouse.hx",560,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(569)
		this->_wheelUsed = true;
		HX_STACK_LINE(570)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::onMouseLeave( ::openfl::_legacy::events::Event E){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","onMouseLeave",0x84fd296d,"flixel.input.mouse.FlxMouse.onMouseLeave","flixel/input/mouse/FlxMouse.hx",581,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(582)
		::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(582)
		tmp->onUp(null());
		HX_STACK_LINE(583)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		tmp1->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressed",0x4652635d,"flixel.input.mouse.FlxMouse.get_pressed","flixel/input/mouse/FlxMouse.hx",587,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(587)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressed",0x70091811,"flixel.input.mouse.FlxMouse.get_justPressed","flixel/input/mouse/FlxMouse.hx",588,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	{
		HX_STACK_LINE(588)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(588)
		bool tmp2 = (_this->current == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(588)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(588)
		if ((tmp3)){
			HX_STACK_LINE(588)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(588)
			tmp = true;
		}
	}
	HX_STACK_LINE(588)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleased",0x9ec2046e,"flixel.input.mouse.FlxMouse.get_justReleased","flixel/input/mouse/FlxMouse.hx",589,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_leftButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(589)
		bool tmp2 = (_this->current == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(589)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(589)
		if ((tmp3)){
			HX_STACK_LINE(589)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(589)
			tmp = true;
		}
	}
	HX_STACK_LINE(589)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedRight",0x90e8c73f,"flixel.input.mouse.FlxMouse.get_pressedRight","flixel/input/mouse/FlxMouse.hx",592,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(592)
	::flixel::input::mouse::FlxMouseButton tmp = this->_rightButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(592)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(592)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedRight",0xa8a2860b,"flixel.input.mouse.FlxMouse.get_justPressedRight","flixel/input/mouse/FlxMouse.hx",593,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(593)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_rightButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(593)
		bool tmp2 = (_this->current == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(593)
		if ((tmp3)){
			HX_STACK_LINE(593)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(593)
			tmp = true;
		}
	}
	HX_STACK_LINE(593)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedRight",0x8742a88e,"flixel.input.mouse.FlxMouse.get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",594,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	{
		HX_STACK_LINE(594)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_rightButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(594)
		bool tmp2 = (_this->current == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		if ((tmp3)){
			HX_STACK_LINE(594)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(594)
			tmp = true;
		}
	}
	HX_STACK_LINE(594)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_pressedMiddle",0x38fe0e92,"flixel.input.mouse.FlxMouse.get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",596,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	::flixel::input::mouse::FlxMouseButton tmp = this->_middleButton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justPressedMiddle",0xe3cb4246,"flixel.input.mouse.FlxMouse.get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",597,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	{
		HX_STACK_LINE(597)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(597)
		bool tmp2 = (_this->current == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		if ((tmp3)){
			HX_STACK_LINE(597)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(597)
			tmp = true;
		}
	}
	HX_STACK_LINE(597)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","get_justReleasedMiddle",0xd1495263,"flixel.input.mouse.FlxMouse.get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",598,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	{
		HX_STACK_LINE(598)
		::flixel::input::mouse::FlxMouseButton tmp1 = this->_middleButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(598)
		::flixel::input::mouse::FlxMouseButton _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(598)
		bool tmp2 = (_this->current == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(598)
		if ((tmp3)){
			HX_STACK_LINE(598)
			tmp = (_this->current == (int)-2);
		}
		else{
			HX_STACK_LINE(598)
			tmp = true;
		}
	}
	HX_STACK_LINE(598)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","showSystemCursor",0xf4551c9e,"flixel.input.mouse.FlxMouse.showSystemCursor","flixel/input/mouse/FlxMouse.hx",605,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		::openfl::_legacy::ui::Mouse_obj::show();
		HX_STACK_LINE(610)
		::openfl::_legacy::display::Sprite tmp = this->cursorContainer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		tmp->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","hideSystemCursor",0xb5438fe3,"flixel.input.mouse.FlxMouse.hideSystemCursor","flixel/input/mouse/FlxMouse.hx",618,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(626)
		::openfl::_legacy::ui::Mouse_obj::hide();
		HX_STACK_LINE(628)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		if ((tmp)){
			HX_STACK_LINE(630)
			::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(630)
			tmp1->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_useSystemCursor",0x074e74d3,"flixel.input.mouse.FlxMouse.set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",636,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(637)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	if ((tmp)){
		HX_STACK_LINE(639)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(643)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(645)
	bool tmp1 = this->useSystemCursor = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(645)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","set_visible",0xb9fd1039,"flixel.input.mouse.FlxMouse.set_visible","flixel/input/mouse/FlxMouse.hx",649,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(650)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	if ((tmp)){
		HX_STACK_LINE(652)
		bool tmp1 = this->useSystemCursor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		if ((tmp1)){
			HX_STACK_LINE(654)
			::openfl::_legacy::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(658)
			::openfl::_legacy::display::Bitmap tmp2 = this->_cursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(658)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(658)
			if ((tmp3)){
				HX_STACK_LINE(660)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(663)
			::openfl::_legacy::display::Sprite tmp4 = this->cursorContainer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(663)
			tmp4->set_visible(true);
			HX_STACK_LINE(664)
			::openfl::_legacy::ui::Mouse_obj::hide();
		}
	}
	else{
		HX_STACK_LINE(677)
		::openfl::_legacy::display::Sprite tmp1 = this->cursorContainer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		tmp1->set_visible(false);
		HX_STACK_LINE(678)
		::openfl::_legacy::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(688)
	bool tmp1 = this->visible = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

::flixel::_system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouse","record",0xf2d1086d,"flixel.input.mouse.FlxMouse.record","flixel/input/mouse/FlxMouse.hx",694,0xe4e80b89)
	HX_STACK_THIS(this)
	HX_STACK_LINE(695)
	int tmp = this->_lastX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	::flixel::util::FlxPoint tmp1 = this->_globalScreenPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(695)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(695)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(695)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(695)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(695)
	if ((tmp4)){
		HX_STACK_LINE(695)
		int tmp6 = this->_lastY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(695)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(695)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(695)
		::flixel::util::FlxPoint tmp9 = this->_globalScreenPosition;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(695)
		::flixel::util::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(695)
		::flixel::util::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(695)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(695)
		tmp5 = (tmp8 == tmp12);
	}
	else{
		HX_STACK_LINE(695)
		tmp5 = false;
	}
	HX_STACK_LINE(695)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(695)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(695)
	if ((tmp6)){
		HX_STACK_LINE(696)
		::flixel::input::mouse::FlxMouseButton tmp8 = this->_leftButton;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(696)
		::flixel::input::mouse::FlxMouseButton tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(696)
		::flixel::input::mouse::FlxMouseButton tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(696)
		int tmp11 = tmp10->current;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(696)
		tmp7 = (tmp11 == (int)0);
	}
	else{
		HX_STACK_LINE(695)
		tmp7 = false;
	}
	HX_STACK_LINE(695)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(695)
	if ((tmp7)){
		HX_STACK_LINE(696)
		int tmp9 = this->_lastWheel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(696)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(696)
		int tmp11 = this->wheel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(696)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(696)
		tmp8 = (tmp10 == tmp12);
	}
	else{
		HX_STACK_LINE(695)
		tmp8 = false;
	}
	HX_STACK_LINE(695)
	if ((tmp8)){
		HX_STACK_LINE(698)
		return null();
	}
	HX_STACK_LINE(700)
	::flixel::util::FlxPoint tmp9 = this->_globalScreenPosition;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(700)
	Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(700)
	int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(700)
	this->_lastX = tmp11;
	HX_STACK_LINE(701)
	::flixel::util::FlxPoint tmp12 = this->_globalScreenPosition;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(701)
	Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(701)
	int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(701)
	this->_lastY = tmp14;
	HX_STACK_LINE(702)
	int tmp15 = this->wheel;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(702)
	this->_lastWheel = tmp15;
	HX_STACK_LINE(703)
	int tmp16 = this->_lastX;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(703)
	int tmp17 = this->_lastY;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(703)
	::flixel::input::mouse::FlxMouseButton tmp18 = this->_leftButton;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(703)
	int tmp19 = tmp18->current;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(703)
	int tmp20 = this->_lastWheel;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(703)
	::flixel::_system::replay::MouseRecord tmp21 = ::flixel::_system::replay::MouseRecord_obj::__new(tmp16,tmp17,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(703)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

Void FlxMouse_obj::playback( ::flixel::_system::replay::MouseRecord Record){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouse","playback",0xaadcd2f7,"flixel.input.mouse.FlxMouse.playback","flixel/input/mouse/FlxMouse.hx",707,0xe4e80b89)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(708)
		::flixel::input::mouse::FlxMouseButton tmp = this->_leftButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(708)
		tmp->current = Record->__Field(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"), hx::paccDynamic );
		HX_STACK_LINE(709)
		this->wheel = Record->__Field(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"), hx::paccDynamic );
		HX_STACK_LINE(710)
		{
			HX_STACK_LINE(710)
			::flixel::util::FlxPoint tmp1 = this->_globalScreenPosition;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(710)
			::flixel::util::FlxPoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(710)
			Float tmp2 = Record->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(710)
			_this->set_x(tmp2);
			HX_STACK_LINE(710)
			Float tmp3 = Record->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(710)
			_this->set_y(tmp3);
			HX_STACK_LINE(710)
			_this;
		}
		HX_STACK_LINE(711)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { if (inCallProp == hx::paccAlways) return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_pressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { if (inCallProp == hx::paccAlways) return get_justPressedRight(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { if (inCallProp == hx::paccAlways) return get_justReleasedRight(); }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { if (inCallProp == hx::paccAlways) return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setGlobalScreenPositionUnsafe") ) { return setGlobalScreenPositionUnsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::openfl::_legacy::display::Stage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp == hx::paccAlways) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxMouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"));
	outFields->push(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("pressedRight","\xda","\xdd","\x81","\x58"));
	outFields->push(HX_HCSTRING("justPressedRight","\x26","\x86","\x9a","\xc0"));
	outFields->push(HX_HCSTRING("justReleasedRight","\x13","\xc0","\x4a","\x68"));
	outFields->push(HX_HCSTRING("pressedMiddle","\x97","\xbf","\x58","\x17"));
	outFields->push(HX_HCSTRING("justPressedMiddle","\xcb","\x59","\xd3","\xc4"));
	outFields->push(HX_HCSTRING("justReleasedMiddle","\x3e","\xcf","\x55","\xd7"));
	outFields->push(HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"));
	outFields->push(HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"));
	outFields->push(HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"));
	outFields->push(HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"));
	outFields->push(HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"));
	outFields->push(HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"));
	outFields->push(HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"));
	outFields->push(HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"));
	outFields->push(HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d"));
	outFields->push(HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxMouse_obj,wheel),HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,screenX),HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,screenY),HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxMouse_obj,cursorContainer),HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,useSystemCursor),HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_leftButton),HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_middleButton),HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouseButton*/ ,(int)offsetof(FlxMouse_obj,_rightButton),HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxMouse_obj,_cursor),HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxMouse_obj,_cursorBitmapData),HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_wheelUsed),HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8")},
	{hx::fsBool,(int)offsetof(FlxMouse_obj,_visibleWhenFocusLost),HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastX),HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastY),HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b")},
	{hx::fsInt,(int)offsetof(FlxMouse_obj,_lastWheel),HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouse_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxMouse_obj,_globalScreenPosition),HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(int)offsetof(FlxMouse_obj,_stage),HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("wheel","\x9b","\x34","\xba","\xc9"),
	HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"),
	HX_HCSTRING("cursorContainer","\x8b","\x3b","\x1c","\x12"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("useSystemCursor","\x0c","\x3e","\xde","\xf9"),
	HX_HCSTRING("_leftButton","\x78","\xea","\x7a","\xdb"),
	HX_HCSTRING("_middleButton","\x06","\xea","\x42","\xd7"),
	HX_HCSTRING("_rightButton","\xef","\xdc","\x6e","\xa9"),
	HX_HCSTRING("_cursor","\x75","\xa0","\x5f","\xad"),
	HX_HCSTRING("_cursorBitmapData","\x8e","\x5e","\x40","\xcd"),
	HX_HCSTRING("_wheelUsed","\x39","\x58","\x29","\xd8"),
	HX_HCSTRING("_visibleWhenFocusLost","\xcf","\x95","\x3f","\x38"),
	HX_HCSTRING("_lastX","\x83","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastY","\x84","\x48","\xa3","\x6b"),
	HX_HCSTRING("_lastWheel","\x26","\xde","\x09","\x72"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d"),
	HX_HCSTRING("_stage","\xff","\xb1","\xf2","\x7f"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("getWorldPosition","\xa5","\x3e","\x0b","\xe6"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setGlobalScreenPositionUnsafe","\x80","\x95","\xb5","\x56"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onGameStart","\xf1","\x45","\x69","\xdb"),
	HX_HCSTRING("updateCursor","\xbf","\x35","\xac","\x3e"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMouseLeave","\x91","\xca","\x63","\x68"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_pressedRight","\x63","\xca","\x20","\x5d"),
	HX_HCSTRING("get_justPressedRight","\x2f","\xeb","\x04","\xdf"),
	HX_HCSTRING("get_justReleasedRight","\xea","\xc2","\xf8","\xe6"),
	HX_HCSTRING("get_pressedMiddle","\xee","\xca","\xc8","\x1d"),
	HX_HCSTRING("get_justPressedMiddle","\xa2","\x5c","\x81","\x43"),
	HX_HCSTRING("get_justReleasedMiddle","\x87","\x48","\xea","\x30"),
	HX_HCSTRING("showSystemCursor","\xc2","\x1f","\x8d","\xc0"),
	HX_HCSTRING("hideSystemCursor","\x07","\x93","\x7b","\x81"),
	HX_HCSTRING("set_useSystemCursor","\x2f","\x00","\x86","\xc1"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.mouse.FlxMouse","\x12","\x2b","\x6e","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxMouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMouse_obj >;
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
} // end namespace mouse
