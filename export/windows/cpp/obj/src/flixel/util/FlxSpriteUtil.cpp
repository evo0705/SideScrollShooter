#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
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
namespace flixel{
namespace util{

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

//FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > _result_ = new FlxSpriteUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > _result_ = new FlxSpriteUtil_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::openfl::_legacy::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",52,0xc647097f)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(53)
	::openfl::_legacy::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(54)
	Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(56)
		::openfl::_legacy::display::BitmapData tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::String id = source;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(56)
			::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			tmp2 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp3,false);
		}
		HX_STACK_LINE(56)
		data = tmp2;
	}
	else{
		HX_STACK_LINE(58)
		Dynamic tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		if ((tmp3)){
			HX_STACK_LINE(60)
			Dynamic tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			Dynamic tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			data = tmp5->__Field(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(62)
			Dynamic tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			if ((tmp5)){
				HX_STACK_LINE(64)
				::openfl::_legacy::display::BitmapData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				tmp6 = hx::TCast< ::openfl::_legacy::display::BitmapData >::cast(source);
				HX_STACK_LINE(64)
				::openfl::_legacy::display::BitmapData tmp7 = tmp6->clone();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				data = tmp7;
			}
			else{
				HX_STACK_LINE(68)
				return null();
			}
		}
	}
	HX_STACK_LINE(70)
	::openfl::_legacy::display::BitmapData maskData = null();		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(71)
	Dynamic tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	if ((tmp3)){
		HX_STACK_LINE(73)
		::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::String id = mask;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(73)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			tmp4 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp5,false);
		}
		HX_STACK_LINE(73)
		maskData = tmp4;
	}
	else{
		HX_STACK_LINE(75)
		Dynamic tmp4 = mask;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		if ((tmp5)){
			HX_STACK_LINE(77)
			Dynamic tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			maskData = tmp7->__Field(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(79)
			Dynamic tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			if ((tmp7)){
				HX_STACK_LINE(81)
				maskData = mask;
			}
			else{
				HX_STACK_LINE(85)
				return null();
			}
		}
	}
	HX_STACK_LINE(88)
	::openfl::_legacy::display::BitmapData tmp4 = maskData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	int tmp5 = data->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Rectangle tmp7 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	data->copyChannel(tmp4,tmp7,tmp8,(int)8,(int)8);
	HX_STACK_LINE(89)
	::openfl::_legacy::display::BitmapData tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(89)
	output->set_pixels(tmp9);
	HX_STACK_LINE(90)
	::flixel::FlxSprite tmp10 = output;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(90)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",106,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		bool Force = false;		HX_STACK_VAR(Force,"Force");
		HX_STACK_LINE(107)
		sprite->calcFrame(true);
	}
	HX_STACK_LINE(108)
	::openfl::_legacy::display::BitmapData tmp = sprite->get_pixels();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	::openfl::_legacy::display::BitmapData data = tmp1;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(109)
	::openfl::_legacy::display::BitmapData tmp2 = mask->get_pixels();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	Float tmp3 = sprite->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	Float tmp4 = sprite->get_height();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(109)
	data->copyChannel(tmp2,tmp5,tmp6,(int)8,(int)8);
	HX_STACK_LINE(110)
	::openfl::_legacy::display::BitmapData tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(110)
	output->set_pixels(tmp7);
	HX_STACK_LINE(111)
	::flixel::FlxSprite tmp8 = output;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(111)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",126,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Left,"Left")
	HX_STACK_ARG(Right,"Right")
	HX_STACK_ARG(Top,"Top")
	HX_STACK_ARG(Bottom,"Bottom")
{
		HX_STACK_LINE(127)
		bool tmp = Left;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(127)
			Float tmp2 = (sprite->x + sprite->frameWidth);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			tmp1 = (tmp3 <= (int)0);
		}
		else{
			HX_STACK_LINE(127)
			tmp1 = false;
		}
		HX_STACK_LINE(127)
		if ((tmp1)){
			HX_STACK_LINE(129)
			int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			sprite->set_x(tmp2);
		}
		else{
			HX_STACK_LINE(131)
			bool tmp2 = Right;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			if ((tmp2)){
				HX_STACK_LINE(131)
				Float tmp4 = sprite->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(131)
				int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				tmp3 = (tmp4 >= tmp6);
			}
			else{
				HX_STACK_LINE(131)
				tmp3 = false;
			}
			HX_STACK_LINE(131)
			if ((tmp3)){
				HX_STACK_LINE(133)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(136)
		bool tmp2 = Top;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		if ((tmp2)){
			HX_STACK_LINE(136)
			Float tmp4 = (sprite->y + sprite->frameHeight);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			tmp3 = (tmp5 <= (int)0);
		}
		else{
			HX_STACK_LINE(136)
			tmp3 = false;
		}
		HX_STACK_LINE(136)
		if ((tmp3)){
			HX_STACK_LINE(138)
			int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			sprite->set_y(tmp4);
		}
		else{
			HX_STACK_LINE(140)
			bool tmp4 = Bottom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(140)
				Float tmp6 = sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(140)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(140)
				tmp5 = (tmp6 >= tmp8);
			}
			else{
				HX_STACK_LINE(140)
				tmp5 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp5)){
				HX_STACK_LINE(142)
				sprite->set_y((int)0);
			}
		}
		HX_STACK_LINE(144)
		::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_MinX,hx::Null< Float >  __o_MaxX,hx::Null< Float >  __o_MinY,hx::Null< Float >  __o_MaxY){
Float MinX = __o_MinX.Default(0);
Float MaxX = __o_MaxX.Default(0);
Float MinY = __o_MinY.Default(0);
Float MaxY = __o_MaxY.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",159,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(MinX,"MinX")
	HX_STACK_ARG(MaxX,"MaxX")
	HX_STACK_ARG(MinY,"MinY")
	HX_STACK_ARG(MaxY,"MaxY")
{
		HX_STACK_LINE(160)
		bool tmp = (MaxX <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		if ((tmp)){
			HX_STACK_LINE(162)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			MaxX = tmp1;
		}
		HX_STACK_LINE(164)
		bool tmp1 = (MaxY <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(166)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			MaxY = tmp2;
		}
		HX_STACK_LINE(169)
		hx::SubEq(MaxX,sprite->frameWidth);
		HX_STACK_LINE(170)
		hx::SubEq(MaxY,sprite->frameHeight);
		HX_STACK_LINE(172)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			Float Value = sprite->x;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(172)
			bool tmp3 = (Value < MinX);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			if ((tmp3)){
				HX_STACK_LINE(172)
				tmp4 = MinX;
			}
			else{
				HX_STACK_LINE(172)
				tmp4 = Value;
			}
			HX_STACK_LINE(172)
			Float lowerBound = tmp4;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(172)
			bool tmp5 = (lowerBound > MaxX);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			if ((tmp5)){
				HX_STACK_LINE(172)
				tmp2 = MaxX;
			}
			else{
				HX_STACK_LINE(172)
				tmp2 = lowerBound;
			}
		}
		HX_STACK_LINE(172)
		sprite->set_x(tmp2);
		HX_STACK_LINE(173)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			Float Value = sprite->y;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(173)
			bool tmp4 = (Value < MinY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			if ((tmp4)){
				HX_STACK_LINE(173)
				tmp5 = MinY;
			}
			else{
				HX_STACK_LINE(173)
				tmp5 = Value;
			}
			HX_STACK_LINE(173)
			Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(173)
			bool tmp6 = (lowerBound > MaxY);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			if ((tmp6)){
				HX_STACK_LINE(173)
				tmp3 = MaxY;
			}
			else{
				HX_STACK_LINE(173)
				tmp3 = lowerBound;
			}
		}
		HX_STACK_LINE(173)
		sprite->set_y(tmp3);
		HX_STACK_LINE(175)
		::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",189,0xc647097f)
	HX_STACK_ARG(objects,"objects")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing")
	HX_STACK_ARG(verticalSpacing,"verticalSpacing")
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds")
{
		HX_STACK_LINE(190)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(191)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			int _g = objects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(193)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				if ((tmp1)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				::flixel::FlxObject tmp3 = objects->__get(i).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(195)
				::flixel::FlxObject object = tmp3;		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(197)
				bool tmp4 = spaceFromBounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(197)
				if ((tmp4)){
					HX_STACK_LINE(199)
					int tmp5 = (startX + prevWidth);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(199)
					int tmp6 = (i * horizontalSpacing);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(199)
					int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(199)
					object->set_x(tmp7);
					HX_STACK_LINE(200)
					int tmp8 = (startY + prevHeight);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					int tmp9 = (i * verticalSpacing);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(200)
					object->set_y(tmp10);
				}
				else{
					HX_STACK_LINE(204)
					int tmp5 = startX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(204)
					int tmp6 = (i * horizontalSpacing);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(204)
					int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(204)
					object->set_x(tmp7);
					HX_STACK_LINE(205)
					int tmp8 = startY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(205)
					int tmp9 = (i * verticalSpacing);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(205)
					int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(205)
					object->set_y(tmp10);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxObject FlxSpriteUtil_obj::screenCenter( ::flixel::FlxObject object,hx::Null< bool >  __o_xAxis,hx::Null< bool >  __o_yAxis){
bool xAxis = __o_xAxis.Default(true);
bool yAxis = __o_yAxis.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenCenter",0xb5308930,"flixel.util.FlxSpriteUtil.screenCenter","flixel/util/FlxSpriteUtil.hx",219,0xc647097f)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_ARG(yAxis,"yAxis")
{
		HX_STACK_LINE(220)
		bool tmp = xAxis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		if ((tmp)){
			HX_STACK_LINE(222)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(222)
			Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			Float tmp3 = object->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			object->set_x(tmp5);
		}
		HX_STACK_LINE(225)
		bool tmp1 = yAxis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp1)){
			HX_STACK_LINE(227)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			Float tmp4 = object->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			object->set_y(tmp6);
		}
		HX_STACK_LINE(230)
		::flixel::FlxObject tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,screenCenter,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",249,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		tmp->clear();
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			if ((tmp1)){
				HX_STACK_LINE(250)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(250)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(250)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(250)
				if ((tmp2)){
					HX_STACK_LINE(250)
					color = (int)0;
					HX_STACK_LINE(250)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(250)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(250)
						int Color = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color,"Color");
						HX_STACK_LINE(250)
						int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(250)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(250)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(250)
						int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(250)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(250)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(250)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(250)
						int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(250)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(250)
					color = tmp3;
					HX_STACK_LINE(250)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(250)
					{
						HX_STACK_LINE(250)
						int Color = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color,"Color");
						HX_STACK_LINE(250)
						int tmp5 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(250)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(250)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(250)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(250)
					alpha = tmp4;
				}
				HX_STACK_LINE(250)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(250)
				if ((tmp3)){
					HX_STACK_LINE(250)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(250)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(250)
				if ((tmp4)){
					HX_STACK_LINE(250)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(250)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(250)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(250)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(250)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(250)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(250)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(250)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		if ((tmp1)){
			HX_STACK_LINE(250)
			tmp2 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		else{
			HX_STACK_LINE(250)
			tmp2 = false;
		}
		HX_STACK_LINE(250)
		if ((tmp2)){
			HX_STACK_LINE(250)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				Dynamic tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				int Color = tmp5;		HX_STACK_VAR(Color,"Color");
				HX_STACK_LINE(250)
				int tmp6 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				int tmp9 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(250)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(250)
				int tmp11 = (int(tmp10) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(250)
				int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(250)
				int tmp13 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(250)
				tmp4 = (int(tmp12) | int(tmp13));
			}
			HX_STACK_LINE(250)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				Dynamic tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				int Color = tmp6;		HX_STACK_VAR(Color,"Color");
				HX_STACK_LINE(250)
				int tmp7 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(250)
				int f = tmp8;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(250)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(250)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(250)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			int tmp4 = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			int tmp7 = (int)0;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(250)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(250)
			int tmp11 = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(250)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(250)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(250)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(250)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(250)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(250)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(251)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	Float tmp1 = StartX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	Float tmp2 = StartY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	tmp->moveTo(tmp1,tmp2);
	HX_STACK_LINE(252)
	::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	Float tmp4 = EndX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	Float tmp5 = EndY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(252)
	tmp3->lineTo(tmp4,tmp5);
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		::openfl::_legacy::display::Graphics tmp6 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(253)
		tmp6->endFill();
		HX_STACK_LINE(253)
		::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(253)
		Dynamic tmp8 = drawStyle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(253)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp7,tmp8);
		HX_STACK_LINE(253)
		sprite;
	}
	HX_STACK_LINE(254)
	::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(254)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",272,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		tmp->clear();
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			if ((tmp1)){
				HX_STACK_LINE(273)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(273)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(273)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				if ((tmp2)){
					HX_STACK_LINE(273)
					color = (int)0;
					HX_STACK_LINE(273)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(273)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(273)
					{
						HX_STACK_LINE(273)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(273)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(273)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(273)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(273)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(273)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(273)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(273)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(273)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(273)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(273)
					color = tmp3;
					HX_STACK_LINE(273)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(273)
					{
						HX_STACK_LINE(273)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(273)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(273)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(273)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(273)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(273)
					alpha = tmp4;
				}
				HX_STACK_LINE(273)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(273)
				if ((tmp3)){
					HX_STACK_LINE(273)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(273)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				if ((tmp4)){
					HX_STACK_LINE(273)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(273)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(273)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(273)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(273)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(273)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		if ((tmp1)){
			HX_STACK_LINE(273)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(273)
			tmp2 = false;
		}
		HX_STACK_LINE(273)
		if ((tmp2)){
			HX_STACK_LINE(273)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(273)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(273)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(273)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(273)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(273)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(273)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(273)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(273)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(273)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(273)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(273)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(273)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(273)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(273)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(273)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(273)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(274)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(274)
	tmp->drawRect(tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		tmp5->endFill();
		HX_STACK_LINE(275)
		::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Dynamic tmp7 = drawStyle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp6,tmp7);
		HX_STACK_LINE(275)
		sprite;
	}
	HX_STACK_LINE(276)
	::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(276)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",296,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(EllipseWidth,"EllipseWidth")
	HX_STACK_ARG(EllipseHeight,"EllipseHeight")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		tmp->clear();
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(297)
			if ((tmp1)){
				HX_STACK_LINE(297)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(297)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(297)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				if ((tmp2)){
					HX_STACK_LINE(297)
					color = (int)0;
					HX_STACK_LINE(297)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(297)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(297)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(297)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(297)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(297)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(297)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(297)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(297)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(297)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(297)
					color = tmp3;
					HX_STACK_LINE(297)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(297)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(297)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(297)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(297)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(297)
					alpha = tmp4;
				}
				HX_STACK_LINE(297)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				if ((tmp3)){
					HX_STACK_LINE(297)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(297)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(297)
				if ((tmp4)){
					HX_STACK_LINE(297)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(297)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(297)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(297)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(297)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(297)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		if ((tmp1)){
			HX_STACK_LINE(297)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(297)
			tmp2 = false;
		}
		HX_STACK_LINE(297)
		if ((tmp2)){
			HX_STACK_LINE(297)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(297)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(297)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(297)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(297)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(297)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(297)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(297)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(297)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(297)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(297)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(297)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(297)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(297)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(297)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(298)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(298)
	Float tmp5 = EllipseWidth;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(298)
	Float tmp6 = EllipseHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(298)
	tmp->drawRoundRect(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(299)
		tmp7->endFill();
		HX_STACK_LINE(299)
		::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(299)
		Dynamic tmp9 = drawStyle;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(299)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp8,tmp9);
		HX_STACK_LINE(299)
		sprite;
	}
	HX_STACK_LINE(300)
	::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxSpriteUtil_obj,drawRoundRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< int >  __o_Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
Float X = __o_X.Default(-1);
Float Y = __o_Y.Default(-1);
Float Radius = __o_Radius.Default(-1);
int Color = __o_Color.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",346,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(347)
		bool tmp = (X == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		if ((tmp1)){
			HX_STACK_LINE(347)
			tmp2 = (Y == (int)-1);
		}
		else{
			HX_STACK_LINE(347)
			tmp2 = true;
		}
		HX_STACK_LINE(347)
		if ((tmp2)){
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint tmp3 = sprite->getGraphicMidpoint(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			::flixel::util::FlxPoint midPoint = tmp3;		HX_STACK_VAR(midPoint,"midPoint");
			HX_STACK_LINE(351)
			bool tmp4 = (X == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			if ((tmp4)){
				HX_STACK_LINE(352)
				X = midPoint->x;
			}
			HX_STACK_LINE(354)
			bool tmp5 = (Y == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			if ((tmp5)){
				HX_STACK_LINE(355)
				Y = midPoint->y;
			}
		}
		HX_STACK_LINE(359)
		bool tmp3 = (Radius < (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		if ((tmp3)){
			HX_STACK_LINE(361)
			int tmp4 = sprite->frameWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(361)
			int tmp5 = sprite->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(361)
			Float tmp6 = ::Math_obj::min(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(361)
			Float minVal = tmp6;		HX_STACK_VAR(minVal,"minVal");
			HX_STACK_LINE(362)
			Float tmp7 = (Float(minVal) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(362)
			Radius = tmp7;
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			tmp4->clear();
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				bool tmp5 = (lineStyle != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				if ((tmp5)){
					HX_STACK_LINE(365)
					int color;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(365)
					Float alpha;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(365)
					bool tmp6 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(365)
						color = (int)0;
						HX_STACK_LINE(365)
						alpha = (int)1;
					}
					else{
						HX_STACK_LINE(365)
						int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(365)
							int tmp8 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(365)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(365)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(365)
							int tmp11 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(365)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(365)
							int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(365)
							int tmp14 = (int(tmp10) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							int tmp15 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							tmp7 = (int(tmp14) | int(tmp15));
						}
						HX_STACK_LINE(365)
						color = tmp7;
						HX_STACK_LINE(365)
						Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(365)
							int tmp9 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(365)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(365)
							int f = tmp10;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(365)
							tmp8 = (Float(f) / Float((int)255));
						}
						HX_STACK_LINE(365)
						alpha = tmp8;
					}
					HX_STACK_LINE(365)
					bool tmp7 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					if ((tmp7)){
						HX_STACK_LINE(365)
						lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
					}
					HX_STACK_LINE(365)
					bool tmp8 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(365)
					if ((tmp8)){
						HX_STACK_LINE(365)
						lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
					}
					HX_STACK_LINE(365)
					::openfl::_legacy::display::Graphics tmp9 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(365)
					Dynamic tmp10 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(365)
					int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					Float tmp12 = alpha;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(365)
					Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(365)
					::openfl::_legacy::display::LineScaleMode tmp14 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(365)
					::openfl::_legacy::display::CapsStyle tmp15 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(365)
					::openfl::_legacy::display::JointStyle tmp16 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(365)
					Dynamic tmp17 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(365)
					tmp9->lineStyle(tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17);
				}
			}
			HX_STACK_LINE(365)
			bool tmp5 = (fillStyle != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			if ((tmp5)){
				HX_STACK_LINE(365)
				tmp6 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(365)
				tmp6 = false;
			}
			HX_STACK_LINE(365)
			if ((tmp6)){
				HX_STACK_LINE(365)
				::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(365)
					int tmp9 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(365)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(365)
					int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					int tmp12 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(365)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(365)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(365)
					int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(365)
					int tmp16 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(365)
					tmp8 = (int(tmp15) | int(tmp16));
				}
				HX_STACK_LINE(365)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(365)
					int tmp10 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(365)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					int f = tmp11;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(365)
					tmp9 = (Float(f) / Float((int)255));
				}
				HX_STACK_LINE(365)
				tmp7->beginFill(tmp8,tmp9);
			}
			else{
				HX_STACK_LINE(365)
				::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				int tmp8 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				int tmp11 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(365)
				int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(365)
				int tmp14 = (int(tmp10) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(365)
				int tmp15 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(365)
				int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(365)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					int tmp18 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(365)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(365)
					int f = tmp19;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(365)
					tmp17 = (Float(f) / Float((int)255));
				}
				HX_STACK_LINE(365)
				tmp7->beginFill(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(366)
		::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(366)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(366)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(366)
		Float tmp7 = Radius;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(366)
		tmp4->drawCircle(tmp5,tmp6,tmp7);
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			tmp8->endFill();
			HX_STACK_LINE(367)
			::flixel::FlxSprite tmp9 = sprite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(367)
			Dynamic tmp10 = drawStyle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(367)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp9,tmp10);
			HX_STACK_LINE(367)
			sprite;
		}
		HX_STACK_LINE(368)
		::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(368)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawCircle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",386,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		tmp->clear();
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(387)
			if ((tmp1)){
				HX_STACK_LINE(387)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(387)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(387)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(387)
				if ((tmp2)){
					HX_STACK_LINE(387)
					color = (int)0;
					HX_STACK_LINE(387)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(387)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(387)
					{
						HX_STACK_LINE(387)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(387)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(387)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(387)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(387)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(387)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(387)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(387)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(387)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(387)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(387)
					color = tmp3;
					HX_STACK_LINE(387)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(387)
					{
						HX_STACK_LINE(387)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(387)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(387)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(387)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(387)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(387)
					alpha = tmp4;
				}
				HX_STACK_LINE(387)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(387)
				if ((tmp3)){
					HX_STACK_LINE(387)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(387)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(387)
				if ((tmp4)){
					HX_STACK_LINE(387)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(387)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(387)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(387)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(387)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(387)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(387)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(387)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(387)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(387)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(387)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		if ((tmp1)){
			HX_STACK_LINE(387)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(387)
			tmp2 = false;
		}
		HX_STACK_LINE(387)
		if ((tmp2)){
			HX_STACK_LINE(387)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(387)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(387)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(387)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(387)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(387)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(387)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(387)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(387)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(387)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(387)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(387)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(387)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(387)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(387)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(387)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(387)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(387)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(387)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(387)
			{
				HX_STACK_LINE(387)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(387)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(387)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(387)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(387)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(388)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	Float tmp3 = Width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(388)
	Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(388)
	tmp->drawEllipse(tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(389)
		tmp5->endFill();
		HX_STACK_LINE(389)
		::flixel::FlxSprite tmp6 = sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		Dynamic tmp7 = drawStyle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp6,tmp7);
		HX_STACK_LINE(389)
		sprite;
	}
	HX_STACK_LINE(390)
	::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(390)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawEllipse,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",407,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		tmp->clear();
		HX_STACK_LINE(408)
		{
			HX_STACK_LINE(408)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(408)
			if ((tmp1)){
				HX_STACK_LINE(408)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(408)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(408)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(408)
				if ((tmp2)){
					HX_STACK_LINE(408)
					color = (int)0;
					HX_STACK_LINE(408)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(408)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(408)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(408)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(408)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(408)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(408)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(408)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(408)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(408)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(408)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(408)
					color = tmp3;
					HX_STACK_LINE(408)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(408)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(408)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(408)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(408)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(408)
					alpha = tmp4;
				}
				HX_STACK_LINE(408)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(408)
				if ((tmp3)){
					HX_STACK_LINE(408)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(408)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(408)
				if ((tmp4)){
					HX_STACK_LINE(408)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(408)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(408)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(408)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(408)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(408)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(408)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(408)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(408)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(408)
			tmp2 = false;
		}
		HX_STACK_LINE(408)
		if ((tmp2)){
			HX_STACK_LINE(408)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(408)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(408)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(408)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(408)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(408)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(408)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(408)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(408)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(408)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(408)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(408)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(408)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(408)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(408)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(408)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(408)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(408)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(408)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(408)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(408)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(408)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(409)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	Float tmp2 = (Float(Height) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	tmp->moveTo(tmp3,tmp4);
	HX_STACK_LINE(410)
	::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(410)
	Float tmp6 = (X + Height);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(410)
	Float tmp7 = (Height + Y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(410)
	tmp5->lineTo(tmp6,tmp7);
	HX_STACK_LINE(411)
	::openfl::_legacy::display::Graphics tmp8 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(411)
	Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(411)
	Float tmp10 = (Height + Y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(411)
	tmp8->lineTo(tmp9,tmp10);
	HX_STACK_LINE(412)
	::openfl::_legacy::display::Graphics tmp11 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(412)
	Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(412)
	Float tmp13 = (Float(Height) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(412)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(412)
	Float tmp15 = Y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(412)
	tmp11->lineTo(tmp14,tmp15);
	HX_STACK_LINE(413)
	{
		HX_STACK_LINE(413)
		::openfl::_legacy::display::Graphics tmp16 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(413)
		tmp16->endFill();
		HX_STACK_LINE(413)
		::flixel::FlxSprite tmp17 = sprite;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(413)
		Dynamic tmp18 = drawStyle;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(413)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp17,tmp18);
		HX_STACK_LINE(413)
		sprite;
	}
	HX_STACK_LINE(414)
	::flixel::FlxSprite tmp16 = sprite;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(414)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawTriangle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",429,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Vertices,"Vertices")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(fillStyle,"fillStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		tmp->clear();
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(430)
			if ((tmp1)){
				HX_STACK_LINE(430)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(430)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(430)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(430)
				if ((tmp2)){
					HX_STACK_LINE(430)
					color = (int)0;
					HX_STACK_LINE(430)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(430)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(430)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(430)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(430)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(430)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(430)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(430)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(430)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(430)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(430)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(430)
					color = tmp3;
					HX_STACK_LINE(430)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(430)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(430)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(430)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(430)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(430)
					alpha = tmp4;
				}
				HX_STACK_LINE(430)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(430)
				if ((tmp3)){
					HX_STACK_LINE(430)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(430)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(430)
				if ((tmp4)){
					HX_STACK_LINE(430)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(430)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(430)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(430)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(430)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(430)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(430)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(430)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(430)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(430)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(430)
			tmp2 = false;
		}
		HX_STACK_LINE(430)
		if ((tmp2)){
			HX_STACK_LINE(430)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(430)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(430)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(430)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(430)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(430)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(430)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(430)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(430)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(430)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(430)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(430)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(430)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(430)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(430)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(430)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(430)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(430)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(430)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(430)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(430)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(430)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(430)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
	HX_STACK_LINE(431)
	::flixel::util::FlxPoint tmp = Vertices->shift().StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	::flixel::util::FlxPoint p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(432)
	::openfl::_legacy::display::Graphics tmp1 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	Float tmp2 = p->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	Float tmp3 = p->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(432)
	tmp1->moveTo(tmp2,tmp3);
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			bool tmp4 = (_g < Vertices->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(433)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(433)
			if ((tmp5)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(433)
			::flixel::util::FlxPoint tmp6 = Vertices->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(433)
			::flixel::util::FlxPoint p1 = tmp6;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(433)
			++(_g);
			HX_STACK_LINE(435)
			::openfl::_legacy::display::Graphics tmp7 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(435)
			Float tmp8 = p1->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(435)
			Float tmp9 = p1->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(435)
			tmp7->lineTo(tmp8,tmp9);
		}
	}
	HX_STACK_LINE(437)
	{
		HX_STACK_LINE(437)
		::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(437)
		tmp4->endFill();
		HX_STACK_LINE(437)
		::flixel::FlxSprite tmp5 = sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(437)
		Dynamic tmp6 = drawStyle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(437)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp5,tmp6);
		HX_STACK_LINE(437)
		sprite;
	}
	HX_STACK_LINE(438)
	::flixel::FlxSprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(438)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,drawPolygon,return )

Void FlxSpriteUtil_obj::beginDraw( int Color,Dynamic lineStyle,Dynamic fillStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",450,0xc647097f)
		HX_STACK_ARG(Color,"Color")
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_ARG(fillStyle,"fillStyle")
		HX_STACK_LINE(451)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		tmp->clear();
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			bool tmp1 = (lineStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(452)
			if ((tmp1)){
				HX_STACK_LINE(452)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(452)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(452)
				bool tmp2 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(452)
				if ((tmp2)){
					HX_STACK_LINE(452)
					color = (int)0;
					HX_STACK_LINE(452)
					alpha = (int)1;
				}
				else{
					HX_STACK_LINE(452)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(452)
					{
						HX_STACK_LINE(452)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(452)
						int tmp4 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(452)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(452)
						int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(452)
						int tmp7 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(452)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(452)
						int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(452)
						int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(452)
						int tmp11 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(452)
						tmp3 = (int(tmp10) | int(tmp11));
					}
					HX_STACK_LINE(452)
					color = tmp3;
					HX_STACK_LINE(452)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(452)
					{
						HX_STACK_LINE(452)
						int Color1 = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(452)
						int tmp5 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(452)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(452)
						int f = tmp6;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(452)
						tmp4 = (Float(f) / Float((int)255));
					}
					HX_STACK_LINE(452)
					alpha = tmp4;
				}
				HX_STACK_LINE(452)
				bool tmp3 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(452)
				if ((tmp3)){
					HX_STACK_LINE(452)
					lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
				}
				HX_STACK_LINE(452)
				bool tmp4 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				if ((tmp4)){
					HX_STACK_LINE(452)
					lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
				}
				HX_STACK_LINE(452)
				::openfl::_legacy::display::Graphics tmp5 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(452)
				Dynamic tmp6 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(452)
				int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(452)
				Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(452)
				Dynamic tmp9 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(452)
				::openfl::_legacy::display::LineScaleMode tmp10 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				::openfl::_legacy::display::CapsStyle tmp11 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				::openfl::_legacy::display::JointStyle tmp12 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(452)
				Dynamic tmp13 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(452)
				tmp5->lineStyle(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
			}
		}
		HX_STACK_LINE(454)
		bool tmp1 = (fillStyle != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		if ((tmp1)){
			HX_STACK_LINE(454)
			tmp2 = fillStyle->__Field(HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(454)
			tmp2 = false;
		}
		HX_STACK_LINE(454)
		if ((tmp2)){
			HX_STACK_LINE(457)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(457)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(457)
			{
				HX_STACK_LINE(457)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(457)
				int tmp5 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(457)
				int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(457)
				int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(457)
				int tmp8 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(457)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(457)
				int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(457)
				int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(457)
				int tmp12 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(457)
				tmp4 = (int(tmp11) | int(tmp12));
			}
			HX_STACK_LINE(457)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(457)
			{
				HX_STACK_LINE(457)
				int Color1 = fillStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(457)
				int tmp6 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(457)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(457)
				int f = tmp7;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(457)
				tmp5 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(457)
			tmp3->beginFill(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(462)
			::openfl::_legacy::display::Graphics tmp3 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(462)
			int tmp4 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			int tmp6 = (int(tmp5) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			int tmp7 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(462)
			int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(462)
			int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(462)
			int tmp11 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(462)
			int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(462)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(462)
			{
				HX_STACK_LINE(462)
				int tmp14 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(462)
				int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(462)
				int f = tmp15;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(462)
				tmp13 = (Float(f) / Float((int)255));
			}
			HX_STACK_LINE(462)
			tmp3->beginFill(tmp12,tmp13);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,beginDraw,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",474,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(475)
	::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	tmp->endFill();
	HX_STACK_LINE(476)
	::flixel::FlxSprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	Dynamic tmp2 = drawStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(476)
	::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(tmp1,tmp2);
	HX_STACK_LINE(477)
	::flixel::FlxSprite tmp3 = sprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(477)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",489,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(490)
	bool tmp = (drawStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",492,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(492)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		drawStyle = tmp1;
	}
	else{
		HX_STACK_LINE(494)
		bool tmp1 = (drawStyle->__Field(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(494)
		if ((tmp1)){
			HX_STACK_LINE(496)
			drawStyle->__FieldRef(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")) = false;
		}
	}
	HX_STACK_LINE(499)
	::openfl::_legacy::display::BitmapData tmp1 = sprite->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	::openfl::_legacy::display::Sprite tmp2 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	::openfl::_legacy::geom::Matrix tmp3 = drawStyle->__Field(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(499)
	::openfl::_legacy::geom::ColorTransform tmp4 = drawStyle->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	::openfl::_legacy::display::BlendMode tmp5 = drawStyle->__Field(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(500)
	::openfl::_legacy::geom::Rectangle tmp6 = drawStyle->__Field(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(500)
	Dynamic tmp7 = drawStyle->__Field(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(499)
	tmp1->draw(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	HX_STACK_LINE(501)
	sprite->dirty = true;
	HX_STACK_LINE(502)
	{
		HX_STACK_LINE(502)
		::flixel::_system::layer::TileSheetData tmp8 = sprite->cachedGraphics->get_tilesheet();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(502)
		tmp8->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
	}
	HX_STACK_LINE(503)
	::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(503)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

Void FlxSpriteUtil_obj::setLineStyle( Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",514,0xc647097f)
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(515)
		bool tmp = (lineStyle != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		if ((tmp)){
			HX_STACK_LINE(517)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(518)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(520)
			bool tmp1 = (lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(520)
			if ((tmp1)){
				HX_STACK_LINE(522)
				color = (int)0;
				HX_STACK_LINE(523)
				alpha = (int)1;
			}
			else{
				HX_STACK_LINE(527)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					int Color = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(527)
					int tmp3 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(527)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(527)
					int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(527)
					int tmp6 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(527)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(527)
					int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(527)
					int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(527)
					int tmp10 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(527)
					tmp2 = (int(tmp9) | int(tmp10));
				}
				HX_STACK_LINE(527)
				color = tmp2;
				HX_STACK_LINE(528)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(528)
				{
					HX_STACK_LINE(528)
					int Color = lineStyle->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(528)
					int tmp4 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(528)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(528)
					int f = tmp5;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(528)
					tmp3 = (Float(f) / Float((int)255));
				}
				HX_STACK_LINE(528)
				alpha = tmp3;
			}
			HX_STACK_LINE(531)
			bool tmp2 = (lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(531)
			if ((tmp2)){
				HX_STACK_LINE(531)
				lineStyle->__FieldRef(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")) = false;
			}
			HX_STACK_LINE(532)
			bool tmp3 = (lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			if ((tmp3)){
				HX_STACK_LINE(532)
				lineStyle->__FieldRef(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")) = (int)3;
			}
			HX_STACK_LINE(534)
			::openfl::_legacy::display::Graphics tmp4 = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			Dynamic tmp5 = lineStyle->__Field(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(535)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(537)
			Dynamic tmp8 = lineStyle->__Field(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(538)
			::openfl::_legacy::display::LineScaleMode tmp9 = lineStyle->__Field(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(539)
			::openfl::_legacy::display::CapsStyle tmp10 = lineStyle->__Field(HX_HCSTRING("capsStyle","\x50","\x61","\x32","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(540)
			::openfl::_legacy::display::JointStyle tmp11 = lineStyle->__Field(HX_HCSTRING("jointStyle","\x87","\xef","\x1c","\xe2"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(541)
			Dynamic tmp12 = lineStyle->__Field(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(534)
			tmp4->lineStyle(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int Color){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",553,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(554)
	::openfl::_legacy::display::BitmapData tmp = sprite->get_pixels();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	::openfl::_legacy::display::BitmapData tmp1 = sprite->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(554)
	::openfl::_legacy::geom::Rectangle tmp2 = tmp1->get_rect();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(554)
	int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(554)
	tmp->fillRect(tmp2,tmp3);
	HX_STACK_LINE(556)
	::openfl::_legacy::display::BitmapData tmp4 = sprite->get_pixels();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(556)
	::openfl::_legacy::display::BitmapData tmp5 = sprite->framePixels;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(556)
	bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(556)
	if ((tmp6)){
		HX_STACK_LINE(558)
		sprite->dirty = true;
	}
	HX_STACK_LINE(561)
	{
		HX_STACK_LINE(561)
		::flixel::_system::layer::TileSheetData tmp7 = sprite->cachedGraphics->get_tilesheet();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		tmp7->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
	}
	HX_STACK_LINE(562)
	::flixel::FlxSprite tmp7 = sprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(562)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

::flixel::FlxObject FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(((Float)0.04));
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",578,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Interval,"Interval")
	HX_STACK_ARG(EndVisibility,"EndVisibility")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(CompletionCallback,"CompletionCallback")
	HX_STACK_ARG(ProgressCallback,"ProgressCallback")
{
		HX_STACK_LINE(579)
		::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		Float tmp2 = Interval;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(579)
		bool tmp3 = EndVisibility;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(579)
		bool tmp4 = ForceRestart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		Dynamic tmp5 = CompletionCallback;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		Dynamic tmp6 = ProgressCallback;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(579)
		::flixel::effects::FlxFlicker_obj::flicker(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(580)
		::flixel::FlxObject tmp7 = Object;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(580)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",589,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(590)
	::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	bool tmp1 = ::flixel::effects::FlxFlicker_obj::isFlickering(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",600,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(601)
	::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	::flixel::effects::FlxFlicker_obj::stopFlickering(tmp);
	HX_STACK_LINE(602)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic ResetAlpha,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",613,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(ResetAlpha,"ResetAlpha")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(614)
		Dynamic tmp = ResetAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		if ((tmp)){
			HX_STACK_LINE(616)
			sprite->set_alpha((int)0);
		}
		HX_STACK_LINE(618)
		::flixel::FlxSprite tmp1 = sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		Float tmp2 = Duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		int tmp3 = sprite->color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		int tmp4 = sprite->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(618)
		Float tmp5 = sprite->alpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(618)
		bool tmp6 = (OnComplete != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(618)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(618)
		if ((tmp6)){
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &OnComplete){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",618,0xc647097f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f") , OnComplete,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(618)
			tmp7 = _Function_2_1::Block(OnComplete);
		}
		else{
			HX_STACK_LINE(618)
			tmp7 = null();
		}
		HX_STACK_LINE(618)
		::flixel::tweens::FlxTween_obj::color(tmp1,tmp2,tmp3,tmp4,tmp5,(int)1,tmp7);
		HX_STACK_LINE(619)
		::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(619)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic FadeToBlack,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",630,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeToBlack,"FadeToBlack")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(631)
		::flixel::FlxSprite tmp = sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(631)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(631)
		int tmp2 = sprite->color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(631)
		Dynamic tmp3 = FadeToBlack;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(631)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(631)
		if ((tmp3)){
			HX_STACK_LINE(631)
			tmp4 = (int)-16777216;
		}
		else{
			HX_STACK_LINE(631)
			tmp4 = sprite->color;
		}
		HX_STACK_LINE(631)
		Float tmp5 = sprite->alpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(631)
		bool tmp6 = (OnComplete != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(631)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(631)
		if ((tmp6)){
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &OnComplete){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",631,0xc647097f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f") , OnComplete,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(631)
			tmp7 = _Function_2_1::Block(OnComplete);
		}
		else{
			HX_STACK_LINE(631)
			tmp7 = null();
		}
		HX_STACK_LINE(631)
		::flixel::tweens::FlxTween_obj::color(tmp,tmp1,tmp2,tmp4,tmp5,(int)0,tmp7);
		HX_STACK_LINE(632)
		::flixel::FlxSprite tmp8 = sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(632)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeOut,return )


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

bool FlxSpriteUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"space") ) { outValue = space_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { outValue = fadeIn_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { outValue = endDraw_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { outValue = fadeOut_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { outValue = flashGfx; return true;  }
		if (HX_FIELD_EQ(inName,"drawLine") ) { outValue = drawLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawRect") ) { outValue = drawRect_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { outValue = alphaMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { outValue = beginDraw_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { outValue = screenWrap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { outValue = drawEllipse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { outValue = drawPolygon_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { outValue = screenCenter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { outValue = drawTriangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { outValue = setLineStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { outValue = flashGfxSprite; return true;  }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { outValue = alphaMaskFlxSprite_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { outValue = updateSpriteGraphic_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &FlxSpriteUtil_obj::flashGfxSprite,HX_HCSTRING("flashGfxSprite","\x8e","\x26","\x3f","\xab")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(void *) &FlxSpriteUtil_obj::flashGfx,HX_HCSTRING("flashGfx","\xa9","\xb1","\xce","\x99")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

hx::Class FlxSpriteUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("flashGfxSprite","\x8e","\x26","\x3f","\xab"),
	HX_HCSTRING("flashGfx","\xa9","\xb1","\xce","\x99"),
	HX_HCSTRING("alphaMask","\x6a","\x1b","\x50","\xe2"),
	HX_HCSTRING("alphaMaskFlxSprite","\x4d","\xfd","\xae","\x12"),
	HX_HCSTRING("screenWrap","\x56","\xc7","\x35","\xc7"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawTriangle","\xec","\x4a","\xb9","\x63"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("beginDraw","\xcd","\x0a","\x4a","\x8b"),
	HX_HCSTRING("endDraw","\x7f","\xe5","\x94","\x24"),
	HX_HCSTRING("updateSpriteGraphic","\x5a","\x59","\xf9","\x55"),
	HX_HCSTRING("setLineStyle","\x9b","\x68","\x68","\xef"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("flicker","\xf8","\xda","\xec","\x76"),
	HX_HCSTRING("isFlickering","\x74","\x85","\x73","\x33"),
	HX_HCSTRING("stopFlickering","\x8c","\x27","\x6a","\x4a"),
	HX_HCSTRING("fadeIn","\x81","\x4c","\xab","\xe4"),
	HX_HCSTRING("fadeOut","\x72","\x38","\x3c","\x31"),
	::String(null()) };

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSpriteUtil","\xff","\x7e","\x4e","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSpriteUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxSpriteUtil_obj >;
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

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::openfl::_legacy::display::Sprite_obj::__new();
struct _Function_0_1{
	inline static ::openfl::_legacy::display::Graphics Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",37,0xc647097f)
		{
			HX_STACK_LINE(37)
			::openfl::_legacy::display::Sprite tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			return tmp->get_graphics();
		}
		return null();
	}
};
	flashGfx= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
