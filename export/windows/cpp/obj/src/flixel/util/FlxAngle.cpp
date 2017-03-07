#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
namespace flixel{
namespace util{

Void FlxAngle_obj::__construct()
{
	return null();
}

//FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > _result_ = new FlxAngle_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > _result_ = new FlxAngle_obj();
	_result_->__construct();
	return _result_;}

Array< Float > FlxAngle_obj::cosTable;

Array< Float > FlxAngle_obj::sinTable;

::flixel::util::FlxPoint FlxAngle_obj::rotatePoint( Float X,Float Y,Float PivotX,Float PivotY,Float Angle,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","rotatePoint",0x699cdd82,"flixel.util.FlxAngle.rotatePoint","flixel/util/FlxAngle.hx",43,0x34a716c3)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(PivotX,"PivotX")
	HX_STACK_ARG(PivotY,"PivotY")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(44)
	Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(45)
	Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(46)
	Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	Float radians = tmp4;		HX_STACK_VAR(radians,"radians");
	HX_STACK_LINE(47)
	while((true)){
		HX_STACK_LINE(47)
		Float tmp5 = radians;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		if ((tmp9)){
			HX_STACK_LINE(47)
			break;
		}
		HX_STACK_LINE(49)
		Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(49)
		Float tmp11 = (tmp10 * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		hx::AddEq(radians,tmp11);
	}
	HX_STACK_LINE(51)
	while((true)){
		HX_STACK_LINE(51)
		Float tmp5 = radians;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		if ((tmp8)){
			HX_STACK_LINE(51)
			break;
		}
		HX_STACK_LINE(53)
		Float tmp9 = radians;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		Float tmp11 = (tmp10 * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		radians = tmp12;
	}
	HX_STACK_LINE(56)
	bool tmp5 = (radians < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp5)){
		HX_STACK_LINE(58)
		Float tmp6 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		Float tmp7 = (((Float).405284735) * radians);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(58)
		sin = tmp10;
		HX_STACK_LINE(59)
		bool tmp11 = (sin < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		if ((tmp11)){
			HX_STACK_LINE(61)
			Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			Float tmp13 = sin;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			Float tmp16 = sin;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			Float tmp18 = (((Float).225) * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Float tmp19 = sin;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(61)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(61)
			sin = tmp20;
		}
		else{
			HX_STACK_LINE(65)
			Float tmp12 = (sin * sin);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			Float tmp13 = sin;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(65)
			Float tmp15 = (((Float).225) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(65)
			Float tmp16 = sin;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			sin = tmp17;
		}
	}
	else{
		HX_STACK_LINE(70)
		Float tmp6 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		Float tmp7 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(70)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(70)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(70)
		sin = tmp10;
		HX_STACK_LINE(71)
		bool tmp11 = (sin < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		if ((tmp11)){
			HX_STACK_LINE(73)
			Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			Float tmp13 = sin;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(73)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(73)
			Float tmp16 = sin;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(73)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			Float tmp18 = (((Float).225) * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(73)
			Float tmp19 = sin;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(73)
			sin = tmp20;
		}
		else{
			HX_STACK_LINE(77)
			Float tmp12 = (sin * sin);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			Float tmp13 = sin;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(77)
			Float tmp15 = (((Float).225) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(77)
			Float tmp16 = sin;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(77)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(77)
			sin = tmp17;
		}
	}
	HX_STACK_LINE(81)
	Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	hx::AddEq(radians,tmp7);
	HX_STACK_LINE(82)
	Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(82)
	bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	if ((tmp10)){
		HX_STACK_LINE(84)
		Float tmp11 = radians;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		radians = tmp14;
	}
	HX_STACK_LINE(86)
	bool tmp11 = (radians < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	if ((tmp11)){
		HX_STACK_LINE(88)
		Float tmp12 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(88)
		Float tmp13 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(88)
		Float tmp14 = radians;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(88)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		cos = tmp16;
		HX_STACK_LINE(89)
		bool tmp17 = (cos < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(89)
		if ((tmp17)){
			HX_STACK_LINE(91)
			Float tmp18 = cos;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(91)
			Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(91)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(91)
			Float tmp24 = (((Float).225) * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(91)
			Float tmp25 = cos;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(91)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(91)
			cos = tmp26;
		}
		else{
			HX_STACK_LINE(95)
			Float tmp18 = (cos * cos);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			Float tmp21 = (((Float).225) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(95)
			Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(95)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(95)
			cos = tmp23;
		}
	}
	else{
		HX_STACK_LINE(100)
		Float tmp12 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		Float tmp14 = radians;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(100)
		Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(100)
		cos = tmp16;
		HX_STACK_LINE(101)
		bool tmp17 = (cos < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(101)
		if ((tmp17)){
			HX_STACK_LINE(103)
			Float tmp18 = cos;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(103)
			Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(103)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(103)
			Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(103)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(103)
			Float tmp24 = (((Float).225) * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(103)
			Float tmp25 = cos;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(103)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(103)
			cos = tmp26;
		}
		else{
			HX_STACK_LINE(107)
			Float tmp18 = (cos * cos);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(107)
			Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(107)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(107)
			Float tmp21 = (((Float).225) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(107)
			Float tmp22 = cos;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(107)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(107)
			cos = tmp23;
		}
	}
	HX_STACK_LINE(111)
	Float tmp12 = (X - PivotX);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(111)
	Float dx = tmp12;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(114)
	Float tmp13 = (Y - PivotY);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(114)
	Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(115)
	bool tmp14 = (point == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(115)
	if ((tmp14)){
		HX_STACK_LINE(117)
		::flixel::util::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(117)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(117)
			::flixel::util::FlxPool tmp16 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			::flixel::util::FlxPoint tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			Float tmp18 = X1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(117)
			Float tmp19 = Y1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(117)
			::flixel::util::FlxPoint tmp20 = tmp17->set(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(117)
			::flixel::util::FlxPoint point1 = tmp20;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(117)
			point1->_inPool = false;
			HX_STACK_LINE(117)
			tmp15 = point1;
		}
		HX_STACK_LINE(117)
		point = tmp15;
	}
	HX_STACK_LINE(119)
	Float tmp15 = PivotX;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(119)
	Float tmp16 = (cos * dx);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(119)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(119)
	Float tmp18 = (sin * dy);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(119)
	Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(119)
	point->set_x(tmp19);
	HX_STACK_LINE(120)
	Float tmp20 = PivotY;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(120)
	Float tmp21 = (sin * dx);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(120)
	Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(120)
	Float tmp23 = (cos * dy);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(120)
	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(120)
	point->set_y(tmp24);
	HX_STACK_LINE(121)
	::flixel::util::FlxPoint tmp25 = point;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(121)
	return tmp25;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxAngle_obj,rotatePoint,return )

Float FlxAngle_obj::getAngle( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_FRAME("flixel.util.FlxAngle","getAngle",0x66899fb0,"flixel.util.FlxAngle.getAngle","flixel/util/FlxAngle.hx",132,0x34a716c3)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(133)
	Float tmp = (Point2->x - Point1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(134)
	Float tmp1 = (Point2->y - Point1->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(135)
	Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(137)
	bool tmp2 = (x != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	if ((tmp3)){
		HX_STACK_LINE(137)
		tmp4 = (y != (int)0);
	}
	else{
		HX_STACK_LINE(137)
		tmp4 = true;
	}
	HX_STACK_LINE(137)
	if ((tmp4)){
		HX_STACK_LINE(139)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Float tmp6 = (tmp5 * ((Float)0.25));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Float c1 = tmp6;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(140)
		Float tmp7 = ((int)3 * c1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		Float c2 = tmp7;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(141)
		bool tmp8 = (y < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		if ((tmp8)){
			HX_STACK_LINE(141)
			Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			tmp9 = -(tmp10);
		}
		else{
			HX_STACK_LINE(141)
			tmp9 = y;
		}
		HX_STACK_LINE(141)
		Float ay = tmp9;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(143)
		bool tmp10 = (x >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		if ((tmp10)){
			HX_STACK_LINE(145)
			Float tmp11 = c1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(145)
			Float tmp12 = c1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			Float tmp13 = (x - ay);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(145)
			Float tmp14 = (x + ay);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(145)
			Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(145)
			Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(145)
			angle = tmp17;
		}
		else{
			HX_STACK_LINE(149)
			Float tmp11 = c2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(149)
			Float tmp12 = c1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(149)
			Float tmp13 = (x + ay);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(149)
			Float tmp14 = (ay - x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(149)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(149)
			Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(149)
			Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(149)
			angle = tmp17;
		}
		HX_STACK_LINE(151)
		bool tmp11 = (y < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(151)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(151)
		if ((tmp11)){
			HX_STACK_LINE(151)
			Float tmp13 = angle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(151)
			tmp12 = -(tmp13);
		}
		else{
			HX_STACK_LINE(151)
			tmp12 = angle;
		}
		HX_STACK_LINE(151)
		Float tmp13 = ::Math_obj::PI;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(151)
		Float tmp14 = (Float((int)180) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(151)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(151)
		angle = tmp15;
		HX_STACK_LINE(153)
		bool tmp16 = (angle > (int)90);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(153)
		if ((tmp16)){
			HX_STACK_LINE(155)
			Float tmp17 = (angle - (int)270);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(155)
			angle = tmp17;
		}
		else{
			HX_STACK_LINE(159)
			hx::AddEq(angle,(int)90);
		}
	}
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		bool tmp5 = Point1->_weak;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		if ((tmp5)){
			HX_STACK_LINE(163)
			Point1->put();
		}
	}
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		bool tmp5 = Point2->_weak;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		if ((tmp5)){
			HX_STACK_LINE(164)
			Point2->put();
		}
	}
	HX_STACK_LINE(166)
	Float tmp5 = angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,getAngle,return )

Void FlxAngle_obj::sinCosGenerator( int length,hx::Null< Float >  __o_sinAmplitude,hx::Null< Float >  __o_cosAmplitude,hx::Null< Float >  __o_frequency){
Float sinAmplitude = __o_sinAmplitude.Default(((Float)1.0));
Float cosAmplitude = __o_cosAmplitude.Default(((Float)1.0));
Float frequency = __o_frequency.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.util.FlxAngle","sinCosGenerator",0x2783fa51,"flixel.util.FlxAngle.sinCosGenerator","flixel/util/FlxAngle.hx",184,0x34a716c3)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(sinAmplitude,"sinAmplitude")
	HX_STACK_ARG(cosAmplitude,"cosAmplitude")
	HX_STACK_ARG(frequency,"frequency")
{
		HX_STACK_LINE(185)
		Float sin = sinAmplitude;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(186)
		Float cos = cosAmplitude;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(187)
		Float tmp = frequency;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		int tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Float frq = tmp4;		HX_STACK_VAR(frq,"frq");
		HX_STACK_LINE(189)
		::flixel::util::FlxAngle_obj::cosTable = Array_obj< Float >::__new();
		HX_STACK_LINE(190)
		::flixel::util::FlxAngle_obj::sinTable = Array_obj< Float >::__new();
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(192)
			while((true)){
				HX_STACK_LINE(192)
				bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(192)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(192)
				if ((tmp6)){
					HX_STACK_LINE(192)
					break;
				}
				HX_STACK_LINE(192)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(192)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(194)
				Float tmp8 = (sin * frq);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				hx::SubEq(cos,tmp8);
				HX_STACK_LINE(195)
				Float tmp9 = (cos * frq);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(195)
				hx::AddEq(sin,tmp9);
				HX_STACK_LINE(197)
				Float tmp10 = cos;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(197)
				::flixel::util::FlxAngle_obj::cosTable[c] = tmp10;
				HX_STACK_LINE(198)
				Float tmp11 = sin;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(198)
				::flixel::util::FlxAngle_obj::sinTable[c] = tmp11;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAngle_obj,sinCosGenerator,(void))

Float FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_FRAME("flixel.util.FlxAngle","wrapAngle",0x38cb39f6,"flixel.util.FlxAngle.wrapAngle","flixel/util/FlxAngle.hx",211,0x34a716c3)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(212)
	bool tmp = (angle > (int)180);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	if ((tmp)){
		HX_STACK_LINE(214)
		angle = (int)-180;
	}
	else{
		HX_STACK_LINE(216)
		bool tmp1 = (angle < (int)-180);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp1)){
			HX_STACK_LINE(218)
			angle = (int)180;
		}
	}
	HX_STACK_LINE(221)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::angleLimit( Float angle,Float min,Float max){
	HX_STACK_FRAME("flixel.util.FlxAngle","angleLimit",0x2a40d57b,"flixel.util.FlxAngle.angleLimit","flixel/util/FlxAngle.hx",234,0x34a716c3)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(235)
	bool tmp = (angle > max);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(237)
		angle = max;
	}
	else{
		HX_STACK_LINE(239)
		bool tmp1 = (angle < min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		if ((tmp1)){
			HX_STACK_LINE(241)
			angle = min;
		}
	}
	HX_STACK_LINE(244)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_FRAME("flixel.util.FlxAngle","asDegrees",0x19409522,"flixel.util.FlxAngle.asDegrees","flixel/util/FlxAngle.hx",255,0x34a716c3)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(256)
	Float tmp = radians;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	Float tmp2 = (Float((int)180) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_FRAME("flixel.util.FlxAngle","asRadians",0x05d5f7ed,"flixel.util.FlxAngle.asRadians","flixel/util/FlxAngle.hx",267,0x34a716c3)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(268)
	Float tmp = degrees;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetween",0xb3fd5808,"flixel.util.FlxAngle.angleBetween","flixel/util/FlxAngle.hx",281,0x34a716c3)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(282)
		Float tmp = SpriteB->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		Float tmp1 = SpriteB->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		Float tmp3 = SpriteA->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		Float tmp4 = SpriteA->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(283)
		Float tmp7 = SpriteB->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		Float tmp8 = SpriteB->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		Float tmp10 = SpriteA->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		Float tmp11 = SpriteA->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(283)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(283)
		Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(285)
		bool tmp14 = AsDegrees;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(285)
		if ((tmp14)){
			HX_STACK_LINE(286)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(286)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(286)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(286)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(286)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(286)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(286)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(286)
				tmp15 = (tmp19 * tmp21);
			}
			HX_STACK_LINE(286)
			return tmp15;
		}
		else{
			HX_STACK_LINE(288)
			Float tmp15 = dy;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(288)
			Float tmp16 = dx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(288)
			Float tmp17 = ::Math_obj::atan2(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(288)
			return tmp17;
		}
		HX_STACK_LINE(285)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenPoint",0xab3baf28,"flixel.util.FlxAngle.angleBetweenPoint","flixel/util/FlxAngle.hx",301,0x34a716c3)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(302)
		Float tmp = Target->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		Float tmp1 = Sprite->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		Float tmp2 = Sprite->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(303)
		Float tmp5 = Target->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(305)
		bool tmp10 = AsDegrees;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		if ((tmp10)){
			HX_STACK_LINE(306)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				Float tmp12 = dy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(306)
				Float tmp13 = dx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(306)
				Float tmp14 = ::Math_obj::atan2(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(306)
				Float radians = tmp14;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(306)
				Float tmp15 = radians;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(306)
				Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(306)
				Float tmp17 = (Float((int)180) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(306)
				tmp11 = (tmp15 * tmp17);
			}
			HX_STACK_LINE(306)
			return tmp11;
		}
		else{
			HX_STACK_LINE(308)
			Float tmp11 = dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(308)
			Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(308)
			Float tmp13 = ::Math_obj::atan2(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(308)
			return tmp13;
		}
		HX_STACK_LINE(305)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenMouse",0xf11110fd,"flixel.util.FlxAngle.angleBetweenMouse","flixel/util/FlxAngle.hx",321,0x34a716c3)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(323)
		bool tmp = (Object == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		if ((tmp)){
			HX_STACK_LINE(324)
			return (int)0;
		}
		HX_STACK_LINE(326)
		::flixel::util::FlxPoint tmp1 = Object->getScreenXY(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		::flixel::util::FlxPoint p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(328)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		int tmp3 = tmp2->screenX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		Float tmp4 = p->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(329)
		::flixel::input::mouse::FlxMouse tmp6 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		int tmp7 = tmp6->screenY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(329)
		Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(331)
		bool tmp10 = AsDegrees;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(331)
		if ((tmp10)){
			HX_STACK_LINE(332)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(332)
			{
				HX_STACK_LINE(332)
				Float tmp12 = dy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(332)
				Float tmp13 = dx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(332)
				Float tmp14 = ::Math_obj::atan2(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(332)
				Float radians = tmp14;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(332)
				Float tmp15 = radians;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(332)
				Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(332)
				Float tmp17 = (Float((int)180) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(332)
				tmp11 = (tmp15 * tmp17);
			}
			HX_STACK_LINE(332)
			return tmp11;
		}
		else{
			HX_STACK_LINE(334)
			Float tmp11 = dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(334)
			Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(334)
			Float tmp13 = ::Math_obj::atan2(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(334)
			return tmp13;
		}
		HX_STACK_LINE(331)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object,::flixel::input::touch::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.util.FlxAngle","angleBetweenTouch",0xf8df1297,"flixel.util.FlxAngle.angleBetweenTouch","flixel/util/FlxAngle.hx",349,0x34a716c3)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(351)
		::flixel::util::FlxPoint tmp = Object->getScreenXY(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		::flixel::util::FlxPoint p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(353)
		Float tmp1 = (Touch->screenX - p->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		Float dx = tmp1;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(354)
		Float tmp2 = (Touch->screenY - p->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		Float dy = tmp2;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(356)
		bool tmp3 = AsDegrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		if ((tmp3)){
			HX_STACK_LINE(357)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(357)
				Float tmp6 = dx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(357)
				Float radians = tmp7;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(357)
				Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(357)
				Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(357)
				Float tmp10 = (Float((int)180) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(357)
				tmp4 = (tmp8 * tmp10);
			}
			HX_STACK_LINE(357)
			return tmp4;
		}
		else{
			HX_STACK_LINE(359)
			Float tmp4 = dy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(359)
			Float tmp5 = dx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(359)
			Float tmp6 = ::Math_obj::atan2(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(359)
			return tmp6;
		}
		HX_STACK_LINE(356)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

::flixel::util::FlxPoint FlxAngle_obj::getCartesianCoords( Float Radius,Float Angle,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","getCartesianCoords",0xcba23863,"flixel.util.FlxAngle.getCartesianCoords","flixel/util/FlxAngle.hx",372,0x34a716c3)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(373)
	::flixel::util::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(374)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	if ((tmp)){
		HX_STACK_LINE(376)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(376)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(376)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(376)
			point1->_inPool = false;
			HX_STACK_LINE(376)
			tmp1 = point1;
		}
		HX_STACK_LINE(376)
		p = tmp1;
	}
	HX_STACK_LINE(379)
	Float tmp1 = Radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(379)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(379)
	Float tmp4 = (Float(tmp3) / Float((int)180));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(379)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(379)
	Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(379)
	Float tmp7 = (tmp1 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(379)
	p->set_x(tmp7);
	HX_STACK_LINE(380)
	Float tmp8 = Radius;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(380)
	Float tmp9 = Angle;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(380)
	Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(380)
	Float tmp11 = (Float(tmp10) / Float((int)180));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(380)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(380)
	Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(380)
	Float tmp14 = (tmp8 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(380)
	p->set_y(tmp14);
	HX_STACK_LINE(381)
	::flixel::util::FlxPoint tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(381)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

::flixel::util::FlxPoint FlxAngle_obj::getPolarCoords( Float X,Float Y,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxAngle","getPolarCoords",0xef5b8a19,"flixel.util.FlxAngle.getPolarCoords","flixel/util/FlxAngle.hx",393,0x34a716c3)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(394)
	::flixel::util::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(395)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	if ((tmp)){
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(397)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(397)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			Float tmp4 = X1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			Float tmp5 = Y1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(397)
			point1->_inPool = false;
			HX_STACK_LINE(397)
			tmp1 = point1;
		}
		HX_STACK_LINE(397)
		p = tmp1;
	}
	HX_STACK_LINE(400)
	Float tmp1 = (X * X);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(400)
	Float tmp2 = (Y * Y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(400)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(400)
	p->set_x(tmp4);
	HX_STACK_LINE(401)
	Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(401)
	Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(401)
	Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(401)
	Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(401)
	Float tmp9 = (Float((int)180) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(401)
	Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(401)
	p->set_y(tmp10);
	HX_STACK_LINE(402)
	::flixel::util::FlxPoint tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(402)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG( ){
	HX_STACK_FRAME("flixel.util.FlxAngle","get_TO_DEG",0xf3e2f47e,"flixel.util.FlxAngle.get_TO_DEG","flixel/util/FlxAngle.hx",406,0x34a716c3)
	HX_STACK_LINE(407)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	Float tmp1 = (Float((int)180) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD( ){
	HX_STACK_FRAME("flixel.util.FlxAngle","get_TO_RAD",0xf3ed908d,"flixel.util.FlxAngle.get_TO_RAD","flixel/util/FlxAngle.hx",411,0x34a716c3)
	HX_STACK_LINE(412)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	Float tmp1 = (Float(tmp) / Float((int)180));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

bool FlxAngle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { if (inCallProp == hx::paccAlways) { outValue = get_TO_DEG(); return true; } }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { if (inCallProp == hx::paccAlways) { outValue = get_TO_RAD(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cosTable") ) { outValue = cosTable; return true;  }
		if (HX_FIELD_EQ(inName,"sinTable") ) { outValue = sinTable; return true;  }
		if (HX_FIELD_EQ(inName,"getAngle") ) { outValue = getAngle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { outValue = wrapAngle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { outValue = asDegrees_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"asRadians") ) { outValue = asRadians_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { outValue = angleLimit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { outValue = get_TO_DEG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { outValue = get_TO_RAD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotatePoint") ) { outValue = rotatePoint_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { outValue = getPolarCoords_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sinCosGenerator") ) { outValue = sinCosGenerator_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { outValue = angleBetweenPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { outValue = angleBetweenMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { outValue = angleBetweenTouch_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { outValue = getCartesianCoords_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxAngle_obj::cosTable,HX_HCSTRING("cosTable","\x47","\x46","\x6c","\xbf")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxAngle_obj::sinTable,HX_HCSTRING("sinTable","\xd6","\xd1","\x49","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_MARK_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::cosTable,"cosTable");
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::sinTable,"sinTable");
};

#endif

hx::Class FlxAngle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cosTable","\x47","\x46","\x6c","\xbf"),
	HX_HCSTRING("sinTable","\xd6","\xd1","\x49","\x59"),
	HX_HCSTRING("rotatePoint","\xf5","\xf3","\x58","\x98"),
	HX_HCSTRING("getAngle","\x5d","\x53","\xb9","\x82"),
	HX_HCSTRING("sinCosGenerator","\x44","\xc6","\x17","\x6c"),
	HX_HCSTRING("wrapAngle","\xa9","\xbd","\x58","\xc6"),
	HX_HCSTRING("angleLimit","\x68","\x8e","\x86","\x78"),
	HX_HCSTRING("asDegrees","\xd5","\x18","\xce","\xa6"),
	HX_HCSTRING("asRadians","\xa0","\x7b","\x63","\x93"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("angleBetweenPoint","\xdb","\x9d","\x50","\x15"),
	HX_HCSTRING("angleBetweenMouse","\xb0","\xff","\x25","\x5b"),
	HX_HCSTRING("angleBetweenTouch","\x4a","\x01","\xf4","\x62"),
	HX_HCSTRING("getCartesianCoords","\x50","\x26","\xde","\x33"),
	HX_HCSTRING("getPolarCoords","\x86","\xbd","\xd4","\x74"),
	HX_HCSTRING("get_TO_DEG","\x6b","\xad","\x28","\x42"),
	HX_HCSTRING("get_TO_RAD","\x7a","\x49","\x33","\x42"),
	::String(null()) };

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxAngle","\x7b","\xea","\xaa","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAngle_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAngle_obj >;
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

void FlxAngle_obj::__boot()
{
	cosTable= Array_obj< Float >::__new();
	sinTable= Array_obj< Float >::__new();
}

} // end namespace flixel
} // end namespace util
