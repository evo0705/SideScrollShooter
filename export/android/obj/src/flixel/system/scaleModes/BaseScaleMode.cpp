#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace _system{
namespace scaleModes{

Void BaseScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","new",0xb84381b3,"flixel.system.scaleModes.BaseScaleMode.new","flixel/system/scaleModes/BaseScaleMode.hx",18,0x5a3188fe)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(19)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(19)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(19)
		point->_inPool = false;
		HX_STACK_LINE(19)
		tmp = point;
	}
	HX_STACK_LINE(19)
	this->deviceSize = tmp;
	HX_STACK_LINE(20)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(20)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(20)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(20)
		point->_inPool = false;
		HX_STACK_LINE(20)
		tmp1 = point;
	}
	HX_STACK_LINE(20)
	this->gameSize = tmp1;
	HX_STACK_LINE(21)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(21)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(21)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(21)
		point->_inPool = false;
		HX_STACK_LINE(21)
		tmp2 = point;
	}
	HX_STACK_LINE(21)
	this->scale = tmp2;
	HX_STACK_LINE(22)
	::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(22)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(22)
		::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(22)
		point->_inPool = false;
		HX_STACK_LINE(22)
		tmp3 = point;
	}
	HX_STACK_LINE(22)
	this->offset = tmp3;
}
;
	return null();
}

//BaseScaleMode_obj::~BaseScaleMode_obj() { }

Dynamic BaseScaleMode_obj::__CreateEmpty() { return  new BaseScaleMode_obj; }
hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__new()
{  hx::ObjectPtr< BaseScaleMode_obj > _result_ = new BaseScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic BaseScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseScaleMode_obj > _result_ = new BaseScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void BaseScaleMode_obj::onMeasure( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","onMeasure",0xbc54a592,"flixel.system.scaleModes.BaseScaleMode.onMeasure","flixel/system/scaleModes/BaseScaleMode.hx",26,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(27)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		this->updateGameSize(tmp,tmp1);
		HX_STACK_LINE(28)
		int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		this->updateDeviceSize(tmp2,tmp3);
		HX_STACK_LINE(29)
		this->updateScaleOffset();
		HX_STACK_LINE(30)
		this->updateGameScale();
		HX_STACK_LINE(31)
		this->updateGamePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,onMeasure,(void))

Void BaseScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGameSize",0x99f00e89,"flixel.system.scaleModes.BaseScaleMode.updateGameSize","flixel/system/scaleModes/BaseScaleMode.hx",35,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(36)
		::flixel::util::FlxPoint tmp = this->gameSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateGameSize,(void))

Void BaseScaleMode_obj::updateDeviceSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateDeviceSize",0xb35132ad,"flixel.system.scaleModes.BaseScaleMode.updateDeviceSize","flixel/system/scaleModes/BaseScaleMode.hx",40,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(41)
		::flixel::util::FlxPoint tmp = this->deviceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateDeviceSize,(void))

Void BaseScaleMode_obj::updateScaleOffset( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateScaleOffset",0x13e546c7,"flixel.system.scaleModes.BaseScaleMode.updateScaleOffset","flixel/system/scaleModes/BaseScaleMode.hx",45,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp1 = this->gameSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		tmp->set_x(tmp4);
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp6 = this->gameSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		int tmp8 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		tmp5->set_y(tmp9);
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint tmp10 = ::flixel::_system::scaleModes::BaseScaleMode_obj::zoom;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(49)
		Float tmp11 = ::flixel::FlxCamera_obj::defaultZoom;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		Float tmp12 = ::flixel::FlxCamera_obj::defaultZoom;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(49)
		tmp10->set(tmp11,tmp12);
		HX_STACK_LINE(51)
		::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		if ((tmp14)){
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint tmp15 = ::flixel::_system::scaleModes::BaseScaleMode_obj::zoom;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::flixel::FlxCamera tmp17 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(53)
				::flixel::FlxCamera _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(53)
				Float tmp18 = _this->flashSprite->get_scaleX();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(53)
				Float tmp19 = _this->flashSprite->get_scaleY();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(53)
				tmp16 = _this->_point->set(tmp18,tmp19);
			}
			HX_STACK_LINE(53)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(53)
			tmp15->set_x(tmp17);
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint tmp18 = ::flixel::_system::scaleModes::BaseScaleMode_obj::zoom;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(54)
				::flixel::FlxCamera _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(54)
				Float tmp21 = _this->flashSprite->get_scaleX();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(54)
				Float tmp22 = _this->flashSprite->get_scaleY();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(54)
				tmp19 = _this->_point->set(tmp21,tmp22);
			}
			HX_STACK_LINE(54)
			Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(54)
			tmp18->set_y(tmp20);
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			Float tmp16 = _g->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(57)
			::flixel::util::FlxPoint tmp17 = ::flixel::_system::scaleModes::BaseScaleMode_obj::zoom;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(57)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(57)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(57)
			_g->set_x(tmp19);
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Float tmp16 = _g->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(58)
			::flixel::util::FlxPoint tmp17 = ::flixel::_system::scaleModes::BaseScaleMode_obj::zoom;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(58)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(58)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(58)
			_g->set_y(tmp19);
		}
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint tmp15 = this->offset;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint tmp16 = this->deviceSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		::flixel::util::FlxPoint tmp18 = this->gameSize;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(60)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		Float tmp21 = (tmp20 * ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		tmp15->set_x(tmp22);
		HX_STACK_LINE(61)
		::flixel::util::FlxPoint tmp23 = this->offset;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(61)
		::flixel::util::FlxPoint tmp24 = this->deviceSize;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(61)
		Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(61)
		::flixel::util::FlxPoint tmp26 = this->gameSize;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(61)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(61)
		Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		Float tmp29 = (tmp28 * ((Float)0.5));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		int tmp30 = ::Math_obj::ceil(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(61)
		tmp23->set_y(tmp30);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateScaleOffset,(void))

Void BaseScaleMode_obj::updateGameScale( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGameScale",0x14126fc2,"flixel.system.scaleModes.BaseScaleMode.updateGameScale","flixel/system/scaleModes/BaseScaleMode.hx",65,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::flixel::util::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		tmp->set_scaleX(tmp2);
		HX_STACK_LINE(68)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		::flixel::util::FlxPoint tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		tmp3->set_scaleY(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGameScale,(void))

Void BaseScaleMode_obj::updateGamePosition( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGamePosition",0xebf59271,"flixel.system.scaleModes.BaseScaleMode.updateGamePosition","flixel/system/scaleModes/BaseScaleMode.hx",73,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::flixel::util::FlxPoint tmp1 = this->offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		tmp->set_x(tmp2);
		HX_STACK_LINE(75)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		::flixel::util::FlxPoint tmp4 = this->offset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		tmp3->set_y(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGamePosition,(void))

::flixel::util::FlxPoint BaseScaleMode_obj::zoom;


BaseScaleMode_obj::BaseScaleMode_obj()
{
}

void BaseScaleMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScaleMode);
	HX_MARK_MEMBER_NAME(deviceSize,"deviceSize");
	HX_MARK_MEMBER_NAME(gameSize,"gameSize");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void BaseScaleMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deviceSize,"deviceSize");
	HX_VISIT_MEMBER_NAME(gameSize,"gameSize");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic BaseScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { return gameSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return onMeasure_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { return deviceSize; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGameScale") ) { return updateGameScale_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDeviceSize") ) { return updateDeviceSize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScaleOffset") ) { return updateScaleOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return updateGamePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseScaleMode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { outValue = zoom; return true;  }
	}
	return false;
}

Dynamic BaseScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { gameSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { deviceSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseScaleMode_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=ioValue.Cast< ::flixel::util::FlxPoint >(); return true; }
	}
	return false;
}

void BaseScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"));
	outFields->push(HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,deviceSize),HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,gameSize),HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(void *) &BaseScaleMode_obj::zoom,HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"),
	HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"),
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	HX_HCSTRING("updateDeviceSize","\xe0","\x7b","\xc9","\xff"),
	HX_HCSTRING("updateScaleOffset","\x34","\x0a","\xad","\xb0"),
	HX_HCSTRING("updateGameScale","\xef","\x8d","\x74","\xfd"),
	HX_HCSTRING("updateGamePosition","\x64","\xce","\xf8","\x7d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::zoom,"zoom");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::zoom,"zoom");
};

#endif

hx::Class BaseScaleMode_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	::String(null()) };

void BaseScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.BaseScaleMode","\x41","\x2c","\xf6","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseScaleMode_obj::__GetStatic;
	__mClass->mSetStaticField = &BaseScaleMode_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseScaleMode_obj >;
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

void BaseScaleMode_obj::__boot()
{
struct _Function_0_1{
	inline static ::flixel::util::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/scaleModes/BaseScaleMode.hx",15,0x5a3188fe)
		{
			HX_STACK_LINE(15)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(15)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(15)
			::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(15)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(15)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(15)
			point->_inPool = false;
			HX_STACK_LINE(15)
			return point;
		}
		return null();
	}
};
	zoom= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
