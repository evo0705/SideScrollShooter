#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.FlxTween","new",0xa442439f,"flixel.tweens.FlxTween.new","flixel/tweens/FlxTween.hx",22,0x5d58d691)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(356)
	this->_delayToUse = ((Float)0);
	HX_STACK_LINE(355)
	this->_secondsSinceStart = ((Float)0);
	HX_STACK_LINE(353)
	this->loopDelay = ((Float)0);
	HX_STACK_LINE(348)
	this->startDelay = ((Float)0);
	HX_STACK_LINE(343)
	this->executions = (int)0;
	HX_STACK_LINE(329)
	this->duration = ((Float)0);
	HX_STACK_LINE(328)
	this->active = true;
	HX_STACK_LINE(363)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	Dynamic tmp1 = this->resolveTweenOptions(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	Options = tmp1;
	HX_STACK_LINE(365)
	Dynamic tmp2 = Options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	this->set_type(tmp2);
	HX_STACK_LINE(366)
	this->complete = Options->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic );
	HX_STACK_LINE(367)
	this->ease = Options->__Field(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"), hx::paccDynamic );
	HX_STACK_LINE(368)
	Dynamic tmp3 = Options->__Field(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	Dynamic tmp4 = Options->__Field(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(368)
	this->setDelays(tmp3,tmp4);
}
;
	return null();
}

//FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< FlxTween_obj > _result_ = new FlxTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > _result_ = new FlxTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxTween_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTween_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTween_obj >(this); }
Dynamic FlxTween_obj::resolveTweenOptions( Dynamic Options){
	HX_STACK_FRAME("flixel.tweens.FlxTween","resolveTweenOptions",0x40bbd67e,"flixel.tweens.FlxTween.resolveTweenOptions","flixel/tweens/FlxTween.hx",372,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Options,"Options")
	HX_STACK_LINE(373)
	bool tmp = (Options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tweens/FlxTween.hx",374,0x5d58d691)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(374)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		Options = tmp1;
	}
	HX_STACK_LINE(376)
	bool tmp1 = (Options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	if ((tmp1)){
		HX_STACK_LINE(377)
		Options->__FieldRef(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")) = (int)8;
	}
	HX_STACK_LINE(379)
	Dynamic tmp2 = Options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(379)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,resolveTweenOptions,return )

Void FlxTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","destroy",0xb268abb9,"flixel.tweens.FlxTween.destroy","flixel/tweens/FlxTween.hx",383,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(384)
		this->complete = null();
		HX_STACK_LINE(385)
		this->ease = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

Void FlxTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","update",0xb905642a,"flixel.tweens.FlxTween.update","flixel/tweens/FlxTween.hx",389,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		Float tmp = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		hx::AddEq(this->_secondsSinceStart,tmp);
		HX_STACK_LINE(391)
		int tmp1 = this->executions;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		if ((tmp2)){
			HX_STACK_LINE(391)
			tmp3 = this->loopDelay;
		}
		else{
			HX_STACK_LINE(391)
			tmp3 = this->startDelay;
		}
		HX_STACK_LINE(391)
		Float delay = tmp3;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(392)
		Float tmp4 = this->_secondsSinceStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		Float tmp5 = delay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		Float tmp7 = ::Math_obj::max(tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		Float tmp8 = this->duration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		this->scale = tmp9;
		HX_STACK_LINE(393)
		Dynamic tmp10 = this->ease_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(393)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(393)
		if ((tmp11)){
			HX_STACK_LINE(395)
			Float tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(395)
			Float tmp13 = this->ease(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(395)
			this->scale = tmp13;
		}
		HX_STACK_LINE(397)
		bool tmp12 = this->backward;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(397)
		if ((tmp12)){
			HX_STACK_LINE(399)
			Float tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(399)
			Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(399)
			this->scale = tmp14;
		}
		HX_STACK_LINE(401)
		Float tmp13 = this->_secondsSinceStart;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(401)
		Float tmp14 = this->duration;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(401)
		Float tmp15 = delay;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(401)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(401)
		bool tmp17 = (tmp13 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(401)
		if ((tmp17)){
			HX_STACK_LINE(403)
			bool tmp18 = this->backward;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(403)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(403)
			if ((tmp18)){
				HX_STACK_LINE(403)
				tmp19 = (int)0;
			}
			else{
				HX_STACK_LINE(403)
				tmp19 = (int)1;
			}
			HX_STACK_LINE(403)
			this->scale = tmp19;
			HX_STACK_LINE(404)
			this->finished = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,update,(void))

::flixel::tweens::FlxTween FlxTween_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","start",0xd6ec7561,"flixel.tweens.FlxTween.start","flixel/tweens/FlxTween.hx",412,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(414)
	int tmp = this->executions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(414)
	if ((tmp1)){
		HX_STACK_LINE(414)
		tmp2 = this->loopDelay;
	}
	else{
		HX_STACK_LINE(414)
		tmp2 = this->startDelay;
	}
	HX_STACK_LINE(414)
	this->_delayToUse = tmp2;
	HX_STACK_LINE(415)
	Float tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(415)
	if ((tmp4)){
		HX_STACK_LINE(417)
		this->active = false;
		HX_STACK_LINE(418)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(420)
	this->active = true;
	HX_STACK_LINE(421)
	this->finished = false;
	HX_STACK_LINE(422)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","cancel",0xea33cb9b,"flixel.tweens.FlxTween.cancel","flixel/tweens/FlxTween.hx",430,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(431)
		this->active = false;
		HX_STACK_LINE(432)
		this->finished = true;
		HX_STACK_LINE(433)
		::flixel::plugin::TweenManager tmp = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		tmp->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

Void FlxTween_obj::finish( ){
{
		HX_STACK_FRAME("flixel.tweens.FlxTween","finish",0xb87f1e74,"flixel.tweens.FlxTween.finish","flixel/tweens/FlxTween.hx",437,0x5d58d691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		(this->executions)++;
		HX_STACK_LINE(440)
		Dynamic tmp = this->complete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(440)
		if ((tmp1)){
			HX_STACK_LINE(441)
			this->complete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(443)
			int tmp3 = (int)-17;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			int tmp4 = (int(tmp2) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(443)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(443)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(443)
			switch( (int)(tmp5)){
				case (int)1: {
					HX_STACK_LINE(446)
					Float tmp6 = this->duration;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					Float tmp7 = this->startDelay;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(446)
					this->_secondsSinceStart = tmp8;
					HX_STACK_LINE(447)
					this->active = false;
					HX_STACK_LINE(448)
					this->finished = true;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(451)
					this->active = false;
					HX_STACK_LINE(452)
					this->finished = true;
					HX_STACK_LINE(453)
					Float tmp6 = this->duration;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(453)
					Float tmp7 = this->startDelay;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(453)
					Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(453)
					this->_secondsSinceStart = tmp8;
					HX_STACK_LINE(454)
					::flixel::plugin::TweenManager tmp9 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(454)
					tmp9->remove(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(457)
					Float tmp6 = this->_secondsSinceStart;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(457)
					Float tmp7 = this->_delayToUse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(457)
					Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(457)
					Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(457)
					Float tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(457)
					Float tmp11 = this->_delayToUse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(457)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(457)
					this->_secondsSinceStart = tmp12;
					HX_STACK_LINE(458)
					Float tmp13 = this->_secondsSinceStart;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(458)
					Float tmp14 = this->_delayToUse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(458)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					Float tmp16 = ::Math_obj::max(tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					Float tmp17 = this->duration;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					this->scale = tmp18;
					HX_STACK_LINE(459)
					Dynamic tmp19 = this->ease_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(459)
					bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(459)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(459)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(459)
					if ((tmp21)){
						HX_STACK_LINE(459)
						Float tmp23 = this->scale;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(459)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(459)
						Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(459)
						tmp22 = (tmp25 > (int)0);
					}
					else{
						HX_STACK_LINE(459)
						tmp22 = false;
					}
					HX_STACK_LINE(459)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(459)
					if ((tmp22)){
						HX_STACK_LINE(459)
						Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(459)
						Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(459)
						tmp23 = (tmp25 < (int)1);
					}
					else{
						HX_STACK_LINE(459)
						tmp23 = false;
					}
					HX_STACK_LINE(459)
					if ((tmp23)){
						HX_STACK_LINE(461)
						Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(461)
						Float tmp25 = this->ease(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(461)
						this->scale = tmp25;
					}
					HX_STACK_LINE(463)
					this->start();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(466)
					Float tmp6 = this->_secondsSinceStart;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(466)
					Float tmp7 = this->_delayToUse;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(466)
					Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(466)
					Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(466)
					Float tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(466)
					Float tmp11 = this->_delayToUse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(466)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(466)
					this->_secondsSinceStart = tmp12;
					HX_STACK_LINE(467)
					Float tmp13 = this->_secondsSinceStart;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(467)
					Float tmp14 = this->_delayToUse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(467)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(467)
					Float tmp16 = ::Math_obj::max(tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(467)
					Float tmp17 = this->duration;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(467)
					Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(467)
					this->scale = tmp18;
					HX_STACK_LINE(468)
					Dynamic tmp19 = this->ease_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(468)
					bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(468)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(468)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(468)
					if ((tmp21)){
						HX_STACK_LINE(468)
						Float tmp23 = this->scale;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(468)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(468)
						Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(468)
						tmp22 = (tmp25 > (int)0);
					}
					else{
						HX_STACK_LINE(468)
						tmp22 = false;
					}
					HX_STACK_LINE(468)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(468)
					if ((tmp22)){
						HX_STACK_LINE(468)
						Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(468)
						Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(468)
						tmp23 = (tmp25 < (int)1);
					}
					else{
						HX_STACK_LINE(468)
						tmp23 = false;
					}
					HX_STACK_LINE(468)
					if ((tmp23)){
						HX_STACK_LINE(470)
						Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(470)
						Float tmp25 = this->ease(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(470)
						this->scale = tmp25;
					}
					HX_STACK_LINE(472)
					bool tmp24 = this->backward;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(472)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(472)
					this->backward = tmp25;
					HX_STACK_LINE(473)
					bool tmp26 = this->backward;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(473)
					if ((tmp26)){
						HX_STACK_LINE(475)
						Float tmp27 = this->scale;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(475)
						Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(475)
						this->scale = tmp28;
					}
					HX_STACK_LINE(477)
					this->start();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

::flixel::tweens::FlxTween FlxTween_obj::setDelays( Dynamic StartDelay,Dynamic LoopDelay){
	HX_STACK_FRAME("flixel.tweens.FlxTween","setDelays",0x750c1d51,"flixel.tweens.FlxTween.setDelays","flixel/tweens/FlxTween.hx",488,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartDelay,"StartDelay")
	HX_STACK_ARG(LoopDelay,"LoopDelay")
	HX_STACK_LINE(489)
	bool tmp = (StartDelay != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	if ((tmp)){
		HX_STACK_LINE(489)
		tmp1 = StartDelay;
	}
	else{
		HX_STACK_LINE(489)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(489)
	this->set_startDelay(tmp1);
	HX_STACK_LINE(490)
	bool tmp2 = (LoopDelay != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	if ((tmp2)){
		HX_STACK_LINE(490)
		tmp3 = LoopDelay;
	}
	else{
		HX_STACK_LINE(490)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(490)
	this->set_loopDelay(tmp3);
	HX_STACK_LINE(491)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,setDelays,return )

Float FlxTween_obj::set_startDelay( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_startDelay",0xdc7f879f,"flixel.tweens.FlxTween.set_startDelay","flixel/tweens/FlxTween.hx",495,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(496)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	Float dly = tmp1;		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(497)
	int tmp2 = this->executions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(497)
	if ((tmp3)){
		HX_STACK_LINE(499)
		Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(499)
		Float tmp5 = this->_secondsSinceStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(499)
		Float tmp6 = this->_delayToUse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(499)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(499)
		Float tmp8 = ::Math_obj::max(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(499)
		Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(499)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(499)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(499)
		Float tmp12 = dly;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(499)
		Float tmp13 = this->startDelay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(499)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(499)
		Float tmp15 = ::Math_obj::max(tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(499)
		Float tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(499)
		this->_secondsSinceStart = tmp16;
		HX_STACK_LINE(500)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(502)
	Float tmp4 = this->startDelay = dly;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(502)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_startDelay,return )

Float FlxTween_obj::set_loopDelay( Dynamic value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_loopDelay",0xc5954461,"flixel.tweens.FlxTween.set_loopDelay","flixel/tweens/FlxTween.hx",506,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(507)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(507)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	Float dly = tmp1;		HX_STACK_VAR(dly,"dly");
	HX_STACK_LINE(508)
	int tmp2 = this->executions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(508)
	if ((tmp3)){
		HX_STACK_LINE(510)
		Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		Float tmp5 = this->_secondsSinceStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		Float tmp6 = this->_delayToUse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(510)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(510)
		Float tmp8 = ::Math_obj::max(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(510)
		Float tmp9 = this->duration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(510)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(510)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(510)
		Float tmp12 = dly;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		Float tmp13 = this->loopDelay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(510)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(510)
		Float tmp15 = ::Math_obj::max(tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(510)
		Float tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(510)
		this->_secondsSinceStart = tmp16;
		HX_STACK_LINE(511)
		this->_delayToUse = dly;
	}
	HX_STACK_LINE(513)
	Float tmp4 = this->loopDelay = dly;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(513)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_loopDelay,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_FRAME("flixel.tweens.FlxTween","get_percent",0x9c57551b,"flixel.tweens.FlxTween.get_percent","flixel/tweens/FlxTween.hx",517,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	Float tmp = this->_secondsSinceStart;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	Float tmp1 = this->_delayToUse;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(518)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(518)
	Float tmp3 = ::Math_obj::max(tmp2,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(518)
	Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(518)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(518)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_percent",0xa6c45c27,"flixel.tweens.FlxTween.set_percent","flixel/tweens/FlxTween.hx",522,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(523)
	Float tmp = this->duration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	Float tmp3 = this->_delayToUse;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(523)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(523)
	Float tmp5 = this->_secondsSinceStart = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(523)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

int FlxTween_obj::set_type( int value){
	HX_STACK_FRAME("flixel.tweens.FlxTween","set_type",0x136d7018,"flixel.tweens.FlxTween.set_type","flixel/tweens/FlxTween.hx",527,0x5d58d691)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(528)
	bool tmp = (value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(528)
	if ((tmp)){
		HX_STACK_LINE(530)
		value = (int)8;
	}
	else{
		HX_STACK_LINE(532)
		bool tmp1 = (value == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		if ((tmp1)){
			HX_STACK_LINE(534)
			int tmp2 = (int)17;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			value = tmp2;
		}
	}
	HX_STACK_LINE(537)
	int tmp1 = (int(value) & int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(537)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(537)
	this->backward = tmp2;
	HX_STACK_LINE(538)
	int tmp3 = this->type = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(538)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

::flixel::plugin::TweenManager FlxTween_obj::manager;

::flixel::tweens::misc::VarTween FlxTween_obj::tween( Dynamic Object,Dynamic Values,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","tween",0x6c51ab6a,"flixel.tweens.FlxTween.tween","flixel/tweens/FlxTween.hx",65,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Values,"Values")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(66)
		::flixel::tweens::misc::VarTween tmp = ::flixel::tweens::misc::VarTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::flixel::tweens::misc::VarTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(67)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Dynamic tmp2 = Values;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		tween->tween(tmp1,tmp2,tmp3);
		HX_STACK_LINE(68)
		::flixel::plugin::TweenManager tmp4 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::flixel::tweens::misc::VarTween tmp5 = tween;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		::flixel::tweens::misc::VarTween tmp6 = tmp4->add_flixel_tweens_misc_VarTween(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,tween,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,hx::Null< Float >  __o_Duration,Dynamic Options,Dynamic TweenFunction){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","num",0xa4425185,"flixel.tweens.FlxTween.num","flixel/tweens/FlxTween.hx",93,0x5d58d691)
	HX_STACK_ARG(FromValue,"FromValue")
	HX_STACK_ARG(ToValue,"ToValue")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
	HX_STACK_ARG(TweenFunction,"TweenFunction")
{
		HX_STACK_LINE(94)
		::flixel::tweens::misc::NumTween tmp = ::flixel::tweens::misc::NumTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::flixel::tweens::misc::NumTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(95)
		Float tmp1 = FromValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		Float tmp2 = ToValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		Dynamic tmp4 = TweenFunction;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(96)
		::flixel::plugin::TweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		::flixel::tweens::misc::NumTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		::flixel::tweens::misc::NumTween tmp7 = tmp5->add_flixel_tweens_misc_NumTween(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","angle",0x75c344d2,"flixel.tweens.FlxTween.angle","flixel/tweens/FlxTween.hx",116,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(117)
		::flixel::tweens::misc::AngleTween tmp = ::flixel::tweens::misc::AngleTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::flixel::tweens::misc::AngleTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(118)
		Float tmp1 = FromAngle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Float tmp2 = ToAngle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		Float tmp3 = Duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		::flixel::FlxSprite tmp4 = Sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		tween->tween(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(119)
		::flixel::plugin::TweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::flixel::tweens::misc::AngleTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		::flixel::tweens::misc::AngleTween tmp7 = tmp5->add_flixel_tweens_misc_AngleTween(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(119)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,hx::Null< Float >  __o_Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,Dynamic Options){
Float Duration = __o_Duration.Default(1);
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","color",0x9d3d7262,"flixel.tweens.FlxTween.color","flixel/tweens/FlxTween.hx",141,0x5d58d691)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(FromAlpha,"FromAlpha")
	HX_STACK_ARG(ToAlpha,"ToAlpha")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(142)
		::flixel::tweens::misc::ColorTween tmp = ::flixel::tweens::misc::ColorTween_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::flixel::tweens::misc::ColorTween tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(143)
		Float tmp1 = Duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		int tmp2 = FromColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		int tmp3 = ToColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		Float tmp4 = FromAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		Float tmp5 = ToAlpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::flixel::FlxSprite tmp6 = Sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		tween->tween(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(144)
		::flixel::plugin::TweenManager tmp7 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		::flixel::tweens::misc::ColorTween tmp8 = tween;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		::flixel::tweens::misc::ColorTween tmp9 = tmp7->add_flixel_tweens_misc_ColorTween(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxTween_obj,color,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearMotion",0xd656f2dc,"flixel.tweens.FlxTween.linearMotion","flixel/tweens/FlxTween.hx",167,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(168)
		::flixel::tweens::motion::LinearMotion tmp = ::flixel::tweens::motion::LinearMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::flixel::tweens::motion::LinearMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(169)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		tween->setObject(tmp1);
		HX_STACK_LINE(170)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		Float tmp4 = ToX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		Float tmp5 = ToY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Float tmp6 = DurationOrSpeed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		bool tmp7 = UseDuration;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(171)
		::flixel::plugin::TweenManager tmp8 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		::flixel::tweens::motion::LinearMotion tmp9 = tween;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(171)
		::flixel::tweens::motion::LinearMotion tmp10 = tmp8->add_flixel_tweens_motion_LinearMotion(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(171)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadMotion",0xc62584fe,"flixel.tweens.FlxTween.quadMotion","flixel/tweens/FlxTween.hx",196,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(197)
		::flixel::tweens::motion::QuadMotion tmp = ::flixel::tweens::motion::QuadMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::flixel::tweens::motion::QuadMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(198)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		tween->setObject(tmp1);
		HX_STACK_LINE(199)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		Float tmp4 = ControlX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		Float tmp5 = ControlY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		Float tmp6 = ToX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		Float tmp7 = ToY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		Float tmp8 = DurationOrSpeed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		bool tmp9 = UseDuration;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(200)
		::flixel::plugin::TweenManager tmp10 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		::flixel::tweens::motion::QuadMotion tmp11 = tween;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		::flixel::tweens::motion::QuadMotion tmp12 = tmp10->add_flixel_tweens_motion_QuadMotion(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  __o_Duration,Dynamic Options){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.tweens.FlxTween","cubicMotion",0xa068755f,"flixel.tweens.FlxTween.cubicMotion","flixel/tweens/FlxTween.hx",226,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(227)
		::flixel::tweens::motion::CubicMotion tmp = ::flixel::tweens::motion::CubicMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::flixel::tweens::motion::CubicMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(228)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		tween->setObject(tmp1);
		HX_STACK_LINE(229)
		Float tmp2 = FromX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		Float tmp3 = FromY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		Float tmp4 = aX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		Float tmp5 = aY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		Float tmp6 = bX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		Float tmp7 = bY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		Float tmp8 = ToX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		Float tmp9 = ToY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(229)
		Float tmp10 = Duration;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(229)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(230)
		::flixel::plugin::TweenManager tmp11 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		::flixel::tweens::motion::CubicMotion tmp12 = tween;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		::flixel::tweens::motion::CubicMotion tmp13 = tmp11->add_flixel_tweens_motion_CubicMotion(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","circularMotion",0x65e89916,"flixel.tweens.FlxTween.circularMotion","flixel/tweens/FlxTween.hx",255,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(256)
		::flixel::tweens::motion::CircularMotion tmp = ::flixel::tweens::motion::CircularMotion_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		::flixel::tweens::motion::CircularMotion tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(257)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		tween->setObject(tmp1);
		HX_STACK_LINE(258)
		Float tmp2 = CenterX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Float tmp3 = CenterY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		Float tmp4 = Radius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		Float tmp5 = Angle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		bool tmp6 = Clockwise;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		Float tmp7 = DurationOrSpeed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		bool tmp8 = UseDuration;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(258)
		tween->setMotion(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(259)
		::flixel::plugin::TweenManager tmp9 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(259)
		::flixel::tweens::motion::CircularMotion tmp10 = tween;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(259)
		::flixel::tweens::motion::CircularMotion tmp11 = tmp9->add_flixel_tweens_motion_CircularMotion(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(259)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","linearPath",0xd40abccb,"flixel.tweens.FlxTween.linearPath","flixel/tweens/FlxTween.hx",279,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(280)
		::flixel::tweens::motion::LinearPath tmp = ::flixel::tweens::motion::LinearPath_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		::flixel::tweens::motion::LinearPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(282)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(284)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(284)
			while((true)){
				HX_STACK_LINE(284)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(284)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(284)
				if ((tmp3)){
					HX_STACK_LINE(284)
					break;
				}
				HX_STACK_LINE(284)
				::flixel::util::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(284)
				::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(284)
				++(_g);
				HX_STACK_LINE(286)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(290)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		tween->setObject(tmp2);
		HX_STACK_LINE(291)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(292)
		::flixel::plugin::TweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		::flixel::tweens::motion::LinearPath tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		::flixel::tweens::motion::LinearPath tmp7 = tmp5->add_flixel_tweens_motion_LinearPath(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  __o_DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.FlxTween","quadPath",0x6abb226d,"flixel.tweens.FlxTween.quadPath","flixel/tweens/FlxTween.hx",312,0x5d58d691)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Points,"Points")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
	HX_STACK_ARG(Options,"Options")
{
		HX_STACK_LINE(313)
		::flixel::tweens::motion::QuadPath tmp = ::flixel::tweens::motion::QuadPath_obj::__new(Options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::flixel::tweens::motion::QuadPath tween = tmp;		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(315)
		bool tmp1 = (Points != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		if ((tmp1)){
			HX_STACK_LINE(317)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			while((true)){
				HX_STACK_LINE(317)
				bool tmp2 = (_g < Points->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(317)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(317)
				if ((tmp3)){
					HX_STACK_LINE(317)
					break;
				}
				HX_STACK_LINE(317)
				::flixel::util::FlxPoint tmp4 = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(317)
				::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(317)
				++(_g);
				HX_STACK_LINE(319)
				Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(319)
				tween->addPoint(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(323)
		::flixel::FlxObject tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		tween->setObject(tmp2);
		HX_STACK_LINE(324)
		Float tmp3 = DurationOrSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		tween->setMotion(tmp3,tmp4);
		HX_STACK_LINE(325)
		::flixel::plugin::TweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(325)
		::flixel::tweens::motion::QuadPath tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(325)
		::flixel::tweens::motion::QuadPath tmp7 = tmp5->add_flixel_tweens_motion_QuadPath(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(325)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(startDelay,"startDelay");
	HX_MARK_MEMBER_NAME(loopDelay,"loopDelay");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(_delayToUse,"_delayToUse");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(startDelay,"startDelay");
	HX_VISIT_MEMBER_NAME(loopDelay,"loopDelay");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(_delayToUse,"_delayToUse");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward; }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { return loopDelay; }
		if (HX_FIELD_EQ(inName,"setDelays") ) { return setDelays_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { return startDelay; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { return _delayToUse; }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_loopDelay") ) { return set_loopDelay_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_startDelay") ) { return set_startDelay_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return _secondsSinceStart; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resolveTweenOptions") ) { return resolveTweenOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTween_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { outValue = num_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angle") ) { outValue = angle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"color") ) { outValue = color_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { outValue = manager; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { outValue = quadPath_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { outValue = quadMotion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linearPath") ) { outValue = linearPath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { outValue = cubicMotion_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { outValue = linearMotion_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { outValue = circularMotion_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue);type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopDelay") ) { if (inCallProp == hx::paccAlways) return set_loopDelay(inValue);loopDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startDelay") ) { if (inCallProp == hx::paccAlways) return set_startDelay(inValue);startDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_delayToUse") ) { _delayToUse=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=ioValue.Cast< ::flixel::plugin::TweenManager >(); return true; }
	}
	return false;
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27"));
	outFields->push(HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c"));
	outFields->push(HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"));
	outFields->push(HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"));
	outFields->push(HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd"));
	outFields->push(HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTween_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,ease),HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTween_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsBool,(int)offsetof(FlxTween_obj,backward),HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27")},
	{hx::fsInt,(int)offsetof(FlxTween_obj,executions),HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,startDelay),HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,loopDelay),HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_secondsSinceStart),HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd")},
	{hx::fsFloat,(int)offsetof(FlxTween_obj,_delayToUse),HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTween_obj::PERSIST,HX_HCSTRING("PERSIST","\xf4","\xf5","\x44","\x03")},
	{hx::fsInt,(void *) &FlxTween_obj::LOOPING,HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(void *) &FlxTween_obj::PINGPONG,HX_HCSTRING("PINGPONG","\x6a","\x23","\xc9","\x01")},
	{hx::fsInt,(void *) &FlxTween_obj::ONESHOT,HX_HCSTRING("ONESHOT","\x40","\x6e","\xaf","\xf6")},
	{hx::fsInt,(void *) &FlxTween_obj::BACKWARD,HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80")},
	{hx::fsObject /*::flixel::plugin::TweenManager*/ ,(void *) &FlxTween_obj::manager,HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("backward","\xe3","\xdb","\x18","\x27"),
	HX_HCSTRING("executions","\xdb","\xf9","\x36","\x3c"),
	HX_HCSTRING("startDelay","\xc1","\xaf","\x3d","\xf3"),
	HX_HCSTRING("loopDelay","\x7f","\xf6","\xd2","\x04"),
	HX_HCSTRING("_secondsSinceStart","\x68","\x4a","\x61","\xcd"),
	HX_HCSTRING("_delayToUse","\x28","\x28","\x40","\x14"),
	HX_HCSTRING("resolveTweenOptions","\x3f","\xb5","\x76","\x9f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("setDelays","\xd2","\x30","\x7d","\xca"),
	HX_HCSTRING("set_startDelay","\x7e","\x20","\x53","\x89"),
	HX_HCSTRING("set_loopDelay","\x62","\xac","\x3c","\x0b"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

#endif

hx::Class FlxTween_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PERSIST","\xf4","\xf5","\x44","\x03"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("PINGPONG","\x6a","\x23","\xc9","\x01"),
	HX_HCSTRING("ONESHOT","\x40","\x6e","\xaf","\xf6"),
	HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("num","\x46","\xde","\x53","\x00"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("linearMotion","\xfb","\x45","\xd8","\xa1"),
	HX_HCSTRING("quadMotion","\x5d","\x82","\xa5","\x33"),
	HX_HCSTRING("cubicMotion","\x20","\x2b","\xe6","\x02"),
	HX_HCSTRING("circularMotion","\xf5","\x31","\xbc","\x12"),
	HX_HCSTRING("linearPath","\x2a","\xba","\x8a","\x41"),
	HX_HCSTRING("quadPath","\x0c","\xba","\x6e","\xd2"),
	::String(null()) };

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.FlxTween","\x2d","\x88","\x9a","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTween_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTween_obj >;
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

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace flixel
} // end namespace tweens
