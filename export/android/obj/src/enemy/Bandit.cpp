#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Environment
#include <Environment.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_enemy_Bandit
#include <enemy/Bandit.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace enemy{

Void Bandit_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::Environment ENV)
{
HX_STACK_FRAME("enemy.Bandit","new",0x8e533458,"enemy.Bandit.new","enemy/Bandit.hx",13,0xd22615f7)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(ENV,"ENV")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(20)
	this->maxHealth = ((Float)0);
	HX_STACK_LINE(19)
	this->allowHurt = true;
	HX_STACK_LINE(18)
	this->jumpPower = ((Float)245);
	HX_STACK_LINE(17)
	this->moveSpeed = ((Float)10);
	HX_STACK_LINE(16)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(27)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(28)
	this->loadGraphic(HX_HCSTRING("assets/images/enemy-0001.png","\x8c","\xac","\x5d","\x74"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","enemy/Bandit.hx",29,0xd22615f7)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		tmp2->set((int)1,tmp3);
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","enemy/Bandit.hx",30,0xd22615f7)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		tmp2->set((int)16,tmp3);
	}
	HX_STACK_LINE(31)
	this->set_facing((int)1);
	HX_STACK_LINE(33)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	tmp2->add(HX_HCSTRING("stand","\xd6","\x70","\x0b","\x84"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)3,null());
	HX_STACK_LINE(34)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	tmp3->add(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),Array_obj< int >::__new().Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)4).Add((int)3),(int)10,null());
	HX_STACK_LINE(35)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	tmp4->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)6),(int)240,false);
	HX_STACK_LINE(36)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	tmp5->add(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),Array_obj< int >::__new().Add((int)7),(int)3,null());
	HX_STACK_LINE(37)
	::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	tmp6->add(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),Array_obj< int >::__new().Add((int)8).Add((int)8),(int)3,false);
	HX_STACK_LINE(38)
	::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	tmp7->add(HX_HCSTRING("giggle","\xbb","\x93","\x38","\xe8"),Array_obj< int >::__new().Add((int)10).Add((int)11),(int)10,true);
	HX_STACK_LINE(39)
	::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	tmp8->add(HX_HCSTRING("laugh","\x81","\x7a","\xbd","\x6f"),Array_obj< int >::__new().Add((int)12).Add((int)13),(int)10,true);
	HX_STACK_LINE(40)
	::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	tmp9->add(HX_HCSTRING("talk","\x2c","\xb9","\xf6","\x4c"),Array_obj< int >::__new().Add((int)14).Add((int)15).Add((int)16).Add((int)15),(int)10,true);
	HX_STACK_LINE(42)
	this->set_solid(true);
	HX_STACK_LINE(43)
	::flixel::util::FlxPoint tmp10 = this->acceleration;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	Float tmp11 = ENV->gravity;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	tmp10->set_y(tmp11);
	HX_STACK_LINE(44)
	::flixel::util::FlxPoint tmp12 = this->maxVelocity;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Float tmp13 = this->moveSpeed;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	Float tmp14 = ENV->gravity;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	tmp12->set(tmp13,tmp14);
	HX_STACK_LINE(45)
	this->_environment = ENV;
	HX_STACK_LINE(47)
	this->setSize((int)16,(int)28);
	HX_STACK_LINE(48)
	this->centerOffsets(null());
	HX_STACK_LINE(49)
	::flixel::util::FlxPoint tmp15 = this->offset;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	tmp15->set_y((int)4);
}
;
	return null();
}

//Bandit_obj::~Bandit_obj() { }

Dynamic Bandit_obj::__CreateEmpty() { return  new Bandit_obj; }
hx::ObjectPtr< Bandit_obj > Bandit_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::Environment ENV)
{  hx::ObjectPtr< Bandit_obj > _result_ = new Bandit_obj();
	_result_->__construct(__o_X,__o_Y,ENV);
	return _result_;}

Dynamic Bandit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bandit_obj > _result_ = new Bandit_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bandit_obj::resetMaxHealth( Float Value){
{
		HX_STACK_FRAME("enemy.Bandit","resetMaxHealth",0x04394d99,"enemy.Bandit.resetMaxHealth","enemy/Bandit.hx",52,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(53)
		Float tmp = this->maxHealth = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		this->health = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bandit_obj,resetMaxHealth,(void))

Void Bandit_obj::addHealth( Float value){
{
		HX_STACK_FRAME("enemy.Bandit","addHealth",0x62210b95,"enemy.Bandit.addHealth","enemy/Bandit.hx",56,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(57)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Float tmp3 = this->maxHealth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(58)
			Float tmp5 = this->maxHealth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			Float tmp6 = this->health;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			value = tmp7;
		}
		HX_STACK_LINE(60)
		bool tmp5 = (value > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		if ((tmp5)){
			HX_STACK_LINE(60)
			tmp6 = value;
		}
		else{
			HX_STACK_LINE(60)
			tmp6 = (int)0;
		}
		HX_STACK_LINE(60)
		hx::AddEq(this->health,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bandit_obj,addHealth,(void))

Void Bandit_obj::update( ){
{
		HX_STACK_FRAME("enemy.Bandit","update",0x9672ed11,"enemy.Bandit.update","enemy/Bandit.hx",63,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Float tmp1 = tmp->scroll->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Float tmp6 = tmp5->scroll->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp10 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		int tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		int tmp12 = (tmp11 * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		::flixel::FlxCamera tmp13 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		int tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		int tmp15 = (tmp14 * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		::flixel::util::FlxRect tmp16 = ::flixel::util::FlxRect_obj::__new(tmp4,tmp9,tmp12,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		::flixel::util::FlxRect cameraRect = tmp16;		HX_STACK_VAR(cameraRect,"cameraRect");
		HX_STACK_LINE(65)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(65)
			Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(65)
			Float tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(65)
			Float tmp21 = this->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(65)
			::flixel::util::FlxRect tmp22 = ::flixel::util::FlxRect_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(65)
			::flixel::util::FlxRect Rect = tmp22;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(65)
			Float tmp23 = (Rect->x + Rect->width);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(65)
			Float tmp24 = cameraRect->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(65)
			bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(65)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(65)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(65)
			if ((tmp26)){
				HX_STACK_LINE(65)
				Float tmp28 = Rect->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(65)
				Float tmp29 = (cameraRect->x + cameraRect->width);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(65)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(65)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(65)
				tmp27 = (tmp28 < tmp31);
			}
			else{
				HX_STACK_LINE(65)
				tmp27 = false;
			}
			HX_STACK_LINE(65)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(65)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(65)
			if ((tmp28)){
				HX_STACK_LINE(65)
				Float tmp30 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(65)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(65)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(65)
				Float tmp33 = cameraRect->y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(65)
				tmp29 = (tmp32 > tmp33);
			}
			else{
				HX_STACK_LINE(65)
				tmp29 = false;
			}
			HX_STACK_LINE(65)
			if ((tmp29)){
				HX_STACK_LINE(65)
				Float tmp30 = Rect->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(65)
				Float tmp31 = (cameraRect->y + cameraRect->height);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(65)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(65)
				tmp17 = (tmp30 < tmp32);
			}
			else{
				HX_STACK_LINE(65)
				tmp17 = false;
			}
		}
		HX_STACK_LINE(65)
		if ((tmp17)){
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint tmp18 = this->acceleration;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			tmp18->set_x((int)0);
			HX_STACK_LINE(67)
			this->AIMovement();
			HX_STACK_LINE(68)
			this->super::update();
		}
	}
return null();
}


Void Bandit_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("enemy.Bandit","hurt",0xf68f7117,"enemy.Bandit.hurt","enemy/Bandit.hx",72,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(73)
		bool tmp = this->allowHurt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		if ((tmp)){
			HX_STACK_LINE(74)
			::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),((Float).7),((Float)0.06),true,true,null(),null());
			HX_STACK_LINE(75)
			Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(75)
			this->super::hurt(tmp1);
		}
	}
return null();
}


Void Bandit_obj::destroy( ){
{
		HX_STACK_FRAME("enemy.Bandit","destroy",0x94d2ecf2,"enemy.Bandit.destroy","enemy/Bandit.hx",80,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->super::destroy();
	}
return null();
}


Void Bandit_obj::AIMovement( ){
{
		HX_STACK_FRAME("enemy.Bandit","AIMovement",0x7e8a2d3f,"enemy.Bandit.AIMovement","enemy/Bandit.hx",83,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(85)
			::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			tmp3->play(HX_HCSTRING("stand","\xd6","\x70","\x0b","\x84"),null(),null());
		}
		else{
			HX_STACK_LINE(87)
			::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			tmp3->play(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),null(),null());
		}
		HX_STACK_LINE(89)
		::flixel::util::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		if ((tmp5)){
			HX_STACK_LINE(90)
			::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			tmp6->play(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),null(),null());
		}
		HX_STACK_LINE(92)
		::Environment tmp6 = this->_environment;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::Player tmp7 = tmp6->player;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		if ((tmp8)){
			HX_STACK_LINE(92)
			::Environment tmp10 = this->_environment;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			::Environment tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(92)
			tmp9 = tmp11->player->alive;
		}
		else{
			HX_STACK_LINE(92)
			tmp9 = false;
		}
		HX_STACK_LINE(92)
		if ((tmp9)){
			HX_STACK_LINE(93)
			::Environment tmp10 = this->_environment;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(93)
			Float tmp11 = tmp10->player->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(93)
			::Environment tmp12 = this->_environment;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(93)
			Float tmp13 = tmp12->player->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(93)
			Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(93)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			Float playerPosX = tmp15;		HX_STACK_VAR(playerPosX,"playerPosX");
			HX_STACK_LINE(94)
			::Environment tmp16 = this->_environment;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			Float tmp17 = tmp16->player->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			::Environment tmp18 = this->_environment;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(94)
			Float tmp19 = tmp18->player->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(94)
			Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(94)
			Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(94)
			Float playerPosY = tmp21;		HX_STACK_VAR(playerPosY,"playerPosY");
			HX_STACK_LINE(95)
			Float tmp22 = this->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(95)
			Float tmp23 = this->get_width();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(95)
			Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(95)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(95)
			Float enemyPosX = tmp25;		HX_STACK_VAR(enemyPosX,"enemyPosX");
			HX_STACK_LINE(96)
			Float tmp26 = this->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(96)
			Float tmp27 = this->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(96)
			Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(96)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(96)
			Float enemyPosY = tmp29;		HX_STACK_VAR(enemyPosY,"enemyPosY");
			HX_STACK_LINE(97)
			Float tmp30 = (playerPosX - enemyPosX);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(97)
			Float tmp31 = ::Math_obj::abs(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(97)
			bool tmp32 = (tmp31 < (int)100);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(97)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(97)
			if ((tmp32)){
				HX_STACK_LINE(97)
				Float tmp34 = (playerPosY - enemyPosY);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(97)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(97)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(97)
				Float tmp37 = ::Math_obj::abs(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(97)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(97)
				Float tmp39 = this->get_height();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(97)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(97)
				Float tmp41 = (Float(tmp40) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(97)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(97)
				tmp33 = (tmp38 < tmp42);
			}
			else{
				HX_STACK_LINE(97)
				tmp33 = false;
			}
			HX_STACK_LINE(97)
			if ((tmp33)){
				HX_STACK_LINE(98)
				::Environment tmp34 = this->_environment;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(98)
				Float tmp35 = tmp34->player->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(98)
				::Environment tmp36 = this->_environment;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(98)
				Float tmp37 = tmp36->player->get_width();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(98)
				Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(98)
				Float tmp39 = this->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(98)
				bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(98)
				if ((tmp40)){
					HX_STACK_LINE(99)
					int tmp41 = this->facing;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(99)
					bool tmp42 = (tmp41 == (int)1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(99)
					if ((tmp42)){
						HX_STACK_LINE(99)
						this->moveLeft();
					}
				}
				else{
					HX_STACK_LINE(100)
					::Environment tmp41 = this->_environment;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(100)
					Float tmp42 = tmp41->player->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(100)
					Float tmp43 = this->x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(100)
					Float tmp44 = this->get_width();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(100)
					Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(100)
					bool tmp46 = (tmp42 > tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(100)
					if ((tmp46)){
						HX_STACK_LINE(101)
						int tmp47 = this->facing;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(101)
						bool tmp48 = (tmp47 == (int)16);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(101)
						if ((tmp48)){
							HX_STACK_LINE(101)
							this->moveRight();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bandit_obj,AIMovement,(void))

Void Bandit_obj::moveLeft( ){
{
		HX_STACK_FRAME("enemy.Bandit","moveLeft",0xbd42acc0,"enemy.Bandit.moveLeft","enemy/Bandit.hx",107,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		Float tmp3 = this->moveSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		tmp->set_x(tmp6);
		HX_STACK_LINE(109)
		this->set_facing((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bandit_obj,moveLeft,(void))

Void Bandit_obj::moveRight( ){
{
		HX_STACK_FRAME("enemy.Bandit","moveRight",0x54218903,"enemy.Bandit.moveRight","enemy/Bandit.hx",112,0xd22615f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		Float tmp3 = this->moveSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		tmp->set_x(tmp5);
		HX_STACK_LINE(114)
		this->set_facing((int)16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bandit_obj,moveRight,(void))


Bandit_obj::Bandit_obj()
{
}

void Bandit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bandit);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_MARK_MEMBER_NAME(jumpPower,"jumpPower");
	HX_MARK_MEMBER_NAME(allowHurt,"allowHurt");
	HX_MARK_MEMBER_NAME(maxHealth,"maxHealth");
	HX_MARK_MEMBER_NAME(_AIMovementList,"_AIMovementList");
	HX_MARK_MEMBER_NAME(_environment,"_environment");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bandit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_VISIT_MEMBER_NAME(jumpPower,"jumpPower");
	HX_VISIT_MEMBER_NAME(allowHurt,"allowHurt");
	HX_VISIT_MEMBER_NAME(maxHealth,"maxHealth");
	HX_VISIT_MEMBER_NAME(_AIMovementList,"_AIMovementList");
	HX_VISIT_MEMBER_NAME(_environment,"_environment");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bandit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { return moveSpeed; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { return jumpPower; }
		if (HX_FIELD_EQ(inName,"allowHurt") ) { return allowHurt; }
		if (HX_FIELD_EQ(inName,"maxHealth") ) { return maxHealth; }
		if (HX_FIELD_EQ(inName,"addHealth") ) { return addHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"AIMovement") ) { return AIMovement_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_environment") ) { return _environment; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetMaxHealth") ) { return resetMaxHealth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_AIMovementList") ) { return _AIMovementList; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bandit_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { moveSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { jumpPower=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowHurt") ) { allowHurt=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHealth") ) { maxHealth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_environment") ) { _environment=inValue.Cast< ::Environment >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_AIMovementList") ) { _AIMovementList=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bandit_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bandit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"));
	outFields->push(HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52"));
	outFields->push(HX_HCSTRING("allowHurt","\x38","\xa5","\x0b","\xb0"));
	outFields->push(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"));
	outFields->push(HX_HCSTRING("_AIMovementList","\xd4","\x1a","\x98","\xd8"));
	outFields->push(HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Bandit_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(Bandit_obj,moveSpeed),HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f")},
	{hx::fsFloat,(int)offsetof(Bandit_obj,jumpPower),HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52")},
	{hx::fsBool,(int)offsetof(Bandit_obj,allowHurt),HX_HCSTRING("allowHurt","\x38","\xa5","\x0b","\xb0")},
	{hx::fsFloat,(int)offsetof(Bandit_obj,maxHealth),HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Bandit_obj,_AIMovementList),HX_HCSTRING("_AIMovementList","\xd4","\x1a","\x98","\xd8")},
	{hx::fsObject /*::Environment*/ ,(int)offsetof(Bandit_obj,_environment),HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"),
	HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52"),
	HX_HCSTRING("allowHurt","\x38","\xa5","\x0b","\xb0"),
	HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"),
	HX_HCSTRING("_AIMovementList","\xd4","\x1a","\x98","\xd8"),
	HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13"),
	HX_HCSTRING("resetMaxHealth","\x91","\x9e","\x01","\x87"),
	HX_HCSTRING("addHealth","\x9d","\x5d","\x2a","\xb5"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("AIMovement","\x37","\xa2","\xa8","\xd3"),
	HX_HCSTRING("moveLeft","\xb8","\x73","\x67","\xea"),
	HX_HCSTRING("moveRight","\x0b","\xdb","\x2a","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bandit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bandit_obj::__mClass,"__mClass");
};

#endif

hx::Class Bandit_obj::__mClass;

void Bandit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("enemy.Bandit","\x66","\x68","\x64","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bandit_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bandit_obj >;
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

} // end namespace enemy
