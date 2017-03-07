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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#include <openfl/_legacy/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace util{

Void FlxGradient_obj::__construct()
{
	return null();
}

//FlxGradient_obj::~FlxGradient_obj() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return  new FlxGradient_obj; }
hx::ObjectPtr< FlxGradient_obj > FlxGradient_obj::__new()
{  hx::ObjectPtr< FlxGradient_obj > _result_ = new FlxGradient_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGradient_obj > _result_ = new FlxGradient_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGradient_obj::createGradientMatrix( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",24,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(25)
		::openfl::_legacy::geom::Matrix tmp = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::openfl::_legacy::geom::Matrix gradientMatrix = tmp;		HX_STACK_VAR(gradientMatrix,"gradientMatrix");
		HX_STACK_LINE(28)
		int tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Float rot = tmp4;		HX_STACK_VAR(rot,"rot");
		HX_STACK_LINE(31)
		bool tmp5 = (chunkSize == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		if ((tmp5)){
			HX_STACK_LINE(34)
			int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			Float tmp8 = rot;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			gradientMatrix->createGradientBox(tmp6,tmp7,tmp8,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(40)
			int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			Float tmp7 = (Float(height) / Float(chunkSize));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			Float tmp8 = rot;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			gradientMatrix->createGradientBox(tmp6,tmp7,tmp8,(int)0,(int)0);
		}
		HX_STACK_LINE(46)
		Array< Float > alpha = Array_obj< Float >::__new();		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int _g = colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				if ((tmp7)){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(48)
				int ai = tmp8;		HX_STACK_VAR(ai,"ai");
				HX_STACK_LINE(50)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					int tmp10 = colors->__get(ai);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(50)
					int tmp11 = (int(tmp10) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(50)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(50)
					int f = tmp12;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(50)
					tmp9 = (Float(f) / Float((int)255));
				}
				HX_STACK_LINE(50)
				alpha->push(tmp9);
			}
		}
		HX_STACK_LINE(53)
		Array< int > ratio = Array_obj< int >::__new();		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(55)
		bool tmp6 = (colors->length == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		if ((tmp6)){
			HX_STACK_LINE(57)
			ratio[(int)0] = (int)0;
			HX_STACK_LINE(58)
			ratio[(int)1] = (int)255;
		}
		else{
			HX_STACK_LINE(63)
			int tmp7 = (colors->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			Float tmp8 = (Float((int)255) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			int spread = tmp9;		HX_STACK_VAR(spread,"spread");
			HX_STACK_LINE(65)
			ratio->push((int)0);
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(67)
				int tmp10 = (colors->length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				while((true)){
					HX_STACK_LINE(67)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					if ((tmp12)){
						HX_STACK_LINE(67)
						break;
					}
					HX_STACK_LINE(67)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					int ri = tmp13;		HX_STACK_VAR(ri,"ri");
					HX_STACK_LINE(69)
					int tmp14 = (ri * spread);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					ratio->push(tmp14);
				}
			}
			HX_STACK_LINE(72)
			ratio->push((int)255);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< int > &ratio,Array< Float > &alpha,::openfl::_legacy::geom::Matrix &gradientMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",75,0x5a5037d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb") , gradientMatrix,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					__result->Add(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4") , ratio,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		Dynamic tmp7 = _Function_1_1::Block(ratio,alpha,gradientMatrix);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

Array< int > FlxGradient_obj::createGradientArray( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",79,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(80)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int tmp2 = chunkSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		int tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		bool tmp4 = interpolate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp,tmp1,colors,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(81)
		Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(83)
			int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				if ((tmp8)){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(85)
				int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				int tmp11 = data->getPixel32((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				result->push(tmp11);
			}
		}
		HX_STACK_LINE(88)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",104,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(105)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		int tmp2 = chunkSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		int tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		bool tmp4 = interpolate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp,tmp1,colors,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(106)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		::flixel::FlxSprite dest = tmp6;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(107)
		::openfl::_legacy::display::BitmapData tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		dest->set_pixels(tmp7);
		HX_STACK_LINE(108)
		::flixel::FlxSprite tmp8 = dest;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

::openfl::_legacy::display::BitmapData FlxGradient_obj::createGradientBitmapData( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",112,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(114)
		bool tmp = (width < (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		if ((tmp)){
			HX_STACK_LINE(116)
			width = (int)1;
		}
		HX_STACK_LINE(119)
		bool tmp1 = (height < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(121)
			height = (int)1;
		}
		HX_STACK_LINE(125)
		::String tmp2 = (HX_HCSTRING("Gradient: ","\xb6","\xcc","\xa6","\x9a") + width);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		::String tmp3 = (tmp2 + HX_HCSTRING(" x ","\xc8","\xb0","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		::String tmp6 = (tmp5 + HX_HCSTRING(", colors: [","\x51","\x72","\x4d","\x6c"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		::String key = tmp6;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(126)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(127)
		int rgb;		HX_STACK_VAR(rgb,"rgb");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				bool tmp7 = (_g < colors->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(128)
				if ((tmp8)){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(128)
				int tmp9 = colors->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(128)
				int col = tmp9;		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				int tmp10 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(130)
				int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(130)
				a = tmp11;
				HX_STACK_LINE(131)
				int tmp12 = (int(col) & int((int)16777215));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(131)
				rgb = tmp12;
				HX_STACK_LINE(133)
				::String tmp13 = (key + rgb);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				::String tmp14 = (tmp13 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				int tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(133)
				::String tmp17 = (tmp16 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				key = tmp17;
			}
		}
		HX_STACK_LINE(135)
		::String tmp7 = (key + HX_HCSTRING("], chunkSize: ","\x83","\x1f","\x5c","\x35"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		int tmp8 = chunkSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		::String tmp10 = (tmp9 + HX_HCSTRING(", rotation: ","\xd8","\xfa","\x32","\x4d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		int tmp11 = rotation;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(135)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		key = tmp12;
		HX_STACK_LINE(137)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(137)
			::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			bool tmp17 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			if ((tmp17)){
				HX_STACK_LINE(137)
				::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(137)
				::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(137)
				::flixel::util::loaders::CachedGraphics tmp20 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(137)
				::flixel::util::loaders::CachedGraphics tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(137)
				::flixel::util::loaders::CachedGraphics tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(137)
				tmp13 = (tmp22 != null());
			}
			else{
				HX_STACK_LINE(137)
				tmp13 = false;
			}
		}
		HX_STACK_LINE(137)
		if ((tmp13)){
			HX_STACK_LINE(139)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(139)
			::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(139)
			::flixel::util::loaders::CachedGraphics tmp16 = tmp14->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			::openfl::_legacy::display::BitmapData tmp17 = tmp16->bitmap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(139)
			return tmp17;
		}
		HX_STACK_LINE(143)
		int tmp14 = width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(143)
		int tmp15 = height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(143)
		int tmp16 = chunkSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(143)
		int tmp17 = rotation;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(143)
		Dynamic tmp18 = ::flixel::util::FlxGradient_obj::createGradientMatrix(tmp14,tmp15,colors,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(143)
		Dynamic gradient = tmp18;		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(145)
		::openfl::_legacy::display::Shape tmp19 = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(145)
		::openfl::_legacy::display::Shape s = tmp19;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(147)
		bool tmp20 = interpolate;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(147)
		if ((tmp20)){
			HX_STACK_LINE(150)
			::openfl::_legacy::display::Graphics tmp21 = s->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(150)
			::openfl::_legacy::geom::Matrix tmp22 = gradient->__Field(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(150)
			tmp21->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,((cpp::ArrayBase)(colors)),gradient->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ),gradient->__Field(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"), hx::paccDynamic ),tmp22,::openfl::_legacy::display::SpreadMethod_obj::PAD,::openfl::display::InterpolationMethod_obj::RGB,(int)0);
		}
		else{
			HX_STACK_LINE(156)
			::openfl::_legacy::display::Graphics tmp21 = s->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(156)
			::openfl::_legacy::geom::Matrix tmp22 = gradient->__Field(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(156)
			tmp21->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,((cpp::ArrayBase)(colors)),gradient->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ),gradient->__Field(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"), hx::paccDynamic ),tmp22,::openfl::_legacy::display::SpreadMethod_obj::PAD,::openfl::display::InterpolationMethod_obj::LINEAR_RGB,(int)0);
		}
		HX_STACK_LINE(160)
		bool tmp21 = (chunkSize == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(160)
		if ((tmp21)){
			HX_STACK_LINE(162)
			::openfl::_legacy::display::Graphics tmp22 = s->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(162)
			int tmp23 = width;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(162)
			int tmp24 = height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(162)
			tmp22->drawRect((int)0,(int)0,tmp23,tmp24);
		}
		else{
			HX_STACK_LINE(166)
			::openfl::_legacy::display::Graphics tmp22 = s->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(166)
			int tmp23 = width;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(166)
			Float tmp24 = (Float(height) / Float(chunkSize));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(166)
			tmp22->drawRect((int)0,(int)0,tmp23,tmp24);
		}
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp22 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData data = tmp22;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(171)
		bool tmp23 = (chunkSize == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(171)
		if ((tmp23)){
			HX_STACK_LINE(173)
			::openfl::_legacy::display::Shape tmp24 = s;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(173)
			data->draw(tmp24,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(177)
			int tmp24 = width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(177)
			Float tmp25 = (Float(height) / Float(chunkSize));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(177)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(177)
			::openfl::_legacy::display::BitmapData tmp27 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp24,tmp26,true,(int)0,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(177)
			::openfl::_legacy::display::Bitmap tmp28 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp27,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(177)
			::openfl::_legacy::display::Bitmap tempBitmap = tmp28;		HX_STACK_VAR(tempBitmap,"tempBitmap");
			HX_STACK_LINE(178)
			::openfl::_legacy::display::Shape tmp29 = s;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(178)
			tempBitmap->bitmapData->draw(tmp29,null(),null(),null(),null(),null());
			HX_STACK_LINE(179)
			int tmp30 = chunkSize;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(179)
			tempBitmap->set_scaleY(tmp30);
			HX_STACK_LINE(181)
			::openfl::_legacy::geom::Matrix tmp31 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(181)
			::openfl::_legacy::geom::Matrix sM = tmp31;		HX_STACK_VAR(sM,"sM");
			HX_STACK_LINE(182)
			Float tmp32 = tempBitmap->get_scaleX();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(182)
			Float tmp33 = tempBitmap->get_scaleY();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(182)
			sM->scale(tmp32,tmp33);
			HX_STACK_LINE(184)
			::openfl::_legacy::display::Bitmap tmp34 = tempBitmap;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(184)
			::openfl::_legacy::geom::Matrix tmp35 = sM;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(184)
			data->draw(tmp34,tmp35,null(),null(),null(),null());
		}
		HX_STACK_LINE(188)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp24 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(188)
		::openfl::_legacy::display::BitmapData tmp25 = data;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(188)
		::String tmp26 = key;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(188)
		tmp24->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp25,(int)0,(int)0,(int)1,(int)1,false,tmp26);
		HX_STACK_LINE(191)
		::openfl::_legacy::display::BitmapData tmp27 = data;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(191)
		return tmp27;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",210,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(211)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		Float tmp1 = dest->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		if ((tmp2)){
			HX_STACK_LINE(213)
			Float tmp3 = dest->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			width = tmp4;
		}
		HX_STACK_LINE(216)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		Float tmp4 = dest->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		if ((tmp5)){
			HX_STACK_LINE(218)
			Float tmp6 = dest->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			height = tmp7;
		}
		HX_STACK_LINE(221)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		int tmp8 = chunkSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(221)
		bool tmp10 = interpolate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(221)
		::flixel::FlxSprite tmp11 = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(tmp6,tmp7,colors,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(221)
		::flixel::FlxSprite source = tmp11;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(222)
		::flixel::FlxSprite tmp12 = source;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		int tmp13 = destX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(222)
		int tmp14 = destY;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		dest->stamp(tmp12,tmp13,tmp14);
		HX_STACK_LINE(223)
		source->destroy();
		HX_STACK_LINE(224)
		::flixel::FlxSprite tmp15 = dest;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(224)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

::openfl::_legacy::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::_legacy::display::BitmapData dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",243,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(244)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		int tmp1 = dest->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		if ((tmp2)){
			HX_STACK_LINE(246)
			int tmp3 = dest->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			width = tmp3;
		}
		HX_STACK_LINE(249)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		int tmp4 = dest->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		if ((tmp5)){
			HX_STACK_LINE(251)
			int tmp6 = dest->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			height = tmp6;
		}
		HX_STACK_LINE(254)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		int tmp8 = chunkSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(254)
		int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(254)
		bool tmp10 = interpolate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(254)
		::openfl::_legacy::display::BitmapData tmp11 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp6,tmp7,colors,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(254)
		::openfl::_legacy::display::BitmapData source = tmp11;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(255)
		::openfl::_legacy::display::BitmapData tmp12 = source;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(255)
		int tmp13 = source->get_width();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(255)
		int tmp14 = source->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(255)
		::openfl::_legacy::geom::Rectangle tmp15 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(255)
		::openfl::_legacy::geom::Point tmp16 = ::openfl::_legacy::geom::Point_obj::__new(destX,destY);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(255)
		dest->copyPixels(tmp12,tmp15,tmp16,null(),null(),true);
		HX_STACK_LINE(256)
		source->dispose();
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData tmp17 = dest;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(257)
		return tmp17;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

bool FlxGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { outValue = createGradientArray_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { outValue = createGradientMatrix_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { outValue = createGradientFlxSprite_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { outValue = createGradientBitmapData_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { outValue = overlayGradientOnFlxSprite_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { outValue = overlayGradientOnBitmapData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGradient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createGradientMatrix","\x6d","\xb4","\x68","\x83"),
	HX_HCSTRING("createGradientArray","\xed","\xd8","\xac","\x37"),
	HX_HCSTRING("createGradientFlxSprite","\x6b","\x9b","\x09","\xc6"),
	HX_HCSTRING("createGradientBitmapData","\xe5","\xb9","\x19","\x1e"),
	HX_HCSTRING("overlayGradientOnFlxSprite","\x38","\x4b","\x27","\x8c"),
	HX_HCSTRING("overlayGradientOnBitmapData","\x78","\xdd","\xf5","\xb1"),
	::String(null()) };

void FlxGradient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxGradient","\x48","\x2c","\xee","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGradient_obj >;
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
