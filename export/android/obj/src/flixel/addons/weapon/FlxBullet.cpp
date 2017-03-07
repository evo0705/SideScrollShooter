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
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

Void FlxBullet_obj::__construct(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID)
{
HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","new",0xec1cce5d,"flixel.addons.weapon.FlxBullet.new","flixel/addons/weapon/FlxBullet.hx",18,0xb8c7cb14)
HX_STACK_THIS(this)
HX_STACK_ARG(Weapon,"Weapon")
HX_STACK_ARG(WeaponID,"WeaponID")
{
	HX_STACK_LINE(32)
	this->_bulletSpeed = (int)0;
	HX_STACK_LINE(31)
	this->_animated = false;
	HX_STACK_LINE(21)
	this->accelerates = false;
	HX_STACK_LINE(36)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(38)
	this->_weapon = Weapon;
	HX_STACK_LINE(39)
	this->ID = WeaponID;
	HX_STACK_LINE(41)
	this->set_exists(false);
}
;
	return null();
}

//FlxBullet_obj::~FlxBullet_obj() { }

Dynamic FlxBullet_obj::__CreateEmpty() { return  new FlxBullet_obj; }
hx::ObjectPtr< FlxBullet_obj > FlxBullet_obj::__new(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID)
{  hx::ObjectPtr< FlxBullet_obj > _result_ = new FlxBullet_obj();
	_result_->__construct(Weapon,WeaponID);
	return _result_;}

Dynamic FlxBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBullet_obj > _result_ = new FlxBullet_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxBullet_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","addAnimation",0x47d0eb06,"flixel.addons.weapon.FlxBullet.addAnimation","flixel/addons/weapon/FlxBullet.hx",53,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(54)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		int tmp2 = FrameRate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = Looped;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		tmp->add(tmp1,Frames,tmp2,tmp3);
		HX_STACK_LINE(56)
		this->_animated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,addAnimation,(void))

Void FlxBullet_obj::fire( Float FromX,Float FromY,Float VelX,Float VelY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fire",0xa7d11319,"flixel.addons.weapon.FlxBullet.fire","flixel/addons/weapon/FlxBullet.hx",60,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(VelX,"VelX")
		HX_STACK_ARG(VelY,"VelY")
		HX_STACK_LINE(61)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		this->set_x(tmp7);
		HX_STACK_LINE(62)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(62)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		this->set_y(tmp15);
		HX_STACK_LINE(64)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		if ((tmp16)){
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint tmp17 = this->acceleration;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(66)
			int tmp18 = this->xAcceleration;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(66)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(66)
			tmp17->set_x(tmp25);
			HX_STACK_LINE(67)
			::flixel::util::FlxPoint tmp26 = this->acceleration;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(67)
			int tmp27 = this->yAcceleration;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(67)
			::flixel::addons::weapon::FlxWeapon tmp28 = this->_weapon;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(67)
			int tmp29 = tmp28->rndFactorSpeed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(67)
			int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(67)
			::flixel::addons::weapon::FlxWeapon tmp31 = this->_weapon;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(67)
			int tmp32 = tmp31->rndFactorSpeed;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(67)
			int tmp33 = ::flixel::util::FlxRandom_obj::intRanged(tmp30,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(67)
			int tmp34 = (tmp27 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(67)
			tmp26->set_y(tmp34);
		}
		else{
			HX_STACK_LINE(71)
			::flixel::util::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			Float tmp18 = VelX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(71)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(71)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(71)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(71)
			Float tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(71)
			tmp17->set_x(tmp25);
			HX_STACK_LINE(72)
			::flixel::util::FlxPoint tmp26 = this->velocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(72)
			Float tmp27 = VelY;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(72)
			::flixel::addons::weapon::FlxWeapon tmp28 = this->_weapon;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(72)
			int tmp29 = tmp28->rndFactorSpeed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(72)
			int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(72)
			::flixel::addons::weapon::FlxWeapon tmp31 = this->_weapon;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(72)
			int tmp32 = tmp31->rndFactorSpeed;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(72)
			int tmp33 = ::flixel::util::FlxRandom_obj::intRanged(tmp30,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(72)
			Float tmp34 = (tmp27 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(72)
			tmp26->set_y(tmp34);
		}
		HX_STACK_LINE(75)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fire,(void))

Void FlxBullet_obj::fireAtMouse( Float FromX,Float FromY,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtMouse",0x489ffa19,"flixel.addons.weapon.FlxBullet.fireAtMouse","flixel/addons/weapon/FlxBullet.hx",80,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(81)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		this->set_x(tmp7);
		HX_STACK_LINE(82)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(82)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		this->set_y(tmp15);
		HX_STACK_LINE(84)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(84)
		if ((tmp16)){
			HX_STACK_LINE(86)
			int tmp17 = Speed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			::flixel::addons::weapon::FlxWeapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(86)
			int tmp19 = tmp18->rndFactorSpeed;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(86)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(86)
			::flixel::addons::weapon::FlxWeapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(86)
			int tmp22 = tmp21->rndFactorSpeed;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(86)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(86)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(86)
			::flixel::util::FlxPoint tmp25 = this->maxVelocity;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(86)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(86)
			int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(86)
			::flixel::util::FlxPoint tmp28 = this->maxVelocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(86)
			Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(86)
			int tmp30 = ::Math_obj::floor(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(86)
			::flixel::util::FlxVelocity_obj::accelerateTowardsMouse(hx::ObjectPtr<OBJ_>(this),tmp24,tmp27,tmp30);
		}
		else{
			HX_STACK_LINE(90)
			int tmp17 = Speed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(90)
			::flixel::addons::weapon::FlxWeapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(90)
			int tmp19 = tmp18->rndFactorSpeed;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(90)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(90)
			::flixel::addons::weapon::FlxWeapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(90)
			int tmp22 = tmp21->rndFactorSpeed;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(90)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(90)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(90)
			::flixel::util::FlxVelocity_obj::moveTowardsMouse(hx::ObjectPtr<OBJ_>(this),tmp24,null());
		}
		HX_STACK_LINE(93)
		bool tmp17 = RotateBulletTowards;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(93)
		if ((tmp17)){
			HX_STACK_LINE(95)
			::flixel::addons::weapon::FlxWeapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			::flixel::FlxSprite tmp19 = tmp18->parent;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			Float tmp20 = ::flixel::util::FlxAngle_obj::angleBetweenMouse(tmp19,true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(95)
			this->set_angle(tmp20);
		}
		HX_STACK_LINE(98)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireAtMouse,(void))

Void FlxBullet_obj::fireAtTouch( Float FromX,Float FromY,::flixel::input::touch::FlxTouch Touch,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtTouch",0x506dfbb3,"flixel.addons.weapon.FlxBullet.fireAtTouch","flixel/addons/weapon/FlxBullet.hx",104,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(105)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		this->set_x(tmp7);
		HX_STACK_LINE(106)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		this->set_y(tmp15);
		HX_STACK_LINE(108)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		if ((tmp16)){
			HX_STACK_LINE(110)
			::flixel::input::touch::FlxTouch tmp17 = Touch;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(110)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(110)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(110)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(110)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(110)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(110)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(110)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(110)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(110)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(110)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(110)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(110)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(110)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(110)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(110)
			::flixel::util::FlxVelocity_obj::accelerateTowardsTouch(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(114)
			::flixel::input::touch::FlxTouch tmp17 = Touch;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(114)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(114)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(114)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(114)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(114)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(114)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(114)
			::flixel::util::FlxVelocity_obj::moveTowardsTouch(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(117)
		bool tmp17 = RotateBulletTowards;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(117)
		if ((tmp17)){
			HX_STACK_LINE(119)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(119)
				::flixel::util::FlxPoint tmp20 = tmp19->parent->getScreenXY(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				::flixel::util::FlxPoint p = tmp20;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(119)
				Float tmp21 = (Touch->screenX - p->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				Float dx = tmp21;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(119)
				Float tmp22 = (Touch->screenY - p->y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(119)
				Float dy = tmp22;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					Float tmp23 = dy;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(119)
					Float tmp24 = dx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(119)
					Float tmp25 = ::Math_obj::atan2(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(119)
					Float radians = tmp25;		HX_STACK_VAR(radians,"radians");
					HX_STACK_LINE(119)
					Float tmp26 = radians;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(119)
					Float tmp27 = ::Math_obj::PI;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(119)
					Float tmp28 = (Float((int)180) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(119)
					tmp18 = (tmp26 * tmp28);
				}
			}
			HX_STACK_LINE(119)
			this->set_angle(tmp18);
		}
		HX_STACK_LINE(122)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBullet_obj,fireAtTouch,(void))

Void FlxBullet_obj::fireAtPosition( Float FromX,Float FromY,Float ToX,Float ToY,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtPosition",0x1bb7ad35,"flixel.addons.weapon.FlxBullet.fireAtPosition","flixel/addons/weapon/FlxBullet.hx",127,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(ToX,"ToX")
		HX_STACK_ARG(ToY,"ToY")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(128)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		this->set_x(tmp7);
		HX_STACK_LINE(129)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(129)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(129)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(129)
		this->set_y(tmp15);
		HX_STACK_LINE(131)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		if ((tmp16)){
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::flixel::util::FlxPool tmp18 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				::flixel::util::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				Float tmp20 = ToX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(133)
				Float tmp21 = ToY;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(133)
				::flixel::util::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(133)
				::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(133)
				point->_inPool = false;
				HX_STACK_LINE(133)
				tmp17 = point;
			}
			HX_STACK_LINE(133)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(133)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(133)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(133)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(133)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(133)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(133)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(133)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(133)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(133)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(133)
			::flixel::util::FlxVelocity_obj::accelerateTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(137)
			::flixel::util::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::flixel::util::FlxPool tmp18 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(137)
				Float tmp20 = ToX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(137)
				Float tmp21 = ToY;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(137)
				point->_inPool = false;
				HX_STACK_LINE(137)
				tmp17 = point;
			}
			HX_STACK_LINE(137)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(137)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(137)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(137)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(137)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(137)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(137)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(137)
			::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(140)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBullet_obj,fireAtPosition,(void))

Void FlxBullet_obj::fireAtTarget( Float FromX,Float FromY,::flixel::FlxSprite Target,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtTarget",0xfe3984dd,"flixel.addons.weapon.FlxBullet.fireAtTarget","flixel/addons/weapon/FlxBullet.hx",144,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(145)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		this->set_x(tmp7);
		HX_STACK_LINE(146)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(146)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(146)
		this->set_y(tmp15);
		HX_STACK_LINE(148)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(148)
		if ((tmp16)){
			HX_STACK_LINE(150)
			::flixel::FlxSprite tmp17 = Target;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(150)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(150)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(150)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(150)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(150)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(150)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(150)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(150)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(150)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(150)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(150)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(150)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(150)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(150)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(150)
			::flixel::util::FlxVelocity_obj::accelerateTowardsObject(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(154)
			::flixel::FlxSprite tmp17 = Target;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			::flixel::addons::weapon::FlxWeapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(154)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(154)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(154)
			::flixel::addons::weapon::FlxWeapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(154)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(154)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(154)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(154)
			::flixel::util::FlxVelocity_obj::moveTowardsObject(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(157)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireAtTarget,(void))

Void FlxBullet_obj::fireFromAngle( Float FromX,Float FromY,int FireAngle,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireFromAngle",0x1d784fb0,"flixel.addons.weapon.FlxBullet.fireFromAngle","flixel/addons/weapon/FlxBullet.hx",161,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(FireAngle,"FireAngle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(162)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		this->set_x(tmp7);
		HX_STACK_LINE(163)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		::flixel::addons::weapon::FlxWeapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(163)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		::flixel::addons::weapon::FlxWeapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(163)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		this->set_y(tmp15);
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int tmp17 = FireAngle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(165)
			::flixel::addons::weapon::FlxWeapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(165)
			int tmp19 = tmp18->rndFactorAngle;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(165)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			::flixel::addons::weapon::FlxWeapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(165)
			int tmp22 = tmp21->rndFactorAngle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(165)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(165)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(165)
			Float Angle = tmp24;		HX_STACK_VAR(Angle,"Angle");
			HX_STACK_LINE(165)
			int tmp25 = Speed;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(165)
			::flixel::addons::weapon::FlxWeapon tmp26 = this->_weapon;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(165)
			int tmp27 = tmp26->rndFactorSpeed;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(165)
			int tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(165)
			::flixel::addons::weapon::FlxWeapon tmp29 = this->_weapon;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(165)
			int tmp30 = tmp29->rndFactorSpeed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(165)
			int tmp31 = ::flixel::util::FlxRandom_obj::intRanged(tmp28,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(165)
			int tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(165)
			Float Speed1 = tmp32;		HX_STACK_VAR(Speed1,"Speed1");
			HX_STACK_LINE(165)
			Float tmp33 = Angle;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(165)
			Float tmp34 = ::Math_obj::PI;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(165)
			Float tmp35 = (Float(tmp34) / Float((int)180));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(165)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(165)
			Float a = tmp36;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(165)
			::flixel::util::FlxPoint tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(165)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(165)
				::flixel::util::FlxPool tmp38 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(165)
				::flixel::util::FlxPoint tmp39 = tmp38->get();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(165)
				Float tmp40 = X;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(165)
				Float tmp41 = Y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(165)
				::flixel::util::FlxPoint tmp42 = tmp39->set(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(165)
				::flixel::util::FlxPoint point = tmp42;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(165)
				point->_inPool = false;
				HX_STACK_LINE(165)
				tmp37 = point;
			}
			HX_STACK_LINE(165)
			::flixel::util::FlxPoint result = tmp37;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(165)
			Float tmp38 = a;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(165)
			Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(165)
			Float tmp40 = Speed1;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(165)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(165)
			result->set_x(tmp41);
			HX_STACK_LINE(165)
			Float tmp42 = a;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(165)
			Float tmp43 = ::Math_obj::sin(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(165)
			Float tmp44 = Speed1;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(165)
			Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(165)
			result->set_y(tmp45);
			HX_STACK_LINE(165)
			tmp16 = result;
		}
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint newVelocity = tmp16;		HX_STACK_VAR(newVelocity,"newVelocity");
		HX_STACK_LINE(167)
		bool tmp17 = this->accelerates;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(167)
		if ((tmp17)){
			HX_STACK_LINE(169)
			::flixel::util::FlxPoint tmp18 = this->acceleration;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(169)
			Float tmp19 = newVelocity->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(169)
			tmp18->set_x(tmp19);
			HX_STACK_LINE(170)
			::flixel::util::FlxPoint tmp20 = this->acceleration;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			Float tmp21 = newVelocity->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(170)
			tmp20->set_y(tmp21);
		}
		else{
			HX_STACK_LINE(174)
			::flixel::util::FlxPoint tmp18 = this->velocity;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(174)
			Float tmp19 = newVelocity->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(174)
			tmp18->set_x(tmp19);
			HX_STACK_LINE(175)
			::flixel::util::FlxPoint tmp20 = this->velocity;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(175)
			Float tmp21 = newVelocity->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(175)
			tmp20->set_y(tmp21);
		}
		HX_STACK_LINE(178)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireFromAngle,(void))

Void FlxBullet_obj::postFire( ){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","postFire",0xd3c76119,"flixel.addons.weapon.FlxBullet.postFire","flixel/addons/weapon/FlxBullet.hx",182,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		bool tmp = this->_animated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		if ((tmp)){
			HX_STACK_LINE(185)
			::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			tmp1->play(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),null(),null());
		}
		HX_STACK_LINE(188)
		::flixel::addons::weapon::FlxWeapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		Float tmp2 = tmp1->bulletElasticity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		if ((tmp3)){
			HX_STACK_LINE(190)
			::flixel::addons::weapon::FlxWeapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			this->elasticity = tmp4->bulletElasticity;
		}
		HX_STACK_LINE(193)
		this->set_exists(true);
		HX_STACK_LINE(196)
		::flixel::util::FlxPoint tmp4 = this->last;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		tmp4->set_x(tmp5);
		HX_STACK_LINE(197)
		::flixel::util::FlxPoint tmp6 = this->last;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		tmp6->set_y(tmp7);
		HX_STACK_LINE(199)
		::flixel::addons::weapon::FlxWeapon tmp8 = this->_weapon;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		Float tmp9 = tmp8->bulletLifeSpan;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(199)
		if ((tmp10)){
			HX_STACK_LINE(201)
			::flixel::addons::weapon::FlxWeapon tmp11 = this->_weapon;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(201)
			Float tmp12 = tmp11->bulletLifeSpan;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			::flixel::addons::weapon::FlxWeapon tmp13 = this->_weapon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			Float tmp14 = tmp13->rndFactorLifeSpan;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(201)
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(201)
			::flixel::addons::weapon::FlxWeapon tmp16 = this->_weapon;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(201)
			Float tmp17 = tmp16->rndFactorLifeSpan;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(201)
			Float tmp18 = ::flixel::util::FlxRandom_obj::floatRanged(tmp15,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(201)
			Float tmp19 = (tmp12 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(201)
			this->lifespan = tmp19;
		}
		HX_STACK_LINE(204)
		::flixel::addons::weapon::FlxWeapon tmp11 = this->_weapon;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(204)
		Dynamic tmp12 = tmp11->onFireCallback;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(204)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(204)
		if ((tmp13)){
			HX_STACK_LINE(206)
			::flixel::addons::weapon::FlxWeapon tmp14 = this->_weapon;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			tmp14->onFireCallback();
		}
		HX_STACK_LINE(210)
		::flixel::addons::weapon::FlxWeapon tmp14 = this->_weapon;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		::flixel::_system::FlxSound tmp15 = tmp14->onFireSound;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(210)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(210)
		if ((tmp16)){
			HX_STACK_LINE(212)
			::flixel::addons::weapon::FlxWeapon tmp17 = this->_weapon;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(212)
			tmp17->onFireSound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBullet_obj,postFire,(void))

Void FlxBullet_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","update",0x0a73a42c,"flixel.addons.weapon.FlxBullet.update","flixel/addons/weapon/FlxBullet.hx",218,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		Float tmp = this->lifespan;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		if ((tmp1)){
			HX_STACK_LINE(221)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			hx::SubEq(this->lifespan,tmp2);
			HX_STACK_LINE(223)
			Float tmp3 = this->lifespan;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			if ((tmp4)){
				HX_STACK_LINE(225)
				this->kill();
			}
		}
		HX_STACK_LINE(229)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		::flixel::addons::weapon::FlxWeapon tmp6 = this->_weapon;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		::flixel::util::FlxRect tmp7 = tmp6->bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		bool tmp8 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(229)
		if ((tmp9)){
			HX_STACK_LINE(231)
			this->kill();
		}
		HX_STACK_LINE(234)
		this->super::update();
	}
return null();
}



FlxBullet_obj::FlxBullet_obj()
{
}

void FlxBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBullet);
	HX_MARK_MEMBER_NAME(accelerates,"accelerates");
	HX_MARK_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_MARK_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(_weapon,"_weapon");
	HX_MARK_MEMBER_NAME(_animated,"_animated");
	HX_MARK_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accelerates,"accelerates");
	HX_VISIT_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_VISIT_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(_weapon,"_weapon");
	HX_VISIT_MEMBER_NAME(_animated,"_animated");
	HX_VISIT_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { return _weapon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"postFire") ) { return postFire_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { return _animated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { return accelerates; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { return _bulletSpeed; }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { return xAcceleration; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { return yAcceleration; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { _weapon=inValue.Cast< ::flixel::addons::weapon::FlxWeapon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { _animated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { accelerates=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { _bulletSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { xAcceleration=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { yAcceleration=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBullet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"));
	outFields->push(HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"));
	outFields->push(HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"));
	outFields->push(HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"));
	outFields->push(HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"));
	outFields->push(HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a"));
	outFields->push(HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0"));
	outFields->push(HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBullet_obj,accelerates),HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,xAcceleration),HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,yAcceleration),HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorAngle),HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorSpeed),HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorLifeSpan),HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14")},
	{hx::fsFloat,(int)offsetof(FlxBullet_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeapon*/ ,(int)offsetof(FlxBullet_obj,_weapon),HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a")},
	{hx::fsBool,(int)offsetof(FlxBullet_obj,_animated),HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,_bulletSpeed),HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"),
	HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"),
	HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"),
	HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"),
	HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"),
	HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a"),
	HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0"),
	HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a"),
	HX_HCSTRING("addAnimation","\xa3","\x10","\x89","\x4a"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("fireAtMouse","\x1c","\x37","\x7d","\x47"),
	HX_HCSTRING("fireAtTouch","\xb6","\x38","\x4b","\x4f"),
	HX_HCSTRING("fireAtPosition","\x12","\x34","\xfa","\x58"),
	HX_HCSTRING("fireAtTarget","\x7a","\xaa","\xf1","\x00"),
	HX_HCSTRING("fireFromAngle","\x73","\x13","\xe1","\x7b"),
	HX_HCSTRING("postFire","\x36","\x34","\xfb","\x01"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBullet_obj::__mClass;

void FlxBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.weapon.FlxBullet","\xeb","\x5b","\xed","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxBullet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBullet_obj >;
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
} // end namespace addons
} // end namespace weapon
