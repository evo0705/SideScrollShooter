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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
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
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",22,0xf0fe0d80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(459)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(454)
	this->debugBoundingBoxColor = null();
	HX_STACK_LINE(448)
	this->collisonXDrag = true;
	HX_STACK_LINE(443)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(438)
	this->wasTouching = (int)0;
	HX_STACK_LINE(433)
	this->touching = (int)0;
	HX_STACK_LINE(428)
	this->health = ((Float)1);
	HX_STACK_LINE(424)
	this->maxAngular = ((Float)10000);
	HX_STACK_LINE(420)
	this->angularDrag = ((Float)0);
	HX_STACK_LINE(416)
	this->angularAcceleration = ((Float)0);
	HX_STACK_LINE(412)
	this->angularVelocity = ((Float)0);
	HX_STACK_LINE(408)
	this->elasticity = ((Float)0);
	HX_STACK_LINE(404)
	this->mass = ((Float)1);
	HX_STACK_LINE(365)
	this->immovable = false;
	HX_STACK_LINE(361)
	this->moves = true;
	HX_STACK_LINE(356)
	this->angle = ((Float)0);
	HX_STACK_LINE(351)
	this->pixelPerfectRender = true;
	HX_STACK_LINE(326)
	this->y = ((Float)0);
	HX_STACK_LINE(322)
	this->x = ((Float)0);
	HX_STACK_LINE(476)
	super::__construct();
	HX_STACK_LINE(478)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(478)
	this->set_x(tmp);
	HX_STACK_LINE(479)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	this->set_y(tmp1);
	HX_STACK_LINE(480)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	this->set_width(tmp2);
	HX_STACK_LINE(481)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(481)
	this->set_height(tmp3);
	HX_STACK_LINE(483)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",490,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(491)
		this->collisionType = (int)1;
		HX_STACK_LINE(492)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(492)
			::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(492)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(492)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(492)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(492)
			point->_inPool = false;
			HX_STACK_LINE(492)
			tmp = point;
		}
		HX_STACK_LINE(492)
		this->last = tmp;
		HX_STACK_LINE(493)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(493)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(493)
			::flixel::util::FlxPoint tmp4 = tmp3->set((int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(493)
			::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(493)
			point->_inPool = false;
			HX_STACK_LINE(493)
			tmp1 = point;
		}
		HX_STACK_LINE(493)
		this->scrollFactor = tmp1;
		HX_STACK_LINE(494)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(494)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(494)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(494)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(494)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(494)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(494)
			point->_inPool = false;
			HX_STACK_LINE(494)
			tmp2 = point;
		}
		HX_STACK_LINE(494)
		this->_point = tmp2;
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(496)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(496)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				tmp3 = point;
			}
			HX_STACK_LINE(496)
			this->velocity = tmp3;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPool tmp5 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(496)
				Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(496)
				Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				tmp4 = point;
			}
			HX_STACK_LINE(496)
			this->acceleration = tmp4;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(496)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(496)
				::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(496)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(496)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				tmp5 = point;
			}
			HX_STACK_LINE(496)
			this->drag = tmp5;
			HX_STACK_LINE(496)
			::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::flixel::util::FlxPool tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint tmp9 = tmp8->set((int)10000,(int)10000);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(496)
				::flixel::util::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(496)
				point->_inPool = false;
				HX_STACK_LINE(496)
				tmp6 = point;
			}
			HX_STACK_LINE(496)
			this->maxVelocity = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",503,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(504)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(504)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(504)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(504)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(504)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(504)
			point->_inPool = false;
			HX_STACK_LINE(504)
			tmp = point;
		}
		HX_STACK_LINE(504)
		this->velocity = tmp;
		HX_STACK_LINE(505)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(505)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(505)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(505)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(505)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(505)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(505)
			::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(505)
			point->_inPool = false;
			HX_STACK_LINE(505)
			tmp1 = point;
		}
		HX_STACK_LINE(505)
		this->acceleration = tmp1;
		HX_STACK_LINE(506)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(506)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(506)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(506)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(506)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(506)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(506)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(506)
			::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(506)
			point->_inPool = false;
			HX_STACK_LINE(506)
			tmp2 = point;
		}
		HX_STACK_LINE(506)
		this->drag = tmp2;
		HX_STACK_LINE(507)
		::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(507)
			::flixel::util::FlxPoint tmp6 = tmp5->set((int)10000,(int)10000);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(507)
			::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(507)
			point->_inPool = false;
			HX_STACK_LINE(507)
			tmp3 = point;
		}
		HX_STACK_LINE(507)
		this->maxVelocity = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",515,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(516)
		this->super::destroy();
		HX_STACK_LINE(518)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		this->velocity = tmp1;
		HX_STACK_LINE(519)
		::flixel::util::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(519)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(519)
		this->acceleration = tmp3;
		HX_STACK_LINE(520)
		::flixel::util::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(520)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		this->drag = tmp5;
		HX_STACK_LINE(521)
		::flixel::util::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(521)
		::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(521)
		this->maxVelocity = tmp7;
		HX_STACK_LINE(522)
		::flixel::util::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(522)
		::flixel::util::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(522)
		this->scrollFactor = tmp9;
		HX_STACK_LINE(523)
		::flixel::util::FlxPoint tmp10 = this->last;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(523)
		::flixel::util::FlxPoint tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(523)
		this->last = tmp11;
		HX_STACK_LINE(524)
		::flixel::util::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(524)
		::flixel::util::FlxPoint tmp13 = ::flixel::util::FlxDestroyUtil_obj::put(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(524)
		this->_point = tmp13;
		HX_STACK_LINE(525)
		this->_cameras = null();
	}
return null();
}


Void FlxObject_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",533,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(536)
		this->super::update();
		HX_STACK_LINE(539)
		::flixel::util::FlxPoint tmp = this->last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		tmp->set_x(tmp1);
		HX_STACK_LINE(540)
		::flixel::util::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(540)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(540)
		tmp2->set_y(tmp3);
		HX_STACK_LINE(542)
		bool tmp4 = this->moves;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(542)
		if ((tmp4)){
			HX_STACK_LINE(544)
			Float tmp5 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			Float dt = tmp5;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(544)
			Float tmp6 = this->angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			Float tmp7 = this->angularAcceleration;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			Float tmp8 = this->angularDrag;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			Float tmp9 = this->maxAngular;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			Float tmp10 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			Float tmp11 = this->angularVelocity;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(544)
			Float tmp13 = (((Float)0.5) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(544)
			Float velocityDelta = tmp13;		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(544)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp14 = _g->angle;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(544)
				Float tmp15 = this->angularVelocity;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(544)
				Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(544)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(544)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(544)
				_g->set_angle(tmp18);
			}
			HX_STACK_LINE(544)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(544)
			Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp16 = this->acceleration;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(544)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp18 = this->drag;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(544)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp20 = this->maxVelocity;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(544)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(544)
			Float tmp22 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp15,tmp17,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(544)
			Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(544)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(544)
			Float tmp26 = (((Float)0.5) * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(544)
			velocityDelta = tmp26;
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp28 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(544)
				_g->set_x(tmp28);
			}
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(544)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(544)
			Float tmp29 = dt;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(544)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(544)
			Float delta = tmp30;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint tmp31 = this->velocity;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g = tmp31;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp32 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(544)
				_g->set_x(tmp32);
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp31 = (_g->x + delta);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(544)
				_g->set_x(tmp31);
			}
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp31 = this->velocity;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(544)
			Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp33 = this->acceleration;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(544)
			Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp35 = this->drag;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(544)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp37 = this->maxVelocity;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(544)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(544)
			Float tmp39 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp32,tmp34,tmp36,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp40 = this->velocity;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(544)
			Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(544)
			Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(544)
			Float tmp43 = (((Float)0.5) * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(544)
			velocityDelta = tmp43;
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint tmp44 = this->velocity;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g = tmp44;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp45 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(544)
				_g->set_y(tmp45);
			}
			HX_STACK_LINE(544)
			::flixel::util::FlxPoint tmp44 = this->velocity;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(544)
			Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(544)
			Float tmp46 = dt;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(544)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(544)
			delta = tmp47;
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint tmp48 = this->velocity;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(544)
				::flixel::util::FlxPoint _g = tmp48;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp49 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(544)
				_g->set_y(tmp49);
			}
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(544)
				Float tmp48 = (_g->y + delta);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(544)
				_g->set_y(tmp48);
			}
		}
		HX_STACK_LINE(547)
		int tmp5 = this->touching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		this->wasTouching = tmp5;
		HX_STACK_LINE(548)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",556,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		Float tmp = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		Float dt = tmp;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(559)
		Float tmp1 = this->angularVelocity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(559)
		Float tmp2 = this->angularAcceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(559)
		Float tmp3 = this->angularDrag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(559)
		Float tmp4 = this->maxAngular;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		Float tmp5 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(559)
		Float tmp6 = this->angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(559)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(559)
		Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(559)
		Float velocityDelta = tmp8;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(560)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(561)
			Float tmp9 = _g->angle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(561)
			Float tmp10 = this->angularVelocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(561)
			Float tmp11 = dt;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(561)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(561)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(561)
			_g->set_angle(tmp13);
		}
		HX_STACK_LINE(562)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(564)
		::flixel::util::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(564)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(564)
		::flixel::util::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(564)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(564)
		::flixel::util::FlxPoint tmp13 = this->drag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(564)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(564)
		::flixel::util::FlxPoint tmp15 = this->maxVelocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(564)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(564)
		Float tmp17 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp10,tmp12,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(564)
		::flixel::util::FlxPoint tmp18 = this->velocity;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(564)
		Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(564)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(564)
		Float tmp21 = (((Float)0.5) * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(564)
		velocityDelta = tmp21;
		HX_STACK_LINE(565)
		{
			HX_STACK_LINE(565)
			::flixel::util::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(565)
			::flixel::util::FlxPoint _g = tmp22;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(565)
			Float tmp23 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(565)
			_g->set_x(tmp23);
		}
		HX_STACK_LINE(566)
		::flixel::util::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(566)
		Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(566)
		Float tmp24 = dt;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(566)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(566)
		Float delta = tmp25;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			::flixel::util::FlxPoint tmp26 = this->velocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(567)
			::flixel::util::FlxPoint _g = tmp26;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			Float tmp27 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(567)
			_g->set_x(tmp27);
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(568)
			Float tmp26 = (_g->x + delta);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(568)
			_g->set_x(tmp26);
		}
		HX_STACK_LINE(570)
		::flixel::util::FlxPoint tmp26 = this->velocity;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(570)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(570)
		::flixel::util::FlxPoint tmp28 = this->acceleration;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(570)
		Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(570)
		::flixel::util::FlxPoint tmp30 = this->drag;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(570)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(570)
		::flixel::util::FlxPoint tmp32 = this->maxVelocity;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(570)
		Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(570)
		Float tmp34 = ::flixel::util::FlxVelocity_obj::computeVelocity(tmp27,tmp29,tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(570)
		::flixel::util::FlxPoint tmp35 = this->velocity;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(570)
		Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(570)
		Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(570)
		Float tmp38 = (((Float)0.5) * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(570)
		velocityDelta = tmp38;
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint tmp39 = this->velocity;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(571)
			::flixel::util::FlxPoint _g = tmp39;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(571)
			Float tmp40 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(571)
			_g->set_y(tmp40);
		}
		HX_STACK_LINE(572)
		::flixel::util::FlxPoint tmp39 = this->velocity;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(572)
		Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(572)
		Float tmp41 = dt;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(572)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(572)
		delta = tmp42;
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			::flixel::util::FlxPoint tmp43 = this->velocity;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(573)
			::flixel::util::FlxPoint _g = tmp43;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(573)
			Float tmp44 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(573)
			_g->set_y(tmp44);
		}
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(574)
			Float tmp43 = (_g->y + delta);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(574)
			_g->set_y(tmp43);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",581,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(583)
		this->super::draw();
		HX_STACK_LINE(584)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		bool tmp1 = tmp->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		if ((tmp1)){
			HX_STACK_LINE(585)
			this->drawDebug();
		}
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",599,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(600)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(600)
			bool tmp1 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(600)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(600)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(600)
			if ((tmp2)){
				HX_STACK_LINE(600)
				tmp3 = (ObjectOrGroup->collisionType == (int)2);
			}
			else{
				HX_STACK_LINE(600)
				tmp3 = true;
			}
			HX_STACK_LINE(600)
			if ((tmp3)){
				HX_STACK_LINE(600)
				bool tmp4 = (ObjectOrGroup->collisionType == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(600)
				if ((tmp4)){
					HX_STACK_LINE(600)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(600)
					bool tmp5 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(600)
					if ((tmp5)){
						HX_STACK_LINE(600)
						::flixel::group::FlxSpriteGroup tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(600)
						tmp6 = hx::TCast< ::flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup);
						HX_STACK_LINE(600)
						group = tmp6->group;
					}
				}
			}
			HX_STACK_LINE(600)
			tmp = group;
		}
		HX_STACK_LINE(600)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(601)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		if ((tmp1)){
			HX_STACK_LINE(603)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				Dynamic tmp3 = this->overlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(603)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(603)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(603)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(603)
				if ((tmp4)){
					HX_STACK_LINE(603)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(603)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(603)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(603)
					while((true)){
						HX_STACK_LINE(603)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(603)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(603)
						if ((tmp6)){
							HX_STACK_LINE(603)
							break;
						}
						HX_STACK_LINE(603)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(603)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(603)
						basic = tmp8;
						HX_STACK_LINE(603)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(603)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(603)
						if ((tmp9)){
							HX_STACK_LINE(603)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(603)
							bool tmp12 = InScreenSpace;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(603)
							::flixel::FlxCamera tmp13 = Camera;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(603)
							::flixel::FlxBasic tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(603)
							bool tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(603)
							::flixel::FlxCamera tmp16 = tmp13;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(603)
							tmp10 = Callback(tmp14,(int)0,(int)0,tmp15,tmp16).Cast< bool >();
						}
						else{
							HX_STACK_LINE(603)
							tmp10 = false;
						}
						HX_STACK_LINE(603)
						if ((tmp10)){
							HX_STACK_LINE(603)
							result = true;
							HX_STACK_LINE(603)
							break;
						}
					}
				}
				HX_STACK_LINE(603)
				tmp2 = result;
			}
			HX_STACK_LINE(603)
			return tmp2;
		}
		HX_STACK_LINE(606)
		bool tmp2 = (ObjectOrGroup->collisionType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		if ((tmp2)){
			HX_STACK_LINE(610)
			::flixel::tile::FlxTilemap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			tmp3 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(ObjectOrGroup);
			HX_STACK_LINE(610)
			bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(610)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(610)
			bool tmp6 = tmp3->overlaps(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(610)
			return tmp6;
		}
		HX_STACK_LINE(613)
		::flixel::FlxObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(613)
		tmp3 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(613)
		::flixel::FlxObject object = tmp3;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(614)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(614)
		if ((tmp5)){
			HX_STACK_LINE(616)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(616)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(616)
			Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(616)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(616)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(616)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(616)
			if ((tmp11)){
				HX_STACK_LINE(616)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(616)
				Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(616)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(616)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(616)
				Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(616)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(616)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(616)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(616)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(616)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(616)
				tmp12 = (tmp13 < tmp22);
			}
			else{
				HX_STACK_LINE(616)
				tmp12 = false;
			}
			HX_STACK_LINE(616)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(616)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(616)
			if ((tmp13)){
				HX_STACK_LINE(617)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(617)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(617)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(617)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(617)
				Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(617)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(617)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(617)
				tmp14 = (tmp21 > tmp24);
			}
			else{
				HX_STACK_LINE(616)
				tmp14 = false;
			}
			HX_STACK_LINE(616)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(616)
			if ((tmp14)){
				HX_STACK_LINE(617)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(617)
				Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(617)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(617)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(617)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(617)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(617)
				tmp15 = (tmp16 < tmp22);
			}
			else{
				HX_STACK_LINE(616)
				tmp15 = false;
			}
			HX_STACK_LINE(616)
			return tmp15;
		}
		HX_STACK_LINE(620)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		if ((tmp6)){
			HX_STACK_LINE(622)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(622)
			Camera = tmp7;
		}
		HX_STACK_LINE(624)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(624)
		::flixel::util::FlxPoint tmp8 = object->getScreenXY(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(624)
		::flixel::util::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(625)
		::flixel::util::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(625)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(625)
		this->getScreenXY(tmp9,tmp10);
		HX_STACK_LINE(626)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(626)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(626)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(626)
		::flixel::util::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(626)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(626)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(626)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(626)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(626)
		if ((tmp17)){
			HX_STACK_LINE(626)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(626)
			::flixel::util::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(626)
			::flixel::util::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(626)
			::flixel::util::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(626)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(626)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(626)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(626)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(626)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(626)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(626)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(626)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(626)
			tmp18 = false;
		}
		HX_STACK_LINE(626)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(626)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(626)
		if ((tmp19)){
			HX_STACK_LINE(627)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(627)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(627)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(627)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(627)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(627)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(627)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(627)
			::flixel::util::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(627)
			::flixel::util::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(627)
			::flixel::util::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(627)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(627)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(626)
			tmp20 = false;
		}
		HX_STACK_LINE(626)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(626)
		if ((tmp20)){
			HX_STACK_LINE(627)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(627)
			::flixel::util::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(627)
			::flixel::util::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(627)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(627)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(627)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(627)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(627)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(627)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(626)
			tmp21 = false;
		}
		HX_STACK_LINE(626)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",631,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(632)
	::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	bool tmp1 = InScreenSpace;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(632)
	bool tmp3 = this->overlaps(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(632)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",647,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(648)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(648)
			bool tmp1 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(648)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(648)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(648)
			if ((tmp2)){
				HX_STACK_LINE(648)
				tmp3 = (ObjectOrGroup->collisionType == (int)2);
			}
			else{
				HX_STACK_LINE(648)
				tmp3 = true;
			}
			HX_STACK_LINE(648)
			if ((tmp3)){
				HX_STACK_LINE(648)
				bool tmp4 = (ObjectOrGroup->collisionType == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(648)
				if ((tmp4)){
					HX_STACK_LINE(648)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(648)
					bool tmp5 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(648)
					if ((tmp5)){
						HX_STACK_LINE(648)
						::flixel::group::FlxSpriteGroup tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(648)
						tmp6 = hx::TCast< ::flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup);
						HX_STACK_LINE(648)
						group = tmp6->group;
					}
				}
			}
			HX_STACK_LINE(648)
			tmp = group;
		}
		HX_STACK_LINE(648)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(649)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		if ((tmp1)){
			HX_STACK_LINE(651)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				Dynamic tmp3 = this->overlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(651)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(651)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(651)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(651)
				if ((tmp4)){
					HX_STACK_LINE(651)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(651)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(651)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(651)
					while((true)){
						HX_STACK_LINE(651)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(651)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(651)
						if ((tmp6)){
							HX_STACK_LINE(651)
							break;
						}
						HX_STACK_LINE(651)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(651)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(651)
						basic = tmp8;
						HX_STACK_LINE(651)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(651)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(651)
						if ((tmp9)){
							HX_STACK_LINE(651)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(651)
							Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(651)
							Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(651)
							bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(651)
							::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(651)
							::flixel::FlxBasic tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(651)
							Float tmp17 = tmp12;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(651)
							Float tmp18 = tmp13;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(651)
							bool tmp19 = tmp14;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(651)
							::flixel::FlxCamera tmp20 = tmp15;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(651)
							tmp10 = Callback(tmp16,tmp17,tmp18,tmp19,tmp20).Cast< bool >();
						}
						else{
							HX_STACK_LINE(651)
							tmp10 = false;
						}
						HX_STACK_LINE(651)
						if ((tmp10)){
							HX_STACK_LINE(651)
							result = true;
							HX_STACK_LINE(651)
							break;
						}
					}
				}
				HX_STACK_LINE(651)
				tmp2 = result;
			}
			HX_STACK_LINE(651)
			return tmp2;
		}
		HX_STACK_LINE(654)
		bool tmp2 = (ObjectOrGroup->collisionType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(654)
		if ((tmp2)){
			HX_STACK_LINE(660)
			::flixel::tile::FlxTilemap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(660)
			tmp3 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(ObjectOrGroup);
			HX_STACK_LINE(660)
			::flixel::tile::FlxTilemap tilemap = tmp3;		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(661)
			Float tmp4 = tilemap->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(661)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(661)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(661)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(661)
			Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(661)
			Float tmp9 = tilemap->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(661)
			Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(661)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(661)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(661)
			Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(661)
			bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(661)
			::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(661)
			bool tmp16 = tilemap->overlapsAt(tmp8,tmp13,hx::ObjectPtr<OBJ_>(this),tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(661)
			return tmp16;
		}
		HX_STACK_LINE(664)
		::flixel::FlxObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		tmp3 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(664)
		::flixel::FlxObject object = tmp3;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(665)
		bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(665)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		if ((tmp5)){
			HX_STACK_LINE(667)
			Float tmp6 = object->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(667)
			Float tmp7 = object->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			Float tmp9 = X;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(667)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(667)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(667)
			if ((tmp11)){
				HX_STACK_LINE(667)
				Float tmp13 = object->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(667)
				Float tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(667)
				Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(667)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(667)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(667)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(667)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(667)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(667)
				tmp12 = (tmp13 < tmp20);
			}
			else{
				HX_STACK_LINE(667)
				tmp12 = false;
			}
			HX_STACK_LINE(667)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(667)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(667)
			if ((tmp13)){
				HX_STACK_LINE(668)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(668)
				Float tmp16 = object->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(668)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(668)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(668)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(668)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(668)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(668)
				Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(668)
				tmp14 = (tmp21 > tmp22);
			}
			else{
				HX_STACK_LINE(667)
				tmp14 = false;
			}
			HX_STACK_LINE(667)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(667)
			if ((tmp14)){
				HX_STACK_LINE(668)
				Float tmp16 = object->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(668)
				Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(668)
				Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(668)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(668)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(668)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(668)
				tmp15 = (tmp16 < tmp21);
			}
			else{
				HX_STACK_LINE(667)
				tmp15 = false;
			}
			HX_STACK_LINE(667)
			return tmp15;
		}
		HX_STACK_LINE(671)
		bool tmp6 = (Camera == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(671)
		if ((tmp6)){
			HX_STACK_LINE(673)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(673)
			Camera = tmp7;
		}
		HX_STACK_LINE(675)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(675)
		::flixel::util::FlxPoint tmp8 = object->getScreenXY(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(675)
		::flixel::util::FlxPoint objectScreenPos = tmp8;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(676)
		::flixel::util::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(676)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(676)
		this->getScreenXY(tmp9,tmp10);
		HX_STACK_LINE(677)
		Float tmp11 = objectScreenPos->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(677)
		Float tmp12 = object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(677)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(677)
		::flixel::util::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(677)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(677)
		bool tmp16 = (tmp13 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(677)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(677)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(677)
		if ((tmp17)){
			HX_STACK_LINE(677)
			Float tmp19 = objectScreenPos->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(677)
			::flixel::util::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(677)
			::flixel::util::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(677)
			::flixel::util::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(677)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(677)
			Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(677)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(677)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(677)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(677)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(677)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(677)
			tmp18 = (tmp19 < tmp29);
		}
		else{
			HX_STACK_LINE(677)
			tmp18 = false;
		}
		HX_STACK_LINE(677)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(677)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(677)
		if ((tmp19)){
			HX_STACK_LINE(678)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(678)
			Float tmp22 = object->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(678)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(678)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(678)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(678)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(678)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(678)
			::flixel::util::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(678)
			::flixel::util::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(678)
			::flixel::util::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(678)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(678)
			tmp20 = (tmp27 > tmp31);
		}
		else{
			HX_STACK_LINE(677)
			tmp20 = false;
		}
		HX_STACK_LINE(677)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(677)
		if ((tmp20)){
			HX_STACK_LINE(678)
			Float tmp22 = objectScreenPos->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(678)
			::flixel::util::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(678)
			::flixel::util::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(678)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(678)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(678)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(678)
			Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(678)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(678)
			tmp21 = (tmp22 < tmp29);
		}
		else{
			HX_STACK_LINE(677)
			tmp21 = false;
		}
		HX_STACK_LINE(677)
		return tmp21;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",682,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(683)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(683)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(683)
	::flixel::FlxBasic tmp2 = ObjectOrGroup;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(683)
	bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(683)
	::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(683)
	bool tmp5 = this->overlapsAt(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(683)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",695,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(696)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		if ((tmp1)){
			HX_STACK_LINE(698)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(698)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(698)
			bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(698)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(698)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(698)
			if ((tmp5)){
				HX_STACK_LINE(698)
				Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(698)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(698)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(698)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(698)
				Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(698)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(698)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(698)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(698)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(698)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(698)
				tmp6 = (tmp7 < tmp16);
			}
			else{
				HX_STACK_LINE(698)
				tmp6 = false;
			}
			HX_STACK_LINE(698)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(698)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(698)
			if ((tmp7)){
				HX_STACK_LINE(698)
				Float tmp9 = point->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(698)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(698)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(698)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(698)
				tmp8 = (tmp9 > tmp12);
			}
			else{
				HX_STACK_LINE(698)
				tmp8 = false;
			}
			HX_STACK_LINE(698)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(698)
			if ((tmp8)){
				HX_STACK_LINE(698)
				Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(698)
				Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(698)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(698)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(698)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(698)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(698)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(698)
				tmp9 = (tmp10 < tmp16);
			}
			else{
				HX_STACK_LINE(698)
				tmp9 = false;
			}
			HX_STACK_LINE(698)
			return tmp9;
		}
		HX_STACK_LINE(701)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(701)
		if ((tmp2)){
			HX_STACK_LINE(703)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(703)
			Camera = tmp3;
		}
		HX_STACK_LINE(705)
		Float tmp3 = point->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(705)
		Float X = tmp5;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(706)
		Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(706)
		Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(706)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(706)
		Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(707)
		::flixel::util::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(707)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(707)
		this->getScreenXY(tmp9,tmp10);
		HX_STACK_LINE(708)
		{
			HX_STACK_LINE(708)
			bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(708)
			if ((tmp11)){
				HX_STACK_LINE(708)
				point->put();
			}
		}
		HX_STACK_LINE(709)
		Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(709)
		::flixel::util::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(709)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(709)
		bool tmp14 = (tmp11 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(709)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(709)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(709)
		if ((tmp15)){
			HX_STACK_LINE(709)
			Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(709)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(709)
			Float tmp22 = this->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(709)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(709)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(709)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(709)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(709)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(709)
			tmp16 = (tmp17 < tmp27);
		}
		else{
			HX_STACK_LINE(709)
			tmp16 = false;
		}
		HX_STACK_LINE(709)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(709)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(709)
		if ((tmp17)){
			HX_STACK_LINE(709)
			Float tmp19 = Y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(709)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(709)
			tmp18 = (tmp19 > tmp23);
		}
		else{
			HX_STACK_LINE(709)
			tmp18 = false;
		}
		HX_STACK_LINE(709)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(709)
		if ((tmp18)){
			HX_STACK_LINE(709)
			Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(709)
			::flixel::util::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(709)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(709)
			Float tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(709)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(709)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(709)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(709)
			tmp19 = (tmp20 < tmp27);
		}
		else{
			HX_STACK_LINE(709)
			tmp19 = false;
		}
		HX_STACK_LINE(709)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",718,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	::flixel::util::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(719)
	bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(719)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(719)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(719)
	if ((tmp6)){
		HX_STACK_LINE(719)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(719)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(719)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(719)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(719)
			::flixel::util::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(719)
			::flixel::util::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(719)
			::flixel::util::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(719)
			::flixel::util::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(719)
			Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(719)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(719)
			tmp11 = tmp16;
		}
		HX_STACK_LINE(719)
		tmp7 = (tmp10 < tmp11);
	}
	else{
		HX_STACK_LINE(719)
		tmp7 = false;
	}
	HX_STACK_LINE(719)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(719)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(719)
	if ((tmp8)){
		HX_STACK_LINE(719)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(719)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(719)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(719)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(719)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(719)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(719)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(719)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(719)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(719)
		::flixel::util::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(719)
		::flixel::util::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(719)
		::flixel::util::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(719)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(719)
		tmp9 = (tmp18 > tmp22);
	}
	else{
		HX_STACK_LINE(719)
		tmp9 = false;
	}
	HX_STACK_LINE(719)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(719)
	if ((tmp9)){
		HX_STACK_LINE(719)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(719)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(719)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(719)
			::flixel::util::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(719)
			::flixel::util::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(719)
			::flixel::util::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(719)
			Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(719)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(719)
		tmp10 = (tmp12 < tmp13);
	}
	else{
		HX_STACK_LINE(719)
		tmp10 = false;
	}
	HX_STACK_LINE(719)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::util::FlxPoint FlxObject_obj::getScreenXY( ::flixel::util::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenXY",0x16aa3354,"flixel.FlxObject.getScreenXY","flixel/FlxObject.hx",730,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(731)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(731)
	if ((tmp)){
		HX_STACK_LINE(733)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(733)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(733)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(733)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(733)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(733)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(733)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(733)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(733)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(733)
			point1->_inPool = false;
			HX_STACK_LINE(733)
			tmp1 = point1;
		}
		HX_STACK_LINE(733)
		point = tmp1;
	}
	HX_STACK_LINE(735)
	bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(735)
	if ((tmp1)){
		HX_STACK_LINE(737)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		Camera = tmp2;
	}
	HX_STACK_LINE(739)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(739)
	Float tmp3 = Camera->scroll->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(739)
	::flixel::util::FlxPoint tmp4 = this->scrollFactor;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(739)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(739)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(739)
	Float tmp7 = (tmp2 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(739)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(739)
	Float tmp9 = Camera->scroll->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(739)
	::flixel::util::FlxPoint tmp10 = this->scrollFactor;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(739)
	Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(739)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(739)
	Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(739)
	::flixel::util::FlxPoint tmp14 = point->set(tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(739)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

::flixel::util::FlxPoint FlxObject_obj::getMidpoint( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",749,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(750)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(750)
	if ((tmp)){
		HX_STACK_LINE(752)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		{
			HX_STACK_LINE(752)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(752)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(752)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(752)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(752)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(752)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(752)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(752)
			::flixel::util::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(752)
			point1->_inPool = false;
			HX_STACK_LINE(752)
			tmp1 = point1;
		}
		HX_STACK_LINE(752)
		point = tmp1;
	}
	HX_STACK_LINE(754)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(754)
	Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(754)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(754)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(754)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(754)
	Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(754)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(754)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(754)
	::flixel::util::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(754)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",765,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(766)
		this->revive();
		HX_STACK_LINE(767)
		this->touching = (int)0;
		HX_STACK_LINE(768)
		this->wasTouching = (int)0;
		HX_STACK_LINE(769)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		this->setPosition(tmp,tmp1);
		HX_STACK_LINE(770)
		::flixel::util::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(770)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(770)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(770)
		tmp2->set(tmp3,tmp4);
		HX_STACK_LINE(771)
		::flixel::util::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(771)
		tmp5->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",781,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(782)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	if ((tmp)){
		HX_STACK_LINE(784)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(784)
		Camera = tmp1;
	}
	HX_STACK_LINE(786)
	::flixel::util::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(786)
	this->getScreenXY(tmp1,tmp2);
	HX_STACK_LINE(787)
	::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(787)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(787)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(787)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(787)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(787)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(787)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(787)
	if ((tmp8)){
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(787)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(787)
		int tmp14 = Camera->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(787)
		tmp9 = (tmp13 < tmp14);
	}
	else{
		HX_STACK_LINE(787)
		tmp9 = false;
	}
	HX_STACK_LINE(787)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(787)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(787)
	if ((tmp10)){
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(787)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(787)
		Float tmp16 = this->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(787)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(787)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(787)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(787)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(787)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(787)
		tmp11 = (tmp21 > (int)0);
	}
	else{
		HX_STACK_LINE(787)
		tmp11 = false;
	}
	HX_STACK_LINE(787)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(787)
	if ((tmp11)){
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(787)
		::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(787)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(787)
		int tmp16 = Camera->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(787)
		tmp12 = (tmp15 < tmp16);
	}
	else{
		HX_STACK_LINE(787)
		tmp12 = false;
	}
	HX_STACK_LINE(787)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",798,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(799)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(799)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(799)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(799)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(799)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",810,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(811)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(811)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(811)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(811)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(811)
	if ((tmp3)){
		HX_STACK_LINE(811)
		int tmp5 = this->wasTouching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(811)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(811)
		int tmp7 = Direction;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(811)
		int tmp8 = (int(tmp6) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(811)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(811)
		tmp4 = (tmp9 <= (int)0);
	}
	else{
		HX_STACK_LINE(811)
		tmp4 = false;
	}
	HX_STACK_LINE(811)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",821,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(822)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(822)
		Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(822)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(822)
		this->health = tmp2;
		HX_STACK_LINE(823)
		Float tmp3 = this->health;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(823)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(823)
		if ((tmp4)){
			HX_STACK_LINE(825)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",837,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(838)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(838)
		this->set_x(tmp);
		HX_STACK_LINE(839)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(839)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",849,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(850)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		this->set_width(tmp);
		HX_STACK_LINE(851)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(851)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

Void FlxObject_obj::drawDebug( ){
{
		HX_STACK_FRAME("flixel.FlxObject","drawDebug",0x2ad45ea0,"flixel.FlxObject.drawDebug","flixel/FlxObject.hx",856,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(857)
		bool tmp = this->ignoreDrawDebug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(857)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(857)
		if ((tmp1)){
			HX_STACK_LINE(859)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(859)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(859)
			while((true)){
				HX_STACK_LINE(859)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(859)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(859)
				if ((tmp3)){
					HX_STACK_LINE(859)
					break;
				}
				HX_STACK_LINE(859)
				::flixel::FlxCamera tmp4 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(859)
				::flixel::FlxCamera camera = tmp4;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(859)
				++(_g);
				HX_STACK_LINE(861)
				::flixel::FlxCamera tmp5 = camera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(861)
				this->drawDebugOnCamera(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,drawDebug,(void))

Void FlxObject_obj::drawDebugOnCamera( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.FlxObject","drawDebugOnCamera",0x0b2ef7e4,"flixel.FlxObject.drawDebugOnCamera","flixel/FlxObject.hx",873,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(874)
		bool tmp = Camera->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(874)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(874)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(874)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(874)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		if ((tmp4)){
			HX_STACK_LINE(874)
			bool tmp6 = Camera->exists;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(874)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(874)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(874)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(874)
			tmp5 = true;
		}
		HX_STACK_LINE(874)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(874)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(874)
		if ((tmp6)){
			HX_STACK_LINE(874)
			::flixel::FlxCamera tmp8 = Camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(874)
			::flixel::FlxCamera tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(874)
			bool tmp10 = this->isOnScreen(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(874)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(874)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(874)
			tmp7 = !(tmp12);
		}
		else{
			HX_STACK_LINE(874)
			tmp7 = true;
		}
		HX_STACK_LINE(874)
		if ((tmp7)){
			HX_STACK_LINE(876)
			return null();
		}
		HX_STACK_LINE(880)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(880)
		Float tmp9 = Camera->scroll->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(880)
		::flixel::util::FlxPoint tmp10 = this->scrollFactor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(880)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(880)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(880)
		Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(880)
		Float boundingBoxX = tmp13;		HX_STACK_VAR(boundingBoxX,"boundingBoxX");
		HX_STACK_LINE(881)
		Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(881)
		Float tmp15 = Camera->scroll->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(881)
		::flixel::util::FlxPoint tmp16 = this->scrollFactor;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(881)
		Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(881)
		Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(881)
		Float tmp19 = (tmp14 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(881)
		Float boundingBoxY = tmp19;		HX_STACK_VAR(boundingBoxY,"boundingBoxY");
		HX_STACK_LINE(883)
		bool tmp20 = this->pixelPerfectRender;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(883)
		if ((tmp20)){
			HX_STACK_LINE(885)
			Float tmp21 = boundingBoxX;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(885)
			int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(885)
			boundingBoxX = tmp22;
			HX_STACK_LINE(886)
			Float tmp23 = boundingBoxY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(886)
			int tmp24 = ::Math_obj::floor(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(886)
			boundingBoxY = tmp24;
		}
		HX_STACK_LINE(895)
		Dynamic tmp21 = this->debugBoundingBoxColor;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(895)
		Dynamic color = tmp21;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(896)
		bool tmp22 = (color == null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(896)
		if ((tmp22)){
			HX_STACK_LINE(898)
			int tmp23 = this->allowCollisions;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(898)
			bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(898)
			if ((tmp24)){
				HX_STACK_LINE(900)
				int tmp25 = this->allowCollisions;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(900)
				bool tmp26 = (tmp25 != (int)4369);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(900)
				if ((tmp26)){
					HX_STACK_LINE(902)
					color = (int)-16181;
				}
				HX_STACK_LINE(904)
				bool tmp27 = this->immovable;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(904)
				if ((tmp27)){
					HX_STACK_LINE(906)
					color = (int)-16744448;
				}
				else{
					HX_STACK_LINE(910)
					color = (int)-65536;
				}
			}
			HX_STACK_LINE(915)
			bool tmp25 = (color == null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(915)
			if ((tmp25)){
				HX_STACK_LINE(917)
				color = (int)-16776961;
			}
		}
		HX_STACK_LINE(934)
		::openfl::_legacy::display::Graphics tmp23 = Camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(934)
		::openfl::_legacy::display::Graphics gfx = tmp23;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(935)
		Dynamic tmp24 = color;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(935)
		gfx->lineStyle((int)1,tmp24,((Float)0.5),null(),null(),null(),null(),null());
		HX_STACK_LINE(936)
		Float tmp25 = boundingBoxX;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(936)
		Float tmp26 = boundingBoxY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(936)
		Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(936)
		Float tmp28 = this->get_height();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(936)
		gfx->drawRect(tmp25,tmp26,tmp27,tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,drawDebugOnCamera,(void))

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",945,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(947)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	{
		HX_STACK_LINE(947)
		::flixel::util::FlxPool tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(947)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(947)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(947)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(947)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		_this->value = tmp3;
		HX_STACK_LINE(947)
		tmp = _this;
	}
	HX_STACK_LINE(948)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(948)
	{
		HX_STACK_LINE(948)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(948)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(948)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(948)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(948)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(948)
		_this->value = tmp4;
		HX_STACK_LINE(948)
		tmp1 = _this;
	}
	HX_STACK_LINE(949)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	{
		HX_STACK_LINE(949)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(949)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(949)
		{
			HX_STACK_LINE(949)
			::flixel::util::FlxPool tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(949)
			::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(949)
			::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(949)
			_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
			HX_STACK_LINE(949)
			_this->value = value;
			HX_STACK_LINE(949)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(950)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(950)
	{
		HX_STACK_LINE(950)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(950)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(950)
		{
			HX_STACK_LINE(950)
			::flixel::util::FlxPool tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(950)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(950)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(950)
			_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
			HX_STACK_LINE(950)
			_this->value = value;
			HX_STACK_LINE(950)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(951)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(951)
	{
		HX_STACK_LINE(951)
		::flixel::util::FlxPool tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(951)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(951)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(951)
		_this->label = HX_HCSTRING("visible","\x72","\x78","\x24","\xa3");
		HX_STACK_LINE(951)
		bool tmp7 = this->visible;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(951)
		_this->value = tmp7;
		HX_STACK_LINE(951)
		tmp4 = _this;
	}
	HX_STACK_LINE(952)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(952)
	{
		HX_STACK_LINE(952)
		::flixel::util::FlxPool tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(952)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(952)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(952)
		_this->label = HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e");
		HX_STACK_LINE(952)
		::flixel::util::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(952)
		_this->value = tmp8;
		HX_STACK_LINE(952)
		tmp5 = _this;
	}
	HX_STACK_LINE(946)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(946)
	return tmp6;
}


Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",956,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(957)
	Float tmp = this->x = NewX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",961,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(962)
	Float tmp = this->y = NewY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",966,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(968)
	bool tmp = (Width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(968)
	if ((tmp)){
		HX_STACK_LINE(970)
		::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(970)
		::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(970)
		tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("An object's width cannot be smaller than 0. Use offset for sprites to control the hitbox position!","\xf5","\x8d","\x0b","\x95"),tmp2,true);
	}
	else{
		HX_STACK_LINE(975)
		this->width = Width;
	}
	HX_STACK_LINE(980)
	Float tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",984,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(986)
	bool tmp = (Height < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	if ((tmp)){
		HX_STACK_LINE(988)
		::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(988)
		::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("An object's height cannot be smaller than 0. Use offset for sprites to control the hitbox position!","\xb0","\x49","\x90","\xe4"),tmp2,true);
	}
	else{
		HX_STACK_LINE(993)
		this->height = Height;
	}
	HX_STACK_LINE(998)
	Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1002,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1003)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1007,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1008)
	Float tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1008)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1012,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1013)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1013)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1013)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1013)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1017,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1018)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	if ((tmp)){
		HX_STACK_LINE(1020)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(1024)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(1026)
	bool tmp1 = Solid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1026)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1030,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1031)
	Float tmp = this->angle = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1031)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1035,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1036)
	bool tmp = this->moves = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1040,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1041)
	bool tmp = this->immovable = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1041)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

::flixel::FlxCamera FlxObject_obj::get_camera( ){
	HX_STACK_FRAME("flixel.FlxObject","get_camera",0x5105f25d,"flixel.FlxObject.get_camera","flixel/FlxObject.hx",1045,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1046)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1046)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1046)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1046)
	if ((tmp1)){
		HX_STACK_LINE(1046)
		int tmp3 = this->_cameras->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1046)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1046)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(1046)
		tmp2 = true;
	}
	HX_STACK_LINE(1046)
	::flixel::FlxCamera tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1046)
	if ((tmp2)){
		HX_STACK_LINE(1046)
		tmp3 = ::flixel::FlxCamera_obj::defaultCameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	else{
		HX_STACK_LINE(1046)
		tmp3 = this->_cameras->__get((int)0).StaticCast< ::flixel::FlxCamera >();
	}
	HX_STACK_LINE(1046)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_camera,return )

::flixel::FlxCamera FlxObject_obj::set_camera( ::flixel::FlxCamera Value){
	HX_STACK_FRAME("flixel.FlxObject","set_camera",0x548390d1,"flixel.FlxObject.set_camera","flixel/FlxObject.hx",1050,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1051)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	if ((tmp)){
		HX_STACK_LINE(1052)
		this->_cameras = Array_obj< ::Dynamic >::__new().Add(Value);
	}
	else{
		HX_STACK_LINE(1054)
		::flixel::FlxCamera tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1054)
		this->_cameras[(int)0] = tmp1;
	}
	HX_STACK_LINE(1055)
	::flixel::FlxCamera tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1055)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_camera,return )

Array< ::Dynamic > FlxObject_obj::get_cameras( ){
	HX_STACK_FRAME("flixel.FlxObject","get_cameras",0x942e1f76,"flixel.FlxObject.get_cameras","flixel/FlxObject.hx",1059,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1060)
	bool tmp = (this->_cameras == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1060)
	if ((tmp)){
		HX_STACK_LINE(1060)
		return ::flixel::FlxCamera_obj::defaultCameras;
	}
	else{
		HX_STACK_LINE(1060)
		return this->_cameras;
	}
	HX_STACK_LINE(1060)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_cameras,return )

Array< ::Dynamic > FlxObject_obj::set_cameras( Array< ::Dynamic > Value){
	HX_STACK_FRAME("flixel.FlxObject","set_cameras",0x9e9b2682,"flixel.FlxObject.set_cameras","flixel/FlxObject.hx",1065,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1065)
	return this->_cameras = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_cameras,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1069,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1070)
	bool tmp = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1070)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::util::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::util::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",77,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(78)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	bool tmp2 = ::flixel::FlxObject_obj::separateX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	bool separatedX = tmp2;		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(79)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	bool tmp5 = ::flixel::FlxObject_obj::separateY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	bool separatedY = tmp5;		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(80)
	bool tmp6 = separatedX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	if ((tmp7)){
		HX_STACK_LINE(80)
		tmp8 = separatedY;
	}
	else{
		HX_STACK_LINE(80)
		tmp8 = true;
	}
	HX_STACK_LINE(80)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",91,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(93)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(94)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(95)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(95)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(95)
		tmp1 = false;
	}
	HX_STACK_LINE(95)
	if ((tmp1)){
		HX_STACK_LINE(97)
		return false;
	}
	HX_STACK_LINE(101)
	bool tmp2 = (Object1->collisionType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	if ((tmp2)){
		HX_STACK_LINE(103)
		::flixel::tile::FlxTilemap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		tmp3 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object1);
		HX_STACK_LINE(103)
		::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		bool tmp6 = tmp3->overlapsWithCallback(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		return tmp6;
	}
	HX_STACK_LINE(105)
	bool tmp3 = (Object2->collisionType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	if ((tmp3)){
		HX_STACK_LINE(107)
		::flixel::tile::FlxTilemap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		tmp4 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object2);
		HX_STACK_LINE(107)
		::flixel::FlxObject tmp5 = Object1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		Dynamic tmp6 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		bool tmp7 = tmp4->overlapsWithCallback(tmp5,tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		return tmp7;
	}
	HX_STACK_LINE(111)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(112)
	Float tmp4 = Object1->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	Float tmp5 = Object1->last->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	Float obj1delta = tmp6;		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(113)
	Float tmp7 = Object2->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	Float tmp8 = Object2->last->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	Float obj2delta = tmp9;		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(115)
	bool tmp10 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(115)
	if ((tmp10)){
		HX_STACK_LINE(118)
		bool tmp11 = (obj1delta > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		if ((tmp11)){
			HX_STACK_LINE(118)
			tmp12 = obj1delta;
		}
		else{
			HX_STACK_LINE(118)
			Float tmp13 = obj1delta;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(118)
			tmp12 = -(tmp13);
		}
		HX_STACK_LINE(118)
		Float obj1deltaAbs = tmp12;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(119)
		bool tmp13 = (obj2delta > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(119)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(119)
		if ((tmp13)){
			HX_STACK_LINE(119)
			tmp14 = obj2delta;
		}
		else{
			HX_STACK_LINE(119)
			Float tmp15 = obj2delta;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			tmp14 = -(tmp15);
		}
		HX_STACK_LINE(119)
		Float obj2deltaAbs = tmp14;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(121)
		::flixel::util::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::flixel::util::FlxRect tmp16 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			::flixel::util::FlxRect _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(121)
			Float tmp17 = Object1->get_width();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			Float tmp18 = obj1deltaAbs;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(121)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(121)
			Float Width = tmp19;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(121)
			Float tmp20 = Object1->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(121)
			Float Height = tmp20;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(121)
			Float tmp21 = Object1->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(121)
			bool tmp22 = (obj1delta > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(121)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(121)
			if ((tmp22)){
				HX_STACK_LINE(121)
				tmp23 = obj1delta;
			}
			else{
				HX_STACK_LINE(121)
				tmp23 = (int)0;
			}
			HX_STACK_LINE(121)
			Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(121)
			_this->x = tmp24;
			HX_STACK_LINE(121)
			Float tmp25 = Object1->last->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(121)
			_this->y = tmp25;
			HX_STACK_LINE(121)
			_this->width = Width;
			HX_STACK_LINE(121)
			_this->height = Height;
			HX_STACK_LINE(121)
			tmp15 = _this;
		}
		HX_STACK_LINE(121)
		::flixel::util::FlxRect obj1rect = tmp15;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(122)
		::flixel::util::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::flixel::util::FlxRect tmp17 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(122)
			::flixel::util::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(122)
			Float tmp18 = Object2->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(122)
			Float tmp19 = obj2deltaAbs;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(122)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(122)
			Float Width = tmp20;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(122)
			Float tmp21 = Object2->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(122)
			Float Height = tmp21;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(122)
			Float tmp22 = Object2->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(122)
			bool tmp23 = (obj2delta > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(122)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(122)
			if ((tmp23)){
				HX_STACK_LINE(122)
				tmp24 = obj2delta;
			}
			else{
				HX_STACK_LINE(122)
				tmp24 = (int)0;
			}
			HX_STACK_LINE(122)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(122)
			_this->x = tmp25;
			HX_STACK_LINE(122)
			Float tmp26 = Object2->last->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(122)
			_this->y = tmp26;
			HX_STACK_LINE(122)
			_this->width = Width;
			HX_STACK_LINE(122)
			_this->height = Height;
			HX_STACK_LINE(122)
			tmp16 = _this;
		}
		HX_STACK_LINE(122)
		::flixel::util::FlxRect obj2rect = tmp16;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(124)
		Float tmp17 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		Float tmp18 = obj2rect->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(124)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(124)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(124)
		if ((tmp20)){
			HX_STACK_LINE(124)
			Float tmp22 = obj1rect->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(124)
			Float tmp23 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(124)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(124)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(124)
			tmp21 = (tmp22 < tmp25);
		}
		else{
			HX_STACK_LINE(124)
			tmp21 = false;
		}
		HX_STACK_LINE(124)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(124)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		if ((tmp22)){
			HX_STACK_LINE(124)
			Float tmp24 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(124)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(124)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(124)
			Float tmp27 = obj2rect->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(124)
			tmp23 = (tmp26 > tmp27);
		}
		else{
			HX_STACK_LINE(124)
			tmp23 = false;
		}
		HX_STACK_LINE(124)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		if ((tmp23)){
			HX_STACK_LINE(124)
			Float tmp25 = obj1rect->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(124)
			Float tmp26 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(124)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(124)
			tmp24 = (tmp25 < tmp27);
		}
		else{
			HX_STACK_LINE(124)
			tmp24 = false;
		}
		HX_STACK_LINE(124)
		if ((tmp24)){
			HX_STACK_LINE(126)
			Float tmp25 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(126)
			Float tmp26 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(126)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(126)
			Float maxOverlap = tmp27;		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(129)
			bool tmp28 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(129)
			if ((tmp28)){
				HX_STACK_LINE(131)
				Float tmp29 = Object1->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(131)
				Float tmp30 = Object1->get_width();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(131)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(131)
				Float tmp32 = Object2->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(131)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(131)
				overlap = tmp33;
				HX_STACK_LINE(132)
				bool tmp34 = (overlap > maxOverlap);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(132)
				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(132)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(132)
				bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(132)
				if ((tmp36)){
					HX_STACK_LINE(132)
					int tmp38 = (int(Object1->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(132)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(132)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(132)
					tmp37 = (tmp40 == (int)0);
				}
				else{
					HX_STACK_LINE(132)
					tmp37 = true;
				}
				HX_STACK_LINE(132)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(132)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(132)
				if ((tmp38)){
					HX_STACK_LINE(132)
					int tmp40 = (int(Object2->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(132)
					int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(132)
					tmp39 = (tmp41 == (int)0);
				}
				else{
					HX_STACK_LINE(132)
					tmp39 = true;
				}
				HX_STACK_LINE(132)
				if ((tmp39)){
					HX_STACK_LINE(134)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(138)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(139)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(142)
				bool tmp29 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(142)
				if ((tmp29)){
					HX_STACK_LINE(144)
					Float tmp30 = Object1->x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(144)
					Float tmp31 = Object2->get_width();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(144)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(144)
					Float tmp33 = Object2->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(144)
					Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(144)
					overlap = tmp34;
					HX_STACK_LINE(145)
					Float tmp35 = overlap;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(145)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(145)
					Float tmp37 = maxOverlap;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(145)
					bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(145)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(145)
					bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(145)
					bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(145)
					if ((tmp40)){
						HX_STACK_LINE(145)
						int tmp42 = (int(Object1->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(145)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(145)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(145)
						tmp41 = (tmp44 == (int)0);
					}
					else{
						HX_STACK_LINE(145)
						tmp41 = true;
					}
					HX_STACK_LINE(145)
					bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(145)
					bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(145)
					if ((tmp42)){
						HX_STACK_LINE(145)
						int tmp44 = (int(Object2->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(145)
						int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(145)
						tmp43 = (tmp45 == (int)0);
					}
					else{
						HX_STACK_LINE(145)
						tmp43 = true;
					}
					HX_STACK_LINE(145)
					if ((tmp43)){
						HX_STACK_LINE(147)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(151)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(152)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(159)
	bool tmp11 = (overlap != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(159)
	if ((tmp11)){
		HX_STACK_LINE(161)
		Float tmp12 = Object1->velocity->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(161)
		Float obj1v = tmp12;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(162)
		Float tmp13 = Object2->velocity->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(162)
		Float obj2v = tmp13;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(164)
		bool tmp14 = obj1immovable;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(164)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(164)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(164)
		if ((tmp16)){
			HX_STACK_LINE(164)
			bool tmp18 = obj2immovable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(164)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(164)
			tmp17 = !(tmp19);
		}
		else{
			HX_STACK_LINE(164)
			tmp17 = false;
		}
		HX_STACK_LINE(164)
		if ((tmp17)){
			HX_STACK_LINE(166)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(167)
			Float tmp18 = (Object1->x - overlap);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(167)
			Object1->set_x(tmp18);
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				Float tmp19 = (_g->x + overlap);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(168)
				_g->set_x(tmp19);
			}
			HX_STACK_LINE(170)
			Float tmp19 = (obj2v * obj2v);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			Float tmp20 = Object2->mass;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(170)
			Float tmp22 = Object1->mass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(170)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			bool tmp25 = (obj2v > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(170)
			int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(170)
			if ((tmp25)){
				HX_STACK_LINE(170)
				tmp26 = (int)1;
			}
			else{
				HX_STACK_LINE(170)
				tmp26 = (int)-1;
			}
			HX_STACK_LINE(170)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(170)
			Float obj1velocity = tmp27;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(171)
			Float tmp28 = (obj1v * obj1v);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(171)
			Float tmp29 = Object1->mass;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(171)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(171)
			Float tmp31 = Object2->mass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(171)
			Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(171)
			Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(171)
			bool tmp34 = (obj1v > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(171)
			int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(171)
			if ((tmp34)){
				HX_STACK_LINE(171)
				tmp35 = (int)1;
			}
			else{
				HX_STACK_LINE(171)
				tmp35 = (int)-1;
			}
			HX_STACK_LINE(171)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(171)
			Float obj2velocity = tmp36;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(172)
			Float tmp37 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(172)
			Float tmp38 = (tmp37 * ((Float)0.5));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(172)
			Float average = tmp38;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(173)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(174)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(175)
			Float tmp39 = average;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(175)
			Float tmp40 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(175)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(175)
			Object1->velocity->set_x(tmp41);
			HX_STACK_LINE(176)
			Float tmp42 = average;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(176)
			Float tmp43 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(176)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(176)
			Object2->velocity->set_x(tmp44);
		}
		else{
			HX_STACK_LINE(178)
			bool tmp18 = obj1immovable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(178)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(178)
			if ((tmp19)){
				HX_STACK_LINE(180)
				Float tmp20 = (Object1->x - overlap);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(180)
				Object1->set_x(tmp20);
				HX_STACK_LINE(181)
				Float tmp21 = obj2v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(181)
				Float tmp22 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(181)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(181)
				Object1->velocity->set_x(tmp23);
			}
			else{
				HX_STACK_LINE(183)
				bool tmp20 = obj2immovable;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(183)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(183)
				if ((tmp21)){
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(185)
						Float tmp22 = (_g->x + overlap);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(185)
						_g->set_x(tmp22);
					}
					HX_STACK_LINE(186)
					Float tmp22 = obj1v;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(186)
					Float tmp23 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(186)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(186)
					Object2->velocity->set_x(tmp24);
				}
			}
		}
		HX_STACK_LINE(188)
		return true;
	}
	else{
		HX_STACK_LINE(192)
		return false;
	}
	HX_STACK_LINE(159)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",204,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(206)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(207)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(208)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp)){
		HX_STACK_LINE(208)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(208)
		tmp1 = false;
	}
	HX_STACK_LINE(208)
	if ((tmp1)){
		HX_STACK_LINE(210)
		return false;
	}
	HX_STACK_LINE(214)
	bool tmp2 = (Object1->collisionType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	if ((tmp2)){
		HX_STACK_LINE(216)
		::flixel::tile::FlxTilemap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		tmp3 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object1);
		HX_STACK_LINE(216)
		::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		bool tmp6 = tmp3->overlapsWithCallback(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		return tmp6;
	}
	HX_STACK_LINE(218)
	bool tmp3 = (Object2->collisionType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	if ((tmp3)){
		HX_STACK_LINE(220)
		::flixel::tile::FlxTilemap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		tmp4 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object2);
		HX_STACK_LINE(220)
		::flixel::FlxObject tmp5 = Object1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		Dynamic tmp6 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		bool tmp7 = tmp4->overlapsWithCallback(tmp5,tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		return tmp7;
	}
	HX_STACK_LINE(224)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(225)
	Float tmp4 = Object1->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	Float tmp5 = Object1->last->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(225)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	Float obj1delta = tmp6;		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(226)
	Float tmp7 = Object2->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(226)
	Float tmp8 = Object2->last->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(226)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(226)
	Float obj2delta = tmp9;		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(228)
	bool tmp10 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(228)
	if ((tmp10)){
		HX_STACK_LINE(231)
		bool tmp11 = (obj1delta > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(231)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		if ((tmp11)){
			HX_STACK_LINE(231)
			tmp12 = obj1delta;
		}
		else{
			HX_STACK_LINE(231)
			Float tmp13 = obj1delta;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(231)
			tmp12 = -(tmp13);
		}
		HX_STACK_LINE(231)
		Float obj1deltaAbs = tmp12;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(232)
		bool tmp13 = (obj2delta > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(232)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(232)
		if ((tmp13)){
			HX_STACK_LINE(232)
			tmp14 = obj2delta;
		}
		else{
			HX_STACK_LINE(232)
			Float tmp15 = obj2delta;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(232)
			tmp14 = -(tmp15);
		}
		HX_STACK_LINE(232)
		Float obj2deltaAbs = tmp14;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		HX_STACK_LINE(234)
		::flixel::util::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::flixel::util::FlxRect tmp16 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(234)
			::flixel::util::FlxRect _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(234)
			Float tmp17 = Object1->get_width();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(234)
			Float Width = tmp17;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(234)
			Float tmp18 = Object1->get_height();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(234)
			Float tmp19 = obj1deltaAbs;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(234)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(234)
			Float Height = tmp20;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(234)
			_this->x = Object1->x;
			HX_STACK_LINE(234)
			Float tmp21 = Object1->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(234)
			bool tmp22 = (obj1delta > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(234)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(234)
			if ((tmp22)){
				HX_STACK_LINE(234)
				tmp23 = obj1delta;
			}
			else{
				HX_STACK_LINE(234)
				tmp23 = (int)0;
			}
			HX_STACK_LINE(234)
			Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(234)
			_this->y = tmp24;
			HX_STACK_LINE(234)
			_this->width = Width;
			HX_STACK_LINE(234)
			_this->height = Height;
			HX_STACK_LINE(234)
			tmp15 = _this;
		}
		HX_STACK_LINE(234)
		::flixel::util::FlxRect obj1rect = tmp15;		HX_STACK_VAR(obj1rect,"obj1rect");
		HX_STACK_LINE(235)
		::flixel::util::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::flixel::util::FlxRect tmp17 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			::flixel::util::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(235)
			Float tmp18 = Object2->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			Float Width = tmp18;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(235)
			Float tmp19 = Object2->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			Float tmp20 = obj2deltaAbs;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(235)
			Float Height = tmp21;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(235)
			_this->x = Object2->x;
			HX_STACK_LINE(235)
			Float tmp22 = Object2->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(235)
			bool tmp23 = (obj2delta > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(235)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(235)
			if ((tmp23)){
				HX_STACK_LINE(235)
				tmp24 = obj2delta;
			}
			else{
				HX_STACK_LINE(235)
				tmp24 = (int)0;
			}
			HX_STACK_LINE(235)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(235)
			_this->y = tmp25;
			HX_STACK_LINE(235)
			_this->width = Width;
			HX_STACK_LINE(235)
			_this->height = Height;
			HX_STACK_LINE(235)
			tmp16 = _this;
		}
		HX_STACK_LINE(235)
		::flixel::util::FlxRect obj2rect = tmp16;		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(237)
		Float tmp17 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(237)
		Float tmp18 = obj2rect->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(237)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(237)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(237)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(237)
		if ((tmp20)){
			HX_STACK_LINE(237)
			Float tmp22 = obj1rect->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(237)
			Float tmp23 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(237)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(237)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(237)
			tmp21 = (tmp22 < tmp25);
		}
		else{
			HX_STACK_LINE(237)
			tmp21 = false;
		}
		HX_STACK_LINE(237)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(237)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(237)
		if ((tmp22)){
			HX_STACK_LINE(237)
			Float tmp24 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(237)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(237)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(237)
			Float tmp27 = obj2rect->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(237)
			tmp23 = (tmp26 > tmp27);
		}
		else{
			HX_STACK_LINE(237)
			tmp23 = false;
		}
		HX_STACK_LINE(237)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(237)
		if ((tmp23)){
			HX_STACK_LINE(237)
			Float tmp25 = obj1rect->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(237)
			Float tmp26 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(237)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(237)
			tmp24 = (tmp25 < tmp27);
		}
		else{
			HX_STACK_LINE(237)
			tmp24 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp24)){
			HX_STACK_LINE(239)
			Float tmp25 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			Float tmp26 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(239)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(239)
			Float maxOverlap = tmp27;		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(242)
			bool tmp28 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(242)
			if ((tmp28)){
				HX_STACK_LINE(244)
				Float tmp29 = Object1->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(244)
				Float tmp30 = Object1->get_height();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(244)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(244)
				Float tmp32 = Object2->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(244)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(244)
				overlap = tmp33;
				HX_STACK_LINE(245)
				bool tmp34 = (overlap > maxOverlap);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(245)
				bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(245)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(245)
				bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(245)
				if ((tmp36)){
					HX_STACK_LINE(245)
					int tmp38 = (int(Object1->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(245)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(245)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(245)
					tmp37 = (tmp40 == (int)0);
				}
				else{
					HX_STACK_LINE(245)
					tmp37 = true;
				}
				HX_STACK_LINE(245)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(245)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(245)
				if ((tmp38)){
					HX_STACK_LINE(245)
					int tmp40 = (int(Object2->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(245)
					int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(245)
					tmp39 = (tmp41 == (int)0);
				}
				else{
					HX_STACK_LINE(245)
					tmp39 = true;
				}
				HX_STACK_LINE(245)
				if ((tmp39)){
					HX_STACK_LINE(247)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(251)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(252)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(255)
				bool tmp29 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(255)
				if ((tmp29)){
					HX_STACK_LINE(257)
					Float tmp30 = Object1->y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(257)
					Float tmp31 = Object2->get_height();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(257)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(257)
					Float tmp33 = Object2->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(257)
					Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(257)
					overlap = tmp34;
					HX_STACK_LINE(258)
					Float tmp35 = overlap;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(258)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(258)
					Float tmp37 = maxOverlap;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(258)
					bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(258)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(258)
					bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(258)
					bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(258)
					if ((tmp40)){
						HX_STACK_LINE(258)
						int tmp42 = (int(Object1->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(258)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(258)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						tmp41 = (tmp44 == (int)0);
					}
					else{
						HX_STACK_LINE(258)
						tmp41 = true;
					}
					HX_STACK_LINE(258)
					bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(258)
					bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(258)
					if ((tmp42)){
						HX_STACK_LINE(258)
						int tmp44 = (int(Object2->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(258)
						tmp43 = (tmp45 == (int)0);
					}
					else{
						HX_STACK_LINE(258)
						tmp43 = true;
					}
					HX_STACK_LINE(258)
					if ((tmp43)){
						HX_STACK_LINE(260)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(264)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(265)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(272)
	bool tmp11 = (overlap != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(272)
	if ((tmp11)){
		HX_STACK_LINE(274)
		Float tmp12 = Object1->velocity->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(274)
		Float obj1v = tmp12;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(275)
		Float tmp13 = Object2->velocity->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(275)
		Float obj2v = tmp13;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(277)
		bool tmp14 = obj1immovable;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(277)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(277)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(277)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(277)
		if ((tmp16)){
			HX_STACK_LINE(277)
			bool tmp18 = obj2immovable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(277)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(277)
			tmp17 = !(tmp19);
		}
		else{
			HX_STACK_LINE(277)
			tmp17 = false;
		}
		HX_STACK_LINE(277)
		if ((tmp17)){
			HX_STACK_LINE(279)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(280)
			Float tmp18 = (Object1->y - overlap);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(280)
			Object1->set_y(tmp18);
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(281)
				Float tmp19 = (_g->y + overlap);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(281)
				_g->set_y(tmp19);
			}
			HX_STACK_LINE(283)
			Float tmp19 = (obj2v * obj2v);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(283)
			Float tmp20 = Object2->mass;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(283)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(283)
			Float tmp22 = Object1->mass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(283)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(283)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(283)
			bool tmp25 = (obj2v > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(283)
			int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(283)
			if ((tmp25)){
				HX_STACK_LINE(283)
				tmp26 = (int)1;
			}
			else{
				HX_STACK_LINE(283)
				tmp26 = (int)-1;
			}
			HX_STACK_LINE(283)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(283)
			Float obj1velocity = tmp27;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(284)
			Float tmp28 = (obj1v * obj1v);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(284)
			Float tmp29 = Object1->mass;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(284)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(284)
			Float tmp31 = Object2->mass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(284)
			Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(284)
			Float tmp33 = ::Math_obj::sqrt(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(284)
			bool tmp34 = (obj1v > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(284)
			int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(284)
			if ((tmp34)){
				HX_STACK_LINE(284)
				tmp35 = (int)1;
			}
			else{
				HX_STACK_LINE(284)
				tmp35 = (int)-1;
			}
			HX_STACK_LINE(284)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(284)
			Float obj2velocity = tmp36;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(285)
			Float tmp37 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(285)
			Float tmp38 = (tmp37 * ((Float)0.5));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(285)
			Float average = tmp38;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(286)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(287)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(288)
			Float tmp39 = average;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(288)
			Float tmp40 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(288)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(288)
			Object1->velocity->set_y(tmp41);
			HX_STACK_LINE(289)
			Float tmp42 = average;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(289)
			Float tmp43 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(289)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(289)
			Object2->velocity->set_y(tmp44);
		}
		else{
			HX_STACK_LINE(291)
			bool tmp18 = obj1immovable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(291)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(291)
			if ((tmp19)){
				HX_STACK_LINE(293)
				Float tmp20 = (Object1->y - overlap);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(293)
				Object1->set_y(tmp20);
				HX_STACK_LINE(294)
				Float tmp21 = obj2v;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(294)
				Float tmp22 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(294)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(294)
				Object1->velocity->set_y(tmp23);
				HX_STACK_LINE(296)
				bool tmp24 = Object1->collisonXDrag;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(296)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(296)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(296)
				if ((tmp25)){
					HX_STACK_LINE(296)
					tmp26 = Object2->active;
				}
				else{
					HX_STACK_LINE(296)
					tmp26 = false;
				}
				HX_STACK_LINE(296)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(296)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(296)
				if ((tmp27)){
					HX_STACK_LINE(296)
					tmp28 = Object2->moves;
				}
				else{
					HX_STACK_LINE(296)
					tmp28 = false;
				}
				HX_STACK_LINE(296)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(296)
				if ((tmp28)){
					HX_STACK_LINE(296)
					tmp29 = (obj1delta > obj2delta);
				}
				else{
					HX_STACK_LINE(296)
					tmp29 = false;
				}
				HX_STACK_LINE(296)
				if ((tmp29)){
					HX_STACK_LINE(298)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(298)
					Float tmp30 = _g->x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(298)
					Float tmp31 = Object2->x;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(298)
					Float tmp32 = Object2->last->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(298)
					Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(298)
					Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(298)
					_g->set_x(tmp34);
				}
			}
			else{
				HX_STACK_LINE(301)
				bool tmp20 = obj2immovable;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(301)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(301)
				if ((tmp21)){
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(303)
						Float tmp22 = (_g->y + overlap);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(303)
						_g->set_y(tmp22);
					}
					HX_STACK_LINE(304)
					Float tmp22 = obj1v;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(304)
					Float tmp23 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(304)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(304)
					Object2->velocity->set_y(tmp24);
					HX_STACK_LINE(306)
					bool tmp25 = Object2->collisonXDrag;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(306)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(306)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(306)
					if ((tmp26)){
						HX_STACK_LINE(306)
						tmp27 = Object1->active;
					}
					else{
						HX_STACK_LINE(306)
						tmp27 = false;
					}
					HX_STACK_LINE(306)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(306)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(306)
					if ((tmp28)){
						HX_STACK_LINE(306)
						tmp29 = Object1->moves;
					}
					else{
						HX_STACK_LINE(306)
						tmp29 = false;
					}
					HX_STACK_LINE(306)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(306)
					if ((tmp29)){
						HX_STACK_LINE(306)
						tmp30 = (obj1delta < obj2delta);
					}
					else{
						HX_STACK_LINE(306)
						tmp30 = false;
					}
					HX_STACK_LINE(306)
					if ((tmp30)){
						HX_STACK_LINE(308)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(308)
						Float tmp31 = _g->x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(308)
						Float tmp32 = Object1->x;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(308)
						Float tmp33 = Object1->last->x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(308)
						Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(308)
						Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(308)
						_g->set_x(tmp35);
					}
				}
			}
		}
		HX_STACK_LINE(311)
		return true;
	}
	else{
		HX_STACK_LINE(315)
		return false;
	}
	HX_STACK_LINE(272)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_cameras,"_cameras");
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_cameras,"_cameras");
}

Dynamic FlxObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return get_camera(); }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return get_cameras(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"_cameras") ) { return _cameras; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_camera") ) { return get_camera_dyn(); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return set_camera_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cameras") ) { return get_cameras_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return set_cameras_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { return debugBoundingBoxColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = SEPARATE_BIAS; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = _firstSeparateFlxRect; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = _secondSeparateFlxRect; return true;  }
	}
	return false;
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == hx::paccAlways) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { if (inCallProp == hx::paccAlways) return set_camera(inValue); }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameras") ) { if (inCallProp == hx::paccAlways) return set_cameras(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cameras") ) { _cameras=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == hx::paccAlways) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == hx::paccAlways) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { debugBoundingBoxColor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast< ::flixel::util::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast< ::flixel::util::FlxRect >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("touching","\x83","\x16","\x25","\x00"));
	outFields->push(HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"));
	outFields->push(HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61"));
	outFields->push(HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_HCSTRING("mass","\xf4","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_HCSTRING("touching","\x83","\x16","\x25","\x00")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,debugBoundingBoxColor),HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,ignoreDrawDebug),HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxObject_obj,_cameras),HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0")},
	{hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxObject_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxObject_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3")},
	{hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80")},
	{hx::fsInt,(void *) &FlxObject_obj::WALL,HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39")},
	{hx::fsInt,(void *) &FlxObject_obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("touching","\x83","\x16","\x25","\x00"),
	HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"),
	HX_HCSTRING("debugBoundingBoxColor","\x4f","\xf7","\x30","\x61"),
	HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_cameras","\xaf","\xe3","\xe9","\x1c"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("initMotionVars","\x32","\xe4","\x28","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateMotion","\x1f","\x2d","\x21","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("overlapsCallback","\xf1","\x14","\xbf","\xb4"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("overlapsAtCallback","\x04","\xf4","\x81","\x3b"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("inWorldBounds","\x82","\x46","\xf2","\xf1"),
	HX_HCSTRING("getScreenXY","\x23","\xfe","\xa7","\xeb"),
	HX_HCSTRING("getMidpoint","\x7e","\xd8","\xfb","\x50"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isTouching","\x8d","\x28","\xd4","\x7a"),
	HX_HCSTRING("justTouched","\x12","\x59","\xb8","\x91"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("drawDebugOnCamera","\xf3","\x47","\x7b","\xcb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("get_camera","\x6e","\xb6","\x13","\xa8"),
	HX_HCSTRING("set_camera","\xe2","\x54","\x91","\xab"),
	HX_HCSTRING("get_cameras","\x45","\xea","\x2b","\x69"),
	HX_HCSTRING("set_cameras","\x51","\xf1","\x98","\x73"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

hx::Class FlxObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3"),
	HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80"),
	HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e"),
	HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda"),
	HX_HCSTRING("separate","\x63","\x1f","\x1c","\x07"),
	HX_HCSTRING("separateX","\x95","\x57","\x7f","\x31"),
	HX_HCSTRING("separateY","\x96","\x57","\x7f","\x31"),
	::String(null()) };

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxObject","\x1f","\x50","\x95","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxObject_obj >;
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

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= ((Float)4);
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",66,0xf0fe0d80)
		{
			HX_STACK_LINE(66)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(66)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(66)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(66)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(66)
			::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(66)
				::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(66)
				_this->x = X;
				HX_STACK_LINE(66)
				_this->y = Y;
				HX_STACK_LINE(66)
				_this->width = Width;
				HX_STACK_LINE(66)
				_this->height = Height;
				HX_STACK_LINE(66)
				tmp = _this;
			}
			HX_STACK_LINE(66)
			::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(66)
			rect->_inPool = false;
			HX_STACK_LINE(66)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",67,0xf0fe0d80)
		{
			HX_STACK_LINE(67)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(67)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(67)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(67)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(67)
			::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				_this->x = X;
				HX_STACK_LINE(67)
				_this->y = Y;
				HX_STACK_LINE(67)
				_this->width = Width;
				HX_STACK_LINE(67)
				_this->height = Height;
				HX_STACK_LINE(67)
				tmp = _this;
			}
			HX_STACK_LINE(67)
			::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(67)
			rect->_inPool = false;
			HX_STACK_LINE(67)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
