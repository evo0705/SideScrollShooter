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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowLeft
#include <flixel/system/debug/GraphicArrowLeft.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
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
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void BitmapLog_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.BitmapLog","new",0xe9e2bd9f,"flixel.system.debug.BitmapLog.new","flixel/system/debug/BitmapLog.hx",26,0xd4331252)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(46)
	this->_middleMouseDown = false;
	HX_STACK_LINE(39)
	this->_matrix = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",38,0xd4331252)
			{
				HX_STACK_LINE(38)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(38)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(38)
				::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(38)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(38)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(38)
				point->_inPool = false;
				HX_STACK_LINE(38)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	this->_curMouseOffset = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",37,0xd4331252)
			{
				HX_STACK_LINE(37)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(37)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(37)
				::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(37)
				point->_inPool = false;
				HX_STACK_LINE(37)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->_lastMousePos = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::flixel::util::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",36,0xd4331252)
			{
				HX_STACK_LINE(36)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(36)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(36)
				::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(36)
				::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(36)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(36)
				point->_inPool = false;
				HX_STACK_LINE(36)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(36)
	this->_point = _Function_1_3::Block();
	HX_STACK_LINE(33)
	this->_curIndex = (int)0;
	HX_STACK_LINE(32)
	this->_entries = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(28)
	this->zoom = ((Float)1);
	HX_STACK_LINE(52)
	::flixel::_system::debug::GraphicBitmapLog tmp = ::flixel::_system::debug::GraphicBitmapLog_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	super::__construct(HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"),tmp,null(),null(),null(),null(),null());
	HX_STACK_LINE(54)
	::openfl::_legacy::geom::Point tmp1 = this->minSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	tmp1->x = (int)165;
	HX_STACK_LINE(55)
	int tmp2 = (int)30;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	::openfl::_legacy::geom::Point tmp4 = this->minSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	tmp4->y = tmp3;
	HX_STACK_LINE(57)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	Float tmp8 = (tmp7 - (int)15);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	::openfl::_legacy::display::BitmapData tmp10 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp6,tmp9,true,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	::openfl::_legacy::display::Bitmap tmp11 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	this->_canvasBitmap = tmp11;
	HX_STACK_LINE(58)
	::openfl::_legacy::display::Bitmap tmp12 = this->_canvasBitmap;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(58)
	tmp12->set_x((int)0);
	HX_STACK_LINE(59)
	::openfl::_legacy::display::Bitmap tmp13 = this->_canvasBitmap;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(59)
	tmp13->set_y((int)15);
	HX_STACK_LINE(60)
	::openfl::_legacy::display::Bitmap tmp14 = this->_canvasBitmap;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(60)
	this->addChild(tmp14);
	HX_STACK_LINE(62)
	this->createHeaderUI();
	HX_STACK_LINE(63)
	this->createFooterUI();
	HX_STACK_LINE(65)
	this->setVisible(false);
	HX_STACK_LINE(67)
	::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	Dynamic tmp16 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	this->addEventListener(tmp15,tmp16,null(),null(),null());
	HX_STACK_LINE(69)
	::String tmp17 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(69)
	Dynamic tmp18 = this->onMiddleDown_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(69)
	this->addEventListener(tmp17,tmp18,null(),null(),null());
	HX_STACK_LINE(70)
	::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(70)
	Dynamic tmp20 = this->onMiddleUp_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(70)
	this->addEventListener(tmp19,tmp20,null(),null(),null());
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::flixel::_system::frontEnds::SignalFrontEnd tmp21 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(73)
		Dynamic tmp22 = this->clear_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(73)
		tmp21->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp22);
	}
	HX_STACK_LINE(76)
	::openfl::_legacy::display::Bitmap tmp21 = this->_handle;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(76)
	this->removeChild(tmp21);
	HX_STACK_LINE(77)
	::openfl::_legacy::display::Bitmap tmp22 = this->_handle;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(77)
	this->addChild(tmp22);
	HX_STACK_LINE(79)
	::openfl::_legacy::display::Bitmap tmp23 = this->_shadow;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(79)
	this->removeChild(tmp23);
}
;
	return null();
}

//BitmapLog_obj::~BitmapLog_obj() { }

Dynamic BitmapLog_obj::__CreateEmpty() { return  new BitmapLog_obj; }
hx::ObjectPtr< BitmapLog_obj > BitmapLog_obj::__new()
{  hx::ObjectPtr< BitmapLog_obj > _result_ = new BitmapLog_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapLog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLog_obj > _result_ = new BitmapLog_obj();
	_result_->__construct();
	return _result_;}

Void BitmapLog_obj::createHeaderUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","createHeaderUI",0x82443d5e,"flixel.system.debug.BitmapLog.createHeaderUI","flixel/system/debug/BitmapLog.hx",83,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::flixel::_system::debug::BitmapLog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		this->_ui = tmp;
		HX_STACK_LINE(85)
		::openfl::_legacy::display::Sprite tmp1 = this->_ui;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		tmp1->set_y((int)2);
		HX_STACK_LINE(87)
		::flixel::_system::debug::GraphicArrowLeft tmp2 = ::flixel::_system::debug::GraphicArrowLeft_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		Dynamic tmp3 = this->previous_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::flixel::_system::ui::FlxSystemButton tmp4 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		this->_buttonLeft = tmp4;
		HX_STACK_LINE(89)
		::openfl::_legacy::text::TextField tmp5 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		this->_dimensionsText = tmp5;
		HX_STACK_LINE(91)
		::openfl::_legacy::text::TextField tmp6 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,(int)-3,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		this->_counterText = tmp6;
		HX_STACK_LINE(92)
		::openfl::_legacy::text::TextField tmp7 = this->_counterText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		tmp7->set_text(HX_HCSTRING("0/0","\x51","\x95","\x24","\x00"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::flixel::_system::debug::BitmapLog,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/BitmapLog.hx",95,0xd4331252)
			{
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					_g->__Field(HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"), hx::paccDynamic )((int)1);
					HX_STACK_LINE(96)
					_g->__Field(HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(null(),null());
				}
				HX_STACK_LINE(97)
				_g->__Field(HX_HCSTRING("refreshCanvas","\x13","\xf9","\x7c","\xb6"), hx::paccDynamic )(null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(95)
		::flixel::_system::ui::FlxSystemButton tmp8 = ::flixel::_system::ui::FlxSystemButton_obj::__new(null(), Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		this->_buttonText = tmp8;
		HX_STACK_LINE(99)
		::flixel::_system::ui::FlxSystemButton tmp9 = this->_buttonText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		::openfl::_legacy::text::TextField tmp10 = this->_counterText;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		tmp9->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(101)
		::flixel::_system::debug::GraphicArrowRight tmp11 = ::flixel::_system::debug::GraphicArrowRight_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		Dynamic tmp12 = this->next_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		::flixel::_system::ui::FlxSystemButton tmp13 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		this->_buttonRight = tmp13;
		HX_STACK_LINE(102)
		::flixel::_system::ui::FlxSystemButton tmp14 = this->_buttonRight;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		tmp14->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)60);
		HX_STACK_LINE(104)
		::openfl::_legacy::display::Sprite tmp15 = this->_ui;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		::flixel::_system::ui::FlxSystemButton tmp16 = this->_buttonLeft;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		tmp15->addChild(tmp16);
		HX_STACK_LINE(105)
		::openfl::_legacy::display::Sprite tmp17 = this->_ui;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(105)
		::flixel::_system::ui::FlxSystemButton tmp18 = this->_buttonText;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(105)
		tmp17->addChild(tmp18);
		HX_STACK_LINE(106)
		::openfl::_legacy::display::Sprite tmp19 = this->_ui;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(106)
		::flixel::_system::ui::FlxSystemButton tmp20 = this->_buttonRight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(106)
		tmp19->addChild(tmp20);
		HX_STACK_LINE(108)
		::openfl::_legacy::display::Sprite tmp21 = this->_ui;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(108)
		this->addChild(tmp21);
		HX_STACK_LINE(109)
		::openfl::_legacy::text::TextField tmp22 = this->_dimensionsText;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(109)
		this->addChild(tmp22);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createHeaderUI,(void))

Void BitmapLog_obj::createFooterUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","createFooterUI",0x7f1e51ec,"flixel.system.debug.BitmapLog.createFooterUI","flixel/system/debug/BitmapLog.hx",113,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::openfl::_legacy::display::Bitmap tmp1 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		this->_footer = tmp1;
		HX_STACK_LINE(115)
		::openfl::_legacy::display::Bitmap tmp2 = this->_footer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		tmp2->set_alpha(((Float)0.8));
		HX_STACK_LINE(116)
		::openfl::_legacy::display::Bitmap tmp3 = this->_footer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		this->addChild(tmp3);
		HX_STACK_LINE(118)
		::openfl::_legacy::text::TextField tmp4 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		this->_footerText = tmp4;
		HX_STACK_LINE(119)
		::openfl::_legacy::text::TextField tmp5 = this->_footerText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		this->addChild(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createFooterUI,(void))

Void BitmapLog_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","destroy",0x2ace25b9,"flixel.system.debug.BitmapLog.destroy","flixel/system/debug/BitmapLog.hx",126,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->super::destroy();
		HX_STACK_LINE(129)
		this->clear();
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		this->removeChild(tmp);
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Bitmap tmp1 = this->_canvasBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Bitmap tmp3 = this->_canvasBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		tmp3->set_bitmapData(null());
		HX_STACK_LINE(134)
		this->_canvasBitmap = null();
		HX_STACK_LINE(135)
		this->_entries = null();
		HX_STACK_LINE(137)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		Dynamic tmp5 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		this->removeEventListener(tmp4,tmp5,null());
		HX_STACK_LINE(139)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Dynamic tmp7 = this->onMiddleDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		this->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(140)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		Dynamic tmp9 = this->onMiddleUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		this->removeEventListener(tmp8,tmp9,null());
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			Dynamic tmp11 = this->clear_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			tmp10->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
		}
	}
return null();
}


Void BitmapLog_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","update",0x5b6d2a2a,"flixel.system.debug.BitmapLog.update","flixel/system/debug/BitmapLog.hx",147,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		bool tmp = this->_middleMouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(150)
			::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				Float tmp2 = this->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(150)
				Float X = tmp2;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(150)
				Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(150)
				Float Y = tmp3;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(150)
				::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(150)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(150)
				point->_inPool = false;
				HX_STACK_LINE(150)
				tmp1 = point;
			}
			HX_STACK_LINE(150)
			::flixel::util::FlxPoint delta = tmp1;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(151)
			::flixel::util::FlxPoint tmp2 = this->_curMouseOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::flixel::util::FlxPoint tmp3 = this->_lastMousePos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			::flixel::util::FlxPoint tmp4 = delta->subtractPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			tmp2->addPoint(tmp4);
			HX_STACK_LINE(152)
			this->refreshCanvas(null());
			HX_STACK_LINE(153)
			::flixel::util::FlxPoint tmp5 = this->_lastMousePos;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			Float tmp6 = this->get_mouseX();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			Float tmp7 = this->get_mouseY();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


Void BitmapLog_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","updateSize",0x504b540b,"flixel.system.debug.BitmapLog.updateSize","flixel/system/debug/BitmapLog.hx",158,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->super::updateSize();
		HX_STACK_LINE(161)
		::openfl::_legacy::display::Bitmap tmp = this->_background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int tmp1 = this->_height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::openfl::_legacy::display::Bitmap tmp2 = this->_header;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		Float tmp4 = (tmp3 * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		tmp->set_scaleY(tmp5);
	}
return null();
}


Void BitmapLog_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resize",0xdce2fe15,"flixel.system.debug.BitmapLog.resize","flixel/system/debug/BitmapLog.hx",165,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(166)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(168)
		::openfl::_legacy::display::Bitmap tmp2 = this->_canvasBitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::Bitmap tmp3 = this->_canvasBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp4 = tmp3->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		tmp2->set_bitmapData(tmp5);
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp6 = this->_canvasBitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp8 = this->_canvasBitmap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		Float tmp9 = tmp8->get_x();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(169)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(169)
		int tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp13 = this->_canvasBitmap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(169)
		Float tmp14 = tmp13->get_y();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(169)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp16 = this->_footer;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(169)
		Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(169)
		Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(169)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp20 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp19,true,(int)0,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(169)
		tmp6->set_bitmapData(tmp20);
		HX_STACK_LINE(170)
		int tmp21 = this->_curIndex;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(170)
		this->refreshCanvas(tmp21);
		HX_STACK_LINE(172)
		::openfl::_legacy::display::Sprite tmp22 = this->_ui;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(172)
		::openfl::_legacy::display::Bitmap tmp23 = this->_header;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(172)
		Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(172)
		::openfl::_legacy::display::Sprite tmp25 = this->_ui;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(172)
		Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(172)
		Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(172)
		Float tmp28 = (tmp27 + (int)43);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(172)
		tmp22->set_x(tmp28);
		HX_STACK_LINE(174)
		::openfl::_legacy::display::Bitmap tmp29 = this->_footer;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(174)
		int tmp30 = this->_width;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(174)
		tmp29->set_width(tmp30);
		HX_STACK_LINE(175)
		::openfl::_legacy::display::Bitmap tmp31 = this->_footer;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(175)
		int tmp32 = this->_height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(175)
		::openfl::_legacy::display::Bitmap tmp33 = this->_footer;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(175)
		Float tmp34 = tmp33->get_height();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(175)
		Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(175)
		tmp31->set_y(tmp35);
		HX_STACK_LINE(177)
		this->resizeTexts();
	}
return null();
}


Void BitmapLog_obj::resizeTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resizeTexts",0xdbc990d1,"flixel.system.debug.BitmapLog.resizeTexts","flixel/system/debug/BitmapLog.hx",181,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::openfl::_legacy::text::TextField tmp = this->_dimensionsText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::openfl::_legacy::display::Bitmap tmp1 = this->_header;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		Float tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::openfl::_legacy::text::TextField tmp4 = this->_dimensionsText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		Float tmp5 = tmp4->get_textWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(182)
		tmp->set_x(tmp7);
		HX_STACK_LINE(183)
		::openfl::_legacy::text::TextField tmp8 = this->_dimensionsText;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		int tmp9 = this->_width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		bool tmp10 = (tmp9 > (int)200);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		tmp8->set_visible(tmp10);
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextField tmp11 = this->_footerText;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(185)
		int tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(185)
		::openfl::_legacy::display::Bitmap tmp13 = this->_footer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(185)
		Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(185)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(185)
		tmp11->set_y(tmp15);
		HX_STACK_LINE(186)
		::openfl::_legacy::text::TextField tmp16 = this->_footerText;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(186)
		int tmp17 = this->_width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(186)
		Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(186)
		::openfl::_legacy::text::TextField tmp19 = this->_footerText;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(186)
		Float tmp20 = tmp19->get_textWidth();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(186)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(186)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(186)
		tmp16->set_x(tmp22);
		HX_STACK_LINE(187)
		::openfl::_legacy::text::TextField tmp23 = this->_footerText;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(187)
		::openfl::_legacy::display::Bitmap tmp24 = this->_footer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(187)
		Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(187)
		tmp23->set_width(tmp25);
		HX_STACK_LINE(188)
		::openfl::_legacy::text::TextField tmp26 = this->_footerText;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(188)
		Float tmp27 = tmp26->get_x();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(188)
		bool tmp28 = (tmp27 < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(188)
		if ((tmp28)){
			HX_STACK_LINE(190)
			::openfl::_legacy::text::TextField tmp29 = this->_footerText;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(190)
			tmp29->set_x((int)0);
		}
		HX_STACK_LINE(193)
		::flixel::_system::ui::FlxSystemButton tmp29 = this->_buttonLeft;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(193)
		Float tmp30 = tmp29->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(193)
		::flixel::_system::ui::FlxSystemButton tmp31 = this->_buttonLeft;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(193)
		Float tmp32 = tmp31->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(193)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(193)
		Float start = tmp33;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(194)
		::flixel::_system::ui::FlxSystemButton tmp34 = this->_buttonRight;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(194)
		Float tmp35 = tmp34->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(194)
		Float tmp36 = start;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(194)
		Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(194)
		Float range = tmp37;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(195)
		::flixel::_system::ui::FlxSystemButton tmp38 = this->_buttonText;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(195)
		::openfl::_legacy::text::TextField tmp39 = this->_counterText;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(195)
		Float tmp40 = tmp39->get_textWidth();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(195)
		Float tmp41 = (Float(tmp40) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(195)
		Float tmp42 = ((int)33 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(195)
		tmp38->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp42);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resizeTexts,(void))

Void BitmapLog_obj::next( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","next",0xbc832ed4,"flixel.system.debug.BitmapLog.next","flixel/system/debug/BitmapLog.hx",202,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			this->set_zoom((int)1);
			HX_STACK_LINE(203)
			::flixel::util::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(203)
			tmp->set(null(),null());
		}
		HX_STACK_LINE(204)
		int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		this->refreshCanvas(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,next,(void))

Void BitmapLog_obj::previous( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","previous",0x9c626a98,"flixel.system.debug.BitmapLog.previous","flixel/system/debug/BitmapLog.hx",211,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			this->set_zoom((int)1);
			HX_STACK_LINE(212)
			::flixel::util::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(212)
			tmp->set(null(),null());
		}
		HX_STACK_LINE(213)
		int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		this->refreshCanvas(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,previous,(void))

Void BitmapLog_obj::resetSettings( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","resetSettings",0x02f1fbd1,"flixel.system.debug.BitmapLog.resetSettings","flixel/system/debug/BitmapLog.hx",217,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		this->set_zoom((int)1);
		HX_STACK_LINE(219)
		::flixel::util::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		tmp->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resetSettings,(void))

bool BitmapLog_obj::add( ::openfl::_legacy::display::BitmapData bmp,::String __o_name){
::String name = __o_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","add",0xe9d8df60,"flixel.system.debug.BitmapLog.add","flixel/system/debug/BitmapLog.hx",226,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmp,"bmp")
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(227)
		bool tmp = (bmp == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(229)
			return false;
		}
		HX_STACK_LINE(231)
		this->setVisible(true);
		HX_STACK_LINE(232)
		::openfl::_legacy::display::BitmapData tmp1 = bmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp2,::openfl::_legacy::display::BitmapData &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/BitmapLog.hx",232,0xd4331252)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1") , tmp1,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		Dynamic tmp3 = _Function_1_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		this->_entries->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(233)
		bool tmp4 = this->refreshCanvas(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLog_obj,add,return )

Void BitmapLog_obj::clearAt( hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","clearAt",0xb18ce09f,"flixel.system.debug.BitmapLog.clearAt","flixel/system/debug/BitmapLog.hx",241,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
{
		HX_STACK_LINE(242)
		bool tmp = (Index == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(244)
			int tmp1 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			Index = tmp2;
		}
		HX_STACK_LINE(246)
		Dynamic tmp1 = this->_entries->__GetItem(Index);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);
		HX_STACK_LINE(247)
		hx::IndexRef((this->_entries).mPtr,Index) = null();
		HX_STACK_LINE(248)
		int tmp3 = Index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		this->_entries->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp3,(int)1);
		HX_STACK_LINE(250)
		int tmp4 = this->_curIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		int tmp5 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		if ((tmp7)){
			HX_STACK_LINE(252)
			int tmp8 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			this->_curIndex = tmp9;
		}
		HX_STACK_LINE(255)
		int tmp8 = this->_curIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(255)
		this->refreshCanvas(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,clearAt,(void))

Void BitmapLog_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","clear",0xe56f6c8c,"flixel.system.debug.BitmapLog.clear","flixel/system/debug/BitmapLog.hx",259,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(260)
			int tmp = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(260)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(260)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(260)
				if ((tmp2)){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(260)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(260)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(262)
				Dynamic tmp4 = this->_entries->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(262)
				::openfl::_legacy::display::BitmapData tmp5 = tmp4->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(262)
				::flixel::util::FlxDestroyUtil_obj::dispose(tmp5);
				HX_STACK_LINE(263)
				hx::IndexRef((this->_entries).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(265)
		this->_entries = cpp::ArrayBase_obj::__new();
		HX_STACK_LINE(266)
		::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		::openfl::_legacy::display::Bitmap tmp1 = this->_canvasBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		::openfl::_legacy::geom::Rectangle tmp2 = tmp1->bitmapData->get_rect();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		tmp->bitmapData->fillRect(tmp2,(int)0);
		HX_STACK_LINE(267)
		::openfl::_legacy::text::TextField tmp3 = this->_dimensionsText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		tmp3->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(268)
		::openfl::_legacy::text::TextField tmp4 = this->_counterText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		tmp4->set_text(HX_HCSTRING("0/0","\x51","\x95","\x24","\x00"));
		HX_STACK_LINE(269)
		::openfl::_legacy::text::TextField tmp5 = this->_footerText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(269)
		tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,clear,(void))

bool BitmapLog_obj::refreshCanvas( Dynamic Index){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","refreshCanvas",0xfd928b12,"flixel.system.debug.BitmapLog.refreshCanvas","flixel/system/debug/BitmapLog.hx",273,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(274)
	bool tmp = (this->_entries == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	if ((tmp1)){
		HX_STACK_LINE(274)
		int tmp3 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		tmp2 = (tmp4 <= (int)0);
	}
	else{
		HX_STACK_LINE(274)
		tmp2 = true;
	}
	HX_STACK_LINE(274)
	if ((tmp2)){
		HX_STACK_LINE(276)
		this->_curIndex = (int)0;
		HX_STACK_LINE(277)
		return false;
	}
	HX_STACK_LINE(280)
	bool tmp3 = (Index == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	if ((tmp3)){
		HX_STACK_LINE(282)
		int tmp4 = this->_curIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		Index = tmp4;
	}
	HX_STACK_LINE(285)
	::openfl::_legacy::display::Bitmap tmp4 = this->_canvasBitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(285)
	::openfl::_legacy::display::Bitmap tmp5 = this->_canvasBitmap;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(285)
	::openfl::_legacy::geom::Rectangle tmp6 = tmp5->bitmapData->get_rect();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(285)
	tmp4->bitmapData->fillRect(tmp6,(int)0);
	HX_STACK_LINE(287)
	bool tmp7 = (Index < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(287)
	if ((tmp7)){
		HX_STACK_LINE(289)
		int tmp8 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(289)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(289)
		Index = tmp9;
	}
	else{
		HX_STACK_LINE(291)
		Dynamic tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(291)
		int tmp9 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(291)
		if ((tmp10)){
			HX_STACK_LINE(293)
			Index = (int)0;
		}
	}
	HX_STACK_LINE(296)
	this->_curIndex = Index;
	HX_STACK_LINE(299)
	::flixel::util::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(299)
	::openfl::_legacy::display::Bitmap tmp9 = this->_canvasBitmap;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(299)
	int tmp10 = tmp9->bitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(299)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(299)
	int tmp12 = this->_curIndex;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(299)
	Dynamic tmp13 = this->_entries->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(299)
	int tmp14 = tmp13->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(299)
	Float tmp15 = this->zoom;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(299)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(299)
	Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(299)
	Float tmp18 = (tmp11 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(299)
	tmp8->set_x(tmp18);
	HX_STACK_LINE(300)
	::flixel::util::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(300)
	::openfl::_legacy::display::Bitmap tmp20 = this->_canvasBitmap;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(300)
	int tmp21 = tmp20->bitmapData->get_height();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(300)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(300)
	int tmp23 = this->_curIndex;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(300)
	Dynamic tmp24 = this->_entries->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(300)
	int tmp25 = tmp24->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(300)
	Float tmp26 = this->zoom;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(300)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(300)
	Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(300)
	Float tmp29 = (tmp22 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(300)
	tmp19->set_y(tmp29);
	HX_STACK_LINE(302)
	::flixel::util::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(302)
	::flixel::util::FlxPoint tmp31 = this->_curMouseOffset;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(302)
	tmp30->addPoint(tmp31);
	HX_STACK_LINE(304)
	::openfl::_legacy::geom::Matrix tmp32 = this->_matrix;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(304)
	tmp32->identity();
	HX_STACK_LINE(305)
	::openfl::_legacy::geom::Matrix tmp33 = this->_matrix;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(305)
	Float tmp34 = this->zoom;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(305)
	Float tmp35 = this->zoom;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(305)
	tmp33->scale(tmp34,tmp35);
	HX_STACK_LINE(306)
	::openfl::_legacy::geom::Matrix tmp36 = this->_matrix;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(306)
	::flixel::util::FlxPoint tmp37 = this->_point;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(306)
	Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(306)
	::flixel::util::FlxPoint tmp39 = this->_point;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(306)
	Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(306)
	tmp36->translate(tmp38,tmp40);
	HX_STACK_LINE(308)
	::openfl::_legacy::display::Bitmap tmp41 = this->_canvasBitmap;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(308)
	int tmp42 = this->_curIndex;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(308)
	Dynamic tmp43 = this->_entries->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(308)
	::openfl::_legacy::display::BitmapData tmp44 = tmp43->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(308)
	::openfl::_legacy::geom::Matrix tmp45 = this->_matrix;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(308)
	::openfl::_legacy::display::Bitmap tmp46 = this->_canvasBitmap;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(308)
	::openfl::_legacy::geom::Rectangle tmp47 = tmp46->bitmapData->get_rect();		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(308)
	tmp41->bitmapData->draw(tmp44,tmp45,null(),null(),tmp47,false);
	HX_STACK_LINE(310)
	int tmp48 = this->_curIndex;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(310)
	Dynamic tmp49 = this->_entries->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(310)
	::openfl::_legacy::display::BitmapData tmp50 = tmp49->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(310)
	this->drawBoundingBox(tmp50);
	HX_STACK_LINE(311)
	::openfl::_legacy::display::Bitmap tmp51 = this->_canvasBitmap;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(311)
	::openfl::_legacy::display::Sprite tmp52 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(311)
	::openfl::_legacy::geom::Matrix tmp53 = this->_matrix;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(311)
	::openfl::_legacy::display::Bitmap tmp54 = this->_canvasBitmap;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(311)
	::openfl::_legacy::geom::Rectangle tmp55 = tmp54->bitmapData->get_rect();		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(311)
	tmp51->bitmapData->draw(tmp52,tmp53,null(),null(),tmp55,false);
	HX_STACK_LINE(313)
	this->refreshTexts();
	HX_STACK_LINE(315)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,refreshCanvas,return )

Void BitmapLog_obj::refreshTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","refreshTexts",0xd91a3a2c,"flixel.system.debug.BitmapLog.refreshTexts","flixel/system/debug/BitmapLog.hx",319,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		::openfl::_legacy::text::TextField tmp = this->_dimensionsText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		int tmp1 = this->_curIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		Dynamic tmp2 = this->_entries->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		int tmp3 = tmp2->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		::String tmp4 = (tmp3 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		int tmp5 = this->_curIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		Dynamic tmp6 = this->_entries->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(320)
		int tmp7 = tmp6->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(320)
		::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(320)
		tmp->set_text(tmp8);
		HX_STACK_LINE(321)
		::openfl::_legacy::text::TextField tmp9 = this->_counterText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(321)
		int tmp10 = this->_curIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(321)
		int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(321)
		::String tmp12 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(321)
		::String tmp13 = (tmp12 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(321)
		int tmp14 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(321)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(321)
		tmp9->set_text(tmp15);
		HX_STACK_LINE(323)
		int tmp16 = this->_curIndex;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(323)
		Dynamic tmp17 = this->_entries->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(323)
		::String entryName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(entryName,"entryName");
		HX_STACK_LINE(324)
		bool tmp18 = (entryName == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(324)
		::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(324)
		if ((tmp18)){
			HX_STACK_LINE(324)
			tmp19 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(324)
			::String tmp20 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + entryName);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(324)
			tmp19 = (tmp20 + HX_HCSTRING("\" | ","\x62","\xf5","\x91","\x16"));
		}
		HX_STACK_LINE(324)
		::String name = tmp19;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(325)
		::openfl::_legacy::text::TextField tmp20 = this->_footerText;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(325)
		::String tmp21 = name;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(325)
		Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int tmp23 = this->_curIndex;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(325)
			Dynamic tmp24 = this->_entries->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(325)
			::openfl::_legacy::display::BitmapData bitmapData = tmp24->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(325)
			int tmp25 = bitmapData->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(325)
			int tmp26 = bitmapData->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(325)
			int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(325)
			tmp22 = (tmp27 * (int)4);
		}
		HX_STACK_LINE(325)
		::String tmp23 = ::flixel::util::FlxStringUtil_obj::formatBytes(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(325)
		::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(325)
		tmp20->set_text(tmp24);
		HX_STACK_LINE(327)
		this->resizeTexts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,refreshTexts,(void))

Void BitmapLog_obj::drawBoundingBox( ::openfl::_legacy::display::BitmapData bitmap){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","drawBoundingBox",0xb05c8722,"flixel.system.debug.BitmapLog.drawBoundingBox","flixel/system/debug/BitmapLog.hx",331,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(332)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(333)
		gfx->clear();
		HX_STACK_LINE(334)
		gfx->lineStyle((int)1,(int)-65536,((Float)0.75),false,::openfl::_legacy::display::LineScaleMode_obj::NONE,null(),null(),null());
		HX_STACK_LINE(335)
		int tmp1 = bitmap->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		int tmp2 = bitmap->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		gfx->drawRect((int)0,(int)0,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,drawBoundingBox,(void))

Void BitmapLog_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMouseWheel",0x77c9bd16,"flixel.system.debug.BitmapLog.onMouseWheel","flixel/system/debug/BitmapLog.hx",339,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			::flixel::_system::debug::BitmapLog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(340)
			Float tmp = _g->__Field(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(340)
			bool tmp1 = (e->delta < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(340)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			if ((tmp1)){
				HX_STACK_LINE(340)
				tmp2 = (int)-1;
			}
			else{
				HX_STACK_LINE(340)
				tmp2 = (int)1;
			}
			HX_STACK_LINE(340)
			Float tmp3 = (tmp2 * ((Float)0.25));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			Float tmp4 = this->zoom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(340)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(340)
			Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(340)
			_g->__Field(HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(341)
		this->refreshCanvas(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMouseWheel,(void))

Void BitmapLog_obj::onMiddleDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMiddleDown",0x0e5d5b37,"flixel.system.debug.BitmapLog.onMiddleDown","flixel/system/debug/BitmapLog.hx",345,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(346)
		this->_middleMouseDown = true;
		HX_STACK_LINE(347)
		::flixel::util::FlxPoint tmp = this->_lastMousePos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		Float tmp1 = this->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		Float tmp2 = this->get_mouseY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleDown,(void))

Void BitmapLog_obj::onMiddleUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.BitmapLog","onMiddleUp",0x6933f9f0,"flixel.system.debug.BitmapLog.onMiddleUp","flixel/system/debug/BitmapLog.hx",352,0xd4331252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(352)
		this->_middleMouseDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleUp,(void))

Float BitmapLog_obj::set_zoom( Float Value){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","set_zoom",0xf7c26671,"flixel.system.debug.BitmapLog.set_zoom","flixel/system/debug/BitmapLog.hx",356,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(357)
	bool tmp = (Value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	if ((tmp)){
		HX_STACK_LINE(359)
		Value = (int)0;
	}
	HX_STACK_LINE(361)
	Float tmp1 = this->zoom = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,set_zoom,return )

::openfl::_legacy::display::BitmapData BitmapLog_obj::get__canvas( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__canvas",0x3be08acd,"flixel.system.debug.BitmapLog.get__canvas","flixel/system/debug/BitmapLog.hx",365,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(366)
	::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(366)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(366)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__canvas,return )

Dynamic BitmapLog_obj::get__curEntry( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__curEntry",0x0843d007,"flixel.system.debug.BitmapLog.get__curEntry","flixel/system/debug/BitmapLog.hx",370,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Dynamic tmp1 = this->_entries->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curEntry,return )

::openfl::_legacy::display::BitmapData BitmapLog_obj::get__curBitmap( ){
	HX_STACK_FRAME("flixel.system.debug.BitmapLog","get__curBitmap",0x1efb5aba,"flixel.system.debug.BitmapLog.get__curBitmap","flixel/system/debug/BitmapLog.hx",375,0xd4331252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	Dynamic tmp1 = this->_entries->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	::openfl::_legacy::display::BitmapData tmp2 = tmp1->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(376)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curBitmap,return )


BitmapLog_obj::BitmapLog_obj()
{
}

void BitmapLog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapLog);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_MARK_MEMBER_NAME(_entries,"_entries");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_MARK_MEMBER_NAME(_buttonText,"_buttonText");
	HX_MARK_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_MARK_MEMBER_NAME(_counterText,"_counterText");
	HX_MARK_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_MARK_MEMBER_NAME(_footer,"_footer");
	HX_MARK_MEMBER_NAME(_footerText,"_footerText");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapLog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_VISIT_MEMBER_NAME(_entries,"_entries");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_VISIT_MEMBER_NAME(_buttonText,"_buttonText");
	HX_VISIT_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_VISIT_MEMBER_NAME(_counterText,"_counterText");
	HX_VISIT_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_VISIT_MEMBER_NAME(_footer,"_footer");
	HX_VISIT_MEMBER_NAME(_footerText,"_footerText");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapLog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return _ui; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { if (inCallProp == hx::paccAlways) return get__canvas(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_footer") ) { return _footer; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAt") ) { return clearAt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { return _entries; }
		if (HX_FIELD_EQ(inName,"previous") ) { return previous_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curEntry") ) { if (inCallProp == hx::paccAlways) return get__curEntry(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curBitmap") ) { if (inCallProp == hx::paccAlways) return get__curBitmap(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleUp") ) { return onMiddleUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { return _buttonLeft; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { return _buttonText; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { return _footerText; }
		if (HX_FIELD_EQ(inName,"resizeTexts") ) { return resizeTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"get__canvas") ) { return get__canvas_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { return _buttonRight; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { return _counterText; }
		if (HX_FIELD_EQ(inName,"refreshTexts") ) { return refreshTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleDown") ) { return onMiddleDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { return _canvasBitmap; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return _lastMousePos; }
		if (HX_FIELD_EQ(inName,"resetSettings") ) { return resetSettings_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshCanvas") ) { return refreshCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curEntry") ) { return get__curEntry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createHeaderUI") ) { return createHeaderUI_dyn(); }
		if (HX_FIELD_EQ(inName,"createFooterUI") ) { return createFooterUI_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curBitmap") ) { return get__curBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { return _curMouseOffset; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { return _dimensionsText; }
		if (HX_FIELD_EQ(inName,"drawBoundingBox") ) { return drawBoundingBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { return _middleMouseDown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapLog_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footer") ) { _footer=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { _entries=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { _buttonLeft=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { _buttonText=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { _footerText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { _buttonRight=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { _counterText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { _canvasBitmap=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { _curMouseOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { _dimensionsText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { _middleMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapLog_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("_canvas","\x77","\x66","\xb9","\x26"));
	outFields->push(HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e"));
	outFields->push(HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3"));
	outFields->push(HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d"));
	outFields->push(HX_HCSTRING("_curEntry","\x31","\x6a","\xca","\xff"));
	outFields->push(HX_HCSTRING("_curBitmap","\x50","\xa5","\x3b","\xbd"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8"));
	outFields->push(HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84"));
	outFields->push(HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89"));
	outFields->push(HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d"));
	outFields->push(HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad"));
	outFields->push(HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11"));
	outFields->push(HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"));
	outFields->push(HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec"));
	outFields->push(HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BitmapLog_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_canvasBitmap),HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(BitmapLog_obj,_entries),HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3")},
	{hx::fsInt,(int)offsetof(BitmapLog_obj,_curIndex),HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_lastMousePos),HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_curMouseOffset),HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(BitmapLog_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonLeft),HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonText),HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonRight),HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_counterText),HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_dimensionsText),HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(BitmapLog_obj,_ui),HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00")},
	{hx::fsBool,(int)offsetof(BitmapLog_obj,_middleMouseDown),HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_footer),HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_footerText),HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e"),
	HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3"),
	HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8"),
	HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84"),
	HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89"),
	HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d"),
	HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad"),
	HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11"),
	HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"),
	HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec"),
	HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a"),
	HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9"),
	HX_HCSTRING("createHeaderUI","\x3d","\x10","\x7a","\x96"),
	HX_HCSTRING("createFooterUI","\xcb","\x24","\x54","\x93"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeTexts","\x92","\xcc","\x9c","\x4c"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"),
	HX_HCSTRING("resetSettings","\xd2","\x69","\xdc","\xbb"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clearAt","\xe0","\xe7","\x44","\xab"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("refreshCanvas","\x13","\xf9","\x7c","\xb6"),
	HX_HCSTRING("refreshTexts","\x4b","\x47","\x1b","\x21"),
	HX_HCSTRING("drawBoundingBox","\x63","\x37","\x3f","\x4b"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMiddleDown","\x56","\x68","\x5e","\x56"),
	HX_HCSTRING("onMiddleUp","\x4f","\x31","\xf1","\x1d"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("get__canvas","\x8e","\xc6","\xb3","\xac"),
	HX_HCSTRING("get__curEntry","\x08","\x3e","\x2e","\xc1"),
	HX_HCSTRING("get__curBitmap","\x99","\x2d","\x31","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapLog_obj::__mClass;

void BitmapLog_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.BitmapLog","\x2d","\x02","\xf6","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BitmapLog_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLog_obj >;
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
} // end namespace debug
