#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxMath_obj::__construct()
{
	return null();
}

//FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > _result_ = new FlxMath_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > _result_ = new FlxMath_obj();
	_result_->__construct();
	return _result_;}

Float FlxMath_obj::MIN_VALUE;

Float FlxMath_obj::MAX_VALUE;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_FRAME("flixel.util.FlxMath","roundDecimal",0x49dd7af1,"flixel.util.FlxMath.roundDecimal","flixel/util/FlxMath.hx",44,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Precision,"Precision")
	HX_STACK_LINE(45)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp = (_g < Precision);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			if ((tmp1)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(48)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(50)
	Float tmp = (Value * mult);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = mult;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_FRAME("flixel.util.FlxMath","bound",0xbc3b4970,"flixel.util.FlxMath.bound","flixel/util/FlxMath.hx",62,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(63)
	bool tmp = (Value < Min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(63)
		tmp1 = Min;
	}
	else{
		HX_STACK_LINE(63)
		tmp1 = Value;
	}
	HX_STACK_LINE(63)
	Float lowerBound = tmp1;		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(64)
	bool tmp2 = (lowerBound > Max);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = Max;
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = lowerBound;
	}
	HX_STACK_LINE(64)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_FRAME("flixel.util.FlxMath","lerp",0x82422585,"flixel.util.FlxMath.lerp","flixel/util/FlxMath.hx",76,0xa5ea82fe)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Ratio,"Ratio")
	HX_STACK_LINE(77)
	Float tmp = Min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = Ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = (Max - Min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(77)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Float Min,Float Max){
	HX_STACK_FRAME("flixel.util.FlxMath","inBounds",0x86cf8248,"flixel.util.FlxMath.inBounds","flixel/util/FlxMath.hx",89,0xa5ea82fe)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(90)
	bool tmp = (Value > Min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(90)
		tmp1 = (Value < Max);
	}
	else{
		HX_STACK_LINE(90)
		tmp1 = false;
	}
	HX_STACK_LINE(90)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_FRAME("flixel.util.FlxMath","isOdd",0xc6915517,"flixel.util.FlxMath.isOdd","flixel/util/FlxMath.hx",100,0xa5ea82fe)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(101)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	if ((tmp3)){
		HX_STACK_LINE(103)
		return true;
	}
	else{
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(101)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_FRAME("flixel.util.FlxMath","isEven",0xf20aa6b2,"flixel.util.FlxMath.isEven","flixel/util/FlxMath.hx",118,0xa5ea82fe)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(119)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	if ((tmp3)){
		HX_STACK_LINE(121)
		return false;
	}
	else{
		HX_STACK_LINE(125)
		return true;
	}
	HX_STACK_LINE(119)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_FRAME("flixel.util.FlxMath","numericComparison",0x057780a8,"flixel.util.FlxMath.numericComparison","flixel/util/FlxMath.hx",137,0xa5ea82fe)
	HX_STACK_ARG(num1,"num1")
	HX_STACK_ARG(num2,"num2")
	HX_STACK_LINE(138)
	bool tmp = (num2 > num1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(142)
		bool tmp1 = (num1 > num2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(144)
			return (int)1;
		}
	}
	HX_STACK_LINE(146)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInCoordinates",0x67b75834,"flixel.util.FlxMath.pointInCoordinates","flixel/util/FlxMath.hx",162,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rectX,"rectX")
	HX_STACK_ARG(rectY,"rectY")
	HX_STACK_ARG(rectWidth,"rectWidth")
	HX_STACK_ARG(rectHeight,"rectHeight")
	HX_STACK_LINE(163)
	bool tmp = (pointX >= rectX);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp)){
		HX_STACK_LINE(163)
		Float tmp2 = pointX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		Float tmp3 = (rectX + rectWidth);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		tmp1 = (tmp2 <= tmp4);
	}
	else{
		HX_STACK_LINE(163)
		tmp1 = false;
	}
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(165)
		bool tmp2 = (pointY >= rectY);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			Float tmp4 = pointY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			Float tmp5 = (rectY + rectHeight);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			tmp3 = (tmp4 <= tmp6);
		}
		else{
			HX_STACK_LINE(165)
			tmp3 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(167)
			return true;
		}
	}
	HX_STACK_LINE(170)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::util::FlxRect rect){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInFlxRect",0xecd4736f,"flixel.util.FlxMath.pointInFlxRect","flixel/util/FlxMath.hx",182,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(183)
	bool tmp = (pointX >= rect->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		Float tmp3 = pointX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Float tmp4 = (rect->x + rect->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		tmp2 = (tmp3 <= tmp6);
	}
	else{
		HX_STACK_LINE(183)
		tmp2 = false;
	}
	HX_STACK_LINE(183)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	if ((tmp3)){
		HX_STACK_LINE(183)
		tmp4 = (pointY >= rect->y);
	}
	else{
		HX_STACK_LINE(183)
		tmp4 = false;
	}
	HX_STACK_LINE(183)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	if ((tmp4)){
		HX_STACK_LINE(183)
		Float tmp6 = pointY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		Float tmp7 = (rect->y + rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		tmp5 = (tmp6 <= tmp8);
	}
	else{
		HX_STACK_LINE(183)
		tmp5 = false;
	}
	HX_STACK_LINE(183)
	if ((tmp5)){
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(187)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::util::FlxRect rect){
	HX_STACK_FRAME("flixel.util.FlxMath","mouseInFlxRect",0xf9c0aefa,"flixel.util.FlxMath.mouseInFlxRect","flixel/util/FlxMath.hx",200,0xa5ea82fe)
	HX_STACK_ARG(useWorldCoords,"useWorldCoords")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(201)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	if ((tmp)){
		HX_STACK_LINE(203)
		return true;
	}
	HX_STACK_LINE(206)
	bool tmp1 = useWorldCoords;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	if ((tmp1)){
		HX_STACK_LINE(208)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		::flixel::input::mouse::FlxMouse tmp5 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		::flixel::util::FlxRect tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		bool tmp9 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(208)
		return tmp9;
	}
	else{
		HX_STACK_LINE(212)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		int tmp3 = tmp2->screenX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		::flixel::input::mouse::FlxMouse tmp4 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		int tmp5 = tmp4->screenY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		::flixel::util::FlxRect tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		return tmp7;
	}
	HX_STACK_LINE(206)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("flixel.util.FlxMath","pointInRectangle",0x5cdc4928,"flixel.util.FlxMath.pointInRectangle","flixel/util/FlxMath.hx",226,0xa5ea82fe)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(227)
	bool tmp = (pointX >= rect->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	if ((tmp1)){
		HX_STACK_LINE(227)
		Float tmp3 = pointX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		Float tmp4 = rect->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		tmp2 = (tmp3 <= tmp6);
	}
	else{
		HX_STACK_LINE(227)
		tmp2 = false;
	}
	HX_STACK_LINE(227)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(227)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(227)
	if ((tmp3)){
		HX_STACK_LINE(227)
		tmp4 = (pointY >= rect->y);
	}
	else{
		HX_STACK_LINE(227)
		tmp4 = false;
	}
	HX_STACK_LINE(227)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(227)
	if ((tmp4)){
		HX_STACK_LINE(227)
		Float tmp6 = pointY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		Float tmp7 = rect->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(227)
		tmp5 = (tmp6 <= tmp8);
	}
	else{
		HX_STACK_LINE(227)
		tmp5 = false;
	}
	HX_STACK_LINE(227)
	if ((tmp5)){
		HX_STACK_LINE(229)
		return true;
	}
	HX_STACK_LINE(231)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_FRAME("flixel.util.FlxMath","maxAdd",0x4fcf506b,"flixel.util.FlxMath.maxAdd","flixel/util/FlxMath.hx",245,0xa5ea82fe)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min,"min")
{
		HX_STACK_LINE(246)
		hx::AddEq(value,amount);
		HX_STACK_LINE(248)
		bool tmp = (value > max);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		if ((tmp)){
			HX_STACK_LINE(250)
			value = max;
		}
		else{
			HX_STACK_LINE(252)
			bool tmp1 = (value <= min);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			if ((tmp1)){
				HX_STACK_LINE(254)
				value = min;
			}
		}
		HX_STACK_LINE(257)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_FRAME("flixel.util.FlxMath","wrapValue",0x6a371379,"flixel.util.FlxMath.wrapValue","flixel/util/FlxMath.hx",270,0xa5ea82fe)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(271)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(273)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	value = tmp2;
	HX_STACK_LINE(274)
	int tmp3 = amount;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(274)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(274)
	amount = tmp5;
	HX_STACK_LINE(275)
	int tmp6 = max;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(275)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(275)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(275)
	max = tmp8;
	HX_STACK_LINE(277)
	int tmp9 = (value + amount);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(277)
	int tmp10 = max;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(277)
	int tmp11 = hx::Mod(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(277)
	diff = tmp11;
	HX_STACK_LINE(279)
	int tmp12 = diff;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(279)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("flixel.util.FlxMath","dotProduct",0x0ffef934,"flixel.util.FlxMath.dotProduct","flixel/util/FlxMath.hx",293,0xa5ea82fe)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(294)
	Float tmp = (ax * bx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = (ay * by);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_FRAME("flixel.util.FlxMath","vectorLength",0xcdc7ff17,"flixel.util.FlxMath.vectorLength","flixel/util/FlxMath.hx",306,0xa5ea82fe)
	HX_STACK_ARG(dx,"dx")
	HX_STACK_ARG(dy,"dy")
	HX_STACK_LINE(307)
	Float tmp = (dx * dx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	Float tmp1 = (dy * dy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	Float tmp3 = ::Math_obj::sqrt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::getDistance( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_FRAME("flixel.util.FlxMath","getDistance",0x8cd5e09d,"flixel.util.FlxMath.getDistance","flixel/util/FlxMath.hx",318,0xa5ea82fe)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(319)
	Float tmp = (Point1->x - Point2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(320)
	Float tmp1 = (Point1->y - Point2->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		bool tmp2 = Point1->_weak;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		if ((tmp2)){
			HX_STACK_LINE(321)
			Point1->put();
		}
	}
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		bool tmp2 = Point2->_weak;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		if ((tmp2)){
			HX_STACK_LINE(322)
			Point2->put();
		}
	}
	HX_STACK_LINE(323)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(323)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(323)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceBetween",0x506df2c5,"flixel.util.FlxMath.distanceBetween","flixel/util/FlxMath.hx",334,0xa5ea82fe)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_LINE(335)
	Float tmp = SpriteA->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	Float tmp1 = SpriteA->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	Float tmp3 = SpriteB->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	Float tmp4 = SpriteB->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(335)
	Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(336)
	Float tmp7 = SpriteA->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(336)
	Float tmp8 = SpriteA->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(336)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(336)
	Float tmp10 = SpriteB->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(336)
	Float tmp11 = SpriteB->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(336)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(336)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(336)
	Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(337)
	Float tmp14 = (dx * dx);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(337)
	Float tmp15 = (dy * dy);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(337)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(337)
	Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(337)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(337)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceWithin",0x587f6218,"flixel.util.FlxMath.isDistanceWithin","flixel/util/FlxMath.hx",351,0xa5ea82fe)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(352)
		Float tmp = SpriteA->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		Float tmp1 = SpriteA->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		Float tmp3 = SpriteB->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		Float tmp4 = SpriteB->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(352)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(352)
		Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(353)
		Float tmp7 = SpriteA->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(353)
		Float tmp8 = SpriteA->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(353)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(353)
		Float tmp10 = SpriteB->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(353)
		Float tmp11 = SpriteB->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(353)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(353)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(353)
		Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(355)
		bool tmp14 = IncludeEqual;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(355)
		if ((tmp14)){
			HX_STACK_LINE(356)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(356)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(356)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(356)
			Float tmp18 = (Distance * Distance);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(356)
			bool tmp19 = (tmp17 <= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(356)
			return tmp19;
		}
		else{
			HX_STACK_LINE(358)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(358)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(358)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(358)
			Float tmp18 = (Distance * Distance);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(358)
			bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(358)
			return tmp19;
		}
		HX_STACK_LINE(355)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToPoint",0x7cce61d2,"flixel.util.FlxMath.distanceToPoint","flixel/util/FlxMath.hx",370,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(371)
	Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	Float tmp3 = Target->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(371)
	Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(372)
	Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(372)
	Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(372)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(372)
	Float tmp8 = Target->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(372)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(372)
	Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		bool tmp10 = Target->_weak;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(373)
		if ((tmp10)){
			HX_STACK_LINE(373)
			Target->put();
		}
	}
	HX_STACK_LINE(374)
	Float tmp10 = (dx * dx);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(374)
	Float tmp11 = (dy * dy);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(374)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(374)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(374)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(374)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToPointWithin",0x309dff13,"flixel.util.FlxMath.isDistanceToPointWithin","flixel/util/FlxMath.hx",389,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(390)
		Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		Float tmp3 = Target->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(391)
		Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(391)
		Float tmp8 = Target->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(391)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			bool tmp10 = Target->_weak;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(393)
			if ((tmp10)){
				HX_STACK_LINE(393)
				Target->put();
			}
		}
		HX_STACK_LINE(395)
		bool tmp10 = IncludeEqual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(395)
		if ((tmp10)){
			HX_STACK_LINE(396)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(396)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(396)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(396)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(396)
			bool tmp15 = (tmp13 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(396)
			return tmp15;
		}
		else{
			HX_STACK_LINE(398)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(398)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(398)
			bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(398)
			return tmp15;
		}
		HX_STACK_LINE(395)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToMouse",0xc2a3c3a7,"flixel.util.FlxMath.distanceToMouse","flixel/util/FlxMath.hx",409,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(410)
	Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(410)
	::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(410)
	int tmp4 = tmp3->screenX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(410)
	Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(410)
	Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(411)
	Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(411)
	Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(411)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(411)
	::flixel::input::mouse::FlxMouse tmp9 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(411)
	int tmp10 = tmp9->screenY;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(411)
	Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(411)
	Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(412)
	Float tmp12 = (dx * dx);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(412)
	Float tmp13 = (dy * dy);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(412)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(412)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(412)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(412)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToMouseWithin",0x3f8deea8,"flixel.util.FlxMath.isDistanceToMouseWithin","flixel/util/FlxMath.hx",425,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(426)
		Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		int tmp4 = tmp3->screenX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(427)
		Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(427)
		Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(427)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(427)
		::flixel::input::mouse::FlxMouse tmp9 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(427)
		int tmp10 = tmp9->screenY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(427)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(427)
		Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(429)
		bool tmp12 = IncludeEqual;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(429)
		if ((tmp12)){
			HX_STACK_LINE(430)
			Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(430)
			Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(430)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(430)
			Float tmp16 = (Distance * Distance);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(430)
			bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(430)
			return tmp17;
		}
		else{
			HX_STACK_LINE(432)
			Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(432)
			Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(432)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			Float tmp16 = (Distance * Distance);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(432)
			bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(432)
			return tmp17;
		}
		HX_STACK_LINE(429)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.util.FlxMath","distanceToTouch",0xca71c541,"flixel.util.FlxMath.distanceToTouch","flixel/util/FlxMath.hx",445,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(446)
	Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	int tmp3 = Touch->screenX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(446)
	Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(447)
	Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(447)
	Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(447)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(447)
	int tmp8 = Touch->screenY;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(447)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(447)
	Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(448)
	Float tmp10 = (dx * dx);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(448)
	Float tmp11 = (dy * dy);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(448)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(448)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(448)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(448)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.util.FlxMath","isDistanceToTouchWithin",0xaf3c1fc2,"flixel.util.FlxMath.isDistanceToTouchWithin","flixel/util/FlxMath.hx",461,0xa5ea82fe)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(462)
		Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		int tmp3 = Touch->screenX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(463)
		Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		int tmp8 = Touch->screenY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(463)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(465)
		bool tmp10 = IncludeEqual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(465)
		if ((tmp10)){
			HX_STACK_LINE(466)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(466)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(466)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(466)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(466)
			bool tmp15 = (tmp13 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(466)
			return tmp15;
		}
		else{
			HX_STACK_LINE(468)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(468)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(468)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(468)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(468)
			bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(468)
			return tmp15;
		}
		HX_STACK_LINE(465)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_FRAME("flixel.util.FlxMath","getDecimals",0x3346982a,"flixel.util.FlxMath.getDecimals","flixel/util/FlxMath.hx",479,0xa5ea82fe)
	HX_STACK_ARG(Number,"Number")
	HX_STACK_LINE(480)
	Float tmp = Number;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	Array< ::String > helperArray = tmp1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(481)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(483)
	bool tmp2 = (helperArray->length > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	if ((tmp2)){
		HX_STACK_LINE(485)
		::String tmp3 = helperArray->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(485)
		decimals = tmp3.length;
	}
	HX_STACK_LINE(488)
	int tmp3 = decimals;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(((Float)0.00001));
	HX_STACK_FRAME("flixel.util.FlxMath","equal",0x77c168e6,"flixel.util.FlxMath.equal","flixel/util/FlxMath.hx",492,0xa5ea82fe)
	HX_STACK_ARG(aValueA,"aValueA")
	HX_STACK_ARG(aValueB,"aValueB")
	HX_STACK_ARG(aDiff,"aDiff")
{
		HX_STACK_LINE(493)
		Float tmp = (aValueA - aValueB);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(493)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		Float tmp2 = aDiff;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(493)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf( Float f){
	HX_STACK_FRAME("flixel.util.FlxMath","signOf",0x460d9142,"flixel.util.FlxMath.signOf","flixel/util/FlxMath.hx",500,0xa5ea82fe)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(501)
	bool tmp = (f < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(501)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	if ((tmp)){
		HX_STACK_LINE(501)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(501)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(501)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign( Float f1,Float f2){
	HX_STACK_FRAME("flixel.util.FlxMath","sameSign",0xff0a9cd1,"flixel.util.FlxMath.sameSign","flixel/util/FlxMath.hx",508,0xa5ea82fe)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(509)
	bool tmp = (f1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	if ((tmp)){
		HX_STACK_LINE(509)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(509)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(509)
	bool tmp2 = (f2 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	if ((tmp2)){
		HX_STACK_LINE(509)
		tmp3 = (int)-1;
	}
	else{
		HX_STACK_LINE(509)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(509)
	bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(509)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isOdd") ) { outValue = isOdd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"equal") ) { outValue = equal_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { outValue = isEven_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { outValue = maxAdd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"signOf") ) { outValue = signOf_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { outValue = inBounds_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sameSign") ) { outValue = sameSign_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { outValue = wrapValue_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { outValue = getDistance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDecimals") ) { outValue = getDecimals_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { outValue = vectorLength_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { outValue = pointInFlxRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { outValue = mouseInFlxRect_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { outValue = distanceBetween_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { outValue = distanceToPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { outValue = distanceToMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { outValue = distanceToTouch_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { outValue = pointInRectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { outValue = isDistanceWithin_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { outValue = numericComparison_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { outValue = pointInCoordinates_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { outValue = isDistanceToPointWithin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { outValue = isDistanceToMouseWithin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { outValue = isDistanceToTouchWithin_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxMath_obj::MIN_VALUE,HX_HCSTRING("MIN_VALUE","\x84","\x4d","\x17","\x19")},
	{hx::fsFloat,(void *) &FlxMath_obj::MAX_VALUE,HX_HCSTRING("MAX_VALUE","\x16","\x60","\x5a","\xef")},
	{hx::fsFloat,(void *) &FlxMath_obj::SQUARE_ROOT_OF_TWO,HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
};

#endif

hx::Class FlxMath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MIN_VALUE","\x84","\x4d","\x17","\x19"),
	HX_HCSTRING("MAX_VALUE","\x16","\x60","\x5a","\xef"),
	HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7"),
	HX_HCSTRING("roundDecimal","\xe3","\xa9","\x4c","\xb9"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("inBounds","\x3a","\xd0","\x9b","\xee"),
	HX_HCSTRING("isOdd","\xe5","\xbb","\x52","\xc1"),
	HX_HCSTRING("isEven","\x24","\x34","\x83","\x60"),
	HX_HCSTRING("numericComparison","\x76","\xe4","\x9e","\x70"),
	HX_HCSTRING("pointInCoordinates","\xa6","\x48","\x07","\xbf"),
	HX_HCSTRING("pointInFlxRect","\xe1","\xc2","\xa2","\x79"),
	HX_HCSTRING("mouseInFlxRect","\x6c","\xfe","\x8e","\x86"),
	HX_HCSTRING("pointInRectangle","\x1a","\xd9","\x72","\x75"),
	HX_HCSTRING("maxAdd","\xdd","\xdd","\x47","\xbe"),
	HX_HCSTRING("wrapValue","\x47","\xf9","\x2e","\xd5"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("vectorLength","\x09","\x2e","\x37","\x3d"),
	HX_HCSTRING("getDistance","\xeb","\x55","\xed","\x91"),
	HX_HCSTRING("distanceBetween","\x13","\x27","\x25","\xf8"),
	HX_HCSTRING("isDistanceWithin","\x0a","\xf2","\x15","\x71"),
	HX_HCSTRING("distanceToPoint","\x20","\x96","\x85","\x24"),
	HX_HCSTRING("isDistanceToPointWithin","\x61","\x31","\x37","\x36"),
	HX_HCSTRING("distanceToMouse","\xf5","\xf7","\x5a","\x6a"),
	HX_HCSTRING("isDistanceToMouseWithin","\xf6","\x20","\x27","\x45"),
	HX_HCSTRING("distanceToTouch","\x8f","\xf9","\x28","\x72"),
	HX_HCSTRING("isDistanceToTouchWithin","\x10","\x52","\xd5","\xb4"),
	HX_HCSTRING("getDecimals","\x78","\x0d","\x5e","\x38"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("signOf","\xb4","\x1e","\x86","\xb4"),
	HX_HCSTRING("sameSign","\xc3","\xea","\xd6","\x66"),
	::String(null()) };

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxMath","\x20","\x28","\x57","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxMath_obj >;
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

void FlxMath_obj::__boot()
{
	MIN_VALUE= ((Float)5e-324);
	MAX_VALUE= ((Float)1.79e+308);
	SQUARE_ROOT_OF_TWO= ((Float)1.41421356237);
}

} // end namespace flixel
} // end namespace util
