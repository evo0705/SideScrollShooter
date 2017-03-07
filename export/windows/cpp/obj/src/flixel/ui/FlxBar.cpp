#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
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
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace ui{

Void FlxBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border)
{
HX_STACK_FRAME("flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",138,0x9c56c8d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_direction,"direction")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(parentRef,"parentRef")
HX_STACK_ARG(__o_variable,"variable")
HX_STACK_ARG(__o_min,"min")
HX_STACK_ARG(__o_max,"max")
HX_STACK_ARG(__o_border,"border")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int direction = __o_direction.Default(1);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
::String variable = __o_variable.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Float min = __o_min.Default(0);
Float max = __o_max.Default(100);
bool border = __o_border.Default(false);
{
	HX_STACK_LINE(139)
	this->fixedPosition = true;
	HX_STACK_LINE(140)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	this->zeroOffset = tmp;
	HX_STACK_LINE(142)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	super::__construct(tmp1,tmp2,null());
	HX_STACK_LINE(144)
	this->barWidth = width;
	HX_STACK_LINE(145)
	this->barHeight = height;
	HX_STACK_LINE(150)
	int tmp3 = this->frameWidth = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	this->set_width(tmp3);
	HX_STACK_LINE(151)
	int tmp4 = this->frameHeight = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	this->set_height(tmp4);
	HX_STACK_LINE(152)
	::flixel::util::FlxPoint tmp5 = this->origin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(152)
	int tmp6 = this->frameWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(152)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(152)
	int tmp8 = this->frameHeight;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(152)
	Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(152)
	tmp5->set(tmp7,tmp9);
	HX_STACK_LINE(153)
	int tmp10 = this->frameWidth;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(153)
	Float tmp11 = (((Float)0.5) * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(153)
	this->_halfWidth = tmp11;
	HX_STACK_LINE(154)
	int tmp12 = this->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(154)
	Float tmp13 = (((Float)0.5) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(154)
	this->_halfHeight = tmp13;
	HX_STACK_LINE(156)
	this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
	HX_STACK_LINE(159)
	::openfl::_legacy::geom::Point tmp14 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(159)
	this->filledBarPoint = tmp14;
	HX_STACK_LINE(165)
	bool tmp15 = (parentRef != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(165)
	if ((tmp15)){
		HX_STACK_LINE(167)
		this->parent = parentRef;
		HX_STACK_LINE(168)
		this->parentVariable = variable;
	}
	HX_STACK_LINE(171)
	int tmp16 = direction;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(171)
	this->setFillDirection(tmp16);
	HX_STACK_LINE(173)
	Float tmp17 = min;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(173)
	Float tmp18 = max;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(173)
	this->setRange(tmp17,tmp18);
	HX_STACK_LINE(175)
	bool tmp19 = border;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(175)
	this->createFilledBar((int)-16756480,(int)-16714752,tmp19,null());
	HX_STACK_LINE(177)
	this->emptyKill = false;
}
;
	return null();
}

//FlxBar_obj::~FlxBar_obj() { }

Dynamic FlxBar_obj::__CreateEmpty() { return  new FlxBar_obj; }
hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_border)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(__o_x,__o_y,__o_direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_border);
	return _result_;}

Dynamic FlxBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _result_;}

Void FlxBar_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",186,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint tmp = this->positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		this->positionOffset = tmp1;
		HX_STACK_LINE(193)
		this->_filledBarFrames = null();
		HX_STACK_LINE(196)
		this->parent = null();
		HX_STACK_LINE(197)
		this->positionOffset = null();
		HX_STACK_LINE(198)
		this->emptyCallback = null();
		HX_STACK_LINE(199)
		this->emptyBarRect = null();
		HX_STACK_LINE(200)
		this->emptyBarPoint = null();
		HX_STACK_LINE(201)
		this->zeroOffset = null();
		HX_STACK_LINE(202)
		this->filledCallback = null();
		HX_STACK_LINE(203)
		this->filledBarRect = null();
		HX_STACK_LINE(204)
		this->filledBarPoint = null();
		HX_STACK_LINE(206)
		::openfl::_legacy::display::BitmapData tmp2 = this->emptyBar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::openfl::_legacy::display::BitmapData tmp3 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		this->emptyBar = tmp3;
		HX_STACK_LINE(207)
		::openfl::_legacy::display::BitmapData tmp4 = this->filledBar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		this->filledBar = tmp5;
		HX_STACK_LINE(209)
		this->super::destroy();
	}
return null();
}


Void FlxBar_obj::trackParent( int offsetX,int offsetY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",222,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(223)
		this->fixedPosition = false;
		HX_STACK_LINE(225)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(225)
			::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			int tmp3 = offsetX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			int tmp4 = offsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(225)
			point->_inPool = false;
			HX_STACK_LINE(225)
			tmp = point;
		}
		HX_STACK_LINE(225)
		this->positionOffset = tmp;
		HX_STACK_LINE(227)
		Dynamic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		if ((tmp2)){
			HX_STACK_LINE(229)
			::flixel::util::FlxPoint tmp3 = this->scrollFactor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			Dynamic tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			tmp3->set_x(tmp4->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));
			HX_STACK_LINE(230)
			::flixel::util::FlxPoint tmp5 = this->scrollFactor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			Dynamic tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			tmp5->set_y(tmp6->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

Void FlxBar_obj::setParent( Dynamic parentRef,::String variable,hx::Null< bool >  __o_track,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY){
bool track = __o_track.Default(false);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
	HX_STACK_FRAME("flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",244,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentRef,"parentRef")
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(track,"track")
	HX_STACK_ARG(offsetX,"offsetX")
	HX_STACK_ARG(offsetY,"offsetY")
{
		HX_STACK_LINE(245)
		this->parent = parentRef;
		HX_STACK_LINE(246)
		this->parentVariable = variable;
		HX_STACK_LINE(248)
		bool tmp = track;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		if ((tmp)){
			HX_STACK_LINE(250)
			int tmp1 = offsetX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			int tmp2 = offsetY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			this->trackParent(tmp1,tmp2);
		}
		HX_STACK_LINE(253)
		this->updateValueFromParent();
		HX_STACK_LINE(254)
		this->updateBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

Void FlxBar_obj::stopTrackingParent( int posX,int posY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",264,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(posX,"posX")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(265)
		this->fixedPosition = true;
		HX_STACK_LINE(267)
		int tmp = posX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		this->set_x(tmp);
		HX_STACK_LINE(268)
		int tmp1 = posY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

Void FlxBar_obj::setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  __o_killOnEmpty){
bool killOnEmpty = __o_killOnEmpty.Default(false);
	HX_STACK_FRAME("flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",281,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(onEmpty,"onEmpty")
	HX_STACK_ARG(onFilled,"onFilled")
	HX_STACK_ARG(killOnEmpty,"killOnEmpty")
{
		HX_STACK_LINE(282)
		bool tmp = (onEmpty != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		if ((tmp)){
			HX_STACK_LINE(284)
			this->emptyCallback = onEmpty;
		}
		HX_STACK_LINE(287)
		bool tmp1 = (onFilled != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		if ((tmp1)){
			HX_STACK_LINE(289)
			this->filledCallback = onFilled;
		}
		HX_STACK_LINE(292)
		bool tmp2 = killOnEmpty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		if ((tmp2)){
			HX_STACK_LINE(294)
			this->emptyKill = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

bool FlxBar_obj::set_killOnEmpty( bool value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_killOnEmpty",0x8f04120e,"flixel.ui.FlxBar.set_killOnEmpty","flixel/ui/FlxBar.hx",304,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(305)
	this->emptyKill = value;
	HX_STACK_LINE(306)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_killOnEmpty,return )

bool FlxBar_obj::get_killOnEmpty( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_killOnEmpty",0x93389502,"flixel.ui.FlxBar.get_killOnEmpty","flixel/ui/FlxBar.hx",310,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	bool tmp = this->emptyKill;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_killOnEmpty,return )

Void FlxBar_obj::setRange( Float min,Float max){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",321,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(322)
		bool tmp = (max <= min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		if ((tmp)){
			HX_STACK_LINE(324)
			HX_STACK_DO_THROW(HX_HCSTRING("FlxBar: max cannot be less than or equal to min","\x5b","\xe6","\xe7","\x51"));
			HX_STACK_LINE(325)
			return null();
		}
		HX_STACK_LINE(328)
		this->min = min;
		HX_STACK_LINE(329)
		this->max = max;
		HX_STACK_LINE(331)
		Float tmp1 = (max - min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		this->range = tmp1;
		HX_STACK_LINE(333)
		Float tmp2 = this->range;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		Float tmp3 = (Float(tmp2) / Float((int)100));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		this->pct = tmp3;
		HX_STACK_LINE(335)
		bool tmp4 = this->fillHorizontal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		if ((tmp4)){
			HX_STACK_LINE(337)
			int tmp5 = this->barWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			Float tmp6 = (Float(tmp5) / Float((int)100));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			this->pxPerPercent = tmp6;
		}
		else{
			HX_STACK_LINE(341)
			int tmp5 = this->barHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			Float tmp6 = (Float(tmp5) / Float((int)100));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			this->pxPerPercent = tmp6;
		}
		HX_STACK_LINE(344)
		Float tmp5 = this->value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		bool tmp6 = ::Math_obj::isNaN(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		if ((tmp7)){
			HX_STACK_LINE(346)
			Float tmp8 = this->value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(346)
			Float tmp9 = max;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(346)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(346)
			if ((tmp10)){
				HX_STACK_LINE(348)
				this->value = max;
			}
			HX_STACK_LINE(351)
			Float tmp11 = this->value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(351)
			Float tmp12 = min;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			if ((tmp13)){
				HX_STACK_LINE(353)
				this->value = min;
			}
		}
		else{
			HX_STACK_LINE(358)
			this->value = min;
		}
		HX_STACK_LINE(362)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

::haxe::ds::StringMap FlxBar_obj::get_stats( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_stats",0x972f60b1,"flixel.ui.FlxBar.get_stats","flixel/ui/FlxBar.hx",369,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	{
		HX_STACK_LINE(370)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		tmp = tmp2;
	}
	HX_STACK_LINE(370)
	::haxe::ds::StringMap data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(371)
	Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	data->set(HX_HCSTRING("min","\x92","\x11","\x53","\x00"),tmp1);
	HX_STACK_LINE(372)
	Float tmp2 = this->max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	data->set(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),tmp2);
	HX_STACK_LINE(373)
	Float tmp3 = this->range;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	data->set(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"),tmp3);
	HX_STACK_LINE(374)
	Float tmp4 = this->pct;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(374)
	data->set(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),tmp4);
	HX_STACK_LINE(375)
	Float tmp5 = this->pxPerPercent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(375)
	data->set(HX_HCSTRING("pxPerPct","\x6c","\x6a","\xbe","\xf3"),tmp5);
	HX_STACK_LINE(376)
	bool tmp6 = this->fillHorizontal;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(376)
	data->set(HX_HCSTRING("fillH","\x65","\xe4","\x98","\x00"),tmp6);
	HX_STACK_LINE(378)
	::haxe::ds::StringMap tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(378)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_stats,return )

Void FlxBar_obj::createFilledBar( int empty,int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",391,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(392)
		this->barType = (int)1;
		HX_STACK_LINE(395)
		int tmp = (int(empty) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		int emptyA = tmp1;		HX_STACK_VAR(emptyA,"emptyA");
		HX_STACK_LINE(396)
		int tmp2 = (int(empty) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		int emptyRGB = tmp2;		HX_STACK_VAR(emptyRGB,"emptyRGB");
		HX_STACK_LINE(397)
		int tmp3 = (int(fill) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		int fillA = tmp4;		HX_STACK_VAR(fillA,"fillA");
		HX_STACK_LINE(398)
		int tmp5 = (int(fill) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(398)
		int fillRGB = tmp5;		HX_STACK_VAR(fillRGB,"fillRGB");
		HX_STACK_LINE(399)
		int tmp6 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		int borderA = tmp7;		HX_STACK_VAR(borderA,"borderA");
		HX_STACK_LINE(400)
		int tmp8 = (int(border) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(400)
		int borderRGB = tmp8;		HX_STACK_VAR(borderRGB,"borderRGB");
		HX_STACK_LINE(402)
		int tmp9 = this->barWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(402)
		::String tmp10 = (HX_HCSTRING("empty: ","\x73","\xea","\xc7","\xc6") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(402)
		::String tmp11 = (tmp10 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(402)
		int tmp12 = this->barHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(402)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(402)
		::String tmp14 = (tmp13 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(402)
		int tmp15 = emptyA;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(402)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(402)
		::String tmp17 = (tmp16 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(402)
		int tmp18 = emptyRGB;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(402)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(402)
		::String tmp20 = (tmp19 + HX_HCSTRING("showBorder: ","\xaf","\xe8","\x85","\x84"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(402)
		bool tmp21 = showBorder;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(402)
		::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(402)
		::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(402)
		::String emptyKey = tmp23;		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(403)
		int tmp24 = this->barWidth;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(403)
		::String tmp25 = (HX_HCSTRING("filled: ","\xc8","\x6c","\x47","\x79") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(403)
		::String tmp26 = (tmp25 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(403)
		int tmp27 = this->barHeight;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(403)
		::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(403)
		::String tmp29 = (tmp28 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(403)
		int tmp30 = fillA;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(403)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(403)
		::String tmp32 = (tmp31 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(403)
		int tmp33 = fillRGB;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(403)
		::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(403)
		::String tmp35 = (tmp34 + HX_HCSTRING("showBorder: ","\xaf","\xe8","\x85","\x84"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(403)
		bool tmp36 = showBorder;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(403)
		::String tmp37 = ::Std_obj::string(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(403)
		::String tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(403)
		::String filledKey = tmp38;		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(404)
		bool tmp39 = showBorder;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(404)
		if ((tmp39)){
			HX_STACK_LINE(406)
			::String tmp40 = (emptyKey + HX_HCSTRING("border: ","\x92","\x92","\xf8","\x58"));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(406)
			int tmp41 = borderA;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(406)
			::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(406)
			::String tmp43 = (tmp42 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(406)
			int tmp44 = borderRGB;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(406)
			::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(406)
			emptyKey = tmp45;
			HX_STACK_LINE(407)
			::String tmp46 = (filledKey + HX_HCSTRING("border: ","\x92","\x92","\xf8","\x58"));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(407)
			int tmp47 = borderA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(407)
			::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(407)
			::String tmp49 = (tmp48 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(407)
			int tmp50 = borderRGB;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(407)
			::String tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(407)
			filledKey = tmp51;
		}
		HX_STACK_LINE(410)
		int tmp40 = this->barWidth;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(410)
		int tmp41 = this->barHeight;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(410)
		bool tmp42 = (tmp40 >= tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(410)
		if ((tmp42)){
			HX_STACK_LINE(412)
			this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
		}
		else{
			HX_STACK_LINE(416)
			this->_framesPosition = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
		}
		HX_STACK_LINE(420)
		bool tmp43 = showBorder;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(420)
		if ((tmp43)){
			HX_STACK_LINE(423)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(423)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp45 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(423)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp45;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(423)
				::String tmp46 = emptyKey;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(423)
				::String tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(423)
				bool tmp48 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(423)
				if ((tmp48)){
					HX_STACK_LINE(423)
					::String tmp49 = emptyKey;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(423)
					::String tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(423)
					::flixel::util::loaders::CachedGraphics tmp51 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(423)
					::flixel::util::loaders::CachedGraphics tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(423)
					::flixel::util::loaders::CachedGraphics tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(423)
					tmp44 = (tmp53 != null());
				}
				else{
					HX_STACK_LINE(423)
					tmp44 = false;
				}
			}
			HX_STACK_LINE(423)
			bool tmp45 = (tmp44 == false);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(423)
			if ((tmp45)){
				HX_STACK_LINE(425)
				int tmp46 = this->barWidth;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(425)
				int tmp47 = this->barHeight;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(425)
				int tmp48 = border;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(425)
				::openfl::_legacy::display::BitmapData tmp49 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp46,tmp47,true,tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(425)
				::openfl::_legacy::display::BitmapData emptyBar = tmp49;		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(426)
				int tmp50 = this->barWidth;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(426)
				int tmp51 = (tmp50 - (int)2);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(426)
				int tmp52 = this->barHeight;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(426)
				int tmp53 = (tmp52 - (int)2);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(426)
				::openfl::_legacy::geom::Rectangle tmp54 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp51,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(426)
				int tmp55 = empty;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(426)
				emptyBar->fillRect(tmp54,tmp55);
				HX_STACK_LINE(428)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp56 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(428)
				::openfl::_legacy::display::BitmapData tmp57 = emptyBar;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(428)
				::String tmp58 = emptyKey;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(428)
				tmp56->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp57,(int)0,(int)0,(int)1,(int)1,false,tmp58);
			}
			HX_STACK_LINE(431)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp47 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(431)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp47;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(431)
				::String tmp48 = filledKey;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(431)
				::String tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(431)
				bool tmp50 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(431)
				if ((tmp50)){
					HX_STACK_LINE(431)
					::String tmp51 = filledKey;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(431)
					::String tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(431)
					::flixel::util::loaders::CachedGraphics tmp53 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(431)
					::flixel::util::loaders::CachedGraphics tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(431)
					::flixel::util::loaders::CachedGraphics tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(431)
					tmp46 = (tmp55 != null());
				}
				else{
					HX_STACK_LINE(431)
					tmp46 = false;
				}
			}
			HX_STACK_LINE(431)
			bool tmp47 = (tmp46 == false);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(431)
			if ((tmp47)){
				HX_STACK_LINE(433)
				int tmp48 = this->barWidth;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(433)
				int tmp49 = this->barHeight;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(433)
				int tmp50 = border;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(433)
				::openfl::_legacy::display::BitmapData tmp51 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp48,tmp49,true,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(433)
				::openfl::_legacy::display::BitmapData filledBar = tmp51;		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(434)
				int tmp52 = this->barWidth;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(434)
				int tmp53 = (tmp52 - (int)2);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(434)
				int tmp54 = this->barHeight;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(434)
				int tmp55 = (tmp54 - (int)2);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(434)
				::openfl::_legacy::geom::Rectangle tmp56 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp53,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(434)
				int tmp57 = fill;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(434)
				filledBar->fillRect(tmp56,tmp57);
				HX_STACK_LINE(436)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp58 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(436)
				::openfl::_legacy::display::BitmapData tmp59 = filledBar;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(436)
				::String tmp60 = filledKey;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(436)
				tmp58->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp59,(int)0,(int)0,(int)1,(int)1,false,tmp60);
			}
		}
		else{
			HX_STACK_LINE(449)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp45 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(449)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp45;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(449)
				::String tmp46 = emptyKey;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(449)
				::String tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(449)
				bool tmp48 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(449)
				if ((tmp48)){
					HX_STACK_LINE(449)
					::String tmp49 = emptyKey;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(449)
					::String tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(449)
					::flixel::util::loaders::CachedGraphics tmp51 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(449)
					::flixel::util::loaders::CachedGraphics tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(449)
					::flixel::util::loaders::CachedGraphics tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(449)
					tmp44 = (tmp53 != null());
				}
				else{
					HX_STACK_LINE(449)
					tmp44 = false;
				}
			}
			HX_STACK_LINE(449)
			bool tmp45 = (tmp44 == false);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(449)
			if ((tmp45)){
				HX_STACK_LINE(451)
				int tmp46 = this->barWidth;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(451)
				int tmp47 = this->barHeight;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(451)
				int tmp48 = empty;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(451)
				::openfl::_legacy::display::BitmapData tmp49 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp46,tmp47,true,tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(451)
				::openfl::_legacy::display::BitmapData emptyBar = tmp49;		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(452)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp50 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(452)
				::openfl::_legacy::display::BitmapData tmp51 = emptyBar;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(452)
				::String tmp52 = emptyKey;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(452)
				tmp50->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp51,(int)0,(int)0,(int)1,(int)1,false,tmp52);
			}
			HX_STACK_LINE(455)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(455)
			{
				HX_STACK_LINE(455)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp47 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(455)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp47;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(455)
				::String tmp48 = filledKey;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(455)
				::String tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(455)
				bool tmp50 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(455)
				if ((tmp50)){
					HX_STACK_LINE(455)
					::String tmp51 = filledKey;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(455)
					::String tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(455)
					::flixel::util::loaders::CachedGraphics tmp53 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(455)
					::flixel::util::loaders::CachedGraphics tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(455)
					::flixel::util::loaders::CachedGraphics tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(455)
					tmp46 = (tmp55 != null());
				}
				else{
					HX_STACK_LINE(455)
					tmp46 = false;
				}
			}
			HX_STACK_LINE(455)
			bool tmp47 = (tmp46 == false);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(455)
			if ((tmp47)){
				HX_STACK_LINE(457)
				int tmp48 = this->barWidth;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(457)
				int tmp49 = this->barHeight;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(457)
				int tmp50 = fill;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(457)
				::openfl::_legacy::display::BitmapData tmp51 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp48,tmp49,true,tmp50,null());		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(457)
				::openfl::_legacy::display::BitmapData filledBar = tmp51;		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(458)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp52 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(458)
				::openfl::_legacy::display::BitmapData tmp53 = filledBar;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(458)
				::String tmp54 = filledKey;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(458)
				tmp52->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp53,(int)0,(int)0,(int)1,(int)1,false,tmp54);
			}
		}
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp44 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(470)
			::String tmp45 = emptyKey;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(470)
			::flixel::util::loaders::CachedGraphics tmp46 = tmp44->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(470)
			::flixel::util::loaders::CachedGraphics value = tmp46;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(470)
			::flixel::util::loaders::CachedGraphics tmp47 = value;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(470)
			this->set_cachedGraphics(tmp47);
		}
		HX_STACK_LINE(471)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp44 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(471)
		::String tmp45 = filledKey;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(471)
		::flixel::util::loaders::CachedGraphics tmp46 = tmp44->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(471)
		this->setCachedFrontGraphics(tmp46);
		HX_STACK_LINE(473)
		::flixel::_system::layer::Region tmp47 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(473)
		this->region = tmp47;
		HX_STACK_LINE(474)
		::flixel::util::loaders::CachedGraphics tmp48 = this->cachedGraphics;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(474)
		int tmp49 = tmp48->bitmap->get_width();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(474)
		::flixel::_system::layer::Region tmp50 = this->region;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(474)
		tmp50->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp49;
		HX_STACK_LINE(475)
		::flixel::util::loaders::CachedGraphics tmp51 = this->cachedGraphics;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(475)
		int tmp52 = tmp51->bitmap->get_height();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(475)
		::flixel::_system::layer::Region tmp53 = this->region;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(475)
		tmp53->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp52;
		HX_STACK_LINE(476)
		::flixel::_system::layer::Region tmp54 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(476)
		this->_frontRegion = tmp54;
		HX_STACK_LINE(477)
		::flixel::util::loaders::CachedGraphics tmp55 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(477)
		int tmp56 = tmp55->bitmap->get_width();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(477)
		::flixel::_system::layer::Region tmp57 = this->_frontRegion;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(477)
		tmp57->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp56;
		HX_STACK_LINE(478)
		::flixel::util::loaders::CachedGraphics tmp58 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(478)
		int tmp59 = tmp58->bitmap->get_height();		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(478)
		::flixel::_system::layer::Region tmp60 = this->_frontRegion;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(478)
		tmp60->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp59;
		HX_STACK_LINE(479)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,(void))

Void FlxBar_obj::createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",495,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(496)
		this->barType = (int)2;
		HX_STACK_LINE(499)
		int colA;		HX_STACK_VAR(colA,"colA");
		HX_STACK_LINE(500)
		int colRGB;		HX_STACK_VAR(colRGB,"colRGB");
		HX_STACK_LINE(502)
		int tmp = this->barWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		::String tmp1 = (HX_HCSTRING("Gradient: ","\xb6","\xcc","\xa6","\x9a") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		::String tmp2 = (tmp1 + HX_HCSTRING(" x ","\xc8","\xb0","\x18","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(502)
		::String tmp5 = (tmp4 + HX_HCSTRING(", colors: [","\x51","\x72","\x4d","\x6c"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(502)
		::String emptyKey = tmp5;		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(503)
			while((true)){
				HX_STACK_LINE(503)
				bool tmp6 = (_g < empty->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(503)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(503)
				if ((tmp7)){
					HX_STACK_LINE(503)
					break;
				}
				HX_STACK_LINE(503)
				int tmp8 = empty->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(503)
				int col = tmp8;		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(503)
				++(_g);
				HX_STACK_LINE(505)
				int tmp9 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(505)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(505)
				colA = tmp10;
				HX_STACK_LINE(506)
				int tmp11 = (int(col) & int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(506)
				colRGB = tmp11;
				HX_STACK_LINE(508)
				::String tmp12 = (emptyKey + colRGB);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(508)
				::String tmp13 = (tmp12 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(508)
				int tmp14 = colA;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(508)
				::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(508)
				::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(508)
				emptyKey = tmp16;
			}
		}
		HX_STACK_LINE(510)
		::String tmp6 = (emptyKey + HX_HCSTRING("], chunkSize: ","\x83","\x1f","\x5c","\x35"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(510)
		int tmp7 = chunkSize;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(510)
		::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(510)
		::String tmp9 = (tmp8 + HX_HCSTRING(", rotation: ","\xd8","\xfa","\x32","\x4d"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(510)
		int tmp10 = rotation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(510)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(510)
		::String tmp12 = (tmp11 + HX_HCSTRING("showBorder: ","\xaf","\xe8","\x85","\x84"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		bool tmp13 = showBorder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(510)
		::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(510)
		::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(510)
		emptyKey = tmp15;
		HX_STACK_LINE(512)
		int tmp16 = this->barWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(512)
		::String tmp17 = (HX_HCSTRING("Gradient: ","\xb6","\xcc","\xa6","\x9a") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(512)
		::String tmp18 = (tmp17 + HX_HCSTRING(" x ","\xc8","\xb0","\x18","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(512)
		int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(512)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(512)
		::String tmp21 = (tmp20 + HX_HCSTRING(", colors: [","\x51","\x72","\x4d","\x6c"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(512)
		::String filledKey = tmp21;		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			while((true)){
				HX_STACK_LINE(513)
				bool tmp22 = (_g < fill->length);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(513)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(513)
				if ((tmp23)){
					HX_STACK_LINE(513)
					break;
				}
				HX_STACK_LINE(513)
				int tmp24 = fill->__get(_g);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(513)
				int col = tmp24;		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(513)
				++(_g);
				HX_STACK_LINE(515)
				int tmp25 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(515)
				int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(515)
				colA = tmp26;
				HX_STACK_LINE(516)
				int tmp27 = (int(col) & int((int)16777215));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(516)
				colRGB = tmp27;
				HX_STACK_LINE(518)
				::String tmp28 = (filledKey + colRGB);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(518)
				::String tmp29 = (tmp28 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(518)
				int tmp30 = colA;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(518)
				::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(518)
				::String tmp32 = (tmp31 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(518)
				filledKey = tmp32;
			}
		}
		HX_STACK_LINE(520)
		::String tmp22 = (filledKey + HX_HCSTRING("], chunkSize: ","\x83","\x1f","\x5c","\x35"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(520)
		int tmp23 = chunkSize;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(520)
		::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(520)
		::String tmp25 = (tmp24 + HX_HCSTRING(", rotation: ","\xd8","\xfa","\x32","\x4d"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(520)
		int tmp26 = rotation;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(520)
		::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(520)
		::String tmp28 = (tmp27 + HX_HCSTRING("showBorder: ","\xaf","\xe8","\x85","\x84"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(520)
		bool tmp29 = showBorder;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(520)
		::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(520)
		::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(520)
		filledKey = tmp31;
		HX_STACK_LINE(522)
		bool tmp32 = showBorder;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(522)
		if ((tmp32)){
			HX_STACK_LINE(524)
			int tmp33 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(524)
			int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(524)
			int borderA = tmp34;		HX_STACK_VAR(borderA,"borderA");
			HX_STACK_LINE(525)
			int tmp35 = (int(border) & int((int)16777215));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(525)
			int borderRGB = tmp35;		HX_STACK_VAR(borderRGB,"borderRGB");
			HX_STACK_LINE(527)
			::String tmp36 = (emptyKey + HX_HCSTRING("border: ","\x92","\x92","\xf8","\x58"));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(527)
			int tmp37 = borderA;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(527)
			::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(527)
			::String tmp39 = (tmp38 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(527)
			int tmp40 = borderRGB;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(527)
			::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(527)
			emptyKey = tmp41;
			HX_STACK_LINE(528)
			::String tmp42 = (filledKey + HX_HCSTRING("border: ","\x92","\x92","\xf8","\x58"));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(528)
			int tmp43 = borderA;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(528)
			::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(528)
			::String tmp45 = (tmp44 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(528)
			int tmp46 = borderRGB;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(528)
			::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(528)
			filledKey = tmp47;
		}
		HX_STACK_LINE(531)
		int tmp33 = this->barWidth;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(531)
		int tmp34 = this->barHeight;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(531)
		bool tmp35 = (tmp33 >= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(531)
		if ((tmp35)){
			HX_STACK_LINE(533)
			this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
		}
		else{
			HX_STACK_LINE(537)
			this->_framesPosition = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
		}
		HX_STACK_LINE(541)
		bool tmp36 = showBorder;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(541)
		if ((tmp36)){
			HX_STACK_LINE(550)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp38 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(550)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp38;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(550)
				::String tmp39 = emptyKey;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(550)
				::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(550)
				bool tmp41 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(550)
				if ((tmp41)){
					HX_STACK_LINE(550)
					::String tmp42 = emptyKey;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(550)
					::String tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(550)
					::flixel::util::loaders::CachedGraphics tmp44 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(550)
					::flixel::util::loaders::CachedGraphics tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(550)
					::flixel::util::loaders::CachedGraphics tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(550)
					tmp37 = (tmp46 != null());
				}
				else{
					HX_STACK_LINE(550)
					tmp37 = false;
				}
			}
			HX_STACK_LINE(550)
			bool tmp38 = (tmp37 == false);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(550)
			if ((tmp38)){
				HX_STACK_LINE(552)
				int tmp39 = this->barWidth;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(552)
				int tmp40 = this->barHeight;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(552)
				int tmp41 = border;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(552)
				::openfl::_legacy::display::BitmapData tmp42 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp39,tmp40,true,tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(552)
				::openfl::_legacy::display::BitmapData emptyBar = tmp42;		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(553)
				::openfl::_legacy::display::BitmapData tmp43 = emptyBar;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(553)
				int tmp44 = this->barWidth;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(553)
				int tmp45 = (tmp44 - (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(553)
				int tmp46 = this->barHeight;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(553)
				int tmp47 = (tmp46 - (int)2);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(553)
				int tmp48 = chunkSize;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(553)
				int tmp49 = rotation;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(553)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp43,tmp45,tmp47,empty,(int)1,(int)1,tmp48,tmp49,null());
				HX_STACK_LINE(554)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp50 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(554)
				::openfl::_legacy::display::BitmapData tmp51 = emptyBar;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(554)
				::String tmp52 = emptyKey;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(554)
				tmp50->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp51,(int)0,(int)0,(int)1,(int)1,false,tmp52);
			}
			HX_STACK_LINE(557)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(557)
			{
				HX_STACK_LINE(557)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp40 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(557)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(557)
				::String tmp41 = filledKey;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(557)
				::String tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(557)
				bool tmp43 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(557)
				if ((tmp43)){
					HX_STACK_LINE(557)
					::String tmp44 = filledKey;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(557)
					::String tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(557)
					::flixel::util::loaders::CachedGraphics tmp46 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(557)
					::flixel::util::loaders::CachedGraphics tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(557)
					::flixel::util::loaders::CachedGraphics tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(557)
					tmp39 = (tmp48 != null());
				}
				else{
					HX_STACK_LINE(557)
					tmp39 = false;
				}
			}
			HX_STACK_LINE(557)
			bool tmp40 = (tmp39 == false);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(557)
			if ((tmp40)){
				HX_STACK_LINE(559)
				int tmp41 = this->barWidth;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(559)
				int tmp42 = this->barHeight;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(559)
				int tmp43 = border;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(559)
				::openfl::_legacy::display::BitmapData tmp44 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp41,tmp42,true,tmp43,null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(559)
				::openfl::_legacy::display::BitmapData filledBar = tmp44;		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(560)
				::openfl::_legacy::display::BitmapData tmp45 = filledBar;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(560)
				int tmp46 = this->barWidth;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(560)
				int tmp47 = (tmp46 - (int)2);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(560)
				int tmp48 = this->barHeight;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(560)
				int tmp49 = (tmp48 - (int)2);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(560)
				int tmp50 = chunkSize;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(560)
				int tmp51 = rotation;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(560)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp45,tmp47,tmp49,fill,(int)1,(int)1,tmp50,tmp51,null());
				HX_STACK_LINE(561)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp52 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(561)
				::openfl::_legacy::display::BitmapData tmp53 = filledBar;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(561)
				::String tmp54 = filledKey;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(561)
				tmp52->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp53,(int)0,(int)0,(int)1,(int)1,false,tmp54);
			}
		}
		else{
			HX_STACK_LINE(571)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(571)
			{
				HX_STACK_LINE(571)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp38 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(571)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp38;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(571)
				::String tmp39 = emptyKey;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(571)
				::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(571)
				bool tmp41 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(571)
				if ((tmp41)){
					HX_STACK_LINE(571)
					::String tmp42 = emptyKey;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(571)
					::String tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(571)
					::flixel::util::loaders::CachedGraphics tmp44 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(571)
					::flixel::util::loaders::CachedGraphics tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(571)
					::flixel::util::loaders::CachedGraphics tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(571)
					tmp37 = (tmp46 != null());
				}
				else{
					HX_STACK_LINE(571)
					tmp37 = false;
				}
			}
			HX_STACK_LINE(571)
			bool tmp38 = (tmp37 == false);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(571)
			if ((tmp38)){
				HX_STACK_LINE(573)
				int tmp39 = this->barWidth;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(573)
				int tmp40 = this->barHeight;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(573)
				int tmp41 = chunkSize;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(573)
				int tmp42 = rotation;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(573)
				::openfl::_legacy::display::BitmapData tmp43 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp39,tmp40,empty,tmp41,tmp42,null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(573)
				::openfl::_legacy::display::BitmapData emptyBar = tmp43;		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(574)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp44 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(574)
				::openfl::_legacy::display::BitmapData tmp45 = emptyBar;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(574)
				::String tmp46 = emptyKey;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(574)
				tmp44->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp45,(int)0,(int)0,(int)1,(int)1,false,tmp46);
			}
			HX_STACK_LINE(577)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp40 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(577)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp40;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(577)
				::String tmp41 = filledKey;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(577)
				::String tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(577)
				bool tmp43 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(577)
				if ((tmp43)){
					HX_STACK_LINE(577)
					::String tmp44 = filledKey;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(577)
					::String tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(577)
					::flixel::util::loaders::CachedGraphics tmp46 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(577)
					::flixel::util::loaders::CachedGraphics tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(577)
					::flixel::util::loaders::CachedGraphics tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(577)
					tmp39 = (tmp48 != null());
				}
				else{
					HX_STACK_LINE(577)
					tmp39 = false;
				}
			}
			HX_STACK_LINE(577)
			bool tmp40 = (tmp39 == false);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(577)
			if ((tmp40)){
				HX_STACK_LINE(579)
				int tmp41 = this->barWidth;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(579)
				int tmp42 = this->barHeight;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(579)
				int tmp43 = chunkSize;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(579)
				int tmp44 = rotation;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(579)
				::openfl::_legacy::display::BitmapData tmp45 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp41,tmp42,fill,tmp43,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(579)
				::openfl::_legacy::display::BitmapData filledBar = tmp45;		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(580)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp46 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(580)
				::openfl::_legacy::display::BitmapData tmp47 = filledBar;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(580)
				::String tmp48 = filledKey;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(580)
				tmp46->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp47,(int)0,(int)0,(int)1,(int)1,false,tmp48);
			}
		}
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp37 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(589)
			::String tmp38 = emptyKey;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(589)
			::flixel::util::loaders::CachedGraphics tmp39 = tmp37->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(589)
			::flixel::util::loaders::CachedGraphics value = tmp39;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(589)
			::flixel::util::loaders::CachedGraphics tmp40 = value;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(589)
			this->set_cachedGraphics(tmp40);
		}
		HX_STACK_LINE(590)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp37 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(590)
		::String tmp38 = filledKey;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(590)
		::flixel::util::loaders::CachedGraphics tmp39 = tmp37->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(590)
		this->setCachedFrontGraphics(tmp39);
		HX_STACK_LINE(592)
		::flixel::_system::layer::Region tmp40 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(592)
		this->region = tmp40;
		HX_STACK_LINE(593)
		::flixel::util::loaders::CachedGraphics tmp41 = this->cachedGraphics;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(593)
		int tmp42 = tmp41->bitmap->get_width();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(593)
		::flixel::_system::layer::Region tmp43 = this->region;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(593)
		tmp43->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp42;
		HX_STACK_LINE(594)
		::flixel::util::loaders::CachedGraphics tmp44 = this->cachedGraphics;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(594)
		int tmp45 = tmp44->bitmap->get_height();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(594)
		::flixel::_system::layer::Region tmp46 = this->region;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(594)
		tmp46->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp45;
		HX_STACK_LINE(595)
		::flixel::_system::layer::Region tmp47 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(595)
		this->_frontRegion = tmp47;
		HX_STACK_LINE(596)
		::flixel::util::loaders::CachedGraphics tmp48 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(596)
		int tmp49 = tmp48->bitmap->get_width();		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(596)
		::flixel::_system::layer::Region tmp50 = this->_frontRegion;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(596)
		tmp50->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp49;
		HX_STACK_LINE(597)
		::flixel::util::loaders::CachedGraphics tmp51 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(597)
		int tmp52 = tmp51->bitmap->get_height();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(597)
		::flixel::_system::layer::Region tmp53 = this->_frontRegion;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(597)
		tmp53->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp52;
		HX_STACK_LINE(598)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,(void))

Void FlxBar_obj::createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  __o_emptyBackground,hx::Null< int >  __o_fillBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",613,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(614)
		::flixel::util::loaders::CachedGraphics tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(614)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			Dynamic tmp2 = empty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			bool tmp3 = Unique;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			tmp = tmp1->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp2,(int)0,(int)0,(int)1,(int)1,tmp3,null());
		}
		HX_STACK_LINE(614)
		::flixel::util::loaders::CachedGraphics emptyGraphics = tmp;		HX_STACK_VAR(emptyGraphics,"emptyGraphics");
		HX_STACK_LINE(615)
		::flixel::util::loaders::CachedGraphics tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(615)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(615)
			Dynamic tmp3 = fill;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(615)
			bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			tmp1 = tmp2->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp3,(int)0,(int)0,(int)1,(int)1,tmp4,null());
		}
		HX_STACK_LINE(615)
		::flixel::util::loaders::CachedGraphics filledGraphics = tmp1;		HX_STACK_VAR(filledGraphics,"filledGraphics");
		HX_STACK_LINE(617)
		bool tmp2 = (emptyGraphics != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(617)
		::openfl::_legacy::display::BitmapData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		if ((tmp2)){
			HX_STACK_LINE(617)
			tmp3 = emptyGraphics->bitmap;
		}
		else{
			HX_STACK_LINE(617)
			tmp3 = null();
		}
		HX_STACK_LINE(617)
		::openfl::_legacy::display::BitmapData emptyBitmapData = tmp3;		HX_STACK_VAR(emptyBitmapData,"emptyBitmapData");
		HX_STACK_LINE(618)
		bool tmp4 = (filledGraphics != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(618)
		::openfl::_legacy::display::BitmapData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(618)
		if ((tmp4)){
			HX_STACK_LINE(618)
			tmp5 = filledGraphics->bitmap;
		}
		else{
			HX_STACK_LINE(618)
			tmp5 = null();
		}
		HX_STACK_LINE(618)
		::openfl::_legacy::display::BitmapData fillBitmapData = tmp5;		HX_STACK_VAR(fillBitmapData,"fillBitmapData");
		HX_STACK_LINE(621)
		::String emptyKey = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(622)
		::String filledKey = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(624)
		bool tmp6 = (empty != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(624)
		if ((tmp6)){
			HX_STACK_LINE(626)
			Dynamic tmp7 = empty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(626)
			bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(626)
			if ((tmp8)){
				HX_STACK_LINE(628)
				::hx::Class tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(628)
				tmp9 = hx::TCast< ::hx::Class >::cast(empty);
				HX_STACK_LINE(628)
				::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(628)
				hx::AddEq(emptyKey,tmp10);
			}
			else{
				HX_STACK_LINE(630)
				Dynamic tmp9 = empty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(630)
				bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(630)
				if ((tmp10)){
					HX_STACK_LINE(632)
					Dynamic tmp11 = empty;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(632)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(632)
					hx::AddEq(emptyKey,tmp12);
				}
			}
		}
		HX_STACK_LINE(636)
		bool tmp7 = (fill != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(636)
		if ((tmp7)){
			HX_STACK_LINE(638)
			Dynamic tmp8 = fill;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(638)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(638)
			if ((tmp9)){
				HX_STACK_LINE(640)
				::hx::Class tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(640)
				tmp10 = hx::TCast< ::hx::Class >::cast(fill);
				HX_STACK_LINE(640)
				::String tmp11 = ::Type_obj::getClassName(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(640)
				hx::AddEq(filledKey,tmp11);
			}
			else{
				HX_STACK_LINE(642)
				Dynamic tmp10 = fill;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(642)
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(642)
				if ((tmp11)){
					HX_STACK_LINE(644)
					Dynamic tmp12 = fill;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(644)
					::String tmp13 = ::Std_obj::string(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(644)
					hx::AddEq(filledKey,tmp13);
				}
			}
		}
		HX_STACK_LINE(648)
		int tmp8 = (int(emptyBackground) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(648)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(648)
		int emptyBackgroundA = tmp9;		HX_STACK_VAR(emptyBackgroundA,"emptyBackgroundA");
		HX_STACK_LINE(649)
		int tmp10 = (int(emptyBackground) & int((int)16777215));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(649)
		int emptyBackgroundRGB = tmp10;		HX_STACK_VAR(emptyBackgroundRGB,"emptyBackgroundRGB");
		HX_STACK_LINE(650)
		int tmp11 = (int(fillBackground) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(650)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(650)
		int fillBackgroundA = tmp12;		HX_STACK_VAR(fillBackgroundA,"fillBackgroundA");
		HX_STACK_LINE(651)
		int tmp13 = (int(fillBackground) & int((int)16777215));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(651)
		int fillBackgroundRGB = tmp13;		HX_STACK_VAR(fillBackgroundRGB,"fillBackgroundRGB");
		HX_STACK_LINE(653)
		::String tmp14 = (HX_HCSTRING("emptyBackground: ","\x41","\xc4","\xfd","\xb5") + emptyBackgroundA);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(653)
		::String tmp15 = (tmp14 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(653)
		int tmp16 = emptyBackgroundRGB;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(653)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(653)
		hx::AddEq(emptyKey,tmp17);
		HX_STACK_LINE(654)
		::String tmp18 = (HX_HCSTRING("fillBackground: ","\x37","\x71","\x68","\xe6") + fillBackgroundA);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(654)
		::String tmp19 = (tmp18 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(654)
		int tmp20 = fillBackgroundRGB;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(654)
		::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(654)
		hx::AddEq(filledKey,tmp21);
		HX_STACK_LINE(657)
		this->barType = (int)3;
		HX_STACK_LINE(659)
		bool tmp22 = (empty == null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(659)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(659)
		if ((tmp22)){
			HX_STACK_LINE(659)
			tmp23 = (fill == null());
		}
		else{
			HX_STACK_LINE(659)
			tmp23 = false;
		}
		HX_STACK_LINE(659)
		if ((tmp23)){
			HX_STACK_LINE(661)
			return null();
		}
		HX_STACK_LINE(664)
		bool tmp24 = (empty != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(664)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(664)
		if ((tmp24)){
			HX_STACK_LINE(664)
			tmp25 = (fill == null());
		}
		else{
			HX_STACK_LINE(664)
			tmp25 = false;
		}
		HX_STACK_LINE(664)
		if ((tmp25)){
			HX_STACK_LINE(677)
			int tmp26 = emptyBitmapData->get_width();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(677)
			this->barWidth = tmp26;
			HX_STACK_LINE(678)
			int tmp27 = emptyBitmapData->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(678)
			this->barHeight = tmp27;
			HX_STACK_LINE(680)
			int tmp28 = this->barWidth;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(680)
			int tmp29 = this->barHeight;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(680)
			bool tmp30 = (tmp28 >= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(680)
			if ((tmp30)){
				HX_STACK_LINE(682)
				this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
			}
			else{
				HX_STACK_LINE(686)
				this->_framesPosition = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
			}
			HX_STACK_LINE(689)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(689)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp32 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(689)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp32;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(689)
				::String tmp33 = emptyKey;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(689)
				::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(689)
				bool tmp35 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(689)
				if ((tmp35)){
					HX_STACK_LINE(689)
					::String tmp36 = emptyKey;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(689)
					::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(689)
					::flixel::util::loaders::CachedGraphics tmp38 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(689)
					::flixel::util::loaders::CachedGraphics tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(689)
					::flixel::util::loaders::CachedGraphics tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(689)
					tmp31 = (tmp40 != null());
				}
				else{
					HX_STACK_LINE(689)
					tmp31 = false;
				}
			}
			HX_STACK_LINE(689)
			bool tmp32 = (tmp31 == false);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(689)
			if ((tmp32)){
				HX_STACK_LINE(691)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp33 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(691)
				::openfl::_legacy::display::BitmapData tmp34 = emptyBitmapData;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(691)
				::String tmp35 = emptyKey;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(691)
				tmp33->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp34,(int)0,(int)0,(int)1,(int)1,false,tmp35);
			}
			HX_STACK_LINE(694)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp34 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(694)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp34;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(694)
				::String tmp35 = filledKey;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(694)
				::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(694)
				bool tmp37 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(694)
				if ((tmp37)){
					HX_STACK_LINE(694)
					::String tmp38 = filledKey;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(694)
					::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(694)
					::flixel::util::loaders::CachedGraphics tmp40 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(694)
					::flixel::util::loaders::CachedGraphics tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(694)
					::flixel::util::loaders::CachedGraphics tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(694)
					tmp33 = (tmp42 != null());
				}
				else{
					HX_STACK_LINE(694)
					tmp33 = false;
				}
			}
			HX_STACK_LINE(694)
			bool tmp34 = (tmp33 == false);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(694)
			if ((tmp34)){
				HX_STACK_LINE(696)
				int tmp35 = this->barWidth;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(696)
				int tmp36 = this->barHeight;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(696)
				int tmp37 = fillBackground;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(696)
				::openfl::_legacy::display::BitmapData tmp38 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp35,tmp36,true,tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(696)
				::openfl::_legacy::display::BitmapData filledBar = tmp38;		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(697)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp39 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(697)
				::openfl::_legacy::display::BitmapData tmp40 = filledBar;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(697)
				::String tmp41 = filledKey;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(697)
				tmp39->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp40,(int)0,(int)0,(int)1,(int)1,false,tmp41);
			}
		}
		else{
			HX_STACK_LINE(701)
			bool tmp26 = (empty == null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(701)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(701)
			if ((tmp26)){
				HX_STACK_LINE(701)
				tmp27 = (fill != null());
			}
			else{
				HX_STACK_LINE(701)
				tmp27 = false;
			}
			HX_STACK_LINE(701)
			if ((tmp27)){
				HX_STACK_LINE(714)
				int tmp28 = fillBitmapData->get_width();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(714)
				this->barWidth = tmp28;
				HX_STACK_LINE(715)
				int tmp29 = fillBitmapData->get_height();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(715)
				this->barHeight = tmp29;
				HX_STACK_LINE(717)
				int tmp30 = this->barWidth;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(717)
				int tmp31 = this->barHeight;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(717)
				bool tmp32 = (tmp30 >= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(717)
				if ((tmp32)){
					HX_STACK_LINE(719)
					this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
				}
				else{
					HX_STACK_LINE(723)
					this->_framesPosition = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
				}
				HX_STACK_LINE(726)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(726)
				{
					HX_STACK_LINE(726)
					::flixel::_system::frontEnds::BitmapFrontEnd tmp34 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(726)
					::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp34;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(726)
					::String tmp35 = emptyKey;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(726)
					::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(726)
					bool tmp37 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(726)
					if ((tmp37)){
						HX_STACK_LINE(726)
						::String tmp38 = emptyKey;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(726)
						::String tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(726)
						::flixel::util::loaders::CachedGraphics tmp40 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(726)
						::flixel::util::loaders::CachedGraphics tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(726)
						::flixel::util::loaders::CachedGraphics tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(726)
						tmp33 = (tmp42 != null());
					}
					else{
						HX_STACK_LINE(726)
						tmp33 = false;
					}
				}
				HX_STACK_LINE(726)
				bool tmp34 = (tmp33 == false);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(726)
				if ((tmp34)){
					HX_STACK_LINE(728)
					int tmp35 = this->barWidth;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(728)
					int tmp36 = this->barHeight;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(728)
					int tmp37 = emptyBackground;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(728)
					::openfl::_legacy::display::BitmapData tmp38 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp35,tmp36,true,tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(728)
					::openfl::_legacy::display::BitmapData emptyBar = tmp38;		HX_STACK_VAR(emptyBar,"emptyBar");
					HX_STACK_LINE(729)
					::flixel::_system::frontEnds::BitmapFrontEnd tmp39 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(729)
					::openfl::_legacy::display::BitmapData tmp40 = emptyBar;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(729)
					::String tmp41 = emptyKey;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(729)
					tmp39->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp40,(int)0,(int)0,(int)1,(int)1,false,tmp41);
				}
				HX_STACK_LINE(732)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(732)
				{
					HX_STACK_LINE(732)
					::flixel::_system::frontEnds::BitmapFrontEnd tmp36 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(732)
					::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp36;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(732)
					::String tmp37 = filledKey;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(732)
					::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(732)
					bool tmp39 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(732)
					if ((tmp39)){
						HX_STACK_LINE(732)
						::String tmp40 = filledKey;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(732)
						::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(732)
						::flixel::util::loaders::CachedGraphics tmp42 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(732)
						::flixel::util::loaders::CachedGraphics tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(732)
						::flixel::util::loaders::CachedGraphics tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(732)
						tmp35 = (tmp44 != null());
					}
					else{
						HX_STACK_LINE(732)
						tmp35 = false;
					}
				}
				HX_STACK_LINE(732)
				bool tmp36 = (tmp35 == false);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(732)
				if ((tmp36)){
					HX_STACK_LINE(734)
					::flixel::_system::frontEnds::BitmapFrontEnd tmp37 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(734)
					::openfl::_legacy::display::BitmapData tmp38 = fillBitmapData;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(734)
					::String tmp39 = filledKey;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(734)
					tmp37->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp38,(int)0,(int)0,(int)1,(int)1,false,tmp39);
				}
			}
			else{
				HX_STACK_LINE(738)
				bool tmp28 = (empty != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(738)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(738)
				if ((tmp28)){
					HX_STACK_LINE(738)
					tmp29 = (fill != null());
				}
				else{
					HX_STACK_LINE(738)
					tmp29 = false;
				}
				HX_STACK_LINE(738)
				if ((tmp29)){
					HX_STACK_LINE(751)
					int tmp30 = emptyBitmapData->get_width();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(751)
					this->barWidth = tmp30;
					HX_STACK_LINE(752)
					int tmp31 = emptyBitmapData->get_height();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(752)
					this->barHeight = tmp31;
					HX_STACK_LINE(754)
					int tmp32 = this->barWidth;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(754)
					int tmp33 = this->barHeight;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(754)
					bool tmp34 = (tmp32 >= tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(754)
					if ((tmp34)){
						HX_STACK_LINE(756)
						this->_framesPosition = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
					}
					else{
						HX_STACK_LINE(760)
						this->_framesPosition = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
					}
					HX_STACK_LINE(763)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(763)
					{
						HX_STACK_LINE(763)
						::flixel::_system::frontEnds::BitmapFrontEnd tmp36 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(763)
						::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp36;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(763)
						::String tmp37 = emptyKey;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(763)
						::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(763)
						bool tmp39 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(763)
						if ((tmp39)){
							HX_STACK_LINE(763)
							::String tmp40 = emptyKey;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(763)
							::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(763)
							::flixel::util::loaders::CachedGraphics tmp42 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(763)
							::flixel::util::loaders::CachedGraphics tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(763)
							::flixel::util::loaders::CachedGraphics tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(763)
							tmp35 = (tmp44 != null());
						}
						else{
							HX_STACK_LINE(763)
							tmp35 = false;
						}
					}
					HX_STACK_LINE(763)
					bool tmp36 = (tmp35 == false);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(763)
					if ((tmp36)){
						HX_STACK_LINE(765)
						::flixel::_system::frontEnds::BitmapFrontEnd tmp37 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(765)
						::openfl::_legacy::display::BitmapData tmp38 = emptyBitmapData;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(765)
						::String tmp39 = emptyKey;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(765)
						tmp37->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp38,(int)0,(int)0,(int)1,(int)1,false,tmp39);
					}
					HX_STACK_LINE(768)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						::flixel::_system::frontEnds::BitmapFrontEnd tmp38 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(768)
						::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp38;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(768)
						::String tmp39 = filledKey;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(768)
						::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(768)
						bool tmp41 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(768)
						if ((tmp41)){
							HX_STACK_LINE(768)
							::String tmp42 = filledKey;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(768)
							::String tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(768)
							::flixel::util::loaders::CachedGraphics tmp44 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(768)
							::flixel::util::loaders::CachedGraphics tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(768)
							::flixel::util::loaders::CachedGraphics tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(768)
							tmp37 = (tmp46 != null());
						}
						else{
							HX_STACK_LINE(768)
							tmp37 = false;
						}
					}
					HX_STACK_LINE(768)
					bool tmp38 = (tmp37 == false);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(768)
					if ((tmp38)){
						HX_STACK_LINE(770)
						::flixel::_system::frontEnds::BitmapFrontEnd tmp39 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(770)
						::openfl::_legacy::display::BitmapData tmp40 = fillBitmapData;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(770)
						::String tmp41 = filledKey;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(770)
						tmp39->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp40,(int)0,(int)0,(int)1,(int)1,false,tmp41);
					}
				}
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp26 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(778)
			::String tmp27 = emptyKey;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(778)
			::flixel::util::loaders::CachedGraphics tmp28 = tmp26->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(778)
			::flixel::util::loaders::CachedGraphics value = tmp28;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(778)
			::flixel::util::loaders::CachedGraphics tmp29 = value;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(778)
			this->set_cachedGraphics(tmp29);
		}
		HX_STACK_LINE(779)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp26 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(779)
		::String tmp27 = filledKey;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(779)
		::flixel::util::loaders::CachedGraphics tmp28 = tmp26->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(779)
		this->setCachedFrontGraphics(tmp28);
		HX_STACK_LINE(781)
		::flixel::_system::layer::Region tmp29 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(781)
		this->region = tmp29;
		HX_STACK_LINE(782)
		::flixel::util::loaders::CachedGraphics tmp30 = this->cachedGraphics;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(782)
		int tmp31 = tmp30->bitmap->get_width();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(782)
		::flixel::_system::layer::Region tmp32 = this->region;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(782)
		tmp32->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp31;
		HX_STACK_LINE(783)
		::flixel::util::loaders::CachedGraphics tmp33 = this->cachedGraphics;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(783)
		int tmp34 = tmp33->bitmap->get_height();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(783)
		::flixel::_system::layer::Region tmp35 = this->region;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(783)
		tmp35->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp34;
		HX_STACK_LINE(784)
		::flixel::_system::layer::Region tmp36 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(784)
		this->_frontRegion = tmp36;
		HX_STACK_LINE(785)
		::flixel::util::loaders::CachedGraphics tmp37 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(785)
		int tmp38 = tmp37->bitmap->get_width();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(785)
		::flixel::_system::layer::Region tmp39 = this->_frontRegion;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(785)
		tmp39->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp38;
		HX_STACK_LINE(786)
		::flixel::util::loaders::CachedGraphics tmp40 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(786)
		int tmp41 = tmp40->bitmap->get_height();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(786)
		::flixel::_system::layer::Region tmp42 = this->_frontRegion;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(786)
		tmp42->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp41;
		HX_STACK_LINE(787)
		this->updateFrameData();
		HX_STACK_LINE(790)
		bool tmp43 = this->fillHorizontal;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(790)
		if ((tmp43)){
			HX_STACK_LINE(792)
			int tmp44 = this->barWidth;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(792)
			Float tmp45 = (Float(tmp44) / Float((int)100));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(792)
			this->pxPerPercent = tmp45;
		}
		else{
			HX_STACK_LINE(796)
			int tmp44 = this->barHeight;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(796)
			Float tmp45 = (Float(tmp44) / Float((int)100));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(796)
			this->pxPerPercent = tmp45;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,(void))

Void FlxBar_obj::setFillDirection( int direction){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setFillDirection",0x4f9f215f,"flixel.ui.FlxBar.setFillDirection","flixel/ui/FlxBar.hx",806,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(807)
		bool tmp = (direction == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(807)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(807)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(807)
		if ((tmp2)){
			HX_STACK_LINE(807)
			tmp3 = (direction == (int)2);
		}
		else{
			HX_STACK_LINE(807)
			tmp3 = true;
		}
		HX_STACK_LINE(807)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(807)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(807)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(807)
		if ((tmp5)){
			HX_STACK_LINE(807)
			tmp6 = (direction == (int)5);
		}
		else{
			HX_STACK_LINE(807)
			tmp6 = true;
		}
		HX_STACK_LINE(807)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(807)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		if ((tmp7)){
			HX_STACK_LINE(807)
			tmp8 = (direction == (int)6);
		}
		else{
			HX_STACK_LINE(807)
			tmp8 = true;
		}
		HX_STACK_LINE(807)
		if ((tmp8)){
			HX_STACK_LINE(809)
			this->fillDirection = direction;
			HX_STACK_LINE(810)
			this->fillHorizontal = true;
		}
		else{
			HX_STACK_LINE(812)
			bool tmp9 = (direction == (int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(812)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(812)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(812)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(812)
			if ((tmp11)){
				HX_STACK_LINE(812)
				tmp12 = (direction == (int)4);
			}
			else{
				HX_STACK_LINE(812)
				tmp12 = true;
			}
			HX_STACK_LINE(812)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(812)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(812)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(812)
			if ((tmp14)){
				HX_STACK_LINE(812)
				tmp15 = (direction == (int)7);
			}
			else{
				HX_STACK_LINE(812)
				tmp15 = true;
			}
			HX_STACK_LINE(812)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(812)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(812)
			if ((tmp16)){
				HX_STACK_LINE(812)
				tmp17 = (direction == (int)8);
			}
			else{
				HX_STACK_LINE(812)
				tmp17 = true;
			}
			HX_STACK_LINE(812)
			if ((tmp17)){
				HX_STACK_LINE(814)
				this->fillDirection = direction;
				HX_STACK_LINE(815)
				this->fillHorizontal = false;
			}
		}
		HX_STACK_LINE(819)
		this->updateFrameData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setFillDirection,(void))

Void FlxBar_obj::updateValueFromParent( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",824,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(825)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		::String tmp1 = this->parentVariable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		Dynamic tmp2 = ::Reflect_obj::getProperty(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		this->updateValue(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

Void FlxBar_obj::updateValue( Float newValue){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValue",0xa537bba3,"flixel.ui.FlxBar.updateValue","flixel/ui/FlxBar.hx",829,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newValue,"newValue")
		HX_STACK_LINE(830)
		Float tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		Float tmp1 = this->max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		if ((tmp2)){
			HX_STACK_LINE(832)
			Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(832)
			newValue = tmp3;
		}
		HX_STACK_LINE(835)
		Float tmp3 = newValue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		Float tmp4 = this->min;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(835)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		if ((tmp5)){
			HX_STACK_LINE(837)
			Float tmp6 = this->min;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(837)
			newValue = tmp6;
		}
		HX_STACK_LINE(840)
		this->value = newValue;
		HX_STACK_LINE(842)
		Float tmp6 = this->value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(842)
		Float tmp7 = this->min;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(842)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(842)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(842)
		if ((tmp8)){
			HX_STACK_LINE(842)
			Dynamic tmp10 = this->emptyCallback_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(842)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(842)
			tmp9 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(842)
			tmp9 = false;
		}
		HX_STACK_LINE(842)
		if ((tmp9)){
			HX_STACK_LINE(844)
			this->emptyCallback();
		}
		HX_STACK_LINE(847)
		Float tmp10 = this->value;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(847)
		Float tmp11 = this->max;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(847)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(847)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(847)
		if ((tmp12)){
			HX_STACK_LINE(847)
			Dynamic tmp14 = this->filledCallback_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(847)
			Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(847)
			tmp13 = (tmp15 != null());
		}
		else{
			HX_STACK_LINE(847)
			tmp13 = false;
		}
		HX_STACK_LINE(847)
		if ((tmp13)){
			HX_STACK_LINE(849)
			this->filledCallback();
		}
		HX_STACK_LINE(852)
		Float tmp14 = this->value;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(852)
		Float tmp15 = this->min;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(852)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(852)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(852)
		if ((tmp16)){
			HX_STACK_LINE(852)
			tmp17 = this->emptyKill;
		}
		else{
			HX_STACK_LINE(852)
			tmp17 = false;
		}
		HX_STACK_LINE(852)
		if ((tmp17)){
			HX_STACK_LINE(854)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,updateValue,(void))

Void FlxBar_obj::updateBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",863,0x9c56c8d5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

Void FlxBar_obj::update( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",921,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(922)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(922)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(922)
		if ((tmp1)){
			HX_STACK_LINE(924)
			Dynamic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(924)
			::String tmp3 = this->parentVariable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(924)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(924)
			Float tmp5 = this->value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(924)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(924)
			if ((tmp6)){
				HX_STACK_LINE(926)
				this->updateValueFromParent();
				HX_STACK_LINE(927)
				this->updateBar();
			}
			HX_STACK_LINE(930)
			bool tmp7 = this->fixedPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(930)
			bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(930)
			if ((tmp8)){
				HX_STACK_LINE(932)
				Dynamic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(932)
				::flixel::util::FlxPoint tmp10 = this->positionOffset;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(932)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(932)
				Dynamic tmp12 = (tmp9->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(932)
				this->set_x(tmp12);
				HX_STACK_LINE(933)
				Dynamic tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(933)
				::flixel::util::FlxPoint tmp14 = this->positionOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(933)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(933)
				Dynamic tmp16 = (tmp13->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(933)
				this->set_y(tmp16);
			}
		}
		HX_STACK_LINE(937)
		this->super::update();
	}
return null();
}


Float FlxBar_obj::get_percent( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",946,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(954)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(954)
	Float tmp1 = this->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(954)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(954)
	if ((tmp2)){
		HX_STACK_LINE(956)
		return (int)100;
	}
	HX_STACK_LINE(959)
	Float tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(959)
	Float tmp4 = this->range;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(959)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(959)
	Float tmp6 = (tmp5 * (int)100);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(959)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(959)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent( Float newPct){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",966,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPct,"newPct")
	HX_STACK_LINE(967)
	bool tmp = (newPct >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(967)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(967)
	if ((tmp)){
		HX_STACK_LINE(967)
		tmp1 = (newPct <= (int)100);
	}
	else{
		HX_STACK_LINE(967)
		tmp1 = false;
	}
	HX_STACK_LINE(967)
	if ((tmp1)){
		HX_STACK_LINE(969)
		Float tmp2 = this->pct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(969)
		Float tmp3 = newPct;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(969)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(969)
		this->updateValue(tmp4);
		HX_STACK_LINE(970)
		this->updateBar();
	}
	HX_STACK_LINE(972)
	Float tmp2 = newPct;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(972)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_currentValue( Float newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_currentValue",0x7158bd9a,"flixel.ui.FlxBar.set_currentValue","flixel/ui/FlxBar.hx",981,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(982)
	Float tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	this->updateValue(tmp);
	HX_STACK_LINE(983)
	this->updateBar();
	HX_STACK_LINE(984)
	Float tmp1 = newValue;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(984)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_currentValue,return )

Float FlxBar_obj::get_currentValue( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_currentValue",0x1b16d026,"flixel.ui.FlxBar.get_currentValue","flixel/ui/FlxBar.hx",991,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(992)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_currentValue,return )

Void FlxBar_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",997,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(998)
		::flixel::util::loaders::CachedGraphics tmp = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(998)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(998)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(998)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(998)
		if ((tmp2)){
			HX_STACK_LINE(998)
			::flixel::util::loaders::CachedGraphics tmp4 = this->cachedGraphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(998)
			::flixel::util::loaders::CachedGraphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(998)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(998)
			tmp3 = true;
		}
		HX_STACK_LINE(998)
		if ((tmp3)){
			HX_STACK_LINE(1000)
			return null();
		}
		HX_STACK_LINE(1003)
		Float tmp4 = this->get_percent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1003)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1003)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1003)
		int tmp7 = ((int)2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1003)
		int percentFrame = tmp7;		HX_STACK_VAR(percentFrame,"percentFrame");
		HX_STACK_LINE(1005)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(1006)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(1007)
		::flixel::_system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(1009)
		{
			HX_STACK_LINE(1009)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1009)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1009)
			while((true)){
				HX_STACK_LINE(1009)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1009)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1009)
				if ((tmp9)){
					HX_STACK_LINE(1009)
					break;
				}
				HX_STACK_LINE(1009)
				::flixel::FlxCamera tmp10 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1009)
				::flixel::FlxCamera camera = tmp10;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(1009)
				++(_g);
				HX_STACK_LINE(1011)
				bool tmp11 = camera->visible;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1011)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1011)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1011)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1011)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1011)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1011)
				if ((tmp15)){
					HX_STACK_LINE(1011)
					bool tmp17 = camera->exists;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1011)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1011)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1011)
					tmp16 = !(tmp19);
				}
				else{
					HX_STACK_LINE(1011)
					tmp16 = true;
				}
				HX_STACK_LINE(1011)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1011)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1011)
				if ((tmp17)){
					HX_STACK_LINE(1011)
					::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1011)
					::flixel::FlxCamera tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1011)
					bool tmp21 = this->isOnScreen(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1011)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1011)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1011)
					tmp18 = !(tmp23);
				}
				else{
					HX_STACK_LINE(1011)
					tmp18 = true;
				}
				HX_STACK_LINE(1011)
				if ((tmp18)){
					HX_STACK_LINE(1013)
					continue;
				}
				HX_STACK_LINE(1015)
				::flixel::util::loaders::CachedGraphics tmp19 = this->cachedGraphics;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1015)
				bool tmp20 = this->isColored;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1015)
				int tmp21 = this->_blendInt;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1015)
				bool tmp22 = this->antialiasing;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1015)
				::flixel::_system::layer::DrawStackItem tmp23 = camera->getDrawStackItem(tmp19,tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1015)
				drawItem = tmp23;
				HX_STACK_LINE(1017)
				currDrawData = drawItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );
				HX_STACK_LINE(1018)
				currIndex = drawItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
				HX_STACK_LINE(1020)
				::flixel::util::FlxPoint tmp24 = this->_point;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1020)
				Float tmp25 = this->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1020)
				Float tmp26 = camera->scroll->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1020)
				::flixel::util::FlxPoint tmp27 = this->scrollFactor;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1020)
				Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1020)
				Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1020)
				Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1020)
				::flixel::util::FlxPoint tmp31 = this->offset;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1020)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1020)
				Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1020)
				::flixel::util::FlxPoint tmp34 = this->origin;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1020)
				Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1020)
				Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1020)
				tmp24->set_x(tmp36);
				HX_STACK_LINE(1021)
				::flixel::util::FlxPoint tmp37 = this->_point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1021)
				Float tmp38 = this->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1021)
				Float tmp39 = camera->scroll->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1021)
				::flixel::util::FlxPoint tmp40 = this->scrollFactor;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1021)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1021)
				Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1021)
				Float tmp43 = (tmp38 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1021)
				::flixel::util::FlxPoint tmp44 = this->offset;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1021)
				Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1021)
				Float tmp46 = (tmp43 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1021)
				::flixel::util::FlxPoint tmp47 = this->origin;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1021)
				Float tmp48 = tmp47->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1021)
				Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1021)
				tmp37->set_y(tmp49);
				HX_STACK_LINE(1023)
				Float csx = (int)1;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(1024)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(1025)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(1026)
				Float csy = (int)1;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(1027)
				Float x1 = (int)0;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(1028)
				Float y1 = (int)0;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(1029)
				Float x2 = (int)0;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(1030)
				Float y2 = (int)0;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(1032)
				bool tmp50 = this->isSimpleRender();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1032)
				bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1032)
				if ((tmp51)){
					HX_STACK_LINE(1034)
					bool tmp52 = this->_angleChanged;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1034)
					if ((tmp52)){
						HX_STACK_LINE(1036)
						Float tmp53 = this->angle;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1036)
						Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1036)
						Float tmp55 = ::Math_obj::PI;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1036)
						Float tmp56 = (Float(tmp55) / Float((int)180));		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1036)
						Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1036)
						Float radians = tmp57;		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(1037)
						Float tmp58 = radians;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1037)
						Float tmp59 = ::Math_obj::sin(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1037)
						this->_sinAngle = tmp59;
						HX_STACK_LINE(1038)
						Float tmp60 = radians;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1038)
						Float tmp61 = ::Math_obj::cos(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1038)
						this->_cosAngle = tmp61;
						HX_STACK_LINE(1039)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(1042)
					Float tmp53 = this->_cosAngle;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1042)
					::flixel::util::FlxPoint tmp54 = this->scale;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1042)
					Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1042)
					Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1042)
					csx = tmp56;
					HX_STACK_LINE(1043)
					Float tmp57 = this->_sinAngle;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(1043)
					::flixel::util::FlxPoint tmp58 = this->scale;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(1043)
					Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(1043)
					Float tmp60 = (tmp57 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(1043)
					ssy = tmp60;
					HX_STACK_LINE(1044)
					Float tmp61 = this->_sinAngle;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1044)
					::flixel::util::FlxPoint tmp62 = this->scale;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(1044)
					Float tmp63 = tmp62->x;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(1044)
					Float tmp64 = (tmp61 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1044)
					ssx = tmp64;
					HX_STACK_LINE(1045)
					Float tmp65 = this->_cosAngle;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(1045)
					::flixel::util::FlxPoint tmp66 = this->scale;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(1045)
					Float tmp67 = tmp66->y;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(1045)
					Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(1045)
					csy = tmp68;
					HX_STACK_LINE(1047)
					::flixel::util::FlxPoint tmp69 = this->origin;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(1047)
					Float tmp70 = tmp69->x;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(1047)
					Float tmp71 = this->_halfWidth;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(1047)
					Float tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(1047)
					x1 = tmp72;
					HX_STACK_LINE(1048)
					::flixel::util::FlxPoint tmp73 = this->origin;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(1048)
					Float tmp74 = tmp73->y;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1048)
					Float tmp75 = this->_halfHeight;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1048)
					Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1048)
					y1 = tmp76;
					HX_STACK_LINE(1049)
					Float tmp77 = (x1 * csx);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1049)
					Float tmp78 = (y1 * ssy);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1049)
					Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(1049)
					x2 = tmp79;
					HX_STACK_LINE(1050)
					Float tmp80 = x1;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(1050)
					Float tmp81 = -(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(1050)
					Float tmp82 = ssx;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(1050)
					Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1050)
					Float tmp84 = (y1 * csy);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1050)
					Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1050)
					y2 = tmp85;
				}
				HX_STACK_LINE(1054)
				int tmp52 = (currIndex)++;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1054)
				::flixel::util::FlxPoint tmp53 = this->_point;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1054)
				Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1054)
				Float tmp55 = x2;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1054)
				Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1054)
				currDrawData[tmp52] = tmp56;
				HX_STACK_LINE(1055)
				int tmp57 = (currIndex)++;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1055)
				::flixel::util::FlxPoint tmp58 = this->_point;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1055)
				Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1055)
				Float tmp60 = y2;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1055)
				Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1055)
				currDrawData[tmp57] = tmp61;
				HX_STACK_LINE(1057)
				int tmp62 = (currIndex)++;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1057)
				int tmp63 = this->_emptyBarFrameID;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1057)
				currDrawData[tmp62] = tmp63;
				HX_STACK_LINE(1059)
				int tmp64 = (currIndex)++;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1059)
				Float tmp65 = csx;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1059)
				currDrawData[tmp64] = tmp65;
				HX_STACK_LINE(1060)
				int tmp66 = (currIndex)++;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1060)
				Float tmp67 = ssx;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1060)
				Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1060)
				currDrawData[tmp66] = tmp68;
				HX_STACK_LINE(1061)
				int tmp69 = (currIndex)++;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1061)
				Float tmp70 = ssy;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1061)
				currDrawData[tmp69] = tmp70;
				HX_STACK_LINE(1062)
				int tmp71 = (currIndex)++;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1062)
				Float tmp72 = csy;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1062)
				currDrawData[tmp71] = tmp72;
				HX_STACK_LINE(1064)
				bool tmp73 = this->isColored;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1064)
				if ((tmp73)){
					HX_STACK_LINE(1066)
					int tmp74 = (currIndex)++;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1066)
					Float tmp75 = this->_red;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1066)
					currDrawData[tmp74] = tmp75;
					HX_STACK_LINE(1067)
					int tmp76 = (currIndex)++;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1067)
					Float tmp77 = this->_green;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1067)
					currDrawData[tmp76] = tmp77;
					HX_STACK_LINE(1068)
					int tmp78 = (currIndex)++;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1068)
					Float tmp79 = this->_blue;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(1068)
					currDrawData[tmp78] = tmp79;
				}
				HX_STACK_LINE(1070)
				int tmp74 = (currIndex)++;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1070)
				Float tmp75 = this->alpha;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1070)
				currDrawData[tmp74] = tmp75;
				HX_STACK_LINE(1072)
				drawItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = currIndex;
				HX_STACK_LINE(1075)
				::flixel::util::loaders::CachedGraphics tmp76 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1075)
				bool tmp77 = this->isColored;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(1075)
				int tmp78 = this->_blendInt;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(1075)
				bool tmp79 = this->antialiasing;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(1075)
				::flixel::_system::layer::DrawStackItem tmp80 = camera->getDrawStackItem(tmp76,tmp77,tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1075)
				drawItem = tmp80;
				HX_STACK_LINE(1077)
				currDrawData = drawItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );
				HX_STACK_LINE(1078)
				currIndex = drawItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
				HX_STACK_LINE(1080)
				bool tmp81 = (percentFrame >= (int)0);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1080)
				if ((tmp81)){
					HX_STACK_LINE(1082)
					Float tmp82 = x1;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(1082)
					Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1082)
					Float currTileX = tmp83;		HX_STACK_VAR(currTileX,"currTileX");
					HX_STACK_LINE(1083)
					Float tmp84 = y1;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1083)
					Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1083)
					Float currTileY = tmp85;		HX_STACK_VAR(currTileY,"currTileY");
					HX_STACK_LINE(1085)
					bool tmp86 = this->fillHorizontal;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(1085)
					if ((tmp86)){
						HX_STACK_LINE(1087)
						Float tmp87 = this->_filledBarFrames->__get(percentFrame);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(1087)
						hx::AddEq(currTileX,tmp87);
					}
					else{
						HX_STACK_LINE(1091)
						Float tmp87 = this->_filledBarFrames->__get(percentFrame);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(1091)
						hx::AddEq(currTileY,tmp87);
					}
					HX_STACK_LINE(1094)
					Float tmp87 = (currTileX * csx);		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(1094)
					Float tmp88 = (currTileY * ssy);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(1094)
					Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(1094)
					Float relativeX = tmp89;		HX_STACK_VAR(relativeX,"relativeX");
					HX_STACK_LINE(1095)
					Float tmp90 = currTileX;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(1095)
					Float tmp91 = -(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(1095)
					Float tmp92 = ssx;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(1095)
					Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(1095)
					Float tmp94 = (currTileY * csy);		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(1095)
					Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(1095)
					Float relativeY = tmp95;		HX_STACK_VAR(relativeY,"relativeY");
					HX_STACK_LINE(1097)
					int tmp96 = (currIndex)++;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(1097)
					::flixel::util::FlxPoint tmp97 = this->_point;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(1097)
					Float tmp98 = tmp97->x;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(1097)
					Float tmp99 = relativeX;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(1097)
					Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(1097)
					currDrawData[tmp96] = tmp100;
					HX_STACK_LINE(1098)
					int tmp101 = (currIndex)++;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(1098)
					::flixel::util::FlxPoint tmp102 = this->_point;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(1098)
					Float tmp103 = tmp102->y;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(1098)
					Float tmp104 = relativeY;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(1098)
					Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(1098)
					currDrawData[tmp101] = tmp105;
					HX_STACK_LINE(1100)
					int tmp106 = (currIndex)++;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(1100)
					int tmp107 = (percentFrame + (int)1);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(1100)
					Float tmp108 = this->_filledBarFrames->__get(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(1100)
					currDrawData[tmp106] = tmp108;
					HX_STACK_LINE(1102)
					int tmp109 = (currIndex)++;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(1102)
					Float tmp110 = csx;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(1102)
					currDrawData[tmp109] = tmp110;
					HX_STACK_LINE(1103)
					int tmp111 = (currIndex)++;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(1103)
					Float tmp112 = ssx;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1103)
					Float tmp113 = -(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1103)
					currDrawData[tmp111] = tmp113;
					HX_STACK_LINE(1104)
					int tmp114 = (currIndex)++;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1104)
					Float tmp115 = ssy;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1104)
					currDrawData[tmp114] = tmp115;
					HX_STACK_LINE(1105)
					int tmp116 = (currIndex)++;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(1105)
					Float tmp117 = csy;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(1105)
					currDrawData[tmp116] = tmp117;
					HX_STACK_LINE(1107)
					bool tmp118 = this->isColored;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(1107)
					if ((tmp118)){
						HX_STACK_LINE(1109)
						int tmp119 = (currIndex)++;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(1109)
						Float tmp120 = this->_red;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(1109)
						currDrawData[tmp119] = tmp120;
						HX_STACK_LINE(1110)
						int tmp121 = (currIndex)++;		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(1110)
						Float tmp122 = this->_green;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(1110)
						currDrawData[tmp121] = tmp122;
						HX_STACK_LINE(1111)
						int tmp123 = (currIndex)++;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(1111)
						Float tmp124 = this->_blue;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(1111)
						currDrawData[tmp123] = tmp124;
					}
					HX_STACK_LINE(1113)
					int tmp119 = (currIndex)++;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(1113)
					Float tmp120 = this->alpha;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(1113)
					currDrawData[tmp119] = tmp120;
				}
				HX_STACK_LINE(1116)
				drawItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = currIndex;
			}
		}
	}
return null();
}


::openfl::_legacy::display::BitmapData FlxBar_obj::set_pixels( ::openfl::_legacy::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",1125,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1126)
	::openfl::_legacy::display::BitmapData tmp = Pixels;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1126)
	return tmp;
}


bool FlxBar_obj::isSimpleRender( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","isSimpleRender",0x61bbf017,"flixel.ui.FlxBar.isSimpleRender","flixel/ui/FlxBar.hx",1130,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1131)
	Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1131)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1131)
	if ((tmp2)){
		HX_STACK_LINE(1131)
		::flixel::util::FlxPoint tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1131)
		::flixel::util::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1131)
		::flixel::util::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1131)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1131)
		tmp3 = (tmp7 == (int)1);
	}
	else{
		HX_STACK_LINE(1131)
		tmp3 = false;
	}
	HX_STACK_LINE(1131)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1131)
	if ((tmp3)){
		HX_STACK_LINE(1131)
		::flixel::util::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1131)
		::flixel::util::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1131)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1131)
		tmp4 = (tmp7 == (int)1);
	}
	else{
		HX_STACK_LINE(1131)
		tmp4 = false;
	}
	HX_STACK_LINE(1131)
	return tmp4;
}


Void FlxBar_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateFrameData",0xa3ba5229,"flixel.ui.FlxBar.updateFrameData","flixel/ui/FlxBar.hx",1137,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1138)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1138)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1138)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1138)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1138)
		if ((tmp2)){
			HX_STACK_LINE(1138)
			::flixel::util::loaders::CachedGraphics tmp4 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1138)
			::flixel::util::loaders::CachedGraphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1138)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(1138)
			tmp3 = true;
		}
		HX_STACK_LINE(1138)
		if ((tmp3)){
			HX_STACK_LINE(1140)
			return null();
		}
		HX_STACK_LINE(1143)
		int tmp4 = this->barWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1143)
		Float tmp5 = (((Float)0.5) * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1143)
		this->_halfWidth = tmp5;
		HX_STACK_LINE(1144)
		int tmp6 = this->barHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1144)
		Float tmp7 = (((Float)0.5) * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1144)
		this->_halfHeight = tmp7;
		HX_STACK_LINE(1146)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1146)
		{
			HX_STACK_LINE(1146)
			::flixel::util::loaders::CachedGraphics tmp9 = this->cachedGraphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1146)
			::flixel::_system::layer::TileSheetData tmp10 = tmp9->get_tilesheet();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1146)
			::flixel::_system::layer::TileSheetData _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1146)
			int tmp11 = this->barWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1146)
			int tmp12 = this->barHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Rectangle tmp13 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Rectangle tileRect = tmp13;		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(1146)
			int tmp14 = this->barWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1146)
			Float tmp15 = (((Float)0.5) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1146)
			int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1146)
			Float tmp17 = (((Float)0.5) * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Point tmp18 = ::openfl::_legacy::geom::Point_obj::__new(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Point point = tmp18;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Rectangle tmp19 = tileRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1146)
			::openfl::_legacy::geom::Point tmp20 = point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1146)
			tmp8 = _this->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp19,tmp20);
		}
		HX_STACK_LINE(1146)
		this->_emptyBarFrameID = tmp8;
		HX_STACK_LINE(1147)
		this->_filledBarFrames = Array_obj< Float >::__new();
		HX_STACK_LINE(1149)
		Float frameRelativePosition;		HX_STACK_VAR(frameRelativePosition,"frameRelativePosition");
		HX_STACK_LINE(1150)
		Float frameX;		HX_STACK_VAR(frameX,"frameX");
		HX_STACK_LINE(1151)
		Float frameY;		HX_STACK_VAR(frameY,"frameY");
		HX_STACK_LINE(1152)
		Float frameWidth = (int)0;		HX_STACK_VAR(frameWidth,"frameWidth");
		HX_STACK_LINE(1153)
		Float frameHeight = (int)0;		HX_STACK_VAR(frameHeight,"frameHeight");
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1155)
			int tmp9 = (int)101;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1155)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1155)
			while((true)){
				HX_STACK_LINE(1155)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1155)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1155)
				if ((tmp11)){
					HX_STACK_LINE(1155)
					break;
				}
				HX_STACK_LINE(1155)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1155)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1157)
				frameX = (int)0;
				HX_STACK_LINE(1158)
				frameY = (int)0;
				HX_STACK_LINE(1160)
				int tmp13 = this->fillDirection;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1160)
				bool tmp14 = (tmp13 == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1160)
				if ((tmp14)){
					HX_STACK_LINE(1162)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1162)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1162)
					int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1162)
					Float tmp18 = (Float(tmp17) / Float((int)100));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1162)
					frameWidth = tmp18;
					HX_STACK_LINE(1163)
					int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1163)
					frameHeight = tmp19;
					HX_STACK_LINE(1165)
					Float tmp20 = this->_halfWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1165)
					Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1165)
					Float tmp22 = (frameWidth * ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1165)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1165)
					this->_filledBarFrames->push(tmp23);
				}
				else{
					HX_STACK_LINE(1167)
					int tmp15 = this->fillDirection;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1167)
					bool tmp16 = (tmp15 == (int)3);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1167)
					if ((tmp16)){
						HX_STACK_LINE(1169)
						int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1169)
						frameWidth = tmp17;
						HX_STACK_LINE(1170)
						int tmp18 = this->barHeight;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1170)
						int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1170)
						int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1170)
						Float tmp21 = (Float(tmp20) / Float((int)100));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1170)
						frameHeight = tmp21;
						HX_STACK_LINE(1172)
						Float tmp22 = this->_halfHeight;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1172)
						Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1172)
						Float tmp24 = (frameHeight * ((Float)0.5));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1172)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1172)
						this->_filledBarFrames->push(tmp25);
					}
					else{
						HX_STACK_LINE(1174)
						int tmp17 = this->fillDirection;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1174)
						bool tmp18 = (tmp17 == (int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1174)
						if ((tmp18)){
							HX_STACK_LINE(1176)
							int tmp19 = this->barWidth;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1176)
							frameWidth = tmp19;
							HX_STACK_LINE(1177)
							int tmp20 = this->barHeight;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1177)
							int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1177)
							int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1177)
							Float tmp23 = (Float(tmp22) / Float((int)100));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1177)
							frameHeight = tmp23;
							HX_STACK_LINE(1178)
							int tmp24 = this->barHeight;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1178)
							Float tmp25 = frameHeight;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1178)
							Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1178)
							hx::AddEq(frameY,tmp26);
							HX_STACK_LINE(1180)
							Float tmp27 = this->_halfHeight;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1180)
							Float tmp28 = (((Float)0.5) * frameHeight);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1180)
							Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1180)
							this->_filledBarFrames->push(tmp29);
						}
						else{
							HX_STACK_LINE(1182)
							int tmp19 = this->fillDirection;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1182)
							bool tmp20 = (tmp19 == (int)2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1182)
							if ((tmp20)){
								HX_STACK_LINE(1184)
								int tmp21 = this->barWidth;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1184)
								int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1184)
								int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1184)
								Float tmp24 = (Float(tmp23) / Float((int)100));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1184)
								frameWidth = tmp24;
								HX_STACK_LINE(1185)
								int tmp25 = this->barHeight;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1185)
								frameHeight = tmp25;
								HX_STACK_LINE(1186)
								int tmp26 = this->barWidth;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1186)
								Float tmp27 = frameWidth;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1186)
								Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1186)
								hx::AddEq(frameX,tmp28);
								HX_STACK_LINE(1188)
								Float tmp29 = this->_halfWidth;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1188)
								Float tmp30 = (((Float)0.5) * frameWidth);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1188)
								Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1188)
								this->_filledBarFrames->push(tmp31);
							}
							else{
								HX_STACK_LINE(1190)
								int tmp21 = this->fillDirection;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1190)
								bool tmp22 = (tmp21 == (int)5);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1190)
								if ((tmp22)){
									HX_STACK_LINE(1192)
									int tmp23 = this->barWidth;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1192)
									int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1192)
									int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1192)
									Float tmp26 = (Float(tmp25) / Float((int)100));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1192)
									frameWidth = tmp26;
									HX_STACK_LINE(1193)
									int tmp27 = this->barHeight;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1193)
									frameHeight = tmp27;
									HX_STACK_LINE(1194)
									int tmp28 = this->barWidth;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1194)
									Float tmp29 = frameWidth;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1194)
									Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1194)
									Float tmp31 = (((Float)0.5) * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1194)
									hx::AddEq(frameX,tmp31);
									HX_STACK_LINE(1196)
									this->_filledBarFrames->push((int)0);
								}
								else{
									HX_STACK_LINE(1198)
									int tmp23 = this->fillDirection;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1198)
									bool tmp24 = (tmp23 == (int)6);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1198)
									if ((tmp24)){
										HX_STACK_LINE(1200)
										int tmp25 = this->barWidth;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1200)
										int tmp26 = ((int)100 - i);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1200)
										int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1200)
										Float tmp28 = (Float(tmp27) / Float((int)100));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1200)
										frameWidth = tmp28;
										HX_STACK_LINE(1201)
										int tmp29 = this->barHeight;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1201)
										frameHeight = tmp29;
										HX_STACK_LINE(1202)
										int tmp30 = this->barWidth;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1202)
										Float tmp31 = frameWidth;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1202)
										Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1202)
										Float tmp33 = (((Float)0.5) * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1202)
										hx::AddEq(frameX,tmp33);
										HX_STACK_LINE(1204)
										this->_filledBarFrames->push((int)0);
									}
									else{
										HX_STACK_LINE(1206)
										int tmp25 = this->fillDirection;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1206)
										bool tmp26 = (tmp25 == (int)7);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1206)
										if ((tmp26)){
											HX_STACK_LINE(1208)
											int tmp27 = this->barWidth;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1208)
											frameWidth = tmp27;
											HX_STACK_LINE(1209)
											int tmp28 = this->barHeight;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1209)
											int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1209)
											int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1209)
											Float tmp31 = (Float(tmp30) / Float((int)100));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1209)
											frameHeight = tmp31;
											HX_STACK_LINE(1210)
											int tmp32 = this->barHeight;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1210)
											Float tmp33 = frameHeight;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1210)
											Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1210)
											Float tmp35 = (((Float)0.5) * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1210)
											hx::AddEq(frameY,tmp35);
											HX_STACK_LINE(1212)
											this->_filledBarFrames->push((int)0);
										}
										else{
											HX_STACK_LINE(1214)
											int tmp27 = this->fillDirection;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1214)
											bool tmp28 = (tmp27 == (int)8);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1214)
											if ((tmp28)){
												HX_STACK_LINE(1216)
												int tmp29 = this->barWidth;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(1216)
												frameWidth = tmp29;
												HX_STACK_LINE(1217)
												int tmp30 = this->barHeight;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(1217)
												int tmp31 = ((int)100 - i);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1217)
												int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1217)
												Float tmp33 = (Float(tmp32) / Float((int)100));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1217)
												frameHeight = tmp33;
												HX_STACK_LINE(1218)
												int tmp34 = this->barHeight;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1218)
												Float tmp35 = frameHeight;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1218)
												Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1218)
												Float tmp37 = (((Float)0.5) * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1218)
												hx::AddEq(frameY,tmp37);
												HX_STACK_LINE(1220)
												this->_filledBarFrames->push((int)0);
											}
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1223)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1223)
				{
					HX_STACK_LINE(1223)
					::flixel::util::loaders::CachedGraphics tmp16 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1223)
					::flixel::_system::layer::TileSheetData tmp17 = tmp16->get_tilesheet();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1223)
					::flixel::_system::layer::TileSheetData _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Rectangle tmp18 = ::openfl::_legacy::geom::Rectangle_obj::__new(frameX,frameY,frameWidth,frameHeight);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Rectangle tileRect = tmp18;		HX_STACK_VAR(tileRect,"tileRect");
					HX_STACK_LINE(1223)
					Float tmp19 = (((Float)0.5) * frameWidth);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1223)
					Float tmp20 = (((Float)0.5) * frameHeight);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Point tmp21 = ::openfl::_legacy::geom::Point_obj::__new(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Point point = tmp21;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Rectangle tmp22 = tileRect;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1223)
					::openfl::_legacy::geom::Point tmp23 = point;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1223)
					tmp15 = _this->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp22,tmp23);
				}
				HX_STACK_LINE(1223)
				this->_filledBarFrames->push(tmp15);
			}
		}
	}
return null();
}


Void FlxBar_obj::setCachedGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setCachedGraphics",0xa35f0f4a,"flixel.ui.FlxBar.setCachedGraphics","flixel/ui/FlxBar.hx",1230,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1231)
		::flixel::util::loaders::CachedGraphics tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1231)
		this->set_cachedGraphics(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setCachedGraphics,(void))

Void FlxBar_obj::setCachedFrontGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setCachedFrontGraphics",0x44ca1bb5,"flixel.ui.FlxBar.setCachedFrontGraphics","flixel/ui/FlxBar.hx",1234,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1235)
		::flixel::util::loaders::CachedGraphics tmp = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1235)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1235)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1235)
		if ((tmp1)){
			HX_STACK_LINE(1235)
			::flixel::util::loaders::CachedGraphics tmp3 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1235)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1235)
			::flixel::util::loaders::CachedGraphics tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1235)
			tmp2 = (tmp4 != tmp5);
		}
		else{
			HX_STACK_LINE(1235)
			tmp2 = false;
		}
		HX_STACK_LINE(1235)
		if ((tmp2)){
			HX_STACK_LINE(1237)
			::flixel::util::loaders::CachedGraphics tmp3 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1237)
			::flixel::util::loaders::CachedGraphics _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1237)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1237)
			int tmp4 = (_g1 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1237)
			_g->set_useCount(tmp4);
			HX_STACK_LINE(1237)
			_g1;
		}
		HX_STACK_LINE(1240)
		::flixel::util::loaders::CachedGraphics tmp3 = this->_cachedFrontGraphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1240)
		::flixel::util::loaders::CachedGraphics tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1240)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1240)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1240)
		if ((tmp5)){
			HX_STACK_LINE(1240)
			tmp6 = (value != null());
		}
		else{
			HX_STACK_LINE(1240)
			tmp6 = false;
		}
		HX_STACK_LINE(1240)
		if ((tmp6)){
			HX_STACK_LINE(1242)
			::flixel::util::loaders::CachedGraphics _g = value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1242)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1242)
			int tmp7 = (_g1 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1242)
			_g->set_useCount(tmp7);
			HX_STACK_LINE(1242)
			_g1;
		}
		HX_STACK_LINE(1244)
		this->_cachedFrontGraphics = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,setCachedFrontGraphics,(void))

::String FlxBar_obj::toString( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",1249,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1251)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1251)
	{
		HX_STACK_LINE(1251)
		::flixel::util::FlxPool tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1251)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1251)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1251)
		_this->label = HX_HCSTRING("min","\x92","\x11","\x53","\x00");
		HX_STACK_LINE(1251)
		Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1251)
		_this->value = tmp3;
		HX_STACK_LINE(1251)
		tmp = _this;
	}
	HX_STACK_LINE(1252)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1252)
	{
		HX_STACK_LINE(1252)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1252)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1252)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1252)
		_this->label = HX_HCSTRING("max","\xa4","\x0a","\x53","\x00");
		HX_STACK_LINE(1252)
		Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1252)
		_this->value = tmp4;
		HX_STACK_LINE(1252)
		tmp1 = _this;
	}
	HX_STACK_LINE(1253)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1253)
	{
		HX_STACK_LINE(1253)
		::flixel::util::FlxPool tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1253)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1253)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1253)
		_this->label = HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4");
		HX_STACK_LINE(1253)
		Float tmp5 = this->range;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1253)
		_this->value = tmp5;
		HX_STACK_LINE(1253)
		tmp2 = _this;
	}
	HX_STACK_LINE(1254)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		::flixel::util::FlxPool tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1254)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1254)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1254)
		_this->label = HX_HCSTRING("%","\x25","\x00","\x00","\x00");
		HX_STACK_LINE(1254)
		Float tmp6 = this->pct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1254)
		_this->value = tmp6;
		HX_STACK_LINE(1254)
		tmp3 = _this;
	}
	HX_STACK_LINE(1255)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1255)
	{
		HX_STACK_LINE(1255)
		::flixel::util::FlxPool tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1255)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1255)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1255)
		_this->label = HX_HCSTRING("px/%","\x1e","\x1d","\x63","\x4a");
		HX_STACK_LINE(1255)
		Float tmp7 = this->pxPerPercent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1255)
		_this->value = tmp7;
		HX_STACK_LINE(1255)
		tmp4 = _this;
	}
	HX_STACK_LINE(1256)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1256)
	{
		HX_STACK_LINE(1256)
		::flixel::util::FlxPool tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1256)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1256)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1256)
		_this->label = HX_HCSTRING("value","\x71","\x7f","\xb8","\x31");
		HX_STACK_LINE(1256)
		Float tmp8 = this->value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1256)
		_this->value = tmp8;
		HX_STACK_LINE(1256)
		tmp5 = _this;
	}
	HX_STACK_LINE(1250)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1250)
	return tmp6;
}


int FlxBar_obj::FILL_LEFT_TO_RIGHT;

int FlxBar_obj::FILL_RIGHT_TO_LEFT;

int FlxBar_obj::FILL_TOP_TO_BOTTOM;

int FlxBar_obj::FILL_BOTTOM_TO_TOP;

int FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT;

int FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN;

int FlxBar_obj::FILL_VERTICAL_INSIDE_OUT;

int FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN;

::String FlxBar_obj::FRAMES_POSITION_HORIZONTAL;

::String FlxBar_obj::FRAMES_POSITION_VERTICAL;

int FlxBar_obj::BAR_FILLED;

int FlxBar_obj::BAR_GRADIENT;

int FlxBar_obj::BAR_IMAGE;


FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(barType,"barType");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(emptyBar,"emptyBar");
	HX_MARK_MEMBER_NAME(emptyBarRect,"emptyBarRect");
	HX_MARK_MEMBER_NAME(emptyBarPoint,"emptyBarPoint");
	HX_MARK_MEMBER_NAME(emptyKill,"emptyKill");
	HX_MARK_MEMBER_NAME(zeroOffset,"zeroOffset");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(filledBar,"filledBar");
	HX_MARK_MEMBER_NAME(filledBarRect,"filledBarRect");
	HX_MARK_MEMBER_NAME(filledBarPoint,"filledBarPoint");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(fillHorizontal,"fillHorizontal");
	HX_MARK_MEMBER_NAME(_emptyBarFrameID,"_emptyBarFrameID");
	HX_MARK_MEMBER_NAME(_filledBarFrames,"_filledBarFrames");
	HX_MARK_MEMBER_NAME(_framesPosition,"_framesPosition");
	HX_MARK_MEMBER_NAME(_cachedFrontGraphics,"_cachedFrontGraphics");
	HX_MARK_MEMBER_NAME(_frontRegion,"_frontRegion");
	HX_MARK_MEMBER_NAME(stats,"stats");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(barType,"barType");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(emptyBar,"emptyBar");
	HX_VISIT_MEMBER_NAME(emptyBarRect,"emptyBarRect");
	HX_VISIT_MEMBER_NAME(emptyBarPoint,"emptyBarPoint");
	HX_VISIT_MEMBER_NAME(emptyKill,"emptyKill");
	HX_VISIT_MEMBER_NAME(zeroOffset,"zeroOffset");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(filledBar,"filledBar");
	HX_VISIT_MEMBER_NAME(filledBarRect,"filledBarRect");
	HX_VISIT_MEMBER_NAME(filledBarPoint,"filledBarPoint");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(fillHorizontal,"fillHorizontal");
	HX_VISIT_MEMBER_NAME(_emptyBarFrameID,"_emptyBarFrameID");
	HX_VISIT_MEMBER_NAME(_filledBarFrames,"_filledBarFrames");
	HX_VISIT_MEMBER_NAME(_framesPosition,"_framesPosition");
	HX_VISIT_MEMBER_NAME(_cachedFrontGraphics,"_cachedFrontGraphics");
	HX_VISIT_MEMBER_NAME(_frontRegion,"_frontRegion");
	HX_VISIT_MEMBER_NAME(stats,"stats");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"stats") ) { return inCallProp == hx::paccAlways ? get_stats() : stats; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { return barType; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		if (HX_FIELD_EQ(inName,"emptyBar") ) { return emptyBar; }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"emptyKill") ) { return emptyKill; }
		if (HX_FIELD_EQ(inName,"filledBar") ) { return filledBar; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stats") ) { return get_stats_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return updateBar_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zeroOffset") ) { return zeroOffset; }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackParent") ) { return trackParent_dyn(); }
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { if (inCallProp == hx::paccAlways) return get_killOnEmpty(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return pxPerPercent; }
		if (HX_FIELD_EQ(inName,"emptyBarRect") ) { return emptyBarRect; }
		if (HX_FIELD_EQ(inName,"_frontRegion") ) { return _frontRegion; }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return setCallbacks_dyn(); }
		if (HX_FIELD_EQ(inName,"currentValue") ) { if (inCallProp == hx::paccAlways) return get_currentValue(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return fixedPosition; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return emptyCallback; }
		if (HX_FIELD_EQ(inName,"emptyBarPoint") ) { return emptyBarPoint; }
		if (HX_FIELD_EQ(inName,"filledBarRect") ) { return filledBarRect; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return fillDirection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return parentVariable; }
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return filledCallback; }
		if (HX_FIELD_EQ(inName,"filledBarPoint") ) { return filledBarPoint; }
		if (HX_FIELD_EQ(inName,"fillHorizontal") ) { return fillHorizontal; }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return createImageBar_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_framesPosition") ) { return _framesPosition; }
		if (HX_FIELD_EQ(inName,"set_killOnEmpty") ) { return set_killOnEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_killOnEmpty") ) { return get_killOnEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return createFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_emptyBarFrameID") ) { return _emptyBarFrameID; }
		if (HX_FIELD_EQ(inName,"_filledBarFrames") ) { return _filledBarFrames; }
		if (HX_FIELD_EQ(inName,"setFillDirection") ) { return setFillDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentValue") ) { return set_currentValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentValue") ) { return get_currentValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return createGradientBar_dyn(); }
		if (HX_FIELD_EQ(inName,"setCachedGraphics") ) { return setCachedGraphics_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return stopTrackingParent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFrontGraphics") ) { return _cachedFrontGraphics; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return updateValueFromParent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setCachedFrontGraphics") ) { return setCachedFrontGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { barType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBar") ) { emptyBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyKill") ) { emptyKill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBar") ) { filledBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zeroOffset") ) { zeroOffset=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { if (inCallProp == hx::paccAlways) return set_killOnEmpty(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBarRect") ) { emptyBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontRegion") ) { _frontRegion=inValue.Cast< ::flixel::_system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentValue") ) { if (inCallProp == hx::paccAlways) return set_currentValue(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyBarPoint") ) { emptyBarPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBarRect") ) { filledBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { fillDirection=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledBarPoint") ) { filledBarPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillHorizontal") ) { fillHorizontal=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_framesPosition") ) { _framesPosition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_emptyBarFrameID") ) { _emptyBarFrameID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarFrames") ) { _filledBarFrames=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedFrontGraphics") ) { _cachedFrontGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("barType","\x2d","\xb6","\x65","\x8f"));
	outFields->push(HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"));
	outFields->push(HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"));
	outFields->push(HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"));
	outFields->push(HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"));
	outFields->push(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"));
	outFields->push(HX_HCSTRING("emptyBar","\x46","\x85","\x2b","\x28"));
	outFields->push(HX_HCSTRING("emptyBarRect","\x8a","\x19","\x5f","\xe9"));
	outFields->push(HX_HCSTRING("emptyBarPoint","\x2a","\xc1","\xaa","\x29"));
	outFields->push(HX_HCSTRING("emptyKill","\xcb","\x10","\xe2","\x03"));
	outFields->push(HX_HCSTRING("zeroOffset","\xdb","\xe8","\xd4","\xf1"));
	outFields->push(HX_HCSTRING("filledBar","\x51","\x0d","\x3e","\xa5"));
	outFields->push(HX_HCSTRING("filledBarRect","\x15","\x03","\xbe","\x2b"));
	outFields->push(HX_HCSTRING("filledBarPoint","\x3f","\x31","\x58","\xfa"));
	outFields->push(HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"));
	outFields->push(HX_HCSTRING("fillHorizontal","\x47","\x31","\x0f","\x54"));
	outFields->push(HX_HCSTRING("_emptyBarFrameID","\x23","\x97","\xee","\xdc"));
	outFields->push(HX_HCSTRING("_filledBarFrames","\x58","\xc6","\x09","\xb3"));
	outFields->push(HX_HCSTRING("_framesPosition","\x0e","\x6b","\xe3","\xf6"));
	outFields->push(HX_HCSTRING("_cachedFrontGraphics","\x53","\x60","\xe9","\xa9"));
	outFields->push(HX_HCSTRING("_frontRegion","\x7e","\x60","\x06","\x77"));
	outFields->push(HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae"));
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("currentValue","\x78","\x64","\xc4","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxBar_obj,barType),HX_HCSTRING("barType","\x2d","\xb6","\x65","\x8f")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxBar_obj,positionOffset),HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_HCSTRING("pct","\x21","\x53","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,emptyBar),HX_HCSTRING("emptyBar","\x46","\x85","\x2b","\x28")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,emptyBarRect),HX_HCSTRING("emptyBarRect","\x8a","\x19","\x5f","\xe9")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,emptyBarPoint),HX_HCSTRING("emptyBarPoint","\x2a","\xc1","\xaa","\x29")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,emptyKill),HX_HCSTRING("emptyKill","\xcb","\x10","\xe2","\x03")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,zeroOffset),HX_HCSTRING("zeroOffset","\xdb","\xe8","\xd4","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,filledCallback),HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,filledBar),HX_HCSTRING("filledBar","\x51","\x0d","\x3e","\xa5")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,filledBarRect),HX_HCSTRING("filledBarRect","\x15","\x03","\xbe","\x2b")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,filledBarPoint),HX_HCSTRING("filledBarPoint","\x3f","\x31","\x58","\xfa")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,fillDirection),HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,fillHorizontal),HX_HCSTRING("fillHorizontal","\x47","\x31","\x0f","\x54")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,_emptyBarFrameID),HX_HCSTRING("_emptyBarFrameID","\x23","\x97","\xee","\xdc")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBar_obj,_filledBarFrames),HX_HCSTRING("_filledBarFrames","\x58","\xc6","\x09","\xb3")},
	{hx::fsString,(int)offsetof(FlxBar_obj,_framesPosition),HX_HCSTRING("_framesPosition","\x0e","\x6b","\xe3","\xf6")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxBar_obj,_cachedFrontGraphics),HX_HCSTRING("_cachedFrontGraphics","\x53","\x60","\xe9","\xa9")},
	{hx::fsObject /*::flixel::_system::layer::Region*/ ,(int)offsetof(FlxBar_obj,_frontRegion),HX_HCSTRING("_frontRegion","\x7e","\x60","\x06","\x77")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxBar_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxBar_obj::FILL_LEFT_TO_RIGHT,HX_HCSTRING("FILL_LEFT_TO_RIGHT","\x34","\xd7","\xa6","\x01")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_RIGHT_TO_LEFT,HX_HCSTRING("FILL_RIGHT_TO_LEFT","\xcc","\xe3","\xb8","\x75")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_TOP_TO_BOTTOM,HX_HCSTRING("FILL_TOP_TO_BOTTOM","\xe9","\x18","\xc6","\x2c")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_BOTTOM_TO_TOP,HX_HCSTRING("FILL_BOTTOM_TO_TOP","\x89","\xb2","\x19","\xae")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT,HX_HCSTRING("FILL_HORIZONTAL_INSIDE_OUT","\x2a","\x84","\x2d","\x8e")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN,HX_HCSTRING("FILL_HORIZONTAL_OUTSIDE_IN","\xde","\x0e","\xce","\x08")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_VERTICAL_INSIDE_OUT,HX_HCSTRING("FILL_VERTICAL_INSIDE_OUT","\xd8","\xc4","\xe6","\xc9")},
	{hx::fsInt,(void *) &FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN,HX_HCSTRING("FILL_VERTICAL_OUTSIDE_IN","\x8c","\x4f","\x87","\x44")},
	{hx::fsString,(void *) &FlxBar_obj::FRAMES_POSITION_HORIZONTAL,HX_HCSTRING("FRAMES_POSITION_HORIZONTAL","\xa1","\xd5","\xb9","\x86")},
	{hx::fsString,(void *) &FlxBar_obj::FRAMES_POSITION_VERTICAL,HX_HCSTRING("FRAMES_POSITION_VERTICAL","\xf3","\x17","\x20","\xbf")},
	{hx::fsInt,(void *) &FlxBar_obj::BAR_FILLED,HX_HCSTRING("BAR_FILLED","\xee","\xe9","\xcf","\x1a")},
	{hx::fsInt,(void *) &FlxBar_obj::BAR_GRADIENT,HX_HCSTRING("BAR_GRADIENT","\x3c","\xa5","\x08","\x0f")},
	{hx::fsInt,(void *) &FlxBar_obj::BAR_IMAGE,HX_HCSTRING("BAR_IMAGE","\x6f","\xb4","\x2a","\x71")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("barType","\x2d","\xb6","\x65","\x8f"),
	HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"),
	HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"),
	HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"),
	HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"),
	HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"),
	HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13"),
	HX_HCSTRING("emptyBar","\x46","\x85","\x2b","\x28"),
	HX_HCSTRING("emptyBarRect","\x8a","\x19","\x5f","\xe9"),
	HX_HCSTRING("emptyBarPoint","\x2a","\xc1","\xaa","\x29"),
	HX_HCSTRING("emptyKill","\xcb","\x10","\xe2","\x03"),
	HX_HCSTRING("zeroOffset","\xdb","\xe8","\xd4","\xf1"),
	HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4"),
	HX_HCSTRING("filledBar","\x51","\x0d","\x3e","\xa5"),
	HX_HCSTRING("filledBarRect","\x15","\x03","\xbe","\x2b"),
	HX_HCSTRING("filledBarPoint","\x3f","\x31","\x58","\xfa"),
	HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"),
	HX_HCSTRING("fillHorizontal","\x47","\x31","\x0f","\x54"),
	HX_HCSTRING("_emptyBarFrameID","\x23","\x97","\xee","\xdc"),
	HX_HCSTRING("_filledBarFrames","\x58","\xc6","\x09","\xb3"),
	HX_HCSTRING("_framesPosition","\x0e","\x6b","\xe3","\xf6"),
	HX_HCSTRING("_cachedFrontGraphics","\x53","\x60","\xe9","\xa9"),
	HX_HCSTRING("_frontRegion","\x7e","\x60","\x06","\x77"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("trackParent","\x15","\x02","\x78","\x95"),
	HX_HCSTRING("setParent","\x6c","\x7a","\x25","\x4d"),
	HX_HCSTRING("stopTrackingParent","\x63","\xe7","\x80","\x2a"),
	HX_HCSTRING("setCallbacks","\x0c","\xb3","\x0f","\xcb"),
	HX_HCSTRING("set_killOnEmpty","\x93","\xa5","\xb8","\x6a"),
	HX_HCSTRING("get_killOnEmpty","\x87","\x28","\xed","\x6e"),
	HX_HCSTRING("setRange","\xbb","\x0e","\x54","\xf2"),
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("get_stats","\x76","\xd2","\xb4","\xc7"),
	HX_HCSTRING("createFilledBar","\xb5","\xc6","\x32","\x46"),
	HX_HCSTRING("createGradientBar","\x27","\xe0","\xc0","\x25"),
	HX_HCSTRING("createImageBar","\x54","\x94","\x67","\xd6"),
	HX_HCSTRING("setFillDirection","\x3a","\xa2","\xeb","\xb1"),
	HX_HCSTRING("updateValueFromParent","\xfc","\x58","\xec","\xa5"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("updateBar","\x4a","\x8f","\xd7","\x82"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("set_currentValue","\x75","\x3e","\xa5","\xd3"),
	HX_HCSTRING("get_currentValue","\x01","\x51","\x63","\x7d"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("isSimpleRender","\x32","\xf4","\x2a","\x47"),
	HX_HCSTRING("updateFrameData","\xae","\xe5","\x6e","\x7f"),
	HX_HCSTRING("setCachedGraphics","\x0f","\x4e","\x03","\x44"),
	HX_HCSTRING("setCachedFrontGraphics","\xd0","\x32","\x53","\xb6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_LEFT_TO_RIGHT,"FILL_LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_RIGHT_TO_LEFT,"FILL_RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_TOP_TO_BOTTOM,"FILL_TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_BOTTOM_TO_TOP,"FILL_BOTTOM_TO_TOP");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT,"FILL_HORIZONTAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN,"FILL_HORIZONTAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_INSIDE_OUT,"FILL_VERTICAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN,"FILL_VERTICAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_HORIZONTAL,"FRAMES_POSITION_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_VERTICAL,"FRAMES_POSITION_VERTICAL");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_FILLED,"BAR_FILLED");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_GRADIENT,"BAR_GRADIENT");
	HX_MARK_MEMBER_NAME(FlxBar_obj::BAR_IMAGE,"BAR_IMAGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_LEFT_TO_RIGHT,"FILL_LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_RIGHT_TO_LEFT,"FILL_RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_TOP_TO_BOTTOM,"FILL_TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_BOTTOM_TO_TOP,"FILL_BOTTOM_TO_TOP");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_INSIDE_OUT,"FILL_HORIZONTAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_HORIZONTAL_OUTSIDE_IN,"FILL_HORIZONTAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_INSIDE_OUT,"FILL_VERTICAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FILL_VERTICAL_OUTSIDE_IN,"FILL_VERTICAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_HORIZONTAL,"FRAMES_POSITION_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::FRAMES_POSITION_VERTICAL,"FRAMES_POSITION_VERTICAL");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_FILLED,"BAR_FILLED");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_GRADIENT,"BAR_GRADIENT");
	HX_VISIT_MEMBER_NAME(FlxBar_obj::BAR_IMAGE,"BAR_IMAGE");
};

#endif

hx::Class FlxBar_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FILL_LEFT_TO_RIGHT","\x34","\xd7","\xa6","\x01"),
	HX_HCSTRING("FILL_RIGHT_TO_LEFT","\xcc","\xe3","\xb8","\x75"),
	HX_HCSTRING("FILL_TOP_TO_BOTTOM","\xe9","\x18","\xc6","\x2c"),
	HX_HCSTRING("FILL_BOTTOM_TO_TOP","\x89","\xb2","\x19","\xae"),
	HX_HCSTRING("FILL_HORIZONTAL_INSIDE_OUT","\x2a","\x84","\x2d","\x8e"),
	HX_HCSTRING("FILL_HORIZONTAL_OUTSIDE_IN","\xde","\x0e","\xce","\x08"),
	HX_HCSTRING("FILL_VERTICAL_INSIDE_OUT","\xd8","\xc4","\xe6","\xc9"),
	HX_HCSTRING("FILL_VERTICAL_OUTSIDE_IN","\x8c","\x4f","\x87","\x44"),
	HX_HCSTRING("FRAMES_POSITION_HORIZONTAL","\xa1","\xd5","\xb9","\x86"),
	HX_HCSTRING("FRAMES_POSITION_VERTICAL","\xf3","\x17","\x20","\xbf"),
	HX_HCSTRING("BAR_FILLED","\xee","\xe9","\xcf","\x1a"),
	HX_HCSTRING("BAR_GRADIENT","\x3c","\xa5","\x08","\x0f"),
	HX_HCSTRING("BAR_IMAGE","\x6f","\xb4","\x2a","\x71"),
	::String(null()) };

void FlxBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxBar","\xe9","\xe6","\x0d","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxBar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBar_obj >;
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

void FlxBar_obj::__boot()
{
	FILL_LEFT_TO_RIGHT= (int)1;
	FILL_RIGHT_TO_LEFT= (int)2;
	FILL_TOP_TO_BOTTOM= (int)3;
	FILL_BOTTOM_TO_TOP= (int)4;
	FILL_HORIZONTAL_INSIDE_OUT= (int)5;
	FILL_HORIZONTAL_OUTSIDE_IN= (int)6;
	FILL_VERTICAL_INSIDE_OUT= (int)7;
	FILL_VERTICAL_OUTSIDE_IN= (int)8;
	FRAMES_POSITION_HORIZONTAL= HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
	FRAMES_POSITION_VERTICAL= HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
	BAR_FILLED= (int)1;
	BAR_GRADIENT= (int)2;
	BAR_IMAGE= (int)3;
}

} // end namespace flixel
} // end namespace ui
