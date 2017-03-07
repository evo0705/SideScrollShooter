#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",28,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(264)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(256)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(252)
	this->_fxShakeDuration = ((Float)0);
	HX_STACK_LINE(248)
	this->_fxShakeIntensity = ((Float)0);
	HX_STACK_LINE(244)
	this->_fxFadeAlpha = ((Float)0);
	HX_STACK_LINE(240)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(236)
	this->_fxFadeIn = false;
	HX_STACK_LINE(232)
	this->_fxFadeDuration = ((Float)0);
	HX_STACK_LINE(220)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(216)
	this->_fxFlashAlpha = ((Float)0);
	HX_STACK_LINE(212)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(208)
	this->_fxFlashDuration = ((Float)0);
	HX_STACK_LINE(204)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(182)
	this->antialiasing = false;
	HX_STACK_LINE(177)
	this->color = (int)-1;
	HX_STACK_LINE(172)
	this->angle = ((Float)0);
	HX_STACK_LINE(167)
	this->alpha = ((Float)1);
	HX_STACK_LINE(143)
	this->useBgAlphaBlending = false;
	HX_STACK_LINE(108)
	this->bounds = null();
	HX_STACK_LINE(103)
	this->deadzone = null();
	HX_STACK_LINE(98)
	this->followLerp = ((Float)0);
	HX_STACK_LINE(94)
	this->target = null();
	HX_STACK_LINE(420)
	super::__construct();
	HX_STACK_LINE(422)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	{
		HX_STACK_LINE(422)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(422)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(422)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		Float tmp3 = X1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(422)
		Float tmp4 = Y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(422)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(422)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(422)
		point->_inPool = false;
		HX_STACK_LINE(422)
		tmp = point;
	}
	HX_STACK_LINE(422)
	this->_scrollTarget = tmp;
	HX_STACK_LINE(424)
	this->x = X;
	HX_STACK_LINE(425)
	this->y = Y;
	HX_STACK_LINE(427)
	bool tmp1 = (Width <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(427)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(427)
	if ((tmp1)){
		HX_STACK_LINE(427)
		tmp2 = ::flixel::FlxG_obj::width;
	}
	else{
		HX_STACK_LINE(427)
		tmp2 = Width;
	}
	HX_STACK_LINE(427)
	this->set_width(tmp2);
	HX_STACK_LINE(428)
	bool tmp3 = (Height <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(428)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(428)
	if ((tmp3)){
		HX_STACK_LINE(428)
		tmp4 = ::flixel::FlxG_obj::height;
	}
	else{
		HX_STACK_LINE(428)
		tmp4 = Height;
	}
	HX_STACK_LINE(428)
	this->set_height(tmp4);
	HX_STACK_LINE(430)
	::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(430)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(430)
		::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(430)
		::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(430)
		Float tmp8 = X1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(430)
		Float tmp9 = Y1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(430)
		::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(430)
		::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(430)
		point->_inPool = false;
		HX_STACK_LINE(430)
		tmp5 = point;
	}
	HX_STACK_LINE(430)
	this->scroll = tmp5;
	HX_STACK_LINE(431)
	::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(431)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(431)
		::flixel::util::FlxPool tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(431)
		Float tmp9 = X1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(431)
		Float tmp10 = Y1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		::flixel::util::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(431)
		point->_inPool = false;
		HX_STACK_LINE(431)
		tmp6 = point;
	}
	HX_STACK_LINE(431)
	this->followLead = tmp6;
	HX_STACK_LINE(432)
	::flixel::util::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(432)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(432)
		::flixel::util::FlxPool tmp8 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(432)
		::flixel::util::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(432)
		Float tmp10 = X1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(432)
		Float tmp11 = Y1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(432)
		::flixel::util::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		::flixel::util::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(432)
		point->_inPool = false;
		HX_STACK_LINE(432)
		tmp7 = point;
	}
	HX_STACK_LINE(432)
	this->_point = tmp7;
	HX_STACK_LINE(433)
	::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(433)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(433)
		::flixel::util::FlxPool tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(433)
		::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(433)
		Float tmp11 = X1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(433)
		Float tmp12 = Y1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(433)
		::flixel::util::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(433)
		::flixel::util::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(433)
		point->_inPool = false;
		HX_STACK_LINE(433)
		tmp8 = point;
	}
	HX_STACK_LINE(433)
	this->_flashOffset = tmp8;
	HX_STACK_LINE(447)
	::openfl::_legacy::display::Sprite tmp9 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(447)
	this->canvas = tmp9;
	HX_STACK_LINE(448)
	::openfl::_legacy::display::Sprite tmp10 = this->canvas;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(448)
	int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(448)
	int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(448)
	Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(448)
	tmp10->set_x(tmp13);
	HX_STACK_LINE(449)
	::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(449)
	int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(449)
	int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(449)
	Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(449)
	tmp14->set_y(tmp17);
	HX_STACK_LINE(456)
	::openfl::_legacy::display::Sprite tmp18 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(456)
	this->flashSprite = tmp18;
	HX_STACK_LINE(457)
	Float tmp19 = Zoom;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(457)
	this->set_zoom(tmp19);
	HX_STACK_LINE(459)
	::flixel::util::FlxPoint tmp20 = this->_flashOffset;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(459)
	int tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(459)
	Float tmp22 = (tmp21 * ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(459)
	Float tmp23 = this->zoom;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(459)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(459)
	int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(459)
	Float tmp26 = (tmp25 * ((Float)0.5));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(459)
	Float tmp27 = this->zoom;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(459)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(459)
	tmp20->set(tmp24,tmp28);
	HX_STACK_LINE(461)
	::openfl::_legacy::display::Sprite tmp29 = this->flashSprite;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(461)
	Float tmp30 = this->x;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(461)
	::flixel::util::FlxPoint tmp31 = this->_flashOffset;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(461)
	Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(461)
	Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(461)
	tmp29->set_x(tmp33);
	HX_STACK_LINE(462)
	::openfl::_legacy::display::Sprite tmp34 = this->flashSprite;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(462)
	Float tmp35 = this->y;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(462)
	::flixel::util::FlxPoint tmp36 = this->_flashOffset;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(462)
	Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(462)
	Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(462)
	tmp34->set_y(tmp38);
	HX_STACK_LINE(467)
	::openfl::_legacy::display::Sprite tmp39 = this->flashSprite;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(467)
	::openfl::_legacy::display::Sprite tmp40 = this->canvas;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(467)
	tmp39->addChild(tmp40);
	HX_STACK_LINE(469)
	int tmp41 = this->width;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(469)
	int tmp42 = this->height;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(469)
	::openfl::_legacy::geom::Rectangle tmp43 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(469)
	this->_flashRect = tmp43;
	HX_STACK_LINE(470)
	::openfl::_legacy::geom::Point tmp44 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(470)
	this->_flashPoint = tmp44;
	HX_STACK_LINE(472)
	::flixel::util::FlxPoint tmp45;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(472)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(472)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(472)
		::flixel::util::FlxPool tmp46 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(472)
		::flixel::util::FlxPoint tmp47 = tmp46->get();		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(472)
		Float tmp48 = X1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(472)
		Float tmp49 = Y1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(472)
		::flixel::util::FlxPoint tmp50 = tmp47->set(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(472)
		::flixel::util::FlxPoint point = tmp50;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(472)
		point->_inPool = false;
		HX_STACK_LINE(472)
		tmp45 = point;
	}
	HX_STACK_LINE(472)
	this->_fxShakeOffset = tmp45;
	HX_STACK_LINE(478)
	::openfl::_legacy::display::Sprite tmp46 = this->canvas;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(478)
	int tmp47 = this->width;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(478)
	int tmp48 = this->height;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(478)
	::openfl::_legacy::geom::Rectangle tmp49 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(478)
	tmp46->set_scrollRect(tmp49);
	HX_STACK_LINE(481)
	::openfl::_legacy::display::Sprite tmp50 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(481)
	this->debugLayer = tmp50;
	HX_STACK_LINE(482)
	::openfl::_legacy::display::Sprite tmp51 = this->debugLayer;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(482)
	int tmp52 = this->width;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(482)
	int tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(482)
	Float tmp54 = (tmp53 * ((Float)0.5));		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(482)
	tmp51->set_x(tmp54);
	HX_STACK_LINE(483)
	::openfl::_legacy::display::Sprite tmp55 = this->debugLayer;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(483)
	int tmp56 = this->height;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(483)
	int tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(483)
	Float tmp58 = (tmp57 * ((Float)0.5));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(483)
	tmp55->set_y(tmp58);
	HX_STACK_LINE(484)
	::openfl::_legacy::display::Sprite tmp59 = this->debugLayer;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(484)
	tmp59->set_scaleX((int)1);
	HX_STACK_LINE(485)
	::openfl::_legacy::display::Sprite tmp60 = this->flashSprite;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(485)
	::openfl::_legacy::display::Sprite tmp61 = this->debugLayer;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(485)
	tmp60->addChild(tmp61);
	HX_STACK_LINE(488)
	::flixel::_system::layer::DrawStackItem tmp62 = ::flixel::_system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(488)
	this->_currentStackItem = tmp62;
	HX_STACK_LINE(489)
	::flixel::_system::layer::DrawStackItem tmp63 = this->_currentStackItem;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(489)
	this->_headOfDrawStack = tmp63;
	HX_STACK_LINE(492)
	::flixel::_system::frontEnds::CameraFrontEnd tmp64 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(492)
	int tmp65 = tmp64->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(492)
	this->bgColor = tmp65;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return _result_;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::flixel::_system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getDrawStackItem",0x060ba7ea,"flixel.FlxCamera.getDrawStackItem","flixel/FlxCamera.hx",310,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjGraphics,"ObjGraphics")
	HX_STACK_ARG(ObjColored,"ObjColored")
	HX_STACK_ARG(ObjBlending,"ObjBlending")
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing")
{
		HX_STACK_LINE(311)
		::flixel::_system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(312)
		::flixel::_system::layer::DrawStackItem tmp = this->_currentStackItem;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		bool tmp1 = tmp->__Field(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(314)
			::flixel::_system::layer::DrawStackItem tmp3 = this->_currentStackItem;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(314)
			this->_headOfDrawStack = tmp3;
			HX_STACK_LINE(315)
			::flixel::_system::layer::DrawStackItem tmp4 = this->_currentStackItem;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			tmp4->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = ObjGraphics;
			HX_STACK_LINE(316)
			::flixel::_system::layer::DrawStackItem tmp5 = this->_currentStackItem;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			tmp5->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = ObjAntialiasing;
			HX_STACK_LINE(317)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_currentStackItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			tmp6->__FieldRef(HX_HCSTRING("colored","\x82","\x28","\x66","\xef")) = ObjColored;
			HX_STACK_LINE(318)
			::flixel::_system::layer::DrawStackItem tmp7 = this->_currentStackItem;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			tmp7->__FieldRef(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")) = ObjBlending;
			HX_STACK_LINE(319)
			::flixel::_system::layer::DrawStackItem tmp8 = this->_currentStackItem;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			itemToReturn = tmp8;
		}
		else{
			HX_STACK_LINE(321)
			::flixel::_system::layer::DrawStackItem tmp3 = this->_currentStackItem;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp3->__Field(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			::flixel::util::loaders::CachedGraphics tmp5 = ObjGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			if ((tmp7)){
				HX_STACK_LINE(322)
				::flixel::_system::layer::DrawStackItem tmp9 = this->_currentStackItem;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(322)
				::flixel::_system::layer::DrawStackItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(322)
				::flixel::_system::layer::DrawStackItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(322)
				bool tmp12 = tmp11->__Field(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(322)
				bool tmp13 = ObjColored;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(322)
				tmp8 = (tmp12 == tmp13);
			}
			else{
				HX_STACK_LINE(321)
				tmp8 = false;
			}
			HX_STACK_LINE(321)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(321)
			if ((tmp9)){
				HX_STACK_LINE(323)
				::flixel::_system::layer::DrawStackItem tmp11 = this->_currentStackItem;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(323)
				::flixel::_system::layer::DrawStackItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(323)
				::flixel::_system::layer::DrawStackItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(323)
				int tmp14 = tmp13->__Field(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(323)
				int tmp15 = ObjBlending;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(323)
				tmp10 = (tmp14 == tmp15);
			}
			else{
				HX_STACK_LINE(321)
				tmp10 = false;
			}
			HX_STACK_LINE(321)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(321)
			if ((tmp10)){
				HX_STACK_LINE(324)
				::flixel::_system::layer::DrawStackItem tmp12 = this->_currentStackItem;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				::flixel::_system::layer::DrawStackItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(324)
				bool tmp14 = tmp13->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(324)
				bool tmp15 = ObjAntialiasing;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(324)
				tmp11 = (tmp14 == tmp15);
			}
			else{
				HX_STACK_LINE(321)
				tmp11 = false;
			}
			HX_STACK_LINE(321)
			if ((tmp11)){
				HX_STACK_LINE(326)
				::flixel::_system::layer::DrawStackItem tmp12 = this->_currentStackItem;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				itemToReturn = tmp12;
			}
		}
		HX_STACK_LINE(329)
		bool tmp3 = (itemToReturn == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		if ((tmp3)){
			HX_STACK_LINE(331)
			::flixel::_system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(332)
			::flixel::_system::layer::DrawStackItem tmp4 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			if ((tmp5)){
				HX_STACK_LINE(334)
				::flixel::_system::layer::DrawStackItem tmp6 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(334)
				newItem = tmp6;
				HX_STACK_LINE(335)
				::flixel::_system::layer::DrawStackItem tmp7 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				::flixel::_system::layer::DrawStackItem newHead = tmp7->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(336)
				newItem->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
				HX_STACK_LINE(337)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(341)
				::flixel::_system::layer::DrawStackItem tmp6 = ::flixel::_system::layer::DrawStackItem_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(341)
				newItem = tmp6;
			}
			HX_STACK_LINE(344)
			newItem->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = ObjGraphics;
			HX_STACK_LINE(345)
			newItem->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = ObjAntialiasing;
			HX_STACK_LINE(346)
			newItem->__FieldRef(HX_HCSTRING("colored","\x82","\x28","\x66","\xef")) = ObjColored;
			HX_STACK_LINE(347)
			newItem->__FieldRef(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")) = ObjBlending;
			HX_STACK_LINE(348)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_currentStackItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(348)
			tmp6->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = newItem;
			HX_STACK_LINE(349)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(350)
			::flixel::_system::layer::DrawStackItem tmp7 = this->_currentStackItem;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			itemToReturn = tmp7;
		}
		HX_STACK_LINE(353)
		itemToReturn->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = true;
		HX_STACK_LINE(354)
		::flixel::_system::layer::DrawStackItem tmp4 = itemToReturn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(354)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",359,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(360)
		::flixel::_system::layer::DrawStackItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		::flixel::_system::layer::DrawStackItem currItem = tmp->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			if ((tmp2)){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				currItem->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
				HX_STACK_LINE(363)
				currItem->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = false;
				HX_STACK_LINE(363)
				currItem->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = false;
				HX_STACK_LINE(363)
				currItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
			}
			HX_STACK_LINE(364)
			::flixel::_system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(365)
			currItem = currItem->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(366)
			::flixel::_system::layer::DrawStackItem tmp3 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			if ((tmp4)){
				HX_STACK_LINE(368)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(369)
				newStorageHead->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
			}
			else{
				HX_STACK_LINE(373)
				::flixel::_system::layer::DrawStackItem tmp5 = ::flixel::FlxCamera_obj::_storageHead;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				newStorageHead->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = tmp5;
				HX_STACK_LINE(374)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::flixel::_system::layer::DrawStackItem tmp1 = this->_headOfDrawStack;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			::flixel::_system::layer::DrawStackItem _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(378)
			_this->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
			HX_STACK_LINE(378)
			_this->__FieldRef(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")) = false;
			HX_STACK_LINE(378)
			_this->__FieldRef(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")) = false;
			HX_STACK_LINE(378)
			_this->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = (int)0;
		}
		HX_STACK_LINE(379)
		::flixel::_system::layer::DrawStackItem tmp1 = this->_headOfDrawStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		tmp1->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(380)
		::flixel::_system::layer::DrawStackItem tmp2 = this->_headOfDrawStack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		this->_currentStackItem = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",385,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(386)
		::flixel::_system::layer::DrawStackItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		::flixel::_system::layer::DrawStackItem currItem = tmp;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(387)
		while((true)){
			HX_STACK_LINE(387)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(387)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			if ((tmp2)){
				HX_STACK_LINE(387)
				break;
			}
			HX_STACK_LINE(389)
			Array< Float > data = currItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(390)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(391)
			int position = currItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(392)
			bool tmp3 = (position > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			if ((tmp3)){
				HX_STACK_LINE(394)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(395)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(396)
				bool tmp4 = currItem->__Field(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				if ((tmp4)){
					HX_STACK_LINE(398)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(400)
				hx::OrEq(tempFlags,currItem->__Field(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"), hx::paccDynamic ));
				HX_STACK_LINE(401)
				::flixel::_system::layer::TileSheetData tmp5 = currItem->__Field(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"), hx::paccDynamic )->__Field(HX_HCSTRING("get_tilesheet","\x88","\xa4","\xb1","\x35"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				::openfl::_legacy::display::Sprite tmp6 = this->canvas;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(401)
				::openfl::_legacy::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(401)
				bool tmp8 = this->antialiasing;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(401)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(401)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(401)
				if ((tmp9)){
					HX_STACK_LINE(401)
					tmp10 = currItem->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(401)
					tmp10 = true;
				}
				HX_STACK_LINE(401)
				int tmp11 = tempFlags;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(401)
				int tmp12 = position;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(401)
				tmp5->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"), hx::paccDynamic )(tmp7,data,tmp10,tmp11,tmp12);
				HX_STACK_LINE(402)
				(::flixel::_system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(404)
			currItem = currItem->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",499,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		::openfl::_legacy::display::Sprite tmp1 = this->debugLayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(508)
		this->debugLayer = null();
		HX_STACK_LINE(511)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		tmp2->removeChild(tmp3);
		HX_STACK_LINE(512)
		::openfl::_legacy::display::Sprite tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(512)
		int tmp5 = tmp4->get_numChildren();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(512)
		int canvasNumChildren = tmp5;		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(513)
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			while((true)){
				HX_STACK_LINE(513)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(513)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				if ((tmp7)){
					HX_STACK_LINE(513)
					break;
				}
				HX_STACK_LINE(513)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(515)
				::openfl::_legacy::display::Sprite tmp9 = this->canvas;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(515)
				tmp9->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(517)
		this->canvas = null();
		HX_STACK_LINE(519)
		this->clearDrawStack();
		HX_STACK_LINE(521)
		{
			HX_STACK_LINE(521)
			::flixel::_system::layer::DrawStackItem tmp6 = this->_headOfDrawStack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(521)
			::flixel::_system::layer::DrawStackItem _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(521)
			_this->__FieldRef(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")) = null();
			HX_STACK_LINE(521)
			_this->__FieldRef(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56")) = null();
			HX_STACK_LINE(521)
			_this->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(522)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(523)
		this->_currentStackItem = null();
		HX_STACK_LINE(526)
		::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		this->scroll = tmp7;
		HX_STACK_LINE(527)
		::flixel::util::FlxRect tmp8 = this->deadzone;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(527)
		::flixel::util::FlxRect tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(527)
		this->deadzone = tmp9;
		HX_STACK_LINE(528)
		::flixel::util::FlxRect tmp10 = this->bounds;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(528)
		::flixel::util::FlxRect tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(528)
		this->bounds = tmp11;
		HX_STACK_LINE(530)
		this->target = null();
		HX_STACK_LINE(531)
		this->flashSprite = null();
		HX_STACK_LINE(532)
		this->_flashRect = null();
		HX_STACK_LINE(533)
		this->_flashPoint = null();
		HX_STACK_LINE(534)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(535)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(536)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(537)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(539)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",546,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(548)
		::flixel::FlxObject tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		if ((tmp1)){
			HX_STACK_LINE(550)
			this->updateFollow();
		}
		HX_STACK_LINE(554)
		::flixel::util::FlxRect tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(554)
		if ((tmp3)){
			HX_STACK_LINE(556)
			::flixel::util::FlxPoint tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(556)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(556)
				Float Value = tmp6->x;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(556)
				::flixel::util::FlxRect tmp7 = this->bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(556)
				Float Min = tmp7->x;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(556)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(556)
				{
					HX_STACK_LINE(556)
					::flixel::util::FlxRect tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(556)
					::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(556)
					tmp8 = (_this->x + _this->width);
				}
				HX_STACK_LINE(556)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(556)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(556)
				Float Max = tmp10;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(556)
				bool tmp11 = (Value < Min);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(556)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(556)
				if ((tmp11)){
					HX_STACK_LINE(556)
					tmp12 = Min;
				}
				else{
					HX_STACK_LINE(556)
					tmp12 = Value;
				}
				HX_STACK_LINE(556)
				Float lowerBound = tmp12;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(556)
				bool tmp13 = (lowerBound > Max);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(556)
				if ((tmp13)){
					HX_STACK_LINE(556)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(556)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(556)
			tmp4->set_x(tmp5);
			HX_STACK_LINE(557)
			::flixel::util::FlxPoint tmp6 = this->scroll;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(557)
			{
				HX_STACK_LINE(557)
				::flixel::util::FlxPoint tmp8 = this->scroll;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(557)
				Float Value = tmp8->y;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(557)
				::flixel::util::FlxRect tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(557)
				Float Min = tmp9->y;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(557)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(557)
				{
					HX_STACK_LINE(557)
					::flixel::util::FlxRect tmp11 = this->bounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(557)
					::flixel::util::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(557)
					tmp10 = (_this->y + _this->height);
				}
				HX_STACK_LINE(557)
				int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(557)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(557)
				Float Max = tmp12;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(557)
				bool tmp13 = (Value < Min);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(557)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(557)
				if ((tmp13)){
					HX_STACK_LINE(557)
					tmp14 = Min;
				}
				else{
					HX_STACK_LINE(557)
					tmp14 = Value;
				}
				HX_STACK_LINE(557)
				Float lowerBound = tmp14;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(557)
				bool tmp15 = (lowerBound > Max);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(557)
				if ((tmp15)){
					HX_STACK_LINE(557)
					tmp7 = Max;
				}
				else{
					HX_STACK_LINE(557)
					tmp7 = lowerBound;
				}
			}
			HX_STACK_LINE(557)
			tmp6->set_y(tmp7);
		}
		HX_STACK_LINE(560)
		this->updateFlash();
		HX_STACK_LINE(561)
		this->updateFade();
		HX_STACK_LINE(562)
		this->updateShake();
	}
return null();
}


Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",566,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(569)
		::flixel::util::FlxRect tmp = this->deadzone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(569)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		if ((tmp1)){
			HX_STACK_LINE(571)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint tmp4 = tmp2->getMidpoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint tmp5 = this->scroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			Float tmp6 = point->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(571)
			Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(571)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(571)
			Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(571)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(571)
			Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(571)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(571)
			tmp5->set(tmp9,tmp13);
		}
		else{
			HX_STACK_LINE(575)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(576)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(576)
			Float targetX = tmp2->x;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(577)
			::flixel::FlxObject tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(577)
			Float targetY = tmp3->y;		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(579)
			int tmp4 = this->style;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			bool tmp5 = (tmp4 == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(579)
			if ((tmp5)){
				HX_STACK_LINE(581)
				Float tmp6 = targetX;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(581)
				::flixel::util::FlxPoint tmp7 = this->scroll;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(581)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(581)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(581)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(581)
				bool tmp11 = (tmp6 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(581)
				if ((tmp11)){
					HX_STACK_LINE(583)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(583)
					::flixel::util::FlxPoint _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(583)
					Float tmp13 = _g->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(583)
					int tmp14 = this->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(583)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(583)
					_g->set_x(tmp15);
				}
				else{
					HX_STACK_LINE(585)
					Float tmp12 = targetX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(585)
					::flixel::util::FlxPoint tmp13 = this->scroll;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(585)
					Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(585)
					bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(585)
					if ((tmp15)){
						HX_STACK_LINE(587)
						::flixel::util::FlxPoint tmp16 = this->_scrollTarget;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(587)
						::flixel::util::FlxPoint _g = tmp16;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(587)
						Float tmp17 = _g->x;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(587)
						int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(587)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(587)
						_g->set_x(tmp19);
					}
				}
				HX_STACK_LINE(590)
				Float tmp12 = targetY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(590)
				::flixel::util::FlxPoint tmp13 = this->scroll;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(590)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(590)
				int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(590)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(590)
				bool tmp17 = (tmp12 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(590)
				if ((tmp17)){
					HX_STACK_LINE(592)
					::flixel::util::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(592)
					::flixel::util::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(592)
					Float tmp19 = _g->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(592)
					int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(592)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(592)
					_g->set_y(tmp21);
				}
				else{
					HX_STACK_LINE(594)
					Float tmp18 = targetY;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(594)
					::flixel::util::FlxPoint tmp19 = this->scroll;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(594)
					Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(594)
					bool tmp21 = (tmp18 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(594)
					if ((tmp21)){
						HX_STACK_LINE(596)
						::flixel::util::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(596)
						::flixel::util::FlxPoint _g = tmp22;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(596)
						Float tmp23 = _g->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(596)
						int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(596)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(596)
						_g->set_y(tmp25);
					}
				}
			}
			else{
				HX_STACK_LINE(601)
				Float tmp6 = targetX;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(601)
				::flixel::util::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(601)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(601)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(601)
				edge = tmp9;
				HX_STACK_LINE(602)
				::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(602)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(602)
				Float tmp12 = edge;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(602)
				bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(602)
				if ((tmp13)){
					HX_STACK_LINE(604)
					::flixel::util::FlxPoint tmp14 = this->_scrollTarget;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(604)
					Float tmp15 = edge;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(604)
					tmp14->set_x(tmp15);
				}
				HX_STACK_LINE(606)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(606)
				::flixel::FlxObject tmp15 = this->target;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(606)
				Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(606)
				Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(606)
				::flixel::util::FlxRect tmp18 = this->deadzone;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(606)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(606)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(606)
				::flixel::util::FlxRect tmp21 = this->deadzone;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(606)
				Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(606)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(606)
				edge = tmp23;
				HX_STACK_LINE(607)
				::flixel::util::FlxPoint tmp24 = this->_scrollTarget;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(607)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(607)
				Float tmp26 = edge;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(607)
				bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(607)
				if ((tmp27)){
					HX_STACK_LINE(609)
					::flixel::util::FlxPoint tmp28 = this->_scrollTarget;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(609)
					Float tmp29 = edge;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(609)
					tmp28->set_x(tmp29);
				}
				HX_STACK_LINE(612)
				Float tmp28 = targetY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(612)
				::flixel::util::FlxRect tmp29 = this->deadzone;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(612)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(612)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(612)
				edge = tmp31;
				HX_STACK_LINE(613)
				::flixel::util::FlxPoint tmp32 = this->_scrollTarget;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(613)
				Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(613)
				Float tmp34 = edge;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(613)
				bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(613)
				if ((tmp35)){
					HX_STACK_LINE(615)
					::flixel::util::FlxPoint tmp36 = this->_scrollTarget;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(615)
					Float tmp37 = edge;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(615)
					tmp36->set_y(tmp37);
				}
				HX_STACK_LINE(617)
				Float tmp36 = targetY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(617)
				::flixel::FlxObject tmp37 = this->target;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(617)
				Float tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(617)
				Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(617)
				::flixel::util::FlxRect tmp40 = this->deadzone;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(617)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(617)
				Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(617)
				::flixel::util::FlxRect tmp43 = this->deadzone;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(617)
				Float tmp44 = tmp43->height;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(617)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(617)
				edge = tmp45;
				HX_STACK_LINE(618)
				::flixel::util::FlxPoint tmp46 = this->_scrollTarget;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(618)
				Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(618)
				Float tmp48 = edge;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(618)
				bool tmp49 = (tmp47 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(618)
				if ((tmp49)){
					HX_STACK_LINE(620)
					::flixel::util::FlxPoint tmp50 = this->_scrollTarget;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(620)
					Float tmp51 = edge;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(620)
					tmp50->set_y(tmp51);
				}
			}
			HX_STACK_LINE(624)
			::flixel::FlxObject tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(624)
			if ((tmp7)){
				HX_STACK_LINE(626)
				::flixel::util::FlxPoint tmp8 = this->_lastTargetPosition;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(626)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(626)
				if ((tmp9)){
					HX_STACK_LINE(628)
					::flixel::util::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(628)
					{
						HX_STACK_LINE(628)
						::flixel::util::FlxPool tmp11 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(628)
						::flixel::util::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(628)
						::flixel::FlxObject tmp13 = this->target;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(628)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(628)
						::flixel::FlxObject tmp15 = this->target;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(628)
						Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(628)
						::flixel::util::FlxPoint tmp17 = tmp12->set(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(628)
						::flixel::util::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(628)
						point->_inPool = false;
						HX_STACK_LINE(628)
						tmp10 = point;
					}
					HX_STACK_LINE(628)
					this->_lastTargetPosition = tmp10;
				}
				HX_STACK_LINE(630)
				{
					HX_STACK_LINE(630)
					::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(630)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(630)
					Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(630)
					::flixel::FlxObject tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(630)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(630)
					::flixel::util::FlxPoint tmp14 = this->_lastTargetPosition;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(630)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(630)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(630)
					::flixel::util::FlxPoint tmp17 = this->followLead;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(630)
					Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(630)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(630)
					Float tmp20 = (tmp11 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(630)
					_g->set_x(tmp20);
				}
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					::flixel::util::FlxPoint tmp10 = this->_scrollTarget;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(631)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(631)
					Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(631)
					::flixel::FlxObject tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(631)
					Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(631)
					::flixel::util::FlxPoint tmp14 = this->_lastTargetPosition;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(631)
					Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(631)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(631)
					::flixel::util::FlxPoint tmp17 = this->followLead;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(631)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(631)
					Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(631)
					Float tmp20 = (tmp11 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(631)
					_g->set_y(tmp20);
				}
				HX_STACK_LINE(633)
				::flixel::util::FlxPoint tmp10 = this->_lastTargetPosition;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(633)
				::flixel::FlxObject tmp11 = this->target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(633)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(633)
				tmp10->set_x(tmp12);
				HX_STACK_LINE(634)
				::flixel::util::FlxPoint tmp13 = this->_lastTargetPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(634)
				::flixel::FlxObject tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(634)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(634)
				tmp13->set_y(tmp15);
			}
			HX_STACK_LINE(637)
			Float tmp8 = this->followLerp;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(637)
			if ((tmp9)){
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint tmp11 = this->_scrollTarget;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(639)
				::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(639)
				Float tmp12 = point->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(639)
				_this->set_x(tmp12);
				HX_STACK_LINE(639)
				Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(639)
				_this->set_y(tmp13);
				HX_STACK_LINE(639)
				_this;
			}
			else{
				HX_STACK_LINE(643)
				{
					HX_STACK_LINE(643)
					::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(643)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(643)
					Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(643)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(643)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(643)
					::flixel::util::FlxPoint tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(643)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(643)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(643)
					Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(643)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(643)
					Float tmp19 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(643)
					Float tmp20 = this->followLerp;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(643)
					Float tmp21 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(643)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(643)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(643)
					Float tmp24 = (Float(tmp18) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(643)
					Float tmp25 = (tmp11 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(643)
					_g->set_x(tmp25);
				}
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(644)
					::flixel::util::FlxPoint tmp10 = this->scroll;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(644)
					::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(644)
					Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(644)
					::flixel::util::FlxPoint tmp12 = this->_scrollTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(644)
					Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(644)
					::flixel::util::FlxPoint tmp14 = this->scroll;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(644)
					Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(644)
					Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(644)
					Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(644)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(644)
					Float tmp19 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(644)
					Float tmp20 = this->followLerp;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(644)
					Float tmp21 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(644)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(644)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(644)
					Float tmp24 = (Float(tmp18) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(644)
					Float tmp25 = (tmp11 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(644)
					_g->set_y(tmp25);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",650,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(652)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(652)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		if ((tmp1)){
			HX_STACK_LINE(654)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(654)
			Float tmp3 = this->_fxFlashDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(654)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(654)
			hx::SubEq(this->_fxFlashAlpha,tmp4);
			HX_STACK_LINE(655)
			Float tmp5 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(655)
			bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(655)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(655)
			if ((tmp6)){
				HX_STACK_LINE(655)
				Dynamic tmp8 = this->_fxFlashComplete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(655)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(655)
				tmp7 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(655)
				tmp7 = false;
			}
			HX_STACK_LINE(655)
			if ((tmp7)){
				HX_STACK_LINE(657)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",663,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(664)
		Float tmp = this->_fxFadeAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		if ((tmp1)){
			HX_STACK_LINE(664)
			Float tmp3 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(664)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(664)
			tmp2 = (tmp4 < ((Float)1.0));
		}
		else{
			HX_STACK_LINE(664)
			tmp2 = false;
		}
		HX_STACK_LINE(664)
		if ((tmp2)){
			HX_STACK_LINE(666)
			bool tmp3 = this->_fxFadeIn;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(666)
			if ((tmp3)){
				HX_STACK_LINE(668)
				Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(668)
				Float tmp5 = this->_fxFadeDuration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(668)
				Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(668)
				hx::SubEq(this->_fxFadeAlpha,tmp6);
				HX_STACK_LINE(669)
				Float tmp7 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(669)
				bool tmp8 = (tmp7 <= ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(669)
				if ((tmp8)){
					HX_STACK_LINE(671)
					this->_fxFadeAlpha = ((Float)0.0);
					HX_STACK_LINE(672)
					Dynamic tmp9 = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(672)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(672)
					if ((tmp10)){
						HX_STACK_LINE(674)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(680)
				Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(680)
				Float tmp5 = this->_fxFadeDuration;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(680)
				Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(680)
				hx::AddEq(this->_fxFadeAlpha,tmp6);
				HX_STACK_LINE(681)
				Float tmp7 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(681)
				bool tmp8 = (tmp7 >= ((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(681)
				if ((tmp8)){
					HX_STACK_LINE(683)
					this->_fxFadeAlpha = ((Float)1.0);
					HX_STACK_LINE(684)
					Dynamic tmp9 = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(684)
					bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(684)
					if ((tmp10)){
						HX_STACK_LINE(686)
						this->_fxFadeComplete();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::updateShake( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",694,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(695)
		Float tmp = this->_fxShakeDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(695)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(695)
		if ((tmp1)){
			HX_STACK_LINE(697)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(697)
			hx::SubEq(this->_fxShakeDuration,tmp2);
			HX_STACK_LINE(698)
			Float tmp3 = this->_fxShakeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(698)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(698)
			if ((tmp4)){
				HX_STACK_LINE(700)
				::flixel::util::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(700)
				tmp5->set(null(),null());
				HX_STACK_LINE(701)
				Dynamic tmp6 = this->_fxShakeComplete_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(701)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(701)
				if ((tmp7)){
					HX_STACK_LINE(704)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(709)
				int tmp5 = this->_fxShakeDirection;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(709)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(709)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(709)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(709)
				if ((tmp7)){
					HX_STACK_LINE(709)
					int tmp9 = this->_fxShakeDirection;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(709)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(709)
					tmp8 = (tmp10 == (int)1);
				}
				else{
					HX_STACK_LINE(709)
					tmp8 = true;
				}
				HX_STACK_LINE(709)
				if ((tmp8)){
					HX_STACK_LINE(711)
					::flixel::util::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(711)
					int tmp10 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(711)
					int tmp11 = (tmp10 * (int)48271);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(711)
					int tmp12 = hx::Mod(tmp11,(int)2147483647);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(711)
					int tmp13 = (int(tmp12) & int((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(711)
					int tmp14 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(711)
					Float tmp15 = (Float(tmp14) / Float((int)2147483647));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(711)
					Float tmp16 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(711)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(711)
					int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(711)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(711)
					Float tmp20 = (tmp19 * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(711)
					Float tmp21 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(711)
					int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(711)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(711)
					Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(711)
					Float tmp25 = this->zoom;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(711)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(711)
					tmp9->set_x(tmp26);
				}
				HX_STACK_LINE(713)
				int tmp9 = this->_fxShakeDirection;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(713)
				bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(713)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(713)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(713)
				if ((tmp11)){
					HX_STACK_LINE(713)
					int tmp13 = this->_fxShakeDirection;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(713)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(713)
					tmp12 = (tmp14 == (int)2);
				}
				else{
					HX_STACK_LINE(713)
					tmp12 = true;
				}
				HX_STACK_LINE(713)
				if ((tmp12)){
					HX_STACK_LINE(715)
					::flixel::util::FlxPoint tmp13 = this->_fxShakeOffset;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(715)
					int tmp14 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(715)
					int tmp15 = (tmp14 * (int)48271);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(715)
					int tmp16 = hx::Mod(tmp15,(int)2147483647);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(715)
					int tmp17 = (int(tmp16) & int((int)2147483647));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(715)
					int tmp18 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(715)
					Float tmp19 = (Float(tmp18) / Float((int)2147483647));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(715)
					Float tmp20 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(715)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(715)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(715)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(715)
					Float tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(715)
					Float tmp25 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(715)
					int tmp26 = this->height;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(715)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(715)
					Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(715)
					Float tmp29 = this->zoom;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(715)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(715)
					tmp13->set_y(tmp30);
				}
			}
			HX_STACK_LINE(720)
			::flixel::FlxObject tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(720)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(720)
			if ((tmp6)){
				HX_STACK_LINE(722)
				::openfl::_legacy::display::Sprite tmp7 = this->flashSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(722)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(722)
				::flixel::util::FlxPoint tmp9 = this->_flashOffset;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(722)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(722)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(722)
				tmp7->set_x(tmp11);
				HX_STACK_LINE(723)
				::openfl::_legacy::display::Sprite tmp12 = this->flashSprite;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(723)
				Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(723)
				::flixel::util::FlxPoint tmp14 = this->_flashOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(723)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(723)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(723)
				tmp12->set_y(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,hx::Null< int >  __o_Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",737,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Offset,"Offset")
	HX_STACK_ARG(Lerp,"Lerp")
{
		HX_STACK_LINE(738)
		this->style = Style;
		HX_STACK_LINE(739)
		this->target = Target;
		HX_STACK_LINE(740)
		this->followLerp = Lerp;
		HX_STACK_LINE(741)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(742)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(743)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(744)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(746)
		int tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(746)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(749)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(749)
				Float tmp2 = (Float(tmp1) / Float((int)8));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(749)
				bool tmp3 = (Offset != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(749)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(749)
				if ((tmp3)){
					HX_STACK_LINE(749)
					tmp4 = Offset->x;
				}
				else{
					HX_STACK_LINE(749)
					tmp4 = (int)0;
				}
				HX_STACK_LINE(749)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(749)
				Float w1 = tmp5;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(750)
				int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(750)
				Float tmp7 = (Float(tmp6) / Float((int)3));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(750)
				bool tmp8 = (Offset != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(750)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(750)
				if ((tmp8)){
					HX_STACK_LINE(750)
					tmp9 = Offset->y;
				}
				else{
					HX_STACK_LINE(750)
					tmp9 = (int)0;
				}
				HX_STACK_LINE(750)
				Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(750)
				Float h1 = tmp10;		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(751)
				::flixel::util::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(751)
				{
					HX_STACK_LINE(751)
					::flixel::util::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(751)
					{
						HX_STACK_LINE(751)
						::flixel::util::FlxPool tmp13 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(751)
						::flixel::util::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(751)
						::flixel::util::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(751)
						int tmp15 = this->width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(751)
						Float tmp16 = w1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(751)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(751)
						Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(751)
						_this->x = tmp18;
						HX_STACK_LINE(751)
						int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(751)
						Float tmp20 = h1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(751)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(751)
						Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(751)
						Float tmp23 = (h1 * ((Float)0.25));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(751)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(751)
						_this->y = tmp24;
						HX_STACK_LINE(751)
						_this->width = w1;
						HX_STACK_LINE(751)
						_this->height = h1;
						HX_STACK_LINE(751)
						tmp12 = _this;
					}
					HX_STACK_LINE(751)
					::flixel::util::FlxRect rect = tmp12;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(751)
					rect->_inPool = false;
					HX_STACK_LINE(751)
					tmp11 = rect;
				}
				HX_STACK_LINE(751)
				this->deadzone = tmp11;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(754)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(754)
				int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(754)
				Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(754)
				Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(754)
				helper = tmp4;
				HX_STACK_LINE(755)
				::flixel::util::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::flixel::util::FlxPool tmp7 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(755)
						::flixel::util::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(755)
						::flixel::util::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(755)
						Float tmp10 = helper;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(755)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(755)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(755)
						_this->x = tmp12;
						HX_STACK_LINE(755)
						int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(755)
						Float tmp14 = helper;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(755)
						Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(755)
						Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(755)
						_this->y = tmp16;
						HX_STACK_LINE(755)
						_this->width = helper;
						HX_STACK_LINE(755)
						_this->height = helper;
						HX_STACK_LINE(755)
						tmp6 = _this;
					}
					HX_STACK_LINE(755)
					::flixel::util::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(755)
					rect->_inPool = false;
					HX_STACK_LINE(755)
					tmp5 = rect;
				}
				HX_STACK_LINE(755)
				this->deadzone = tmp5;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(758)
				int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(758)
				int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(758)
				Float tmp3 = ::Math_obj::max(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(758)
				Float tmp4 = (Float(tmp3) / Float((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(758)
				helper = tmp4;
				HX_STACK_LINE(759)
				::flixel::util::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(759)
				{
					HX_STACK_LINE(759)
					::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(759)
					{
						HX_STACK_LINE(759)
						::flixel::util::FlxPool tmp7 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(759)
						::flixel::util::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(759)
						::flixel::util::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(759)
						int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(759)
						Float tmp10 = helper;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(759)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(759)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(759)
						_this->x = tmp12;
						HX_STACK_LINE(759)
						int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						Float tmp14 = helper;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(759)
						Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(759)
						Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(759)
						_this->y = tmp16;
						HX_STACK_LINE(759)
						_this->width = helper;
						HX_STACK_LINE(759)
						_this->height = helper;
						HX_STACK_LINE(759)
						tmp6 = _this;
					}
					HX_STACK_LINE(759)
					::flixel::util::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(759)
					rect->_inPool = false;
					HX_STACK_LINE(759)
					tmp5 = rect;
				}
				HX_STACK_LINE(759)
				this->deadzone = tmp5;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(762)
				::flixel::FlxObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(762)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(762)
				if ((tmp2)){
					HX_STACK_LINE(764)
					::flixel::FlxObject tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(764)
					Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(764)
					bool tmp5 = (Offset != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(764)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(764)
					if ((tmp5)){
						HX_STACK_LINE(764)
						tmp6 = Offset->x;
					}
					else{
						HX_STACK_LINE(764)
						tmp6 = (int)0;
					}
					HX_STACK_LINE(764)
					Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(764)
					w = tmp7;
					HX_STACK_LINE(765)
					::flixel::FlxObject tmp8 = this->target;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(765)
					Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(765)
					bool tmp10 = (Offset != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(765)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(765)
					if ((tmp10)){
						HX_STACK_LINE(765)
						tmp11 = Offset->y;
					}
					else{
						HX_STACK_LINE(765)
						tmp11 = (int)0;
					}
					HX_STACK_LINE(765)
					Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(765)
					h = tmp12;
				}
				HX_STACK_LINE(767)
				::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(767)
				{
					HX_STACK_LINE(767)
					::flixel::util::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						::flixel::util::FlxPool tmp5 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(767)
						::flixel::util::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(767)
						::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(767)
						int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(767)
						Float tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(767)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(767)
						Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(767)
						_this->x = tmp10;
						HX_STACK_LINE(767)
						int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(767)
						Float tmp12 = h;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(767)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(767)
						Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(767)
						Float tmp15 = (h * ((Float)0.25));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(767)
						Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(767)
						_this->y = tmp16;
						HX_STACK_LINE(767)
						_this->width = w;
						HX_STACK_LINE(767)
						_this->height = h;
						HX_STACK_LINE(767)
						tmp4 = _this;
					}
					HX_STACK_LINE(767)
					::flixel::util::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(767)
					rect->_inPool = false;
					HX_STACK_LINE(767)
					tmp3 = rect;
				}
				HX_STACK_LINE(767)
				this->deadzone = tmp3;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(770)
				::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(770)
				{
					HX_STACK_LINE(770)
					::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(770)
					{
						HX_STACK_LINE(770)
						::flixel::util::FlxPool tmp3 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(770)
						::flixel::util::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(770)
						::flixel::util::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(770)
						_this->x = (int)0;
						HX_STACK_LINE(770)
						_this->y = (int)0;
						HX_STACK_LINE(770)
						int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(770)
						_this->width = tmp5;
						HX_STACK_LINE(770)
						int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(770)
						_this->height = tmp6;
						HX_STACK_LINE(770)
						tmp2 = _this;
					}
					HX_STACK_LINE(770)
					::flixel::util::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(770)
					rect->_inPool = false;
					HX_STACK_LINE(770)
					tmp1 = rect;
				}
				HX_STACK_LINE(770)
				this->deadzone = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(773)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::focusOn( ::flixel::util::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",784,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(785)
		::flixel::util::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(785)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(785)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(785)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(785)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(785)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(785)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(785)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(785)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(785)
		tmp->set(tmp4,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",797,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(798)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(798)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(798)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(798)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(798)
		if ((tmp2)){
			HX_STACK_LINE(798)
			Float tmp4 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(798)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(798)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(798)
			tmp3 = false;
		}
		HX_STACK_LINE(798)
		if ((tmp3)){
			HX_STACK_LINE(800)
			return null();
		}
		HX_STACK_LINE(802)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(803)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(803)
		if ((tmp4)){
			HX_STACK_LINE(805)
			Duration = ((Float)5e-324);
		}
		HX_STACK_LINE(807)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(808)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(809)
		this->_fxFlashAlpha = ((Float)1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",822,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(823)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(823)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(823)
		if ((tmp2)){
			HX_STACK_LINE(823)
			Float tmp4 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(823)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(823)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(823)
			tmp3 = false;
		}
		HX_STACK_LINE(823)
		if ((tmp3)){
			HX_STACK_LINE(825)
			return null();
		}
		HX_STACK_LINE(827)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(828)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(828)
		if ((tmp4)){
			HX_STACK_LINE(830)
			Duration = ((Float)5e-324);
		}
		HX_STACK_LINE(833)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(834)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(835)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(837)
		bool tmp5 = this->_fxFadeIn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(837)
		if ((tmp5)){
			HX_STACK_LINE(839)
			this->_fxFadeAlpha = ((Float)0.999999);
		}
		else{
			HX_STACK_LINE(843)
			this->_fxFadeAlpha = ((Float)5e-324);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",857,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(858)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(858)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(858)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(858)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(858)
		if ((tmp2)){
			HX_STACK_LINE(858)
			::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(858)
			::flixel::util::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(858)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(858)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(858)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(858)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(858)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(858)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(858)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(858)
			if ((tmp12)){
				HX_STACK_LINE(858)
				::flixel::util::FlxPoint tmp13 = this->_fxShakeOffset;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(858)
				::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(858)
				::flixel::util::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(858)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(858)
				tmp3 = (tmp16 != (int)0);
			}
			else{
				HX_STACK_LINE(858)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(858)
			tmp3 = false;
		}
		HX_STACK_LINE(858)
		if ((tmp3)){
			HX_STACK_LINE(860)
			return null();
		}
		HX_STACK_LINE(862)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(863)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(864)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(865)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(866)
		::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(866)
		tmp4->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",873,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(874)
		this->_fxFlashAlpha = ((Float)0.0);
		HX_STACK_LINE(875)
		this->_fxFadeAlpha = ((Float)0.0);
		HX_STACK_LINE(876)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(877)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(877)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(877)
		::flixel::util::FlxPoint tmp2 = this->_flashOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(877)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(877)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(877)
		tmp->set_x(tmp4);
		HX_STACK_LINE(878)
		::openfl::_legacy::display::Sprite tmp5 = this->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(878)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(878)
		::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(878)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(878)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(878)
		tmp5->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",888,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(889)
	bool tmp = (Camera->bounds == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(889)
	if ((tmp)){
		HX_STACK_LINE(891)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(895)
		::flixel::util::FlxRect tmp1 = this->bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		if ((tmp2)){
			HX_STACK_LINE(897)
			::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(897)
			{
				HX_STACK_LINE(897)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(897)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(897)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(897)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(897)
				::flixel::util::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(897)
				{
					HX_STACK_LINE(897)
					::flixel::util::FlxPool tmp5 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(897)
					::flixel::util::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(897)
					::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(897)
					_this->x = X;
					HX_STACK_LINE(897)
					_this->y = Y;
					HX_STACK_LINE(897)
					_this->width = Width;
					HX_STACK_LINE(897)
					_this->height = Height;
					HX_STACK_LINE(897)
					tmp4 = _this;
				}
				HX_STACK_LINE(897)
				::flixel::util::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(897)
				rect->_inPool = false;
				HX_STACK_LINE(897)
				tmp3 = rect;
			}
			HX_STACK_LINE(897)
			this->bounds = tmp3;
		}
		HX_STACK_LINE(899)
		{
			HX_STACK_LINE(899)
			::flixel::util::FlxRect tmp3 = this->bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(899)
			::flixel::util::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(899)
			::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(899)
			_this->x = Rect->x;
			HX_STACK_LINE(899)
			_this->y = Rect->y;
			HX_STACK_LINE(899)
			_this->width = Rect->width;
			HX_STACK_LINE(899)
			_this->height = Rect->height;
			HX_STACK_LINE(899)
			_this;
		}
	}
	HX_STACK_LINE(901)
	this->target = Camera->target;
	HX_STACK_LINE(903)
	::flixel::FlxObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(903)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(903)
	if ((tmp2)){
		HX_STACK_LINE(905)
		bool tmp3 = (Camera->deadzone == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(905)
		if ((tmp3)){
			HX_STACK_LINE(907)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(911)
			::flixel::util::FlxRect tmp4 = this->deadzone;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(911)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(911)
			if ((tmp5)){
				HX_STACK_LINE(913)
				::flixel::util::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(913)
				{
					HX_STACK_LINE(913)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(913)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(913)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(913)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(913)
					::flixel::util::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(913)
					{
						HX_STACK_LINE(913)
						::flixel::util::FlxPool tmp8 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(913)
						::flixel::util::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(913)
						::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(913)
						_this->x = X;
						HX_STACK_LINE(913)
						_this->y = Y;
						HX_STACK_LINE(913)
						_this->width = Width;
						HX_STACK_LINE(913)
						_this->height = Height;
						HX_STACK_LINE(913)
						tmp7 = _this;
					}
					HX_STACK_LINE(913)
					::flixel::util::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(913)
					rect->_inPool = false;
					HX_STACK_LINE(913)
					tmp6 = rect;
				}
				HX_STACK_LINE(913)
				this->deadzone = tmp6;
			}
			HX_STACK_LINE(915)
			{
				HX_STACK_LINE(915)
				::flixel::util::FlxRect tmp6 = this->deadzone;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(915)
				::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(915)
				::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(915)
				_this->x = Rect->x;
				HX_STACK_LINE(915)
				_this->y = Rect->y;
				HX_STACK_LINE(915)
				_this->width = Rect->width;
				HX_STACK_LINE(915)
				_this->height = Rect->height;
				HX_STACK_LINE(915)
				_this;
			}
		}
	}
	HX_STACK_LINE(918)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_legacy::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",928,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(941)
		bool tmp = (FxAlpha == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(941)
		if ((tmp)){
			HX_STACK_LINE(943)
			return null();
		}
		HX_STACK_LINE(946)
		bool tmp1 = (graphics == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(946)
		::openfl::_legacy::display::Graphics tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(946)
		if ((tmp1)){
			HX_STACK_LINE(946)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(946)
			tmp2 = tmp3->get_graphics();
		}
		else{
			HX_STACK_LINE(946)
			tmp2 = graphics;
		}
		HX_STACK_LINE(946)
		::openfl::_legacy::display::Graphics targetGraphics = tmp2;		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(947)
		int tmp3 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		Color = tmp3;
		HX_STACK_LINE(950)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(950)
		Float tmp5 = FxAlpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(950)
		targetGraphics->beginFill(tmp4,tmp5);
		HX_STACK_LINE(951)
		int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(951)
		int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(951)
		targetGraphics->drawRect((int)0,(int)0,tmp6,tmp7);
		HX_STACK_LINE(952)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",961,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(962)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(965)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(965)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(965)
		if ((tmp1)){
			HX_STACK_LINE(967)
			int tmp2 = this->_fxFlashColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(967)
			int tmp3 = (int(tmp2) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(967)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(967)
			alphaComponent = tmp4;
			HX_STACK_LINE(972)
			int tmp5 = this->_fxFlashColor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(972)
			int tmp6 = (int(tmp5) & int((int)16777215));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(972)
			bool tmp7 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(972)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(972)
			if ((tmp7)){
				HX_STACK_LINE(972)
				tmp8 = (int)255;
			}
			else{
				HX_STACK_LINE(972)
				tmp8 = alphaComponent;
			}
			HX_STACK_LINE(972)
			Float tmp9 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(972)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(972)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(972)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(972)
			::openfl::_legacy::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(972)
			this->fill(tmp6,true,tmp11,tmp13);
		}
		HX_STACK_LINE(977)
		Float tmp2 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(977)
		bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(977)
		if ((tmp3)){
			HX_STACK_LINE(979)
			int tmp4 = this->_fxFadeColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(979)
			int tmp5 = (int(tmp4) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(979)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(979)
			alphaComponent = tmp6;
			HX_STACK_LINE(984)
			int tmp7 = this->_fxFadeColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(984)
			int tmp8 = (int(tmp7) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(984)
			bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(984)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(984)
			if ((tmp9)){
				HX_STACK_LINE(984)
				tmp10 = (int)255;
			}
			else{
				HX_STACK_LINE(984)
				tmp10 = alphaComponent;
			}
			HX_STACK_LINE(984)
			Float tmp11 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(984)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(984)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(984)
			::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(984)
			::openfl::_legacy::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(984)
			this->fill(tmp8,true,tmp13,tmp15);
		}
		HX_STACK_LINE(988)
		::flixel::util::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(988)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(988)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(988)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(988)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(988)
		if ((tmp7)){
			HX_STACK_LINE(988)
			::flixel::util::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(988)
			::flixel::util::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(988)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(988)
			tmp8 = (tmp11 != (int)0);
		}
		else{
			HX_STACK_LINE(988)
			tmp8 = true;
		}
		HX_STACK_LINE(988)
		if ((tmp8)){
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(990)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(990)
				Float tmp10 = _g->get_x();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(990)
				::flixel::util::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(990)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(990)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(990)
				_g->set_x(tmp13);
			}
			HX_STACK_LINE(991)
			{
				HX_STACK_LINE(991)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(991)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(991)
				Float tmp10 = _g->get_y();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(991)
				::flixel::util::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(991)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(991)
				Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(991)
				_g->set_y(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1025,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1026)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1026)
		this->set_width(tmp);
		HX_STACK_LINE(1027)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1027)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1038,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1039)
		this->x = X;
		HX_STACK_LINE(1040)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setBounds",0xf7eeb60e,"flixel.FlxCamera.setBounds","flixel/FlxCamera.hx",1053,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1054)
		::flixel::util::FlxRect tmp = this->bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1054)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1054)
		if ((tmp1)){
			HX_STACK_LINE(1056)
			::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1056)
			{
				HX_STACK_LINE(1056)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(1056)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(1056)
				Float Width1 = (int)0;		HX_STACK_VAR(Width1,"Width1");
				HX_STACK_LINE(1056)
				Float Height1 = (int)0;		HX_STACK_VAR(Height1,"Height1");
				HX_STACK_LINE(1056)
				::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1056)
				{
					HX_STACK_LINE(1056)
					::flixel::util::FlxPool tmp4 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1056)
					::flixel::util::FlxRect tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1056)
					::flixel::util::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1056)
					_this->x = X1;
					HX_STACK_LINE(1056)
					_this->y = Y1;
					HX_STACK_LINE(1056)
					_this->width = Width1;
					HX_STACK_LINE(1056)
					_this->height = Height1;
					HX_STACK_LINE(1056)
					tmp3 = _this;
				}
				HX_STACK_LINE(1056)
				::flixel::util::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(1056)
				rect->_inPool = false;
				HX_STACK_LINE(1056)
				tmp2 = rect;
			}
			HX_STACK_LINE(1056)
			this->bounds = tmp2;
		}
		HX_STACK_LINE(1058)
		{
			HX_STACK_LINE(1058)
			::flixel::util::FlxRect tmp2 = this->bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1058)
			::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1058)
			_this->x = X;
			HX_STACK_LINE(1058)
			_this->y = Y;
			HX_STACK_LINE(1058)
			_this->width = Width;
			HX_STACK_LINE(1058)
			_this->height = Height;
			HX_STACK_LINE(1058)
			_this;
		}
		HX_STACK_LINE(1059)
		bool tmp2 = UpdateWorld;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1059)
		if ((tmp2)){
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect tmp4 = this->bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1061)
			::flixel::util::FlxRect Rect = tmp4;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(1061)
			_this->x = Rect->x;
			HX_STACK_LINE(1061)
			_this->y = Rect->y;
			HX_STACK_LINE(1061)
			_this->width = Rect->width;
			HX_STACK_LINE(1061)
			_this->height = Rect->height;
			HX_STACK_LINE(1061)
			_this;
		}
		HX_STACK_LINE(1063)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1067,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1068)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1068)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1068)
		tmp->set_scaleX(tmp1);
		HX_STACK_LINE(1069)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1069)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1069)
		tmp2->set_scaleY(tmp3);
		HX_STACK_LINE(1072)
		::flixel::util::FlxPoint tmp4 = this->_flashOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1072)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1072)
		Float tmp6 = (tmp5 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1072)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1072)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1072)
		tmp4->set_x(tmp8);
		HX_STACK_LINE(1073)
		::flixel::util::FlxPoint tmp9 = this->_flashOffset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1073)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1073)
		Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1073)
		Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1073)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1073)
		tmp9->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_FRAME("flixel.FlxCamera","getScale",0x9895fb9d,"flixel.FlxCamera.getScale","flixel/FlxCamera.hx",1081,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1082)
	::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1082)
	::openfl::_legacy::display::Sprite tmp1 = this->flashSprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1082)
	Float tmp2 = tmp1->get_scaleX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1082)
	::openfl::_legacy::display::Sprite tmp3 = this->flashSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1082)
	Float tmp4 = tmp3->get_scaleY();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1082)
	::flixel::util::FlxPoint tmp5 = tmp->set(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1082)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1086,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1087)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1087)
	if ((tmp)){
		HX_STACK_LINE(1089)
		this->width = Value;
		HX_STACK_LINE(1098)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1098)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1098)
		if ((tmp2)){
			HX_STACK_LINE(1100)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1100)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1100)
			::openfl::_legacy::geom::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1101)
			rect->width = Value;
			HX_STACK_LINE(1102)
			::openfl::_legacy::display::Sprite tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1102)
			::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1102)
			tmp5->set_scrollRect(tmp6);
			HX_STACK_LINE(1104)
			::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1104)
			int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1104)
			Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1104)
			Float tmp10 = this->zoom;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1104)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1104)
			tmp7->set_x(tmp11);
			HX_STACK_LINE(1105)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1105)
			int tmp13 = this->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1105)
			int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1105)
			Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1105)
			tmp12->set_x(tmp15);
			HX_STACK_LINE(1107)
			::openfl::_legacy::display::Sprite tmp16 = this->debugLayer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1107)
			::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1107)
			Float tmp18 = tmp17->get_x();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1107)
			tmp16->set_x(tmp18);
		}
	}
	HX_STACK_LINE(1112)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1116,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1117)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	if ((tmp)){
		HX_STACK_LINE(1119)
		this->height = Value;
		HX_STACK_LINE(1128)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1128)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1128)
		if ((tmp2)){
			HX_STACK_LINE(1130)
			::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1130)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_scrollRect();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1130)
			::openfl::_legacy::geom::Rectangle rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1131)
			rect->height = Value;
			HX_STACK_LINE(1132)
			::openfl::_legacy::display::Sprite tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1132)
			::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1132)
			tmp5->set_scrollRect(tmp6);
			HX_STACK_LINE(1134)
			::flixel::util::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1134)
			int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1134)
			Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1134)
			Float tmp10 = this->zoom;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1134)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1134)
			tmp7->set_y(tmp11);
			HX_STACK_LINE(1135)
			::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1135)
			int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1135)
			int tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1135)
			Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1135)
			tmp12->set_y(tmp15);
			HX_STACK_LINE(1137)
			::openfl::_legacy::display::Sprite tmp16 = this->debugLayer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1137)
			::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1137)
			Float tmp18 = tmp17->get_y();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1137)
			tmp16->set_y(tmp18);
		}
	}
	HX_STACK_LINE(1142)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1142)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1146,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1147)
	bool tmp = (Zoom == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1147)
	if ((tmp)){
		HX_STACK_LINE(1149)
		Float tmp1 = ::flixel::FlxCamera_obj::defaultZoom;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1149)
		this->zoom = tmp1;
	}
	else{
		HX_STACK_LINE(1153)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1155)
	Float tmp1 = this->zoom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1155)
	Float tmp2 = this->zoom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1155)
	this->setScale(tmp1,tmp2);
	HX_STACK_LINE(1156)
	Float tmp3 = this->zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1156)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1160,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1161)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1161)
	{
		HX_STACK_LINE(1161)
		bool tmp1 = (Alpha < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1161)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1161)
		if ((tmp1)){
			HX_STACK_LINE(1161)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(1161)
			tmp2 = Alpha;
		}
		HX_STACK_LINE(1161)
		Float lowerBound = tmp2;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1161)
		bool tmp3 = (lowerBound > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1161)
		if ((tmp3)){
			HX_STACK_LINE(1161)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1161)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1161)
	this->alpha = tmp;
	HX_STACK_LINE(1165)
	::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1165)
	Float tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1165)
	tmp1->set_alpha(tmp2);
	HX_STACK_LINE(1167)
	Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1167)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1171,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1172)
	this->angle = Angle;
	HX_STACK_LINE(1173)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1173)
	Float tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1173)
	tmp->set_rotation(tmp1);
	HX_STACK_LINE(1174)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1174)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1178,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1179)
	int tmp = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1179)
	this->color = tmp;
	HX_STACK_LINE(1190)
	::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1190)
	::openfl::_legacy::geom::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1190)
	::openfl::_legacy::geom::ColorTransform tmp3 = tmp2->get_colorTransform();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1190)
	::openfl::_legacy::geom::ColorTransform colorTransform = tmp3;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1191)
	int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1191)
	int tmp5 = (int(tmp4) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1191)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1191)
	colorTransform->redMultiplier = tmp6;
	HX_STACK_LINE(1192)
	int tmp7 = this->color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1192)
	int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1192)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1192)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1192)
	colorTransform->greenMultiplier = tmp10;
	HX_STACK_LINE(1193)
	int tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1193)
	int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1193)
	Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1193)
	colorTransform->blueMultiplier = tmp13;
	HX_STACK_LINE(1194)
	::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1194)
	::openfl::_legacy::geom::Transform tmp15 = tmp14->get_transform();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1194)
	::openfl::_legacy::geom::ColorTransform tmp16 = colorTransform;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1194)
	tmp15->set_colorTransform(tmp16);
	HX_STACK_LINE(1197)
	int tmp17 = Color;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1197)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1201,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1202)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1206)
	bool tmp = Antialiasing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1206)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::_system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxCamera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { outValue = defaultZoom; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { outValue = _storageHead; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { outValue = defaultCameras; return true;  }
	}
	return false;
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCamera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=ioValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"));
	outFields->push(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"));
	outFields->push(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"));
	outFields->push(HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"));
	outFields->push(HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"));
	outFields->push(HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"));
	outFields->push(HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"));
	outFields->push(HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"));
	outFields->push(HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"));
	outFields->push(HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"));
	outFields->push(HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"));
	outFields->push(HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"));
	outFields->push(HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"));
	outFields->push(HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"));
	outFields->push(HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"));
	outFields->push(HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"));
	outFields->push(HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c"));
	outFields->push(HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxCamera_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxShakeDirection),HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,debugLayer),HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_currentStackItem),HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_LOCKON,HX_HCSTRING("STYLE_LOCKON","\x78","\x22","\xf4","\xf8")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_PLATFORMER,HX_HCSTRING("STYLE_PLATFORMER","\x8e","\x29","\x93","\xf7")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_TOPDOWN,HX_HCSTRING("STYLE_TOPDOWN","\xe9","\xd0","\xea","\xa0")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_TOPDOWN_TIGHT,HX_HCSTRING("STYLE_TOPDOWN_TIGHT","\xa8","\x99","\xf6","\xff")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,HX_HCSTRING("STYLE_SCREEN_BY_SCREEN","\x6f","\x68","\xe5","\xd7")},
	{hx::fsInt,(void *) &FlxCamera_obj::STYLE_NO_DEAD_ZONE,HX_HCSTRING("STYLE_NO_DEAD_ZONE","\x57","\xf7","\x52","\x0d")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_BOTH_AXES,HX_HCSTRING("SHAKE_BOTH_AXES","\xca","\xd6","\xb4","\x74")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,HX_HCSTRING("SHAKE_HORIZONTAL_ONLY","\x0e","\xc3","\x6f","\x63")},
	{hx::fsInt,(void *) &FlxCamera_obj::SHAKE_VERTICAL_ONLY,HX_HCSTRING("SHAKE_VERTICAL_ONLY","\x7c","\x4e","\x13","\x50")},
	{hx::fsFloat,(void *) &FlxCamera_obj::defaultZoom,HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxCamera_obj::defaultCameras,HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(void *) &FlxCamera_obj::_storageHead,HX_HCSTRING("_storageHead","\xfc","\x9b","\x96","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"),
	HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"),
	HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"),
	HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"),
	HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"),
	HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99"),
	HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"),
	HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"),
	HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"),
	HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"),
	HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"),
	HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"),
	HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b"),
	HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"),
	HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"),
	HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"),
	HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1"),
	HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"),
	HX_HCSTRING("_fxShakeDirection","\xea","\x21","\xf7","\x95"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("debugLayer","\x7e","\x52","\xa4","\x6e"),
	HX_HCSTRING("_currentStackItem","\x61","\xff","\x68","\x5c"),
	HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"),
	HX_HCSTRING("getDrawStackItem","\x61","\x59","\x05","\x9a"),
	HX_HCSTRING("clearDrawStack","\x57","\xf1","\x1b","\x0a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateFollow","\x5a","\x38","\x5a","\xf9"),
	HX_HCSTRING("updateFlash","\xe7","\x9e","\x24","\xe8"),
	HX_HCSTRING("updateFade","\x25","\xa0","\x6a","\xfc"),
	HX_HCSTRING("updateShake","\xfd","\x47","\xb5","\x61"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("stopFX","\xd4","\xb1","\x39","\x0f"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("drawFX","\x56","\x72","\xd6","\xdf"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setBounds","\xb7","\xfb","\xc4","\xc5"),
	HX_HCSTRING("setScale","\x88","\x37","\x03","\x87"),
	HX_HCSTRING("getScale","\x14","\xde","\xa5","\xd8"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

#endif

hx::Class FlxCamera_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STYLE_LOCKON","\x78","\x22","\xf4","\xf8"),
	HX_HCSTRING("STYLE_PLATFORMER","\x8e","\x29","\x93","\xf7"),
	HX_HCSTRING("STYLE_TOPDOWN","\xe9","\xd0","\xea","\xa0"),
	HX_HCSTRING("STYLE_TOPDOWN_TIGHT","\xa8","\x99","\xf6","\xff"),
	HX_HCSTRING("STYLE_SCREEN_BY_SCREEN","\x6f","\x68","\xe5","\xd7"),
	HX_HCSTRING("STYLE_NO_DEAD_ZONE","\x57","\xf7","\x52","\x0d"),
	HX_HCSTRING("SHAKE_BOTH_AXES","\xca","\xd6","\xb4","\x74"),
	HX_HCSTRING("SHAKE_HORIZONTAL_ONLY","\x0e","\xc3","\x6f","\x63"),
	HX_HCSTRING("SHAKE_VERTICAL_ONLY","\x7c","\x4e","\x13","\x50"),
	HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22"),
	HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12"),
	HX_HCSTRING("_storageHead","\xfc","\x9b","\x96","\xa2"),
	::String(null()) };

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxCamera","\x05","\x18","\xe2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCamera_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCamera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCamera_obj >;
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

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace flixel
