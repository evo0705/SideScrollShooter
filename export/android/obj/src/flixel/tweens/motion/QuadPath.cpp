#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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

Void QuadPath_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.QuadPath","new",0x9e663362,"flixel.tweens.motion.QuadPath.new","flixel/tweens/motion/QuadPath.hx",12,0x562bb60d)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(22)
	this->_updateCurve = true;
	HX_STACK_LINE(19)
	this->_numSegs = (int)0;
	HX_STACK_LINE(18)
	this->_index = (int)0;
	HX_STACK_LINE(17)
	this->_speed = ((Float)0);
	HX_STACK_LINE(16)
	this->_distance = ((Float)0);
	HX_STACK_LINE(33)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	super::__construct(tmp);
	HX_STACK_LINE(35)
	this->_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->_curveT = Array_obj< Float >::__new();
	HX_STACK_LINE(37)
	this->_curveD = Array_obj< Float >::__new();
}
;
	return null();
}

//QuadPath_obj::~QuadPath_obj() { }

Dynamic QuadPath_obj::__CreateEmpty() { return  new QuadPath_obj; }
hx::ObjectPtr< QuadPath_obj > QuadPath_obj::__new(Dynamic Options)
{  hx::ObjectPtr< QuadPath_obj > _result_ = new QuadPath_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic QuadPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadPath_obj > _result_ = new QuadPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","destroy",0x05d338fc,"flixel.tweens.motion.QuadPath.destroy","flixel/tweens/motion/QuadPath.hx",41,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::destroy();
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
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
		::flixel::util::FlxPoint tmp = this->_a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		this->_a = tmp1;
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint tmp2 = this->_b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		this->_b = tmp3;
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp4 = this->_c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this->_c = tmp5;
	}
return null();
}


::flixel::tweens::motion::QuadPath QuadPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","setMotion",0xc2ae8bfa,"flixel.tweens.motion.QuadPath.setMotion","flixel/tweens/motion/QuadPath.hx",60,0x562bb60d)
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
			Float tmp1 = this->_distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			this->_speed = tmp3;
		}
		else{
			HX_STACK_LINE(70)
			Float tmp1 = this->_distance;		HX_STACK_VAR(tmp1,"tmp1");
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
		hx::TCast< ::flixel::tweens::motion::QuadPath >::cast(this->start());
		HX_STACK_LINE(75)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,setMotion,return )

::flixel::tweens::motion::QuadPath QuadPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","addPoint",0x820a502d,"flixel.tweens.motion.QuadPath.addPoint","flixel/tweens/motion/QuadPath.hx",82,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(83)
		this->_updateCurve = true;
		HX_STACK_LINE(84)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(84)
			point->_inPool = false;
			HX_STACK_LINE(84)
			tmp = point;
		}
		HX_STACK_LINE(84)
		this->_points->push(tmp);
		HX_STACK_LINE(85)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,addPoint,return )

::flixel::util::FlxPoint QuadPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getPoint",0x68843998,"flixel.tweens.motion.QuadPath.getPoint","flixel/tweens/motion/QuadPath.hx",92,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(93)
		int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(95)
			HX_STACK_DO_THROW(HX_HCSTRING("No points have been added to the path yet.","\xc7","\xa0","\x28","\x83"));
		}
		HX_STACK_LINE(97)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		int tmp3 = this->_points->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		::flixel::util::FlxPoint tmp5 = this->_points->__get(tmp4).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPath_obj,getPoint,return )

::flixel::tweens::FlxTween QuadPath_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","start",0x95be1be4,"flixel.tweens.motion.QuadPath.start","flixel/tweens/motion/QuadPath.hx",101,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	bool tmp = this->backward;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	if ((tmp)){
		HX_STACK_LINE(102)
		int tmp2 = this->_numSegs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		tmp1 = (tmp2 - (int)1);
	}
	else{
		HX_STACK_LINE(102)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(102)
	this->_index = tmp1;
	HX_STACK_LINE(103)
	this->super::start();
	HX_STACK_LINE(104)
	return hx::ObjectPtr<OBJ_>(this);
}


Void QuadPath_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","update",0xf1a57047,"flixel.tweens.motion.QuadPath.update","flixel/tweens/motion/QuadPath.hx",108,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->super::update();
		HX_STACK_LINE(110)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(111)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(113)
		bool tmp = this->backward;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(113)
			tmp3 = (this->_points != null());
		}
		else{
			HX_STACK_LINE(113)
			tmp3 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(115)
			int tmp4 = this->_index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			int tmp5 = this->_numSegs;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			if ((tmp7)){
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					Float tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(117)
					int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(117)
					int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					Float tmp11 = this->_curveT->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(117)
					bool tmp12 = (tmp8 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(117)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(117)
					if ((tmp13)){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(119)
					(this->_index)++;
					HX_STACK_LINE(120)
					int tmp14 = this->_index;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(120)
					int tmp15 = this->_numSegs;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(120)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(120)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(120)
					if ((tmp17)){
						HX_STACK_LINE(122)
						break;
					}
				}
			}
			HX_STACK_LINE(126)
			int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			Float tmp9 = this->_curveT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			td = tmp9;
			HX_STACK_LINE(127)
			int tmp10 = this->_index;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			Float tmp12 = this->_curveT->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			Float tmp13 = td;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			tt = tmp14;
			HX_STACK_LINE(128)
			Float tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(128)
			Float tmp16 = td;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(128)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(128)
			Float tmp18 = tt;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(128)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(128)
			td = tmp19;
			HX_STACK_LINE(129)
			int tmp20 = this->_index;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			::flixel::util::FlxPoint tmp22 = this->_points->__get(tmp21).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(129)
			this->_a = tmp22;
			HX_STACK_LINE(130)
			int tmp23 = this->_index;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(130)
			int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(130)
			int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(130)
			::flixel::util::FlxPoint tmp26 = this->_points->__get(tmp25).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(130)
			this->_b = tmp26;
			HX_STACK_LINE(131)
			int tmp27 = this->_index;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(131)
			int tmp28 = (tmp27 * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(131)
			int tmp29 = (tmp28 + (int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(131)
			::flixel::util::FlxPoint tmp30 = this->_points->__get(tmp29).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(131)
			this->_c = tmp30;
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp31 = this->_a;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(133)
			Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(133)
			Float tmp33 = ((int)1 - td);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(133)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(133)
			Float tmp35 = ((int)1 - td);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(133)
			Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp37 = this->_b;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(133)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(133)
			Float tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(133)
			Float tmp40 = ((int)1 - td);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(133)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(133)
			Float tmp42 = td;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(133)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(133)
			Float tmp44 = (tmp36 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp45 = this->_c;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(133)
			Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(133)
			Float tmp47 = td;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(133)
			Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(133)
			Float tmp49 = td;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(133)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(133)
			Float tmp51 = (tmp44 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(133)
			this->x = tmp51;
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp52 = this->_a;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(134)
			Float tmp53 = tmp52->y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(134)
			Float tmp54 = ((int)1 - td);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(134)
			Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(134)
			Float tmp56 = ((int)1 - td);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(134)
			Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp58 = this->_b;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(134)
			Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(134)
			Float tmp60 = (tmp59 * (int)2);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(134)
			Float tmp61 = ((int)1 - td);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(134)
			Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(134)
			Float tmp63 = td;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(134)
			Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(134)
			Float tmp65 = (tmp57 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(134)
			::flixel::util::FlxPoint tmp66 = this->_c;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(134)
			Float tmp67 = tmp66->y;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(134)
			Float tmp68 = td;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(134)
			Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(134)
			Float tmp70 = td;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(134)
			Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(134)
			Float tmp72 = (tmp65 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(134)
			this->y = tmp72;
		}
		else{
			HX_STACK_LINE(136)
			bool tmp4 = (this->_points != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			if ((tmp4)){
				HX_STACK_LINE(138)
				int tmp5 = this->_index;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(138)
				bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				if ((tmp6)){
					HX_STACK_LINE(140)
					while((true)){
						HX_STACK_LINE(140)
						Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(140)
						int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(140)
						Float tmp9 = this->_curveT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(140)
						bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(140)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(140)
						if ((tmp11)){
							HX_STACK_LINE(140)
							break;
						}
						HX_STACK_LINE(142)
						(this->_index)--;
						HX_STACK_LINE(143)
						int tmp12 = this->_index;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(143)
						bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(143)
						if ((tmp13)){
							HX_STACK_LINE(145)
							break;
						}
					}
				}
				HX_STACK_LINE(150)
				int tmp7 = this->_index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				Float tmp9 = this->_curveT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(150)
				td = tmp9;
				HX_STACK_LINE(151)
				int tmp10 = this->_index;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(151)
				Float tmp11 = this->_curveT->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(151)
				Float tmp12 = td;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(151)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(151)
				tt = tmp13;
				HX_STACK_LINE(152)
				Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(152)
				Float tmp15 = td;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				Float tmp17 = tt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(152)
				td = tmp18;
				HX_STACK_LINE(153)
				int tmp19 = this->_index;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(153)
				int tmp20 = (tmp19 * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(153)
				int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(153)
				::flixel::util::FlxPoint tmp22 = this->_points->__get(tmp21).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(153)
				this->_a = tmp22;
				HX_STACK_LINE(154)
				int tmp23 = this->_index;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(154)
				int tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(154)
				int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(154)
				::flixel::util::FlxPoint tmp26 = this->_points->__get(tmp25).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(154)
				this->_b = tmp26;
				HX_STACK_LINE(155)
				int tmp27 = this->_index;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(155)
				int tmp28 = (tmp27 * (int)2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(155)
				::flixel::util::FlxPoint tmp29 = this->_points->__get(tmp28).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(155)
				this->_c = tmp29;
				HX_STACK_LINE(157)
				::flixel::util::FlxPoint tmp30 = this->_a;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(157)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(157)
				Float tmp32 = ((int)1 - td);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(157)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(157)
				Float tmp34 = ((int)1 - td);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(157)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(157)
				::flixel::util::FlxPoint tmp36 = this->_b;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(157)
				Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(157)
				Float tmp38 = (tmp37 * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(157)
				Float tmp39 = ((int)1 - td);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(157)
				Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(157)
				Float tmp41 = td;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(157)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(157)
				Float tmp43 = (tmp35 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(157)
				::flixel::util::FlxPoint tmp44 = this->_c;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(157)
				Float tmp45 = tmp44->x;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(157)
				Float tmp46 = td;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(157)
				Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(157)
				Float tmp48 = td;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(157)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(157)
				Float tmp50 = (tmp43 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(157)
				this->x = tmp50;
				HX_STACK_LINE(158)
				::flixel::util::FlxPoint tmp51 = this->_a;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(158)
				Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(158)
				Float tmp53 = ((int)1 - td);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(158)
				Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(158)
				Float tmp55 = ((int)1 - td);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(158)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(158)
				::flixel::util::FlxPoint tmp57 = this->_b;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(158)
				Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(158)
				Float tmp59 = (tmp58 * (int)2);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(158)
				Float tmp60 = ((int)1 - td);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(158)
				Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(158)
				Float tmp62 = td;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(158)
				Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(158)
				Float tmp64 = (tmp56 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(158)
				::flixel::util::FlxPoint tmp65 = this->_c;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(158)
				Float tmp66 = tmp65->y;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(158)
				Float tmp67 = td;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(158)
				Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(158)
				Float tmp69 = td;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(158)
				Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(158)
				Float tmp71 = (tmp64 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(158)
				this->y = tmp71;
			}
		}
		HX_STACK_LINE(160)
		this->super::postUpdate();
	}
return null();
}


Void QuadPath_obj::updatePath( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","updatePath",0x1fbbb18c,"flixel.tweens.motion.QuadPath.updatePath","flixel/tweens/motion/QuadPath.hx",165,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		int tmp2 = hx::Mod(tmp1,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		if ((tmp4)){
			HX_STACK_LINE(166)
			int tmp6 = this->_points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			tmp5 = (tmp7 < (int)3);
		}
		else{
			HX_STACK_LINE(166)
			tmp5 = true;
		}
		HX_STACK_LINE(166)
		if ((tmp5)){
			HX_STACK_LINE(168)
			HX_STACK_DO_THROW(HX_HCSTRING("A QuadPath must have at least 3 points to operate and number of points must be a odd.","\x67","\xe3","\x16","\xba"));
		}
		HX_STACK_LINE(170)
		bool tmp6 = this->_updateCurve;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		if ((tmp7)){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(174)
		this->_updateCurve = false;
		HX_STACK_LINE(177)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(178)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(179)
		this->_distance = (int)0;
		HX_STACK_LINE(180)
		int tmp8 = this->_points->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(180)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(180)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(180)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(180)
		this->_numSegs = tmp11;
		HX_STACK_LINE(181)
		while((true)){
			HX_STACK_LINE(181)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(181)
			int tmp13 = this->_numSegs;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(181)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(181)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(181)
			if ((tmp15)){
				HX_STACK_LINE(181)
				break;
			}
			HX_STACK_LINE(183)
			int tmp16 = (i * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			j = tmp16;
			HX_STACK_LINE(184)
			::flixel::util::FlxPoint tmp17 = this->_points->__get(j).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(184)
			int tmp18 = (j + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(184)
			::flixel::util::FlxPoint tmp19 = this->_points->__get(tmp18).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(184)
			int tmp20 = (j + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(184)
			::flixel::util::FlxPoint tmp21 = this->_points->__get(tmp20).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(184)
			Float tmp22 = this->getCurveLength(tmp17,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(184)
			this->_curveD[i] = tmp22;
			HX_STACK_LINE(185)
			int tmp23 = (i)++;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(185)
			Float tmp24 = this->_curveD->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(185)
			hx::AddEq(this->_distance,tmp24);
		}
		HX_STACK_LINE(189)
		i = (int)0;
		HX_STACK_LINE(190)
		Float d = (int)0;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			int tmp13 = this->_numSegs;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(191)
			if ((tmp15)){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(193)
			Float tmp16 = this->_curveD->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(193)
			hx::AddEq(d,tmp16);
			HX_STACK_LINE(194)
			int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(194)
			Float tmp18 = d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(194)
			Float tmp19 = this->_distance;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(194)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(194)
			this->_curveT[tmp17] = tmp20;
		}
		HX_STACK_LINE(196)
		int tmp12 = this->_numSegs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		this->_curveT[tmp13] = (int)1;
		HX_STACK_LINE(197)
		this->_curveT->unshift((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(QuadPath_obj,updatePath,(void))

Float QuadPath_obj::getCurveLength( ::flixel::util::FlxPoint start,::flixel::util::FlxPoint control,::flixel::util::FlxPoint finish){
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getCurveLength",0x2a112e3d,"flixel.tweens.motion.QuadPath.getCurveLength","flixel/tweens/motion/QuadPath.hx",201,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(control,"control")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_LINE(202)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(202)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(202)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(202)
		point->_inPool = false;
		HX_STACK_LINE(202)
		tmp = point;
	}
	HX_STACK_LINE(202)
	::flixel::util::FlxPoint a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(203)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(203)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(203)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(203)
		point->_inPool = false;
		HX_STACK_LINE(203)
		tmp1 = point;
	}
	HX_STACK_LINE(203)
	::flixel::util::FlxPoint b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(205)
	Float tmp2 = start->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	Float tmp3 = ((int)2 * control->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(205)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	Float tmp5 = finish->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(205)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(205)
	a->set_x(tmp6);
	HX_STACK_LINE(206)
	Float tmp7 = start->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(206)
	Float tmp8 = ((int)2 * control->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(206)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(206)
	Float tmp10 = finish->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(206)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(206)
	a->set_y(tmp11);
	HX_STACK_LINE(207)
	Float tmp12 = ((int)2 * control->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(207)
	Float tmp13 = ((int)2 * start->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(207)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(207)
	b->set_x(tmp14);
	HX_STACK_LINE(208)
	Float tmp15 = ((int)2 * control->y);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(208)
	Float tmp16 = ((int)2 * start->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(208)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(208)
	b->set_y(tmp17);
	HX_STACK_LINE(209)
	Float tmp18 = (a->x * a->x);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(209)
	Float tmp19 = (a->y * a->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(209)
	Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(209)
	Float tmp21 = ((int)4 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(209)
	Float A = tmp21;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(210)
	Float tmp22 = (a->x * b->x);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(210)
	Float tmp23 = (a->y * b->y);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(210)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(210)
	Float tmp25 = ((int)4 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(210)
	Float B = tmp25;		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(211)
	Float tmp26 = (b->x * b->x);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(211)
	Float tmp27 = (b->y * b->y);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(211)
	Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(211)
	Float C = tmp28;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(212)
	Float tmp29 = (A + B);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(212)
	Float tmp30 = C;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(212)
	Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(212)
	Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(212)
	Float tmp33 = ((int)2 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(212)
	Float ABC = tmp33;		HX_STACK_VAR(ABC,"ABC");
	HX_STACK_LINE(213)
	Float tmp34 = A;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(213)
	Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(213)
	Float A2 = tmp35;		HX_STACK_VAR(A2,"A2");
	HX_STACK_LINE(214)
	Float tmp36 = ((int)2 * A);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(214)
	Float tmp37 = A2;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(214)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(214)
	Float A32 = tmp38;		HX_STACK_VAR(A32,"A32");
	HX_STACK_LINE(215)
	Float tmp39 = C;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(215)
	Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(215)
	Float tmp41 = ((int)2 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(215)
	Float C2 = tmp41;		HX_STACK_VAR(C2,"C2");
	HX_STACK_LINE(216)
	Float tmp42 = (Float(B) / Float(A2));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(216)
	Float BA = tmp42;		HX_STACK_VAR(BA,"BA");
	HX_STACK_LINE(218)
	a->put();
	HX_STACK_LINE(219)
	b->put();
	HX_STACK_LINE(221)
	Float tmp43 = (A32 * ABC);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(221)
	Float tmp44 = (A2 * B);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(221)
	Float tmp45 = (ABC - C2);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(221)
	Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(221)
	Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(221)
	Float tmp48 = ((int)4 * C);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(221)
	Float tmp49 = A;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(221)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(221)
	Float tmp51 = (B * B);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(221)
	Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(221)
	Float tmp53 = ((int)2 * A2);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(221)
	Float tmp54 = BA;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(221)
	Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(221)
	Float tmp56 = ABC;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(221)
	Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(221)
	Float tmp58 = (BA + C2);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(221)
	Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(221)
	Float tmp60 = ::Math_obj::log(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(221)
	Float tmp61 = (tmp52 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(221)
	Float tmp62 = (tmp47 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(221)
	Float tmp63 = ((int)4 * A32);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(221)
	Float tmp64 = (Float(tmp62) / Float(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(221)
	return tmp64;
}


HX_DEFINE_DYNAMIC_FUNC3(QuadPath_obj,getCurveLength,return )


QuadPath_obj::QuadPath_obj()
{
}

void QuadPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPath);
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_numSegs,"_numSegs");
	HX_MARK_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_MARK_MEMBER_NAME(_curveT,"_curveT");
	HX_MARK_MEMBER_NAME(_curveD,"_curveD");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_b,"_b");
	HX_MARK_MEMBER_NAME(_c,"_c");
	::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_numSegs,"_numSegs");
	HX_VISIT_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_VISIT_MEMBER_NAME(_curveT,"_curveT");
	HX_VISIT_MEMBER_NAME(_curveD,"_curveD");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(_c,"_c");
	::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		if (HX_FIELD_EQ(inName,"_b") ) { return _b; }
		if (HX_FIELD_EQ(inName,"_c") ) { return _c; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { return _curveT; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { return _curveD; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { return _numSegs; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { return _updateCurve; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurveLength") ) { return getCurveLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_c") ) { _c=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { _curveT=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { _curveD=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { _numSegs=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { _updateCurve=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool QuadPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void QuadPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"));
	outFields->push(HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"));
	outFields->push(HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_a","\x22","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_b","\x23","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_c","\x24","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(QuadPath_obj,_points),HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_numSegs),HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9")},
	{hx::fsBool,(int)offsetof(QuadPath_obj,_updateCurve),HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveT),HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveD),HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_a),HX_HCSTRING("_a","\x22","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_b),HX_HCSTRING("_b","\x23","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_c),HX_HCSTRING("_c","\x24","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"),
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"),
	HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"),
	HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"),
	HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"),
	HX_HCSTRING("_a","\x22","\x53","\x00","\x00"),
	HX_HCSTRING("_b","\x23","\x53","\x00","\x00"),
	HX_HCSTRING("_c","\x24","\x53","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updatePath","\x4e","\xd0","\x06","\x03"),
	HX_HCSTRING("getCurveLength","\xff","\xd5","\xff","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadPath_obj::__mClass;

void QuadPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.QuadPath","\x70","\x9a","\x74","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &QuadPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadPath_obj >;
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
