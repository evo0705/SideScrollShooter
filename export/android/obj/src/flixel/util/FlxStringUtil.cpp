#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

//FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > _result_ = new FlxStringUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > _result_ = new FlxStringUtil_obj();
	_result_->__construct();
	return _result_;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",27,0x4e012e33)
	HX_STACK_ARG(StartTicks,"StartTicks")
	HX_STACK_ARG(EndTicks,"EndTicks")
	HX_STACK_LINE(28)
	int tmp = (EndTicks - StartTicks);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	Float tmp2 = (Float(tmp1) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	::String tmp3 = (tmp2 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",39,0x4e012e33)
	HX_STACK_ARG(Seconds,"Seconds")
	HX_STACK_ARG(ShowMS,"ShowMS")
{
		HX_STACK_LINE(40)
		Float tmp = (Float(Seconds) / Float((int)60));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::String tmp2 = (tmp1 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::String timeString = tmp2;		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(41)
		Float tmp3 = Seconds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		int tmp5 = hx::Mod(tmp4,(int)60);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		int timeStringHelper = tmp5;		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(42)
		bool tmp6 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		if ((tmp6)){
			HX_STACK_LINE(44)
			hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(46)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(47)
		bool tmp7 = ShowMS;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		if ((tmp7)){
			HX_STACK_LINE(49)
			hx::AddEq(timeString,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
			HX_STACK_LINE(50)
			Float tmp8 = Seconds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			Float tmp9 = Seconds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(50)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			Float tmp12 = (tmp11 * (int)100);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(50)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(50)
			timeStringHelper = tmp13;
			HX_STACK_LINE(51)
			bool tmp14 = (timeStringHelper < (int)10);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(51)
			if ((tmp14)){
				HX_STACK_LINE(53)
				hx::AddEq(timeString,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(55)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(58)
		::String tmp8 = timeString;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( cpp::ArrayBase AnyArray){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",69,0x4e012e33)
	HX_STACK_ARG(AnyArray,"AnyArray")
	HX_STACK_LINE(70)
	::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(71)
	bool tmp = (AnyArray != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	if ((tmp)){
		HX_STACK_LINE(71)
		tmp1 = (AnyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);
	}
	else{
		HX_STACK_LINE(71)
		tmp1 = false;
	}
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(73)
		Dynamic tmp2 = AnyArray->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		string = tmp3;
		HX_STACK_LINE(74)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(75)
		int l = AnyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			if ((tmp5)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(78)
			int tmp6 = (i)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			Dynamic tmp7 = AnyArray->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			::String tmp9 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			hx::AddEq(string,tmp9);
		}
	}
	HX_STACK_LINE(81)
	::String tmp2 = string;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",91,0x4e012e33)
	HX_STACK_ARG(AnyMap,"AnyMap")
	HX_STACK_LINE(92)
	::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(93)
	Dynamic tmp = AnyMap->keys();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(94)
			::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(94)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			hx::AddEq(string,tmp2);
			HX_STACK_LINE(95)
			hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
		}
;
	}
	HX_STACK_LINE(98)
	int tmp1 = (string.length - (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	::String tmp2 = string.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",113,0x4e012e33)
	HX_STACK_ARG(Amount,"Amount")
	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
{
		HX_STACK_LINE(114)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(115)
		Float tmp = Amount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		int amount = tmp1;		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(116)
		::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(117)
		::String comma = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(118)
		::String zeroes = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			bool tmp2 = (amount > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			if ((tmp3)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(121)
			bool tmp4 = (string.length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			if ((tmp4)){
				HX_STACK_LINE(121)
				tmp5 = (comma.length <= (int)0);
			}
			else{
				HX_STACK_LINE(121)
				tmp5 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp5)){
				HX_STACK_LINE(123)
				bool tmp6 = EnglishStyle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				if ((tmp6)){
					HX_STACK_LINE(125)
					comma = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(129)
					comma = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
				}
			}
			HX_STACK_LINE(132)
			zeroes = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(133)
			int tmp6 = amount;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			Float tmp7 = (Float(amount) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			int tmp9 = (tmp8 * (int)1000);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			int tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			helper = tmp10;
			HX_STACK_LINE(134)
			Float tmp11 = (Float(amount) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			amount = tmp12;
			HX_STACK_LINE(135)
			bool tmp13 = (amount > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(135)
			if ((tmp13)){
				HX_STACK_LINE(137)
				bool tmp14 = (helper < (int)100);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(137)
				if ((tmp14)){
					HX_STACK_LINE(139)
					hx::AddEq(zeroes,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(141)
				bool tmp15 = (helper < (int)10);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				if ((tmp15)){
					HX_STACK_LINE(143)
					hx::AddEq(zeroes,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
				}
			}
			HX_STACK_LINE(146)
			::String tmp14 = (zeroes + helper);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			::String tmp15 = comma;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(146)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(146)
			::String tmp17 = string;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(146)
			::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(146)
			string = tmp18;
		}
		HX_STACK_LINE(148)
		bool tmp2 = ShowDecimal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		if ((tmp2)){
			HX_STACK_LINE(150)
			Float tmp3 = (Amount * (int)100);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			Float tmp5 = Amount;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			int tmp7 = (tmp6 * (int)100);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			int tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			amount = tmp8;
			HX_STACK_LINE(151)
			bool tmp9 = EnglishStyle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			if ((tmp9)){
				HX_STACK_LINE(151)
				tmp10 = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(151)
				tmp10 = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
			}
			HX_STACK_LINE(151)
			int tmp11 = amount;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(151)
			hx::AddEq(string,tmp12);
			HX_STACK_LINE(152)
			bool tmp13 = (amount < (int)10);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(152)
			if ((tmp13)){
				HX_STACK_LINE(154)
				hx::AddEq(string,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
			}
		}
		HX_STACK_LINE(157)
		::String tmp3 = string;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::formatBytes( Float Bytes,hx::Null< int >  __o_Precision){
int Precision = __o_Precision.Default(2);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatBytes",0x92253a91,"flixel.util.FlxStringUtil.formatBytes","flixel/util/FlxStringUtil.hx",165,0x4e012e33)
	HX_STACK_ARG(Bytes,"Bytes")
	HX_STACK_ARG(Precision,"Precision")
{
		HX_STACK_LINE(166)
		Array< ::String > units = Array_obj< ::String >::__new().Add(HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50")).Add(HX_HCSTRING("kB","\x77","\x5d","\x00","\x00")).Add(HX_HCSTRING("MB","\x55","\x43","\x00","\x00")).Add(HX_HCSTRING("GB","\x1b","\x3e","\x00","\x00")).Add(HX_HCSTRING("TB","\x6e","\x49","\x00","\x00")).Add(HX_HCSTRING("PB","\xf2","\x45","\x00","\x00"));		HX_STACK_VAR(units,"units");
		HX_STACK_LINE(167)
		int curUnit = (int)0;		HX_STACK_VAR(curUnit,"curUnit");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp = (Bytes >= (int)1024);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			if ((tmp)){
				HX_STACK_LINE(168)
				int tmp2 = curUnit;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(168)
				int tmp3 = (units->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(168)
				int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(168)
				tmp1 = (tmp2 < tmp4);
			}
			else{
				HX_STACK_LINE(168)
				tmp1 = false;
			}
			HX_STACK_LINE(168)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			if ((tmp2)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(170)
			hx::DivEq(Bytes,(int)1024);
			HX_STACK_LINE(171)
			(curUnit)++;
		}
		HX_STACK_LINE(173)
		Float tmp = Bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		int tmp1 = Precision;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		Float tmp2 = ::flixel::util::FlxMath_obj::roundDecimal(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		::String tmp3 = units->__get(curUnit);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatBytes,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",183,0x4e012e33)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(184)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	::StringBuf output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			if ((tmp2)){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(186)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			Dynamic tmp5 = Input.charCodeAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(187)
			bool tmp6 = (c >= (int)48);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			if ((tmp6)){
				HX_STACK_LINE(187)
				tmp7 = (c <= (int)57);
			}
			else{
				HX_STACK_LINE(187)
				tmp7 = false;
			}
			HX_STACK_LINE(187)
			if ((tmp7)){
				HX_STACK_LINE(188)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(188)
				int tmp8 = c1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				output->b->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(191)
	::String tmp1 = output->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_HCSTRING("FFFFFF","\xc0","\x27","\x82","\x79"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",207,0x4e012e33)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Bold,"Bold")
	HX_STACK_ARG(Italic,"Italic")
	HX_STACK_ARG(Underlined,"Underlined")
{
		HX_STACK_LINE(208)
		::String tmp = (HX_HCSTRING("<font size='","\xc0","\x5b","\x1a","\xa4") + Size);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::String tmp1 = (tmp + HX_HCSTRING("' color='#","\x2f","\x1d","\x64","\x33"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		::String tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		::String tmp4 = (tmp3 + HX_HCSTRING("'>","\x37","\x22","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		::String prefix = tmp4;		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(209)
		::String suffix = HX_HCSTRING("</font>","\x3c","\x82","\x5f","\x8e");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(211)
		bool tmp5 = Bold;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		if ((tmp5)){
			HX_STACK_LINE(213)
			::String tmp6 = (HX_HCSTRING("<b>","\xd8","\xdc","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			prefix = tmp6;
			HX_STACK_LINE(214)
			::String tmp7 = (suffix + HX_HCSTRING("</b>","\xcf","\xcc","\xcc","\x27"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			suffix = tmp7;
		}
		HX_STACK_LINE(216)
		bool tmp6 = Italic;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		if ((tmp6)){
			HX_STACK_LINE(218)
			::String tmp7 = (HX_HCSTRING("<i>","\xf1","\xe2","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			prefix = tmp7;
			HX_STACK_LINE(219)
			::String tmp8 = (suffix + HX_HCSTRING("</i>","\xe8","\xd2","\xcc","\x27"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			suffix = tmp8;
		}
		HX_STACK_LINE(221)
		bool tmp7 = Underlined;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		if ((tmp7)){
			HX_STACK_LINE(223)
			::String tmp8 = (HX_HCSTRING("<u>","\x65","\xed","\x2d","\x00") + prefix);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			prefix = tmp8;
			HX_STACK_LINE(224)
			::String tmp9 = (suffix + HX_HCSTRING("</u>","\x5c","\xdd","\xcc","\x27"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			suffix = tmp9;
		}
		HX_STACK_LINE(227)
		::String tmp8 = (prefix + Text);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(227)
		::String tmp9 = suffix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getDomain( ::String url){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",266,0x4e012e33)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(267)
	int tmp = url.indexOf(HX_HCSTRING("://","\xda","\x2b","\x2c","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	int urlStart = tmp1;		HX_STACK_VAR(urlStart,"urlStart");
	HX_STACK_LINE(268)
	int tmp2 = urlStart;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	int tmp3 = url.indexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	int urlEnd = tmp3;		HX_STACK_VAR(urlEnd,"urlEnd");
	HX_STACK_LINE(269)
	int tmp4 = urlStart;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	int tmp5 = urlEnd;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	::String tmp6 = url.substring(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	::String home = tmp6;		HX_STACK_VAR(home,"home");
	HX_STACK_LINE(270)
	int tmp7 = home.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(270)
	int LastDot = tmp8;		HX_STACK_VAR(LastDot,"LastDot");
	HX_STACK_LINE(271)
	int tmp9 = LastDot;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(271)
	int tmp10 = home.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(271)
	int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(271)
	int domEnd = tmp11;		HX_STACK_VAR(domEnd,"domEnd");
	HX_STACK_LINE(272)
	int tmp12 = domEnd;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(272)
	int tmp13 = home.length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(272)
	::String tmp14 = home.substring(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(272)
	home = tmp14;
	HX_STACK_LINE(273)
	::String tmp15 = home.split(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(273)
	home = tmp15;
	HX_STACK_LINE(274)
	bool tmp16 = (home == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(274)
	::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(274)
	if ((tmp16)){
		HX_STACK_LINE(274)
		tmp17 = HX_HCSTRING("local","\x6b","\xc9","\xf0","\x78");
	}
	else{
		HX_STACK_LINE(274)
		tmp17 = home;
	}
	HX_STACK_LINE(274)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( Dynamic Obj1,Dynamic Obj2,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",286,0x4e012e33)
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(287)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(287)
			Dynamic tmp1 = Obj1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			if ((tmp2)){
				HX_STACK_LINE(287)
				cl = ((::hx::Class)(Obj1));
			}
			else{
				HX_STACK_LINE(287)
				Dynamic tmp3 = Obj1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(287)
				::hx::Class tmp4 = ::Type_obj::getClass(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				cl = tmp4;
			}
			HX_STACK_LINE(287)
			::hx::Class tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			::String tmp4 = ::Type_obj::getClassName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(287)
			bool tmp5 = (s != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			if ((tmp5)){
				HX_STACK_LINE(287)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				s = tmp7;
				HX_STACK_LINE(287)
				bool tmp8 = Simple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				if ((tmp8)){
					HX_STACK_LINE(287)
					int tmp9 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(287)
					int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(287)
					::String tmp11 = s.substr(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(287)
					s = tmp11;
				}
			}
			HX_STACK_LINE(287)
			tmp = s;
		}
		HX_STACK_LINE(287)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(287)
			Dynamic tmp2 = Obj2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			if ((tmp3)){
				HX_STACK_LINE(287)
				cl = ((::hx::Class)(Obj2));
			}
			else{
				HX_STACK_LINE(287)
				Dynamic tmp4 = Obj2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				cl = tmp5;
			}
			HX_STACK_LINE(287)
			::hx::Class tmp4 = cl;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			::String tmp5 = ::Type_obj::getClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			::String s = tmp5;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(287)
			bool tmp6 = (s != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			if ((tmp6)){
				HX_STACK_LINE(287)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				s = tmp8;
				HX_STACK_LINE(287)
				bool tmp9 = Simple;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				if ((tmp9)){
					HX_STACK_LINE(287)
					int tmp10 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(287)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(287)
					::String tmp12 = s.substr(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(287)
					s = tmp12;
				}
			}
			HX_STACK_LINE(287)
			tmp1 = s;
		}
		HX_STACK_LINE(287)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

Array< int > FlxStringUtil_obj::toIntArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",298,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(299)
	bool tmp = (Data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	if ((tmp)){
		HX_STACK_LINE(299)
		tmp1 = (Data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(299)
		tmp1 = false;
	}
	HX_STACK_LINE(299)
	if ((tmp1)){
		HX_STACK_LINE(301)
		Array< ::String > strArray = Data.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(302)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(303)
			while((true)){
				HX_STACK_LINE(303)
				bool tmp2 = (_g < strArray->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(303)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				if ((tmp3)){
					HX_STACK_LINE(303)
					break;
				}
				HX_STACK_LINE(303)
				::String tmp4 = strArray->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(303)
				::String str = tmp4;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(303)
				++(_g);
				HX_STACK_LINE(305)
				::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				iArray->push(tmp6);
			}
		}
		HX_STACK_LINE(307)
		return iArray;
	}
	HX_STACK_LINE(309)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

Array< Float > FlxStringUtil_obj::toFloatArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",319,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(320)
	bool tmp = (Data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	if ((tmp)){
		HX_STACK_LINE(320)
		tmp1 = (Data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(320)
		tmp1 = false;
	}
	HX_STACK_LINE(320)
	if ((tmp1)){
		HX_STACK_LINE(322)
		Array< ::String > strArray = Data.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(323)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(324)
			while((true)){
				HX_STACK_LINE(324)
				bool tmp2 = (_g < strArray->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(324)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(324)
				if ((tmp3)){
					HX_STACK_LINE(324)
					break;
				}
				HX_STACK_LINE(324)
				::String tmp4 = strArray->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(324)
				::String str = tmp4;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(324)
				++(_g);
				HX_STACK_LINE(326)
				::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				Float tmp6 = ::Std_obj::parseFloat(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				fArray->push(tmp6);
			}
		}
		HX_STACK_LINE(328)
		return fArray;
	}
	HX_STACK_LINE(330)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",342,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Invert,"Invert")
{
		HX_STACK_LINE(343)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(344)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(345)
		::String csv = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(346)
		Float tmp = (Float(Data->length) / Float(Width));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		int Height = tmp1;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(347)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(348)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			bool tmp2 = (row < Height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			if ((tmp3)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(352)
			column = (int)0;
			HX_STACK_LINE(354)
			while((true)){
				HX_STACK_LINE(354)
				bool tmp4 = (column < Width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(354)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(354)
				if ((tmp5)){
					HX_STACK_LINE(354)
					break;
				}
				HX_STACK_LINE(356)
				int tmp6 = Data->__get(offset);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(356)
				index = tmp6;
				HX_STACK_LINE(358)
				bool tmp7 = Invert;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				if ((tmp7)){
					HX_STACK_LINE(360)
					bool tmp8 = (index == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(360)
					if ((tmp8)){
						HX_STACK_LINE(362)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(364)
						bool tmp9 = (index == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(364)
						if ((tmp9)){
							HX_STACK_LINE(366)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(370)
				bool tmp8 = (column == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(370)
				if ((tmp8)){
					HX_STACK_LINE(372)
					bool tmp9 = (row == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(372)
					if ((tmp9)){
						HX_STACK_LINE(374)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(378)
						::String tmp10 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + index);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(378)
						hx::AddEq(csv,tmp10);
					}
				}
				else{
					HX_STACK_LINE(383)
					::String tmp9 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + index);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(383)
					hx::AddEq(csv,tmp9);
				}
				HX_STACK_LINE(386)
				(column)++;
				HX_STACK_LINE(387)
				(offset)++;
			}
			HX_STACK_LINE(390)
			(row)++;
		}
		HX_STACK_LINE(393)
		::String tmp2 = csv;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",407,0x4e012e33)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(ColorMap,"ColorMap")
{
		HX_STACK_LINE(408)
		bool tmp = (Scale < (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		if ((tmp)){
			HX_STACK_LINE(410)
			Scale = (int)1;
		}
		HX_STACK_LINE(414)
		bool tmp1 = (Scale > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		if ((tmp1)){
			HX_STACK_LINE(416)
			::openfl::_legacy::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(417)
			int tmp2 = Bitmap->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			int tmp3 = Scale;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			int tmp5 = Bitmap->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			int tmp6 = Scale;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp4,tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			Bitmap = tmp8;
			HX_STACK_LINE(440)
			::openfl::_legacy::geom::Matrix tmp9 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(440)
			::openfl::_legacy::geom::Matrix mtx = tmp9;		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(441)
			int tmp10 = Scale;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(441)
			int tmp11 = Scale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(441)
			mtx->scale(tmp10,tmp11);
			HX_STACK_LINE(442)
			::openfl::_legacy::display::BitmapData tmp12 = bd;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(442)
			::openfl::_legacy::geom::Matrix tmp13 = mtx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(442)
			Bitmap->draw(tmp12,tmp13,null(),null(),null(),null());
		}
		HX_STACK_LINE(447)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(448)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(449)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(450)
		::String csv = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(451)
		int tmp2 = Bitmap->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		int bitmapWidth = tmp2;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(452)
		int tmp3 = Bitmap->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		int bitmapHeight = tmp3;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(454)
		while((true)){
			HX_STACK_LINE(454)
			bool tmp4 = (row < bitmapHeight);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(454)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(454)
			if ((tmp5)){
				HX_STACK_LINE(454)
				break;
			}
			HX_STACK_LINE(456)
			column = (int)0;
			HX_STACK_LINE(458)
			while((true)){
				HX_STACK_LINE(458)
				bool tmp6 = (column < bitmapWidth);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				if ((tmp7)){
					HX_STACK_LINE(458)
					break;
				}
				HX_STACK_LINE(461)
				int tmp8 = column;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(461)
				int tmp9 = row;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(461)
				int tmp10 = Bitmap->getPixel(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(461)
				pixel = tmp10;
				HX_STACK_LINE(463)
				bool tmp11 = (ColorMap != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(463)
				if ((tmp11)){
					HX_STACK_LINE(465)
					int tmp12 = pixel;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(465)
					int tmp13 = ColorMap->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(465)
					pixel = tmp13;
				}
				else{
					HX_STACK_LINE(467)
					bool tmp12 = Invert;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(467)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(467)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(467)
					if ((tmp13)){
						HX_STACK_LINE(467)
						tmp14 = (pixel > (int)0);
					}
					else{
						HX_STACK_LINE(467)
						tmp14 = false;
					}
					HX_STACK_LINE(467)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(467)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(467)
					if ((tmp15)){
						HX_STACK_LINE(467)
						bool tmp17 = Invert;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(467)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(467)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(467)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(467)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(467)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(467)
						if ((tmp22)){
							HX_STACK_LINE(467)
							tmp16 = (pixel == (int)0);
						}
						else{
							HX_STACK_LINE(467)
							tmp16 = false;
						}
					}
					else{
						HX_STACK_LINE(467)
						tmp16 = true;
					}
					HX_STACK_LINE(467)
					if ((tmp16)){
						HX_STACK_LINE(469)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(473)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(477)
				bool tmp12 = (column == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(477)
				if ((tmp12)){
					HX_STACK_LINE(479)
					bool tmp13 = (row == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(479)
					if ((tmp13)){
						HX_STACK_LINE(481)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(485)
						::String tmp14 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + pixel);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(485)
						hx::AddEq(csv,tmp14);
					}
				}
				else{
					HX_STACK_LINE(490)
					::String tmp13 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + pixel);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(490)
					hx::AddEq(csv,tmp13);
				}
				HX_STACK_LINE(493)
				(column)++;
			}
			HX_STACK_LINE(496)
			(row)++;
		}
		HX_STACK_LINE(499)
		::String tmp4 = csv;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(499)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",512,0x4e012e33)
	HX_STACK_ARG(ImageFile,"ImageFile")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
{
		HX_STACK_LINE(513)
		::openfl::_legacy::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(515)
		Dynamic tmp = ImageFile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(515)
		if ((tmp1)){
			HX_STACK_LINE(517)
			::openfl::_legacy::display::BitmapData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				::String id = ImageFile;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(517)
				::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(517)
				tmp2 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp3,false);
			}
			HX_STACK_LINE(517)
			tempBitmapData = tmp2;
		}
		else{
			HX_STACK_LINE(521)
			Dynamic tmp2 = ImageFile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			Dynamic tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(521)
			::openfl::_legacy::display::BitmapData tmp4 = tmp3->__Field(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(521)
			tempBitmapData = tmp4;
		}
		HX_STACK_LINE(524)
		::openfl::_legacy::display::BitmapData tmp2 = tempBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(524)
		bool tmp3 = Invert;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		int tmp4 = Scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		::String tmp5 = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(524)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString( Array< ::Dynamic > LabelValuePairs){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",534,0x4e012e33)
	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
	HX_STACK_LINE(535)
	::String output = HX_HCSTRING("(","\x28","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		while((true)){
			HX_STACK_LINE(536)
			bool tmp = (_g < LabelValuePairs->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(536)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(536)
			if ((tmp1)){
				HX_STACK_LINE(536)
				break;
			}
			HX_STACK_LINE(536)
			::flixel::util::LabelValuePair tmp2 = LabelValuePairs->__get(_g).StaticCast< ::flixel::util::LabelValuePair >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			::flixel::util::LabelValuePair pair = tmp2;		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(536)
			++(_g);
			HX_STACK_LINE(538)
			::String tmp3 = (pair->label + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(538)
			hx::AddEq(output,tmp3);
			HX_STACK_LINE(539)
			Dynamic value = pair->value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(540)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(540)
			if ((tmp5)){
				HX_STACK_LINE(542)
				Float tmp6 = ((Float)(value));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(542)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp7 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(542)
				int tmp8 = tmp7->__Field(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(542)
				Float tmp9 = ::flixel::util::FlxMath_obj::roundDecimal(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(542)
				value = tmp9;
			}
			HX_STACK_LINE(544)
			Dynamic tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			::String tmp8 = (tmp7 + HX_HCSTRING(" | ","\x44","\xb4","\x18","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			hx::AddEq(output,tmp8);
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				::flixel::util::FlxPool tmp9 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(545)
				::flixel::util::LabelValuePair tmp10 = pair;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(545)
				tmp9->put(tmp10);
			}
		}
	}
	HX_STACK_LINE(548)
	int tmp = (output.length - (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	::String tmp1 = output.substr((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(548)
	output = tmp2;
	HX_STACK_LINE(549)
	::String tmp3 = (output + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(549)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

bool FlxStringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { outValue = getDomain_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { outValue = formatTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { outValue = htmlFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { outValue = toIntArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { outValue = arrayToCSV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { outValue = imageToCSV_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { outValue = formatTicks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatArray") ) { outValue = formatArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { outValue = formatMoney_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatBytes") ) { outValue = formatBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { outValue = bitmapToCSV_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { outValue = filterDigits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { outValue = toFloatArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { outValue = sameClassName_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { outValue = getDebugString_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { outValue = formatStringMap_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxStringUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("formatTicks","\xbf","\x87","\x47","\xc9"),
	HX_HCSTRING("formatTime","\xe4","\xee","\x61","\x0c"),
	HX_HCSTRING("formatArray","\xe2","\xc6","\xa8","\xde"),
	HX_HCSTRING("formatStringMap","\x14","\x64","\x33","\x33"),
	HX_HCSTRING("formatMoney","\x89","\x13","\x79","\xc5"),
	HX_HCSTRING("formatBytes","\xb4","\x61","\xb1","\x76"),
	HX_HCSTRING("filterDigits","\xfe","\x37","\x80","\xc1"),
	HX_HCSTRING("htmlFormat","\x02","\xfb","\x4f","\xcb"),
	HX_HCSTRING("getDomain","\x7a","\x3a","\xd7","\xa9"),
	HX_HCSTRING("sameClassName","\x5d","\x52","\x26","\x79"),
	HX_HCSTRING("toIntArray","\xc5","\x22","\x29","\xe0"),
	HX_HCSTRING("toFloatArray","\xb8","\x73","\x07","\xe6"),
	HX_HCSTRING("arrayToCSV","\xb2","\x30","\x3a","\x0e"),
	HX_HCSTRING("bitmapToCSV","\x9c","\x56","\x63","\x54"),
	HX_HCSTRING("imageToCSV","\xb0","\xdf","\xda","\x1f"),
	HX_HCSTRING("getDebugString","\x8e","\x42","\x41","\xa1"),
	::String(null()) };

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxStringUtil","\xcb","\x21","\xbd","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxStringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxStringUtil_obj >;
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
