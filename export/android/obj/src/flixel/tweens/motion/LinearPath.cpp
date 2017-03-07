#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
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
namespace flixel{
namespace tweens{
namespace motion{

Void LinearPath_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.LinearPath","new",0x6d0ffb80,"flixel.tweens.motion.LinearPath.new","flixel/tweens/motion/LinearPath.hx",11,0x519b896f)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(24)
	this->_index = (int)0;
	HX_STACK_LINE(23)
	this->_speed = ((Float)0);
	HX_STACK_LINE(16)
	this->distance = ((Float)0);
	HX_STACK_LINE(33)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	super::__construct(tmp);
	HX_STACK_LINE(35)
	this->points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->_pointD = Array_obj< Float >::__new().Add((int)0);
	HX_STACK_LINE(37)
	this->_pointT = Array_obj< Float >::__new().Add((int)0);
}
;
	return null();
}

//LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Dynamic Options)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LinearPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","destroy",0x4706681a,"flixel.tweens.motion.LinearPath.destroy","flixel/tweens/motion/LinearPath.hx",41,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::destroy();
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Array< ::Dynamic > _g1 = this->points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(44)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				if ((tmp1)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				::flixel::util::FlxPoint tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				::flixel::util::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(46)
				::flixel::util::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				::flixel::util::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(46)
				point = tmp4;
			}
		}
		HX_STACK_LINE(48)
		::flixel::util::FlxPoint tmp = this->_last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		this->_last = tmp1;
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint tmp2 = this->_prevPoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		this->_prevPoint = tmp3;
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp4 = this->_nextPoint;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this->_nextPoint = tmp5;
	}
return null();
}


::flixel::tweens::motion::LinearPath LinearPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","setMotion",0x1a623e98,"flixel.tweens.motion.LinearPath.setMotion","flixel/tweens/motion/LinearPath.hx",60,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(61)
		this->updatePath();
		HX_STACK_LINE(63)
		bool tmp = UseDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		if ((tmp)){
			HX_STACK_LINE(65)
			this->duration = DurationOrSpeed;
			HX_STACK_LINE(66)
			Float tmp1 = this->distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			this->_speed = tmp3;
		}
		else{
			HX_STACK_LINE(70)
			Float tmp1 = this->distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			this->duration = tmp3;
			HX_STACK_LINE(71)
			this->_speed = DurationOrSpeed;
		}
		HX_STACK_LINE(74)
		hx::TCast< ::flixel::tweens::motion::LinearPath >::cast(this->start());
		HX_STACK_LINE(75)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,setMotion,return )

::flixel::tweens::motion::LinearPath LinearPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","addPoint",0x4da05b4f,"flixel.tweens.motion.LinearPath.addPoint","flixel/tweens/motion/LinearPath.hx",79,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(80)
		::flixel::util::FlxPoint tmp = this->_last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		if ((tmp1)){
			HX_STACK_LINE(82)
			Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp3 = this->_last;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp7 = this->_last;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = (tmp5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp12 = this->_last;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp16 = this->_last;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(82)
			Float tmp20 = (tmp10 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(82)
			Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(82)
			hx::AddEq(this->distance,tmp21);
			HX_STACK_LINE(83)
			int tmp22 = this->points->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(83)
			Float tmp23 = this->distance;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			this->_pointD[tmp22] = tmp23;
		}
		HX_STACK_LINE(85)
		int tmp2 = this->points->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(85)
			point->_inPool = false;
			HX_STACK_LINE(85)
			tmp3 = point;
		}
		HX_STACK_LINE(85)
		::flixel::util::FlxPoint tmp4 = this->_last = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		this->points[tmp2] = tmp4;
		HX_STACK_LINE(86)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,addPoint,return )

::flixel::util::FlxPoint LinearPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","getPoint",0x341a44ba,"flixel.tweens.motion.LinearPath.getPoint","flixel/tweens/motion/LinearPath.hx",90,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(91)
		int tmp = this->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(93)
			HX_STACK_DO_THROW(HX_HCSTRING("No points have been added to the path yet.","\xc7","\xa0","\x28","\x83"));
		}
		HX_STACK_LINE(95)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		int tmp3 = this->points->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		::flixel::util::FlxPoint tmp5 = this->points->__get(tmp4).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(LinearPath_obj,getPoint,return )

::flixel::tweens::FlxTween LinearPath_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","start",0xb880a782,"flixel.tweens.motion.LinearPath.start","flixel/tweens/motion/LinearPath.hx",99,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	bool tmp = this->backward;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp)){
		HX_STACK_LINE(100)
		int tmp2 = this->points->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		tmp1 = (tmp2 - (int)1);
	}
	else{
		HX_STACK_LINE(100)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(100)
	this->_index = tmp1;
	HX_STACK_LINE(101)
	this->super::start();
	HX_STACK_LINE(102)
	return hx::ObjectPtr<OBJ_>(this);
}


Void LinearPath_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","update",0x391d0ee9,"flixel.tweens.motion.LinearPath.update","flixel/tweens/motion/LinearPath.hx",106,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->super::update();
		HX_STACK_LINE(108)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(109)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(111)
		bool tmp = (this->points == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(114)
		bool tmp1 = this->backward;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(116)
			int tmp3 = this->_index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			int tmp4 = this->points->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			if ((tmp6)){
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(118)
					int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(118)
					int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(118)
					Float tmp10 = this->_pointT->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(118)
					bool tmp11 = (tmp7 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(118)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(118)
					if ((tmp12)){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(120)
					(this->_index)++;
					HX_STACK_LINE(121)
					int tmp13 = this->_index;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(121)
					int tmp14 = this->points->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(121)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(121)
					bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(121)
					if ((tmp16)){
						HX_STACK_LINE(123)
						hx::SubEq(this->_index,(int)1);
						HX_STACK_LINE(124)
						break;
					}
				}
			}
			HX_STACK_LINE(129)
			int tmp7 = this->_index;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			Float tmp8 = this->_pointT->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			td = tmp8;
			HX_STACK_LINE(130)
			int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			Float tmp11 = this->_pointT->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			Float tmp12 = td;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(130)
			tt = tmp13;
			HX_STACK_LINE(131)
			Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(131)
			Float tmp15 = td;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			Float tmp17 = tt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			td = tmp18;
			HX_STACK_LINE(132)
			int tmp19 = this->_index;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(132)
			::flixel::util::FlxPoint tmp20 = this->points->__get(tmp19).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(132)
			this->_prevPoint = tmp20;
			HX_STACK_LINE(133)
			int tmp21 = this->_index;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(133)
			int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp23 = this->points->__get(tmp22).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			this->_nextPoint = tmp23;
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp24 = this->_prevPoint;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(134)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp26 = this->_nextPoint;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(134)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp28 = this->_prevPoint;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(134)
			Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(134)
			Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(134)
			Float tmp31 = td;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(134)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(134)
			Float tmp33 = (tmp25 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(134)
			this->x = tmp33;
			HX_STACK_LINE(135)
			::flixel::util::FlxPoint tmp34 = this->_prevPoint;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(135)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(135)
			::flixel::util::FlxPoint tmp36 = this->_nextPoint;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(135)
			Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(135)
			::flixel::util::FlxPoint tmp38 = this->_prevPoint;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(135)
			Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(135)
			Float tmp40 = (tmp37 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(135)
			Float tmp41 = td;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(135)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(135)
			Float tmp43 = (tmp35 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(135)
			this->y = tmp43;
		}
		else{
			HX_STACK_LINE(139)
			int tmp3 = this->_index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			if ((tmp4)){
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					Float tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					int tmp6 = this->_index;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					Float tmp8 = this->_pointT->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					bool tmp9 = (tmp5 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					if ((tmp10)){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(143)
					hx::SubEq(this->_index,(int)1);
					HX_STACK_LINE(144)
					int tmp11 = this->_index;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(144)
					bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(144)
					if ((tmp12)){
						HX_STACK_LINE(146)
						hx::AddEq(this->_index,(int)1);
						HX_STACK_LINE(147)
						break;
					}
				}
			}
			HX_STACK_LINE(152)
			int tmp5 = this->_index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			Float tmp6 = this->_pointT->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			td = tmp6;
			HX_STACK_LINE(153)
			int tmp7 = this->_index;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			Float tmp9 = this->_pointT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(153)
			Float tmp10 = td;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(153)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(153)
			tt = tmp11;
			HX_STACK_LINE(154)
			Float tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(154)
			Float tmp13 = td;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(154)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(154)
			Float tmp15 = tt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(154)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			td = tmp16;
			HX_STACK_LINE(155)
			int tmp17 = this->_index;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(155)
			::flixel::util::FlxPoint tmp18 = this->points->__get(tmp17).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(155)
			this->_prevPoint = tmp18;
			HX_STACK_LINE(156)
			int tmp19 = this->_index;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(156)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(156)
			::flixel::util::FlxPoint tmp21 = this->points->__get(tmp20).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(156)
			this->_nextPoint = tmp21;
			HX_STACK_LINE(157)
			::flixel::util::FlxPoint tmp22 = this->_prevPoint;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(157)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(157)
			::flixel::util::FlxPoint tmp24 = this->_nextPoint;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(157)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(157)
			::flixel::util::FlxPoint tmp26 = this->_prevPoint;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(157)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(157)
			Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(157)
			Float tmp29 = td;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(157)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(157)
			Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(157)
			this->x = tmp31;
			HX_STACK_LINE(158)
			::flixel::util::FlxPoint tmp32 = this->_prevPoint;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(158)
			Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(158)
			::flixel::util::FlxPoint tmp34 = this->_nextPoint;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(158)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(158)
			::flixel::util::FlxPoint tmp36 = this->_prevPoint;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(158)
			Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(158)
			Float tmp38 = (tmp35 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(158)
			Float tmp39 = td;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(158)
			Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(158)
			Float tmp41 = (tmp33 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(158)
			this->y = tmp41;
		}
		HX_STACK_LINE(161)
		this->super::postUpdate();
	}
return null();
}


Void LinearPath_obj::updatePath( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","updatePath",0x8544492e,"flixel.tweens.motion.LinearPath.updatePath","flixel/tweens/motion/LinearPath.hx",168,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		int tmp = this->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		bool tmp1 = (tmp < (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp1)){
			HX_STACK_LINE(169)
			HX_STACK_DO_THROW(HX_HCSTRING("A LinearPath must have at least 2 points to operate.","\x6c","\x59","\x79","\xaf"));
		}
		HX_STACK_LINE(170)
		int tmp2 = this->_pointD->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = this->_pointT->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		if ((tmp4)){
			HX_STACK_LINE(170)
			return null();
		}
		HX_STACK_LINE(172)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			int tmp6 = this->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			if ((tmp8)){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(175)
			int tmp9 = (i)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			Float tmp10 = this->_pointD->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			Float tmp11 = this->distance;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(175)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(175)
			this->_pointT[i] = tmp12;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,updatePath,(void))


LinearPath_obj::LinearPath_obj()
{
}

void LinearPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearPath);
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(_pointD,"_pointD");
	HX_MARK_MEMBER_NAME(_pointT,"_pointT");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_MARK_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(_pointD,"_pointD");
	HX_VISIT_MEMBER_NAME(_pointT,"_pointT");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_VISIT_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LinearPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { return _pointD; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { return _pointT; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { return _prevPoint; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { return _nextPoint; }
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { _pointD=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { _pointT=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { _prevPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { _nextPoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LinearPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"));
	outFields->push(HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d"));
	outFields->push(HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LinearPath_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LinearPath_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointD),HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointT),HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65")},
	{hx::fsFloat,(int)offsetof(LinearPath_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsInt,(int)offsetof(LinearPath_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_last),HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_prevPoint),HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_nextPoint),HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65"),
	HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d"),
	HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updatePath","\x4e","\xd0","\x06","\x03"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.LinearPath","\x8e","\x7b","\x14","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LinearPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearPath_obj >;
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
} // end namespace tweens
} // end namespace motion
