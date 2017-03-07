#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
namespace flixel{
namespace tweens{

Void FlxEase_obj::__construct()
{
	return null();
}

//FlxEase_obj::~FlxEase_obj() { }

Dynamic FlxEase_obj::__CreateEmpty() { return  new FlxEase_obj; }
hx::ObjectPtr< FlxEase_obj > FlxEase_obj::__new()
{  hx::ObjectPtr< FlxEase_obj > _result_ = new FlxEase_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxEase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEase_obj > _result_ = new FlxEase_obj();
	_result_->__construct();
	return _result_;}

Float FlxEase_obj::PI2;

Float FlxEase_obj::EL;

Float FlxEase_obj::B1;

Float FlxEase_obj::B2;

Float FlxEase_obj::B3;

Float FlxEase_obj::B4;

Float FlxEase_obj::B5;

Float FlxEase_obj::B6;

Float FlxEase_obj::ELASTIC_AMPLITUDE;

Float FlxEase_obj::ELASTIC_PERIOD;

Float FlxEase_obj::quadIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadIn",0xcb7d584e,"flixel.tweens.FlxEase.quadIn","flixel/tweens/FlxEase.hx",34,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(35)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadIn,return )

Float FlxEase_obj::quadOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadOut",0x42348005,"flixel.tweens.FlxEase.quadOut","flixel/tweens/FlxEase.hx",39,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(40)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Float tmp2 = (t - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadOut,return )

Float FlxEase_obj::quadInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quadInOut",0x1f34a4e0,"flixel.tweens.FlxEase.quadInOut","flixel/tweens/FlxEase.hx",44,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(45)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		tmp1 = (tmp2 * (int)2);
	}
	else{
		HX_STACK_LINE(45)
		Float tmp2 = --(t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		Float tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		tmp1 = ((int)1 - tmp5);
	}
	HX_STACK_LINE(45)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadInOut,return )

Float FlxEase_obj::cubeIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeIn",0x332843fc,"flixel.tweens.FlxEase.cubeIn","flixel/tweens/FlxEase.hx",49,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(50)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeIn,return )

Float FlxEase_obj::cubeOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeOut",0x9017cc97,"flixel.tweens.FlxEase.cubeOut","flixel/tweens/FlxEase.hx",54,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(55)
	Float tmp = --(t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float tmp5 = ((int)1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeOut,return )

Float FlxEase_obj::cubeInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","cubeInOut",0x25f1b9f2,"flixel.tweens.FlxEase.cubeInOut","flixel/tweens/FlxEase.hx",59,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(60)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	if ((tmp)){
		HX_STACK_LINE(60)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		tmp1 = (tmp4 * (int)4);
	}
	else{
		HX_STACK_LINE(60)
		Float tmp2 = --(t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		Float tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		tmp1 = ((int)1 + tmp7);
	}
	HX_STACK_LINE(60)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeInOut,return )

Float FlxEase_obj::quartIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartIn",0x4b9169c2,"flixel.tweens.FlxEase.quartIn","flixel/tweens/FlxEase.hx",64,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(65)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartIn,return )

Float FlxEase_obj::quartOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartOut",0xd3afb411,"flixel.tweens.FlxEase.quartOut","flixel/tweens/FlxEase.hx",69,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(70)
	Float tmp = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartOut,return )

Float FlxEase_obj::quartInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quartInOut",0x6cedf3ec,"flixel.tweens.FlxEase.quartInOut","flixel/tweens/FlxEase.hx",74,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(75)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	if ((tmp)){
		HX_STACK_LINE(75)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		tmp1 = (tmp6 * (int)8);
	}
	else{
		HX_STACK_LINE(75)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		Float tmp3 = (tmp2 - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Float tmp4 = t = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(75)
		tmp1 = (tmp12 + ((Float).5));
	}
	HX_STACK_LINE(75)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartInOut,return )

Float FlxEase_obj::quintIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintIn",0xe421334e,"flixel.tweens.FlxEase.quintIn","flixel/tweens/FlxEase.hx",79,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(80)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintIn,return )

Float FlxEase_obj::quintOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintOut",0xb8f04505,"flixel.tweens.FlxEase.quintOut","flixel/tweens/FlxEase.hx",84,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(85)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	Float tmp1 = t = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(85)
	Float tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(85)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintOut,return )

Float FlxEase_obj::quintInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","quintInOut",0x902ba9e0,"flixel.tweens.FlxEase.quintInOut","flixel/tweens/FlxEase.hx",89,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(90)
	Float tmp = hx::MultEq(t,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(90)
		Float tmp3 = (t * t);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		tmp2 = (Float(tmp9) / Float((int)2));
	}
	else{
		HX_STACK_LINE(90)
		Float tmp3 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(90)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(90)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(90)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(90)
		Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(90)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(90)
		Float tmp12 = (tmp11 + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		tmp2 = (Float(tmp12) / Float((int)2));
	}
	HX_STACK_LINE(90)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintInOut,return )

Float FlxEase_obj::sineIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineIn",0xb7fda354,"flixel.tweens.FlxEase.sineIn","flixel/tweens/FlxEase.hx",94,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(95)
	Float tmp = ::flixel::tweens::FlxEase_obj::PI2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineIn,return )

Float FlxEase_obj::sineOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineOut",0x45f5da3f,"flixel.tweens.FlxEase.sineOut","flixel/tweens/FlxEase.hx",99,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(100)
	Float tmp = ::flixel::tweens::FlxEase_obj::PI2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineOut,return )

Float FlxEase_obj::sineInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","sineInOut",0x99ac819a,"flixel.tweens.FlxEase.sineInOut","flixel/tweens/FlxEase.hx",104,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(105)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	Float tmp6 = (tmp5 + ((Float).5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineInOut,return )

Float FlxEase_obj::bounceIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceIn",0x26970bcf,"flixel.tweens.FlxEase.bounceIn","flixel/tweens/FlxEase.hx",109,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(110)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	t = tmp;
	HX_STACK_LINE(111)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	Float tmp2 = ::flixel::tweens::FlxEase_obj::B1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	if ((tmp3)){
		HX_STACK_LINE(111)
		Float tmp4 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		return tmp7;
	}
	HX_STACK_LINE(112)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	Float tmp5 = ::flixel::tweens::FlxEase_obj::B2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	if ((tmp6)){
		HX_STACK_LINE(112)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		Float tmp8 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		Float tmp10 = (((Float)7.5625) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		Float tmp12 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		Float tmp15 = (tmp14 + ((Float).75));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(112)
		Float tmp16 = ((int)1 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(112)
		return tmp16;
	}
	HX_STACK_LINE(113)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	Float tmp8 = ::flixel::tweens::FlxEase_obj::B4;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	if ((tmp9)){
		HX_STACK_LINE(113)
		Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		Float tmp11 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(113)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(113)
		Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(113)
		Float tmp15 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(113)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(113)
		Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		Float tmp18 = (tmp17 + ((Float).9375));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(113)
		Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(113)
		return tmp19;
	}
	HX_STACK_LINE(114)
	Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(114)
	Float tmp11 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(114)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(114)
	Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(114)
	Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(114)
	Float tmp15 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(114)
	Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(114)
	Float tmp17 = (tmp13 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(114)
	Float tmp18 = (tmp17 + ((Float).984375));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(114)
	Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(114)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceIn,return )

Float FlxEase_obj::bounceOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceOut",0x9d97dd64,"flixel.tweens.FlxEase.bounceOut","flixel/tweens/FlxEase.hx",118,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(119)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	Float tmp1 = ::flixel::tweens::FlxEase_obj::B1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	if ((tmp2)){
		HX_STACK_LINE(119)
		Float tmp3 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		return tmp5;
	}
	HX_STACK_LINE(120)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = ::flixel::tweens::FlxEase_obj::B2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	if ((tmp5)){
		HX_STACK_LINE(120)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		Float tmp7 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		Float tmp9 = (((Float)7.5625) * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(120)
		Float tmp11 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(120)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(120)
		Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(120)
		Float tmp14 = (tmp13 + ((Float).75));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(120)
		return tmp14;
	}
	HX_STACK_LINE(121)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	Float tmp7 = ::flixel::tweens::FlxEase_obj::B4;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(121)
	bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	if ((tmp8)){
		HX_STACK_LINE(121)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		Float tmp10 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(121)
		Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(121)
		Float tmp14 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(121)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(121)
		Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(121)
		Float tmp17 = (tmp16 + ((Float).9375));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(121)
		return tmp17;
	}
	HX_STACK_LINE(122)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(122)
	Float tmp10 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(122)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(122)
	Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(122)
	Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(122)
	Float tmp14 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(122)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(122)
	Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(122)
	Float tmp17 = (tmp16 + ((Float).984375));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(122)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceOut,return )

Float FlxEase_obj::bounceInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","bounceInOut",0xa03157ff,"flixel.tweens.FlxEase.bounceInOut","flixel/tweens/FlxEase.hx",126,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(127)
	bool tmp = (t < ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	if ((tmp)){
		HX_STACK_LINE(129)
		Float tmp1 = (t * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		Float tmp2 = ((int)1 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		t = tmp2;
		HX_STACK_LINE(130)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Float tmp4 = ::flixel::tweens::FlxEase_obj::B1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		if ((tmp5)){
			HX_STACK_LINE(130)
			Float tmp6 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(130)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(130)
			Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			return tmp10;
		}
		HX_STACK_LINE(131)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		Float tmp7 = ::flixel::tweens::FlxEase_obj::B2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		if ((tmp8)){
			HX_STACK_LINE(131)
			Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			Float tmp10 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			Float tmp14 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(131)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			Float tmp17 = (tmp16 + ((Float).75));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			Float tmp18 = ((int)1 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			return tmp19;
		}
		HX_STACK_LINE(132)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		Float tmp10 = ::flixel::tweens::FlxEase_obj::B4;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(132)
		if ((tmp11)){
			HX_STACK_LINE(132)
			Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			Float tmp13 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(132)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(132)
			Float tmp17 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(132)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(132)
			Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(132)
			Float tmp20 = (tmp19 + ((Float).9375));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(132)
			Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			return tmp22;
		}
		HX_STACK_LINE(133)
		Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(133)
		Float tmp13 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(133)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(133)
		Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(133)
		Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(133)
		Float tmp17 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(133)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(133)
		Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(133)
		Float tmp20 = (tmp19 + ((Float).984375));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(133)
		Float tmp21 = ((int)1 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(133)
		Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(133)
		return tmp22;
	}
	HX_STACK_LINE(135)
	Float tmp1 = (t * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	Float tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	t = tmp2;
	HX_STACK_LINE(136)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	Float tmp4 = ::flixel::tweens::FlxEase_obj::B1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	if ((tmp5)){
		HX_STACK_LINE(136)
		Float tmp6 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		Float tmp10 = (tmp9 + ((Float).5));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(136)
		return tmp10;
	}
	HX_STACK_LINE(137)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	Float tmp7 = ::flixel::tweens::FlxEase_obj::B2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(137)
	if ((tmp8)){
		HX_STACK_LINE(137)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		Float tmp10 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(137)
		Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(137)
		Float tmp14 = ::flixel::tweens::FlxEase_obj::B3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(137)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(137)
		Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(137)
		Float tmp17 = (tmp16 + ((Float).75));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(137)
		Float tmp19 = (tmp18 + ((Float).5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(137)
		return tmp19;
	}
	HX_STACK_LINE(138)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(138)
	Float tmp10 = ::flixel::tweens::FlxEase_obj::B4;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(138)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(138)
	if ((tmp11)){
		HX_STACK_LINE(138)
		Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(138)
		Float tmp13 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(138)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(138)
		Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(138)
		Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(138)
		Float tmp17 = ::flixel::tweens::FlxEase_obj::B5;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(138)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(138)
		Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(138)
		Float tmp20 = (tmp19 + ((Float).9375));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(138)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(138)
		Float tmp22 = (tmp21 + ((Float).5));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(138)
		return tmp22;
	}
	HX_STACK_LINE(139)
	Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(139)
	Float tmp13 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(139)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(139)
	Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(139)
	Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(139)
	Float tmp17 = ::flixel::tweens::FlxEase_obj::B6;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(139)
	Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(139)
	Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(139)
	Float tmp20 = (tmp19 + ((Float).984375));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(139)
	Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(139)
	Float tmp22 = (tmp21 + ((Float).5));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(139)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceInOut,return )

Float FlxEase_obj::circIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circIn",0x54eb335e,"flixel.tweens.FlxEase.circIn","flixel/tweens/FlxEase.hx",143,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(144)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = ((int)1 - tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(144)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circIn,return )

Float FlxEase_obj::circOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circOut",0xf8e652f5,"flixel.tweens.FlxEase.circOut","flixel/tweens/FlxEase.hx",148,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(149)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = (t - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circOut,return )

Float FlxEase_obj::circInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","circInOut",0x443513d0,"flixel.tweens.FlxEase.circInOut","flixel/tweens/FlxEase.hx",153,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(154)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	if ((tmp)){
		HX_STACK_LINE(154)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		Float tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		tmp1 = (Float(tmp6) / Float((int)-2));
	}
	else{
		HX_STACK_LINE(154)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		Float tmp3 = (tmp2 - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		Float tmp4 = (t * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		Float tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		Float tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		tmp1 = (Float(tmp9) / Float((int)2));
	}
	HX_STACK_LINE(154)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circInOut,return )

Float FlxEase_obj::expoIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoIn",0xc35b4d79,"flixel.tweens.FlxEase.expoIn","flixel/tweens/FlxEase.hx",158,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(159)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	Float tmp1 = ((int)10 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	Float tmp2 = ::Math_obj::pow((int)2,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoIn,return )

Float FlxEase_obj::expoOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoOut",0x2c8d107a,"flixel.tweens.FlxEase.expoOut","flixel/tweens/FlxEase.hx",163,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(164)
	int tmp = (int)-10;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	Float tmp3 = ::Math_obj::pow((int)2,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoOut,return )

Float FlxEase_obj::expoInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","expoInOut",0xbd29fc95,"flixel.tweens.FlxEase.expoInOut","flixel/tweens/FlxEase.hx",168,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(169)
	bool tmp = (t < ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	if ((tmp)){
		HX_STACK_LINE(169)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Float tmp4 = ((int)10 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		Float tmp5 = ::Math_obj::pow((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		tmp1 = (Float(tmp5) / Float((int)2));
	}
	else{
		HX_STACK_LINE(169)
		int tmp2 = (int)-10;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		Float tmp3 = (t * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		Float tmp6 = ::Math_obj::pow((int)2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		Float tmp8 = (tmp7 + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		tmp1 = (Float(tmp8) / Float((int)2));
	}
	HX_STACK_LINE(169)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoInOut,return )

Float FlxEase_obj::backIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backIn",0x497711ae,"flixel.tweens.FlxEase.backIn","flixel/tweens/FlxEase.hx",173,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(174)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	Float tmp1 = (((Float)2.70158) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	Float tmp2 = (tmp1 - ((Float)1.70158));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backIn,return )

Float FlxEase_obj::backOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backOut",0xfebcfaa5,"flixel.tweens.FlxEase.backOut","flixel/tweens/FlxEase.hx",178,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(179)
	Float tmp = --(t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	Float tmp3 = ((Float)-2.70158);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	Float tmp6 = (tmp5 - ((Float)1.70158));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(179)
	Float tmp7 = (tmp2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(179)
	Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(179)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backOut,return )

Float FlxEase_obj::backInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","backInOut",0x6ac90780,"flixel.tweens.FlxEase.backInOut","flixel/tweens/FlxEase.hx",183,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(184)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(185)
	bool tmp = (t < (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	if ((tmp)){
		HX_STACK_LINE(185)
		Float tmp1 = (t * t);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		Float tmp2 = (((Float)2.70158) * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		Float tmp3 = (tmp2 - ((Float)1.70158));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		return tmp5;
	}
	HX_STACK_LINE(186)
	(t)--;
	HX_STACK_LINE(187)
	Float tmp1 = --(t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	Float tmp4 = ((Float)-2.70158);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	Float tmp7 = (tmp6 - ((Float)1.70158));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	Float tmp8 = (tmp3 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(187)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(187)
	Float tmp11 = (tmp10 + ((Float).5));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(187)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backInOut,return )

Float FlxEase_obj::elasticIn( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticIn",0xf7740698,"flixel.tweens.FlxEase.elasticIn","flixel/tweens/FlxEase.hx",191,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(192)
	Float tmp = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Float tmp1 = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	Float tmp2 = ((int)10 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	Float tmp3 = ::Math_obj::pow((int)2,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(192)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(192)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(192)
	Float tmp6 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(192)
	Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(192)
	Float tmp8 = ((int)2 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(192)
	Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(192)
	Float tmp10 = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(192)
	Float tmp11 = (Float((int)1) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(192)
	Float tmp12 = ::Math_obj::asin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(192)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(192)
	Float tmp14 = (tmp5 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(192)
	Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(192)
	Float tmp16 = ((int)2 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(192)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(192)
	Float tmp18 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(192)
	Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(192)
	Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(192)
	Float tmp21 = (tmp4 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(192)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(192)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticIn,return )

Float FlxEase_obj::elasticOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticOut",0x8e16527b,"flixel.tweens.FlxEase.elasticOut","flixel/tweens/FlxEase.hx",196,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(197)
	Float tmp = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	int tmp1 = (int)-10;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	Float tmp4 = ::Math_obj::pow((int)2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	Float tmp5 = (tmp * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(197)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(197)
	Float tmp7 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	Float tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	Float tmp11 = ::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(197)
	Float tmp12 = (Float((int)1) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(197)
	Float tmp13 = ::Math_obj::asin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(197)
	Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(197)
	Float tmp15 = (tmp6 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(197)
	Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(197)
	Float tmp17 = ((int)2 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(197)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(197)
	Float tmp19 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(197)
	Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(197)
	Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(197)
	Float tmp22 = (tmp5 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(197)
	Float tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(197)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticOut,return )

Float FlxEase_obj::elasticInOut( Float t){
	HX_STACK_FRAME("flixel.tweens.FlxEase","elasticInOut",0x850880d6,"flixel.tweens.FlxEase.elasticInOut","flixel/tweens/FlxEase.hx",201,0x71810bf2)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(202)
	bool tmp = (t < ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(204)
		Float tmp1 = ((Float)-0.5);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		Float tmp2 = hx::SubEq(t,((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		Float tmp3 = ((int)10 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		Float tmp4 = ::Math_obj::pow((int)2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		Float tmp6 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(204)
		Float tmp12 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(204)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(204)
		Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(204)
		Float tmp15 = (tmp4 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(204)
		Float tmp16 = (tmp1 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(204)
		return tmp16;
	}
	HX_STACK_LINE(206)
	int tmp1 = (int)-10;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	Float tmp2 = hx::SubEq(t,((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	Float tmp4 = ::Math_obj::pow((int)2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(206)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	Float tmp6 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(206)
	Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(206)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(206)
	Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(206)
	Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(206)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(206)
	Float tmp12 = ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(206)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(206)
	Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(206)
	Float tmp15 = (tmp4 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(206)
	Float tmp16 = (tmp15 * ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(206)
	Float tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(206)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticInOut,return )


FlxEase_obj::FlxEase_obj()
{
}

bool FlxEase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { outValue = EL; return true;  }
		if (HX_FIELD_EQ(inName,"B1") ) { outValue = B1; return true;  }
		if (HX_FIELD_EQ(inName,"B2") ) { outValue = B2; return true;  }
		if (HX_FIELD_EQ(inName,"B3") ) { outValue = B3; return true;  }
		if (HX_FIELD_EQ(inName,"B4") ) { outValue = B4; return true;  }
		if (HX_FIELD_EQ(inName,"B5") ) { outValue = B5; return true;  }
		if (HX_FIELD_EQ(inName,"B6") ) { outValue = B6; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { outValue = PI2; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { outValue = quadIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { outValue = cubeIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineIn") ) { outValue = sineIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circIn") ) { outValue = circIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoIn") ) { outValue = expoIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backIn") ) { outValue = backIn_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { outValue = quadOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { outValue = cubeOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quartIn") ) { outValue = quartIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintIn") ) { outValue = quintIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineOut") ) { outValue = sineOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circOut") ) { outValue = circOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoOut") ) { outValue = expoOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backOut") ) { outValue = backOut_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { outValue = quartOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintOut") ) { outValue = quintOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { outValue = bounceIn_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { outValue = quadInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { outValue = cubeInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { outValue = sineInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { outValue = bounceOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circInOut") ) { outValue = circInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { outValue = expoInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backInOut") ) { outValue = backInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"elasticIn") ) { outValue = elasticIn_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { outValue = quartInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { outValue = quintInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"elasticOut") ) { outValue = elasticOut_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { outValue = bounceInOut_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { outValue = elasticInOut_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { outValue = ELASTIC_PERIOD; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { outValue = ELASTIC_AMPLITUDE; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxEase_obj::PI2,HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::EL,HX_HCSTRING("EL","\x67","\x3c","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B1,HX_HCSTRING("B1","\xaf","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B2,HX_HCSTRING("B2","\xb0","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B3,HX_HCSTRING("B3","\xb1","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B4,HX_HCSTRING("B4","\xb2","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B5,HX_HCSTRING("B5","\xb3","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::B6,HX_HCSTRING("B6","\xb4","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &FlxEase_obj::ELASTIC_AMPLITUDE,HX_HCSTRING("ELASTIC_AMPLITUDE","\xd9","\xea","\x04","\x7e")},
	{hx::fsFloat,(void *) &FlxEase_obj::ELASTIC_PERIOD,HX_HCSTRING("ELASTIC_PERIOD","\x8b","\x99","\x23","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#endif

hx::Class FlxEase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PI2","\x19","\xf4","\x3c","\x00"),
	HX_HCSTRING("EL","\x67","\x3c","\x00","\x00"),
	HX_HCSTRING("B1","\xaf","\x39","\x00","\x00"),
	HX_HCSTRING("B2","\xb0","\x39","\x00","\x00"),
	HX_HCSTRING("B3","\xb1","\x39","\x00","\x00"),
	HX_HCSTRING("B4","\xb2","\x39","\x00","\x00"),
	HX_HCSTRING("B5","\xb3","\x39","\x00","\x00"),
	HX_HCSTRING("B6","\xb4","\x39","\x00","\x00"),
	HX_HCSTRING("ELASTIC_AMPLITUDE","\xd9","\xea","\x04","\x7e"),
	HX_HCSTRING("ELASTIC_PERIOD","\x8b","\x99","\x23","\x3b"),
	HX_HCSTRING("quadIn","\x8c","\x78","\x9f","\xcc"),
	HX_HCSTRING("quadOut","\x07","\x96","\xee","\x3e"),
	HX_HCSTRING("quadInOut","\x62","\xbf","\x21","\x4f"),
	HX_HCSTRING("cubeIn","\x3a","\x64","\x4a","\x34"),
	HX_HCSTRING("cubeOut","\x99","\xe2","\xd1","\x8c"),
	HX_HCSTRING("cubeInOut","\x74","\xd4","\xde","\x55"),
	HX_HCSTRING("quartIn","\xc4","\x7f","\x4b","\x48"),
	HX_HCSTRING("quartOut","\xcf","\xdf","\xc8","\xf9"),
	HX_HCSTRING("quartInOut","\x2a","\x0b","\x78","\x2c"),
	HX_HCSTRING("quintIn","\x50","\x49","\xdb","\xe0"),
	HX_HCSTRING("quintOut","\xc3","\x70","\x09","\xdf"),
	HX_HCSTRING("quintInOut","\x1e","\xc1","\xb5","\x4f"),
	HX_HCSTRING("sineIn","\x92","\xc3","\x1f","\xb9"),
	HX_HCSTRING("sineOut","\x41","\xf0","\xaf","\x42"),
	HX_HCSTRING("sineInOut","\x1c","\x9c","\x99","\xc9"),
	HX_HCSTRING("bounceIn","\x8d","\x37","\xb0","\x4c"),
	HX_HCSTRING("bounceOut","\xe6","\xf7","\x84","\xcd"),
	HX_HCSTRING("bounceInOut","\x01","\x97","\x7b","\x79"),
	HX_HCSTRING("circIn","\x9c","\x53","\x0d","\x56"),
	HX_HCSTRING("circOut","\xf7","\x68","\xa0","\xf5"),
	HX_HCSTRING("circInOut","\x52","\x2e","\x22","\x74"),
	HX_HCSTRING("expoIn","\xb7","\x6d","\x7d","\xc4"),
	HX_HCSTRING("expoOut","\x7c","\x26","\x47","\x29"),
	HX_HCSTRING("expoInOut","\x17","\x17","\x17","\xed"),
	HX_HCSTRING("backIn","\xec","\x31","\x99","\x4a"),
	HX_HCSTRING("backOut","\xa7","\x10","\x77","\xfb"),
	HX_HCSTRING("backInOut","\x02","\x22","\xb6","\x9a"),
	HX_HCSTRING("elasticIn","\x1a","\x21","\x61","\x27"),
	HX_HCSTRING("elasticOut","\xb9","\x69","\xa0","\x4d"),
	HX_HCSTRING("elasticInOut","\x94","\x63","\xb5","\xcc"),
	::String(null()) };

void FlxEase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxEase","\x6c","\x1c","\xe1","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxEase_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxEase_obj >;
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

void FlxEase_obj::__boot()
{
struct _Function_0_1{
	inline static Float Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxEase.hx",11,0x71810bf2)
		{
			HX_STACK_LINE(11)
			Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(11)
			return (Float(tmp) / Float((int)2));
		}
		return null();
	}
};
	PI2= _Function_0_1::Block();
struct _Function_0_2{
	inline static Float Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxEase.hx",12,0x71810bf2)
		{
			HX_STACK_LINE(12)
			Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12)
			Float tmp1 = ((int)2 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			return (Float(tmp1) / Float(((Float).45)));
		}
		return null();
	}
};
	EL= _Function_0_2::Block();
	B1= ((Float)0.36363636363636365);
	B2= ((Float)0.72727272727272729);
	B3= ((Float)0.54545454545454541);
	B4= ((Float)0.90909090909090906);
	B5= ((Float)0.81818181818181823);
	B6= ((Float)0.95454545454545459);
	ELASTIC_AMPLITUDE= ((Float)1);
	ELASTIC_PERIOD= ((Float)0.4);
}

} // end namespace flixel
} // end namespace tweens
