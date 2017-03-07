#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorUtil
#include <flixel/util/FlxColorUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace util{

Void FlxColorUtil_obj::__construct()
{
	return null();
}

//FlxColorUtil_obj::~FlxColorUtil_obj() { }

Dynamic FlxColorUtil_obj::__CreateEmpty() { return  new FlxColorUtil_obj; }
hx::ObjectPtr< FlxColorUtil_obj > FlxColorUtil_obj::__new()
{  hx::ObjectPtr< FlxColorUtil_obj > _result_ = new FlxColorUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxColorUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColorUtil_obj > _result_ = new FlxColorUtil_obj();
	_result_->__construct();
	return _result_;}

int FlxColorUtil_obj::makeFromARGB( hx::Null< Float >  __o_Alpha,int Red,int Green,int Blue){
Float Alpha = __o_Alpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.util.FlxColorUtil","makeFromARGB",0xd89d5325,"flixel.util.FlxColorUtil.makeFromARGB","flixel/util/FlxColorUtil.hx",20,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
{
		HX_STACK_LINE(21)
		bool tmp = (Alpha > (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(21)
			tmp1 = Alpha;
		}
		else{
			HX_STACK_LINE(21)
			tmp1 = (Alpha * (int)255);
		}
		HX_STACK_LINE(21)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		int tmp5 = (int(Red) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		int tmp8 = (int(Green) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(21)
		int tmp10 = (int(tmp7) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(21)
		int tmp11 = (int(Blue) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(21)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(21)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromARGB,return )

int FlxColorUtil_obj::makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.util.FlxColorUtil","makeFromHSBA",0xdd3e8f63,"flixel.util.FlxColorUtil.makeFromHSBA","flixel/util/FlxColorUtil.hx",34,0x18d3ded1)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(35)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(36)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(37)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(39)
		bool tmp = (Saturation == ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(41)
			red = Brightness;
			HX_STACK_LINE(42)
			green = Brightness;
			HX_STACK_LINE(43)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(47)
			bool tmp1 = (Hue == (int)360);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			if ((tmp1)){
				HX_STACK_LINE(49)
				Hue = (int)0;
			}
			HX_STACK_LINE(52)
			Float tmp2 = (Float(Hue) / Float((int)60));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			int slice = tmp3;		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(53)
			Float tmp4 = (Float(Hue) / Float((int)60));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			int tmp5 = slice;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Float hf = tmp6;		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(54)
			Float tmp7 = Brightness;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			Float tmp8 = ((int)1 - Saturation);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			Float aa = tmp9;		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(55)
			Float tmp10 = Brightness;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			Float tmp11 = (Saturation * hf);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			Float tmp12 = ((int)1 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			Float bb = tmp13;		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(56)
			Float tmp14 = Brightness;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			Float tmp15 = Saturation;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			Float tmp16 = (((Float)1.0) - hf);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(56)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(56)
			Float tmp18 = ((int)1 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(56)
			Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(56)
			Float cc = tmp19;		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(58)
			int tmp20 = slice;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(58)
			switch( (int)(tmp20)){
				case (int)0: {
					HX_STACK_LINE(61)
					red = Brightness;
					HX_STACK_LINE(62)
					green = cc;
					HX_STACK_LINE(63)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(65)
					red = bb;
					HX_STACK_LINE(66)
					green = Brightness;
					HX_STACK_LINE(67)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(69)
					red = aa;
					HX_STACK_LINE(70)
					green = Brightness;
					HX_STACK_LINE(71)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(73)
					red = aa;
					HX_STACK_LINE(74)
					green = bb;
					HX_STACK_LINE(75)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(77)
					red = cc;
					HX_STACK_LINE(78)
					green = aa;
					HX_STACK_LINE(79)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(81)
					red = Brightness;
					HX_STACK_LINE(82)
					green = aa;
					HX_STACK_LINE(83)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(85)
					red = (int)0;
					HX_STACK_LINE(86)
					green = (int)0;
					HX_STACK_LINE(87)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(91)
		bool tmp1 = (Alpha > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			tmp2 = Alpha;
		}
		else{
			HX_STACK_LINE(91)
			tmp2 = (Alpha * (int)255);
		}
		HX_STACK_LINE(91)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		Float tmp6 = (red * (int)255);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		Float tmp10 = (green * (int)255);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		int tmp13 = (int(tmp9) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		Float tmp14 = (blue * (int)255);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(91)
		int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		return tmp16;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromHSBA,return )

Dynamic FlxColorUtil_obj::getARGB( int Color,Dynamic Results){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getARGB",0xf9594d21,"flixel.util.FlxColorUtil.getARGB","flixel/util/FlxColorUtil.hx",103,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Results,"Results")
	HX_STACK_LINE(104)
	int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	int red = tmp1;		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(105)
	int tmp2 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int green = tmp3;		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(106)
	int tmp4 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	int blue = tmp4;		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(107)
	int tmp5 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(107)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(107)
	Float tmp8 = ::flixel::util::FlxMath_obj::roundDecimal(tmp7,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(107)
	Float alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(109)
	bool tmp9 = (Results != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	if ((tmp9)){
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",110,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(110)
		Dynamic tmp10 = _Function_2_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		Results = tmp10;
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",113,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
				__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
				__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
				__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(113)
	Dynamic tmp10 = _Function_1_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(113)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getARGB,return )

Dynamic FlxColorUtil_obj::getHSBA( int Color,Dynamic Results){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getHSBA",0xfdfa895f,"flixel.util.FlxColorUtil.getHSBA","flixel/util/FlxColorUtil.hx",126,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Results,"Results")
	HX_STACK_LINE(127)
	Float hue;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(128)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(129)
	Float brightness;		HX_STACK_VAR(brightness,"brightness");
	HX_STACK_LINE(130)
	Float alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(132)
	int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	Float red = tmp2;		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(133)
	int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(133)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(133)
	Float green = tmp5;		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(134)
	int tmp6 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(134)
	Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(134)
	Float blue = tmp7;		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(136)
	bool tmp8 = (red > green);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(136)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(136)
	if ((tmp8)){
		HX_STACK_LINE(136)
		tmp9 = red;
	}
	else{
		HX_STACK_LINE(136)
		tmp9 = green;
	}
	HX_STACK_LINE(136)
	Float m = tmp9;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(137)
	bool tmp10 = (m > blue);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(137)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(137)
	if ((tmp10)){
		HX_STACK_LINE(137)
		tmp11 = m;
	}
	else{
		HX_STACK_LINE(137)
		tmp11 = blue;
	}
	HX_STACK_LINE(137)
	Float dmax = tmp11;		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(138)
	bool tmp12 = (red > green);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(138)
	Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(138)
	if ((tmp12)){
		HX_STACK_LINE(138)
		tmp13 = green;
	}
	else{
		HX_STACK_LINE(138)
		tmp13 = red;
	}
	HX_STACK_LINE(138)
	m = tmp13;
	HX_STACK_LINE(139)
	bool tmp14 = (m > blue);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(139)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(139)
	if ((tmp14)){
		HX_STACK_LINE(139)
		tmp15 = blue;
	}
	else{
		HX_STACK_LINE(139)
		tmp15 = m;
	}
	HX_STACK_LINE(139)
	Float dmin = tmp15;		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(140)
	Float tmp16 = (dmax - dmin);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(140)
	Float range = tmp16;		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(142)
	Float tmp17 = dmax;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(142)
	Float tmp18 = ::flixel::util::FlxMath_obj::roundDecimal(tmp17,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(142)
	brightness = tmp18;
	HX_STACK_LINE(143)
	saturation = (int)0;
	HX_STACK_LINE(144)
	hue = (int)0;
	HX_STACK_LINE(146)
	bool tmp19 = (dmax != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(146)
	if ((tmp19)){
		HX_STACK_LINE(148)
		Float tmp20 = (Float(range) / Float(dmax));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(148)
		Float tmp21 = ::flixel::util::FlxMath_obj::roundDecimal(tmp20,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(148)
		saturation = tmp21;
	}
	HX_STACK_LINE(150)
	bool tmp20 = (saturation != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(150)
	if ((tmp20)){
		HX_STACK_LINE(152)
		bool tmp21 = (red == dmax);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(152)
		if ((tmp21)){
			HX_STACK_LINE(154)
			Float tmp22 = (green - blue);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(154)
			Float tmp23 = range;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(154)
			Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(154)
			hue = tmp24;
		}
		else{
			HX_STACK_LINE(156)
			bool tmp22 = (green == dmax);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(156)
			if ((tmp22)){
				HX_STACK_LINE(158)
				Float tmp23 = (blue - red);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(158)
				Float tmp24 = range;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(158)
				Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(158)
				Float tmp26 = ((int)2 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(158)
				hue = tmp26;
			}
			else{
				HX_STACK_LINE(160)
				bool tmp23 = (blue == dmax);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(160)
				if ((tmp23)){
					HX_STACK_LINE(162)
					Float tmp24 = (red - green);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(162)
					Float tmp25 = range;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(162)
					Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(162)
					Float tmp27 = ((int)4 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(162)
					hue = tmp27;
				}
			}
		}
		HX_STACK_LINE(164)
		hx::MultEq(hue,(int)60);
		HX_STACK_LINE(165)
		bool tmp22 = (hue < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(165)
		if ((tmp22)){
			HX_STACK_LINE(167)
			hx::AddEq(hue,(int)360);
		}
	}
	HX_STACK_LINE(171)
	int tmp21 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(171)
	int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(171)
	Float tmp23 = (Float(tmp22) / Float((int)255));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(171)
	Float tmp24 = ::flixel::util::FlxMath_obj::roundDecimal(tmp23,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(171)
	alpha = tmp24;
	HX_STACK_LINE(173)
	bool tmp25 = (Results != null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(173)
	if ((tmp25)){
		HX_STACK_LINE(174)
		Float tmp26 = hue;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(174)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(174)
		Float tmp28 = brightness;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(174)
		Float tmp29 = saturation;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(174)
		Float tmp30 = alpha;		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_2_1{
			inline static Dynamic Block( Float &tmp28,int &tmp27,Float &tmp29,Float &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",174,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00") , tmp27,false);
					__result->Add(HX_HCSTRING("brightness","\xd1","\x8d","\x71","\x65") , tmp28,false);
					__result->Add(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6") , tmp29,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , tmp30,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		Dynamic tmp31 = _Function_2_1::Block(tmp28,tmp27,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(174)
		Results = tmp31;
	}
	HX_STACK_LINE(176)
	Float tmp26 = hue;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(176)
	int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(176)
	Float tmp28 = brightness;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(176)
	Float tmp29 = saturation;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(176)
	Float tmp30 = alpha;		HX_STACK_VAR(tmp30,"tmp30");
	struct _Function_1_1{
		inline static Dynamic Block( Float &tmp28,int &tmp27,Float &tmp29,Float &tmp30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",176,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00") , tmp27,false);
				__result->Add(HX_HCSTRING("brightness","\xd1","\x8d","\x71","\x65") , tmp28,false);
				__result->Add(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6") , tmp29,false);
				__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , tmp30,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	Dynamic tmp31 = _Function_1_1::Block(tmp28,tmp27,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(176)
	return tmp31;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getHSBA,return )

int FlxColorUtil_obj::getAlpha( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAlpha",0x4618f9c9,"flixel.util.FlxColorUtil.getAlpha","flixel/util/FlxColorUtil.hx",186,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(187)
	int tmp = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlpha,return )

Float FlxColorUtil_obj::getAlphaFloat( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAlphaFloat",0x73402313,"flixel.util.FlxColorUtil.getAlphaFloat","flixel/util/FlxColorUtil.hx",197,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(198)
	int tmp = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	int f = tmp1;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(199)
	Float tmp2 = (Float(f) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlphaFloat,return )

int FlxColorUtil_obj::getRed( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getRed",0x50612afc,"flixel.util.FlxColorUtil.getRed","flixel/util/FlxColorUtil.hx",209,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(210)
	int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getRed,return )

int FlxColorUtil_obj::getGreen( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getGreen",0xbe6f612e,"flixel.util.FlxColorUtil.getGreen","flixel/util/FlxColorUtil.hx",220,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(221)
	int tmp = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getGreen,return )

int FlxColorUtil_obj::getBlue( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getBlue",0xfa16668f,"flixel.util.FlxColorUtil.getBlue","flixel/util/FlxColorUtil.hx",231,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(232)
	int tmp = (int(Color) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getBlue,return )

int FlxColorUtil_obj::getRandomColor( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getRandomColor",0x6876090b,"flixel.util.FlxColorUtil.getRandomColor","flixel/util/FlxColorUtil.hx",245,0x18d3ded1)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(246)
		int tmp = Min;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int tmp1 = Max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		int tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		int tmp3 = ::flixel::util::FlxRandom_obj::color(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getRandomColor,return )

int FlxColorUtil_obj::getColor32( int Alpha,int Red,int Green,int Blue){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColor32",0xf6f1ffed,"flixel.util.FlxColorUtil.getColor32","flixel/util/FlxColorUtil.hx",259,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_LINE(260)
	int tmp = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	int tmp1 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	int tmp3 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	int tmp5 = Blue;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(260)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,getColor32,return )

int FlxColorUtil_obj::getColor24( int Red,int Green,int Blue){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColor24",0xf6f1ff10,"flixel.util.FlxColorUtil.getColor24","flixel/util/FlxColorUtil.hx",272,0x18d3ded1)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_LINE(273)
	int tmp = (int(Red) << int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	int tmp1 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	int tmp3 = Blue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(273)
	int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(273)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getColor24,return )

Array< int > FlxColorUtil_obj::getHSVColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getHSVColorWheel",0xcbde148e,"flixel.util.FlxColorUtil.getHSVColorWheel","flixel/util/FlxColorUtil.hx",283,0x18d3ded1)
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(284)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(286)
			while((true)){
				HX_STACK_LINE(286)
				bool tmp = (_g < (int)360);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(286)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(286)
				if ((tmp1)){
					HX_STACK_LINE(286)
					break;
				}
				HX_STACK_LINE(286)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				int c = tmp2;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(288)
				int tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				int tmp4 = Alpha;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				int tmp5 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp3,((Float)1.0),((Float)1.0),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				colors[c] = tmp5;
			}
		}
		HX_STACK_LINE(291)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getHSVColorWheel,return )

int FlxColorUtil_obj::getComplementHarmony( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getComplementHarmony",0x5b6ab0ab,"flixel.util.FlxColorUtil.getComplementHarmony","flixel/util/FlxColorUtil.hx",303,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(304)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	Dynamic tmp1 = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	Dynamic hsv = tmp1;		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(305)
	Float tmp2 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(305)
	int tmp4 = ::flixel::util::FlxMath_obj::wrapValue(tmp3,(int)180,(int)359);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(305)
	int opposite = tmp4;		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(307)
	int tmp5 = opposite;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(307)
	int tmp6 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp5,((Float)1.0),((Float)1.0),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(307)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getComplementHarmony,return )

Dynamic FlxColorUtil_obj::getAnalogousHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getAnalogousHarmony",0xbd99d09e,"flixel.util.FlxColorUtil.getAnalogousHarmony","flixel/util/FlxColorUtil.hx",320,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(321)
		int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		Dynamic tmp1 = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		Dynamic hsv = tmp1;		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(323)
		bool tmp2 = (Threshold > (int)359);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		if ((tmp3)){
			HX_STACK_LINE(323)
			tmp4 = (Threshold < (int)0);
		}
		else{
			HX_STACK_LINE(323)
			tmp4 = true;
		}
		HX_STACK_LINE(323)
		if ((tmp4)){
			HX_STACK_LINE(325)
			::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(325)
			::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(325)
			tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxColor Warning: Invalid threshold given to getAnalogousHarmony()","\x2f","\x9f","\x3c","\x37"),tmp6,true);
		}
		HX_STACK_LINE(328)
		Float tmp5 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		int tmp7 = ((int)359 - Threshold);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		int tmp8 = ::flixel::util::FlxMath_obj::wrapValue(tmp6,tmp7,(int)359);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		int warmer = tmp8;		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(329)
		Float tmp9 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(329)
		int tmp11 = Threshold;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(329)
		int tmp12 = ::flixel::util::FlxMath_obj::wrapValue(tmp10,tmp11,(int)359);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(329)
		int colder = tmp12;		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(331)
		int tmp13 = Color;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(331)
		int tmp14 = warmer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(331)
		int tmp15 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp14,((Float)1.0),((Float)1.0),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(331)
		int tmp16 = colder;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(331)
		int tmp17 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp16,((Float)1.0),((Float)1.0),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(331)
		Float tmp18 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(331)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(331)
		int tmp20 = warmer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(331)
		int tmp21 = colder;		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp13,int &tmp17,int &tmp20,int &tmp19,int &tmp21,int &tmp15){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",331,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6") , tmp13,false);
					__result->Add(HX_HCSTRING("color2","\x6f","\xc5","\x86","\xc6") , tmp15,false);
					__result->Add(HX_HCSTRING("color3","\x70","\xc5","\x86","\xc6") , tmp17,false);
					__result->Add(HX_HCSTRING("hue1","\x79","\x50","\x17","\x45") , tmp19,false);
					__result->Add(HX_HCSTRING("hue2","\x7a","\x50","\x17","\x45") , tmp20,false);
					__result->Add(HX_HCSTRING("hue3","\x7b","\x50","\x17","\x45") , tmp21,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(331)
		Dynamic tmp22 = _Function_1_1::Block(tmp13,tmp17,tmp20,tmp19,tmp21,tmp15);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(331)
		return tmp22;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getAnalogousHarmony,return )

Dynamic FlxColorUtil_obj::getSplitComplementHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getSplitComplementHarmony",0xad902ebb,"flixel.util.FlxColorUtil.getSplitComplementHarmony","flixel/util/FlxColorUtil.hx",344,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(345)
		int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		Dynamic tmp1 = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		Dynamic hsv = tmp1;		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(347)
		bool tmp2 = (Threshold >= (int)359);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		if ((tmp3)){
			HX_STACK_LINE(347)
			tmp4 = (Threshold <= (int)0);
		}
		else{
			HX_STACK_LINE(347)
			tmp4 = true;
		}
		HX_STACK_LINE(347)
		if ((tmp4)){
			HX_STACK_LINE(349)
			::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(349)
			tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxColor: Invalid threshold given to getSplitComplementHarmony()","\x70","\xa7","\xd0","\xdb"),tmp6,true);
		}
		HX_STACK_LINE(352)
		Float tmp5 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(352)
		int tmp7 = ::flixel::util::FlxMath_obj::wrapValue(tmp6,(int)180,(int)359);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(352)
		int opposite = tmp7;		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(354)
		Float tmp8 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(354)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(354)
		int tmp10 = (opposite - Threshold);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(354)
		int tmp11 = ::flixel::util::FlxMath_obj::wrapValue(tmp9,tmp10,(int)359);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(354)
		int warmer = tmp11;		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(355)
		Float tmp12 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(355)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(355)
		int tmp14 = (opposite + Threshold);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(355)
		int tmp15 = ::flixel::util::FlxMath_obj::wrapValue(tmp13,tmp14,(int)359);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(355)
		int colder = tmp15;		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(357)
			::flixel::_system::frontEnds::LogFrontEnd tmp16 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(357)
			::String tmp17 = (HX_HCSTRING("hue: ","\x5e","\x21","\x4f","\x2f") + hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(357)
			::String tmp18 = (tmp17 + HX_HCSTRING(" opposite: ","\x6d","\xbb","\xac","\x90"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(357)
			int tmp19 = opposite;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(357)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(357)
			::String tmp21 = (tmp20 + HX_HCSTRING(" warmer: ","\x38","\xc9","\xb7","\x50"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(357)
			int tmp22 = warmer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(357)
			::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(357)
			::String tmp24 = (tmp23 + HX_HCSTRING(" colder: ","\x97","\xfa","\x33","\x8a"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(357)
			int tmp25 = colder;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(357)
			::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(357)
			::flixel::_system::debug::LogStyle tmp27 = ::flixel::_system::debug::LogStyle_obj::NOTICE;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(357)
			tmp16->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp26,tmp27,null());
		}
		HX_STACK_LINE(359)
		int tmp16 = Color;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(359)
		int tmp17 = warmer;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(359)
		Float tmp18 = hsv->__Field(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(359)
		Float tmp19 = hsv->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(359)
		int tmp20 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp17,tmp18,tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(359)
		int tmp21 = colder;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(359)
		Float tmp22 = hsv->__Field(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(359)
		Float tmp23 = hsv->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(359)
		int tmp24 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp21,tmp22,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(359)
		Float tmp25 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(359)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(359)
		int tmp27 = warmer;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(359)
		int tmp28 = colder;		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_1{
			inline static Dynamic Block( int &tmp28,int &tmp20,int &tmp26,int &tmp24,int &tmp16,int &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",359,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6") , tmp16,false);
					__result->Add(HX_HCSTRING("color2","\x6f","\xc5","\x86","\xc6") , tmp20,false);
					__result->Add(HX_HCSTRING("color3","\x70","\xc5","\x86","\xc6") , tmp24,false);
					__result->Add(HX_HCSTRING("hue1","\x79","\x50","\x17","\x45") , tmp26,false);
					__result->Add(HX_HCSTRING("hue2","\x7a","\x50","\x17","\x45") , tmp27,false);
					__result->Add(HX_HCSTRING("hue3","\x7b","\x50","\x17","\x45") , tmp28,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(359)
		Dynamic tmp29 = _Function_1_1::Block(tmp28,tmp20,tmp26,tmp24,tmp16,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(359)
		return tmp29;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getSplitComplementHarmony,return )

Dynamic FlxColorUtil_obj::getTriadicHarmony( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getTriadicHarmony",0xae2336f3,"flixel.util.FlxColorUtil.getTriadicHarmony","flixel/util/FlxColorUtil.hx",370,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(371)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Dynamic tmp1 = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	Dynamic hsv = tmp1;		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(373)
	Float tmp2 = hsv->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	int tmp4 = ::flixel::util::FlxMath_obj::wrapValue(tmp3,(int)120,(int)359);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(373)
	int triadic1 = tmp4;		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(374)
	int tmp5 = triadic1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(374)
	int tmp6 = ::flixel::util::FlxMath_obj::wrapValue(tmp5,(int)120,(int)359);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(374)
	int triadic2 = tmp6;		HX_STACK_VAR(triadic2,"triadic2");
	HX_STACK_LINE(376)
	int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(376)
	int tmp8 = triadic1;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(376)
	int tmp9 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp8,((Float)1.0),((Float)1.0),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(376)
	int tmp10 = triadic2;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(376)
	int tmp11 = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(tmp10,((Float)1.0),((Float)1.0),null());		HX_STACK_VAR(tmp11,"tmp11");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp9,int &tmp11,int &tmp7){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",376,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("color1","\x6e","\xc5","\x86","\xc6") , tmp7,false);
				__result->Add(HX_HCSTRING("color2","\x6f","\xc5","\x86","\xc6") , tmp9,false);
				__result->Add(HX_HCSTRING("color3","\x70","\xc5","\x86","\xc6") , tmp11,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(376)
	Dynamic tmp12 = _Function_1_1::Block(tmp9,tmp11,tmp7);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(376)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getTriadicHarmony,return )

::String FlxColorUtil_obj::getColorInfo( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","getColorInfo",0x261c275c,"flixel.util.FlxColorUtil.getColorInfo","flixel/util/FlxColorUtil.hx",387,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(388)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(388)
		int tmp1 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		int red = tmp2;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(388)
		int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(388)
		int green = tmp4;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(388)
		int tmp5 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(388)
		int blue = tmp5;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(388)
		int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(388)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(388)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(388)
		Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(388)
		Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(388)
		bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(388)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",388,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(388)
			Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(388)
			Results = tmp11;
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",388,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(388)
		tmp = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(388)
	Dynamic argb = tmp;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(389)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	Dynamic tmp2 = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	Dynamic hsl = tmp2;		HX_STACK_VAR(hsl,"hsl");
	HX_STACK_LINE(392)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(392)
			int tmp5 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			int red = tmp6;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(392)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			int green = tmp8;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(392)
			int tmp9 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			int blue = tmp9;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(392)
			int tmp10 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			Float tmp13 = ::flixel::util::FlxMath_obj::roundDecimal(tmp12,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			Float alpha = tmp13;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(392)
			bool tmp14 = (Results != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			if ((tmp14)){
				struct _Function_4_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",392,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
							__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
							__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(392)
				Dynamic tmp15 = _Function_4_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(392)
				Results = tmp15;
			}
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",392,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(392)
			tmp4 = _Function_3_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(392)
		Dynamic argb1 = tmp4;		HX_STACK_VAR(argb1,"argb1");
		HX_STACK_LINE(392)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			Float tmp6 = argb1->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			int Color1 = tmp7;		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			int tmp8 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			Float lsd = tmp8;		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float tmp9 = (Color1 - lsd);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			Float tmp10 = (Float(tmp9) / Float((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			Float msd = tmp10;		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			Float tmp11 = msd;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			::String tmp13 = digits.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			Float tmp14 = lsd;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(392)
			::String tmp16 = digits.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(392)
			tmp5 = (tmp13 + tmp16);
		}
		HX_STACK_LINE(392)
		::String tmp6 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			int tmp8 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			Float lsd = tmp8;		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float tmp9 = (Color1 - lsd);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			Float tmp10 = (Float(tmp9) / Float((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			Float msd = tmp10;		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			Float tmp11 = msd;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			::String tmp13 = digits.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			Float tmp14 = lsd;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(392)
			::String tmp16 = digits.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(392)
			tmp7 = (tmp13 + tmp16);
		}
		HX_STACK_LINE(392)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			int tmp10 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			Float lsd = tmp10;		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float tmp11 = (Color1 - lsd);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			Float tmp12 = (Float(tmp11) / Float((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			Float msd = tmp12;		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			Float tmp13 = msd;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			::String tmp15 = digits.charAt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(392)
			Float tmp16 = lsd;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(392)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(392)
			::String tmp18 = digits.charAt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(392)
			tmp9 = (tmp15 + tmp18);
		}
		HX_STACK_LINE(392)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(392)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int Color1 = argb1->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
			HX_STACK_LINE(392)
			::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
			HX_STACK_LINE(392)
			int tmp12 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			Float lsd = tmp12;		HX_STACK_VAR(lsd,"lsd");
			HX_STACK_LINE(392)
			Float tmp13 = (Color1 - lsd);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			Float tmp14 = (Float(tmp13) / Float((int)16));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			Float msd = tmp14;		HX_STACK_VAR(msd,"msd");
			HX_STACK_LINE(392)
			Float tmp15 = msd;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(392)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(392)
			::String tmp17 = digits.charAt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(392)
			Float tmp18 = lsd;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(392)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(392)
			::String tmp20 = digits.charAt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(392)
			tmp11 = (tmp17 + tmp20);
		}
		HX_STACK_LINE(392)
		tmp3 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(392)
	::String tmp4 = (tmp3 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(392)
	::String result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(395)
	::String tmp5 = (HX_HCSTRING("Alpha: ","\x64","\x15","\x67","\x7f") + argb->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(395)
	::String tmp6 = (tmp5 + HX_HCSTRING(" Red: ","\xf7","\xbd","\x55","\x45"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(395)
	int tmp7 = argb->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(395)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(395)
	::String tmp9 = (tmp8 + HX_HCSTRING(" Green: ","\xe9","\x23","\x00","\xae"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(395)
	int tmp10 = argb->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(395)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(395)
	::String tmp12 = (tmp11 + HX_HCSTRING(" Blue: ","\x00","\x1c","\x26","\x13"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(395)
	int tmp13 = argb->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(395)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(395)
	::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(395)
	hx::AddEq(result,tmp15);
	HX_STACK_LINE(398)
	::String tmp16 = (HX_HCSTRING("Hue: ","\x3e","\x91","\x7c","\xc2") + hsl->__Field(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(398)
	::String tmp17 = (tmp16 + HX_HCSTRING(" Saturation: ","\x38","\x1b","\xbe","\xc1"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(398)
	Float tmp18 = hsl->__Field(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(398)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(398)
	::String tmp20 = (tmp19 + HX_HCSTRING(" Lightnes: ","\xac","\xe5","\x84","\x99"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(398)
	Float tmp21 = hsl->__Field(HX_HCSTRING("lightness","\x6d","\x34","\x47","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(398)
	::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(398)
	hx::AddEq(result,tmp22);
	HX_STACK_LINE(400)
	::String tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(400)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getColorInfo,return )

::String FlxColorUtil_obj::ARGBtoHexString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoHexString",0x26500a84,"flixel.util.FlxColorUtil.ARGBtoHexString","flixel/util/FlxColorUtil.hx",410,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(411)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	{
		HX_STACK_LINE(411)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(411)
		int tmp1 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		int red = tmp2;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(411)
		int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		int green = tmp4;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(411)
		int tmp5 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		int blue = tmp5;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(411)
		int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(411)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(411)
		Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(411)
		Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(411)
		bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(411)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",411,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(411)
			Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(411)
			Results = tmp11;
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",411,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		tmp = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(411)
	Dynamic argb = tmp;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(412)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		Float tmp2 = argb->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(412)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(412)
		int Color1 = tmp3;		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		int tmp4 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(412)
		Float lsd = tmp4;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float tmp5 = (Color1 - lsd);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		Float tmp6 = (Float(tmp5) / Float((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		Float msd = tmp6;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		Float tmp7 = msd;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		::String tmp9 = digits.charAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		Float tmp10 = lsd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		::String tmp12 = digits.charAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		tmp1 = (tmp9 + tmp12);
	}
	HX_STACK_LINE(412)
	::String tmp2 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(412)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		int tmp4 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(412)
		Float lsd = tmp4;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float tmp5 = (Color1 - lsd);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		Float tmp6 = (Float(tmp5) / Float((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		Float msd = tmp6;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		Float tmp7 = msd;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		::String tmp9 = digits.charAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		Float tmp10 = lsd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		::String tmp12 = digits.charAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		tmp3 = (tmp9 + tmp12);
	}
	HX_STACK_LINE(412)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		int tmp6 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		Float lsd = tmp6;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float tmp7 = (Color1 - lsd);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		Float tmp8 = (Float(tmp7) / Float((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		Float msd = tmp8;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		Float tmp9 = msd;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		::String tmp11 = digits.charAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		Float tmp12 = lsd;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(412)
		::String tmp14 = digits.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		tmp5 = (tmp11 + tmp14);
	}
	HX_STACK_LINE(412)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(412)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int Color1 = argb->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(412)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(412)
		int tmp8 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		Float lsd = tmp8;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(412)
		Float tmp9 = (Color1 - lsd);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		Float tmp10 = (Float(tmp9) / Float((int)16));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		Float msd = tmp10;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(412)
		Float tmp11 = msd;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		::String tmp13 = digits.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(412)
		Float tmp14 = lsd;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(412)
		::String tmp16 = digits.charAt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(412)
		tmp7 = (tmp13 + tmp16);
	}
	HX_STACK_LINE(412)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(412)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoHexString,return )

::String FlxColorUtil_obj::ARGBtoWebString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoWebString",0xef9cfcfd,"flixel.util.FlxColorUtil.ARGBtoWebString","flixel/util/FlxColorUtil.hx",422,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(423)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(423)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(423)
		int tmp1 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		int red = tmp2;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(423)
		int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(423)
		int green = tmp4;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(423)
		int tmp5 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		int blue = tmp5;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(423)
		int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(423)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(423)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(423)
		Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(423)
		Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(423)
		bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(423)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",423,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(423)
			Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(423)
			Results = tmp11;
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",423,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(423)
		tmp = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(423)
	Dynamic argb = tmp;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(424)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		int tmp2 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		Float lsd = tmp2;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float tmp3 = (Color1 - lsd);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(424)
		Float tmp4 = (Float(tmp3) / Float((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(424)
		Float msd = tmp4;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		Float tmp5 = msd;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(424)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		::String tmp7 = digits.charAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		Float tmp8 = lsd;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		::String tmp10 = digits.charAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(424)
		tmp1 = (tmp7 + tmp10);
	}
	HX_STACK_LINE(424)
	::String tmp2 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(424)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		int tmp4 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(424)
		Float lsd = tmp4;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float tmp5 = (Color1 - lsd);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(424)
		Float tmp6 = (Float(tmp5) / Float((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		Float msd = tmp6;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		Float tmp7 = msd;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		::String tmp9 = digits.charAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		Float tmp10 = lsd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(424)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		::String tmp12 = digits.charAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		tmp3 = (tmp9 + tmp12);
	}
	HX_STACK_LINE(424)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		int Color1 = argb->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
		HX_STACK_LINE(424)
		::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(424)
		int tmp6 = hx::Mod(Color1,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		Float lsd = tmp6;		HX_STACK_VAR(lsd,"lsd");
		HX_STACK_LINE(424)
		Float tmp7 = (Color1 - lsd);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		Float tmp8 = (Float(tmp7) / Float((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		Float msd = tmp8;		HX_STACK_VAR(msd,"msd");
		HX_STACK_LINE(424)
		Float tmp9 = msd;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(424)
		::String tmp11 = digits.charAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		Float tmp12 = lsd;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(424)
		::String tmp14 = digits.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(424)
		tmp5 = (tmp11 + tmp14);
	}
	HX_STACK_LINE(424)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(424)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoWebString,return )

::String FlxColorUtil_obj::colorToHexString( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","colorToHexString",0x245f204f,"flixel.util.FlxColorUtil.colorToHexString","flixel/util/FlxColorUtil.hx",434,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(435)
	::String digits = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(437)
	int tmp = hx::Mod(Color,(int)16);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	Float lsd = tmp;		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(438)
	Float tmp1 = (Color - lsd);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	Float tmp2 = (Float(tmp1) / Float((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	Float msd = tmp2;		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(440)
	Float tmp3 = msd;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(440)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(440)
	::String tmp5 = digits.charAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(440)
	Float tmp6 = lsd;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(440)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(440)
	::String tmp8 = digits.charAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(440)
	::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(440)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,colorToHexString,return )

int FlxColorUtil_obj::HSVtoARGB( Float H,Float S,Float V,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","HSVtoARGB",0x9ebb4371,"flixel.util.FlxColorUtil.HSVtoARGB","flixel/util/FlxColorUtil.hx",453,0x18d3ded1)
	HX_STACK_ARG(H,"H")
	HX_STACK_ARG(S,"S")
	HX_STACK_ARG(V,"V")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(454)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(456)
		bool tmp = (S == ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		if ((tmp)){
			HX_STACK_LINE(458)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				Float tmp2 = (V * (int)255);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(458)
				int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(458)
				int Red = tmp3;		HX_STACK_VAR(Red,"Red");
				HX_STACK_LINE(458)
				Float tmp4 = (V * (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(458)
				int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(458)
				int Green = tmp5;		HX_STACK_VAR(Green,"Green");
				HX_STACK_LINE(458)
				Float tmp6 = (V * (int)255);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				int Blue = tmp7;		HX_STACK_VAR(Blue,"Blue");
				HX_STACK_LINE(458)
				int tmp8 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(458)
				int tmp9 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(458)
				int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(458)
				int tmp11 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(458)
				int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(458)
				int tmp13 = Blue;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				tmp1 = (int(tmp12) | int(tmp13));
			}
			HX_STACK_LINE(458)
			result = tmp1;
		}
		else{
			HX_STACK_LINE(462)
			Float tmp1 = (Float(H) / Float(((Float)60.0)));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(462)
			H = tmp1;
			HX_STACK_LINE(463)
			Float tmp2 = H;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(463)
			Float tmp3 = H;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(463)
			Float f = tmp5;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(464)
			Float tmp6 = V;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			Float tmp7 = (((Float)1.0) - S);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(464)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(464)
			Float p = tmp8;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(465)
			Float tmp9 = V;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(465)
			Float tmp10 = (S * f);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(465)
			Float tmp11 = (((Float)1.0) - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(465)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(465)
			Float q = tmp12;		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(466)
			Float tmp13 = V;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(466)
			Float tmp14 = S;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(466)
			Float tmp15 = (((Float)1.0) - f);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(466)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(466)
			Float tmp17 = (((Float)1.0) - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(466)
			Float tmp18 = (tmp13 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(466)
			Float t = tmp18;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float tmp19 = H;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(468)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(468)
				int _g = tmp20;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(468)
				int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(468)
				switch( (int)(tmp21)){
					case (int)0: {
						HX_STACK_LINE(471)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(471)
						{
							HX_STACK_LINE(471)
							Float tmp23 = (V * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(471)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(471)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(471)
							Float tmp25 = (t * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(471)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(471)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(471)
							Float tmp27 = (p * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(471)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(471)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(471)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(471)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(471)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(471)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(471)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(471)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(471)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(471)
						result = tmp22;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(473)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(473)
						{
							HX_STACK_LINE(473)
							Float tmp23 = (q * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(473)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(473)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(473)
							Float tmp25 = (V * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(473)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(473)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(473)
							Float tmp27 = (p * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(473)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(473)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(473)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(473)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(473)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(473)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(473)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(473)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(473)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(473)
						result = tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(475)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							Float tmp23 = (p * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(475)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(475)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(475)
							Float tmp25 = (V * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(475)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(475)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(475)
							Float tmp27 = (t * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(475)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(475)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(475)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(475)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(475)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(475)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(475)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(475)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(475)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(475)
						result = tmp22;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(477)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(477)
						{
							HX_STACK_LINE(477)
							Float tmp23 = (p * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(477)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(477)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(477)
							Float tmp25 = (q * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(477)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(477)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(477)
							Float tmp27 = (V * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(477)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(477)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(477)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(477)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(477)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(477)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(477)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(477)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(477)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(477)
						result = tmp22;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(479)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							Float tmp23 = (t * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(479)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(479)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(479)
							Float tmp25 = (p * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(479)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(479)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(479)
							Float tmp27 = (V * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(479)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(479)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(479)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(479)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(479)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(479)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(479)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(479)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(479)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(479)
						result = tmp22;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(481)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(481)
						{
							HX_STACK_LINE(481)
							Float tmp23 = (V * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(481)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(481)
							int Red = tmp24;		HX_STACK_VAR(Red,"Red");
							HX_STACK_LINE(481)
							Float tmp25 = (p * (int)255);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(481)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(481)
							int Green = tmp26;		HX_STACK_VAR(Green,"Green");
							HX_STACK_LINE(481)
							Float tmp27 = (q * (int)255);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(481)
							int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(481)
							int Blue = tmp28;		HX_STACK_VAR(Blue,"Blue");
							HX_STACK_LINE(481)
							int tmp29 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(481)
							int tmp30 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(481)
							int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(481)
							int tmp32 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(481)
							int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(481)
							int tmp34 = Blue;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(481)
							tmp22 = (int(tmp33) | int(tmp34));
						}
						HX_STACK_LINE(481)
						result = tmp22;
					}
					;break;
					default: {
						HX_STACK_LINE(483)
						::flixel::_system::frontEnds::LogFrontEnd tmp22 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(483)
						::flixel::_system::debug::LogStyle tmp23 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(483)
						tmp22->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxColor: HSVtoARGB: Unknown color","\x2c","\x4a","\xa7","\xdd"),tmp23,true);
					}
				}
			}
		}
		HX_STACK_LINE(487)
		int tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,HSVtoARGB,return )

Dynamic FlxColorUtil_obj::RGBtoHSV( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","RGBtoHSV",0x16e67524,"flixel.util.FlxColorUtil.RGBtoHSV","flixel/util/FlxColorUtil.hx",497,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(498)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(498)
		int tmp1 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		int red = tmp2;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(498)
		int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		int green = tmp4;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(498)
		int tmp5 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		int blue = tmp5;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(498)
		int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(498)
		bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",498,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(498)
			Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			Results = tmp11;
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",498,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		tmp = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(498)
	Dynamic rgb = tmp;		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(500)
	Float tmp1 = (Float(rgb->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic )) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	Float red = tmp1;		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(501)
	Float tmp2 = (Float(rgb->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic )) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	Float green = tmp2;		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(502)
	Float tmp3 = (Float(rgb->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic )) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(502)
	Float blue = tmp3;		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(504)
	Float tmp4 = red;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(504)
	Float tmp5 = green;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(504)
	Float tmp6 = blue;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(504)
	Float tmp7 = ::Math_obj::min(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(504)
	Float tmp8 = ::Math_obj::min(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(504)
	Float min = tmp8;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(505)
	Float tmp9 = red;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(505)
	Float tmp10 = green;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(505)
	Float tmp11 = blue;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(505)
	Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(505)
	Float tmp13 = ::Math_obj::max(tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(505)
	Float max = tmp13;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(506)
	Float tmp14 = (max - min);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(506)
	Float delta = tmp14;		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(507)
	Float tmp15 = (max + min);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(507)
	Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(507)
	Float lightness = tmp16;		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(508)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(509)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(512)
	bool tmp17 = (delta == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(512)
	if ((tmp17)){
		HX_STACK_LINE(514)
		hue = (int)0;
		HX_STACK_LINE(515)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(519)
		bool tmp18 = (lightness < ((Float)0.5));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(519)
		if ((tmp18)){
			HX_STACK_LINE(521)
			Float tmp19 = delta;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(521)
			Float tmp20 = (max + min);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(521)
			Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(521)
			saturation = tmp21;
		}
		else{
			HX_STACK_LINE(525)
			Float tmp19 = delta;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(525)
			Float tmp20 = ((int)2 - max);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(525)
			Float tmp21 = min;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(525)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(525)
			Float tmp23 = (Float(tmp19) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(525)
			saturation = tmp23;
		}
		HX_STACK_LINE(528)
		Float tmp19 = (max - red);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(528)
		Float tmp20 = (Float(tmp19) / Float((int)6));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(528)
		Float tmp21 = (Float(delta) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(528)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(528)
		Float tmp23 = delta;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(528)
		Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(528)
		Float delta_r = tmp24;		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(529)
		Float tmp25 = (max - green);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(529)
		Float tmp26 = (Float(tmp25) / Float((int)6));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(529)
		Float tmp27 = (Float(delta) / Float((int)2));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(529)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(529)
		Float tmp29 = delta;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(529)
		Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(529)
		Float delta_g = tmp30;		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(530)
		Float tmp31 = (max - blue);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(530)
		Float tmp32 = (Float(tmp31) / Float((int)6));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(530)
		Float tmp33 = (Float(delta) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(530)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(530)
		Float tmp35 = delta;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(530)
		Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(530)
		Float delta_b = tmp36;		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(532)
		bool tmp37 = (red == max);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(532)
		if ((tmp37)){
			HX_STACK_LINE(534)
			Float tmp38 = (delta_b - delta_g);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(534)
			hue = tmp38;
		}
		else{
			HX_STACK_LINE(536)
			bool tmp38 = (green == max);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(536)
			if ((tmp38)){
				HX_STACK_LINE(538)
				Float tmp39 = ((Float)0.33333333333333331);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(538)
				Float tmp40 = delta_r;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(538)
				Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(538)
				Float tmp42 = delta_b;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(538)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(538)
				hue = tmp43;
			}
			else{
				HX_STACK_LINE(540)
				bool tmp39 = (blue == max);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(540)
				if ((tmp39)){
					HX_STACK_LINE(542)
					Float tmp40 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(542)
					Float tmp41 = delta_g;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(542)
					Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(542)
					Float tmp43 = delta_r;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(542)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(542)
					hue = tmp44;
				}
			}
		}
		HX_STACK_LINE(545)
		bool tmp38 = (hue < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(545)
		if ((tmp38)){
			HX_STACK_LINE(547)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(550)
		bool tmp39 = (hue > (int)1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(550)
		if ((tmp39)){
			HX_STACK_LINE(552)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(557)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(558)
	Float tmp18 = hue;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(558)
	int tmp19 = ::Math_obj::round(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(558)
	hue = tmp19;
	struct _Function_1_1{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",560,0x18d3ded1)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("hue","\xb8","\x50","\x4f","\x00") , hue,false);
				__result->Add(HX_HCSTRING("saturation","\xd2","\xd3","\xa1","\xf6") , saturation,false);
				__result->Add(HX_HCSTRING("lightness","\x6d","\x34","\x47","\xd7") , lightness,false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(560)
	Dynamic tmp20 = _Function_1_1::Block(saturation,lightness,hue);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(560)
	return tmp20;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBtoHSV,return )

int FlxColorUtil_obj::ARGBtoRGB( int Color){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","ARGBtoRGB",0x32bda985,"flixel.util.FlxColorUtil.ARGBtoRGB","flixel/util/FlxColorUtil.hx",571,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(572)
	int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(572)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(572)
	int tmp7 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(572)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(572)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoRGB,return )

int FlxColorUtil_obj::interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateColor",0xc761bcc3,"flixel.util.FlxColorUtil.interpolateColor","flixel/util/FlxColorUtil.hx",586,0x18d3ded1)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(587)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(587)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(587)
			int tmp1 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(587)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(587)
			int red = tmp2;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(587)
			int tmp3 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(587)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			int green = tmp4;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(587)
			int tmp5 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(587)
			int blue = tmp5;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(587)
			int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(587)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(587)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(587)
			Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(587)
			Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(587)
			bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(587)
			if ((tmp10)){
				struct _Function_3_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",587,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
							__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
							__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(587)
				Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(587)
				Results = tmp11;
			}
			struct _Function_2_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",587,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(587)
			tmp = _Function_2_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(587)
		Dynamic src1 = tmp;		HX_STACK_VAR(src1,"src1");
		HX_STACK_LINE(588)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		{
			HX_STACK_LINE(588)
			Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
			HX_STACK_LINE(588)
			int tmp2 = (int(Color2) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			int red = tmp3;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(588)
			int tmp4 = (int(Color2) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(588)
			int green = tmp5;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(588)
			int tmp6 = (int(Color2) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(588)
			int blue = tmp6;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(588)
			int tmp7 = (int(Color2) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(588)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(588)
			Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(588)
			Float tmp10 = ::flixel::util::FlxMath_obj::roundDecimal(tmp9,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(588)
			Float alpha = tmp10;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(588)
			bool tmp11 = (Results != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(588)
			if ((tmp11)){
				struct _Function_3_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",588,0x18d3ded1)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
							__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
							__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(588)
				Dynamic tmp12 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(588)
				Results = tmp12;
			}
			struct _Function_2_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",588,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(588)
			tmp1 = _Function_2_1::Block(red,green,blue,alpha);
		}
		HX_STACK_LINE(588)
		Dynamic src2 = tmp1;		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(590)
		int tmp2 = (src2->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic ) - src1->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		int tmp3 = CurrentStep;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(590)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(590)
		int tmp5 = Steps;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(590)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(590)
		int tmp7 = src1->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(590)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(590)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(590)
		int r = tmp9;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(591)
		int tmp10 = (src2->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic ) - src1->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(591)
		int tmp11 = CurrentStep;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(591)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(591)
		int tmp13 = Steps;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(591)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(591)
		int tmp15 = src1->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(591)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(591)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(591)
		int g = tmp17;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(592)
		int tmp18 = (src2->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic ) - src1->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(592)
		int tmp19 = CurrentStep;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(592)
		int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(592)
		int tmp21 = Steps;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(592)
		Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(592)
		int tmp23 = src1->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(592)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(592)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(592)
		int b = tmp25;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(594)
		int tmp26 = (int(Alpha) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(594)
		int tmp27 = (int(r) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(594)
		int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(594)
		int tmp29 = (int(g) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(594)
		int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(594)
		int tmp31 = b;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(594)
		int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(594)
		return tmp32;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorUtil_obj,interpolateColor,return )

int FlxColorUtil_obj::interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateColorWithRGB",0x20b6e224,"flixel.util.FlxColorUtil.interpolateColorWithRGB","flixel/util/FlxColorUtil.hx",610,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(R2,"R2")
	HX_STACK_ARG(G2,"G2")
	HX_STACK_ARG(B2,"B2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_LINE(611)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	{
		HX_STACK_LINE(611)
		Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
		HX_STACK_LINE(611)
		int tmp1 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		int red = tmp2;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(611)
		int tmp3 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(611)
		int green = tmp4;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(611)
		int tmp5 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(611)
		int blue = tmp5;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(611)
		int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(611)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(611)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(611)
		Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(611)
		Float alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(611)
		bool tmp10 = (Results != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(611)
		if ((tmp10)){
			struct _Function_3_1{
				inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",611,0x18d3ded1)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
						__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
						__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(611)
			Dynamic tmp11 = _Function_3_1::Block(red,green,blue,alpha);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(611)
			Results = tmp11;
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColorUtil.hx",611,0x18d3ded1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("red","\x51","\xd9","\x56","\x00") , red,false);
					__result->Add(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99") , green,false);
					__result->Add(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41") , blue,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(611)
		tmp = _Function_2_1::Block(red,green,blue,alpha);
	}
	HX_STACK_LINE(611)
	Dynamic src = tmp;		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(613)
	int tmp1 = (R2 - src->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	int tmp2 = CurrentStep;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(613)
	int tmp4 = Steps;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(613)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(613)
	int tmp6 = src->__Field(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(613)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(613)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(613)
	int r = tmp8;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(614)
	int tmp9 = (G2 - src->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(614)
	int tmp10 = CurrentStep;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(614)
	int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(614)
	int tmp12 = Steps;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(614)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(614)
	int tmp14 = src->__Field(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(614)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(614)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(614)
	int g = tmp16;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(615)
	int tmp17 = (B2 - src->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(615)
	int tmp18 = CurrentStep;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(615)
	int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(615)
	int tmp20 = Steps;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(615)
	Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(615)
	int tmp22 = src->__Field(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(615)
	Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(615)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(615)
	int b = tmp24;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(617)
	int tmp25 = (int(r) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(617)
	int tmp26 = (int(g) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(617)
	int tmp27 = (int(tmp25) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(617)
	int tmp28 = b;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(617)
	int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(617)
	return tmp29;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColorUtil_obj,interpolateColorWithRGB,return )

int FlxColorUtil_obj::interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_FRAME("flixel.util.FlxColorUtil","interpolateRGB",0xb900726d,"flixel.util.FlxColorUtil.interpolateRGB","flixel/util/FlxColorUtil.hx",635,0x18d3ded1)
	HX_STACK_ARG(R1,"R1")
	HX_STACK_ARG(G1,"G1")
	HX_STACK_ARG(B1,"B1")
	HX_STACK_ARG(R2,"R2")
	HX_STACK_ARG(G2,"G2")
	HX_STACK_ARG(B2,"B2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(CurrentStep,"CurrentStep")
	HX_STACK_LINE(636)
	int tmp = (R2 - R1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	int tmp1 = CurrentStep;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	int tmp3 = Steps;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(636)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(636)
	int tmp5 = R1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(636)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(636)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(636)
	int r = tmp7;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(637)
	int tmp8 = (G2 - G1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(637)
	int tmp9 = CurrentStep;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(637)
	int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(637)
	int tmp11 = Steps;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(637)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(637)
	int tmp13 = G1;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(637)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(637)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(637)
	int g = tmp15;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(638)
	int tmp16 = (B2 - B1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(638)
	int tmp17 = CurrentStep;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(638)
	int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(638)
	int tmp19 = Steps;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(638)
	Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(638)
	int tmp21 = B1;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(638)
	Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(638)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(638)
	int b = tmp23;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(640)
	int tmp24 = (int(r) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(640)
	int tmp25 = (int(g) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(640)
	int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(640)
	int tmp27 = b;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(640)
	int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(640)
	return tmp28;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColorUtil_obj,interpolateRGB,return )

int FlxColorUtil_obj::darken( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(((Float)0.2));
	HX_STACK_FRAME("flixel.util.FlxColorUtil","darken",0xce754f00,"flixel.util.FlxColorUtil.darken","flixel/util/FlxColorUtil.hx",651,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			bool tmp = (Factor < (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(652)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(652)
			if ((tmp)){
				HX_STACK_LINE(652)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(652)
				tmp1 = Factor;
			}
			HX_STACK_LINE(652)
			Float lowerBound = tmp1;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(652)
			bool tmp2 = (lowerBound > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(652)
			if ((tmp2)){
				HX_STACK_LINE(652)
				(int)1;
			}
			else{
				HX_STACK_LINE(652)
				lowerBound;
			}
		}
		HX_STACK_LINE(654)
		int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(654)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		int r = tmp1;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(655)
		int tmp2 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(655)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(655)
		int g = tmp3;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(656)
		int tmp4 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(656)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(657)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(657)
		{
			HX_STACK_LINE(657)
			int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(657)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(657)
			int f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(657)
			tmp5 = (Float(f) / Float((int)255));
		}
		HX_STACK_LINE(657)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(659)
		Float tmp6 = ((int)1 - Factor);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(659)
		Factor = tmp6;
		HX_STACK_LINE(661)
		Float tmp7 = (r * Factor);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(661)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(661)
		r = tmp8;
		HX_STACK_LINE(662)
		Float tmp9 = (g * Factor);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(662)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(662)
		g = tmp10;
		HX_STACK_LINE(663)
		Float tmp11 = (b * Factor);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(663)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(663)
		b = tmp12;
		HX_STACK_LINE(665)
		bool tmp13 = (a > (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(665)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(665)
		if ((tmp13)){
			HX_STACK_LINE(665)
			tmp14 = a;
		}
		else{
			HX_STACK_LINE(665)
			tmp14 = (a * (int)255);
		}
		HX_STACK_LINE(665)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(665)
		int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(665)
		int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(665)
		int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(665)
		int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(665)
		int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(665)
		int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(665)
		int tmp22 = (int(tmp21) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(665)
		int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(665)
		int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(665)
		int tmp25 = (int(tmp23) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(665)
		return tmp25;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,darken,return )

int FlxColorUtil_obj::brighten( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(((Float)0.2));
	HX_STACK_FRAME("flixel.util.FlxColorUtil","brighten",0xbd5f0604,"flixel.util.FlxColorUtil.brighten","flixel/util/FlxColorUtil.hx",676,0x18d3ded1)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			bool tmp = (Factor < (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(677)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(677)
			if ((tmp)){
				HX_STACK_LINE(677)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(677)
				tmp1 = Factor;
			}
			HX_STACK_LINE(677)
			Float lowerBound = tmp1;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(677)
			bool tmp2 = (lowerBound > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(677)
			if ((tmp2)){
				HX_STACK_LINE(677)
				(int)1;
			}
			else{
				HX_STACK_LINE(677)
				lowerBound;
			}
		}
		HX_STACK_LINE(679)
		int tmp = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		int r = tmp1;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(680)
		int tmp2 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		int g = tmp3;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(681)
		int tmp4 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(681)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(682)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			int tmp6 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(682)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(682)
			int f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(682)
			tmp5 = (Float(f) / Float((int)255));
		}
		HX_STACK_LINE(682)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(684)
		int tmp6 = ((int)255 - r);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(684)
		Float tmp7 = Factor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(684)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(684)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(684)
		hx::AddEq(r,tmp9);
		HX_STACK_LINE(685)
		int tmp10 = ((int)255 - g);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(685)
		Float tmp11 = Factor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(685)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(685)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(685)
		hx::AddEq(g,tmp13);
		HX_STACK_LINE(686)
		int tmp14 = ((int)255 - b);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(686)
		Float tmp15 = Factor;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(686)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(686)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(686)
		hx::AddEq(b,tmp17);
		HX_STACK_LINE(688)
		bool tmp18 = (a > (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(688)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(688)
		if ((tmp18)){
			HX_STACK_LINE(688)
			tmp19 = a;
		}
		else{
			HX_STACK_LINE(688)
			tmp19 = (a * (int)255);
		}
		HX_STACK_LINE(688)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(688)
		int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(688)
		int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(688)
		int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(688)
		int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(688)
		int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(688)
		int tmp26 = (int(g) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(688)
		int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(688)
		int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(688)
		int tmp29 = (int(b) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(688)
		int tmp30 = (int(tmp28) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(688)
		return tmp30;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,brighten,return )


FlxColorUtil_obj::FlxColorUtil_obj()
{
}

bool FlxColorUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRed") ) { outValue = getRed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"darken") ) { outValue = darken_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getARGB") ) { outValue = getARGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getHSBA") ) { outValue = getHSBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBlue") ) { outValue = getBlue_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAlpha") ) { outValue = getAlpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getGreen") ) { outValue = getGreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { outValue = RGBtoHSV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"brighten") ) { outValue = brighten_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HSVtoARGB") ) { outValue = HSVtoARGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ARGBtoRGB") ) { outValue = ARGBtoRGB_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { outValue = getColor32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColor24") ) { outValue = getColor24_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeFromARGB") ) { outValue = makeFromARGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"makeFromHSBA") ) { outValue = makeFromHSBA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { outValue = getColorInfo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { outValue = getAlphaFloat_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { outValue = getRandomColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { outValue = interpolateRGB_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ARGBtoHexString") ) { outValue = ARGBtoHexString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ARGBtoWebString") ) { outValue = ARGBtoWebString_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { outValue = getHSVColorWheel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { outValue = colorToHexString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { outValue = interpolateColor_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { outValue = getTriadicHarmony_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { outValue = getAnalogousHarmony_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { outValue = getComplementHarmony_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { outValue = interpolateColorWithRGB_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { outValue = getSplitComplementHarmony_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxColorUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("makeFromARGB","\xc4","\x8b","\x00","\xe3"),
	HX_HCSTRING("makeFromHSBA","\x02","\xc8","\xa1","\xe7"),
	HX_HCSTRING("getARGB","\xe2","\xd8","\xde","\x12"),
	HX_HCSTRING("getHSBA","\x20","\x15","\x80","\x17"),
	HX_HCSTRING("getAlpha","\xe8","\xb6","\x6d","\x81"),
	HX_HCSTRING("getAlphaFloat","\x94","\x75","\xae","\x7f"),
	HX_HCSTRING("getRed","\x5b","\x12","\x26","\xa3"),
	HX_HCSTRING("getGreen","\x4d","\x1e","\xc4","\xf9"),
	HX_HCSTRING("getBlue","\x50","\xf2","\x9b","\x13"),
	HX_HCSTRING("getRandomColor","\x6a","\xe7","\x8f","\x3c"),
	HX_HCSTRING("getColor32","\xcc","\x82","\xc7","\x3e"),
	HX_HCSTRING("getColor24","\xef","\x81","\xc7","\x3e"),
	HX_HCSTRING("getHSVColorWheel","\xad","\x88","\xf3","\x40"),
	HX_HCSTRING("getComplementHarmony","\x4a","\x20","\xb6","\xd3"),
	HX_HCSTRING("getAnalogousHarmony","\xdf","\x79","\xe2","\xa4"),
	HX_HCSTRING("getSplitComplementHarmony","\xbc","\xbe","\x30","\x75"),
	HX_HCSTRING("getTriadicHarmony","\xf4","\x5d","\xd3","\xab"),
	HX_HCSTRING("getColorInfo","\xfb","\x5f","\x7f","\x30"),
	HX_HCSTRING("ARGBtoHexString","\x45","\xbf","\xd8","\xe8"),
	HX_HCSTRING("ARGBtoWebString","\xbe","\xb1","\x25","\xb2"),
	HX_HCSTRING("colorToHexString","\x6e","\x94","\x74","\x99"),
	HX_HCSTRING("HSVtoARGB","\x72","\x01","\x8c","\x4d"),
	HX_HCSTRING("RGBtoHSV","\x43","\x32","\x3b","\x52"),
	HX_HCSTRING("ARGBtoRGB","\x86","\x67","\x8e","\xe1"),
	HX_HCSTRING("interpolateColor","\xe2","\x30","\x77","\x3c"),
	HX_HCSTRING("interpolateColorWithRGB","\xe5","\xbf","\x13","\x71"),
	HX_HCSTRING("interpolateRGB","\xcc","\x50","\x1a","\x8d"),
	HX_HCSTRING("darken","\x5f","\x36","\x3a","\x21"),
	HX_HCSTRING("brighten","\x23","\xc3","\xb3","\xf8"),
	::String(null()) };

void FlxColorUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxColorUtil","\xad","\xfd","\x80","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColorUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxColorUtil_obj >;
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
} // end namespace util
