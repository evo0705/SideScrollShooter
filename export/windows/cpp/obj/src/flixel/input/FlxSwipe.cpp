#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
namespace flixel{
namespace input{

Void FlxSwipe_obj::__construct(int ID,::flixel::util::FlxPoint StartPosition,::flixel::util::FlxPoint EndPosition,Float StartTimeInTicks)
{
HX_STACK_FRAME("flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",34,0xe38cac7e)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(StartPosition,"StartPosition")
HX_STACK_ARG(EndPosition,"EndPosition")
HX_STACK_ARG(StartTimeInTicks,"StartTimeInTicks")
{
	HX_STACK_LINE(35)
	this->ID = ID;
	HX_STACK_LINE(36)
	this->startPosition = StartPosition;
	HX_STACK_LINE(37)
	this->endPosition = EndPosition;
	HX_STACK_LINE(38)
	this->_startTimeInTicks = StartTimeInTicks;
	HX_STACK_LINE(39)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->_endTimeInTicks = tmp->ticks;
}
;
	return null();
}

//FlxSwipe_obj::~FlxSwipe_obj() { }

Dynamic FlxSwipe_obj::__CreateEmpty() { return  new FlxSwipe_obj; }
hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID,::flixel::util::FlxPoint StartPosition,::flixel::util::FlxPoint EndPosition,Float StartTimeInTicks)
{  hx::ObjectPtr< FlxSwipe_obj > _result_ = new FlxSwipe_obj();
	_result_->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return _result_;}

Dynamic FlxSwipe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSwipe_obj > _result_ = new FlxSwipe_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String FlxSwipe_obj::toString( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",43,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::flixel::util::FlxPool tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		_this->label = HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00");
		HX_STACK_LINE(45)
		int tmp3 = this->ID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		_this->value = tmp3;
		HX_STACK_LINE(45)
		tmp = _this;
	}
	HX_STACK_LINE(46)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		_this->label = HX_HCSTRING("start","\x62","\x74","\x0b","\x84");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp4 = this->startPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		_this->value = tmp4;
		HX_STACK_LINE(46)
		tmp1 = _this;
	}
	HX_STACK_LINE(47)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::flixel::util::FlxPool tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		_this->label = HX_HCSTRING("end","\xdb","\x03","\x4d","\x00");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp5 = this->endPosition;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		_this->value = tmp5;
		HX_STACK_LINE(47)
		tmp2 = _this;
	}
	HX_STACK_LINE(48)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp5 = this->startPosition;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp7 = this->endPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp10 = this->startPosition;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(48)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(48)
			::flixel::util::FlxPoint tmp12 = this->endPosition;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(48)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(48)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(48)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(48)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(48)
			tmp4 = ::Math_obj::sqrt(tmp17);
		}
		HX_STACK_LINE(48)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::flixel::util::FlxPool tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			_this->label = HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b");
			HX_STACK_LINE(48)
			_this->value = value;
			HX_STACK_LINE(48)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(49)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::flixel::util::FlxPoint tmp6 = this->startPosition;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			::flixel::util::FlxPoint Point1 = tmp6;		HX_STACK_VAR(Point1,"Point1");
			HX_STACK_LINE(49)
			::flixel::util::FlxPoint tmp7 = this->endPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			::flixel::util::FlxPoint Point2 = tmp7;		HX_STACK_VAR(Point2,"Point2");
			HX_STACK_LINE(49)
			Float tmp8 = (Point2->x - Point1->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			Float x = tmp8;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(49)
			Float tmp9 = (Point2->y - Point1->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			Float y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(49)
			Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(49)
			bool tmp10 = (x != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(49)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			if ((tmp11)){
				HX_STACK_LINE(49)
				tmp12 = (y != (int)0);
			}
			else{
				HX_STACK_LINE(49)
				tmp12 = true;
			}
			HX_STACK_LINE(49)
			if ((tmp12)){
				HX_STACK_LINE(49)
				Float tmp13 = ::Math_obj::PI;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				Float tmp14 = (tmp13 * ((Float)0.25));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				Float c1 = tmp14;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(49)
				Float tmp15 = ((int)3 * c1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				Float c2 = tmp15;		HX_STACK_VAR(c2,"c2");
				HX_STACK_LINE(49)
				bool tmp16 = (y < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(49)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(49)
				if ((tmp16)){
					HX_STACK_LINE(49)
					Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(49)
					tmp17 = -(tmp18);
				}
				else{
					HX_STACK_LINE(49)
					tmp17 = y;
				}
				HX_STACK_LINE(49)
				Float ay = tmp17;		HX_STACK_VAR(ay,"ay");
				HX_STACK_LINE(49)
				bool tmp18 = (x >= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(49)
				if ((tmp18)){
					HX_STACK_LINE(49)
					Float tmp19 = c1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(49)
					Float tmp20 = c1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(49)
					Float tmp21 = (x - ay);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(49)
					Float tmp22 = (x + ay);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(49)
					Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(49)
					Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(49)
					Float tmp25 = (tmp19 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(49)
					angle = tmp25;
				}
				else{
					HX_STACK_LINE(49)
					Float tmp19 = c2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(49)
					Float tmp20 = c1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(49)
					Float tmp21 = (x + ay);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(49)
					Float tmp22 = (ay - x);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(49)
					Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(49)
					Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(49)
					Float tmp25 = (tmp19 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(49)
					angle = tmp25;
				}
				HX_STACK_LINE(49)
				bool tmp19 = (y < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(49)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(49)
				if ((tmp19)){
					HX_STACK_LINE(49)
					Float tmp21 = angle;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(49)
					tmp20 = -(tmp21);
				}
				else{
					HX_STACK_LINE(49)
					tmp20 = angle;
				}
				HX_STACK_LINE(49)
				Float tmp21 = ::Math_obj::PI;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(49)
				Float tmp22 = (Float((int)180) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(49)
				Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(49)
				angle = tmp23;
				HX_STACK_LINE(49)
				bool tmp24 = (angle > (int)90);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(49)
				if ((tmp24)){
					HX_STACK_LINE(49)
					Float tmp25 = (angle - (int)270);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(49)
					angle = tmp25;
				}
				else{
					HX_STACK_LINE(49)
					hx::AddEq(angle,(int)90);
				}
			}
			HX_STACK_LINE(49)
			bool tmp13 = Point1->_weak;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			if ((tmp13)){
				HX_STACK_LINE(49)
				Point1->put();
			}
			HX_STACK_LINE(49)
			bool tmp14 = Point2->_weak;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(49)
			if ((tmp14)){
				HX_STACK_LINE(49)
				Point2->put();
			}
			HX_STACK_LINE(49)
			tmp5 = angle;
		}
		HX_STACK_LINE(49)
		Dynamic value = tmp5;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			::flixel::util::FlxPool tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(49)
			_this->label = HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22");
			HX_STACK_LINE(49)
			_this->value = value;
			HX_STACK_LINE(49)
			tmp4 = _this;
		}
	}
	HX_STACK_LINE(50)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::flixel::util::FlxPool tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(50)
		_this->label = HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14");
		HX_STACK_LINE(50)
		Float tmp8 = this->_endTimeInTicks;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		Float tmp9 = this->_startTimeInTicks;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float tmp11 = (Float(tmp10) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(50)
		_this->value = tmp11;
		HX_STACK_LINE(50)
		tmp5 = _this;
	}
	HX_STACK_LINE(44)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",54,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::flixel::util::FlxPoint tmp1 = this->startPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::flixel::util::FlxPoint tmp3 = this->endPosition;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(55)
		::flixel::util::FlxPoint tmp6 = this->startPosition;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		::flixel::util::FlxPoint tmp8 = this->endPosition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		Float dy = tmp10;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(55)
		Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(55)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(55)
		tmp = ::Math_obj::sqrt(tmp13);
	}
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",59,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint tmp1 = this->startPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint Point1 = tmp1;		HX_STACK_VAR(Point1,"Point1");
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint tmp2 = this->endPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint Point2 = tmp2;		HX_STACK_VAR(Point2,"Point2");
		HX_STACK_LINE(60)
		Float tmp3 = (Point2->x - Point1->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Float x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(60)
		Float tmp4 = (Point2->y - Point1->y);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		Float y = tmp4;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(60)
		Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(60)
		bool tmp5 = (x != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			tmp7 = (y != (int)0);
		}
		else{
			HX_STACK_LINE(60)
			tmp7 = true;
		}
		HX_STACK_LINE(60)
		if ((tmp7)){
			HX_STACK_LINE(60)
			Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Float tmp9 = (tmp8 * ((Float)0.25));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			Float c1 = tmp9;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(60)
			Float tmp10 = ((int)3 * c1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(60)
			Float c2 = tmp10;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(60)
			bool tmp11 = (y < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			if ((tmp11)){
				HX_STACK_LINE(60)
				Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				tmp12 = -(tmp13);
			}
			else{
				HX_STACK_LINE(60)
				tmp12 = y;
			}
			HX_STACK_LINE(60)
			Float ay = tmp12;		HX_STACK_VAR(ay,"ay");
			HX_STACK_LINE(60)
			bool tmp13 = (x >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			if ((tmp13)){
				HX_STACK_LINE(60)
				Float tmp14 = c1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				Float tmp15 = c1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				Float tmp16 = (x - ay);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				Float tmp17 = (x + ay);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(60)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(60)
				Float tmp20 = (tmp14 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(60)
				angle = tmp20;
			}
			else{
				HX_STACK_LINE(60)
				Float tmp14 = c2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(60)
				Float tmp15 = c1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(60)
				Float tmp16 = (x + ay);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				Float tmp17 = (ay - x);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(60)
				Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(60)
				Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(60)
				Float tmp20 = (tmp14 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(60)
				angle = tmp20;
			}
			HX_STACK_LINE(60)
			bool tmp14 = (y < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			if ((tmp14)){
				HX_STACK_LINE(60)
				Float tmp16 = angle;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				tmp15 = -(tmp16);
			}
			else{
				HX_STACK_LINE(60)
				tmp15 = angle;
			}
			HX_STACK_LINE(60)
			Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			Float tmp17 = (Float((int)180) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			angle = tmp18;
			HX_STACK_LINE(60)
			bool tmp19 = (angle > (int)90);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(60)
			if ((tmp19)){
				HX_STACK_LINE(60)
				Float tmp20 = (angle - (int)270);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(60)
				angle = tmp20;
			}
			else{
				HX_STACK_LINE(60)
				hx::AddEq(angle,(int)90);
			}
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			bool tmp8 = Point1->_weak;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			if ((tmp8)){
				HX_STACK_LINE(60)
				Point1->put();
			}
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			bool tmp8 = Point2->_weak;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			if ((tmp8)){
				HX_STACK_LINE(60)
				Point2->put();
			}
		}
		HX_STACK_LINE(60)
		tmp = angle;
	}
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_duration( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",64,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	Float tmp = this->_endTimeInTicks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = this->_startTimeInTicks;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

Dynamic FlxSwipe_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == hx::paccAlways) return get_duration(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return endPosition; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return startPosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return _endTimeInTicks; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return _startTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSwipe_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSwipe_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"));
	outFields->push(HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"));
	outFields->push(HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"),
	HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"),
	HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"),
	HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxSwipe","\x7e","\xf5","\xe9","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxSwipe_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSwipe_obj >;
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
