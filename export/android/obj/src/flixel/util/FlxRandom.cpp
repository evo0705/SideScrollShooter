#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace util{

Void FlxRandom_obj::__construct()
{
	return null();
}

//FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new()
{  hx::ObjectPtr< FlxRandom_obj > _result_ = new FlxRandom_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > _result_ = new FlxRandom_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxRandom_obj::getObject_getRandom_T( cpp::ArrayBase Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_EndIndex){
int StartIndex = __o_StartIndex.Default(0);
int EndIndex = __o_EndIndex.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRandom","getObject_getRandom_T",0xe7f9d7b1,"flixel.util.FlxRandom.getObject_getRandom_T","flixel/util/FlxRandom.hx",289,0xd3ba8ba3)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(290)
		Dynamic selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(292)
		bool tmp = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(294)
			bool tmp1 = (StartIndex < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			if ((tmp1)){
				HX_STACK_LINE(296)
				StartIndex = (int)0;
			}
			HX_STACK_LINE(301)
			bool tmp2 = (EndIndex < StartIndex);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			if ((tmp2)){
				HX_STACK_LINE(303)
				int tmp3 = (StartIndex + EndIndex);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				StartIndex = tmp3;
				HX_STACK_LINE(304)
				int tmp4 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				EndIndex = tmp4;
				HX_STACK_LINE(305)
				int tmp5 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				StartIndex = tmp5;
			}
			HX_STACK_LINE(308)
			bool tmp3 = (EndIndex <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(308)
			if ((tmp4)){
				HX_STACK_LINE(308)
				int tmp6 = EndIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(308)
				int tmp7 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(308)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(308)
				tmp5 = (tmp6 > tmp8);
			}
			else{
				HX_STACK_LINE(308)
				tmp5 = true;
			}
			HX_STACK_LINE(308)
			if ((tmp5)){
				HX_STACK_LINE(310)
				int tmp6 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				EndIndex = tmp6;
			}
			HX_STACK_LINE(313)
			int tmp6 = StartIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			int tmp7 = EndIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(313)
			int tmp8 = ::flixel::util::FlxRandom_obj::intRanged(tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(313)
			Dynamic tmp9 = Objects->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(313)
			selected = tmp9;
		}
		HX_STACK_LINE(316)
		Dynamic tmp1 = selected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,getObject_getRandom_T,return )

cpp::ArrayBase FlxRandom_obj::shuffleArray_shuffle_T( cpp::ArrayBase Objects,int HowManyTimes){
	HX_STACK_FRAME("flixel.util.FlxRandom","shuffleArray_shuffle_T",0x26b19da2,"flixel.util.FlxRandom.shuffleArray_shuffle_T","flixel/util/FlxRandom.hx",328,0xd3ba8ba3)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(HowManyTimes,"HowManyTimes")
	HX_STACK_LINE(329)
	int tmp = HowManyTimes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	Float tmp1 = ::Math_obj::max(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	HowManyTimes = tmp2;
	HX_STACK_LINE(331)
	Dynamic tempObject = null();		HX_STACK_VAR(tempObject,"tempObject");
	HX_STACK_LINE(333)
	{
		HX_STACK_LINE(333)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(333)
		while((true)){
			HX_STACK_LINE(333)
			bool tmp3 = (_g < HowManyTimes);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			if ((tmp4)){
				HX_STACK_LINE(333)
				break;
			}
			HX_STACK_LINE(333)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(335)
			int tmp6 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			int tmp7 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			::flixel::util::FlxRandom_obj::_intHelper2 = tmp7;
			HX_STACK_LINE(336)
			int tmp8 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			int tmp9 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(336)
			::flixel::util::FlxRandom_obj::_intHelper3 = tmp9;
			HX_STACK_LINE(337)
			int tmp10 = ::flixel::util::FlxRandom_obj::_intHelper2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			Dynamic tmp11 = Objects->__GetItem(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			tempObject = tmp11;
			HX_STACK_LINE(338)
			int tmp12 = ::flixel::util::FlxRandom_obj::_intHelper2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(338)
			int tmp13 = ::flixel::util::FlxRandom_obj::_intHelper3;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(338)
			Dynamic tmp14 = Objects->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(338)
			hx::IndexRef((Objects).mPtr,tmp12) = tmp14;
			HX_STACK_LINE(339)
			int tmp15 = ::flixel::util::FlxRandom_obj::_intHelper3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(339)
			Dynamic tmp16 = tempObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(339)
			hx::IndexRef((Objects).mPtr,tmp15) = tmp16;
		}
	}
	HX_STACK_LINE(342)
	return Objects;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,shuffleArray_shuffle_T,return )

int FlxRandom_obj::globalSeed;

int FlxRandom_obj::set_globalSeed( int NewSeed){
	HX_STACK_FRAME("flixel.util.FlxRandom","set_globalSeed",0x258e05e4,"flixel.util.FlxRandom.set_globalSeed","flixel/util/FlxRandom.hx",22,0xd3ba8ba3)
	HX_STACK_ARG(NewSeed,"NewSeed")
	HX_STACK_LINE(23)
	bool tmp = (NewSeed < (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(25)
		NewSeed = (int)1;
	}
	HX_STACK_LINE(28)
	bool tmp1 = (NewSeed > (int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(30)
		NewSeed = (int)2147483647;
	}
	HX_STACK_LINE(33)
	::flixel::util::FlxRandom_obj::_internalSeed = NewSeed;
	HX_STACK_LINE(34)
	::flixel::util::FlxRandom_obj::globalSeed = NewSeed;
	HX_STACK_LINE(36)
	int tmp2 = ::flixel::util::FlxRandom_obj::globalSeed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_globalSeed,return )

int FlxRandom_obj::_internalSeed;

int FlxRandom_obj::MULTIPLIER;

int FlxRandom_obj::MODULUS;

int FlxRandom_obj::_intHelper;

int FlxRandom_obj::_intHelper2;

int FlxRandom_obj::_intHelper3;

Float FlxRandom_obj::_floatHelper;

Array< Float > FlxRandom_obj::_arrayFloatHelper;

int FlxRandom_obj::_red;

int FlxRandom_obj::_green;

int FlxRandom_obj::_blue;

int FlxRandom_obj::_alpha;

int FlxRandom_obj::resetGlobalSeed( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","resetGlobalSeed",0xb2826f10,"flixel.util.FlxRandom.resetGlobalSeed","flixel/util/FlxRandom.hx",119,0xd3ba8ba3)
	HX_STACK_LINE(120)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = (tmp * (int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	int tmp3 = ::flixel::util::FlxRandom_obj::set_globalSeed(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,resetGlobalSeed,return )

int FlxRandom_obj::_int( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","int",0xa7c5f55c,"flixel.util.FlxRandom.int","flixel/util/FlxRandom.hx",127,0xd3ba8ba3)
	HX_STACK_LINE(128)
	int tmp = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	int tmp1 = (tmp * (int)48271);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	int tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	int tmp3 = (int(tmp2) & int((int)2147483647));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_int,return )

Float FlxRandom_obj::_float( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","float",0xe1a96349,"flixel.util.FlxRandom.float","flixel/util/FlxRandom.hx",135,0xd3ba8ba3)
	HX_STACK_LINE(136)
	int tmp = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = (tmp * (int)48271);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	int tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	int tmp3 = (int(tmp2) & int((int)2147483647));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	Float tmp5 = (Float(tmp4) / Float((int)2147483647));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,_float,return )

int FlxRandom_obj::intRanged( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,Array< int > Excludes){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(2147483647);
	HX_STACK_FRAME("flixel.util.FlxRandom","intRanged",0x32083683,"flixel.util.FlxRandom.intRanged","flixel/util/FlxRandom.hx",148,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(149)
		bool tmp = (Min == Max);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		if ((tmp)){
			HX_STACK_LINE(151)
			::flixel::util::FlxRandom_obj::_intHelper = Min;
		}
		else{
			HX_STACK_LINE(157)
			bool tmp1 = (Min > Max);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			if ((tmp1)){
				HX_STACK_LINE(159)
				int tmp2 = (Min + Max);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				Min = tmp2;
				HX_STACK_LINE(160)
				int tmp3 = (Min - Max);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(160)
				Max = tmp3;
				HX_STACK_LINE(161)
				int tmp4 = (Min - Max);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(161)
				Min = tmp4;
			}
			HX_STACK_LINE(164)
			bool tmp2 = (Excludes == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			if ((tmp2)){
				HX_STACK_LINE(166)
				int tmp3 = Min;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(166)
				int tmp5 = (tmp4 * (int)48271);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				int tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				int tmp7 = (int(tmp6) & int((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				int tmp8 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				Float tmp9 = (Float(tmp8) / Float((int)2147483647));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				int tmp10 = (Max - Min);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				Float tmp13 = (tmp3 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				::flixel::util::FlxRandom_obj::_intHelper = tmp14;
			}
			else{
				HX_STACK_LINE(170)
				while((true)){
					HX_STACK_LINE(172)
					int tmp3 = Min;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(172)
					int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(172)
					int tmp5 = (tmp4 * (int)48271);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(172)
					int tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(172)
					int tmp7 = (int(tmp6) & int((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(172)
					int tmp8 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(172)
					Float tmp9 = (Float(tmp8) / Float((int)2147483647));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(172)
					int tmp10 = (Max - Min);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(172)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(172)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					Float tmp13 = (tmp3 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(172)
					int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(172)
					::flixel::util::FlxRandom_obj::_intHelper = tmp14;
					HX_STACK_LINE(174)
					int tmp15 = ::flixel::util::FlxRandom_obj::_intHelper;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(174)
					int tmp16 = Excludes->indexOf(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(174)
					bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(174)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					if ((tmp18)){
						HX_STACK_LINE(170)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(178)
		int tmp1 = ::flixel::util::FlxRandom_obj::_intHelper;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,intRanged,return )

Float FlxRandom_obj::floatRanged( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,Array< Float > Excludes){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(1);
	HX_STACK_FRAME("flixel.util.FlxRandom","floatRanged",0x9b1a5430,"flixel.util.FlxRandom.floatRanged","flixel/util/FlxRandom.hx",190,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(191)
		bool tmp = (Min == Max);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(193)
			::flixel::util::FlxRandom_obj::_floatHelper = Min;
		}
		else{
			HX_STACK_LINE(199)
			bool tmp1 = (Min > Max);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			if ((tmp1)){
				HX_STACK_LINE(201)
				Float tmp2 = (Min + Max);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				Min = tmp2;
				HX_STACK_LINE(202)
				Float tmp3 = (Min - Max);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				Max = tmp3;
				HX_STACK_LINE(203)
				Float tmp4 = (Min - Max);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(203)
				Min = tmp4;
			}
			HX_STACK_LINE(206)
			bool tmp2 = (Excludes == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(208)
				Float tmp3 = Min;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				int tmp5 = (tmp4 * (int)48271);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(208)
				int tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(208)
				int tmp7 = (int(tmp6) & int((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(208)
				int tmp8 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				Float tmp9 = (Float(tmp8) / Float((int)2147483647));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(208)
				Float tmp10 = (Max - Min);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(208)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				Float tmp12 = (tmp3 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				::flixel::util::FlxRandom_obj::_floatHelper = tmp12;
			}
			else{
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(214)
					Float tmp3 = Min;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(214)
					int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(214)
					int tmp5 = (tmp4 * (int)48271);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(214)
					int tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					int tmp7 = (int(tmp6) & int((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(214)
					int tmp8 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(214)
					Float tmp9 = (Float(tmp8) / Float((int)2147483647));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(214)
					Float tmp10 = (Max - Min);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(214)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(214)
					Float tmp12 = (tmp3 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(214)
					::flixel::util::FlxRandom_obj::_floatHelper = tmp12;
					HX_STACK_LINE(216)
					Float tmp13 = ::flixel::util::FlxRandom_obj::_floatHelper;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					int tmp14 = Excludes->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(216)
					bool tmp15 = (tmp14 >= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(216)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(212)
					if ((tmp16)){
						HX_STACK_LINE(212)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(220)
		Float tmp1 = ::flixel::util::FlxRandom_obj::_floatHelper;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,floatRanged,return )

bool FlxRandom_obj::chanceRoll( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.util.FlxRandom","chanceRoll",0xff9c5ec4,"flixel.util.FlxRandom.chanceRoll","flixel/util/FlxRandom.hx",231,0xd3ba8ba3)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(232)
		Float tmp = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		Float tmp1 = Chance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,chanceRoll,return )

int FlxRandom_obj::sign( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.util.FlxRandom","sign",0x2c090730,"flixel.util.FlxRandom.sign","flixel/util/FlxRandom.hx",242,0xd3ba8ba3)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(243)
		Float tmp = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		Float tmp1 = Chance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		if ((tmp2)){
			HX_STACK_LINE(243)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(243)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(243)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::weightedPick( Array< Float > WeightsArray){
	HX_STACK_FRAME("flixel.util.FlxRandom","weightedPick",0x0331864b,"flixel.util.FlxRandom.weightedPick","flixel/util/FlxRandom.hx",254,0xd3ba8ba3)
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_LINE(255)
	::flixel::util::FlxRandom_obj::_floatHelper = (int)0;
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			bool tmp = (_g < WeightsArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(257)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(257)
			if ((tmp1)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(257)
			Float tmp2 = WeightsArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			Float i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(257)
			++(_g);
			HX_STACK_LINE(259)
			hx::AddEq(::flixel::util::FlxRandom_obj::_floatHelper,i);
		}
	}
	HX_STACK_LINE(262)
	Float tmp = ::flixel::util::FlxRandom_obj::_floatHelper;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	Float tmp1 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	::flixel::util::FlxRandom_obj::_floatHelper = tmp1;
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(264)
		int _g = WeightsArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(264)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(264)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			if ((tmp3)){
				HX_STACK_LINE(264)
				break;
			}
			HX_STACK_LINE(264)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(264)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(266)
			Float tmp5 = ::flixel::util::FlxRandom_obj::_floatHelper;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			Float tmp6 = WeightsArray->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			if ((tmp7)){
				HX_STACK_LINE(268)
				::flixel::util::FlxRandom_obj::_intHelper = i;
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(272)
			Float tmp8 = WeightsArray->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(272)
			hx::SubEq(::flixel::util::FlxRandom_obj::_floatHelper,tmp8);
		}
	}
	HX_STACK_LINE(275)
	int tmp2 = ::flixel::util::FlxRandom_obj::_intHelper;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,weightedPick,return )

int FlxRandom_obj::color( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha,hx::Null< bool >  __o_GreyScale){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
bool GreyScale = __o_GreyScale.Default(false);
	HX_STACK_FRAME("flixel.util.FlxRandom","color",0x296f0f10,"flixel.util.FlxRandom.color","flixel/util/FlxRandom.hx",403,0xd3ba8ba3)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(GreyScale,"GreyScale")
{
		HX_STACK_LINE(404)
		bool tmp = (Min < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		if ((tmp)){
			HX_STACK_LINE(406)
			Min = (int)0;
		}
		HX_STACK_LINE(409)
		bool tmp1 = (Min > (int)255);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		if ((tmp1)){
			HX_STACK_LINE(411)
			Min = (int)255;
		}
		HX_STACK_LINE(414)
		bool tmp2 = (Max < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		if ((tmp2)){
			HX_STACK_LINE(416)
			Max = (int)0;
		}
		HX_STACK_LINE(419)
		bool tmp3 = (Max > (int)255);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		if ((tmp3)){
			HX_STACK_LINE(421)
			Max = (int)255;
		}
		HX_STACK_LINE(424)
		bool tmp4 = (Alpha < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(424)
		if ((tmp4)){
			HX_STACK_LINE(426)
			Alpha = (int)0;
		}
		HX_STACK_LINE(429)
		bool tmp5 = (Alpha > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(429)
		if ((tmp5)){
			HX_STACK_LINE(431)
			Alpha = (int)255;
		}
		HX_STACK_LINE(436)
		bool tmp6 = (Max < Min);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		if ((tmp6)){
			HX_STACK_LINE(438)
			int tmp7 = (Min + Max);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			Min = tmp7;
			HX_STACK_LINE(439)
			int tmp8 = (Min - Max);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(439)
			Max = tmp8;
			HX_STACK_LINE(440)
			int tmp9 = (Min - Max);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(440)
			Min = tmp9;
		}
		HX_STACK_LINE(443)
		int tmp7 = Min;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		int tmp8 = Max;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(443)
		int tmp9 = ::flixel::util::FlxRandom_obj::intRanged(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(443)
		::flixel::util::FlxRandom_obj::_red = tmp9;
		HX_STACK_LINE(444)
		bool tmp10 = GreyScale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(444)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(444)
		if ((tmp10)){
			HX_STACK_LINE(444)
			tmp11 = ::flixel::util::FlxRandom_obj::_red;
		}
		else{
			HX_STACK_LINE(444)
			int tmp12 = Min;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(444)
			int tmp13 = Max;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(444)
			tmp11 = ::flixel::util::FlxRandom_obj::intRanged(tmp12,tmp13,null());
		}
		HX_STACK_LINE(444)
		::flixel::util::FlxRandom_obj::_green = tmp11;
		HX_STACK_LINE(445)
		bool tmp12 = GreyScale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(445)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(445)
		if ((tmp12)){
			HX_STACK_LINE(445)
			tmp13 = ::flixel::util::FlxRandom_obj::_red;
		}
		else{
			HX_STACK_LINE(445)
			int tmp14 = Min;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(445)
			int tmp15 = Max;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(445)
			tmp13 = ::flixel::util::FlxRandom_obj::intRanged(tmp14,tmp15,null());
		}
		HX_STACK_LINE(445)
		::flixel::util::FlxRandom_obj::_blue = tmp13;
		HX_STACK_LINE(447)
		bool tmp14 = (Alpha > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(447)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(447)
		if ((tmp14)){
			HX_STACK_LINE(447)
			tmp15 = Alpha;
		}
		else{
			HX_STACK_LINE(447)
			tmp15 = (Alpha * (int)255);
		}
		HX_STACK_LINE(447)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(447)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(447)
		int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(447)
		int tmp19 = ::flixel::util::FlxRandom_obj::_red;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(447)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(447)
		int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(447)
		int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(447)
		int tmp23 = ::flixel::util::FlxRandom_obj::_green;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(447)
		int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(447)
		int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(447)
		int tmp26 = (int(tmp22) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(447)
		int tmp27 = ::flixel::util::FlxRandom_obj::_blue;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(447)
		int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(447)
		int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(447)
		return tmp29;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,color,return )

int FlxRandom_obj::colorExt( hx::Null< int >  __o_RedMinimum,hx::Null< int >  __o_RedMaximum,hx::Null< int >  __o_GreenMinimum,hx::Null< int >  __o_GreenMaximum,hx::Null< int >  __o_BlueMinimum,hx::Null< int >  __o_BlueMaximum,hx::Null< int >  __o_AlphaMinimum,hx::Null< int >  __o_AlphaMaximum){
int RedMinimum = __o_RedMinimum.Default(0);
int RedMaximum = __o_RedMaximum.Default(255);
int GreenMinimum = __o_GreenMinimum.Default(0);
int GreenMaximum = __o_GreenMaximum.Default(255);
int BlueMinimum = __o_BlueMinimum.Default(0);
int BlueMaximum = __o_BlueMaximum.Default(255);
int AlphaMinimum = __o_AlphaMinimum.Default(-1);
int AlphaMaximum = __o_AlphaMaximum.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxRandom","colorExt",0x1aec7f71,"flixel.util.FlxRandom.colorExt","flixel/util/FlxRandom.hx",464,0xd3ba8ba3)
	HX_STACK_ARG(RedMinimum,"RedMinimum")
	HX_STACK_ARG(RedMaximum,"RedMaximum")
	HX_STACK_ARG(GreenMinimum,"GreenMinimum")
	HX_STACK_ARG(GreenMaximum,"GreenMaximum")
	HX_STACK_ARG(BlueMinimum,"BlueMinimum")
	HX_STACK_ARG(BlueMaximum,"BlueMaximum")
	HX_STACK_ARG(AlphaMinimum,"AlphaMinimum")
	HX_STACK_ARG(AlphaMaximum,"AlphaMaximum")
{
		HX_STACK_LINE(465)
		bool tmp = (RedMinimum < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		if ((tmp)){
			HX_STACK_LINE(465)
			RedMinimum = (int)0;
		}
		HX_STACK_LINE(466)
		bool tmp1 = (RedMinimum > (int)255);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		if ((tmp1)){
			HX_STACK_LINE(466)
			RedMinimum = (int)255;
		}
		HX_STACK_LINE(467)
		bool tmp2 = (RedMaximum < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		if ((tmp2)){
			HX_STACK_LINE(467)
			RedMaximum = (int)0;
		}
		HX_STACK_LINE(468)
		bool tmp3 = (RedMaximum > (int)255);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		if ((tmp3)){
			HX_STACK_LINE(468)
			RedMaximum = (int)255;
		}
		HX_STACK_LINE(469)
		bool tmp4 = (GreenMinimum < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		if ((tmp4)){
			HX_STACK_LINE(469)
			GreenMinimum = (int)0;
		}
		HX_STACK_LINE(470)
		bool tmp5 = (GreenMinimum > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		if ((tmp5)){
			HX_STACK_LINE(470)
			GreenMinimum = (int)255;
		}
		HX_STACK_LINE(471)
		bool tmp6 = (GreenMaximum < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		if ((tmp6)){
			HX_STACK_LINE(471)
			GreenMaximum = (int)0;
		}
		HX_STACK_LINE(472)
		bool tmp7 = (GreenMaximum > (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(472)
		if ((tmp7)){
			HX_STACK_LINE(472)
			GreenMaximum = (int)255;
		}
		HX_STACK_LINE(473)
		bool tmp8 = (BlueMinimum < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(473)
		if ((tmp8)){
			HX_STACK_LINE(473)
			BlueMinimum = (int)0;
		}
		HX_STACK_LINE(474)
		bool tmp9 = (BlueMinimum > (int)255);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(474)
		if ((tmp9)){
			HX_STACK_LINE(474)
			BlueMinimum = (int)255;
		}
		HX_STACK_LINE(475)
		bool tmp10 = (BlueMaximum < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(475)
		if ((tmp10)){
			HX_STACK_LINE(475)
			BlueMaximum = (int)0;
		}
		HX_STACK_LINE(476)
		bool tmp11 = (BlueMaximum > (int)255);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(476)
		if ((tmp11)){
			HX_STACK_LINE(476)
			BlueMaximum = (int)255;
		}
		HX_STACK_LINE(477)
		bool tmp12 = (AlphaMinimum == (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(477)
		if ((tmp12)){
			HX_STACK_LINE(477)
			AlphaMinimum = (int)255;
		}
		HX_STACK_LINE(478)
		bool tmp13 = (AlphaMaximum == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(478)
		if ((tmp13)){
			HX_STACK_LINE(478)
			AlphaMaximum = (int)255;
		}
		HX_STACK_LINE(479)
		bool tmp14 = (AlphaMinimum < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(479)
		if ((tmp14)){
			HX_STACK_LINE(479)
			AlphaMinimum = (int)0;
		}
		HX_STACK_LINE(480)
		bool tmp15 = (AlphaMinimum > (int)255);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(480)
		if ((tmp15)){
			HX_STACK_LINE(480)
			AlphaMinimum = (int)255;
		}
		HX_STACK_LINE(481)
		bool tmp16 = (AlphaMaximum < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(481)
		if ((tmp16)){
			HX_STACK_LINE(481)
			AlphaMaximum = (int)0;
		}
		HX_STACK_LINE(482)
		bool tmp17 = (AlphaMaximum > (int)255);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(482)
		if ((tmp17)){
			HX_STACK_LINE(482)
			AlphaMaximum = (int)255;
		}
		HX_STACK_LINE(484)
		int tmp18 = RedMinimum;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(484)
		int tmp19 = RedMaximum;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(484)
		int tmp20 = ::flixel::util::FlxRandom_obj::intRanged(tmp18,tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(484)
		::flixel::util::FlxRandom_obj::_red = tmp20;
		HX_STACK_LINE(485)
		int tmp21 = GreenMinimum;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		int tmp22 = GreenMaximum;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		::flixel::util::FlxRandom_obj::_green = tmp23;
		HX_STACK_LINE(486)
		int tmp24 = BlueMinimum;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(486)
		int tmp25 = BlueMaximum;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(486)
		int tmp26 = ::flixel::util::FlxRandom_obj::intRanged(tmp24,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(486)
		::flixel::util::FlxRandom_obj::_blue = tmp26;
		HX_STACK_LINE(487)
		int tmp27 = AlphaMinimum;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(487)
		int tmp28 = AlphaMaximum;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(487)
		int tmp29 = ::flixel::util::FlxRandom_obj::intRanged(tmp27,tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(487)
		::flixel::util::FlxRandom_obj::_alpha = tmp29;
		HX_STACK_LINE(489)
		int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			int tmp31 = ::flixel::util::FlxRandom_obj::_alpha;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(489)
			Float Alpha = tmp31;		HX_STACK_VAR(Alpha,"Alpha");
			HX_STACK_LINE(489)
			bool tmp32 = (Alpha > (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(489)
			Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(489)
			if ((tmp32)){
				HX_STACK_LINE(489)
				tmp33 = Alpha;
			}
			else{
				HX_STACK_LINE(489)
				tmp33 = (Alpha * (int)255);
			}
			HX_STACK_LINE(489)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(489)
			int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(489)
			int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(489)
			int tmp37 = ::flixel::util::FlxRandom_obj::_red;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(489)
			int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(489)
			int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(489)
			int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(489)
			int tmp41 = ::flixel::util::FlxRandom_obj::_green;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(489)
			int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(489)
			int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(489)
			int tmp44 = (int(tmp40) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(489)
			int tmp45 = ::flixel::util::FlxRandom_obj::_blue;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(489)
			int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(489)
			tmp30 = (int(tmp44) | int(tmp46));
		}
		HX_STACK_LINE(489)
		return tmp30;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxRandom_obj,colorExt,return )

int FlxRandom_obj::generate( ){
	HX_STACK_FRAME("flixel.util.FlxRandom","generate",0x6aa9cba8,"flixel.util.FlxRandom.generate","flixel/util/FlxRandom.hx",499,0xd3ba8ba3)
	HX_STACK_LINE(500)
	int tmp = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	int tmp1 = (tmp * (int)48271);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	int tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	int tmp3 = (int(tmp2) & int((int)2147483647));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(500)
	int tmp4 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,generate,return )


FlxRandom_obj::FlxRandom_obj()
{
}

bool FlxRandom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _int_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { outValue = _red; return true;  }
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { outValue = _blue; return true;  }
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { outValue = _green; return true;  }
		if (HX_FIELD_EQ(inName,"_alpha") ) { outValue = _alpha; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorExt") ) { outValue = colorExt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generate") ) { outValue = generate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intRanged") ) { outValue = intRanged_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"globalSeed") ) { outValue = globalSeed; return true;  }
		if (HX_FIELD_EQ(inName,"_intHelper") ) { outValue = _intHelper; return true;  }
		if (HX_FIELD_EQ(inName,"chanceRoll") ) { outValue = chanceRoll_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_intHelper2") ) { outValue = _intHelper2; return true;  }
		if (HX_FIELD_EQ(inName,"_intHelper3") ) { outValue = _intHelper3; return true;  }
		if (HX_FIELD_EQ(inName,"floatRanged") ) { outValue = floatRanged_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_floatHelper") ) { outValue = _floatHelper; return true;  }
		if (HX_FIELD_EQ(inName,"weightedPick") ) { outValue = weightedPick_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_internalSeed") ) { outValue = _internalSeed; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_globalSeed") ) { outValue = set_globalSeed_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resetGlobalSeed") ) { outValue = resetGlobalSeed_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { outValue = _arrayFloatHelper; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getObject_getRandom_T") ) { outValue = getObject_getRandom_T_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"shuffleArray_shuffle_T") ) { outValue = shuffleArray_shuffle_T_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxRandom_obj::globalSeed,HX_HCSTRING("globalSeed","\x74","\xd0","\xf3","\x42")},
	{hx::fsInt,(void *) &FlxRandom_obj::_internalSeed,HX_HCSTRING("_internalSeed","\x2d","\x8e","\x3f","\x1a")},
	{hx::fsInt,(void *) &FlxRandom_obj::MULTIPLIER,HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3")},
	{hx::fsInt,(void *) &FlxRandom_obj::MODULUS,HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77")},
	{hx::fsInt,(void *) &FlxRandom_obj::_intHelper,HX_HCSTRING("_intHelper","\x7e","\x57","\xf0","\x84")},
	{hx::fsInt,(void *) &FlxRandom_obj::_intHelper2,HX_HCSTRING("_intHelper2","\xf4","\x36","\x5c","\xcd")},
	{hx::fsInt,(void *) &FlxRandom_obj::_intHelper3,HX_HCSTRING("_intHelper3","\xf5","\x36","\x5c","\xcd")},
	{hx::fsFloat,(void *) &FlxRandom_obj::_floatHelper,HX_HCSTRING("_floatHelper","\x2b","\x82","\x79","\x11")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxRandom_obj::_arrayFloatHelper,HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c")},
	{hx::fsInt,(void *) &FlxRandom_obj::_red,HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f")},
	{hx::fsInt,(void *) &FlxRandom_obj::_green,HX_HCSTRING("_green","\x04","\x56","\xd4","\x95")},
	{hx::fsInt,(void *) &FlxRandom_obj::_blue,HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4")},
	{hx::fsInt,(void *) &FlxRandom_obj::_alpha,HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_internalSeed,"_internalSeed");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper,"_intHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper2,"_intHelper2");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_intHelper3,"_intHelper3");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_floatHelper,"_floatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_red,"_red");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_green,"_green");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_blue,"_blue");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_alpha,"_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::globalSeed,"globalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_internalSeed,"_internalSeed");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper,"_intHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper2,"_intHelper2");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_intHelper3,"_intHelper3");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_floatHelper,"_floatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_red,"_red");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_green,"_green");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_blue,"_blue");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_alpha,"_alpha");
};

#endif

hx::Class FlxRandom_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getObject_getRandom_T","\x04","\x50","\x58","\x3e"),
	HX_HCSTRING("shuffleArray_shuffle_T","\xef","\x6d","\xfc","\x62"),
	HX_HCSTRING("globalSeed","\x74","\xd0","\xf3","\x42"),
	HX_HCSTRING("set_globalSeed","\x31","\x41","\x09","\xd9"),
	HX_HCSTRING("_internalSeed","\x2d","\x8e","\x3f","\x1a"),
	HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3"),
	HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77"),
	HX_HCSTRING("_intHelper","\x7e","\x57","\xf0","\x84"),
	HX_HCSTRING("_intHelper2","\xf4","\x36","\x5c","\xcd"),
	HX_HCSTRING("_intHelper3","\xf5","\x36","\x5c","\xcd"),
	HX_HCSTRING("_floatHelper","\x2b","\x82","\x79","\x11"),
	HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c"),
	HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"),
	HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"),
	HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"),
	HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"),
	HX_HCSTRING("resetGlobalSeed","\x23","\x17","\xdb","\x0a"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("intRanged","\x56","\xbe","\x90","\xdc"),
	HX_HCSTRING("floatRanged","\xc3","\xb6","\xb2","\x5e"),
	HX_HCSTRING("chanceRoll","\x91","\xaf","\x8a","\x8c"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("weightedPick","\x58","\x64","\xef","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("colorExt","\xfe","\x12","\xe5","\x89"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	::String(null()) };

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxRandom","\x5b","\x4e","\x58","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRandom_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxRandom_obj >;
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

void FlxRandom_obj::__boot()
{
	globalSeed= (int)1;
	_internalSeed= (int)1;
	MULTIPLIER= (int)48271;
	MODULUS= (int)2147483647;
	_intHelper= (int)0;
	_intHelper2= (int)0;
	_intHelper3= (int)0;
	_floatHelper= ((Float)0);
	_arrayFloatHelper= null();
	_red= (int)0;
	_green= (int)0;
	_blue= (int)0;
	_alpha= (int)0;
}

} // end namespace flixel
} // end namespace util
