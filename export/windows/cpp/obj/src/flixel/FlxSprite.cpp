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
#ifndef INCLUDED_flixel__FlxSprite_GraphicDefault
#include <flixel/_FlxSprite/GraphicDefault.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",35,0x0384bffa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",183,0x0384bffa)
			{
				HX_STACK_LINE(183)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(183)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(183)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(183)
	this->_facingFlip = _Function_1_1::Block();
	HX_STACK_LINE(179)
	this->_angleChanged = false;
	HX_STACK_LINE(178)
	this->_cosAngle = ((Float)1);
	HX_STACK_LINE(177)
	this->_sinAngle = ((Float)0);
	HX_STACK_LINE(148)
	this->_blendInt = (int)0;
	HX_STACK_LINE(147)
	this->_facingVerticalMult = (int)1;
	HX_STACK_LINE(146)
	this->_facingHorizontalMult = (int)1;
	HX_STACK_LINE(145)
	this->_blue = ((Float)1.0);
	HX_STACK_LINE(144)
	this->_green = ((Float)1.0);
	HX_STACK_LINE(143)
	this->_red = ((Float)1.0);
	HX_STACK_LINE(140)
	this->useColorTransform = false;
	HX_STACK_LINE(133)
	this->color = (int)16777215;
	HX_STACK_LINE(107)
	this->flipY = false;
	HX_STACK_LINE(103)
	this->flipX = false;
	HX_STACK_LINE(99)
	this->facing = (int)16;
	HX_STACK_LINE(94)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(90)
	this->bakedRotationAngle = ((Float)0);
	HX_STACK_LINE(79)
	this->frames = (int)0;
	HX_STACK_LINE(75)
	this->frameHeight = (int)0;
	HX_STACK_LINE(71)
	this->frameWidth = (int)0;
	HX_STACK_LINE(56)
	this->isColored = false;
	HX_STACK_LINE(53)
	this->dirty = true;
	HX_STACK_LINE(48)
	this->antialiasing = false;
	HX_STACK_LINE(195)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(197)
	bool tmp2 = (SimpleGraphic != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	if ((tmp2)){
		HX_STACK_LINE(199)
		Dynamic tmp3 = SimpleGraphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		this->loadGraphic(tmp3,null(),null(),null(),null(),null());
	}
}
;
	return null();
}

//FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > _result_ = new FlxSprite_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic);
	return _result_;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > _result_ = new FlxSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxSprite_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",204,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->super::initVars();
		HX_STACK_LINE(207)
		::flixel::animation::FlxAnimationController tmp = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		this->animation = tmp;
		HX_STACK_LINE(209)
		::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		this->_flashPoint = tmp1;
		HX_STACK_LINE(210)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		this->_flashRect = tmp2;
		HX_STACK_LINE(211)
		::openfl::_legacy::geom::Rectangle tmp3 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		this->_flashRect2 = tmp3;
		HX_STACK_LINE(212)
		::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		this->_flashPointZero = tmp4;
		HX_STACK_LINE(213)
		::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(213)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(213)
			::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(213)
			Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(213)
			::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(213)
			point->_inPool = false;
			HX_STACK_LINE(213)
			tmp5 = point;
		}
		HX_STACK_LINE(213)
		this->offset = tmp5;
		HX_STACK_LINE(214)
		::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(214)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(214)
			::flixel::util::FlxPool tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			::flixel::util::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(214)
			point->_inPool = false;
			HX_STACK_LINE(214)
			tmp6 = point;
		}
		HX_STACK_LINE(214)
		this->origin = tmp6;
		HX_STACK_LINE(215)
		::flixel::util::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::flixel::util::FlxPool tmp8 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			::flixel::util::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			::flixel::util::FlxPoint tmp10 = tmp9->set((int)1,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(215)
			point->_inPool = false;
			HX_STACK_LINE(215)
			tmp7 = point;
		}
		HX_STACK_LINE(215)
		this->scale = tmp7;
		HX_STACK_LINE(216)
		::openfl::_legacy::geom::Matrix tmp8 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		this->_matrix = tmp8;
	}
return null();
}


Void FlxSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",224,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		this->super::destroy();
		HX_STACK_LINE(227)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::flixel::animation::FlxAnimationController tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		this->animation = tmp1;
		HX_STACK_LINE(229)
		::flixel::util::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		this->offset = tmp3;
		HX_STACK_LINE(230)
		::flixel::util::FlxPoint tmp4 = this->origin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		this->origin = tmp5;
		HX_STACK_LINE(231)
		::flixel::util::FlxPoint tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		this->scale = tmp7;
		HX_STACK_LINE(233)
		::openfl::_legacy::display::BitmapData tmp8 = this->framePixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(233)
		::openfl::_legacy::display::BitmapData tmp9 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		this->framePixels = tmp9;
		HX_STACK_LINE(235)
		this->_flashPoint = null();
		HX_STACK_LINE(236)
		this->_flashRect = null();
		HX_STACK_LINE(237)
		this->_flashRect2 = null();
		HX_STACK_LINE(238)
		this->_flashPointZero = null();
		HX_STACK_LINE(239)
		this->_matrix = null();
		HX_STACK_LINE(240)
		this->colorTransform = null();
		HX_STACK_LINE(241)
		this->set_blend(null());
		HX_STACK_LINE(242)
		this->set_frame(null());
		HX_STACK_LINE(244)
		this->framesData = null();
		HX_STACK_LINE(245)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(246)
		this->region = null();
	}
return null();
}


::flixel::FlxSprite FlxSprite_obj::clone( ::flixel::FlxSprite NewSprite){
	HX_STACK_FRAME("flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",250,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSprite,"NewSprite")
	HX_STACK_LINE(251)
	bool tmp = (NewSprite == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	if ((tmp)){
		HX_STACK_LINE(253)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		NewSprite = tmp1;
	}
	HX_STACK_LINE(256)
	::flixel::FlxSprite tmp1 = NewSprite->loadGraphicFromSprite(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,clone,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",267,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(268)
	bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	if ((tmp1)){
		HX_STACK_LINE(270)
		::hx::Class tmp2 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		::String tmp4 = (HX_HCSTRING("Warning, trying to clone ","\xff","\x3a","\x4a","\xb3") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		::String tmp5 = (tmp4 + HX_HCSTRING(" object that doesn't exist.","\x8d","\x2f","\x3c","\xb9"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		Dynamic Data = tmp5;		HX_STACK_VAR(Data,"Data");
		HX_STACK_LINE(270)
		Dynamic();
	}
	HX_STACK_LINE(273)
	::flixel::_system::layer::Region tmp2 = Sprite->region->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	this->region = tmp2;
	HX_STACK_LINE(274)
	this->bakedRotationAngle = Sprite->bakedRotationAngle;
	HX_STACK_LINE(275)
	::flixel::util::loaders::CachedGraphics tmp3 = Sprite->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	this->set_cachedGraphics(tmp3);
	HX_STACK_LINE(277)
	int tmp4 = this->frameWidth = Sprite->frameWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(277)
	this->set_width(tmp4);
	HX_STACK_LINE(278)
	int tmp5 = this->frameHeight = Sprite->frameHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(278)
	this->set_height(tmp5);
	HX_STACK_LINE(279)
	Float tmp6 = this->bakedRotationAngle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(279)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(279)
	if ((tmp7)){
		HX_STACK_LINE(281)
		Float tmp8 = Sprite->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(281)
		this->set_width(tmp8);
		HX_STACK_LINE(282)
		Float tmp9 = Sprite->get_height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(282)
		this->set_height(tmp9);
		HX_STACK_LINE(283)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(286)
	this->updateFrameData();
	HX_STACK_LINE(287)
	this->resetHelpers();
	HX_STACK_LINE(288)
	this->antialiasing = Sprite->antialiasing;
	HX_STACK_LINE(289)
	::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(289)
	::flixel::animation::FlxAnimationController tmp9 = Sprite->animation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(289)
	tmp8->copyFrom(tmp9);
	HX_STACK_LINE(290)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",305,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(306)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(307)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		bool tmp2 = Unique;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		::String tmp3 = Key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		::flixel::util::loaders::CachedGraphics tmp4 = tmp->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp1,(int)0,(int)0,(int)1,(int)1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		this->set_cachedGraphics(tmp4);
		HX_STACK_LINE(309)
		bool tmp5 = (Width == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		if ((tmp5)){
			HX_STACK_LINE(311)
			bool tmp6 = (Animated == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			if ((tmp6)){
				HX_STACK_LINE(311)
				::flixel::util::loaders::CachedGraphics tmp8 = this->cachedGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(311)
				tmp7 = tmp8->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(311)
				::flixel::util::loaders::CachedGraphics tmp8 = this->cachedGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(311)
				tmp7 = tmp8->bitmap->get_width();
			}
			HX_STACK_LINE(311)
			Width = tmp7;
			HX_STACK_LINE(312)
			int tmp8 = Width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(312)
			::flixel::util::loaders::CachedGraphics tmp9 = this->cachedGraphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(312)
			int tmp10 = tmp9->bitmap->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(312)
			bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(312)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(312)
			if ((tmp11)){
				HX_STACK_LINE(312)
				::flixel::util::loaders::CachedGraphics tmp13 = this->cachedGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(312)
				tmp12 = tmp13->bitmap->get_width();
			}
			else{
				HX_STACK_LINE(312)
				tmp12 = Width;
			}
			HX_STACK_LINE(312)
			Width = tmp12;
		}
		HX_STACK_LINE(315)
		bool tmp6 = (Height == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		if ((tmp6)){
			HX_STACK_LINE(317)
			bool tmp7 = (Animated == true);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(317)
			if ((tmp7)){
				HX_STACK_LINE(317)
				tmp8 = Width;
			}
			else{
				HX_STACK_LINE(317)
				::flixel::util::loaders::CachedGraphics tmp9 = this->cachedGraphics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(317)
				tmp8 = tmp9->bitmap->get_height();
			}
			HX_STACK_LINE(317)
			Height = tmp8;
			HX_STACK_LINE(318)
			int tmp9 = Height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(318)
			::flixel::util::loaders::CachedGraphics tmp10 = this->cachedGraphics;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(318)
			int tmp11 = tmp10->bitmap->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			bool tmp12 = (tmp9 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(318)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(318)
			if ((tmp12)){
				HX_STACK_LINE(318)
				::flixel::util::loaders::CachedGraphics tmp14 = this->cachedGraphics;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(318)
				tmp13 = tmp14->bitmap->get_height();
			}
			else{
				HX_STACK_LINE(318)
				tmp13 = Height;
			}
			HX_STACK_LINE(318)
			Height = tmp13;
		}
		HX_STACK_LINE(321)
		Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(321)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(321)
		if ((tmp9)){
			HX_STACK_LINE(323)
			::flixel::_system::layer::Region tmp10 = ::flixel::_system::layer::Region_obj::__new((int)0,(int)0,Width,Height,null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			this->region = tmp10;
			HX_STACK_LINE(324)
			::flixel::util::loaders::CachedGraphics tmp11 = this->cachedGraphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			int tmp12 = tmp11->bitmap->get_width();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			::flixel::_system::layer::Region tmp13 = this->region;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(324)
			tmp13->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp12;
			HX_STACK_LINE(325)
			::flixel::util::loaders::CachedGraphics tmp14 = this->cachedGraphics;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(325)
			int tmp15 = tmp14->bitmap->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(325)
			::flixel::_system::layer::Region tmp16 = this->region;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(325)
			tmp16->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp15;
		}
		else{
			HX_STACK_LINE(329)
			::flixel::util::loaders::TextureRegion tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(329)
			tmp10 = hx::TCast< ::flixel::util::loaders::TextureRegion >::cast(Graphic);
			HX_STACK_LINE(329)
			::flixel::_system::layer::Region tmp11 = tmp10->region->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			this->region = tmp11;
			HX_STACK_LINE(331)
			::flixel::_system::layer::Region tmp12 = this->region;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(331)
			int tmp13 = tmp12->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(331)
			bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(331)
			if ((tmp14)){
				HX_STACK_LINE(332)
				::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(332)
				Width = tmp15->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(334)
				::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				::flixel::_system::layer::Region tmp16 = this->region;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				tmp16->__FieldRef(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")) = tmp15->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
			}
			HX_STACK_LINE(336)
			::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(336)
			int tmp16 = tmp15->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(336)
			bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(336)
			if ((tmp17)){
				HX_STACK_LINE(337)
				::flixel::_system::layer::Region tmp18 = this->region;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				Height = tmp18->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(339)
				::flixel::_system::layer::Region tmp18 = this->region;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				::flixel::_system::layer::Region tmp19 = this->region;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				tmp19->__FieldRef(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")) = tmp18->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(342)
		int tmp10 = this->frameWidth = Width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(342)
		this->set_width(tmp10);
		HX_STACK_LINE(343)
		int tmp11 = this->frameHeight = Height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(343)
		this->set_height(tmp11);
		HX_STACK_LINE(345)
		::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(345)
		tmp12->destroyAnimations();
		HX_STACK_LINE(347)
		this->updateFrameData();
		HX_STACK_LINE(348)
		this->resetHelpers();
		HX_STACK_LINE(350)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",366,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(368)
		int tmp = Rotations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		int rows = tmp2;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(369)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		Dynamic tmp4 = Graphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(369)
		::String tmp5 = Key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(369)
		::flixel::util::loaders::CachedGraphics tmp6 = tmp3->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp4,(int)0,(int)0,(int)1,(int)1,false,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(369)
		::openfl::_legacy::display::BitmapData brush = tmp6->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(370)
		Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		bool isRegion = tmp8;		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(371)
		bool tmp9 = (isRegion == true);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(371)
		::flixel::util::loaders::TextureRegion tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(371)
		if ((tmp9)){
			HX_STACK_LINE(371)
			tmp10 = ((::flixel::util::loaders::TextureRegion)(Graphic));
		}
		else{
			HX_STACK_LINE(371)
			tmp10 = null();
		}
		HX_STACK_LINE(371)
		::flixel::util::loaders::TextureRegion spriteRegion = tmp10;		HX_STACK_VAR(spriteRegion,"spriteRegion");
		HX_STACK_LINE(372)
		bool tmp11 = (isRegion == true);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(372)
		::flixel::_system::layer::Region tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(372)
		if ((tmp11)){
			HX_STACK_LINE(372)
			tmp12 = spriteRegion->region;
		}
		else{
			HX_STACK_LINE(372)
			tmp12 = null();
		}
		HX_STACK_LINE(372)
		::flixel::_system::layer::Region tempRegion = tmp12;		HX_STACK_VAR(tempRegion,"tempRegion");
		HX_STACK_LINE(374)
		bool tmp13 = (Frame >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(374)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(374)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(374)
		if ((tmp14)){
			HX_STACK_LINE(374)
			tmp15 = isRegion;
		}
		else{
			HX_STACK_LINE(374)
			tmp15 = true;
		}
		HX_STACK_LINE(374)
		if ((tmp15)){
			HX_STACK_LINE(377)
			::openfl::_legacy::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(379)
			bool tmp16 = isRegion;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(379)
			if ((tmp16)){
				HX_STACK_LINE(381)
				::openfl::_legacy::display::BitmapData tmp17 = ::openfl::_legacy::display::BitmapData_obj::__new(tempRegion->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),tempRegion->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(381)
				brush = tmp17;
				HX_STACK_LINE(382)
				::openfl::_legacy::geom::Rectangle tmp18 = this->_flashRect;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(382)
				tmp18->x = tempRegion->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );
				HX_STACK_LINE(383)
				::openfl::_legacy::geom::Rectangle tmp19 = this->_flashRect;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(383)
				tmp19->y = tempRegion->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );
				HX_STACK_LINE(384)
				::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(384)
				tmp20->width = tempRegion->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
				HX_STACK_LINE(385)
				::openfl::_legacy::geom::Rectangle tmp21 = this->_flashRect;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(385)
				tmp21->height = tempRegion->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
				HX_STACK_LINE(386)
				::openfl::_legacy::display::BitmapData tmp22 = full;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(386)
				::openfl::_legacy::geom::Rectangle tmp23 = this->_flashRect;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(386)
				::openfl::_legacy::geom::Point tmp24 = this->_flashPointZero;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(386)
				brush->copyPixels(tmp22,tmp23,tmp24,null(),null(),null());
			}
			else{
				HX_STACK_LINE(390)
				int tmp17 = full->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(390)
				int tmp18 = full->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(390)
				::openfl::_legacy::display::BitmapData tmp19 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp17,tmp18,null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				brush = tmp19;
				HX_STACK_LINE(391)
				int tmp20 = Frame;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(391)
				int tmp21 = brush->get_width();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(391)
				int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(391)
				int rx = tmp22;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(392)
				int ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(393)
				int tmp23 = full->get_width();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(393)
				int fw = tmp23;		HX_STACK_VAR(fw,"fw");
				HX_STACK_LINE(394)
				bool tmp24 = (rx >= fw);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(394)
				if ((tmp24)){
					HX_STACK_LINE(396)
					Float tmp25 = (Float(rx) / Float(fw));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(396)
					int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(396)
					int tmp27 = brush->get_height();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(396)
					int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(396)
					ry = tmp28;
					HX_STACK_LINE(397)
					hx::ModEq(rx,fw);
				}
				HX_STACK_LINE(399)
				::openfl::_legacy::geom::Rectangle tmp25 = this->_flashRect;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				tmp25->x = rx;
				HX_STACK_LINE(400)
				::openfl::_legacy::geom::Rectangle tmp26 = this->_flashRect;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(400)
				tmp26->y = ry;
				HX_STACK_LINE(401)
				int tmp27 = brush->get_width();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(401)
				::openfl::_legacy::geom::Rectangle tmp28 = this->_flashRect;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(401)
				tmp28->width = tmp27;
				HX_STACK_LINE(402)
				int tmp29 = brush->get_height();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(402)
				::openfl::_legacy::geom::Rectangle tmp30 = this->_flashRect;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(402)
				tmp30->height = tmp29;
				HX_STACK_LINE(403)
				::openfl::_legacy::display::BitmapData tmp31 = full;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(403)
				::openfl::_legacy::geom::Rectangle tmp32 = this->_flashRect;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(403)
				::openfl::_legacy::geom::Point tmp33 = this->_flashPointZero;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(403)
				brush->copyPixels(tmp31,tmp32,tmp33,null(),null(),null());
			}
		}
		HX_STACK_LINE(407)
		int tmp16 = brush->get_width();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(407)
		int max = tmp16;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(408)
		int tmp17 = brush->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(408)
		int tmp18 = max;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(408)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(408)
		if ((tmp19)){
			HX_STACK_LINE(410)
			int tmp20 = brush->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(410)
			max = tmp20;
		}
		HX_STACK_LINE(413)
		bool tmp20 = AutoBuffer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(413)
		if ((tmp20)){
			HX_STACK_LINE(415)
			Float tmp21 = (max * ((Float)1.5));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(415)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(415)
			max = tmp22;
		}
		HX_STACK_LINE(418)
		Float tmp21 = (Float(Rotations) / Float(rows));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(418)
		int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(418)
		int columns = tmp22;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(419)
		int tmp23 = (max * columns);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(419)
		this->set_width(tmp23);
		HX_STACK_LINE(420)
		int tmp24 = (max * rows);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(420)
		this->set_height(tmp24);
		HX_STACK_LINE(421)
		::String key = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(422)
		Dynamic tmp25 = Graphic;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(422)
		bool tmp26 = ::Std_obj::is(tmp25,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(422)
		if ((tmp26)){
			HX_STACK_LINE(424)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(426)
			Dynamic tmp27 = Graphic;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(426)
			bool tmp28 = ::Std_obj::is(tmp27,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(426)
			if ((tmp28)){
				HX_STACK_LINE(428)
				Dynamic tmp29 = Graphic;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(428)
				::String tmp30 = ::Type_obj::getClassName(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(428)
				key = tmp30;
			}
			else{
				HX_STACK_LINE(430)
				Dynamic tmp29 = Graphic;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(430)
				Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(430)
				bool tmp31 = ::Std_obj::is(tmp30,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(430)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(430)
				if ((tmp31)){
					HX_STACK_LINE(430)
					tmp32 = (Key != null());
				}
				else{
					HX_STACK_LINE(430)
					tmp32 = false;
				}
				HX_STACK_LINE(430)
				if ((tmp32)){
					HX_STACK_LINE(432)
					key = Key;
				}
				else{
					HX_STACK_LINE(434)
					bool tmp33 = isRegion;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(434)
					if ((tmp33)){
						HX_STACK_LINE(436)
						::String tmp34 = spriteRegion->data->key;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(436)
						key = tmp34;
						HX_STACK_LINE(437)
						::String tmp35 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tempRegion->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic ));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(437)
						::String tmp36 = (tmp35 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(437)
						int tmp37 = tempRegion->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(437)
						::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(437)
						::String tmp39 = (tmp38 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(437)
						int tmp40 = tempRegion->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(437)
						::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(437)
						::String tmp42 = (tmp41 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(437)
						int tmp43 = tempRegion->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(437)
						::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(437)
						::String tmp45 = (tmp44 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(437)
						int tmp46 = Rotations;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(437)
						::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(437)
						hx::AddEq(key,tmp47);
					}
					else{
						HX_STACK_LINE(441)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(444)
		bool tmp27 = isRegion;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(444)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(444)
		if ((tmp28)){
			HX_STACK_LINE(446)
			::String tmp29 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + Frame);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(446)
			::String tmp30 = (tmp29 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(446)
			Float tmp31 = this->get_width();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(446)
			::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(446)
			::String tmp33 = (tmp32 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(446)
			Float tmp34 = this->get_height();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(446)
			::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(446)
			::String tmp36 = (tmp35 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(446)
			int tmp37 = Rotations;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(446)
			::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(446)
			hx::AddEq(key,tmp38);
		}
		HX_STACK_LINE(449)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp30 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(449)
			::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(449)
			::String tmp31 = key;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(449)
			::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(449)
			bool tmp33 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(449)
			if ((tmp33)){
				HX_STACK_LINE(449)
				::String tmp34 = key;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(449)
				::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(449)
				::flixel::util::loaders::CachedGraphics tmp36 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(449)
				::flixel::util::loaders::CachedGraphics tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(449)
				::flixel::util::loaders::CachedGraphics tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(449)
				tmp29 = (tmp38 != null());
			}
			else{
				HX_STACK_LINE(449)
				tmp29 = false;
			}
		}
		HX_STACK_LINE(449)
		bool skipGen = tmp29;		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(450)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp30 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(450)
		Float tmp31 = this->get_width();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(450)
		int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(450)
		int tmp33 = columns;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(450)
		int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(450)
		int tmp35 = (tmp34 - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(450)
		Float tmp36 = this->get_height();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(450)
		int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(450)
		int tmp38 = rows;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(450)
		int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(450)
		int tmp40 = (tmp39 - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(450)
		::String tmp41 = key;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(450)
		::flixel::util::loaders::CachedGraphics tmp42 = tmp30->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp35,tmp40,(int)0,true,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(450)
		this->set_cachedGraphics(tmp42);
		HX_STACK_LINE(451)
		Float tmp43 = (Float((int)360) / Float(Rotations));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(451)
		this->bakedRotationAngle = tmp43;
		HX_STACK_LINE(454)
		bool tmp44 = skipGen;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(454)
		bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(454)
		if ((tmp45)){
			HX_STACK_LINE(456)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(457)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(458)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(459)
			int tmp46 = brush->get_width();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(459)
			Float tmp47 = (tmp46 * ((Float)0.5));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(459)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(459)
			int halfBrushWidth = tmp48;		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(460)
			int tmp49 = brush->get_height();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(460)
			Float tmp50 = (tmp49 * ((Float)0.5));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(460)
			int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(460)
			int halfBrushHeight = tmp51;		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(461)
			Float tmp52 = (max * ((Float)0.5));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(461)
			int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(461)
			int midpointX = tmp53;		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(462)
			Float tmp54 = (max * ((Float)0.5));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(462)
			int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(462)
			int midpointY = tmp55;		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				bool tmp56 = (row < rows);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(463)
				bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(463)
				if ((tmp57)){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(465)
				column = (int)0;
				HX_STACK_LINE(466)
				while((true)){
					HX_STACK_LINE(466)
					bool tmp58 = (column < columns);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(466)
					bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(466)
					if ((tmp59)){
						HX_STACK_LINE(466)
						break;
					}
					HX_STACK_LINE(468)
					::openfl::_legacy::geom::Matrix tmp60 = this->_matrix;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(468)
					tmp60->identity();
					HX_STACK_LINE(469)
					::openfl::_legacy::geom::Matrix tmp61 = this->_matrix;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(469)
					int tmp62 = halfBrushWidth;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(469)
					int tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(469)
					int tmp64 = halfBrushHeight;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(469)
					int tmp65 = -(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(469)
					tmp61->translate(tmp63,tmp65);
					HX_STACK_LINE(470)
					::openfl::_legacy::geom::Matrix tmp66 = this->_matrix;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(470)
					Float tmp67 = bakedAngle;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(470)
					Float tmp68 = ::Math_obj::PI;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(470)
					Float tmp69 = (Float(tmp68) / Float((int)180));		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(470)
					Float tmp70 = (tmp67 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(470)
					tmp66->rotate(tmp70);
					HX_STACK_LINE(471)
					::openfl::_legacy::geom::Matrix tmp71 = this->_matrix;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(471)
					int tmp72 = (max * column);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(471)
					int tmp73 = midpointX;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(471)
					int tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(471)
					int tmp75 = column;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(471)
					int tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(471)
					int tmp77 = (midpointY + row);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(471)
					tmp71->translate(tmp76,tmp77);
					HX_STACK_LINE(472)
					Float tmp78 = this->bakedRotationAngle;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(472)
					hx::AddEq(bakedAngle,tmp78);
					HX_STACK_LINE(473)
					::flixel::util::loaders::CachedGraphics tmp79 = this->cachedGraphics;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(473)
					::openfl::_legacy::display::BitmapData tmp80 = brush;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(473)
					::openfl::_legacy::geom::Matrix tmp81 = this->_matrix;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(473)
					bool tmp82 = AntiAliasing;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(473)
					tmp79->bitmap->draw(tmp80,tmp81,null(),null(),null(),tmp82);
					HX_STACK_LINE(474)
					(column)++;
				}
				HX_STACK_LINE(476)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(477)
				(row)++;
			}
		}
		HX_STACK_LINE(480)
		int tmp46 = this->frameHeight = max;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(480)
		this->frameWidth = tmp46;
		HX_STACK_LINE(481)
		int tmp47 = max;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(481)
		Float tmp48 = this->set_height(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(481)
		this->set_width(tmp48);
		HX_STACK_LINE(483)
		::flixel::_system::layer::Region tmp49 = ::flixel::_system::layer::Region_obj::__new((int)0,(int)0,max,max,(int)1,(int)1,null(),null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(483)
		this->region = tmp49;
		HX_STACK_LINE(484)
		::flixel::util::loaders::CachedGraphics tmp50 = this->cachedGraphics;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(484)
		int tmp51 = tmp50->bitmap->get_width();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(484)
		::flixel::_system::layer::Region tmp52 = this->region;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(484)
		tmp52->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp51;
		HX_STACK_LINE(485)
		::flixel::util::loaders::CachedGraphics tmp53 = this->cachedGraphics;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(485)
		int tmp54 = tmp53->bitmap->get_height();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(485)
		::flixel::_system::layer::Region tmp55 = this->region;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(485)
		tmp55->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp54;
		HX_STACK_LINE(488)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(491)
		this->updateFrameData();
		HX_STACK_LINE(493)
		bool tmp56 = AutoBuffer;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(493)
		if ((tmp56)){
			HX_STACK_LINE(495)
			int tmp57 = brush->get_width();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(495)
			this->set_width(tmp57);
			HX_STACK_LINE(496)
			int tmp58 = brush->get_height();		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(496)
			this->set_height(tmp58);
			HX_STACK_LINE(497)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(500)
		::flixel::animation::FlxAnimationController tmp57 = this->animation;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(500)
		tmp57->createPrerotated(null());
		HX_STACK_LINE(501)
		this->resetHelpers();
		HX_STACK_LINE(502)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromTexture( Dynamic Data,hx::Null< bool >  __o_Unique,::String FrameName){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromTexture",0xc5fe4c78,"flixel.FlxSprite.loadGraphicFromTexture","flixel/FlxSprite.hx",514,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(FrameName,"FrameName")
{
		HX_STACK_LINE(515)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(517)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		if ((tmp1)){
			HX_STACK_LINE(519)
			::flixel::util::loaders::CachedGraphics tmp2 = ((::flixel::util::loaders::CachedGraphics)(Data));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			this->set_cachedGraphics(tmp2);
			HX_STACK_LINE(520)
			::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(520)
			::flixel::util::loaders::TexturePackerData tmp4 = tmp3->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(520)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(520)
			if ((tmp5)){
				HX_STACK_LINE(522)
				return null();
			}
		}
		else{
			HX_STACK_LINE(525)
			Dynamic tmp2 = Data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::util::loaders::TexturePackerData >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(525)
			if ((tmp3)){
				HX_STACK_LINE(527)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				bool tmp5 = Unique;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(527)
				::flixel::util::loaders::CachedGraphics tmp6 = tmp4->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(Data->__Field(HX_HCSTRING("assetName","\x5b","\xc0","\xa5","\xad"), hx::paccDynamic ),(int)0,(int)0,(int)1,(int)1,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(527)
				this->set_cachedGraphics(tmp6);
				HX_STACK_LINE(528)
				::flixel::util::loaders::CachedGraphics tmp7 = this->cachedGraphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(528)
				tmp7->data = ((::flixel::util::loaders::TexturePackerData)(Data));
			}
			else{
				HX_STACK_LINE(532)
				return null();
			}
		}
		HX_STACK_LINE(535)
		::flixel::_system::layer::Region tmp2 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		this->region = tmp2;
		HX_STACK_LINE(536)
		::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		int tmp4 = tmp3->bitmap->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(536)
		::flixel::_system::layer::Region tmp5 = this->region;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		tmp5->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp4;
		HX_STACK_LINE(537)
		::flixel::util::loaders::CachedGraphics tmp6 = this->cachedGraphics;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(537)
		int tmp7 = tmp6->bitmap->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		::flixel::_system::layer::Region tmp8 = this->region;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		tmp8->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp7;
		HX_STACK_LINE(539)
		::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(539)
		tmp9->destroyAnimations();
		HX_STACK_LINE(540)
		this->updateFrameData();
		HX_STACK_LINE(541)
		this->resetHelpers();
		HX_STACK_LINE(543)
		bool tmp10 = (FrameName != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(543)
		if ((tmp10)){
			HX_STACK_LINE(545)
			::flixel::animation::FlxAnimationController tmp11 = this->animation;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(545)
			::String tmp12 = FrameName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(545)
			tmp11->set_frameName(tmp12);
		}
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			int tmp11 = this->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(548)
			this->set_width(tmp11);
			HX_STACK_LINE(548)
			int tmp12 = this->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(548)
			this->set_height(tmp12);
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			::flixel::util::FlxPoint tmp11 = this->origin;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(549)
			int tmp12 = this->frameWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(549)
			Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(549)
			int tmp14 = this->frameHeight;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(549)
			Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(549)
			tmp11->set(tmp13,tmp15);
		}
		HX_STACK_LINE(550)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,loadGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphicFromTexture( Dynamic Data,::String Image,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphicFromTexture",0xa93b1903,"flixel.FlxSprite.loadRotatedGraphicFromTexture","flixel/FlxSprite.hx",565,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(566)
		Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		::flixel::FlxSprite tmp1 = this->loadGraphicFromTexture(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		::flixel::FlxSprite temp = tmp1;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(568)
		bool tmp2 = (temp == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		if ((tmp2)){
			HX_STACK_LINE(570)
			return null();
		}
		HX_STACK_LINE(573)
		::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(573)
		::String tmp4 = Image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(573)
		tmp3->set_frameName(tmp4);
		HX_STACK_LINE(576)
		this->antialiasing = AntiAliasing;
		HX_STACK_LINE(587)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,loadRotatedGraphicFromTexture,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",600,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(601)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(602)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(602)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		::String tmp5 = Key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		::flixel::util::loaders::CachedGraphics tmp6 = tmp->__Field(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"), hx::paccDynamic )(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		this->set_cachedGraphics(tmp6);
		HX_STACK_LINE(603)
		::flixel::_system::layer::Region tmp7 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(603)
		this->region = tmp7;
		HX_STACK_LINE(604)
		::flixel::_system::layer::Region tmp8 = this->region;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(604)
		tmp8->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = Width;
		HX_STACK_LINE(605)
		::flixel::_system::layer::Region tmp9 = this->region;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(605)
		tmp9->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = Height;
		HX_STACK_LINE(606)
		::flixel::util::loaders::CachedGraphics tmp10 = this->cachedGraphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(606)
		int tmp11 = tmp10->bitmap->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(606)
		int tmp12 = this->frameWidth = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(606)
		::flixel::_system::layer::Region tmp13 = this->region;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(606)
		int tmp14 = tmp13->__FieldRef(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")) = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(606)
		this->set_width(tmp14);
		HX_STACK_LINE(607)
		::flixel::util::loaders::CachedGraphics tmp15 = this->cachedGraphics;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(607)
		int tmp16 = tmp15->bitmap->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(607)
		int tmp17 = this->frameHeight = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(607)
		::flixel::_system::layer::Region tmp18 = this->region;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(607)
		int tmp19 = tmp18->__FieldRef(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")) = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(607)
		this->set_height(tmp19);
		HX_STACK_LINE(608)
		::flixel::animation::FlxAnimationController tmp20 = this->animation;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(608)
		tmp20->destroyAnimations();
		HX_STACK_LINE(609)
		this->updateFrameData();
		HX_STACK_LINE(610)
		this->resetHelpers();
		HX_STACK_LINE(611)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",618,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(619)
		::openfl::_legacy::geom::Rectangle tmp = this->_flashRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(619)
		tmp->x = (int)0;
		HX_STACK_LINE(620)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(620)
		tmp1->y = (int)0;
		HX_STACK_LINE(621)
		int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		tmp3->width = tmp2;
		HX_STACK_LINE(622)
		int tmp4 = this->frameHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(622)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_flashRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(622)
		tmp5->height = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",629,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(630)
		::flixel::_system::layer::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(630)
		Float tmp1 = tmp->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(630)
		this->frameWidth = tmp2;
		HX_STACK_LINE(631)
		::flixel::_system::layer::frames::FlxFrame tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(631)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(631)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(631)
		this->frameHeight = tmp5;
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			::openfl::_legacy::geom::Rectangle tmp6 = this->_flashRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(632)
			tmp6->x = (int)0;
			HX_STACK_LINE(632)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(632)
			tmp7->y = (int)0;
			HX_STACK_LINE(632)
			int tmp8 = this->frameWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(632)
			::openfl::_legacy::geom::Rectangle tmp9 = this->_flashRect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(632)
			tmp9->width = tmp8;
			HX_STACK_LINE(632)
			int tmp10 = this->frameHeight;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(632)
			::openfl::_legacy::geom::Rectangle tmp11 = this->_flashRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(632)
			tmp11->height = tmp10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",639,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(640)
		int tmp = this->frameWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		this->set_width(tmp);
		HX_STACK_LINE(641)
		int tmp1 = this->frameHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::setGraphicSize( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",652,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(653)
		bool tmp = (Width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(653)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		if ((tmp)){
			HX_STACK_LINE(653)
			tmp1 = (Height <= (int)0);
		}
		else{
			HX_STACK_LINE(653)
			tmp1 = false;
		}
		HX_STACK_LINE(653)
		if ((tmp1)){
			HX_STACK_LINE(654)
			return null();
		}
		HX_STACK_LINE(657)
		int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(657)
		int tmp3 = this->frameWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		Float newScaleX = tmp4;		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(658)
		int tmp5 = Height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(658)
		int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(658)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(658)
		Float newScaleY = tmp7;		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(659)
		::flixel::util::FlxPoint tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(659)
		Float tmp9 = newScaleX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(659)
		Float tmp10 = newScaleY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(659)
		tmp8->set(tmp9,tmp10);
		HX_STACK_LINE(661)
		bool tmp11 = (Width <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(661)
		if ((tmp11)){
			HX_STACK_LINE(662)
			::flixel::util::FlxPoint tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(662)
			Float tmp13 = newScaleY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(662)
			tmp12->set_x(tmp13);
		}
		else{
			HX_STACK_LINE(664)
			bool tmp12 = (Height <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(664)
			if ((tmp12)){
				HX_STACK_LINE(665)
				::flixel::util::FlxPoint tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(665)
				Float tmp14 = newScaleX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(665)
				tmp13->set_y(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",674,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		::flixel::util::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(675)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(675)
		int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(675)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(675)
		Float newWidth = tmp3;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(676)
		::flixel::util::FlxPoint tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(676)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(676)
		int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(676)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(676)
		Float newHeight = tmp7;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(678)
		Float tmp8 = newWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(678)
		this->set_width(tmp8);
		HX_STACK_LINE(679)
		Float tmp9 = newHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(679)
		this->set_height(tmp9);
		HX_STACK_LINE(680)
		::flixel::util::FlxPoint tmp10 = this->offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(680)
		Float tmp11 = newWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(680)
		int tmp12 = this->frameWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(680)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(680)
		Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(680)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(680)
		Float tmp16 = newHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(680)
		int tmp17 = this->frameHeight;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(680)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(680)
		Float tmp19 = (tmp18 * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(680)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(680)
		tmp10->set(tmp15,tmp20);
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			::flixel::util::FlxPoint tmp21 = this->origin;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(681)
			int tmp22 = this->frameWidth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(681)
			Float tmp23 = (tmp22 * ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(681)
			int tmp24 = this->frameHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(681)
			Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(681)
			tmp21->set(tmp23,tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",688,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(689)
		{
			HX_STACK_LINE(689)
			::openfl::_legacy::geom::Rectangle tmp = this->_flashRect;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(689)
			tmp->x = (int)0;
			HX_STACK_LINE(689)
			::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(689)
			tmp1->y = (int)0;
			HX_STACK_LINE(689)
			int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(689)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(689)
			tmp3->width = tmp2;
			HX_STACK_LINE(689)
			int tmp4 = this->frameHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(689)
			::openfl::_legacy::geom::Rectangle tmp5 = this->_flashRect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(689)
			tmp5->height = tmp4;
		}
		HX_STACK_LINE(690)
		::openfl::_legacy::geom::Rectangle tmp = this->_flashRect2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(690)
		tmp->x = (int)0;
		HX_STACK_LINE(691)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(691)
		tmp1->y = (int)0;
		HX_STACK_LINE(692)
		::flixel::util::loaders::CachedGraphics tmp2 = this->cachedGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		int tmp3 = tmp2->bitmap->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(692)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_flashRect2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(692)
		tmp4->width = tmp3;
		HX_STACK_LINE(693)
		::flixel::util::loaders::CachedGraphics tmp5 = this->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(693)
		int tmp6 = tmp5->bitmap->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(693)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(693)
		tmp7->height = tmp6;
		HX_STACK_LINE(694)
		{
			HX_STACK_LINE(694)
			::flixel::util::FlxPoint tmp8 = this->origin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(694)
			int tmp9 = this->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(694)
			Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(694)
			int tmp11 = this->frameHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(694)
			Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(694)
			tmp8->set(tmp10,tmp12);
		}
		HX_STACK_LINE(701)
		int tmp8 = this->frameWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(701)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(701)
		this->_halfWidth = tmp9;
		HX_STACK_LINE(702)
		int tmp10 = this->frameHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(702)
		this->_halfHeight = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",706,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(707)
		this->super::update();
		HX_STACK_LINE(708)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(708)
		tmp->update();
	}
return null();
}


Void FlxSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",715,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(716)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(716)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(716)
		if ((tmp1)){
			HX_STACK_LINE(718)
			return null();
		}
		HX_STACK_LINE(721)
		bool tmp2 = this->dirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		if ((tmp2)){
			HX_STACK_LINE(723)
			this->calcFrame(null());
		}
		HX_STACK_LINE(727)
		::flixel::_system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(728)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(729)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(731)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(732)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(734)
		::flixel::util::FlxPoint tmp3 = this->origin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(734)
		Float ox = tmp3->x;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(735)
		int tmp4 = this->_facingHorizontalMult;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(735)
		bool tmp5 = (tmp4 != (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(735)
		if ((tmp5)){
			HX_STACK_LINE(737)
			int tmp6 = this->frameWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(737)
			Float tmp7 = ox;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(737)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(737)
			ox = tmp8;
		}
		HX_STACK_LINE(739)
		::flixel::util::FlxPoint tmp6 = this->origin;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(739)
		Float oy = tmp6->y;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(740)
		int tmp7 = this->_facingVerticalMult;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(740)
		bool tmp8 = (tmp7 != (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(740)
		if ((tmp8)){
			HX_STACK_LINE(742)
			int tmp9 = this->frameHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(742)
			Float tmp10 = oy;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(742)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(742)
			oy = tmp11;
		}
		HX_STACK_LINE(746)
		bool tmp9 = this->isSimpleRender();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(746)
		bool simpleRender = tmp9;		HX_STACK_VAR(simpleRender,"simpleRender");
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(748)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(748)
			while((true)){
				HX_STACK_LINE(748)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(748)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(748)
				if ((tmp11)){
					HX_STACK_LINE(748)
					break;
				}
				HX_STACK_LINE(748)
				::flixel::FlxCamera tmp12 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(748)
				::flixel::FlxCamera camera = tmp12;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(748)
				++(_g);
				HX_STACK_LINE(750)
				bool tmp13 = camera->visible;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(750)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(750)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(750)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(750)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(750)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(750)
				if ((tmp17)){
					HX_STACK_LINE(750)
					bool tmp19 = camera->exists;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(750)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(750)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(750)
					tmp18 = !(tmp21);
				}
				else{
					HX_STACK_LINE(750)
					tmp18 = true;
				}
				HX_STACK_LINE(750)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(750)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(750)
				if ((tmp19)){
					HX_STACK_LINE(750)
					::flixel::FlxCamera tmp21 = camera;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(750)
					::flixel::FlxCamera tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(750)
					bool tmp23 = this->isOnScreen(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(750)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(750)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(750)
					tmp20 = !(tmp25);
				}
				else{
					HX_STACK_LINE(750)
					tmp20 = true;
				}
				HX_STACK_LINE(750)
				if ((tmp20)){
					HX_STACK_LINE(752)
					continue;
				}
				HX_STACK_LINE(756)
				::flixel::util::loaders::CachedGraphics tmp21 = this->cachedGraphics;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(756)
				bool tmp22 = this->isColored;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(756)
				int tmp23 = this->_blendInt;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(756)
				bool tmp24 = this->antialiasing;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(756)
				::flixel::_system::layer::DrawStackItem tmp25 = camera->getDrawStackItem(tmp21,tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(756)
				drawItem = tmp25;
				HX_STACK_LINE(757)
				currDrawData = drawItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );
				HX_STACK_LINE(758)
				currIndex = drawItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
				HX_STACK_LINE(760)
				::flixel::util::FlxPoint tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(760)
				Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(760)
				Float tmp28 = camera->scroll->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(760)
				::flixel::util::FlxPoint tmp29 = this->scrollFactor;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(760)
				Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(760)
				Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(760)
				Float tmp32 = (tmp27 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(760)
				::flixel::util::FlxPoint tmp33 = this->offset;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(760)
				Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(760)
				Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(760)
				tmp26->set_x(tmp35);
				HX_STACK_LINE(761)
				::flixel::util::FlxPoint tmp36 = this->_point;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(761)
				Float tmp37 = this->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(761)
				Float tmp38 = camera->scroll->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(761)
				::flixel::util::FlxPoint tmp39 = this->scrollFactor;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(761)
				Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(761)
				Float tmp41 = (tmp38 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(761)
				Float tmp42 = (tmp37 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(761)
				::flixel::util::FlxPoint tmp43 = this->offset;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(761)
				Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(761)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(761)
				tmp36->set_y(tmp45);
				HX_STACK_LINE(763)
				::flixel::util::FlxPoint tmp46 = this->_point;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(763)
				::flixel::util::FlxPoint tmp47 = this->_point;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(763)
				Float tmp48 = tmp47->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(763)
				::flixel::util::FlxPoint tmp49 = this->origin;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(763)
				Float tmp50 = tmp49->x;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(763)
				Float tmp51 = (tmp48 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(763)
				tmp46->set_x(tmp51);
				HX_STACK_LINE(764)
				::flixel::util::FlxPoint tmp52 = this->_point;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(764)
				::flixel::util::FlxPoint tmp53 = this->_point;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(764)
				Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(764)
				::flixel::util::FlxPoint tmp55 = this->origin;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(764)
				Float tmp56 = tmp55->y;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(764)
				Float tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(764)
				tmp52->set_y(tmp57);
				HX_STACK_LINE(802)
				int tmp58 = this->_facingHorizontalMult;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(802)
				Float csx = tmp58;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(803)
				int tmp59 = this->_facingVerticalMult;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(803)
				Float csy = tmp59;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(804)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(805)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(807)
				Float tmp60 = ox;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(807)
				::flixel::_system::layer::frames::FlxFrame tmp61 = this->frame;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(807)
				Float tmp62 = tmp61->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(807)
				Float tmp63 = (tmp60 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(807)
				Float x1 = tmp63;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(808)
				Float tmp64 = oy;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(808)
				::flixel::_system::layer::frames::FlxFrame tmp65 = this->frame;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(808)
				Float tmp66 = tmp65->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(808)
				Float tmp67 = (tmp64 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(808)
				Float y1 = tmp67;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(810)
				Float x2 = x1;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(811)
				Float y2 = y1;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(814)
				Float a = csx;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(815)
				Float b = ssx;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(816)
				Float c = ssy;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(817)
				Float d = csy;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(819)
				bool tmp68 = simpleRender;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(819)
				bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(819)
				if ((tmp69)){
					HX_STACK_LINE(821)
					bool tmp70 = this->_angleChanged;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(821)
					bool tmp71;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(821)
					if ((tmp70)){
						HX_STACK_LINE(821)
						Float tmp72 = this->bakedRotationAngle;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(821)
						Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(821)
						tmp71 = (tmp73 <= (int)0);
					}
					else{
						HX_STACK_LINE(821)
						tmp71 = false;
					}
					HX_STACK_LINE(821)
					if ((tmp71)){
						HX_STACK_LINE(823)
						Float tmp72 = this->angle;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(823)
						Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(823)
						Float tmp74 = ::Math_obj::PI;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(823)
						Float tmp75 = (Float(tmp74) / Float((int)180));		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(823)
						Float tmp76 = (tmp73 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(823)
						Float radians = tmp76;		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(824)
						Float tmp77 = radians;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(824)
						Float tmp78 = ::Math_obj::sin(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(824)
						this->_sinAngle = tmp78;
						HX_STACK_LINE(825)
						Float tmp79 = radians;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(825)
						Float tmp80 = ::Math_obj::cos(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(825)
						this->_cosAngle = tmp80;
						HX_STACK_LINE(826)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(829)
					::flixel::util::FlxPoint tmp72 = this->scale;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(829)
					Float tmp73 = tmp72->x;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(829)
					int tmp74 = this->_facingHorizontalMult;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(829)
					Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(829)
					Float sx = tmp75;		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(830)
					::flixel::util::FlxPoint tmp76 = this->scale;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(830)
					Float tmp77 = tmp76->y;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(830)
					int tmp78 = this->_facingVerticalMult;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(830)
					Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(830)
					Float sy = tmp79;		HX_STACK_VAR(sy,"sy");
					HX_STACK_LINE(832)
					::flixel::_system::layer::frames::FlxFrame tmp80 = this->frame;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(832)
					::flixel::_system::layer::frames::FrameType tmp81 = tmp80->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(832)
					bool tmp82 = (tmp81 == ::flixel::_system::layer::frames::FrameType_obj::ROTATED);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(832)
					if ((tmp82)){
						HX_STACK_LINE(834)
						Float tmp83 = this->_sinAngle;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(834)
						Float tmp84 = -(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(834)
						cos = tmp84;
						HX_STACK_LINE(835)
						Float tmp85 = this->_cosAngle;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(835)
						sin = tmp85;
						HX_STACK_LINE(837)
						Float tmp86 = (cos * sx);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(837)
						csx = tmp86;
						HX_STACK_LINE(838)
						Float tmp87 = (sin * sy);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(838)
						ssy = tmp87;
						HX_STACK_LINE(839)
						Float tmp88 = (sin * sx);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(839)
						ssx = tmp88;
						HX_STACK_LINE(840)
						Float tmp89 = (cos * sy);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(840)
						csy = tmp89;
						HX_STACK_LINE(842)
						Float tmp90 = (x1 * ssx);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(842)
						Float tmp91 = (y1 * csy);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(842)
						Float tmp92 = (tmp90 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(842)
						x2 = tmp92;
						HX_STACK_LINE(843)
						Float tmp93 = (x1 * csx);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(843)
						Float tmp94 = (y1 * ssy);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(843)
						Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(843)
						y2 = tmp95;
						HX_STACK_LINE(845)
						a = csy;
						HX_STACK_LINE(846)
						b = ssy;
						HX_STACK_LINE(847)
						c = ssx;
						HX_STACK_LINE(848)
						d = csx;
					}
					else{
						HX_STACK_LINE(852)
						Float tmp83 = this->_cosAngle;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(852)
						cos = tmp83;
						HX_STACK_LINE(853)
						Float tmp84 = this->_sinAngle;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(853)
						sin = tmp84;
						HX_STACK_LINE(855)
						Float tmp85 = (cos * sx);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(855)
						csx = tmp85;
						HX_STACK_LINE(856)
						Float tmp86 = (sin * sy);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(856)
						ssy = tmp86;
						HX_STACK_LINE(857)
						Float tmp87 = (sin * sx);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(857)
						ssx = tmp87;
						HX_STACK_LINE(858)
						Float tmp88 = (cos * sy);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(858)
						csy = tmp88;
						HX_STACK_LINE(860)
						Float tmp89 = (x1 * csx);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(860)
						Float tmp90 = (y1 * ssy);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(860)
						Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(860)
						x2 = tmp91;
						HX_STACK_LINE(861)
						Float tmp92 = x1;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(861)
						Float tmp93 = -(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(861)
						Float tmp94 = ssx;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(861)
						Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(861)
						Float tmp96 = (y1 * csy);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(861)
						Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(861)
						y2 = tmp97;
						HX_STACK_LINE(863)
						a = csx;
						HX_STACK_LINE(864)
						b = ssx;
						HX_STACK_LINE(865)
						c = ssy;
						HX_STACK_LINE(866)
						d = csy;
					}
				}
				else{
					HX_STACK_LINE(871)
					Float tmp70 = (x1 * csx);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(871)
					x2 = tmp70;
					HX_STACK_LINE(872)
					Float tmp71 = (y1 * csy);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(872)
					y2 = tmp71;
				}
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					::flixel::util::FlxPoint tmp70 = this->_point;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(875)
					::flixel::util::FlxPoint _g2 = tmp70;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(875)
					Float tmp71 = (_g2->x - x2);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(875)
					_g2->set_x(tmp71);
				}
				HX_STACK_LINE(876)
				{
					HX_STACK_LINE(876)
					::flixel::util::FlxPoint tmp70 = this->_point;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(876)
					::flixel::util::FlxPoint _g2 = tmp70;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(876)
					Float tmp71 = (_g2->y - y2);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(876)
					_g2->set_y(tmp71);
				}
				HX_STACK_LINE(878)
				bool tmp70 = this->pixelPerfectRender;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(878)
				if ((tmp70)){
					HX_STACK_LINE(880)
					::flixel::util::FlxPoint tmp71 = this->_point;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(880)
					::flixel::util::FlxPoint _this = tmp71;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(880)
					Float tmp72 = _this->x;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(880)
					int tmp73 = ::Math_obj::floor(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(880)
					_this->set_x(tmp73);
					HX_STACK_LINE(880)
					Float tmp74 = _this->y;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(880)
					int tmp75 = ::Math_obj::floor(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(880)
					_this->set_y(tmp75);
					HX_STACK_LINE(880)
					_this;
				}
				HX_STACK_LINE(883)
				int tmp71 = (currIndex)++;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(883)
				::flixel::util::FlxPoint tmp72 = this->_point;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(883)
				Float tmp73 = tmp72->x;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(883)
				currDrawData[tmp71] = tmp73;
				HX_STACK_LINE(884)
				int tmp74 = (currIndex)++;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(884)
				::flixel::util::FlxPoint tmp75 = this->_point;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(884)
				Float tmp76 = tmp75->y;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(884)
				currDrawData[tmp74] = tmp76;
				HX_STACK_LINE(886)
				int tmp77 = (currIndex)++;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(886)
				::flixel::_system::layer::frames::FlxFrame tmp78 = this->frame;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(886)
				int tmp79 = tmp78->__Field(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(886)
				currDrawData[tmp77] = tmp79;
				HX_STACK_LINE(888)
				int tmp80 = (currIndex)++;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(888)
				Float tmp81 = a;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(888)
				currDrawData[tmp80] = tmp81;
				HX_STACK_LINE(889)
				int tmp82 = (currIndex)++;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(889)
				Float tmp83 = b;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(889)
				Float tmp84 = -(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(889)
				currDrawData[tmp82] = tmp84;
				HX_STACK_LINE(890)
				int tmp85 = (currIndex)++;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(890)
				Float tmp86 = c;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(890)
				currDrawData[tmp85] = tmp86;
				HX_STACK_LINE(891)
				int tmp87 = (currIndex)++;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(891)
				Float tmp88 = d;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(891)
				currDrawData[tmp87] = tmp88;
				HX_STACK_LINE(893)
				bool tmp89 = this->isColored;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(893)
				if ((tmp89)){
					HX_STACK_LINE(895)
					int tmp90 = (currIndex)++;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(895)
					Float tmp91 = this->_red;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(895)
					currDrawData[tmp90] = tmp91;
					HX_STACK_LINE(896)
					int tmp92 = (currIndex)++;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(896)
					Float tmp93 = this->_green;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(896)
					currDrawData[tmp92] = tmp93;
					HX_STACK_LINE(897)
					int tmp94 = (currIndex)++;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(897)
					Float tmp95 = this->_blue;		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(897)
					currDrawData[tmp94] = tmp95;
				}
				HX_STACK_LINE(899)
				int tmp90 = (currIndex)++;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(899)
				Float tmp91 = this->alpha;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(899)
				Float tmp92 = camera->alpha;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(899)
				Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(899)
				currDrawData[tmp90] = tmp93;
				HX_STACK_LINE(900)
				drawItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = currIndex;
			}
		}
	}
return null();
}


Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",921,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(922)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(922)
			Brush->calcFrame(true);
		}
		HX_STACK_LINE(923)
		::openfl::_legacy::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(926)
		bool tmp = (Brush->angle == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(926)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(926)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(926)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(926)
		if ((tmp2)){
			HX_STACK_LINE(926)
			tmp3 = (Brush->bakedRotationAngle > (int)0);
		}
		else{
			HX_STACK_LINE(926)
			tmp3 = true;
		}
		HX_STACK_LINE(926)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(926)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(926)
		if ((tmp4)){
			HX_STACK_LINE(926)
			Float tmp6 = Brush->scale->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(926)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(926)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(926)
			tmp5 = (tmp8 == (int)1);
		}
		else{
			HX_STACK_LINE(926)
			tmp5 = false;
		}
		HX_STACK_LINE(926)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(926)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(926)
		if ((tmp6)){
			HX_STACK_LINE(926)
			Float tmp8 = Brush->scale->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(926)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(926)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(926)
			tmp7 = (tmp10 == (int)1);
		}
		else{
			HX_STACK_LINE(926)
			tmp7 = false;
		}
		HX_STACK_LINE(926)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(926)
		if ((tmp7)){
			HX_STACK_LINE(926)
			tmp8 = (Brush->blend == null());
		}
		else{
			HX_STACK_LINE(926)
			tmp8 = false;
		}
		HX_STACK_LINE(926)
		if ((tmp8)){
			HX_STACK_LINE(928)
			int tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(928)
			::flixel::_system::layer::Region tmp10 = this->region;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(928)
			int tmp11 = tmp10->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(928)
			int tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(928)
			::openfl::_legacy::geom::Point tmp13 = this->_flashPoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(928)
			tmp13->x = tmp12;
			HX_STACK_LINE(929)
			int tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(929)
			::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(929)
			int tmp16 = tmp15->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(929)
			int tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(929)
			::openfl::_legacy::geom::Point tmp18 = this->_flashPoint;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(929)
			tmp18->y = tmp17;
			HX_STACK_LINE(930)
			int tmp19 = bitmapData->get_width();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(930)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(930)
			tmp20->width = tmp19;
			HX_STACK_LINE(931)
			int tmp21 = bitmapData->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(931)
			::openfl::_legacy::geom::Rectangle tmp22 = this->_flashRect2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(931)
			tmp22->height = tmp21;
			HX_STACK_LINE(932)
			::flixel::util::loaders::CachedGraphics tmp23 = this->cachedGraphics;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(932)
			::openfl::_legacy::display::BitmapData tmp24 = bitmapData;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(932)
			::openfl::_legacy::geom::Rectangle tmp25 = this->_flashRect2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(932)
			::openfl::_legacy::geom::Point tmp26 = this->_flashPoint;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(932)
			tmp23->bitmap->copyPixels(tmp24,tmp25,tmp26,null(),null(),true);
			HX_STACK_LINE(933)
			::flixel::util::loaders::CachedGraphics tmp27 = this->cachedGraphics;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(933)
			int tmp28 = tmp27->bitmap->get_width();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(933)
			::openfl::_legacy::geom::Rectangle tmp29 = this->_flashRect2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(933)
			tmp29->width = tmp28;
			HX_STACK_LINE(934)
			::flixel::util::loaders::CachedGraphics tmp30 = this->cachedGraphics;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(934)
			int tmp31 = tmp30->bitmap->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(934)
			::openfl::_legacy::geom::Rectangle tmp32 = this->_flashRect2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(934)
			tmp32->height = tmp31;
			HX_STACK_LINE(936)
			{
				HX_STACK_LINE(936)
				::flixel::util::loaders::CachedGraphics tmp33 = this->cachedGraphics;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(936)
				::flixel::_system::layer::TileSheetData tmp34 = tmp33->get_tilesheet();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(936)
				tmp34->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
			}
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(946)
		::openfl::_legacy::geom::Matrix tmp9 = this->_matrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(946)
		tmp9->identity();
		HX_STACK_LINE(947)
		::openfl::_legacy::geom::Matrix tmp10 = this->_matrix;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(947)
		Float tmp11 = Brush->origin->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(947)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(947)
		Float tmp13 = Brush->origin->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(947)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(947)
		tmp10->translate(tmp12,tmp14);
		HX_STACK_LINE(948)
		::openfl::_legacy::geom::Matrix tmp15 = this->_matrix;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(948)
		Float tmp16 = Brush->scale->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(948)
		Float tmp17 = Brush->scale->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(948)
		tmp15->scale(tmp16,tmp17);
		HX_STACK_LINE(949)
		bool tmp18 = (Brush->angle != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(949)
		if ((tmp18)){
			HX_STACK_LINE(951)
			::openfl::_legacy::geom::Matrix tmp19 = this->_matrix;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(951)
			Float tmp20 = Brush->angle;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(951)
			Float tmp21 = ::Math_obj::PI;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(951)
			Float tmp22 = (Float(tmp21) / Float((int)180));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(951)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(951)
			tmp19->rotate(tmp23);
		}
		HX_STACK_LINE(953)
		::openfl::_legacy::geom::Matrix tmp19 = this->_matrix;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(953)
		int tmp20 = X;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(953)
		::flixel::_system::layer::Region tmp21 = this->region;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(953)
		int tmp22 = tmp21->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(953)
		int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(953)
		Float tmp24 = Brush->origin->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(953)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(953)
		int tmp26 = Y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(953)
		::flixel::_system::layer::Region tmp27 = this->region;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(953)
		int tmp28 = tmp27->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(953)
		int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(953)
		Float tmp30 = Brush->origin->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(953)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(953)
		tmp19->translate(tmp25,tmp31);
		HX_STACK_LINE(954)
		::openfl::_legacy::display::BlendMode brushBlend = Brush->blend;		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(955)
		::flixel::util::loaders::CachedGraphics tmp32 = this->cachedGraphics;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(955)
		::openfl::_legacy::display::BitmapData tmp33 = bitmapData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(955)
		::openfl::_legacy::geom::Matrix tmp34 = this->_matrix;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(955)
		::openfl::_legacy::display::BlendMode tmp35 = brushBlend;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(955)
		bool tmp36 = Brush->antialiasing;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(955)
		tmp32->bitmap->draw(tmp33,tmp34,null(),tmp35,null(),tmp36);
		HX_STACK_LINE(956)
		{
			HX_STACK_LINE(956)
			::flixel::util::loaders::CachedGraphics tmp37 = this->cachedGraphics;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(956)
			::flixel::_system::layer::TileSheetData tmp38 = tmp37->get_tilesheet();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(956)
			tmp38->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",977,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(977)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",986,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AdjustPosition,"AdjustPosition")
{
		HX_STACK_LINE(987)
		::flixel::util::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		int tmp1 = this->frameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(987)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(987)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(987)
		Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(987)
		tmp->set_x(tmp4);
		HX_STACK_LINE(988)
		::flixel::util::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(988)
		int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(988)
		Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(988)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(988)
		Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(988)
		tmp5->set_y(tmp9);
		HX_STACK_LINE(989)
		bool tmp10 = AdjustPosition;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(989)
		if ((tmp10)){
			HX_STACK_LINE(991)
			{
				HX_STACK_LINE(991)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(991)
				Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(991)
				::flixel::util::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(991)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(991)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(991)
				_g->set_x(tmp14);
			}
			HX_STACK_LINE(992)
			{
				HX_STACK_LINE(992)
				::flixel::FlxSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(992)
				Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(992)
				::flixel::util::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(992)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(992)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(992)
				_g->set_y(tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::centerOrigin( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",1001,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1002)
		::flixel::util::FlxPoint tmp = this->origin;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1002)
		int tmp1 = this->frameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		Float tmp2 = (tmp1 * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1002)
		int tmp3 = this->frameHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1002)
		Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1002)
		tmp->set(tmp2,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",1013,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(NewColor,"NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(1014)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1015)
		bool tmp = FetchPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		if ((tmp)){
			HX_STACK_LINE(1017)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(1020)
		::flixel::_system::layer::Region tmp1 = this->region;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1020)
		int row = tmp1->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1021)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1022)
		::flixel::_system::layer::Region tmp2 = this->region;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1022)
		int rows = tmp2->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1023)
		::flixel::_system::layer::Region tmp3 = this->region;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1023)
		int columns = tmp3->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1024)
		::flixel::util::loaders::CachedGraphics tmp4 = this->cachedGraphics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1024)
		tmp4->bitmap->lock();
		HX_STACK_LINE(1025)
		while((true)){
			HX_STACK_LINE(1025)
			bool tmp5 = (row < rows);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1025)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1025)
			if ((tmp6)){
				HX_STACK_LINE(1025)
				break;
			}
			HX_STACK_LINE(1027)
			::flixel::_system::layer::Region tmp7 = this->region;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1027)
			column = tmp7->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );
			HX_STACK_LINE(1028)
			while((true)){
				HX_STACK_LINE(1028)
				bool tmp8 = (column < columns);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1028)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1028)
				if ((tmp9)){
					HX_STACK_LINE(1028)
					break;
				}
				HX_STACK_LINE(1030)
				::flixel::util::loaders::CachedGraphics tmp10 = this->cachedGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1030)
				int tmp11 = column;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1030)
				int tmp12 = row;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1030)
				int tmp13 = tmp10->bitmap->getPixel32(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1030)
				int tmp14 = Color;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1030)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1030)
				if ((tmp15)){
					HX_STACK_LINE(1032)
					::flixel::util::loaders::CachedGraphics tmp16 = this->cachedGraphics;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1032)
					int tmp17 = column;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1032)
					int tmp18 = row;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1032)
					int tmp19 = NewColor;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1032)
					tmp16->bitmap->setPixel32(tmp17,tmp18,tmp19);
					HX_STACK_LINE(1033)
					bool tmp20 = FetchPositions;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1033)
					if ((tmp20)){
						HX_STACK_LINE(1035)
						::flixel::util::FlxPoint tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1035)
						{
							HX_STACK_LINE(1035)
							::flixel::util::FlxPool tmp22 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1035)
							::flixel::util::FlxPoint tmp23 = tmp22->get();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1035)
							int tmp24 = column;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1035)
							int tmp25 = row;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1035)
							::flixel::util::FlxPoint tmp26 = tmp23->set(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1035)
							::flixel::util::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1035)
							point->_inPool = false;
							HX_STACK_LINE(1035)
							tmp21 = point;
						}
						HX_STACK_LINE(1035)
						positions->push(tmp21);
					}
					HX_STACK_LINE(1037)
					this->dirty = true;
				}
				HX_STACK_LINE(1039)
				(column)++;
			}
			HX_STACK_LINE(1041)
			(row)++;
		}
		HX_STACK_LINE(1043)
		::flixel::util::loaders::CachedGraphics tmp5 = this->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1043)
		tmp5->bitmap->unlock(null());
		HX_STACK_LINE(1044)
		{
			HX_STACK_LINE(1044)
			::flixel::util::loaders::CachedGraphics tmp6 = this->cachedGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1044)
			::flixel::_system::layer::TileSheetData tmp7 = tmp6->get_tilesheet();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1044)
			tmp7->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
		}
		HX_STACK_LINE(1045)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::setColorTransform( hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",1061,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(redMultiplier,"redMultiplier")
	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
	HX_STACK_ARG(redOffset,"redOffset")
	HX_STACK_ARG(greenOffset,"greenOffset")
	HX_STACK_ARG(blueOffset,"blueOffset")
	HX_STACK_ARG(alphaOffset,"alphaOffset")
{
		HX_STACK_LINE(1062)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1062)
		{
			HX_STACK_LINE(1062)
			Float tmp1 = (redMultiplier * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1062)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1062)
			int Red = tmp2;		HX_STACK_VAR(Red,"Red");
			HX_STACK_LINE(1062)
			Float tmp3 = (greenMultiplier * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1062)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1062)
			int Green = tmp4;		HX_STACK_VAR(Green,"Green");
			HX_STACK_LINE(1062)
			Float tmp5 = (blueMultiplier * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1062)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1062)
			int Blue = tmp6;		HX_STACK_VAR(Blue,"Blue");
			HX_STACK_LINE(1062)
			int tmp7 = (int(Red) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1062)
			int tmp8 = (int(Green) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1062)
			int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1062)
			int tmp10 = Blue;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1062)
			tmp = (int(tmp9) | int(tmp10));
		}
		HX_STACK_LINE(1062)
		this->set_color(tmp);
		HX_STACK_LINE(1063)
		Float tmp1 = alphaMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1063)
		this->set_alpha(tmp1);
		HX_STACK_LINE(1065)
		::openfl::_legacy::geom::ColorTransform tmp2 = this->colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1065)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1065)
		if ((tmp3)){
			HX_STACK_LINE(1067)
			::openfl::_legacy::geom::ColorTransform tmp4 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1067)
			this->colorTransform = tmp4;
		}
		else{
			HX_STACK_LINE(1071)
			::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1071)
			tmp4->redMultiplier = redMultiplier;
			HX_STACK_LINE(1072)
			::openfl::_legacy::geom::ColorTransform tmp5 = this->colorTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1072)
			tmp5->greenMultiplier = greenMultiplier;
			HX_STACK_LINE(1073)
			::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1073)
			tmp6->blueMultiplier = blueMultiplier;
			HX_STACK_LINE(1074)
			::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1074)
			tmp7->alphaMultiplier = alphaMultiplier;
			HX_STACK_LINE(1075)
			::openfl::_legacy::geom::ColorTransform tmp8 = this->colorTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1075)
			tmp8->redOffset = redOffset;
			HX_STACK_LINE(1076)
			::openfl::_legacy::geom::ColorTransform tmp9 = this->colorTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1076)
			tmp9->greenOffset = greenOffset;
			HX_STACK_LINE(1077)
			::openfl::_legacy::geom::ColorTransform tmp10 = this->colorTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1077)
			tmp10->blueOffset = blueOffset;
			HX_STACK_LINE(1078)
			::openfl::_legacy::geom::ColorTransform tmp11 = this->colorTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1078)
			tmp11->alphaOffset = alphaOffset;
		}
		HX_STACK_LINE(1081)
		Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1081)
		bool tmp5 = (tmp4 != (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1081)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1081)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1081)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1081)
		if ((tmp7)){
			HX_STACK_LINE(1081)
			int tmp9 = this->color;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1081)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1081)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1081)
			tmp8 = (tmp11 != (int)16777215);
		}
		else{
			HX_STACK_LINE(1081)
			tmp8 = true;
		}
		HX_STACK_LINE(1081)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1081)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1081)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1081)
		if ((tmp10)){
			HX_STACK_LINE(1081)
			tmp11 = (redOffset != (int)0);
		}
		else{
			HX_STACK_LINE(1081)
			tmp11 = true;
		}
		HX_STACK_LINE(1081)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1081)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1081)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1081)
		if ((tmp13)){
			HX_STACK_LINE(1081)
			tmp14 = (greenOffset != (int)0);
		}
		else{
			HX_STACK_LINE(1081)
			tmp14 = true;
		}
		HX_STACK_LINE(1081)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1081)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1081)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1081)
		if ((tmp16)){
			HX_STACK_LINE(1081)
			tmp17 = (blueOffset != (int)0);
		}
		else{
			HX_STACK_LINE(1081)
			tmp17 = true;
		}
		HX_STACK_LINE(1081)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1081)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1081)
		if ((tmp18)){
			HX_STACK_LINE(1081)
			tmp19 = (alphaOffset != (int)0);
		}
		else{
			HX_STACK_LINE(1081)
			tmp19 = true;
		}
		HX_STACK_LINE(1081)
		this->useColorTransform = tmp19;
		HX_STACK_LINE(1082)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",1086,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1087)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1087)
		bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1087)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1087)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1087)
		if ((tmp2)){
			HX_STACK_LINE(1087)
			int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1087)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1087)
			tmp3 = (tmp5 != (int)16777215);
		}
		else{
			HX_STACK_LINE(1087)
			tmp3 = true;
		}
		HX_STACK_LINE(1087)
		if ((tmp3)){
			HX_STACK_LINE(1089)
			::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1089)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1089)
			if ((tmp5)){
				HX_STACK_LINE(1091)
				int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1091)
				int tmp7 = (int(tmp6) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1091)
				Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1091)
				int tmp9 = this->color;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1091)
				int tmp10 = (int(tmp9) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1091)
				int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1091)
				Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1091)
				int tmp13 = this->color;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1091)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1091)
				Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1091)
				Float tmp16 = this->alpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1091)
				::openfl::_legacy::geom::ColorTransform tmp17 = ::openfl::_legacy::geom::ColorTransform_obj::__new(tmp8,tmp12,tmp15,tmp16,null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1091)
				this->colorTransform = tmp17;
			}
			else{
				HX_STACK_LINE(1095)
				int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1095)
				int tmp7 = (int(tmp6) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1095)
				Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1095)
				::openfl::_legacy::geom::ColorTransform tmp9 = this->colorTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1095)
				tmp9->redMultiplier = tmp8;
				HX_STACK_LINE(1096)
				int tmp10 = this->color;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1096)
				int tmp11 = (int(tmp10) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1096)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1096)
				Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1096)
				::openfl::_legacy::geom::ColorTransform tmp14 = this->colorTransform;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1096)
				tmp14->greenMultiplier = tmp13;
				HX_STACK_LINE(1097)
				int tmp15 = this->color;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1097)
				int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1097)
				Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1097)
				::openfl::_legacy::geom::ColorTransform tmp18 = this->colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1097)
				tmp18->blueMultiplier = tmp17;
				HX_STACK_LINE(1098)
				Float tmp19 = this->alpha;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1098)
				::openfl::_legacy::geom::ColorTransform tmp20 = this->colorTransform;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1098)
				tmp20->alphaMultiplier = tmp19;
			}
			HX_STACK_LINE(1100)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(1104)
			::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1104)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1104)
			if ((tmp5)){
				HX_STACK_LINE(1106)
				::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1106)
				tmp6->redMultiplier = (int)1;
				HX_STACK_LINE(1107)
				::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1107)
				tmp7->greenMultiplier = (int)1;
				HX_STACK_LINE(1108)
				::openfl::_legacy::geom::ColorTransform tmp8 = this->colorTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1108)
				tmp8->blueMultiplier = (int)1;
				HX_STACK_LINE(1109)
				::openfl::_legacy::geom::ColorTransform tmp9 = this->colorTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1109)
				tmp9->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(1112)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(1114)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",1127,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1128)
		bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1128)
		if ((tmp)){
			HX_STACK_LINE(1130)
			::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1130)
			Camera = tmp1;
		}
		HX_STACK_LINE(1132)
		::flixel::util::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1132)
		::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1132)
		this->getScreenXY(tmp1,tmp2);
		HX_STACK_LINE(1133)
		::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1133)
		::flixel::util::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1133)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1133)
		::flixel::util::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1133)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1133)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1133)
		tmp3->set_x(tmp8);
		HX_STACK_LINE(1134)
		::flixel::util::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1134)
		::flixel::util::FlxPoint tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1134)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1134)
		::flixel::util::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1134)
		Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1134)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1134)
		tmp9->set_y(tmp14);
		HX_STACK_LINE(1135)
		Float tmp15 = point->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1135)
		Float tmp16 = Camera->scroll->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1135)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1135)
		::flixel::util::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1135)
		Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1135)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1135)
		::openfl::_legacy::geom::Point tmp21 = this->_flashPoint;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1135)
		tmp21->x = tmp20;
		HX_STACK_LINE(1136)
		Float tmp22 = point->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1136)
		Float tmp23 = Camera->scroll->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1136)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1136)
		::flixel::util::FlxPoint tmp25 = this->_point;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1136)
		Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1136)
		Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1136)
		::openfl::_legacy::geom::Point tmp28 = this->_flashPoint;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1136)
		tmp28->y = tmp27;
		HX_STACK_LINE(1138)
		{
			HX_STACK_LINE(1138)
			bool tmp29 = point->_weak;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1138)
			if ((tmp29)){
				HX_STACK_LINE(1138)
				point->put();
			}
		}
		HX_STACK_LINE(1141)
		::openfl::_legacy::geom::Point tmp29 = this->_flashPoint;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1141)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1141)
		bool tmp31 = (tmp30 < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1141)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1141)
		bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1141)
		bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1141)
		if ((tmp33)){
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp35 = this->_flashPoint;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1141)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1141)
			int tmp39 = this->frameWidth;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1141)
			int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1141)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1141)
			tmp34 = (tmp38 > tmp41);
		}
		else{
			HX_STACK_LINE(1141)
			tmp34 = true;
		}
		HX_STACK_LINE(1141)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1141)
		bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1141)
		bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1141)
		if ((tmp36)){
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp38 = this->_flashPoint;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1141)
			Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1141)
			tmp37 = (tmp41 < (int)0);
		}
		else{
			HX_STACK_LINE(1141)
			tmp37 = true;
		}
		HX_STACK_LINE(1141)
		bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1141)
		bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1141)
		if ((tmp38)){
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp40 = this->_flashPoint;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1141)
			::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1141)
			Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1141)
			int tmp43 = this->frameHeight;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1141)
			int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1141)
			tmp39 = (tmp42 > tmp44);
		}
		else{
			HX_STACK_LINE(1141)
			tmp39 = true;
		}
		HX_STACK_LINE(1141)
		if ((tmp39)){
			HX_STACK_LINE(1143)
			return false;
		}
		else{
			HX_STACK_LINE(1147)
			::openfl::_legacy::display::BitmapData tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1147)
			{
				HX_STACK_LINE(1147)
				::flixel::_system::layer::frames::FlxFrame tmp41 = this->frame;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1147)
				bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1147)
				bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1147)
				if ((tmp42)){
					HX_STACK_LINE(1147)
					tmp43 = this->dirty;
				}
				else{
					HX_STACK_LINE(1147)
					tmp43 = false;
				}
				HX_STACK_LINE(1147)
				if ((tmp43)){
					HX_STACK_LINE(1147)
					bool tmp44 = this->flipX;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1147)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1147)
					bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1147)
					bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1147)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1147)
					if ((tmp47)){
						HX_STACK_LINE(1147)
						bool tmp49 = this->flipY;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1147)
						bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1147)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1147)
						bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1147)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1147)
						tmp48 = !(tmp53);
					}
					else{
						HX_STACK_LINE(1147)
						tmp48 = false;
					}
					HX_STACK_LINE(1147)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1147)
					if ((tmp48)){
						HX_STACK_LINE(1147)
						::flixel::_system::layer::frames::FlxFrame tmp50 = this->frame;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1147)
						::flixel::_system::layer::frames::FlxFrame tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1147)
						::flixel::_system::layer::frames::FrameType tmp52 = tmp51->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1147)
						tmp49 = (tmp52 == ::flixel::_system::layer::frames::FrameType_obj::REGULAR);
					}
					else{
						HX_STACK_LINE(1147)
						tmp49 = false;
					}
					HX_STACK_LINE(1147)
					if ((tmp49)){
						HX_STACK_LINE(1147)
						::flixel::_system::layer::frames::FlxFrame tmp50 = this->frame;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp51 = this->framePixels;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp52 = tmp50->__Field(HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"), hx::paccDynamic )(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1147)
						this->framePixels = tmp52;
					}
					else{
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
						HX_STACK_LINE(1147)
						bool tmp50 = this->flipX;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1147)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1147)
						if ((tmp50)){
							HX_STACK_LINE(1147)
							tmp51 = this->flipY;
						}
						else{
							HX_STACK_LINE(1147)
							tmp51 = false;
						}
						HX_STACK_LINE(1147)
						if ((tmp51)){
							HX_STACK_LINE(1147)
							::flixel::_system::layer::frames::FlxFrame tmp52 = this->frame;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp53 = tmp52->__Field(HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"), hx::paccDynamic )();		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1147)
							frameBmd = tmp53;
						}
						else{
							HX_STACK_LINE(1147)
							bool tmp52 = this->flipX;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1147)
							if ((tmp52)){
								HX_STACK_LINE(1147)
								::flixel::_system::layer::frames::FlxFrame tmp53 = this->frame;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1147)
								::openfl::_legacy::display::BitmapData tmp54 = tmp53->__Field(HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"), hx::paccDynamic )();		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1147)
								frameBmd = tmp54;
							}
							else{
								HX_STACK_LINE(1147)
								bool tmp53 = this->flipY;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1147)
								if ((tmp53)){
									HX_STACK_LINE(1147)
									::flixel::_system::layer::frames::FlxFrame tmp54 = this->frame;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1147)
									::openfl::_legacy::display::BitmapData tmp55 = tmp54->__Field(HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"), hx::paccDynamic )();		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1147)
									frameBmd = tmp55;
								}
								else{
									HX_STACK_LINE(1147)
									::flixel::_system::layer::frames::FlxFrame tmp54 = this->frame;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1147)
									::openfl::_legacy::display::BitmapData tmp55 = tmp54->__Field(HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"), hx::paccDynamic )();		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1147)
									frameBmd = tmp55;
								}
							}
						}
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp52 = this->framePixels;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1147)
						bool tmp53 = (tmp52 == null());		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1147)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1147)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1147)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1147)
						if ((tmp55)){
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp57 = this->framePixels;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1147)
							int tmp60 = tmp59->get_width();		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1147)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1147)
							int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1147)
							int tmp63 = this->frameWidth;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1147)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1147)
							int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1147)
							tmp56 = (tmp62 != tmp65);
						}
						else{
							HX_STACK_LINE(1147)
							tmp56 = true;
						}
						HX_STACK_LINE(1147)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1147)
						bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1147)
						if ((tmp57)){
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp59 = this->framePixels;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1147)
							int tmp61 = tmp60->get_height();		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1147)
							int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1147)
							int tmp63 = this->frameHeight;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1147)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1147)
							tmp58 = (tmp62 != tmp64);
						}
						else{
							HX_STACK_LINE(1147)
							tmp58 = true;
						}
						HX_STACK_LINE(1147)
						if ((tmp58)){
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp59 = this->framePixels;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1147)
							bool tmp60 = (tmp59 != null());		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1147)
							if ((tmp60)){
								HX_STACK_LINE(1147)
								::openfl::_legacy::display::BitmapData tmp61 = this->framePixels;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1147)
								tmp61->dispose();
							}
							HX_STACK_LINE(1147)
							::flixel::_system::layer::frames::FlxFrame tmp61 = this->frame;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1147)
							Float tmp62 = tmp61->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1147)
							int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1147)
							::flixel::_system::layer::frames::FlxFrame tmp64 = this->frame;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1147)
							Float tmp65 = tmp64->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1147)
							int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1147)
							::openfl::_legacy::display::BitmapData tmp67 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp63,tmp66,null(),null(),null());		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1147)
							this->framePixels = tmp67;
						}
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp59 = this->framePixels;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp60 = frameBmd;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1147)
						::openfl::_legacy::geom::Rectangle tmp61 = this->_flashRect;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1147)
						::openfl::_legacy::geom::Point tmp62 = this->_flashPointZero;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1147)
						tmp59->copyPixels(tmp60,tmp61,tmp62,null(),null(),null());
					}
					HX_STACK_LINE(1147)
					bool tmp50 = this->useColorTransform;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1147)
					if ((tmp50)){
						HX_STACK_LINE(1147)
						::openfl::_legacy::display::BitmapData tmp51 = this->framePixels;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1147)
						::openfl::_legacy::geom::Rectangle tmp52 = this->_flashRect;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1147)
						::openfl::_legacy::geom::ColorTransform tmp53 = this->colorTransform;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1147)
						tmp51->colorTransform(tmp52,tmp53);
					}
					HX_STACK_LINE(1147)
					this->dirty = false;
				}
				HX_STACK_LINE(1147)
				tmp40 = this->framePixels;
			}
			HX_STACK_LINE(1147)
			::openfl::_legacy::display::BitmapData frameData = tmp40;		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(1148)
			::openfl::_legacy::geom::Point tmp41 = this->_flashPoint;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1148)
			Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1148)
			int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1148)
			::openfl::_legacy::geom::Point tmp44 = this->_flashPoint;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1148)
			Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1148)
			int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1148)
			int tmp47 = frameData->getPixel32(tmp43,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1148)
			int pixelColor = tmp47;		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1149)
			int tmp48 = (int(pixelColor) >> int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1149)
			int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1149)
			int pixelAlpha = tmp49;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1150)
			int tmp50 = pixelAlpha;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1150)
			Float tmp51 = this->alpha;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1150)
			Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1150)
			int tmp53 = Mask;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1150)
			bool tmp54 = (tmp52 >= tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1150)
			return tmp54;
		}
		HX_STACK_LINE(1141)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",1160,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(1161)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1161)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1161)
		if ((tmp1)){
			HX_STACK_LINE(1163)
			this->loadGraphic(hx::ClassOf< ::flixel::_FlxSprite::GraphicDefault >(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1167)
		bool tmp2 = RunOnCpp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1167)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1167)
		if ((tmp3)){
			HX_STACK_LINE(1169)
			return null();
		}
		HX_STACK_LINE(1173)
		{
			HX_STACK_LINE(1173)
			::flixel::_system::layer::frames::FlxFrame tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1173)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1173)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1173)
			if ((tmp5)){
				HX_STACK_LINE(1173)
				tmp6 = this->dirty;
			}
			else{
				HX_STACK_LINE(1173)
				tmp6 = false;
			}
			HX_STACK_LINE(1173)
			if ((tmp6)){
				HX_STACK_LINE(1173)
				bool tmp7 = this->flipX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1173)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1173)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1173)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1173)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1173)
				if ((tmp10)){
					HX_STACK_LINE(1173)
					bool tmp12 = this->flipY;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1173)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1173)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1173)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1173)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1173)
					tmp11 = !(tmp16);
				}
				else{
					HX_STACK_LINE(1173)
					tmp11 = false;
				}
				HX_STACK_LINE(1173)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1173)
				if ((tmp11)){
					HX_STACK_LINE(1173)
					::flixel::_system::layer::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1173)
					::flixel::_system::layer::frames::FlxFrame tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1173)
					::flixel::_system::layer::frames::FrameType tmp15 = tmp14->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1173)
					tmp12 = (tmp15 == ::flixel::_system::layer::frames::FrameType_obj::REGULAR);
				}
				else{
					HX_STACK_LINE(1173)
					tmp12 = false;
				}
				HX_STACK_LINE(1173)
				if ((tmp12)){
					HX_STACK_LINE(1173)
					::flixel::_system::layer::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp14 = this->framePixels;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp15 = tmp13->__Field(HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"), hx::paccDynamic )(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1173)
					this->framePixels = tmp15;
				}
				else{
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(1173)
					bool tmp13 = this->flipX;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1173)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1173)
					if ((tmp13)){
						HX_STACK_LINE(1173)
						tmp14 = this->flipY;
					}
					else{
						HX_STACK_LINE(1173)
						tmp14 = false;
					}
					HX_STACK_LINE(1173)
					if ((tmp14)){
						HX_STACK_LINE(1173)
						::flixel::_system::layer::frames::FlxFrame tmp15 = this->frame;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp16 = tmp15->__Field(HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1173)
						frameBmd = tmp16;
					}
					else{
						HX_STACK_LINE(1173)
						bool tmp15 = this->flipX;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1173)
						if ((tmp15)){
							HX_STACK_LINE(1173)
							::flixel::_system::layer::frames::FlxFrame tmp16 = this->frame;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1173)
							::openfl::_legacy::display::BitmapData tmp17 = tmp16->__Field(HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1173)
							frameBmd = tmp17;
						}
						else{
							HX_STACK_LINE(1173)
							bool tmp16 = this->flipY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1173)
							if ((tmp16)){
								HX_STACK_LINE(1173)
								::flixel::_system::layer::frames::FlxFrame tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1173)
								::openfl::_legacy::display::BitmapData tmp18 = tmp17->__Field(HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1173)
								frameBmd = tmp18;
							}
							else{
								HX_STACK_LINE(1173)
								::flixel::_system::layer::frames::FlxFrame tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1173)
								::openfl::_legacy::display::BitmapData tmp18 = tmp17->__Field(HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1173)
								frameBmd = tmp18;
							}
						}
					}
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp15 = this->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1173)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1173)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1173)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1173)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1173)
					if ((tmp18)){
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp20 = this->framePixels;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1173)
						int tmp23 = tmp22->get_width();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1173)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1173)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1173)
						int tmp26 = this->frameWidth;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1173)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1173)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1173)
						tmp19 = (tmp25 != tmp28);
					}
					else{
						HX_STACK_LINE(1173)
						tmp19 = true;
					}
					HX_STACK_LINE(1173)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1173)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1173)
					if ((tmp20)){
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp22 = this->framePixels;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1173)
						int tmp24 = tmp23->get_height();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1173)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1173)
						int tmp26 = this->frameHeight;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1173)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1173)
						tmp21 = (tmp25 != tmp27);
					}
					else{
						HX_STACK_LINE(1173)
						tmp21 = true;
					}
					HX_STACK_LINE(1173)
					if ((tmp21)){
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp22 = this->framePixels;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1173)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1173)
						if ((tmp23)){
							HX_STACK_LINE(1173)
							::openfl::_legacy::display::BitmapData tmp24 = this->framePixels;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1173)
							tmp24->dispose();
						}
						HX_STACK_LINE(1173)
						::flixel::_system::layer::frames::FlxFrame tmp24 = this->frame;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1173)
						Float tmp25 = tmp24->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1173)
						int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1173)
						::flixel::_system::layer::frames::FlxFrame tmp27 = this->frame;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1173)
						Float tmp28 = tmp27->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1173)
						int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1173)
						::openfl::_legacy::display::BitmapData tmp30 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp26,tmp29,null(),null(),null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1173)
						this->framePixels = tmp30;
					}
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp22 = this->framePixels;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp23 = frameBmd;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1173)
					::openfl::_legacy::geom::Rectangle tmp24 = this->_flashRect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1173)
					::openfl::_legacy::geom::Point tmp25 = this->_flashPointZero;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1173)
					tmp22->copyPixels(tmp23,tmp24,tmp25,null(),null(),null());
				}
				HX_STACK_LINE(1173)
				bool tmp13 = this->useColorTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1173)
				if ((tmp13)){
					HX_STACK_LINE(1173)
					::openfl::_legacy::display::BitmapData tmp14 = this->framePixels;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1173)
					::openfl::_legacy::geom::Rectangle tmp15 = this->_flashRect;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1173)
					::openfl::_legacy::geom::ColorTransform tmp16 = this->colorTransform;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1173)
					tmp14->colorTransform(tmp15,tmp16);
				}
				HX_STACK_LINE(1173)
				this->dirty = false;
			}
			HX_STACK_LINE(1173)
			this->framePixels;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateFrameData",0x631dd0a5,"flixel.FlxSprite.updateFrameData","flixel/FlxSprite.hx",1181,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1182)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1182)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1182)
		if ((tmp1)){
			HX_STACK_LINE(1184)
			return null();
		}
		HX_STACK_LINE(1187)
		::flixel::util::loaders::CachedGraphics tmp2 = this->cachedGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1187)
		::flixel::util::loaders::TexturePackerData tmp3 = tmp2->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1187)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1187)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1187)
		if ((tmp4)){
			HX_STACK_LINE(1187)
			::flixel::_system::layer::Region tmp6 = this->region;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1187)
			::flixel::_system::layer::Region tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1187)
			int tmp8 = tmp7->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1187)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1187)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1187)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1187)
			if ((tmp11)){
				HX_STACK_LINE(1187)
				::flixel::_system::layer::Region tmp12 = this->region;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1187)
				::flixel::_system::layer::Region tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1187)
				::flixel::_system::layer::Region tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1187)
				int tmp15 = tmp14->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1187)
				tmp5 = (tmp15 == (int)0);
			}
			else{
				HX_STACK_LINE(1187)
				tmp5 = false;
			}
		}
		else{
			HX_STACK_LINE(1187)
			tmp5 = false;
		}
		HX_STACK_LINE(1187)
		if ((tmp5)){
			HX_STACK_LINE(1189)
			::flixel::util::loaders::CachedGraphics tmp6 = this->cachedGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1189)
			::flixel::_system::layer::TileSheetData tmp7 = tmp6->get_tilesheet();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1189)
			::flixel::util::loaders::CachedGraphics tmp8 = this->cachedGraphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1189)
			::flixel::util::loaders::TexturePackerData tmp9 = tmp8->data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1189)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp10 = tmp7->__Field(HX_HCSTRING("getTexturePackerFrames","\x51","\xc2","\x0b","\x33"), hx::paccDynamic )(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1189)
			this->framesData = tmp10;
		}
		else{
			HX_STACK_LINE(1193)
			::flixel::util::loaders::CachedGraphics tmp6 = this->cachedGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1193)
			::flixel::_system::layer::TileSheetData tmp7 = tmp6->get_tilesheet();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1193)
			::flixel::_system::layer::Region tmp8 = this->region;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1193)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp9 = tmp7->__Field(HX_HCSTRING("getSpriteSheetFrames","\x2a","\xde","\x48","\x46"), hx::paccDynamic )(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1193)
			this->framesData = tmp9;
		}
		HX_STACK_LINE(1196)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp6 = this->framesData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1196)
		int tmp7 = tmp6->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1196)
		this->frames = tmp7;
		HX_STACK_LINE(1197)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1197)
		tmp8->set_frameIndex((int)0);
		HX_STACK_LINE(1198)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp9 = this->framesData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1198)
		::flixel::_system::layer::frames::FlxFrame tmp10 = tmp9->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1198)
		this->set_frame(tmp10);
		HX_STACK_LINE(1200)
		{
			HX_STACK_LINE(1200)
			int tmp11 = this->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1200)
			this->set_width(tmp11);
			HX_STACK_LINE(1200)
			int tmp12 = this->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1200)
			this->set_height(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFrameData,(void))

::openfl::_legacy::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_FRAME("flixel.FlxSprite","getFlxFrameBitmapData",0xc4eba061,"flixel.FlxSprite.getFlxFrameBitmapData","flixel/FlxSprite.hx",1207,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1208)
	::flixel::_system::layer::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1208)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1208)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1208)
	if ((tmp1)){
		HX_STACK_LINE(1208)
		tmp2 = this->dirty;
	}
	else{
		HX_STACK_LINE(1208)
		tmp2 = false;
	}
	HX_STACK_LINE(1208)
	if ((tmp2)){
		HX_STACK_LINE(1210)
		bool tmp3 = this->flipX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1210)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1210)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1210)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1210)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1210)
		if ((tmp6)){
			HX_STACK_LINE(1210)
			bool tmp8 = this->flipY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1210)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1210)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1210)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1210)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1210)
			tmp7 = !(tmp12);
		}
		else{
			HX_STACK_LINE(1210)
			tmp7 = false;
		}
		HX_STACK_LINE(1210)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1210)
		if ((tmp7)){
			HX_STACK_LINE(1210)
			::flixel::_system::layer::frames::FlxFrame tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1210)
			::flixel::_system::layer::frames::FlxFrame tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1210)
			::flixel::_system::layer::frames::FrameType tmp11 = tmp10->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1210)
			tmp8 = (tmp11 == ::flixel::_system::layer::frames::FrameType_obj::REGULAR);
		}
		else{
			HX_STACK_LINE(1210)
			tmp8 = false;
		}
		HX_STACK_LINE(1210)
		if ((tmp8)){
			HX_STACK_LINE(1212)
			::flixel::_system::layer::frames::FlxFrame tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1212)
			::openfl::_legacy::display::BitmapData tmp10 = this->framePixels;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1212)
			::openfl::_legacy::display::BitmapData tmp11 = tmp9->__Field(HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"), hx::paccDynamic )(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1212)
			this->framePixels = tmp11;
		}
		else{
			HX_STACK_LINE(1216)
			::openfl::_legacy::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
			HX_STACK_LINE(1218)
			bool tmp9 = this->flipX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1218)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1218)
			if ((tmp9)){
				HX_STACK_LINE(1218)
				tmp10 = this->flipY;
			}
			else{
				HX_STACK_LINE(1218)
				tmp10 = false;
			}
			HX_STACK_LINE(1218)
			if ((tmp10)){
				HX_STACK_LINE(1220)
				::flixel::_system::layer::frames::FlxFrame tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1220)
				::openfl::_legacy::display::BitmapData tmp12 = tmp11->__Field(HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				frameBmd = tmp12;
			}
			else{
				HX_STACK_LINE(1222)
				bool tmp11 = this->flipX;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1222)
				if ((tmp11)){
					HX_STACK_LINE(1224)
					::flixel::_system::layer::frames::FlxFrame tmp12 = this->frame;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1224)
					::openfl::_legacy::display::BitmapData tmp13 = tmp12->__Field(HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1224)
					frameBmd = tmp13;
				}
				else{
					HX_STACK_LINE(1226)
					bool tmp12 = this->flipY;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1226)
					if ((tmp12)){
						HX_STACK_LINE(1228)
						::flixel::_system::layer::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1228)
						::openfl::_legacy::display::BitmapData tmp14 = tmp13->__Field(HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1228)
						frameBmd = tmp14;
					}
					else{
						HX_STACK_LINE(1232)
						::flixel::_system::layer::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1232)
						::openfl::_legacy::display::BitmapData tmp14 = tmp13->__Field(HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1232)
						frameBmd = tmp14;
					}
				}
			}
			HX_STACK_LINE(1235)
			::openfl::_legacy::display::BitmapData tmp11 = this->framePixels;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1235)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1235)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1235)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1235)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1235)
			if ((tmp14)){
				HX_STACK_LINE(1235)
				::openfl::_legacy::display::BitmapData tmp16 = this->framePixels;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1235)
				::openfl::_legacy::display::BitmapData tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1235)
				::openfl::_legacy::display::BitmapData tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1235)
				int tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1235)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1235)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1235)
				int tmp22 = this->frameWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1235)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1235)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1235)
				tmp15 = (tmp21 != tmp24);
			}
			else{
				HX_STACK_LINE(1235)
				tmp15 = true;
			}
			HX_STACK_LINE(1235)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1235)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1235)
			if ((tmp16)){
				HX_STACK_LINE(1235)
				::openfl::_legacy::display::BitmapData tmp18 = this->framePixels;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1235)
				::openfl::_legacy::display::BitmapData tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1235)
				int tmp20 = tmp19->get_height();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1235)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1235)
				int tmp22 = this->frameHeight;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1235)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1235)
				tmp17 = (tmp21 != tmp23);
			}
			else{
				HX_STACK_LINE(1235)
				tmp17 = true;
			}
			HX_STACK_LINE(1235)
			if ((tmp17)){
				HX_STACK_LINE(1237)
				::openfl::_legacy::display::BitmapData tmp18 = this->framePixels;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1237)
				bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1237)
				if ((tmp19)){
					HX_STACK_LINE(1238)
					::openfl::_legacy::display::BitmapData tmp20 = this->framePixels;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1238)
					tmp20->dispose();
				}
				HX_STACK_LINE(1240)
				::flixel::_system::layer::frames::FlxFrame tmp20 = this->frame;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1240)
				Float tmp21 = tmp20->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1240)
				int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1240)
				::flixel::_system::layer::frames::FlxFrame tmp23 = this->frame;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1240)
				Float tmp24 = tmp23->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1240)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1240)
				::openfl::_legacy::display::BitmapData tmp26 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp22,tmp25,null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1240)
				this->framePixels = tmp26;
			}
			HX_STACK_LINE(1243)
			::openfl::_legacy::display::BitmapData tmp18 = this->framePixels;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1243)
			::openfl::_legacy::display::BitmapData tmp19 = frameBmd;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1243)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1243)
			::openfl::_legacy::geom::Point tmp21 = this->_flashPointZero;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1243)
			tmp18->copyPixels(tmp19,tmp20,tmp21,null(),null(),null());
		}
		HX_STACK_LINE(1246)
		bool tmp9 = this->useColorTransform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1246)
		if ((tmp9)){
			HX_STACK_LINE(1248)
			::openfl::_legacy::display::BitmapData tmp10 = this->framePixels;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1248)
			::openfl::_legacy::geom::Rectangle tmp11 = this->_flashRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1248)
			::openfl::_legacy::geom::ColorTransform tmp12 = this->colorTransform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1248)
			tmp10->colorTransform(tmp11,tmp12);
		}
		HX_STACK_LINE(1251)
		this->dirty = false;
	}
	HX_STACK_LINE(1255)
	::openfl::_legacy::display::BitmapData tmp3 = this->framePixels;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1255)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

::flixel::util::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",1265,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(1266)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1266)
	if ((tmp)){
		HX_STACK_LINE(1268)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1268)
		{
			HX_STACK_LINE(1268)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1268)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1268)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1268)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1268)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1268)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1268)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1268)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(1268)
			point1->_inPool = false;
			HX_STACK_LINE(1268)
			tmp1 = point1;
		}
		HX_STACK_LINE(1268)
		point = tmp1;
	}
	HX_STACK_LINE(1270)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1270)
	int tmp2 = this->frameWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1270)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1270)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1270)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1270)
	int tmp6 = this->frameHeight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1270)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1270)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1270)
	::flixel::util::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1270)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

Void FlxSprite_obj::resetFrameBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameBitmapDatas",0x2832a393,"flixel.FlxSprite.resetFrameBitmapDatas","flixel/FlxSprite.hx",1278,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1279)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1279)
		::flixel::_system::layer::TileSheetData tmp1 = tmp->get_tilesheet();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1279)
		tmp1->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmapDatas,(void))

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1290,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1291)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1291)
	if ((tmp)){
		HX_STACK_LINE(1293)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1293)
		Camera = tmp1;
	}
	HX_STACK_LINE(1296)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1296)
	::flixel::util::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1296)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1296)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1296)
	Float tmp5 = Camera->scroll->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1296)
	::flixel::util::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1296)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1296)
	Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1296)
	Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1296)
	Float minX = tmp9;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1297)
	Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1297)
	::flixel::util::FlxPoint tmp11 = this->offset;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1297)
	Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1297)
	Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1297)
	Float tmp14 = Camera->scroll->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1297)
	::flixel::util::FlxPoint tmp15 = this->scrollFactor;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1297)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1297)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1297)
	Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1297)
	Float minY = tmp18;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1298)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1299)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1301)
	Float tmp19 = this->angle;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1301)
	bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1301)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1301)
	bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1301)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1301)
	if ((tmp22)){
		HX_STACK_LINE(1301)
		Float tmp24 = this->bakedRotationAngle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1301)
		Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1301)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1301)
		tmp23 = (tmp26 > (int)0);
	}
	else{
		HX_STACK_LINE(1301)
		tmp23 = true;
	}
	HX_STACK_LINE(1301)
	bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1301)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1301)
	if ((tmp24)){
		HX_STACK_LINE(1301)
		::flixel::util::FlxPoint tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1301)
		::flixel::util::FlxPoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1301)
		::flixel::util::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1301)
		Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1301)
		tmp25 = (tmp29 == (int)1);
	}
	else{
		HX_STACK_LINE(1301)
		tmp25 = false;
	}
	HX_STACK_LINE(1301)
	bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1301)
	if ((tmp25)){
		HX_STACK_LINE(1301)
		::flixel::util::FlxPoint tmp27 = this->scale;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1301)
		::flixel::util::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1301)
		Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1301)
		tmp26 = (tmp29 == (int)1);
	}
	else{
		HX_STACK_LINE(1301)
		tmp26 = false;
	}
	HX_STACK_LINE(1301)
	if ((tmp26)){
		HX_STACK_LINE(1303)
		Float tmp27 = minX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1303)
		int tmp28 = this->frameWidth;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1303)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1303)
		maxX = tmp29;
		HX_STACK_LINE(1304)
		Float tmp30 = minY;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1304)
		int tmp31 = this->frameHeight;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1304)
		Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1304)
		maxY = tmp32;
	}
	else{
		HX_STACK_LINE(1308)
		Float tmp27 = this->_halfWidth;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1308)
		Float radiusX = tmp27;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1309)
		Float tmp28 = this->_halfHeight;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1309)
		Float radiusY = tmp28;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1311)
		::flixel::util::FlxPoint tmp29 = this->origin;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1311)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1311)
		Float tmp31 = this->_halfWidth;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1311)
		bool tmp32 = (tmp30 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1311)
		if ((tmp32)){
			HX_STACK_LINE(1313)
			Float tmp33 = this->_halfWidth;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1313)
			::flixel::util::FlxPoint tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1313)
			Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1313)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1313)
			Float tmp37 = ::Math_obj::abs(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1313)
			radiusX = tmp37;
		}
		else{
			HX_STACK_LINE(1317)
			::flixel::util::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1317)
			Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1317)
			::flixel::util::FlxPoint tmp35 = this->origin;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1317)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1317)
			Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1317)
			Float sox = tmp37;		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1318)
			::flixel::util::FlxPoint tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1318)
			Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1318)
			int tmp40 = this->frameWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1318)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1318)
			Float sfw = tmp41;		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1319)
			Float tmp42 = sox;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1319)
			Float tmp43 = ::Math_obj::abs(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1319)
			Float x1 = tmp43;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1320)
			Float tmp44 = (sfw - sox);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1320)
			Float tmp45 = ::Math_obj::abs(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1320)
			Float x2 = tmp45;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1321)
			Float tmp46 = x2;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1321)
			Float tmp47 = x1;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1321)
			Float tmp48 = ::Math_obj::max(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1321)
			radiusX = tmp48;
		}
		HX_STACK_LINE(1324)
		::flixel::util::FlxPoint tmp33 = this->origin;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1324)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1324)
		Float tmp35 = this->_halfHeight;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1324)
		bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1324)
		if ((tmp36)){
			HX_STACK_LINE(1326)
			Float tmp37 = this->_halfHeight;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1326)
			::flixel::util::FlxPoint tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1326)
			Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1326)
			Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1326)
			Float tmp41 = ::Math_obj::abs(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1326)
			radiusY = tmp41;
		}
		else{
			HX_STACK_LINE(1330)
			::flixel::util::FlxPoint tmp37 = this->scale;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1330)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1330)
			::flixel::util::FlxPoint tmp39 = this->origin;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1330)
			Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1330)
			Float tmp41 = (tmp38 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1330)
			Float soy = tmp41;		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1331)
			::flixel::util::FlxPoint tmp42 = this->scale;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1331)
			Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1331)
			int tmp44 = this->frameHeight;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1331)
			Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1331)
			Float sfh = tmp45;		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1332)
			Float tmp46 = soy;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1332)
			Float tmp47 = ::Math_obj::abs(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1332)
			Float y1 = tmp47;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1333)
			Float tmp48 = (sfh - soy);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1333)
			Float tmp49 = ::Math_obj::abs(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1333)
			Float y2 = tmp49;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1334)
			Float tmp50 = y2;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1334)
			Float tmp51 = y1;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1334)
			Float tmp52 = ::Math_obj::max(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1334)
			radiusY = tmp52;
		}
		HX_STACK_LINE(1337)
		Float tmp37 = radiusX;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1337)
		Float tmp38 = radiusY;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1337)
		Float tmp39 = ::Math_obj::max(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1337)
		Float radius = tmp39;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1338)
		hx::MultEq(radius,((Float)1.41421356237));
		HX_STACK_LINE(1340)
		::flixel::util::FlxPoint tmp40 = this->origin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1340)
		hx::AddEq(minX,tmp40->x);
		HX_STACK_LINE(1341)
		Float tmp41 = (minX + radius);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1341)
		maxX = tmp41;
		HX_STACK_LINE(1342)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1344)
		::flixel::util::FlxPoint tmp42 = this->origin;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1344)
		hx::AddEq(minY,tmp42->y);
		HX_STACK_LINE(1345)
		Float tmp43 = (minY + radius);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1345)
		maxY = tmp43;
		HX_STACK_LINE(1346)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1349)
	bool tmp27 = (maxX < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1349)
	bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1349)
	bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1349)
	if ((tmp28)){
		HX_STACK_LINE(1349)
		tmp29 = (minX > Camera->width);
	}
	else{
		HX_STACK_LINE(1349)
		tmp29 = true;
	}
	HX_STACK_LINE(1349)
	if ((tmp29)){
		HX_STACK_LINE(1350)
		return false;
	}
	HX_STACK_LINE(1352)
	bool tmp30 = (maxY < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(1352)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(1352)
	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(1352)
	if ((tmp31)){
		HX_STACK_LINE(1352)
		tmp32 = (minY > Camera->height);
	}
	else{
		HX_STACK_LINE(1352)
		tmp32 = true;
	}
	HX_STACK_LINE(1352)
	if ((tmp32)){
		HX_STACK_LINE(1353)
		return false;
	}
	HX_STACK_LINE(1355)
	return true;
}


bool FlxSprite_obj::isSimpleRender( ){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1363,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1367)
	Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1367)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1367)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1367)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1367)
	if ((tmp2)){
		HX_STACK_LINE(1367)
		::flixel::_system::layer::frames::FlxFrame tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1367)
		::flixel::_system::layer::frames::FlxFrame tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1367)
		::flixel::_system::layer::frames::FlxFrame tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1367)
		Float tmp7 = tmp6->__Field(HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1367)
		tmp3 = (tmp7 == (int)0);
	}
	else{
		HX_STACK_LINE(1367)
		tmp3 = false;
	}
	HX_STACK_LINE(1367)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1367)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1367)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1367)
	if ((tmp5)){
		HX_STACK_LINE(1367)
		Float tmp7 = this->bakedRotationAngle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1367)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1367)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1367)
		tmp6 = (tmp9 > (int)0);
	}
	else{
		HX_STACK_LINE(1367)
		tmp6 = true;
	}
	HX_STACK_LINE(1367)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1367)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1367)
	if ((tmp7)){
		HX_STACK_LINE(1367)
		::flixel::util::FlxPoint tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1367)
		::flixel::util::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1367)
		::flixel::util::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1367)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1367)
		tmp8 = (tmp12 == (int)1);
	}
	else{
		HX_STACK_LINE(1367)
		tmp8 = false;
	}
	HX_STACK_LINE(1367)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1367)
	if ((tmp8)){
		HX_STACK_LINE(1367)
		::flixel::util::FlxPoint tmp10 = this->scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1367)
		::flixel::util::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1367)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1367)
		tmp9 = (tmp12 == (int)1);
	}
	else{
		HX_STACK_LINE(1367)
		tmp9 = false;
	}
	HX_STACK_LINE(1367)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isSimpleRender,return )

Void FlxSprite_obj::setFacingFlip( int Direction,bool FlipX,bool FlipY){
{
		HX_STACK_FRAME("flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1382,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Direction,"Direction")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_ARG(FlipY,"FlipY")
		HX_STACK_LINE(1383)
		::haxe::ds::IntMap tmp = this->_facingFlip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1383)
		int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( bool &FlipY,bool &FlipX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1383,0x0384bffa)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , FlipX,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , FlipY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1383)
		Dynamic tmp2 = _Function_1_1::Block(FlipY,FlipX);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1383)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

::openfl::_legacy::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1390,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1391)
	::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1391)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1391)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

::openfl::_legacy::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::_legacy::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1395,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1396)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1396)
	::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1396)
	::String tmp2 = tmp->__Field(HX_HCSTRING("getCacheKeyFor","\x96","\x01","\x18","\xe6"), hx::paccDynamic )(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1396)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1398)
	bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1398)
	if ((tmp3)){
		HX_STACK_LINE(1400)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1400)
		::String tmp5 = tmp4->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1400)
		key = tmp5;
		HX_STACK_LINE(1401)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1401)
		::openfl::_legacy::display::BitmapData tmp7 = Pixels;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1401)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1401)
		::flixel::util::loaders::CachedGraphics tmp9 = tmp6->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp7,(int)0,(int)0,(int)1,(int)1,false,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1401)
		this->set_cachedGraphics(tmp9);
		HX_STACK_LINE(1402)
		::flixel::util::loaders::CachedGraphics tmp10 = this->cachedGraphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1402)
		tmp10->set_destroyOnNoUse(true);
	}
	else{
		HX_STACK_LINE(1406)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1406)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1406)
		::flixel::util::loaders::CachedGraphics tmp6 = tmp4->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1406)
		this->set_cachedGraphics(tmp6);
	}
	HX_STACK_LINE(1409)
	::flixel::_system::layer::Region tmp4 = this->region;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1409)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1409)
	if ((tmp5)){
		HX_STACK_LINE(1411)
		::flixel::_system::layer::Region tmp6 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1411)
		this->region = tmp6;
	}
	HX_STACK_LINE(1414)
	::flixel::_system::layer::Region tmp6 = this->region;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1414)
	tmp6->__FieldRef(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05")) = (int)0;
	HX_STACK_LINE(1415)
	::flixel::_system::layer::Region tmp7 = this->region;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1415)
	tmp7->__FieldRef(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05")) = (int)0;
	HX_STACK_LINE(1416)
	::flixel::util::loaders::CachedGraphics tmp8 = this->cachedGraphics;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1416)
	int tmp9 = tmp8->bitmap->get_width();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1416)
	::flixel::_system::layer::Region tmp10 = this->region;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1416)
	int tmp11 = tmp10->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1416)
	::flixel::_system::layer::Region tmp12 = this->region;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1416)
	tmp12->__FieldRef(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")) = tmp11;
	HX_STACK_LINE(1417)
	::flixel::util::loaders::CachedGraphics tmp13 = this->cachedGraphics;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1417)
	int tmp14 = tmp13->bitmap->get_height();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1417)
	::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1417)
	int tmp16 = tmp15->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1417)
	::flixel::_system::layer::Region tmp17 = this->region;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1417)
	tmp17->__FieldRef(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")) = tmp16;
	HX_STACK_LINE(1418)
	::flixel::_system::layer::Region tmp18 = this->region;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1418)
	tmp18->__FieldRef(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2")) = (int)0;
	HX_STACK_LINE(1419)
	::flixel::_system::layer::Region tmp19 = this->region;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1419)
	tmp19->__FieldRef(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2")) = (int)0;
	HX_STACK_LINE(1421)
	::flixel::util::loaders::CachedGraphics tmp20 = this->cachedGraphics;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1421)
	int tmp21 = tmp20->bitmap->get_width();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1421)
	int tmp22 = this->frameWidth = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1421)
	this->set_width(tmp22);
	HX_STACK_LINE(1422)
	::flixel::util::loaders::CachedGraphics tmp23 = this->cachedGraphics;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1422)
	int tmp24 = tmp23->bitmap->get_height();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1422)
	int tmp25 = this->frameHeight = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1422)
	this->set_height(tmp25);
	HX_STACK_LINE(1423)
	::flixel::animation::FlxAnimationController tmp26 = this->animation;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1423)
	tmp26->destroyAnimations();
	HX_STACK_LINE(1425)
	this->updateFrameData();
	HX_STACK_LINE(1426)
	this->resetHelpers();
	HX_STACK_LINE(1430)
	{
		HX_STACK_LINE(1430)
		::flixel::util::loaders::CachedGraphics tmp27 = this->cachedGraphics;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1430)
		::flixel::_system::layer::TileSheetData tmp28 = tmp27->get_tilesheet();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1430)
		tmp28->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
	}
	HX_STACK_LINE(1432)
	::openfl::_legacy::display::BitmapData tmp27 = Pixels;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1432)
	return tmp27;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flixel::_system::layer::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::_system::layer::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1436,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1437)
	this->frame = Value;
	HX_STACK_LINE(1438)
	::flixel::_system::layer::frames::FlxFrame tmp = this->frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1438)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1438)
	if ((tmp1)){
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1440)
			::flixel::_system::layer::frames::FlxFrame tmp2 = this->frame;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1440)
			Float tmp3 = tmp2->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1440)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1440)
			this->frameWidth = tmp4;
			HX_STACK_LINE(1440)
			::flixel::_system::layer::frames::FlxFrame tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1440)
			Float tmp6 = tmp5->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1440)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1440)
			this->frameHeight = tmp7;
			HX_STACK_LINE(1440)
			{
				HX_STACK_LINE(1440)
				::openfl::_legacy::geom::Rectangle tmp8 = this->_flashRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1440)
				tmp8->x = (int)0;
				HX_STACK_LINE(1440)
				::openfl::_legacy::geom::Rectangle tmp9 = this->_flashRect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1440)
				tmp9->y = (int)0;
				HX_STACK_LINE(1440)
				int tmp10 = this->frameWidth;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1440)
				::openfl::_legacy::geom::Rectangle tmp11 = this->_flashRect;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1440)
				tmp11->width = tmp10;
				HX_STACK_LINE(1440)
				int tmp12 = this->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1440)
				::openfl::_legacy::geom::Rectangle tmp13 = this->_flashRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1440)
				tmp13->height = tmp12;
			}
		}
		HX_STACK_LINE(1441)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1443)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp2 = this->framesData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1443)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1443)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1443)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1443)
		if ((tmp4)){
			HX_STACK_LINE(1443)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp6 = this->framesData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1443)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1443)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1443)
			tmp5 = (tmp8->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ) != null());
		}
		else{
			HX_STACK_LINE(1443)
			tmp5 = false;
		}
		HX_STACK_LINE(1443)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1443)
		if ((tmp5)){
			HX_STACK_LINE(1443)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp7 = this->framesData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1443)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1443)
			int tmp9 = tmp8->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1443)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1443)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(1443)
			tmp6 = false;
		}
		HX_STACK_LINE(1443)
		if ((tmp6)){
			HX_STACK_LINE(1445)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp7 = this->framesData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1445)
			::flixel::_system::layer::frames::FlxFrame tmp8 = tmp7->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1445)
			this->frame = tmp8;
			HX_STACK_LINE(1446)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1448)
	::flixel::_system::layer::frames::FlxFrame tmp2 = this->frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1448)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_FRAME("flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1452,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(1453)
	::haxe::ds::IntMap tmp = this->_facingFlip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1453)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1453)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1453)
	Dynamic flip = tmp2;		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(1454)
	bool tmp3 = (flip != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1454)
	if ((tmp3)){
		HX_STACK_LINE(1456)
		bool tmp4 = flip->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1456)
		this->set_flipX(tmp4);
		HX_STACK_LINE(1457)
		bool tmp5 = flip->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1457)
		this->set_flipY(tmp5);
	}
	HX_STACK_LINE(1460)
	int tmp4 = this->facing = Direction;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1460)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1464,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1465)
	bool tmp = (Alpha > (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1465)
	if ((tmp)){
		HX_STACK_LINE(1467)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1469)
	bool tmp1 = (Alpha < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1469)
	if ((tmp1)){
		HX_STACK_LINE(1471)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1473)
	Float tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1473)
	Float tmp3 = this->alpha;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1473)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1473)
	if ((tmp4)){
		HX_STACK_LINE(1475)
		Float tmp5 = this->alpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1475)
		return tmp5;
	}
	HX_STACK_LINE(1477)
	this->alpha = Alpha;
	HX_STACK_LINE(1478)
	this->updateColorTransform();
	HX_STACK_LINE(1479)
	Float tmp5 = this->alpha;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1479)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1483,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1484)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1485)
	int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1485)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1485)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1485)
	if ((tmp2)){
		HX_STACK_LINE(1487)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1487)
		return tmp3;
	}
	HX_STACK_LINE(1489)
	this->color = Color;
	HX_STACK_LINE(1490)
	this->updateColorTransform();
	HX_STACK_LINE(1493)
	int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1493)
	int tmp4 = (int(tmp3) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1493)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1493)
	this->_red = tmp5;
	HX_STACK_LINE(1494)
	int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1494)
	int tmp7 = (int(tmp6) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1494)
	int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1494)
	Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1494)
	this->_green = tmp9;
	HX_STACK_LINE(1495)
	int tmp10 = this->color;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1495)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1495)
	Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1495)
	this->_blue = tmp12;
	HX_STACK_LINE(1496)
	int tmp13 = this->color;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1496)
	bool tmp14 = (tmp13 < (int)16777215);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1496)
	this->isColored = tmp14;
	HX_STACK_LINE(1499)
	int tmp15 = this->color;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1499)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1503,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1504)
	Float tmp = this->angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1504)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1504)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1504)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1504)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1504)
	if ((tmp3)){
		HX_STACK_LINE(1504)
		tmp4 = this->_angleChanged;
	}
	else{
		HX_STACK_LINE(1504)
		tmp4 = true;
	}
	HX_STACK_LINE(1504)
	this->_angleChanged = tmp4;
	HX_STACK_LINE(1505)
	Float tmp5 = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1505)
	Float tmp6 = this->super::set_angle(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1505)
	return tmp6;
}


::openfl::_legacy::display::BlendMode FlxSprite_obj::set_blend( ::openfl::_legacy::display::BlendMode Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1509,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1511)
	bool tmp = (Value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1511)
	if ((tmp)){
		HX_STACK_LINE(1513)
		switch( (int)(Value->__Index())){
			case (int)7: {
				HX_STACK_LINE(1516)
				this->_blendInt = (int)65536;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1519)
				this->_blendInt = (int)131072;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1521)
				this->_blendInt = (int)262144;
			}
			;break;
			default: {
				HX_STACK_LINE(1524)
				this->_blendInt = (int)0;
			}
		}
	}
	else{
		HX_STACK_LINE(1529)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1533)
	::openfl::_legacy::display::BlendMode tmp1 = this->blend = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1533)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flixel::util::loaders::CachedGraphics FlxSprite_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_cachedGraphics",0x92ade373,"flixel.FlxSprite.set_cachedGraphics","flixel/FlxSprite.hx",1541,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1542)
	::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1542)
	::flixel::util::loaders::CachedGraphics oldCached = tmp;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(1544)
	::flixel::util::loaders::CachedGraphics tmp1 = this->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1544)
	::flixel::util::loaders::CachedGraphics tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1544)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1544)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1544)
	if ((tmp3)){
		HX_STACK_LINE(1544)
		tmp4 = (Value != null());
	}
	else{
		HX_STACK_LINE(1544)
		tmp4 = false;
	}
	HX_STACK_LINE(1544)
	if ((tmp4)){
		HX_STACK_LINE(1546)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1546)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1546)
		int tmp5 = (_g1 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1546)
		_g->set_useCount(tmp5);
		HX_STACK_LINE(1546)
		_g1;
	}
	HX_STACK_LINE(1549)
	bool tmp5 = (oldCached != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1549)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1549)
	if ((tmp5)){
		HX_STACK_LINE(1549)
		tmp6 = (oldCached != Value);
	}
	else{
		HX_STACK_LINE(1549)
		tmp6 = false;
	}
	HX_STACK_LINE(1549)
	if ((tmp6)){
		HX_STACK_LINE(1551)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1551)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1551)
		int tmp7 = (_g1 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1551)
		_g->set_useCount(tmp7);
		HX_STACK_LINE(1551)
		_g1;
	}
	HX_STACK_LINE(1554)
	::flixel::util::loaders::CachedGraphics tmp7 = this->cachedGraphics = Value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1554)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_cachedGraphics,return )

bool FlxSprite_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1558,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1560)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1560)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1560)
	if ((tmp)){
		HX_STACK_LINE(1560)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(1560)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(1560)
	this->_facingHorizontalMult = tmp1;
	HX_STACK_LINE(1562)
	bool tmp2 = this->flipX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1562)
	bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1562)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1562)
	if ((tmp4)){
		HX_STACK_LINE(1564)
		this->dirty = true;
	}
	HX_STACK_LINE(1566)
	bool tmp5 = this->flipX = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1566)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1570,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1572)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1572)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1572)
	if ((tmp)){
		HX_STACK_LINE(1572)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(1572)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(1572)
	this->_facingVerticalMult = tmp1;
	HX_STACK_LINE(1574)
	bool tmp2 = this->flipY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1574)
	bool tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1574)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1574)
	if ((tmp4)){
		HX_STACK_LINE(1576)
		this->dirty = true;
	}
	HX_STACK_LINE(1578)
	bool tmp5 = this->flipY = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1578)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )


FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == hx::paccAlways) return get_pixels(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return _facingFlip; }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return setFacingFlip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return setGraphicSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return setColorTransform_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return bakedRotationAngle; }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return getGraphicMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return _facingVerticalMult; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return _facingHorizontalMult; }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"resetFrameBitmapDatas") ) { return resetFrameBitmapDatas_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicFromTexture") ) { return loadGraphicFromTexture_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"loadRotatedGraphicFromTexture") ) { return loadRotatedGraphicFromTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue);frame=inValue.Cast< ::flixel::_system::layer::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == hx::paccAlways) return set_flipX(inValue);flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == hx::paccAlways) return set_flipY(inValue);flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return set_blend(inValue);blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == hx::paccAlways) return set_pixels(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::_system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == hx::paccAlways) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isColored") ) { isColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::_system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp == hx::paccAlways) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("isColored","\xb8","\xa5","\x64","\xf3"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"));
	outFields->push(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	outFields->push(HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4"));
	outFields->push(HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"));
	outFields->push(HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72"));
	outFields->push(HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"));
	outFields->push(HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"));
	outFields->push(HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51"));
	outFields->push(HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86"));
	outFields->push(HX_HCSTRING("_blendInt","\x7d","\x1c","\x64","\xb2"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7"));
	outFields->push(HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"));
	outFields->push(HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"));
	outFields->push(HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8"));
	outFields->push(HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f"));
	outFields->push(HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2"));
	outFields->push(HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxSprite_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxSprite_obj,framePixels),HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,isColored),HX_HCSTRING("isColored","\xb8","\xa5","\x64","\xf3")},
	{hx::fsObject /*::flixel::_system::layer::frames::FlxFrame*/ ,(int)offsetof(FlxSprite_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::flixel::_system::layer::Region*/ ,(int)offsetof(FlxSprite_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{hx::fsObject /*::flixel::_system::layer::frames::FlxSpriteFrames*/ ,(int)offsetof(FlxSprite_obj,framesData),HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxSprite_obj,cachedGraphics),HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxSprite_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_red),HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_green),HX_HCSTRING("_green","\x04","\x56","\xd4","\x95")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_blue),HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_blendInt),HX_HCSTRING("_blendInt","\x7d","\x1c","\x64","\xb2")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(FlxSprite_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_halfWidth),HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_halfHeight),HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("framePixels","\x3a","\xbb","\xf1","\x6a"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("isColored","\xb8","\xa5","\x64","\xf3"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"),
	HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4"),
	HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"),
	HX_HCSTRING("bakedRotationAngle","\x8a","\xd1","\x9c","\x9b"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("useColorTransform","\x30","\xe6","\xec","\x72"),
	HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"),
	HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"),
	HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"),
	HX_HCSTRING("_facingHorizontalMult","\x8d","\x29","\xa1","\x51"),
	HX_HCSTRING("_facingVerticalMult","\xdf","\x11","\x0c","\x86"),
	HX_HCSTRING("_blendInt","\x7d","\x1c","\x64","\xb2"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashRect2","\xdd","\x9b","\x56","\xd7"),
	HX_HCSTRING("_flashPointZero","\x67","\x14","\x7d","\xfb"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_halfWidth","\x14","\x6f","\xd7","\x6a"),
	HX_HCSTRING("_halfHeight","\x19","\x3b","\xf9","\xc7"),
	HX_HCSTRING("_sinAngle","\xfa","\x54","\xde","\xb8"),
	HX_HCSTRING("_cosAngle","\x6b","\xc9","\x00","\x1f"),
	HX_HCSTRING("_angleChanged","\x40","\x98","\x5c","\xb2"),
	HX_HCSTRING("_facingFlip","\x06","\xe0","\x9c","\x02"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("loadGraphicFromSprite","\xd1","\x7c","\x73","\x38"),
	HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"),
	HX_HCSTRING("loadRotatedGraphic","\xc5","\x14","\x74","\x62"),
	HX_HCSTRING("loadGraphicFromTexture","\x8f","\xda","\xef","\x6b"),
	HX_HCSTRING("loadRotatedGraphicFromTexture","\xcc","\x8b","\x3f","\x32"),
	HX_HCSTRING("makeGraphic","\x5a","\x82","\x11","\xb8"),
	HX_HCSTRING("resetSize","\x30","\xaa","\x3f","\x92"),
	HX_HCSTRING("resetFrameSize","\xbf","\xc3","\x44","\x94"),
	HX_HCSTRING("resetSizeFromFrame","\x13","\xd2","\x50","\x8c"),
	HX_HCSTRING("setGraphicSize","\x07","\xd7","\xf8","\x2d"),
	HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"),
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("drawFrame","\x89","\xad","\x8e","\xce"),
	HX_HCSTRING("centerOffsets","\x2b","\xa0","\xb2","\xc1"),
	HX_HCSTRING("centerOrigin","\x9b","\x41","\x36","\x0f"),
	HX_HCSTRING("replaceColor","\x8f","\x5c","\xeb","\x3d"),
	HX_HCSTRING("setColorTransform","\xcb","\x5e","\x21","\x43"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("pixelsOverlapPoint","\x16","\x82","\x44","\xe0"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("updateFrameData","\xae","\xe5","\x6e","\x7f"),
	HX_HCSTRING("getFlxFrameBitmapData","\x2a","\xa2","\xfb","\x2c"),
	HX_HCSTRING("getGraphicMidpoint","\x9a","\xb4","\xdd","\x57"),
	HX_HCSTRING("resetFrameBitmapDatas","\x5c","\xa5","\x42","\x90"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isSimpleRender","\x32","\xf4","\x2a","\x47"),
	HX_HCSTRING("setFacingFlip","\x29","\x51","\x8b","\xd1"),
	HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	HX_HCSTRING("set_facing","\x57","\x4d","\x0a","\xd8"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("set_cachedGraphics","\x0a","\xda","\x6a","\x26"),
	HX_HCSTRING("set_flipX","\x6e","\x8d","\x8c","\x29"),
	HX_HCSTRING("set_flipY","\x6f","\x8d","\x8c","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxSprite","\x65","\xad","\xeb","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxSprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSprite_obj >;
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
