#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace util{

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.util.FlxPoint","new",0xdda8d7ea,"flixel.util.FlxPoint.new","flixel/util/FlxPoint.hx",11,0xb59f5266)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(49)
	this->_inPool = false;
	HX_STACK_LINE(48)
	this->_weak = false;
	HX_STACK_LINE(46)
	this->y = ((Float)0);
	HX_STACK_LINE(45)
	this->x = ((Float)0);
	HX_STACK_LINE(53)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	this->set(tmp,tmp1);
}
;
	return null();
}

//FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > _result_ = new FlxPoint_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > _result_ = new FlxPoint_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxPoint_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxPooled_obj)) return operator ::flixel::interfaces::IFlxPooled_obj *();
	return super::__ToInterface(inType);
}

FlxPoint_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxPoint_obj >(this); }
FlxPoint_obj::operator ::flixel::interfaces::IFlxPooled_obj *()
	{ return new ::flixel::interfaces::IFlxPooled_delegate_< FlxPoint_obj >(this); }
Void FlxPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","put",0xddaa6a59,"flixel.util.FlxPoint.put","flixel/util/FlxPoint.hx",60,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		bool tmp = this->_inPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(63)
			this->_inPool = true;
			HX_STACK_LINE(64)
			this->_weak = false;
			HX_STACK_LINE(65)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			tmp2->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,put,(void))

Void FlxPoint_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","putWeak",0xec9f9371,"flixel.util.FlxPoint.putWeak","flixel/util/FlxPoint.hx",73,0xb59f5266)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		bool tmp = this->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		if ((tmp)){
			HX_STACK_LINE(76)
			this->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,putWeak,(void))

::flixel::util::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","set",0xddaca32c,"flixel.util.FlxPoint.set","flixel/util/FlxPoint.hx",88,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(89)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		this->set_x(tmp);
		HX_STACK_LINE(90)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		this->set_y(tmp1);
		HX_STACK_LINE(91)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

::flixel::util::FlxPoint FlxPoint_obj::add( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","add",0xdd9ef9ab,"flixel.util.FlxPoint.add","flixel/util/FlxPoint.hx",102,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			Float tmp = (_g->x + X);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			_g->set_x(tmp);
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			Float tmp = (_g->y + Y);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			_g->set_y(tmp);
		}
		HX_STACK_LINE(105)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,add,return )

::flixel::util::FlxPoint FlxPoint_obj::addPoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","addPoint",0x9b3e3ea5,"flixel.util.FlxPoint.addPoint","flixel/util/FlxPoint.hx",115,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Float tmp = (_g->x + point->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		Float tmp = (_g->y + point->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		bool tmp = point->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		if ((tmp)){
			HX_STACK_LINE(118)
			point->put();
		}
	}
	HX_STACK_LINE(119)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,addPoint,return )

::flixel::util::FlxPoint FlxPoint_obj::subtract( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","subtract",0x5362d94a,"flixel.util.FlxPoint.subtract","flixel/util/FlxPoint.hx",130,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Float tmp = (_g->x - X);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			_g->set_x(tmp);
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			Float tmp = (_g->y - Y);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			_g->set_y(tmp);
		}
		HX_STACK_LINE(133)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,subtract,return )

::flixel::util::FlxPoint FlxPoint_obj::subtractPoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","subtractPoint",0x8ad05ea6,"flixel.util.FlxPoint.subtractPoint","flixel/util/FlxPoint.hx",143,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		Float tmp = (_g->x - point->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		::flixel::util::FlxPoint _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		Float tmp = (_g->y - point->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		bool tmp = point->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		if ((tmp)){
			HX_STACK_LINE(146)
			point->put();
		}
	}
	HX_STACK_LINE(147)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,subtractPoint,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFrom( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyFrom",0x23b26ff5,"flixel.util.FlxPoint.copyFrom","flixel/util/FlxPoint.hx",157,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(158)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	this->set_x(tmp);
	HX_STACK_LINE(159)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	this->set_y(tmp1);
	HX_STACK_LINE(160)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::util::FlxPoint FlxPoint_obj::copyTo( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyTo",0x2ab3e746,"flixel.util.FlxPoint.copyTo","flixel/util/FlxPoint.hx",170,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(171)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	if ((tmp)){
		HX_STACK_LINE(173)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(173)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(173)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(173)
			point1->_inPool = false;
			HX_STACK_LINE(173)
			tmp1 = point1;
		}
		HX_STACK_LINE(173)
		point = tmp1;
	}
	HX_STACK_LINE(175)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	point->set_x(tmp1);
	HX_STACK_LINE(176)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	point->set_y(tmp2);
	HX_STACK_LINE(177)
	::flixel::util::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFromFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyFromFlash",0x5f443d7b,"flixel.util.FlxPoint.copyFromFlash","flixel/util/FlxPoint.hx",187,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(188)
	Float tmp = FlashPoint->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	this->set_x(tmp);
	HX_STACK_LINE(189)
	Float tmp1 = FlashPoint->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	this->set_y(tmp1);
	HX_STACK_LINE(190)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::openfl::_legacy::geom::Point FlxPoint_obj::copyToFlash( ::openfl::_legacy::geom::Point FlashPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","copyToFlash",0x2f7ba08a,"flixel.util.FlxPoint.copyToFlash","flixel/util/FlxPoint.hx",200,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_LINE(201)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	FlashPoint->x = tmp;
	HX_STACK_LINE(202)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	FlashPoint->y = tmp1;
	HX_STACK_LINE(203)
	::openfl::_legacy::geom::Point tmp2 = FlashPoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_FRAME("flixel.util.FlxPoint","inCoords",0xac545219,"flixel.util.FlxPoint.inCoords","flixel/util/FlxPoint.hx",216,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectX,"RectX")
	HX_STACK_ARG(RectY,"RectY")
	HX_STACK_ARG(RectWidth,"RectWidth")
	HX_STACK_ARG(RectHeight,"RectHeight")
	HX_STACK_LINE(217)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	Float tmp2 = RectX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	Float tmp3 = RectY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	Float tmp4 = RectWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	Float tmp5 = RectHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(217)
	bool tmp6 = ::flixel::util::FlxMath_obj::pointInCoordinates(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(217)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

bool FlxPoint_obj::inFlxRect( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxPoint","inFlxRect",0x8096ec5b,"flixel.util.FlxPoint.inFlxRect","flixel/util/FlxPoint.hx",227,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(228)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	::flixel::util::FlxRect tmp2 = Rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	bool tmp3 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inFlxRect,return )

Float FlxPoint_obj::distanceTo( ::flixel::util::FlxPoint AnotherPoint){
	HX_STACK_FRAME("flixel.util.FlxPoint","distanceTo",0x698831c6,"flixel.util.FlxPoint.distanceTo","flixel/util/FlxPoint.hx",238,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnotherPoint,"AnotherPoint")
	HX_STACK_LINE(239)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		Float tmp2 = AnotherPoint->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(239)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		Float tmp5 = AnotherPoint->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		Float dy = tmp6;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			bool tmp7 = this->_weak;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			if ((tmp7)){
				HX_STACK_LINE(239)
				this->put();
			}
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			bool tmp7 = AnotherPoint->_weak;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			if ((tmp7)){
				HX_STACK_LINE(239)
				AnotherPoint->put();
			}
		}
		HX_STACK_LINE(239)
		Float tmp7 = (dx * dx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		Float tmp8 = (dy * dy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		tmp = ::Math_obj::sqrt(tmp9);
	}
	HX_STACK_LINE(239)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

::flixel::util::FlxPoint FlxPoint_obj::floor( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","floor",0xa4e44fd6,"flixel.util.FlxPoint.floor","flixel/util/FlxPoint.hx",246,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	this->set_x(tmp1);
	HX_STACK_LINE(248)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(248)
	this->set_y(tmp3);
	HX_STACK_LINE(249)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,floor,return )

::flixel::util::FlxPoint FlxPoint_obj::ceil( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","ceil",0x0eceb03b,"flixel.util.FlxPoint.ceil","flixel/util/FlxPoint.hx",256,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	int tmp1 = ::Math_obj::ceil(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	this->set_x(tmp1);
	HX_STACK_LINE(258)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	int tmp3 = ::Math_obj::ceil(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	this->set_y(tmp3);
	HX_STACK_LINE(259)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,ceil,return )

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPoint","destroy",0x13b6c184,"flixel.util.FlxPoint.destroy","flixel/util/FlxPoint.hx",265,0xb59f5266)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

::String FlxPoint_obj::toString( ){
	HX_STACK_FRAME("flixel.util.FlxPoint","toString",0x93c034e2,"flixel.util.FlxPoint.toString","flixel/util/FlxPoint.hx",271,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		::flixel::util::FlxPool tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(273)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(273)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		_this->value = tmp3;
		HX_STACK_LINE(273)
		tmp = _this;
	}
	HX_STACK_LINE(274)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(274)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(274)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(274)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		_this->value = tmp4;
		HX_STACK_LINE(274)
		tmp1 = _this;
	}
	HX_STACK_LINE(272)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.util.FlxPoint","set_x",0x1c7d1965,"flixel.util.FlxPoint.set_x","flixel/util/FlxPoint.hx",281,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(282)
	Float tmp = this->x = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.util.FlxPoint","set_y",0x1c7d1966,"flixel.util.FlxPoint.set_y","flixel/util/FlxPoint.hx",289,0xb59f5266)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(290)
	Float tmp = this->y = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

::flixel::util::FlxPool FlxPoint_obj::_pool;

::flixel::util::FlxPoint FlxPoint_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","get",0xdda38820,"flixel.util.FlxPoint.get","flixel/util/FlxPoint.hx",24,0xb59f5266)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(25)
		::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(26)
		point->_inPool = false;
		HX_STACK_LINE(27)
		::flixel::util::FlxPoint tmp5 = point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,get,return )

::flixel::util::FlxPoint FlxPoint_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxPoint","weak",0x1c06edae,"flixel.util.FlxPoint.weak","flixel/util/FlxPoint.hx",39,0xb59f5266)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(40)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(40)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(40)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			Float tmp3 = X1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			Float tmp4 = Y1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(40)
			point->_inPool = false;
			HX_STACK_LINE(40)
			tmp = point;
		}
		HX_STACK_LINE(40)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::flixel::util::FlxPoint tmp3 = tmp->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::flixel::util::FlxPoint point = tmp3;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_weak = true;
		HX_STACK_LINE(42)
		::flixel::util::FlxPoint tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,weak,return )


FlxPoint_obj::FlxPoint_obj()
{
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFlxRect") ) { return inFlxRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"subtractPoint") ) { return subtractPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPoint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
	}
	return false;
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool >(); return true; }
	}
	return false;
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"));
	outFields->push(HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxPoint_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_weak),HX_HCSTRING("_weak","\x57","\x78","\x06","\x02")},
	{hx::fsBool,(int)offsetof(FlxPoint_obj,_inPool),HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool*/ ,(void *) &FlxPoint_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putWeak","\xe7","\xfe","\x6e","\xfd"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("subtractPoint","\x9c","\xc6","\x66","\x44"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("copyFromFlash","\x71","\xa5","\xda","\x18"),
	HX_HCSTRING("copyToFlash","\x00","\xff","\x24","\x25"),
	HX_HCSTRING("inCoords","\xe3","\xed","\x02","\x51"),
	HX_HCSTRING("inFlxRect","\x51","\xa1","\xb0","\xf4"),
	HX_HCSTRING("distanceTo","\x10","\xd4","\xec","\x8b"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("ceil","\x05","\x1f","\xbd","\x41"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::_pool,"_pool");
};

#endif

hx::Class FlxPoint_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	::String(null()) };

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPoint","\xf8","\x5a","\x58","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPoint_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPoint_obj >;
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

void FlxPoint_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_obj::__new(hx::ClassOf< ::flixel::util::FlxPoint >());
}

} // end namespace flixel
} // end namespace util
