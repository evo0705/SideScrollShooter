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
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
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
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxTypedEmitter.hx",23,0xb8028a0a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(142)
	this->_waitForKill = false;
	HX_STACK_LINE(134)
	this->_counter = (int)0;
	HX_STACK_LINE(130)
	this->_timer = ((Float)0);
	HX_STACK_LINE(126)
	this->_explode = true;
	HX_STACK_LINE(122)
	this->_quantity = (int)0;
	HX_STACK_LINE(114)
	this->bounce = ((Float)0);
	HX_STACK_LINE(64)
	this->frequency = ((Float)0.1);
	HX_STACK_LINE(60)
	this->on = false;
	HX_STACK_LINE(154)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	super::__construct(tmp);
	HX_STACK_LINE(156)
	::flixel::effects::particles::Bounds tmp1 = ::flixel::effects::particles::Bounds_obj::__new(X,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	this->xPosition = tmp1;
	HX_STACK_LINE(157)
	::flixel::effects::particles::Bounds tmp2 = ::flixel::effects::particles::Bounds_obj::__new(Y,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	this->yPosition = tmp2;
	HX_STACK_LINE(158)
	::flixel::effects::particles::Bounds tmp3 = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	this->xVelocity = tmp3;
	HX_STACK_LINE(159)
	::flixel::effects::particles::Bounds tmp4 = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	this->yVelocity = tmp4;
	HX_STACK_LINE(160)
	::flixel::effects::particles::Bounds tmp5 = ::flixel::effects::particles::Bounds_obj::__new((int)-360,(int)360);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	this->rotation = tmp5;
	HX_STACK_LINE(161)
	::flixel::effects::particles::Bounds tmp6 = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(161)
	this->startScale = tmp6;
	HX_STACK_LINE(162)
	::flixel::effects::particles::Bounds tmp7 = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(162)
	this->endScale = tmp7;
	HX_STACK_LINE(163)
	::flixel::effects::particles::Bounds tmp8 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(163)
	this->startAlpha = tmp8;
	HX_STACK_LINE(164)
	::flixel::effects::particles::Bounds tmp9 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(164)
	this->endAlpha = tmp9;
	HX_STACK_LINE(165)
	::flixel::effects::particles::Bounds tmp10 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(165)
	this->startRed = tmp10;
	HX_STACK_LINE(166)
	::flixel::effects::particles::Bounds tmp11 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(166)
	this->startGreen = tmp11;
	HX_STACK_LINE(167)
	::flixel::effects::particles::Bounds tmp12 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(167)
	this->startBlue = tmp12;
	HX_STACK_LINE(168)
	::flixel::effects::particles::Bounds tmp13 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(168)
	this->endRed = tmp13;
	HX_STACK_LINE(169)
	::flixel::effects::particles::Bounds tmp14 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(169)
	this->endGreen = tmp14;
	HX_STACK_LINE(170)
	::flixel::effects::particles::Bounds tmp15 = ::flixel::effects::particles::Bounds_obj::__new(((Float)1.0),((Float)1.0));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(170)
	this->endBlue = tmp15;
	HX_STACK_LINE(172)
	::flixel::util::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::flixel::util::FlxPool tmp17 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		::flixel::util::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(172)
		::flixel::util::FlxPoint tmp19 = tmp18->set((int)0,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(172)
		::flixel::util::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(172)
		point->_inPool = false;
		HX_STACK_LINE(172)
		tmp16 = point;
	}
	HX_STACK_LINE(172)
	this->acceleration = tmp16;
	HX_STACK_LINE(173)
	this->_particleClass = ((::hx::Class)(hx::ClassOf< ::flixel::effects::particles::FlxParticle >()));
	HX_STACK_LINE(174)
	::flixel::util::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(174)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(174)
		::flixel::util::FlxPool tmp18 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(174)
		::flixel::util::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(174)
		Float tmp20 = X1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(174)
		Float tmp21 = Y1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(174)
		::flixel::util::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(174)
		::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(174)
		point->_inPool = false;
		HX_STACK_LINE(174)
		tmp17 = point;
	}
	HX_STACK_LINE(174)
	this->particleDrag = tmp17;
	HX_STACK_LINE(176)
	::flixel::effects::particles::Bounds tmp18 = ::flixel::effects::particles::Bounds_obj::__new((int)3,(int)3);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(176)
	this->life = tmp18;
	HX_STACK_LINE(177)
	this->set_exists(false);
	HX_STACK_LINE(178)
	::flixel::util::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(178)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(178)
		::flixel::util::FlxPool tmp20 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(178)
		::flixel::util::FlxPoint tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(178)
		Float tmp22 = X1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(178)
		Float tmp23 = Y1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(178)
		::flixel::util::FlxPoint tmp24 = tmp21->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(178)
		::flixel::util::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(178)
		point->_inPool = false;
		HX_STACK_LINE(178)
		tmp19 = point;
	}
	HX_STACK_LINE(178)
	this->_point = tmp19;
}
;
	return null();
}

//FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(__o_X,__o_Y,__o_Size);
	return _result_;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxTypedEmitter.hx",185,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		this->_point = tmp1;
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		this->acceleration = tmp3;
		HX_STACK_LINE(188)
		::flixel::util::FlxPoint tmp4 = this->particleDrag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		this->particleDrag = tmp5;
		HX_STACK_LINE(190)
		this->xPosition = null();
		HX_STACK_LINE(191)
		this->yPosition = null();
		HX_STACK_LINE(192)
		this->xVelocity = null();
		HX_STACK_LINE(193)
		this->yVelocity = null();
		HX_STACK_LINE(194)
		this->rotation = null();
		HX_STACK_LINE(195)
		this->startScale = null();
		HX_STACK_LINE(196)
		this->endScale = null();
		HX_STACK_LINE(197)
		this->startAlpha = null();
		HX_STACK_LINE(198)
		this->endAlpha = null();
		HX_STACK_LINE(199)
		this->startRed = null();
		HX_STACK_LINE(200)
		this->startGreen = null();
		HX_STACK_LINE(201)
		this->startBlue = null();
		HX_STACK_LINE(202)
		this->endRed = null();
		HX_STACK_LINE(203)
		this->endGreen = null();
		HX_STACK_LINE(204)
		this->endBlue = null();
		HX_STACK_LINE(205)
		this->blend = null();
		HX_STACK_LINE(206)
		this->_point = null();
		HX_STACK_LINE(208)
		this->super::destroy();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< Float >  __o_Collide,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
bool Multiple = __o_Multiple.Default(false);
Float Collide = __o_Collide.Default(((Float)0.8));
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxTypedEmitter.hx",223,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(Collide,"Collide")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(224)
		int tmp = Quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		this->set_maxSize(tmp);
		HX_STACK_LINE(225)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(227)
		bool tmp1 = Multiple;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(230)
			Dynamic tmp3 = Graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			sprite->loadGraphic(tmp3,true,null(),null(),null(),null());
			HX_STACK_LINE(231)
			totalFrames = sprite->frames;
			HX_STACK_LINE(232)
			sprite->destroy();
		}
		HX_STACK_LINE(235)
		int randomFrame;		HX_STACK_VAR(randomFrame,"randomFrame");
		HX_STACK_LINE(236)
		Dynamic particle;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(237)
		::hx::Class tmp2 = this->_particleClass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		::hx::Class pClass = tmp2;		HX_STACK_VAR(pClass,"pClass");
		HX_STACK_LINE(238)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			bool tmp3 = (i < Quantity);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			if ((tmp4)){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(242)
			::hx::Class tmp5 = pClass;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			Dynamic tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			particle = tmp6;
			HX_STACK_LINE(244)
			bool tmp7 = Multiple;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			if ((tmp7)){
				HX_STACK_LINE(246)
				int tmp8 = (totalFrames - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				int tmp9 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				randomFrame = tmp9;
				HX_STACK_LINE(248)
				bool tmp10 = (bakedRotationAngles > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				if ((tmp10)){
					HX_STACK_LINE(253)
					Dynamic tmp11 = Graphics;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(253)
					particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp11,true,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(258)
					Dynamic tmp11 = Graphics;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(258)
					particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp11,true,null(),null(),null(),null());
				}
				HX_STACK_LINE(260)
				int tmp11 = randomFrame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(260)
				particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("set_frameIndex","\x62","\x40","\x50","\x37"), hx::paccDynamic )(tmp11);
			}
			else{
				HX_STACK_LINE(264)
				bool tmp8 = (bakedRotationAngles > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(264)
				if ((tmp8)){
					HX_STACK_LINE(269)
					Dynamic tmp9 = Graphics;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(269)
					particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp9,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(274)
					Dynamic tmp9 = Graphics;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(274)
					particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp9,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(277)
			bool tmp8 = (Collide > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			if ((tmp8)){
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					Dynamic _g = particle;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(279)
					Float tmp9 = _g->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(279)
					Float tmp10 = Collide;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(279)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(279)
					_g->__Field(HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"), hx::paccDynamic )(tmp11);
				}
				HX_STACK_LINE(280)
				{
					HX_STACK_LINE(280)
					Dynamic _g = particle;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(280)
					Float tmp9 = _g->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(280)
					Float tmp10 = Collide;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(280)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(280)
					_g->__Field(HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"), hx::paccDynamic )(tmp11);
				}
				HX_STACK_LINE(281)
				particle->__Field(HX_HCSTRING("centerOffsets","\x2b","\xa0","\xb2","\xc1"), hx::paccDynamic )(null());
			}
			else{
				HX_STACK_LINE(285)
				particle->__FieldRef(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")) = (int)0;
			}
			HX_STACK_LINE(288)
			particle->__Field(HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"), hx::paccDynamic )(false);
			HX_STACK_LINE(289)
			Dynamic tmp9 = particle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			this->add(tmp9);
			HX_STACK_LINE(290)
			(i)++;
		}
		HX_STACK_LINE(292)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::update( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxTypedEmitter.hx",299,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		bool tmp = this->on;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		if ((tmp)){
			HX_STACK_LINE(302)
			bool tmp1 = this->_explode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			if ((tmp1)){
				HX_STACK_LINE(304)
				this->on = false;
				HX_STACK_LINE(305)
				this->_waitForKill = true;
				HX_STACK_LINE(307)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(308)
				int tmp2 = this->_quantity;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(308)
				int l = tmp2;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(310)
				bool tmp3 = (l <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				if ((tmp4)){
					HX_STACK_LINE(310)
					int tmp6 = l;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(310)
					tmp5 = (tmp6 > tmp8);
				}
				else{
					HX_STACK_LINE(310)
					tmp5 = true;
				}
				HX_STACK_LINE(310)
				if ((tmp5)){
					HX_STACK_LINE(312)
					int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(312)
					l = tmp6;
				}
				HX_STACK_LINE(315)
				while((true)){
					HX_STACK_LINE(315)
					bool tmp6 = (i < l);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(315)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(315)
					if ((tmp7)){
						HX_STACK_LINE(315)
						break;
					}
					HX_STACK_LINE(317)
					this->emitParticle();
					HX_STACK_LINE(318)
					(i)++;
				}
				HX_STACK_LINE(321)
				this->_quantity = (int)0;
			}
			else{
				HX_STACK_LINE(326)
				Float tmp2 = this->frequency;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(326)
				bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(326)
				if ((tmp3)){
					HX_STACK_LINE(328)
					this->emitParticle();
					HX_STACK_LINE(330)
					int tmp4 = this->_quantity;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(330)
					bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(330)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(330)
					if ((tmp5)){
						HX_STACK_LINE(330)
						int tmp7 = ++(this->_counter);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(330)
						int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(330)
						int tmp9 = this->_quantity;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(330)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(330)
						tmp6 = (tmp8 >= tmp10);
					}
					else{
						HX_STACK_LINE(330)
						tmp6 = false;
					}
					HX_STACK_LINE(330)
					if ((tmp6)){
						HX_STACK_LINE(332)
						this->on = false;
						HX_STACK_LINE(333)
						this->_waitForKill = true;
						HX_STACK_LINE(334)
						this->_quantity = (int)0;
					}
				}
				else{
					HX_STACK_LINE(339)
					Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(339)
					hx::AddEq(this->_timer,tmp4);
					HX_STACK_LINE(341)
					while((true)){
						HX_STACK_LINE(341)
						Float tmp5 = this->_timer;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(341)
						Float tmp6 = this->frequency;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(341)
						bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(341)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(341)
						if ((tmp8)){
							HX_STACK_LINE(341)
							break;
						}
						HX_STACK_LINE(343)
						Float tmp9 = this->frequency;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						hx::SubEq(this->_timer,tmp9);
						HX_STACK_LINE(344)
						this->emitParticle();
						HX_STACK_LINE(346)
						int tmp10 = this->_quantity;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(346)
						bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(346)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(346)
						if ((tmp11)){
							HX_STACK_LINE(346)
							int tmp13 = ++(this->_counter);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(346)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(346)
							int tmp15 = this->_quantity;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(346)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(346)
							tmp12 = (tmp14 >= tmp16);
						}
						else{
							HX_STACK_LINE(346)
							tmp12 = false;
						}
						HX_STACK_LINE(346)
						if ((tmp12)){
							HX_STACK_LINE(348)
							this->on = false;
							HX_STACK_LINE(349)
							this->_waitForKill = true;
							HX_STACK_LINE(350)
							this->_quantity = (int)0;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(356)
			bool tmp1 = this->_waitForKill;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			if ((tmp1)){
				HX_STACK_LINE(358)
				Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(358)
				hx::AddEq(this->_timer,tmp2);
				HX_STACK_LINE(360)
				::flixel::effects::particles::Bounds tmp3 = this->life;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(360)
				Float tmp4 = tmp3->max;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(360)
				bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(360)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(360)
				if ((tmp5)){
					HX_STACK_LINE(360)
					Float tmp7 = this->_timer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(360)
					::flixel::effects::particles::Bounds tmp9 = this->life;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(360)
					::flixel::effects::particles::Bounds tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(360)
					Float tmp11 = tmp10->max;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(360)
					tmp6 = (tmp8 > tmp11);
				}
				else{
					HX_STACK_LINE(360)
					tmp6 = false;
				}
				HX_STACK_LINE(360)
				if ((tmp6)){
					HX_STACK_LINE(362)
					this->kill();
					HX_STACK_LINE(363)
					return null();
				}
			}
		}
		HX_STACK_LINE(367)
		this->super::update();
	}
return null();
}


Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxTypedEmitter.hx",374,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		this->on = false;
		HX_STACK_LINE(376)
		this->_waitForKill = false;
		HX_STACK_LINE(378)
		this->super::kill();
	}
return null();
}


Void FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Lifespan,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity,hx::Null< Float >  __o_LifespanRange){
bool Explode = __o_Explode.Default(true);
Float Lifespan = __o_Lifespan.Default(0);
Float Frequency = __o_Frequency.Default(((Float)0.1));
int Quantity = __o_Quantity.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxTypedEmitter.hx",390,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(391)
		this->revive();
		HX_STACK_LINE(392)
		this->set_visible(true);
		HX_STACK_LINE(393)
		this->on = true;
		HX_STACK_LINE(395)
		this->_explode = Explode;
		HX_STACK_LINE(396)
		::flixel::effects::particles::Bounds tmp = this->life;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		tmp->min = Lifespan;
		HX_STACK_LINE(397)
		Float tmp1 = Lifespan;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		Float tmp2 = LifespanRange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		::flixel::effects::particles::Bounds tmp5 = this->life;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		tmp5->max = tmp4;
		HX_STACK_LINE(398)
		this->frequency = Frequency;
		HX_STACK_LINE(399)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(401)
		this->_counter = (int)0;
		HX_STACK_LINE(402)
		this->_timer = (int)0;
		HX_STACK_LINE(404)
		this->_waitForKill = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,start,(void))

Void FlxTypedEmitter_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxTypedEmitter.hx",411,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		::hx::Class tmp = this->_particleClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(412)
		::hx::Class tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(412)
		Dynamic tmp2 = this->recycle(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(412)
		Dynamic particle = tmp2;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(413)
		Float tmp3 = this->bounce;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		particle->__FieldRef(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")) = tmp3;
		HX_STACK_LINE(415)
		Float tmp4 = this->get_x();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		Float tmp5 = particle->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(415)
		int tmp7 = (int(tmp6) >> int((int)1));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(415)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(415)
		int tmp9 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(415)
		int tmp10 = (tmp9 * (int)48271);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(415)
		int tmp11 = hx::Mod(tmp10,(int)2147483647);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(415)
		int tmp12 = (int(tmp11) & int((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(415)
		int tmp13 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(415)
		Float tmp14 = (Float(tmp13) / Float((int)2147483647));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		Float tmp17 = (tmp8 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(415)
		Float tmp18 = this->get_y();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(415)
		Float tmp19 = particle->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(415)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(415)
		int tmp21 = (int(tmp20) >> int((int)1));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(415)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(415)
		int tmp23 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(415)
		int tmp24 = (tmp23 * (int)48271);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(415)
		int tmp25 = hx::Mod(tmp24,(int)2147483647);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(415)
		int tmp26 = (int(tmp25) & int((int)2147483647));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(415)
		int tmp27 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(415)
		Float tmp28 = (Float(tmp27) / Float((int)2147483647));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(415)
		Float tmp29 = this->get_height();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(415)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(415)
		Float tmp31 = (tmp22 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(415)
		particle->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(tmp17,tmp31);
		HX_STACK_LINE(416)
		particle->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
		HX_STACK_LINE(418)
		::flixel::effects::particles::Bounds tmp32 = this->life;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(418)
		Float tmp33 = tmp32->min;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(418)
		::flixel::effects::particles::Bounds tmp34 = this->life;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(418)
		Float tmp35 = tmp34->max;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(418)
		bool tmp36 = (tmp33 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(418)
		if ((tmp36)){
			HX_STACK_LINE(420)
			::flixel::effects::particles::Bounds tmp37 = this->life;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(420)
			Float tmp38 = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(420)
			int tmp39 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(420)
			int tmp40 = (tmp39 * (int)48271);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(420)
			int tmp41 = hx::Mod(tmp40,(int)2147483647);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(420)
			int tmp42 = (int(tmp41) & int((int)2147483647));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(420)
			int tmp43 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(420)
			Float tmp44 = (Float(tmp43) / Float((int)2147483647));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(420)
			::flixel::effects::particles::Bounds tmp45 = this->life;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(420)
			Float tmp46 = tmp45->max;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(420)
			::flixel::effects::particles::Bounds tmp47 = this->life;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(420)
			Float tmp48 = tmp47->min;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(420)
			Float tmp49 = (tmp46 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(420)
			Float tmp50 = (tmp44 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(420)
			Float tmp51 = (tmp38 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(420)
			Float tmp52 = particle->__FieldRef(HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1")) = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(420)
			particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp52;
		}
		else{
			HX_STACK_LINE(424)
			::flixel::effects::particles::Bounds tmp37 = this->life;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(424)
			Float tmp38 = particle->__FieldRef(HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1")) = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(424)
			particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp38;
		}
		HX_STACK_LINE(427)
		::flixel::effects::particles::Bounds tmp37 = this->startAlpha;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(427)
		Float tmp38 = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(427)
		::flixel::effects::particles::Bounds tmp39 = this->startAlpha;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(427)
		Float tmp40 = tmp39->max;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(427)
		bool tmp41 = (tmp38 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(427)
		if ((tmp41)){
			HX_STACK_LINE(429)
			::flixel::effects::particles::Bounds tmp42 = this->startAlpha;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(429)
			Float tmp43 = tmp42->min;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(429)
			int tmp44 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(429)
			int tmp45 = (tmp44 * (int)48271);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(429)
			int tmp46 = hx::Mod(tmp45,(int)2147483647);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(429)
			int tmp47 = (int(tmp46) & int((int)2147483647));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(429)
			int tmp48 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(429)
			Float tmp49 = (Float(tmp48) / Float((int)2147483647));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(429)
			::flixel::effects::particles::Bounds tmp50 = this->startAlpha;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(429)
			Float tmp51 = tmp50->max;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(429)
			::flixel::effects::particles::Bounds tmp52 = this->startAlpha;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(429)
			Float tmp53 = tmp52->min;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(429)
			Float tmp54 = (tmp51 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(429)
			Float tmp55 = (tmp49 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(429)
			Float tmp56 = (tmp43 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(429)
			particle->__FieldRef(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")) = tmp56;
		}
		else{
			HX_STACK_LINE(433)
			::flixel::effects::particles::Bounds tmp42 = this->startAlpha;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(433)
			particle->__FieldRef(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")) = tmp42->min;
		}
		HX_STACK_LINE(435)
		Float tmp42 = particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(435)
		particle->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp42);
		HX_STACK_LINE(437)
		::flixel::effects::particles::Bounds tmp43 = this->endAlpha;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(437)
		Float particleEndAlpha = tmp43->min;		HX_STACK_VAR(particleEndAlpha,"particleEndAlpha");
		HX_STACK_LINE(438)
		::flixel::effects::particles::Bounds tmp44 = this->endAlpha;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(438)
		Float tmp45 = tmp44->min;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(438)
		::flixel::effects::particles::Bounds tmp46 = this->endAlpha;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(438)
		Float tmp47 = tmp46->max;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(438)
		bool tmp48 = (tmp45 != tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(438)
		if ((tmp48)){
			HX_STACK_LINE(440)
			::flixel::effects::particles::Bounds tmp49 = this->endAlpha;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(440)
			Float tmp50 = tmp49->min;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(440)
			int tmp51 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(440)
			int tmp52 = (tmp51 * (int)48271);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(440)
			int tmp53 = hx::Mod(tmp52,(int)2147483647);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(440)
			int tmp54 = (int(tmp53) & int((int)2147483647));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(440)
			int tmp55 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(440)
			Float tmp56 = (Float(tmp55) / Float((int)2147483647));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(440)
			::flixel::effects::particles::Bounds tmp57 = this->endAlpha;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(440)
			Float tmp58 = tmp57->max;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(440)
			::flixel::effects::particles::Bounds tmp59 = this->endAlpha;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(440)
			Float tmp60 = tmp59->min;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(440)
			Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(440)
			Float tmp62 = (tmp56 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(440)
			Float tmp63 = (tmp50 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(440)
			particleEndAlpha = tmp63;
		}
		HX_STACK_LINE(443)
		bool tmp49 = (particleEndAlpha != particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic ));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(443)
		if ((tmp49)){
			HX_STACK_LINE(445)
			particle->__FieldRef(HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b")) = true;
			HX_STACK_LINE(446)
			Float tmp50 = (particleEndAlpha - particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic ));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(446)
			particle->__FieldRef(HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4")) = tmp50;
		}
		else{
			HX_STACK_LINE(450)
			particle->__FieldRef(HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b")) = false;
			HX_STACK_LINE(451)
			particle->__FieldRef(HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4")) = (int)0;
		}
		HX_STACK_LINE(455)
		::flixel::effects::particles::Bounds tmp50 = this->startRed;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(455)
		Float tmp51 = particle->__FieldRef(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")) = tmp50->min;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(455)
		Float startRedComp = tmp51;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(456)
		::flixel::effects::particles::Bounds tmp52 = this->startGreen;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(456)
		Float tmp53 = particle->__FieldRef(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")) = tmp52->min;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(456)
		Float startGreenComp = tmp53;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(457)
		::flixel::effects::particles::Bounds tmp54 = this->startBlue;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(457)
		Float tmp55 = particle->__FieldRef(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")) = tmp54->min;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(457)
		Float startBlueComp = tmp55;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(459)
		::flixel::effects::particles::Bounds tmp56 = this->endRed;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(459)
		Float endRedComp = tmp56->min;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(460)
		::flixel::effects::particles::Bounds tmp57 = this->endGreen;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(460)
		Float endGreenComp = tmp57->min;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(461)
		::flixel::effects::particles::Bounds tmp58 = this->endBlue;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(461)
		Float endBlueComp = tmp58->min;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(463)
		::flixel::effects::particles::Bounds tmp59 = this->startRed;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(463)
		Float tmp60 = tmp59->min;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(463)
		::flixel::effects::particles::Bounds tmp61 = this->startRed;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(463)
		Float tmp62 = tmp61->max;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(463)
		bool tmp63 = (tmp60 != tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(463)
		if ((tmp63)){
			HX_STACK_LINE(465)
			::flixel::effects::particles::Bounds tmp64 = this->startRed;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(465)
			Float tmp65 = tmp64->min;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(465)
			int tmp66 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(465)
			int tmp67 = (tmp66 * (int)48271);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(465)
			int tmp68 = hx::Mod(tmp67,(int)2147483647);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(465)
			int tmp69 = (int(tmp68) & int((int)2147483647));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(465)
			int tmp70 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(465)
			Float tmp71 = (Float(tmp70) / Float((int)2147483647));		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(465)
			::flixel::effects::particles::Bounds tmp72 = this->startRed;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(465)
			Float tmp73 = tmp72->max;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(465)
			::flixel::effects::particles::Bounds tmp74 = this->startRed;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(465)
			Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(465)
			Float tmp76 = (tmp73 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(465)
			Float tmp77 = (tmp71 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(465)
			Float tmp78 = (tmp65 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(465)
			Float tmp79 = startRedComp = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(465)
			particle->__FieldRef(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")) = tmp79;
		}
		HX_STACK_LINE(467)
		::flixel::effects::particles::Bounds tmp64 = this->startGreen;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(467)
		Float tmp65 = tmp64->min;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(467)
		::flixel::effects::particles::Bounds tmp66 = this->startGreen;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(467)
		Float tmp67 = tmp66->max;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(467)
		bool tmp68 = (tmp65 != tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(467)
		if ((tmp68)){
			HX_STACK_LINE(469)
			::flixel::effects::particles::Bounds tmp69 = this->startGreen;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(469)
			Float tmp70 = tmp69->min;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(469)
			int tmp71 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(469)
			int tmp72 = (tmp71 * (int)48271);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(469)
			int tmp73 = hx::Mod(tmp72,(int)2147483647);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(469)
			int tmp74 = (int(tmp73) & int((int)2147483647));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(469)
			int tmp75 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(469)
			Float tmp76 = (Float(tmp75) / Float((int)2147483647));		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(469)
			::flixel::effects::particles::Bounds tmp77 = this->startGreen;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(469)
			Float tmp78 = tmp77->max;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(469)
			::flixel::effects::particles::Bounds tmp79 = this->startGreen;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(469)
			Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(469)
			Float tmp81 = (tmp78 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(469)
			Float tmp82 = (tmp76 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(469)
			Float tmp83 = (tmp70 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(469)
			Float tmp84 = startGreenComp = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(469)
			particle->__FieldRef(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")) = tmp84;
		}
		HX_STACK_LINE(471)
		::flixel::effects::particles::Bounds tmp69 = this->startBlue;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(471)
		Float tmp70 = tmp69->min;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(471)
		::flixel::effects::particles::Bounds tmp71 = this->startBlue;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(471)
		Float tmp72 = tmp71->max;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(471)
		bool tmp73 = (tmp70 != tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(471)
		if ((tmp73)){
			HX_STACK_LINE(473)
			::flixel::effects::particles::Bounds tmp74 = this->startBlue;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(473)
			Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(473)
			int tmp76 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(473)
			int tmp77 = (tmp76 * (int)48271);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(473)
			int tmp78 = hx::Mod(tmp77,(int)2147483647);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(473)
			int tmp79 = (int(tmp78) & int((int)2147483647));		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(473)
			int tmp80 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(473)
			Float tmp81 = (Float(tmp80) / Float((int)2147483647));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(473)
			::flixel::effects::particles::Bounds tmp82 = this->startBlue;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(473)
			Float tmp83 = tmp82->max;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(473)
			::flixel::effects::particles::Bounds tmp84 = this->startBlue;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(473)
			Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(473)
			Float tmp86 = (tmp83 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(473)
			Float tmp87 = (tmp81 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(473)
			Float tmp88 = (tmp75 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(473)
			Float tmp89 = startBlueComp = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(473)
			particle->__FieldRef(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")) = tmp89;
		}
		HX_STACK_LINE(476)
		::flixel::effects::particles::Bounds tmp74 = this->endRed;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(476)
		Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(476)
		::flixel::effects::particles::Bounds tmp76 = this->endRed;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(476)
		Float tmp77 = tmp76->max;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(476)
		bool tmp78 = (tmp75 != tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(476)
		if ((tmp78)){
			HX_STACK_LINE(478)
			::flixel::effects::particles::Bounds tmp79 = this->endRed;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(478)
			Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(478)
			int tmp81 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(478)
			int tmp82 = (tmp81 * (int)48271);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(478)
			int tmp83 = hx::Mod(tmp82,(int)2147483647);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(478)
			int tmp84 = (int(tmp83) & int((int)2147483647));		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(478)
			int tmp85 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(478)
			Float tmp86 = (Float(tmp85) / Float((int)2147483647));		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(478)
			::flixel::effects::particles::Bounds tmp87 = this->endRed;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(478)
			Float tmp88 = tmp87->max;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(478)
			::flixel::effects::particles::Bounds tmp89 = this->endRed;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(478)
			Float tmp90 = tmp89->min;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(478)
			Float tmp91 = (tmp88 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(478)
			Float tmp92 = (tmp86 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(478)
			Float tmp93 = (tmp80 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(478)
			endRedComp = tmp93;
		}
		HX_STACK_LINE(481)
		::flixel::effects::particles::Bounds tmp79 = this->endGreen;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(481)
		Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(481)
		::flixel::effects::particles::Bounds tmp81 = this->endGreen;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(481)
		Float tmp82 = tmp81->max;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(481)
		bool tmp83 = (tmp80 != tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(481)
		if ((tmp83)){
			HX_STACK_LINE(483)
			::flixel::effects::particles::Bounds tmp84 = this->endGreen;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(483)
			Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(483)
			int tmp86 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(483)
			int tmp87 = (tmp86 * (int)48271);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(483)
			int tmp88 = hx::Mod(tmp87,(int)2147483647);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(483)
			int tmp89 = (int(tmp88) & int((int)2147483647));		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(483)
			int tmp90 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(483)
			Float tmp91 = (Float(tmp90) / Float((int)2147483647));		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(483)
			::flixel::effects::particles::Bounds tmp92 = this->endGreen;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(483)
			Float tmp93 = tmp92->max;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(483)
			::flixel::effects::particles::Bounds tmp94 = this->endGreen;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(483)
			Float tmp95 = tmp94->min;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(483)
			Float tmp96 = (tmp93 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(483)
			Float tmp97 = (tmp91 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(483)
			Float tmp98 = (tmp85 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(483)
			endGreenComp = tmp98;
		}
		HX_STACK_LINE(486)
		::flixel::effects::particles::Bounds tmp84 = this->endBlue;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(486)
		Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(486)
		::flixel::effects::particles::Bounds tmp86 = this->endBlue;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(486)
		Float tmp87 = tmp86->max;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(486)
		bool tmp88 = (tmp85 != tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(486)
		if ((tmp88)){
			HX_STACK_LINE(488)
			::flixel::effects::particles::Bounds tmp89 = this->endBlue;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(488)
			Float tmp90 = tmp89->min;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(488)
			int tmp91 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(488)
			int tmp92 = (tmp91 * (int)48271);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(488)
			int tmp93 = hx::Mod(tmp92,(int)2147483647);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(488)
			int tmp94 = (int(tmp93) & int((int)2147483647));		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(488)
			int tmp95 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(488)
			Float tmp96 = (Float(tmp95) / Float((int)2147483647));		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(488)
			::flixel::effects::particles::Bounds tmp97 = this->endBlue;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(488)
			Float tmp98 = tmp97->max;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(488)
			::flixel::effects::particles::Bounds tmp99 = this->endBlue;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(488)
			Float tmp100 = tmp99->min;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(488)
			Float tmp101 = (tmp98 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(488)
			Float tmp102 = (tmp96 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(488)
			Float tmp103 = (tmp90 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(488)
			endBlueComp = tmp103;
		}
		HX_STACK_LINE(491)
		Float tmp89 = (endRedComp - startRedComp);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(491)
		particle->__FieldRef(HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6")) = tmp89;
		HX_STACK_LINE(492)
		Float tmp90 = (endGreenComp - startGreenComp);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(492)
		particle->__FieldRef(HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c")) = tmp90;
		HX_STACK_LINE(493)
		Float tmp91 = (endBlueComp - startBlueComp);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(493)
		particle->__FieldRef(HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc")) = tmp91;
		HX_STACK_LINE(495)
		particle->__FieldRef(HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4")) = false;
		HX_STACK_LINE(497)
		bool tmp92 = (particle->__Field(HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(497)
		bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(497)
		bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(497)
		bool tmp95;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(497)
		if ((tmp94)){
			HX_STACK_LINE(497)
			tmp95 = (particle->__Field(HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(497)
			tmp95 = true;
		}
		HX_STACK_LINE(497)
		bool tmp96 = !(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(497)
		bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(497)
		if ((tmp96)){
			HX_STACK_LINE(497)
			tmp97 = (particle->__Field(HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(497)
			tmp97 = true;
		}
		HX_STACK_LINE(497)
		if ((tmp97)){
			HX_STACK_LINE(499)
			particle->__FieldRef(HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4")) = true;
		}
		HX_STACK_LINE(502)
		::flixel::effects::particles::Bounds tmp98 = this->startScale;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(502)
		Float tmp99 = tmp98->min;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(502)
		::flixel::effects::particles::Bounds tmp100 = this->startScale;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(502)
		Float tmp101 = tmp100->max;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(502)
		bool tmp102 = (tmp99 != tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(502)
		if ((tmp102)){
			HX_STACK_LINE(504)
			::flixel::effects::particles::Bounds tmp103 = this->startScale;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(504)
			Float tmp104 = tmp103->min;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(504)
			int tmp105 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(504)
			int tmp106 = (tmp105 * (int)48271);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(504)
			int tmp107 = hx::Mod(tmp106,(int)2147483647);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(504)
			int tmp108 = (int(tmp107) & int((int)2147483647));		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(504)
			int tmp109 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp108;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(504)
			Float tmp110 = (Float(tmp109) / Float((int)2147483647));		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(504)
			::flixel::effects::particles::Bounds tmp111 = this->startScale;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(504)
			Float tmp112 = tmp111->max;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(504)
			::flixel::effects::particles::Bounds tmp113 = this->startScale;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(504)
			Float tmp114 = tmp113->min;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(504)
			Float tmp115 = (tmp112 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(504)
			Float tmp116 = (tmp110 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(504)
			Float tmp117 = (tmp104 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(504)
			particle->__FieldRef(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")) = tmp117;
		}
		else{
			HX_STACK_LINE(508)
			::flixel::effects::particles::Bounds tmp103 = this->startScale;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(508)
			particle->__FieldRef(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")) = tmp103->min;
		}
		HX_STACK_LINE(510)
		Float tmp103 = particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic );		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(510)
		Float tmp104 = particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(510)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp104);
		HX_STACK_LINE(512)
		::flixel::effects::particles::Bounds tmp105 = this->endScale;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(512)
		Float particleEndScale = tmp105->min;		HX_STACK_VAR(particleEndScale,"particleEndScale");
		HX_STACK_LINE(513)
		::flixel::effects::particles::Bounds tmp106 = this->endScale;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(513)
		Float tmp107 = tmp106->min;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(513)
		::flixel::effects::particles::Bounds tmp108 = this->endScale;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(513)
		Float tmp109 = tmp108->max;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(513)
		bool tmp110 = (tmp107 != tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(513)
		if ((tmp110)){
			HX_STACK_LINE(515)
			::flixel::effects::particles::Bounds tmp111 = this->endScale;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(515)
			Float tmp112 = tmp111->min;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(515)
			::flixel::effects::particles::Bounds tmp113 = this->endScale;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(515)
			Float tmp114 = tmp113->max;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(515)
			::flixel::effects::particles::Bounds tmp115 = this->endScale;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(515)
			Float tmp116 = tmp115->min;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(515)
			Float tmp117 = (tmp114 - tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(515)
			int tmp118 = ::Std_obj::_int(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(515)
			int tmp119 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp118,null());		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(515)
			Float tmp120 = (tmp112 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(515)
			particleEndScale = tmp120;
		}
		HX_STACK_LINE(518)
		bool tmp111 = (particleEndScale != particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic ));		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(518)
		if ((tmp111)){
			HX_STACK_LINE(520)
			particle->__FieldRef(HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67")) = true;
			HX_STACK_LINE(521)
			Float tmp112 = (particleEndScale - particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic ));		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(521)
			particle->__FieldRef(HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b")) = tmp112;
		}
		else{
			HX_STACK_LINE(525)
			particle->__FieldRef(HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67")) = false;
			HX_STACK_LINE(526)
			particle->__FieldRef(HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b")) = (int)0;
		}
		HX_STACK_LINE(529)
		::openfl::_legacy::display::BlendMode tmp112 = this->blend;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(529)
		particle->__Field(HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"), hx::paccDynamic )(tmp112);
		HX_STACK_LINE(531)
		::flixel::effects::particles::Bounds tmp113 = this->xVelocity;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(531)
		Float tmp114 = tmp113->min;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(531)
		::flixel::effects::particles::Bounds tmp115 = this->xVelocity;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(531)
		Float tmp116 = tmp115->max;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(531)
		bool tmp117 = (tmp114 != tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(531)
		if ((tmp117)){
			HX_STACK_LINE(533)
			::flixel::effects::particles::Bounds tmp118 = this->xVelocity;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(533)
			Float tmp119 = tmp118->min;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(533)
			int tmp120 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(533)
			int tmp121 = (tmp120 * (int)48271);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(533)
			int tmp122 = hx::Mod(tmp121,(int)2147483647);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(533)
			int tmp123 = (int(tmp122) & int((int)2147483647));		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(533)
			int tmp124 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp123;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(533)
			Float tmp125 = (Float(tmp124) / Float((int)2147483647));		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(533)
			::flixel::effects::particles::Bounds tmp126 = this->xVelocity;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(533)
			Float tmp127 = tmp126->max;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(533)
			::flixel::effects::particles::Bounds tmp128 = this->xVelocity;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(533)
			Float tmp129 = tmp128->min;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(533)
			Float tmp130 = (tmp127 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(533)
			Float tmp131 = (tmp125 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(533)
			Float tmp132 = (tmp119 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(533)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp132);
		}
		else{
			HX_STACK_LINE(537)
			::flixel::effects::particles::Bounds tmp118 = this->xVelocity;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(537)
			Float tmp119 = tmp118->min;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(537)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp119);
		}
		HX_STACK_LINE(539)
		::flixel::effects::particles::Bounds tmp118 = this->yVelocity;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(539)
		Float tmp119 = tmp118->min;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(539)
		::flixel::effects::particles::Bounds tmp120 = this->yVelocity;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(539)
		Float tmp121 = tmp120->max;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(539)
		bool tmp122 = (tmp119 != tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(539)
		if ((tmp122)){
			HX_STACK_LINE(541)
			::flixel::effects::particles::Bounds tmp123 = this->yVelocity;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(541)
			Float tmp124 = tmp123->min;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(541)
			int tmp125 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(541)
			int tmp126 = (tmp125 * (int)48271);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(541)
			int tmp127 = hx::Mod(tmp126,(int)2147483647);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(541)
			int tmp128 = (int(tmp127) & int((int)2147483647));		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(541)
			int tmp129 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(541)
			Float tmp130 = (Float(tmp129) / Float((int)2147483647));		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(541)
			::flixel::effects::particles::Bounds tmp131 = this->yVelocity;		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(541)
			Float tmp132 = tmp131->max;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(541)
			::flixel::effects::particles::Bounds tmp133 = this->yVelocity;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(541)
			Float tmp134 = tmp133->min;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(541)
			Float tmp135 = (tmp132 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(541)
			Float tmp136 = (tmp130 * tmp135);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(541)
			Float tmp137 = (tmp124 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(541)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp137);
		}
		else{
			HX_STACK_LINE(545)
			::flixel::effects::particles::Bounds tmp123 = this->yVelocity;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(545)
			Float tmp124 = tmp123->min;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(545)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp124);
		}
		HX_STACK_LINE(547)
		::flixel::util::FlxPoint tmp123 = this->acceleration;		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(547)
		Float tmp124 = tmp123->x;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(547)
		::flixel::util::FlxPoint tmp125 = this->acceleration;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(547)
		Float tmp126 = tmp125->y;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(547)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp124,tmp126);
		HX_STACK_LINE(549)
		::flixel::effects::particles::Bounds tmp127 = this->rotation;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(549)
		Float tmp128 = tmp127->min;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(549)
		::flixel::effects::particles::Bounds tmp129 = this->rotation;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(549)
		Float tmp130 = tmp129->max;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(549)
		bool tmp131 = (tmp128 != tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(549)
		if ((tmp131)){
			HX_STACK_LINE(551)
			::flixel::effects::particles::Bounds tmp132 = this->rotation;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(551)
			Float tmp133 = tmp132->min;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(551)
			int tmp134 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(551)
			int tmp135 = (tmp134 * (int)48271);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(551)
			int tmp136 = hx::Mod(tmp135,(int)2147483647);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(551)
			int tmp137 = (int(tmp136) & int((int)2147483647));		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(551)
			int tmp138 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(551)
			Float tmp139 = (Float(tmp138) / Float((int)2147483647));		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(551)
			::flixel::effects::particles::Bounds tmp140 = this->rotation;		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(551)
			Float tmp141 = tmp140->max;		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(551)
			::flixel::effects::particles::Bounds tmp142 = this->rotation;		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(551)
			Float tmp143 = tmp142->min;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(551)
			Float tmp144 = (tmp141 - tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(551)
			Float tmp145 = (tmp139 * tmp144);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(551)
			Float tmp146 = (tmp133 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(551)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp146;
		}
		else{
			HX_STACK_LINE(555)
			::flixel::effects::particles::Bounds tmp132 = this->rotation;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(555)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp132->min;
		}
		HX_STACK_LINE(557)
		bool tmp132 = (particle->__Field(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(557)
		if ((tmp132)){
			HX_STACK_LINE(559)
			int tmp133 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(559)
			int tmp134 = (tmp133 * (int)48271);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(559)
			int tmp135 = hx::Mod(tmp134,(int)2147483647);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(559)
			int tmp136 = (int(tmp135) & int((int)2147483647));		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(559)
			int tmp137 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(559)
			Float tmp138 = (Float(tmp137) / Float((int)2147483647));		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(559)
			Float tmp139 = (tmp138 * (int)360);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(559)
			Float tmp140 = (tmp139 - (int)180);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(559)
			particle->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp140);
		}
		HX_STACK_LINE(562)
		::flixel::util::FlxPoint tmp133 = this->particleDrag;		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(562)
		Float tmp134 = tmp133->x;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(562)
		::flixel::util::FlxPoint tmp135 = this->particleDrag;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(562)
		Float tmp136 = tmp135->y;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(562)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp134,tmp136);
		HX_STACK_LINE(563)
		particle->__Field(HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,(void))

Void FlxTypedEmitter_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxTypedEmitter.hx",573,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(574)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		this->set_width(tmp);
		HX_STACK_LINE(575)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

Void FlxTypedEmitter_obj::setXSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setXSpeed",0x03be0b5a,"flixel.effects.particles.FlxTypedEmitter.setXSpeed","flixel/effects/particles/FlxTypedEmitter.hx",585,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(586)
		bool tmp = (Max < Min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		if ((tmp)){
			HX_STACK_LINE(588)
			Max = Min;
		}
		HX_STACK_LINE(591)
		::flixel::effects::particles::Bounds tmp1 = this->xVelocity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		tmp1->min = Min;
		HX_STACK_LINE(592)
		::flixel::effects::particles::Bounds tmp2 = this->xVelocity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(592)
		tmp2->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setXSpeed,(void))

Void FlxTypedEmitter_obj::setYSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setYSpeed",0x6a1967b9,"flixel.effects.particles.FlxTypedEmitter.setYSpeed","flixel/effects/particles/FlxTypedEmitter.hx",602,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(603)
		bool tmp = (Max < Min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		if ((tmp)){
			HX_STACK_LINE(605)
			Max = Min;
		}
		HX_STACK_LINE(608)
		::flixel::effects::particles::Bounds tmp1 = this->yVelocity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		tmp1->min = Min;
		HX_STACK_LINE(609)
		::flixel::effects::particles::Bounds tmp2 = this->yVelocity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		tmp2->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setYSpeed,(void))

Void FlxTypedEmitter_obj::setRotation( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setRotation",0x82c6e569,"flixel.effects.particles.FlxTypedEmitter.setRotation","flixel/effects/particles/FlxTypedEmitter.hx",619,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(620)
		bool tmp = (Max < Min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		if ((tmp)){
			HX_STACK_LINE(622)
			Max = Min;
		}
		HX_STACK_LINE(625)
		::flixel::effects::particles::Bounds tmp1 = this->rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		tmp1->min = Min;
		HX_STACK_LINE(626)
		::flixel::effects::particles::Bounds tmp2 = this->rotation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		tmp2->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setRotation,(void))

Void FlxTypedEmitter_obj::setScale( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setScale",0xbfee2d7f,"flixel.effects.particles.FlxTypedEmitter.setScale","flixel/effects/particles/FlxTypedEmitter.hx",638,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartMin,"StartMin")
	HX_STACK_ARG(StartMax,"StartMax")
	HX_STACK_ARG(EndMin,"EndMin")
	HX_STACK_ARG(EndMax,"EndMax")
{
		HX_STACK_LINE(639)
		bool tmp = (StartMax < StartMin);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(639)
		if ((tmp)){
			HX_STACK_LINE(641)
			StartMax = StartMin;
		}
		HX_STACK_LINE(644)
		bool tmp1 = (EndMax < EndMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		if ((tmp1)){
			HX_STACK_LINE(646)
			EndMax = EndMin;
		}
		HX_STACK_LINE(649)
		::flixel::effects::particles::Bounds tmp2 = this->startScale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		tmp2->min = StartMin;
		HX_STACK_LINE(650)
		::flixel::effects::particles::Bounds tmp3 = this->startScale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(650)
		tmp3->max = StartMax;
		HX_STACK_LINE(651)
		::flixel::effects::particles::Bounds tmp4 = this->endScale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		tmp4->min = EndMin;
		HX_STACK_LINE(652)
		::flixel::effects::particles::Bounds tmp5 = this->endScale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(652)
		tmp5->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setScale,(void))

Void FlxTypedEmitter_obj::setAlpha( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setAlpha",0x68b60653,"flixel.effects.particles.FlxTypedEmitter.setAlpha","flixel/effects/particles/FlxTypedEmitter.hx",664,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartMin,"StartMin")
	HX_STACK_ARG(StartMax,"StartMax")
	HX_STACK_ARG(EndMin,"EndMin")
	HX_STACK_ARG(EndMax,"EndMax")
{
		HX_STACK_LINE(665)
		bool tmp = (StartMin < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(665)
		if ((tmp)){
			HX_STACK_LINE(667)
			StartMin = (int)0;
		}
		HX_STACK_LINE(670)
		bool tmp1 = (StartMax < StartMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(670)
		if ((tmp1)){
			HX_STACK_LINE(672)
			StartMax = StartMin;
		}
		HX_STACK_LINE(675)
		bool tmp2 = (EndMin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(675)
		if ((tmp2)){
			HX_STACK_LINE(677)
			EndMin = (int)0;
		}
		HX_STACK_LINE(680)
		bool tmp3 = (EndMax < EndMin);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		if ((tmp3)){
			HX_STACK_LINE(682)
			EndMax = EndMin;
		}
		HX_STACK_LINE(685)
		::flixel::effects::particles::Bounds tmp4 = this->startAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(685)
		tmp4->min = StartMin;
		HX_STACK_LINE(686)
		::flixel::effects::particles::Bounds tmp5 = this->startAlpha;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		tmp5->max = StartMax;
		HX_STACK_LINE(687)
		::flixel::effects::particles::Bounds tmp6 = this->endAlpha;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(687)
		tmp6->min = EndMin;
		HX_STACK_LINE(688)
		::flixel::effects::particles::Bounds tmp7 = this->endAlpha;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		tmp7->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setAlpha,(void))

Void FlxTypedEmitter_obj::setColor( hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(16777215);
int End = __o_End.Default(16777215);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setColor",0x917bd058,"flixel.effects.particles.FlxTypedEmitter.setColor","flixel/effects/particles/FlxTypedEmitter.hx",699,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(700)
		hx::AndEq(Start,(int)16777215);
		HX_STACK_LINE(701)
		hx::AndEq(End,(int)16777215);
		HX_STACK_LINE(703)
		int tmp = (int(Start) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(703)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(703)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		Float startRedComp = tmp2;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(704)
		int tmp3 = (int(Start) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		Float startGreenComp = tmp5;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(705)
		int tmp6 = (int(Start) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(705)
		Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		Float startBlueComp = tmp7;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(707)
		int tmp8 = (int(End) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(707)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(707)
		Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(707)
		Float endRedComp = tmp10;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(708)
		int tmp11 = (int(End) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(708)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(708)
		Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(708)
		Float endGreenComp = tmp13;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(709)
		int tmp14 = (int(End) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(709)
		Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(709)
		Float endBlueComp = tmp15;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(711)
		::flixel::effects::particles::Bounds tmp16 = this->startRed;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(711)
		Float tmp17 = tmp16->max = startRedComp;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(711)
		::flixel::effects::particles::Bounds tmp18 = this->startRed;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(711)
		tmp18->min = tmp17;
		HX_STACK_LINE(712)
		::flixel::effects::particles::Bounds tmp19 = this->startGreen;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(712)
		Float tmp20 = tmp19->max = startGreenComp;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(712)
		::flixel::effects::particles::Bounds tmp21 = this->startGreen;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(712)
		tmp21->min = tmp20;
		HX_STACK_LINE(713)
		::flixel::effects::particles::Bounds tmp22 = this->startBlue;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(713)
		Float tmp23 = tmp22->max = startBlueComp;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(713)
		::flixel::effects::particles::Bounds tmp24 = this->startBlue;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(713)
		tmp24->min = tmp23;
		HX_STACK_LINE(715)
		::flixel::effects::particles::Bounds tmp25 = this->endRed;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(715)
		Float tmp26 = tmp25->max = endRedComp;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(715)
		::flixel::effects::particles::Bounds tmp27 = this->endRed;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(715)
		tmp27->min = tmp26;
		HX_STACK_LINE(716)
		::flixel::effects::particles::Bounds tmp28 = this->endGreen;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(716)
		Float tmp29 = tmp28->max = endGreenComp;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(716)
		::flixel::effects::particles::Bounds tmp30 = this->endGreen;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(716)
		tmp30->min = tmp29;
		HX_STACK_LINE(717)
		::flixel::effects::particles::Bounds tmp31 = this->endBlue;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(717)
		Float tmp32 = tmp31->max = endBlueComp;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(717)
		::flixel::effects::particles::Bounds tmp33 = this->endBlue;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(717)
		tmp33->min = tmp32;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setColor,(void))

Void FlxTypedEmitter_obj::at( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","at",0x4899e7aa,"flixel.effects.particles.FlxTypedEmitter.at","flixel/effects/particles/FlxTypedEmitter.hx",726,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(727)
		::flixel::util::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(727)
		Object->getMidpoint(tmp);
		HX_STACK_LINE(729)
		::flixel::util::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(729)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(729)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(729)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(729)
		int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(729)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		this->set_x(tmp6);
		HX_STACK_LINE(730)
		::flixel::util::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(730)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(730)
		Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(730)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(730)
		int tmp11 = (int(tmp10) >> int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(730)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(730)
		this->set_y(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,at,(void))

::hx::Class FlxTypedEmitter_obj::get_particleClass( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_particleClass",0x8b874a92,"flixel.effects.particles.FlxTypedEmitter.get_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",740,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(741)
	::hx::Class tmp = this->_particleClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_particleClass,return )

::hx::Class FlxTypedEmitter_obj::set_particleClass( ::hx::Class Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_particleClass",0xaef5229e,"flixel.effects.particles.FlxTypedEmitter.set_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",745,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(746)
	::hx::Class tmp = this->_particleClass = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(746)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_particleClass,return )

Float FlxTypedEmitter_obj::get_width( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_width",0xa2b85486,"flixel.effects.particles.FlxTypedEmitter.get_width","flixel/effects/particles/FlxTypedEmitter.hx",755,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(756)
	::flixel::effects::particles::Bounds tmp = this->xPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(756)
	Float tmp1 = tmp->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(756)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_width,return )

Float FlxTypedEmitter_obj::set_width( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_width",0x86094092,"flixel.effects.particles.FlxTypedEmitter.set_width","flixel/effects/particles/FlxTypedEmitter.hx",760,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(761)
	::flixel::effects::particles::Bounds tmp = this->xPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(761)
	Float tmp1 = tmp->max = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(761)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_width,return )

Float FlxTypedEmitter_obj::get_height( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_height",0x74e11967,"flixel.effects.particles.FlxTypedEmitter.get_height","flixel/effects/particles/FlxTypedEmitter.hx",770,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(771)
	::flixel::effects::particles::Bounds tmp = this->yPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	Float tmp1 = tmp->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(771)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_height,return )

Float FlxTypedEmitter_obj::set_height( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_height",0x785eb7db,"flixel.effects.particles.FlxTypedEmitter.set_height","flixel/effects/particles/FlxTypedEmitter.hx",775,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(776)
	::flixel::effects::particles::Bounds tmp = this->yPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(776)
	Float tmp1 = tmp->max = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(776)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_height,return )

Float FlxTypedEmitter_obj::get_x( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_x",0xe8845ef8,"flixel.effects.particles.FlxTypedEmitter.get_x","flixel/effects/particles/FlxTypedEmitter.hx",785,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(786)
	::flixel::effects::particles::Bounds tmp = this->xPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	Float tmp1 = tmp->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_x,return )

Float FlxTypedEmitter_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_x",0xd1535504,"flixel.effects.particles.FlxTypedEmitter.set_x","flixel/effects/particles/FlxTypedEmitter.hx",790,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(791)
	::flixel::effects::particles::Bounds tmp = this->xPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	Float tmp1 = tmp->min = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_x,return )

Float FlxTypedEmitter_obj::get_y( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_y",0xe8845ef9,"flixel.effects.particles.FlxTypedEmitter.get_y","flixel/effects/particles/FlxTypedEmitter.hx",800,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(801)
	::flixel::effects::particles::Bounds tmp = this->yPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(801)
	Float tmp1 = tmp->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(801)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_y,return )

Float FlxTypedEmitter_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_y",0xd1535505,"flixel.effects.particles.FlxTypedEmitter.set_y","flixel/effects/particles/FlxTypedEmitter.hx",805,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(806)
	::flixel::effects::particles::Bounds tmp = this->yPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	Float tmp1 = tmp->min = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_y,return )

Void FlxTypedEmitter_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxTypedEmitter.hx",817,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(818)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(818)
		this->set_x(tmp);
		HX_STACK_LINE(819)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(819)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

Float FlxTypedEmitter_obj::get_gravity( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_gravity",0x47d9acce,"flixel.effects.particles.FlxTypedEmitter.get_gravity","flixel/effects/particles/FlxTypedEmitter.hx",828,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(829)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_gravity,return )

Float FlxTypedEmitter_obj::set_gravity( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_gravity",0x5246b3da,"flixel.effects.particles.FlxTypedEmitter.set_gravity","flixel/effects/particles/FlxTypedEmitter.hx",833,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(834)
	::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(834)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(834)
	Float tmp2 = tmp->set_y(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(834)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_gravity,return )

Float FlxTypedEmitter_obj::get_minRotation( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_minRotation",0x934d6b70,"flixel.effects.particles.FlxTypedEmitter.get_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",844,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(845)
	::flixel::effects::particles::Bounds tmp = this->rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(845)
	Float tmp1 = tmp->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_minRotation,return )

Float FlxTypedEmitter_obj::set_minRotation( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_minRotation",0x8f18e87c,"flixel.effects.particles.FlxTypedEmitter.set_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",849,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(850)
	::flixel::effects::particles::Bounds tmp = this->rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	Float tmp1 = tmp->min = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(850)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_minRotation,return )

Float FlxTypedEmitter_obj::get_maxRotation( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_maxRotation",0xce67c682,"flixel.effects.particles.FlxTypedEmitter.get_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",860,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(861)
	::flixel::effects::particles::Bounds tmp = this->rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	Float tmp1 = tmp->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(861)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_maxRotation,return )

Float FlxTypedEmitter_obj::set_maxRotation( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_maxRotation",0xca33438e,"flixel.effects.particles.FlxTypedEmitter.set_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",865,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(866)
	::flixel::effects::particles::Bounds tmp = this->rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	Float tmp1 = tmp->max = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(866)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_maxRotation,return )

Float FlxTypedEmitter_obj::get_lifespan( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_lifespan",0x7aea8b46,"flixel.effects.particles.FlxTypedEmitter.get_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",876,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(877)
	::flixel::effects::particles::Bounds tmp = this->life;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(877)
	Float tmp1 = tmp->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(877)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_lifespan,return )

Float FlxTypedEmitter_obj::set_lifespan( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_lifespan",0x8fe3aeba,"flixel.effects.particles.FlxTypedEmitter.set_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",881,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(882)
	::flixel::effects::particles::Bounds tmp = this->life;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	Float tmp1 = tmp->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(882)
	::flixel::effects::particles::Bounds tmp2 = this->life;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(882)
	Float tmp3 = tmp2->min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(882)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(882)
	Float dl = tmp4;		HX_STACK_VAR(dl,"dl");
	HX_STACK_LINE(883)
	::flixel::effects::particles::Bounds tmp5 = this->life;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(883)
	tmp5->min = Value;
	HX_STACK_LINE(884)
	Float tmp6 = (Value + dl);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(884)
	::flixel::effects::particles::Bounds tmp7 = this->life;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(884)
	tmp7->max = tmp6;
	HX_STACK_LINE(886)
	Float tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(886)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_lifespan,return )


FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(xPosition,"xPosition");
	HX_MARK_MEMBER_NAME(yPosition,"yPosition");
	HX_MARK_MEMBER_NAME(xVelocity,"xVelocity");
	HX_MARK_MEMBER_NAME(yVelocity,"yVelocity");
	HX_MARK_MEMBER_NAME(particleDrag,"particleDrag");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(on,"on");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(life,"life");
	HX_MARK_MEMBER_NAME(startScale,"startScale");
	HX_MARK_MEMBER_NAME(endScale,"endScale");
	HX_MARK_MEMBER_NAME(startAlpha,"startAlpha");
	HX_MARK_MEMBER_NAME(endAlpha,"endAlpha");
	HX_MARK_MEMBER_NAME(startRed,"startRed");
	HX_MARK_MEMBER_NAME(startGreen,"startGreen");
	HX_MARK_MEMBER_NAME(startBlue,"startBlue");
	HX_MARK_MEMBER_NAME(endRed,"endRed");
	HX_MARK_MEMBER_NAME(endGreen,"endGreen");
	HX_MARK_MEMBER_NAME(endBlue,"endBlue");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(_particleClass,"_particleClass");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xPosition,"xPosition");
	HX_VISIT_MEMBER_NAME(yPosition,"yPosition");
	HX_VISIT_MEMBER_NAME(xVelocity,"xVelocity");
	HX_VISIT_MEMBER_NAME(yVelocity,"yVelocity");
	HX_VISIT_MEMBER_NAME(particleDrag,"particleDrag");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(on,"on");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(life,"life");
	HX_VISIT_MEMBER_NAME(startScale,"startScale");
	HX_VISIT_MEMBER_NAME(endScale,"endScale");
	HX_VISIT_MEMBER_NAME(startAlpha,"startAlpha");
	HX_VISIT_MEMBER_NAME(endAlpha,"endAlpha");
	HX_VISIT_MEMBER_NAME(startRed,"startRed");
	HX_VISIT_MEMBER_NAME(startGreen,"startGreen");
	HX_VISIT_MEMBER_NAME(startBlue,"startBlue");
	HX_VISIT_MEMBER_NAME(endRed,"endRed");
	HX_VISIT_MEMBER_NAME(endGreen,"endGreen");
	HX_VISIT_MEMBER_NAME(endBlue,"endBlue");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(_particleClass,"_particleClass");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { return life; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endRed") ) { return endRed; }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBlue") ) { return endBlue; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return get_gravity(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"endScale") ) { return endScale; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { return endAlpha; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { return endGreen; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"lifespan") ) { if (inCallProp == hx::paccAlways) return get_lifespan(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xPosition") ) { return xPosition; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { return yPosition; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { return xVelocity; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { return yVelocity; }
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"setXSpeed") ) { return setXSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setYSpeed") ) { return setYSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"minRotation") ) { if (inCallProp == hx::paccAlways) return get_minRotation(); }
		if (HX_FIELD_EQ(inName,"maxRotation") ) { if (inCallProp == hx::paccAlways) return get_maxRotation(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"particleDrag") ) { return particleDrag; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lifespan") ) { return get_lifespan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lifespan") ) { return set_lifespan_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"particleClass") ) { if (inCallProp == hx::paccAlways) return get_particleClass(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { return _particleClass; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_minRotation") ) { return get_minRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minRotation") ) { return set_minRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxRotation") ) { return get_maxRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxRotation") ) { return set_maxRotation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_particleClass") ) { return get_particleClass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_particleClass") ) { return set_particleClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { life=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endRed") ) { endRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBlue") ) { endBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { if (inCallProp == hx::paccAlways) return set_gravity(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endScale") ) { endScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { endAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { endGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { if (inCallProp == hx::paccAlways) return set_lifespan(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xPosition") ) { xPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { yPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { xVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { yVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minRotation") ) { if (inCallProp == hx::paccAlways) return set_minRotation(inValue); }
		if (HX_FIELD_EQ(inName,"maxRotation") ) { if (inCallProp == hx::paccAlways) return set_maxRotation(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"particleDrag") ) { particleDrag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { if (inCallProp == hx::paccAlways) return set_particleClass(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { _particleClass=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTypedEmitter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xPosition","\x41","\x95","\xd5","\x85"));
	outFields->push(HX_HCSTRING("yPosition","\x42","\xfe","\xc6","\x58"));
	outFields->push(HX_HCSTRING("xVelocity","\xb5","\xf6","\xd8","\xd9"));
	outFields->push(HX_HCSTRING("yVelocity","\xb6","\x5f","\xca","\xac"));
	outFields->push(HX_HCSTRING("particleDrag","\x5a","\x31","\x5e","\xdc"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("on","\x1f","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("life","\xfc","\x10","\xb3","\x47"));
	outFields->push(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"));
	outFields->push(HX_HCSTRING("endScale","\xaf","\x60","\xcc","\x76"));
	outFields->push(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"));
	outFields->push(HX_HCSTRING("endAlpha","\x83","\x39","\x94","\x1f"));
	outFields->push(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42"));
	outFields->push(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6"));
	outFields->push(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa"));
	outFields->push(HX_HCSTRING("endRed","\x36","\x28","\x77","\xfa"));
	outFields->push(HX_HCSTRING("endGreen","\xe8","\xa0","\xea","\x97"));
	outFields->push(HX_HCSTRING("endBlue","\x15","\xfc","\x3d","\x23"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"));
	outFields->push(HX_HCSTRING("_particleClass","\x53","\x1c","\x01","\x9d"));
	outFields->push(HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"));
	outFields->push(HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"));
	outFields->push(HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("gravity","\x4e","\x6e","\xff","\x77"));
	outFields->push(HX_HCSTRING("minRotation","\xf0","\xec","\x31","\x43"));
	outFields->push(HX_HCSTRING("maxRotation","\x02","\x48","\x4c","\x7e"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,xPosition),HX_HCSTRING("xPosition","\x41","\x95","\xd5","\x85")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,yPosition),HX_HCSTRING("yPosition","\x42","\xfe","\xc6","\x58")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,xVelocity),HX_HCSTRING("xVelocity","\xb5","\xf6","\xd8","\xd9")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,yVelocity),HX_HCSTRING("yVelocity","\xb6","\x5f","\xca","\xac")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,particleDrag),HX_HCSTRING("particleDrag","\x5a","\x31","\x5e","\xdc")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,on),HX_HCSTRING("on","\x1f","\x61","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,life),HX_HCSTRING("life","\xfc","\x10","\xb3","\x47")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startScale),HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endScale),HX_HCSTRING("endScale","\xaf","\x60","\xcc","\x76")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startAlpha),HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endAlpha),HX_HCSTRING("endAlpha","\x83","\x39","\x94","\x1f")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startRed),HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startGreen),HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startBlue),HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endRed),HX_HCSTRING("endRed","\x36","\x28","\x77","\xfa")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endGreen),HX_HCSTRING("endGreen","\xe8","\xa0","\xea","\x97")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endBlue),HX_HCSTRING("endBlue","\x15","\xfc","\x3d","\x23")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,bounce),HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxTypedEmitter_obj,_particleClass),HX_HCSTRING("_particleClass","\x53","\x1c","\x01","\x9d")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xPosition","\x41","\x95","\xd5","\x85"),
	HX_HCSTRING("yPosition","\x42","\xfe","\xc6","\x58"),
	HX_HCSTRING("xVelocity","\xb5","\xf6","\xd8","\xd9"),
	HX_HCSTRING("yVelocity","\xb6","\x5f","\xca","\xac"),
	HX_HCSTRING("particleDrag","\x5a","\x31","\x5e","\xdc"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"),
	HX_HCSTRING("life","\xfc","\x10","\xb3","\x47"),
	HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"),
	HX_HCSTRING("endScale","\xaf","\x60","\xcc","\x76"),
	HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"),
	HX_HCSTRING("endAlpha","\x83","\x39","\x94","\x1f"),
	HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42"),
	HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6"),
	HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa"),
	HX_HCSTRING("endRed","\x36","\x28","\x77","\xfa"),
	HX_HCSTRING("endGreen","\xe8","\xa0","\xea","\x97"),
	HX_HCSTRING("endBlue","\x15","\xfc","\x3d","\x23"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"),
	HX_HCSTRING("_particleClass","\x53","\x1c","\x01","\x9d"),
	HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"),
	HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("makeParticles","\x9f","\x37","\x2e","\x8b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("emitParticle","\xb9","\xa3","\x6b","\x89"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setXSpeed","\x31","\xc9","\x11","\x6f"),
	HX_HCSTRING("setYSpeed","\x90","\x25","\x6d","\xd5"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setScale","\x88","\x37","\x03","\x87"),
	HX_HCSTRING("setAlpha","\x5c","\x10","\xcb","\x2f"),
	HX_HCSTRING("setColor","\x61","\xda","\x90","\x58"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("get_particleClass","\x69","\x37","\x1f","\x65"),
	HX_HCSTRING("set_particleClass","\x75","\x0f","\x8d","\x88"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("get_gravity","\x65","\xce","\xf9","\xfd"),
	HX_HCSTRING("set_gravity","\x71","\xd5","\x66","\x08"),
	HX_HCSTRING("get_minRotation","\x87","\xa4","\x13","\x04"),
	HX_HCSTRING("set_minRotation","\x93","\x21","\xdf","\xff"),
	HX_HCSTRING("get_maxRotation","\x99","\xff","\x2d","\x3f"),
	HX_HCSTRING("set_maxRotation","\xa5","\x7c","\xf9","\x3a"),
	HX_HCSTRING("get_lifespan","\xcf","\xcd","\xe7","\x20"),
	HX_HCSTRING("set_lifespan","\x43","\xf1","\xe0","\x35"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxTypedEmitter","\x57","\x05","\x9c","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTypedEmitter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedEmitter_obj >;
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
} // end namespace effects
} // end namespace particles
