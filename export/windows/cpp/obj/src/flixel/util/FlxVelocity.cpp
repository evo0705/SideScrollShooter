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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
namespace flixel{
namespace util{

Void FlxVelocity_obj::__construct()
{
	return null();
}

//FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsObject",0xd4eb8731,"flixel.util.FlxVelocity.moveTowardsObject","flixel/util/FlxVelocity.hx",25,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(26)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(26)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(26)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(26)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(26)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(26)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(26)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(26)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(26)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(26)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(26)
			if ((tmp15)){
				HX_STACK_LINE(26)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(26)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(26)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(26)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(26)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(26)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(26)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(26)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(26)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(26)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(28)
		bool tmp1 = (MaxTime > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(30)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Float tmp3 = Source->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				Float tmp4 = Source->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				Float tmp6 = Dest->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(30)
				Float tmp7 = Dest->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(30)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(30)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				Float tmp13 = Dest->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				Float tmp14 = Dest->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(30)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(30)
				Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(30)
				Float dy = tmp16;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(30)
				Float tmp17 = (dx * dx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(30)
				Float tmp18 = (dy * dy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(30)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(30)
				Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(30)
				tmp2 = ::Std_obj::_int(tmp20);
			}
			HX_STACK_LINE(30)
			int d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(33)
			int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			Float tmp4 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			Speed = tmp6;
		}
		HX_STACK_LINE(36)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		Source->velocity->set_x(tmp5);
		HX_STACK_LINE(37)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		Source->velocity->set_y(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsObject",0x7cc76525,"flixel.util.FlxVelocity.accelerateTowardsObject","flixel/util/FlxVelocity.hx",52,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Dest,"Dest")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(53)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(53)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(53)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(53)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			if ((tmp15)){
				HX_STACK_LINE(53)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(53)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(53)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(53)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(53)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(53)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(53)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(53)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(53)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(53)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(53)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(53)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(55)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(56)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(58)
		Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = Acceleration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		Source->acceleration->set_x(tmp4);
		HX_STACK_LINE(59)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Float tmp7 = Acceleration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Source->acceleration->set_y(tmp8);
		HX_STACK_LINE(61)
		Float tmp9 = MaxXSpeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Source->maxVelocity->set_x(tmp9);
		HX_STACK_LINE(62)
		Float tmp10 = MaxYSpeed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		Source->maxVelocity->set_y(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsMouse",0xa83b61f3,"flixel.util.FlxVelocity.moveTowardsMouse","flixel/util/FlxVelocity.hx",77,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(78)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		Float tmp1 = ::flixel::util::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(80)
		bool tmp2 = (MaxTime > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(82)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				::flixel::input::mouse::FlxMouse tmp7 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				int tmp8 = tmp7->screenX;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(82)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(82)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(82)
				::flixel::input::mouse::FlxMouse tmp13 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				int tmp14 = tmp13->screenY;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(82)
				Float dy = tmp15;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(82)
				Float tmp16 = (dx * dx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(82)
				Float tmp17 = (dy * dy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(82)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(82)
				Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(82)
				tmp3 = ::Std_obj::_int(tmp19);
			}
			HX_STACK_LINE(82)
			int d = tmp3;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(85)
			int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			Float tmp5 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			Speed = tmp7;
		}
		HX_STACK_LINE(88)
		Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		Float tmp5 = Speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		Source->velocity->set_x(tmp6);
		HX_STACK_LINE(89)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		Float tmp9 = Speed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		Source->velocity->set_y(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsTouch",0xb009638d,"flixel.util.FlxVelocity.moveTowardsTouch","flixel/util/FlxVelocity.hx",105,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(106)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint tmp1 = Source->getScreenXY(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint p = tmp1;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(106)
			Float tmp2 = (Touch->screenX - p->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(106)
			Float tmp3 = (Touch->screenY - p->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Float dy = tmp3;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(106)
			bool tmp4 = AsDegrees;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			if ((tmp4)){
				HX_STACK_LINE(106)
				Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				Float tmp6 = dx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(106)
				Float radians = tmp7;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(106)
				Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(106)
				Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				Float tmp10 = (Float((int)180) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				tmp = (tmp8 * tmp10);
			}
			else{
				HX_STACK_LINE(106)
				Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				Float tmp6 = dx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				tmp = ::Math_obj::atan2(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(106)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(108)
		bool tmp1 = (MaxTime > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		if ((tmp1)){
			HX_STACK_LINE(110)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				Float tmp3 = Source->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(110)
				Float tmp4 = Source->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(110)
				Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(110)
				int tmp6 = Touch->screenX;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(110)
				Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(110)
				Float tmp8 = Source->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(110)
				Float tmp9 = Source->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(110)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(110)
				int tmp11 = Touch->screenY;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				Float dy = tmp12;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(110)
				Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				Float tmp16 = ::Math_obj::sqrt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				tmp2 = ::Std_obj::_int(tmp16);
			}
			HX_STACK_LINE(110)
			int d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(113)
			int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			Float tmp4 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			Speed = tmp6;
		}
		HX_STACK_LINE(116)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Source->velocity->set_x(tmp5);
		HX_STACK_LINE(117)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		Source->velocity->set_y(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsTouch,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsMouse",0x69d87e7f,"flixel.util.FlxVelocity.accelerateTowardsMouse","flixel/util/FlxVelocity.hx",133,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(134)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Float tmp1 = ::flixel::util::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(136)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(137)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(139)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		Float tmp4 = Acceleration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Source->acceleration->set_x(tmp5);
		HX_STACK_LINE(140)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		Float tmp8 = Acceleration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		Source->acceleration->set_y(tmp9);
		HX_STACK_LINE(142)
		Float tmp10 = MaxXSpeed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(142)
		Source->maxVelocity->set_x(tmp10);
		HX_STACK_LINE(143)
		Float tmp11 = MaxYSpeed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		Source->maxVelocity->set_y(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsTouch",0x71a68019,"flixel.util.FlxVelocity.accelerateTowardsTouch","flixel/util/FlxVelocity.hx",160,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Touch,"Touch")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(161)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint tmp1 = Source->getScreenXY(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint p = tmp1;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(161)
			Float tmp2 = (Touch->screenX - p->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(161)
			Float tmp3 = (Touch->screenY - p->y);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			Float dy = tmp3;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(161)
			bool tmp4 = AsDegrees;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			if ((tmp4)){
				HX_STACK_LINE(161)
				Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				Float tmp6 = dx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				Float radians = tmp7;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(161)
				Float tmp8 = radians;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				Float tmp10 = (Float((int)180) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				tmp = (tmp8 * tmp10);
			}
			else{
				HX_STACK_LINE(161)
				Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(161)
				Float tmp6 = dx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				tmp = ::Math_obj::atan2(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(161)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(163)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(164)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(166)
		Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		Float tmp3 = Acceleration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		Source->acceleration->set_x(tmp4);
		HX_STACK_LINE(167)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(167)
		Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		Float tmp7 = Acceleration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		Source->acceleration->set_y(tmp8);
		HX_STACK_LINE(169)
		Float tmp9 = MaxXSpeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		Source->maxVelocity->set_x(tmp9);
		HX_STACK_LINE(170)
		Float tmp10 = MaxYSpeed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		Source->maxVelocity->set_y(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsTouch,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVelocity","moveTowardsPoint",0x6266001e,"flixel.util.FlxVelocity.moveTowardsPoint","flixel/util/FlxVelocity.hx",186,0xc0bd09c9)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(187)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		Float tmp2 = ::flixel::util::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(189)
		bool tmp3 = (MaxTime > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		if ((tmp3)){
			HX_STACK_LINE(191)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			{
				HX_STACK_LINE(191)
				Float tmp5 = Source->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				Float tmp6 = Source->origin->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(191)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(191)
				Float tmp8 = Target->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(191)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Float tmp13 = Target->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(191)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(191)
				Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(191)
					bool tmp15 = Target->_weak;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					if ((tmp15)){
						HX_STACK_LINE(191)
						Target->put();
					}
				}
				HX_STACK_LINE(191)
				Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(191)
				Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(191)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(191)
				Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(191)
				tmp4 = ::Std_obj::_int(tmp18);
			}
			HX_STACK_LINE(191)
			int d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(194)
			int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			Float tmp6 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			Speed = tmp8;
		}
		HX_STACK_LINE(197)
		Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		Float tmp6 = Speed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		Source->velocity->set_x(tmp7);
		HX_STACK_LINE(198)
		Float tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		Float tmp10 = Speed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(198)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(198)
		Source->velocity->set_y(tmp11);
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			bool tmp12 = Target->_weak;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(200)
			if ((tmp12)){
				HX_STACK_LINE(200)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,Float Acceleration,Float MaxXSpeed,Float MaxYSpeed){
{
		HX_STACK_FRAME("flixel.util.FlxVelocity","accelerateTowardsPoint",0x24031caa,"flixel.util.FlxVelocity.accelerateTowardsPoint","flixel/util/FlxVelocity.hx",215,0xc0bd09c9)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed")
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed")
		HX_STACK_LINE(216)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		::flixel::util::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		Float tmp2 = ::flixel::util::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(218)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(219)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(221)
		Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = Acceleration;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		Source->acceleration->set_x(tmp6);
		HX_STACK_LINE(222)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		Float tmp9 = Acceleration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		Source->acceleration->set_y(tmp10);
		HX_STACK_LINE(224)
		Float tmp11 = MaxXSpeed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(224)
		Source->maxVelocity->set_x(tmp11);
		HX_STACK_LINE(225)
		Float tmp12 = MaxYSpeed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(225)
		Source->maxVelocity->set_y(tmp12);
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			bool tmp13 = Target->_weak;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			if ((tmp13)){
				HX_STACK_LINE(227)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromAngle( Float Angle,Float Speed){
	HX_STACK_FRAME("flixel.util.FlxVelocity","velocityFromAngle",0xbac881f3,"flixel.util.FlxVelocity.velocityFromAngle","flixel/util/FlxVelocity.hx",238,0xc0bd09c9)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(239)
	Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	Float a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(241)
	::flixel::util::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(241)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(241)
		::flixel::util::FlxPool tmp5 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		::flixel::util::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(241)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		::flixel::util::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		::flixel::util::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(241)
		point->_inPool = false;
		HX_STACK_LINE(241)
		tmp4 = point;
	}
	HX_STACK_LINE(241)
	::flixel::util::FlxPoint result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(243)
	Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(243)
	Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(243)
	Float tmp7 = Speed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(243)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(243)
	result->set_x(tmp8);
	HX_STACK_LINE(244)
	Float tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(244)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(244)
	Float tmp11 = Speed;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(244)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(244)
	result->set_y(tmp12);
	HX_STACK_LINE(246)
	::flixel::util::FlxPoint tmp13 = result;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(246)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
	HX_STACK_FRAME("flixel.util.FlxVelocity","velocityFromFacing",0x35955cfa,"flixel.util.FlxVelocity.velocityFromFacing","flixel/util/FlxVelocity.hx",257,0xc0bd09c9)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(258)
	Float a = (int)0;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(260)
	bool tmp = (Parent->facing == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	if ((tmp)){
		HX_STACK_LINE(262)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		Float tmp3 = ((int)180 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		a = tmp3;
	}
	else{
		HX_STACK_LINE(264)
		bool tmp1 = (Parent->facing == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		if ((tmp1)){
			HX_STACK_LINE(266)
			Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(266)
			Float tmp4 = ((int)0 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(266)
			a = tmp4;
		}
		else{
			HX_STACK_LINE(268)
			bool tmp2 = (Parent->facing == (int)256);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			if ((tmp2)){
				HX_STACK_LINE(270)
				Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(270)
				Float tmp4 = (Float(tmp3) / Float((int)180));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(270)
				Float tmp5 = ((int)-90 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				a = tmp5;
			}
			else{
				HX_STACK_LINE(272)
				bool tmp3 = (Parent->facing == (int)4096);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(272)
				if ((tmp3)){
					HX_STACK_LINE(274)
					Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(274)
					Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(274)
					Float tmp6 = ((int)90 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(274)
					a = tmp6;
				}
			}
		}
	}
	HX_STACK_LINE(277)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(277)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(277)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(277)
		point->_inPool = false;
		HX_STACK_LINE(277)
		tmp1 = point;
	}
	HX_STACK_LINE(277)
	::flixel::util::FlxPoint result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(279)
	Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(279)
	result->set_x(tmp5);
	HX_STACK_LINE(280)
	Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(280)
	Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(280)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(280)
	result->set_y(tmp9);
	HX_STACK_LINE(282)
	::flixel::util::FlxPoint tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(282)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_FRAME("flixel.util.FlxVelocity","computeVelocity",0x3a6a26bb,"flixel.util.FlxVelocity.computeVelocity","flixel/util/FlxVelocity.hx",295,0xc0bd09c9)
	HX_STACK_ARG(Velocity,"Velocity")
	HX_STACK_ARG(Acceleration,"Acceleration")
	HX_STACK_ARG(Drag,"Drag")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(296)
	bool tmp = (Acceleration != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	if ((tmp)){
		HX_STACK_LINE(298)
		Float tmp1 = Acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		hx::AddEq(Velocity,tmp3);
	}
	else{
		HX_STACK_LINE(300)
		bool tmp1 = (Drag != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(302)
			Float tmp2 = Drag;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			Float tmp3 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			Float drag = tmp4;		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(303)
			Float tmp5 = (Velocity - drag);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			if ((tmp6)){
				HX_STACK_LINE(305)
				Float tmp7 = (Velocity - drag);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				Velocity = tmp7;
			}
			else{
				HX_STACK_LINE(307)
				Float tmp7 = (Velocity + drag);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				if ((tmp8)){
					HX_STACK_LINE(309)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(313)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(316)
	bool tmp1 = (Velocity != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	if ((tmp1)){
		HX_STACK_LINE(316)
		tmp2 = (Max != (int)0);
	}
	else{
		HX_STACK_LINE(316)
		tmp2 = false;
	}
	HX_STACK_LINE(316)
	if ((tmp2)){
		HX_STACK_LINE(318)
		bool tmp3 = (Velocity > Max);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		if ((tmp3)){
			HX_STACK_LINE(320)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(322)
			Float tmp4 = Velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			Float tmp5 = Max;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(322)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(322)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(322)
			if ((tmp7)){
				HX_STACK_LINE(324)
				Float tmp8 = Max;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(324)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(324)
				Velocity = tmp9;
			}
		}
	}
	HX_STACK_LINE(327)
	Float tmp3 = Velocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,computeVelocity,return )


FlxVelocity_obj::FlxVelocity_obj()
{
}

bool FlxVelocity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { outValue = computeVelocity_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { outValue = moveTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { outValue = moveTowardsTouch_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { outValue = moveTowardsPoint_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { outValue = moveTowardsObject_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { outValue = velocityFromFacing_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { outValue = accelerateTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"accelerateTowardsTouch") ) { outValue = accelerateTowardsTouch_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { outValue = accelerateTowardsPoint_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { outValue = accelerateTowardsObject_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVelocity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("moveTowardsObject","\x6a","\x65","\x02","\x02"),
	HX_HCSTRING("accelerateTowardsObject","\x1e","\x34","\xa0","\x7d"),
	HX_HCSTRING("moveTowardsMouse","\xda","\xed","\x3e","\xbe"),
	HX_HCSTRING("moveTowardsTouch","\x74","\xef","\x0c","\xc6"),
	HX_HCSTRING("accelerateTowardsMouse","\xa6","\x71","\x74","\x11"),
	HX_HCSTRING("accelerateTowardsTouch","\x40","\x73","\x42","\x19"),
	HX_HCSTRING("moveTowardsPoint","\x05","\x8c","\x69","\x78"),
	HX_HCSTRING("accelerateTowardsPoint","\xd1","\x0f","\x9f","\xcb"),
	HX_HCSTRING("velocityFromAngle","\x2c","\x60","\xdf","\xe7"),
	HX_HCSTRING("velocityFromFacing","\xa1","\xf0","\x80","\x7c"),
	HX_HCSTRING("computeVelocity","\xb4","\xd4","\x7e","\xb6"),
	::String(null()) };

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxVelocity","\x75","\xf4","\xac","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVelocity_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxVelocity_obj >;
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
