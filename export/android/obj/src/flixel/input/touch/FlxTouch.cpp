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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{
HX_STACK_FRAME("flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",19,0x7bf286c9)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_PointID,"PointID")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int PointID = __o_PointID.Default(0);
{
	HX_STACK_LINE(37)
	this->_last = (int)0;
	HX_STACK_LINE(36)
	this->_current = (int)0;
	HX_STACK_LINE(23)
	this->screenY = (int)0;
	HX_STACK_LINE(22)
	this->screenX = (int)0;
	HX_STACK_LINE(165)
	super::__construct(null(),null());
	HX_STACK_LINE(166)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(166)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(166)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		Float tmp3 = X1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		Float tmp4 = Y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(166)
		point->_inPool = false;
		HX_STACK_LINE(166)
		tmp = point;
	}
	HX_STACK_LINE(166)
	this->_point = tmp;
	HX_STACK_LINE(167)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(167)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(167)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		Float tmp4 = X1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		Float tmp5 = Y1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(167)
		point->_inPool = false;
		HX_STACK_LINE(167)
		tmp1 = point;
	}
	HX_STACK_LINE(167)
	this->_globalScreenPosition = tmp1;
	HX_STACK_LINE(168)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(168)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(168)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		Float tmp5 = X1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		Float tmp6 = Y1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(168)
		point->_inPool = false;
		HX_STACK_LINE(168)
		tmp2 = point;
	}
	HX_STACK_LINE(168)
	this->_justPressedPosition = tmp2;
	HX_STACK_LINE(170)
	::openfl::_legacy::geom::Point tmp3 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	this->_flashPoint = tmp3;
	HX_STACK_LINE(171)
	Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(171)
	Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(171)
	this->updatePosition(tmp4,tmp5);
	HX_STACK_LINE(172)
	this->touchPointID = PointID;
}
;
	return null();
}

//FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID)
{  hx::ObjectPtr< FlxTouch_obj > _result_ = new FlxTouch_obj();
	_result_->__construct(__o_X,__o_Y,__o_PointID);
	return _result_;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > _result_ = new FlxTouch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxTouch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTouch_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTouch_obj >(this); }
Void FlxTouch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","destroy",0x988ff85e,"flixel.input.touch.FlxTouch.destroy","flixel/input/touch/FlxTouch.hx",49,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		this->_point = tmp1;
		HX_STACK_LINE(51)
		::flixel::util::FlxPoint tmp2 = this->_globalScreenPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		this->_globalScreenPosition = tmp3;
		HX_STACK_LINE(52)
		::flixel::util::FlxPoint tmp4 = this->_justPressedPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		this->_justPressedPosition = tmp5;
		HX_STACK_LINE(54)
		this->_point = null();
		HX_STACK_LINE(55)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(56)
		this->_flashPoint = null();
		HX_STACK_LINE(57)
		this->_justPressedPosition = null();
		HX_STACK_LINE(59)
		this->super::destroy();
	}
return null();
}


::flixel::util::FlxPoint FlxTouch_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","getWorldPosition",0x5306e6c1,"flixel.input.touch.FlxTouch.getWorldPosition","flixel/input/touch/FlxTouch.hx",71,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(72)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(74)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		Camera = tmp1;
	}
	HX_STACK_LINE(76)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	if ((tmp1)){
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(78)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(78)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(78)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(78)
			::flixel::util::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(78)
			point1->_inPool = false;
			HX_STACK_LINE(78)
			tmp2 = point1;
		}
		HX_STACK_LINE(78)
		point = tmp2;
	}
	HX_STACK_LINE(80)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::flixel::util::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	this->getScreenPosition(tmp2,tmp3);
	HX_STACK_LINE(81)
	::flixel::util::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	point->set_x(tmp7);
	HX_STACK_LINE(82)
	::flixel::util::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(82)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(82)
	Float tmp10 = Camera->scroll->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(82)
	point->set_y(tmp11);
	HX_STACK_LINE(83)
	::flixel::util::FlxPoint tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getWorldPosition,return )

::flixel::util::FlxPoint FlxTouch_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","getScreenPosition",0x13c003cf,"flixel.input.touch.FlxTouch.getScreenPosition","flixel/input/touch/FlxTouch.hx",95,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(96)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	if ((tmp)){
		HX_STACK_LINE(98)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Camera = tmp1;
	}
	HX_STACK_LINE(100)
	bool tmp1 = (point == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp1)){
		HX_STACK_LINE(102)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(102)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(102)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			::flixel::util::FlxPoint point1 = tmp7;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(102)
			point1->_inPool = false;
			HX_STACK_LINE(102)
			tmp2 = point1;
		}
		HX_STACK_LINE(102)
		point = tmp2;
	}
	HX_STACK_LINE(104)
	::flixel::util::FlxPoint tmp2 = this->_globalScreenPosition;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	Float tmp4 = Camera->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	Float tmp6 = Camera->zoom;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	point->set_x(tmp7);
	HX_STACK_LINE(105)
	::flixel::util::FlxPoint tmp8 = this->_globalScreenPosition;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	Float tmp10 = Camera->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(105)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(105)
	Float tmp12 = Camera->zoom;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(105)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(105)
	point->set_y(tmp13);
	HX_STACK_LINE(106)
	::flixel::util::FlxPoint tmp14 = point;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(106)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,getScreenPosition,return )

bool FlxTouch_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","overlaps",0x59b2ff28,"flixel.input.touch.FlxTouch.overlaps","flixel/input/touch/FlxTouch.hx",119,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(120)
	::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::group::FlxTypedGroup >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp1)){
		HX_STACK_LINE(122)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(123)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(124)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(125)
		::flixel::group::FlxTypedGroup grp = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));		HX_STACK_VAR(grp,"grp");
		HX_STACK_LINE(126)
		Array< ::Dynamic > members = grp->members;		HX_STACK_VAR(members,"members");
		HX_STACK_LINE(127)
		while((true)){
			HX_STACK_LINE(127)
			bool tmp2 = (i < grp->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			if ((tmp3)){
				HX_STACK_LINE(127)
				break;
			}
			HX_STACK_LINE(129)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			::flixel::FlxBasic tmp5 = members->__get(tmp4).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			basic = tmp5;
			HX_STACK_LINE(130)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(130)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(130)
			if ((tmp7)){
				HX_STACK_LINE(130)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(130)
				tmp8 = false;
			}
			HX_STACK_LINE(130)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			if ((tmp8)){
				HX_STACK_LINE(130)
				::flixel::FlxBasic tmp10 = basic;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(130)
				::flixel::FlxCamera tmp11 = Camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(130)
				::flixel::FlxBasic tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(130)
				::flixel::FlxCamera tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(130)
				tmp9 = this->overlaps(tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(130)
				tmp9 = false;
			}
			HX_STACK_LINE(130)
			if ((tmp9)){
				HX_STACK_LINE(132)
				results = true;
				HX_STACK_LINE(133)
				break;
			}
		}
		HX_STACK_LINE(136)
		bool tmp2 = results;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		return tmp2;
	}
	HX_STACK_LINE(138)
	::flixel::FlxObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	tmp2 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
	HX_STACK_LINE(138)
	::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	bool tmp4 = tmp2->overlapsPoint(hx::ObjectPtr<OBJ_>(this),true,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,overlaps,return )

Void FlxTouch_obj::reset( Float X,Float Y,int PointID){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","reset",0x4857b433,"flixel.input.touch.FlxTouch.reset","flixel/input/touch/FlxTouch.hx",145,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(PointID,"PointID")
		HX_STACK_LINE(146)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		this->updatePosition(tmp,tmp1);
		HX_STACK_LINE(147)
		this->touchPointID = PointID;
		HX_STACK_LINE(148)
		this->_current = (int)0;
		HX_STACK_LINE(149)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouch_obj,reset,(void))

Void FlxTouch_obj::deactivate( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","deactivate",0xa401c750,"flixel.input.touch.FlxTouch.deactivate","flixel/input/touch/FlxTouch.hx",153,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		this->_current = (int)0;
		HX_STACK_LINE(155)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,deactivate,(void))

Void FlxTouch_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","update",0x82f33325,"flixel.input.touch.FlxTouch.update","flixel/input/touch/FlxTouch.hx",179,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		int tmp = this->_last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(180)
			int tmp3 = this->_current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			tmp2 = (tmp4 == (int)-1);
		}
		else{
			HX_STACK_LINE(180)
			tmp2 = false;
		}
		HX_STACK_LINE(180)
		if ((tmp2)){
			HX_STACK_LINE(182)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(184)
			int tmp3 = this->_last;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			if ((tmp4)){
				HX_STACK_LINE(184)
				int tmp6 = this->_current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(184)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				tmp5 = (tmp7 == (int)2);
			}
			else{
				HX_STACK_LINE(184)
				tmp5 = false;
			}
			HX_STACK_LINE(184)
			if ((tmp5)){
				HX_STACK_LINE(186)
				this->_current = (int)1;
			}
		}
		HX_STACK_LINE(188)
		int tmp3 = this->_current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		this->_last = tmp3;
		HX_STACK_LINE(190)
		int tmp4 = this->_current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		bool tmp5 = (tmp4 == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		if ((tmp5)){
			HX_STACK_LINE(192)
			::flixel::util::FlxPoint tmp6 = this->_justPressedPosition;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			int tmp7 = this->screenX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			int tmp8 = this->screenY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(193)
			::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			this->_justPressedTimeInTicks = tmp9->ticks;
		}
		else{
			HX_STACK_LINE(195)
			int tmp6 = this->_current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			bool tmp7 = (tmp6 == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			if ((tmp7)){
				HX_STACK_LINE(197)
				int tmp8 = this->touchPointID;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(197)
				::flixel::util::FlxPoint tmp9 = this->_justPressedPosition;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(197)
				::flixel::util::FlxPoint tmp10 = this->getScreenPosition(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(197)
				Float tmp11 = this->_justPressedTimeInTicks;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(197)
				::flixel::input::FlxSwipe tmp12 = ::flixel::input::FlxSwipe_obj::__new(tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(197)
				::flixel::FlxG_obj::swipes->push(tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

Void FlxTouch_obj::updateCursor( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","updateCursor",0xf7f29fdb,"flixel.input.touch.FlxTouch.updateCursor","flixel/input/touch/FlxTouch.hx",205,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::flixel::FlxCamera camera = tmp;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(209)
		::flixel::util::FlxPoint tmp1 = this->_globalScreenPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		Float tmp3 = camera->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		Float tmp5 = camera->zoom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		this->screenX = tmp7;
		HX_STACK_LINE(210)
		::flixel::util::FlxPoint tmp8 = this->_globalScreenPosition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		Float tmp10 = camera->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(210)
		Float tmp12 = camera->zoom;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(210)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(210)
		int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		this->screenY = tmp14;
		HX_STACK_LINE(211)
		int tmp15 = this->screenX;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(211)
		Float tmp16 = camera->scroll->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		this->set_x(tmp17);
		HX_STACK_LINE(212)
		int tmp18 = this->screenY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(212)
		Float tmp19 = camera->scroll->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(212)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(212)
		this->set_y(tmp20);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,updateCursor,(void))

Void FlxTouch_obj::updatePosition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","updatePosition",0x676ebcee,"flixel.input.touch.FlxTouch.updatePosition","flixel/input/touch/FlxTouch.hx",222,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(223)
		::openfl::_legacy::geom::Point tmp = this->_flashPoint;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		tmp->x = X;
		HX_STACK_LINE(224)
		::openfl::_legacy::geom::Point tmp1 = this->_flashPoint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		tmp1->y = Y;
		HX_STACK_LINE(225)
		::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		::openfl::_legacy::geom::Point tmp3 = this->_flashPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		::openfl::_legacy::geom::Point tmp4 = tmp2->globalToLocal(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		this->_flashPoint = tmp4;
		HX_STACK_LINE(227)
		::flixel::util::FlxPoint tmp5 = this->_globalScreenPosition;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		::openfl::_legacy::geom::Point tmp6 = this->_flashPoint;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		tmp5->set_x(tmp7);
		HX_STACK_LINE(228)
		::flixel::util::FlxPoint tmp8 = this->_globalScreenPosition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		::openfl::_legacy::geom::Point tmp9 = this->_flashPoint;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(228)
		Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(228)
		tmp8->set_y(tmp10);
		HX_STACK_LINE(229)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,updatePosition,(void))

bool FlxTouch_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_pressed",0x583e801d,"flixel.input.touch.FlxTouch.get_pressed","flixel/input/touch/FlxTouch.hx",232,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	int tmp = this->_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

bool FlxTouch_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justPressed",0xad2294d1,"flixel.input.touch.FlxTouch.get_justPressed","flixel/input/touch/FlxTouch.hx",233,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	int tmp = this->_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )

bool FlxTouch_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justReleased",0xd7f5afae,"flixel.input.touch.FlxTouch.get_justReleased","flixel/input/touch/FlxTouch.hx",234,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	int tmp = this->_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_isActive( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_isActive",0xdd0ffb75,"flixel.input.touch.FlxTouch.get_isActive","flixel/input/touch/FlxTouch.hx",235,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	int tmp = this->_current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_isActive,return )


FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_MARK_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_justPressedPosition,"_justPressedPosition");
	HX_VISIT_MEMBER_NAME(_justPressedTimeInTicks,"_justPressedTimeInTicks");
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { if (inCallProp == hx::paccAlways) return get_isActive(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isActive") ) { return get_isActive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return updatePosition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { return _justPressedPosition; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { return _justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justPressedPosition") ) { _justPressedPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_justPressedTimeInTicks") ) { _justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTouch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"));
	outFields->push(HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"));
	outFields->push(HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad"));
	outFields->push(HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTouch_obj,screenX),HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,screenY),HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,_current),HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05")},
	{hx::fsInt,(int)offsetof(FlxTouch_obj,_last),HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_globalScreenPosition),HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTouch_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,_justPressedPosition),HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad")},
	{hx::fsFloat,(int)offsetof(FlxTouch_obj,_justPressedTimeInTicks),HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("screenX","\x6c","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenY","\x6d","\xc3","\x36","\x2a"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_globalScreenPosition","\xd7","\x3a","\x1a","\x8d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_justPressedPosition","\xa0","\x47","\xcf","\xad"),
	HX_HCSTRING("_justPressedTimeInTicks","\x2d","\x79","\x9b","\x15"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("getWorldPosition","\xa5","\x3e","\x0b","\xe6"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateCursor","\xbf","\x35","\xac","\x3e"),
	HX_HCSTRING("updatePosition","\xd2","\x93","\x24","\x00"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_isActive","\x59","\x91","\xc9","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.touch.FlxTouch","\xd2","\x27","\xf2","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTouch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTouch_obj >;
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
} // end namespace input
} // end namespace touch
