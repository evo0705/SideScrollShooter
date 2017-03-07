#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BarType
#include <BarType.h>
#endif
#ifndef INCLUDED_Bars
#include <Bars.h>
#endif
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WeaponAttribute
#include <WeaponAttribute.h>
#endif
#ifndef INCLUDED_WeaponType
#include <WeaponType.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_ActionMode
#include <flixel/ui/ActionMode.h>
#endif
#ifndef INCLUDED_flixel_ui_DPadMode
#include <flixel/ui/DPadMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Asset,::flixel::FlxState State)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",25,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Asset,"Asset")
HX_STACK_ARG(State,"State")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(73)
	this->_jumpDelayLeft = ((Float)0);
	HX_STACK_LINE(72)
	this->_jumpDelay = ((Float).3);
	HX_STACK_LINE(71)
	this->_currentAirJump = (int)0;
	HX_STACK_LINE(70)
	this->_vPadJumpReleased = true;
	HX_STACK_LINE(69)
	this->_secondJumpReady = false;
	HX_STACK_LINE(68)
	this->_spriteSize = ::flixel::util::FlxPoint_obj::__new((int)32,(int)32);
	HX_STACK_LINE(66)
	this->noDrop = false;
	HX_STACK_LINE(64)
	this->controllable = true;
	HX_STACK_LINE(60)
	this->skillPoint = (int)0;
	HX_STACK_LINE(59)
	this->statPoint = (int)0;
	HX_STACK_LINE(57)
	this->maxRifleBullet = (int)45;
	HX_STACK_LINE(56)
	this->maxShotgunBullet = (int)20;
	HX_STACK_LINE(55)
	this->maxSmgBullet = (int)1500;
	HX_STACK_LINE(54)
	this->maxHandgunBullet = (int)100;
	HX_STACK_LINE(53)
	this->rifleBullet = (int)0;
	HX_STACK_LINE(52)
	this->shotgunBullet = (int)0;
	HX_STACK_LINE(51)
	this->smgBullet = (int)1500;
	HX_STACK_LINE(50)
	this->handgunBullet = (int)100;
	HX_STACK_LINE(48)
	this->riflePro = (int)0;
	HX_STACK_LINE(47)
	this->shotgunPro = (int)0;
	HX_STACK_LINE(46)
	this->smgPro = (int)0;
	HX_STACK_LINE(45)
	this->handgunPro = (int)0;
	HX_STACK_LINE(44)
	this->endurance = (int)0;
	HX_STACK_LINE(41)
	this->exp = (int)0;
	HX_STACK_LINE(40)
	this->battery = (int)0;
	HX_STACK_LINE(39)
	this->maxExp = (int)0;
	HX_STACK_LINE(38)
	this->maxBattery = (int)0;
	HX_STACK_LINE(37)
	this->maxHealth = ((Float)0);
	HX_STACK_LINE(36)
	this->firstLevelXP = (int)150;
	HX_STACK_LINE(35)
	this->level = (int)1;
	HX_STACK_LINE(33)
	this->airJumpLimit = (int)0;
	HX_STACK_LINE(30)
	this->jumpPower = ((Float)10);
	HX_STACK_LINE(29)
	this->moveSpeed = ((Float)10);
	HX_STACK_LINE(28)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(90)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(91)
	this->gameState = State;
	HX_STACK_LINE(92)
	::String tmp2 = Asset;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::flixel::util::FlxPoint tmp3 = this->_spriteSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	::flixel::util::FlxPoint tmp6 = this->_spriteSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(92)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(92)
	this->loadGraphic(tmp2,true,tmp5,tmp8,null(),null());
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::haxe::ds::IntMap tmp9 = this->_facingFlip;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",93,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		tmp9->set((int)1,tmp10);
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::haxe::ds::IntMap tmp9 = this->_facingFlip;		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",94,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		tmp9->set((int)16,tmp10);
	}
	HX_STACK_LINE(95)
	this->set_facing((int)16);
	HX_STACK_LINE(97)
	::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	tmp9->add(HX_HCSTRING("stand","\xd6","\x70","\x0b","\x84"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)3,null());
	HX_STACK_LINE(98)
	::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(98)
	tmp10->add(HX_HCSTRING("stand-weapon","\xb3","\x6c","\x17","\x11"),Array_obj< int >::__new().Add((int)2).Add((int)3),(int)3,null());
	HX_STACK_LINE(99)
	::flixel::animation::FlxAnimationController tmp11 = this->animation;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(99)
	tmp11->add(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)6).Add((int)5),(int)10,null());
	HX_STACK_LINE(100)
	::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(100)
	tmp12->add(HX_HCSTRING("move-weapon","\xd8","\x87","\xd4","\x56"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)10).Add((int)9),(int)10,null());
	HX_STACK_LINE(101)
	::flixel::animation::FlxAnimationController tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(101)
	tmp13->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)12),(int)1,false);
	HX_STACK_LINE(102)
	::flixel::animation::FlxAnimationController tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(102)
	tmp14->add(HX_HCSTRING("jump-weapon","\x9b","\x4b","\xa6","\x60"),Array_obj< int >::__new().Add((int)13),(int)1,false);
	HX_STACK_LINE(103)
	::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(103)
	tmp15->add(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),Array_obj< int >::__new().Add((int)14),(int)3,null());
	HX_STACK_LINE(104)
	::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(104)
	tmp16->add(HX_HCSTRING("fall-weapon","\xae","\x0f","\xa0","\x9f"),Array_obj< int >::__new().Add((int)15),(int)3,null());
	HX_STACK_LINE(105)
	::flixel::animation::FlxAnimationController tmp17 = this->animation;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(105)
	tmp17->add(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),Array_obj< int >::__new().Add((int)16).Add((int)16),(int)1,false);
	HX_STACK_LINE(110)
	this->set_solid(true);
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp18 = ::flixel::ui::FlxVirtualPad_obj::__new(::flixel::ui::DPadMode_obj::LEFT_RIGHT,::flixel::ui::ActionMode_obj::A_B);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(112)
		this->vPad = tmp18;
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp19 = this->vPad;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(112)
		tmp19->set_alpha(((Float).8));
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp20 = this->vPad;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		tmp20->antialiasing = true;
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp21 = this->vPad;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(112)
		tmp21->buttonLeft->loadGraphic(HX_HCSTRING("assets/images/dpadleft.png","\x5c","\x0f","\x27","\x2c"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp22 = this->vPad;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(112)
		int tmp23 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(112)
		Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(112)
		int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(112)
		int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(112)
		Float tmp27 = (Float(tmp26) / Float((int)8));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(112)
		int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(112)
		tmp22->buttonLeft->setGraphicSize(tmp25,tmp28);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp29 = this->vPad;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(112)
		::flixel::util::FlxPoint tmp30 = tmp29->buttonLeft->scale;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(112)
		tmp30->set(((Float).6),((Float).6));
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp31 = this->vPad;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(112)
		int tmp32 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(112)
		Float tmp33 = (Float(tmp32) / Float((int)15));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(112)
		int tmp34 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(112)
		int tmp35 = (tmp34 - (int)10);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp36 = this->vPad;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(112)
		Float tmp37 = tmp36->buttonLeft->get_height();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(112)
		Float tmp38 = (tmp35 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(112)
		tmp31->buttonLeft->setPosition(tmp33,tmp38);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp39 = this->vPad;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(112)
		tmp39->buttonRight->loadGraphic(HX_HCSTRING("assets/images/dpadright.png","\x3d","\xd3","\x33","\xcc"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp40 = this->vPad;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(112)
		int tmp41 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(112)
		Float tmp42 = (Float(tmp41) / Float((int)8));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(112)
		int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(112)
		int tmp44 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(112)
		Float tmp45 = (Float(tmp44) / Float((int)8));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(112)
		int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(112)
		tmp40->buttonRight->setGraphicSize(tmp43,tmp46);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp47 = this->vPad;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(112)
		::flixel::util::FlxPoint tmp48 = tmp47->buttonRight->scale;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(112)
		tmp48->set(((Float).6),((Float).6));
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp49 = this->vPad;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp50 = this->vPad;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(112)
		Float tmp51 = tmp50->buttonLeft->x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp52 = this->vPad;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(112)
		Float tmp53 = tmp52->buttonLeft->get_width();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(112)
		Float tmp54 = (tmp51 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(112)
		Float tmp55 = (tmp54 + (int)10);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp56 = this->vPad;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(112)
		Float tmp57 = tmp56->buttonLeft->y;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(112)
		tmp49->buttonRight->setPosition(tmp55,tmp57);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp58 = this->vPad;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(112)
		tmp58->buttonA->loadGraphic(HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp59 = this->vPad;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(112)
		int tmp60 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(112)
		Float tmp61 = (Float(tmp60) / Float((int)8));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(112)
		int tmp62 = ::Math_obj::round(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(112)
		int tmp63 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(112)
		Float tmp64 = (Float(tmp63) / Float((int)8));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(112)
		int tmp65 = ::Math_obj::round(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(112)
		tmp59->buttonA->setGraphicSize(tmp62,tmp65);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp66 = this->vPad;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(112)
		::flixel::util::FlxPoint tmp67 = tmp66->buttonA->scale;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(112)
		tmp67->set(((Float).6),((Float).6));
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp68 = this->vPad;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(112)
		int tmp69 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(112)
		int tmp70 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(112)
		Float tmp71 = (Float(tmp70) / Float((int)15));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(112)
		Float tmp72 = (tmp69 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp73 = this->vPad;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(112)
		Float tmp74 = tmp73->buttonA->get_width();		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(112)
		Float tmp75 = (tmp72 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(112)
		int tmp76 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(112)
		int tmp77 = (tmp76 - (int)10);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp78 = this->vPad;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(112)
		Float tmp79 = tmp78->buttonLeft->get_height();		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(112)
		Float tmp80 = (tmp77 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(112)
		tmp68->buttonA->setPosition(tmp75,tmp80);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp81 = this->vPad;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(112)
		tmp81->buttonB->loadGraphic(HX_HCSTRING("assets/images/dpadB.png","\xa3","\x67","\xb2","\xf0"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp82 = this->vPad;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(112)
		int tmp83 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(112)
		Float tmp84 = (Float(tmp83) / Float((int)8));		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(112)
		int tmp85 = ::Math_obj::round(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(112)
		int tmp86 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(112)
		Float tmp87 = (Float(tmp86) / Float((int)8));		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(112)
		int tmp88 = ::Math_obj::round(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(112)
		tmp82->buttonB->setGraphicSize(tmp85,tmp88);
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp89 = this->vPad;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(112)
		::flixel::util::FlxPoint tmp90 = tmp89->buttonB->scale;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(112)
		tmp90->set(((Float).6),((Float).6));
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp91 = this->vPad;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp92 = this->vPad;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(112)
		Float tmp93 = tmp92->buttonA->x;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp94 = this->vPad;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(112)
		Float tmp95 = tmp94->buttonA->get_width();		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(112)
		Float tmp96 = (tmp93 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(112)
		Float tmp97 = (tmp96 - (int)10);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(112)
		::flixel::ui::FlxVirtualPad tmp98 = this->vPad;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(112)
		Float tmp99 = tmp98->buttonA->y;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(112)
		tmp91->buttonB->setPosition(tmp97,tmp99);
	}
	HX_STACK_LINE(114)
	::Bars tmp18 = ::Bars_obj::__new(hx::ObjectPtr<OBJ_>(this),::BarType_obj::Health,(int)4,(int)4,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(114)
	this->healthBar = tmp18;
	HX_STACK_LINE(115)
	::Bars tmp19 = ::Bars_obj::__new(hx::ObjectPtr<OBJ_>(this),::BarType_obj::Battery,(int)4,(int)12,(int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(115)
	this->batteryBar = tmp19;
	HX_STACK_LINE(116)
	::Bars tmp20 = ::Bars_obj::__new(hx::ObjectPtr<OBJ_>(this),::BarType_obj::EXP,(int)11,(int)11,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(116)
	this->expBar = tmp20;
	HX_STACK_LINE(117)
	int tmp21 = this->maxHandgunBullet;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(117)
	::Bars tmp22 = ::Bars_obj::__new(hx::ObjectPtr<OBJ_>(this),::BarType_obj::AMMO,(int)4,(int)20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(117)
	this->ammoBar = tmp22;
	HX_STACK_LINE(119)
	::flixel::group::FlxGroup tmp23 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(119)
	this->hud = tmp23;
	HX_STACK_LINE(120)
	::flixel::group::FlxGroup tmp24 = this->hud;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(120)
	::Bars tmp25 = this->healthBar;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(120)
	tmp24->add(tmp25);
	HX_STACK_LINE(121)
	::flixel::group::FlxGroup tmp26 = this->hud;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(121)
	::Bars tmp27 = this->batteryBar;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(121)
	tmp26->add(tmp27);
	HX_STACK_LINE(122)
	::flixel::group::FlxGroup tmp28 = this->hud;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(122)
	::Bars tmp29 = this->ammoBar;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(122)
	tmp28->add(tmp29);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Asset,::flixel::FlxState State)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(__o_X,__o_Y,Asset,State);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Player_obj::resetMaxHealth( Float Value){
{
		HX_STACK_FRAME("Player","resetMaxHealth",0xfd128cde,"Player.resetMaxHealth","Player.hx",125,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(126)
		Float tmp = this->maxHealth = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		this->health = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,resetMaxHealth,(void))

Void Player_obj::addHealth( Float value){
{
		HX_STACK_FRAME("Player","addHealth",0x6afa1270,"Player.addHealth","Player.hx",129,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(130)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		Float tmp3 = this->maxHealth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(131)
			Float tmp5 = this->maxHealth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			Float tmp6 = this->health;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			value = tmp7;
		}
		HX_STACK_LINE(133)
		bool tmp5 = (value > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		if ((tmp5)){
			HX_STACK_LINE(133)
			tmp6 = value;
		}
		else{
			HX_STACK_LINE(133)
			tmp6 = (int)0;
		}
		HX_STACK_LINE(133)
		hx::AddEq(this->health,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addHealth,(void))

Void Player_obj::setWeapon( ::flixel::util::FlxRect Bounds,::WeaponAttribute Attribute){
{
		HX_STACK_FRAME("Player","setWeapon",0x11dac0f1,"Player.setWeapon","Player.hx",138,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_ARG(Attribute,"Attribute")
		HX_STACK_LINE(139)
		::flixel::FlxState tmp = this->gameState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::flixel::FlxSprite tmp1 = this->weaponSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp->remove(tmp1,null());
		HX_STACK_LINE(140)
		::flixel::addons::weapon::FlxWeapon tmp2 = this->weapon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(140)
			::flixel::addons::weapon::FlxWeapon tmp4 = this->weapon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			this->weaponToRemove = tmp4;
		}
		HX_STACK_LINE(141)
		this->weaponAttribute = Attribute;
		HX_STACK_LINE(142)
		Float damageBuff = (int)0;		HX_STACK_VAR(damageBuff,"damageBuff");
		HX_STACK_LINE(143)
		::WeaponAttribute tmp4 = this->weaponAttribute;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		::WeaponType tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		bool tmp6 = (tmp5 == ::WeaponType_obj::Handgun);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		if ((tmp6)){
			HX_STACK_LINE(144)
			int tmp7 = this->handgunPro;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			damageBuff = tmp8;
		}
		else{
			HX_STACK_LINE(146)
			::WeaponAttribute tmp7 = this->weaponAttribute;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			::WeaponType tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			bool tmp9 = (tmp8 == ::WeaponType_obj::Rifle);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			if ((tmp9)){
				HX_STACK_LINE(147)
				int tmp10 = this->riflePro;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				damageBuff = tmp11;
			}
			else{
				HX_STACK_LINE(149)
				::WeaponAttribute tmp10 = this->weaponAttribute;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				::WeaponType tmp11 = tmp10->type;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				bool tmp12 = (tmp11 == ::WeaponType_obj::SMG);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(149)
				if ((tmp12)){
					HX_STACK_LINE(150)
					int tmp13 = this->smgPro;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(150)
					Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(150)
					damageBuff = tmp14;
				}
				else{
					HX_STACK_LINE(152)
					::WeaponAttribute tmp13 = this->weaponAttribute;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(152)
					::WeaponType tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(152)
					bool tmp15 = (tmp14 == ::WeaponType_obj::Shotgun);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(152)
					if ((tmp15)){
						HX_STACK_LINE(153)
						int tmp16 = this->shotgunPro;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(153)
						Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(153)
						damageBuff = tmp17;
					}
				}
			}
		}
		HX_STACK_LINE(155)
		bool tmp7 = (damageBuff == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		if ((tmp7)){
			HX_STACK_LINE(155)
			tmp8 = ((Float)0.5);
		}
		else{
			HX_STACK_LINE(155)
			tmp8 = damageBuff;
		}
		HX_STACK_LINE(155)
		::WeaponAttribute tmp9 = this->weaponAttribute;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		Float tmp10 = tmp9->minDamage;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		::WeaponAttribute tmp12 = this->weaponAttribute;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		tmp12->minDamage = tmp11;
		HX_STACK_LINE(156)
		bool tmp13 = (damageBuff == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(156)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(156)
		if ((tmp13)){
			HX_STACK_LINE(156)
			tmp14 = ((Float)0.5);
		}
		else{
			HX_STACK_LINE(156)
			tmp14 = damageBuff;
		}
		HX_STACK_LINE(156)
		::WeaponAttribute tmp15 = this->weaponAttribute;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(156)
		Float tmp16 = tmp15->maxDamage;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(156)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(156)
		::WeaponAttribute tmp18 = this->weaponAttribute;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(156)
		tmp18->maxDamage = tmp17;
		HX_STACK_LINE(157)
		Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(157)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(157)
		::flixel::FlxSprite tmp21 = ::flixel::FlxSprite_obj::__new(tmp19,tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(157)
		this->weaponSprite = tmp21;
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			::flixel::FlxSprite tmp22 = this->weaponSprite;		HX_STACK_VAR(tmp22,"tmp22");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",158,0xa27fc9dd)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(158)
			Dynamic tmp23 = _Function_2_1::Block();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(158)
			tmp22->_facingFlip->set((int)1,tmp23);
		}
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			::flixel::FlxSprite tmp22 = this->weaponSprite;		HX_STACK_VAR(tmp22,"tmp22");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",159,0xa27fc9dd)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(159)
			Dynamic tmp23 = _Function_2_1::Block();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(159)
			tmp22->_facingFlip->set((int)16,tmp23);
		}
		HX_STACK_LINE(160)
		::flixel::FlxSprite tmp22 = this->weaponSprite;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(160)
		::String tmp23 = Attribute->asset;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(160)
		tmp22->loadGraphic(tmp23,true,(int)21,(int)10,null(),null());
		HX_STACK_LINE(161)
		::flixel::FlxSprite tmp24 = this->weaponSprite;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(161)
		Dynamic tmp25 = Attribute->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(161)
		Dynamic tmp26 = Attribute->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(161)
		Dynamic tmp27 = Attribute->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(161)
		Dynamic tmp28 = Attribute->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(161)
		tmp24->animation->add(tmp25,tmp26,tmp27,tmp28);
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp29 = this->weaponSprite;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(162)
		Dynamic tmp30 = Attribute->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(162)
		Dynamic tmp31 = Attribute->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(162)
		Dynamic tmp32 = Attribute->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)2);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(162)
		Dynamic tmp33 = Attribute->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)3);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(162)
		tmp29->animation->add(tmp30,tmp31,tmp32,tmp33);
		HX_STACK_LINE(163)
		::flixel::FlxSprite tmp34 = this->weaponSprite;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(163)
		Dynamic tmp35 = Attribute->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(163)
		tmp34->animation->play(tmp35,null(),null());
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp36 = this->weaponSprite;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(164)
		tmp36->offset->set_x((int)-28);
		HX_STACK_LINE(165)
		::flixel::FlxSprite tmp37 = this->weaponSprite;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(165)
		tmp37->offset->set_y((int)-12);
		HX_STACK_LINE(166)
		::flixel::FlxSprite tmp38 = this->weaponSprite;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(166)
		Float tmp39 = this->x;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(166)
		Float tmp40 = this->get_width();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(166)
		Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(166)
		Float tmp42 = this->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(166)
		tmp38->setPosition(tmp41,tmp42);
		HX_STACK_LINE(167)
		::flixel::FlxSprite tmp43 = this->weaponSprite;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(167)
		int tmp44 = this->facing;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(167)
		tmp43->set_facing(tmp44);
		HX_STACK_LINE(168)
		::flixel::FlxSprite tmp45 = this->weaponSprite;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(168)
		int tmp46 = this->facing;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(168)
		bool tmp47 = (tmp46 == (int)1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(168)
		Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(168)
		if ((tmp47)){
			HX_STACK_LINE(168)
			tmp48 = (int)1;
		}
		else{
			HX_STACK_LINE(168)
			tmp48 = (int)-28;
		}
		HX_STACK_LINE(168)
		tmp45->offset->set_x(tmp48);
		HX_STACK_LINE(169)
		::flixel::addons::weapon::FlxWeapon tmp49 = ::flixel::addons::weapon::FlxWeapon_obj::__new(Attribute->name,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(169)
		this->weapon = tmp49;
		HX_STACK_LINE(170)
		::flixel::addons::weapon::FlxWeapon tmp50 = this->weapon;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(170)
		int tmp51 = Attribute->bulletSpeed;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(170)
		tmp50->setBulletSpeed(tmp51);
		HX_STACK_LINE(171)
		::flixel::addons::weapon::FlxWeapon tmp52 = this->weapon;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(171)
		int tmp53 = Attribute->bulletSpeed;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(171)
		tmp52->setBulletDirection((int)0,tmp53);
		HX_STACK_LINE(172)
		::flixel::addons::weapon::FlxWeapon tmp54 = this->weapon;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(172)
		Float tmp55 = Attribute->bulletLifeSpan;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(172)
		tmp54->setBulletLifeSpan(tmp55);
		HX_STACK_LINE(173)
		::flixel::addons::weapon::FlxWeapon tmp56 = this->weapon;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(173)
		tmp56->fireRate = Attribute->fireRate;
		HX_STACK_LINE(174)
		::flixel::addons::weapon::FlxWeapon tmp57 = this->weapon;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(174)
		Float tmp58 = Attribute->elasticity;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(174)
		tmp57->setBulletElasticity(tmp58);
		HX_STACK_LINE(175)
		::flixel::addons::weapon::FlxWeapon tmp59 = this->weapon;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(175)
		::flixel::util::FlxRect tmp60 = Bounds;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(175)
		tmp59->setBulletBounds(tmp60);
		HX_STACK_LINE(176)
		::flixel::addons::weapon::FlxWeapon tmp61 = this->weapon;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(176)
		int tmp62 = Attribute->randomAngle;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(176)
		int tmp63 = Attribute->randomSpeed;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(176)
		::flixel::util::FlxPoint tmp64 = Attribute->randomPosition;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(176)
		int tmp65 = Attribute->randomLifeSpan;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(176)
		tmp61->setBulletRandomFactor(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(178)
		Float tmp66 = (Attribute->bulletLifeSpan * (int)1000);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(178)
		int tmp67 = Attribute->fireRate;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(178)
		Float tmp68 = (Float(tmp66) / Float(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(178)
		int tmp69 = ::Std_obj::_int(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(178)
		::flixel::group::FlxTypedGroup tmp70 = ::flixel::group::FlxTypedGroup_obj::__new(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(178)
		::flixel::addons::weapon::FlxWeapon tmp71 = this->weapon;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(178)
		tmp71->group = tmp70;
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			::WeaponAttribute tmp72 = this->weaponAttribute;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(179)
			int _g = tmp72->bulletCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				bool tmp73 = (_g1 < _g);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(179)
				bool tmp74 = !(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(179)
				if ((tmp74)){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				int tmp75 = (_g1)++;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(179)
				int b = tmp75;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(181)
				::flixel::addons::weapon::FlxWeapon tmp76 = this->weapon;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(181)
				Float tmp77 = Attribute->minDamage;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(181)
				Float tmp78 = Attribute->maxDamage;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(181)
				::Bullet tmp79 = ::Bullet_obj::__new(tmp76,(int)0,tmp77,tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(181)
				::flixel::addons::weapon::FlxBullet tempBullet = tmp79;		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(182)
				::String tmp80 = Attribute->bulletAsset;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(182)
				int tmp81 = Attribute->bulletWidth;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(182)
				int tmp82 = Attribute->bulletHeight;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(182)
				tempBullet->loadGraphic(tmp80,true,tmp81,tmp82,null(),null());
				HX_STACK_LINE(184)
				Dynamic tmp83 = Attribute->bulletAnimations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(184)
				Dynamic tmp84 = Attribute->bulletAnimations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)1);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(184)
				Dynamic tmp85 = Attribute->bulletAnimations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)2);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(184)
				Dynamic tmp86 = Attribute->bulletAnimations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)3);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(184)
				tempBullet->addAnimation(tmp83,tmp84,tmp85,tmp86);
				HX_STACK_LINE(185)
				Dynamic tmp87 = Attribute->bulletAnimations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(185)
				tempBullet->animation->play(tmp87,null(),null());
				HX_STACK_LINE(187)
				Dynamic tmp88 = Attribute->bulletAnimations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(187)
				Dynamic tmp89 = Attribute->bulletAnimations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)1);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(187)
				Dynamic tmp90 = Attribute->bulletAnimations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)2);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(187)
				Dynamic tmp91 = Attribute->bulletAnimations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)3);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(187)
				tempBullet->addAnimation(tmp88,tmp89,tmp90,tmp91);
				HX_STACK_LINE(188)
				::flixel::addons::weapon::FlxWeapon tmp92 = this->weapon;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(188)
				::flixel::addons::weapon::FlxBullet tmp93 = tempBullet;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(188)
				tmp92->group->add(tmp93);
			}
		}
		HX_STACK_LINE(190)
		::flixel::FlxState tmp72 = this->gameState;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(190)
		::flixel::FlxSprite tmp73 = this->weaponSprite;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(190)
		tmp72->add(tmp73);
		HX_STACK_LINE(191)
		::flixel::FlxState tmp74 = this->gameState;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(191)
		::flixel::addons::weapon::FlxWeapon tmp75 = this->weapon;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(191)
		::flixel::group::FlxTypedGroup tmp76 = tmp75->group;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(191)
		tmp74->add(tmp76);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,setWeapon,(void))

Void Player_obj::createVirtualPad( ){
{
		HX_STACK_FRAME("Player","createVirtualPad",0x64d7ddb1,"Player.createVirtualPad","Player.hx",194,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		::flixel::ui::FlxVirtualPad tmp = ::flixel::ui::FlxVirtualPad_obj::__new(::flixel::ui::DPadMode_obj::LEFT_RIGHT,::flixel::ui::ActionMode_obj::A_B);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		this->vPad = tmp;
		HX_STACK_LINE(196)
		::flixel::ui::FlxVirtualPad tmp1 = this->vPad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		tmp1->set_alpha(((Float).8));
		HX_STACK_LINE(197)
		::flixel::ui::FlxVirtualPad tmp2 = this->vPad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		tmp2->antialiasing = true;
		HX_STACK_LINE(198)
		::flixel::ui::FlxVirtualPad tmp3 = this->vPad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		tmp3->buttonLeft->loadGraphic(HX_HCSTRING("assets/images/dpadleft.png","\x5c","\x0f","\x27","\x2c"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(199)
		::flixel::ui::FlxVirtualPad tmp4 = this->vPad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		Float tmp6 = (Float(tmp5) / Float((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		int tmp8 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		Float tmp9 = (Float(tmp8) / Float((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(199)
		tmp4->buttonLeft->setGraphicSize(tmp7,tmp10);
		HX_STACK_LINE(200)
		::flixel::ui::FlxVirtualPad tmp11 = this->vPad;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		::flixel::util::FlxPoint tmp12 = tmp11->buttonLeft->scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		tmp12->set(((Float).6),((Float).6));
		HX_STACK_LINE(201)
		::flixel::ui::FlxVirtualPad tmp13 = this->vPad;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(201)
		int tmp14 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(201)
		Float tmp15 = (Float(tmp14) / Float((int)15));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(201)
		int tmp16 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(201)
		int tmp17 = (tmp16 - (int)10);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		::flixel::ui::FlxVirtualPad tmp18 = this->vPad;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(201)
		Float tmp19 = tmp18->buttonLeft->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(201)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(201)
		tmp13->buttonLeft->setPosition(tmp15,tmp20);
		HX_STACK_LINE(202)
		::flixel::ui::FlxVirtualPad tmp21 = this->vPad;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(202)
		tmp21->buttonRight->loadGraphic(HX_HCSTRING("assets/images/dpadright.png","\x3d","\xd3","\x33","\xcc"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(203)
		::flixel::ui::FlxVirtualPad tmp22 = this->vPad;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(203)
		int tmp23 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(203)
		Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(203)
		int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(203)
		int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(203)
		Float tmp27 = (Float(tmp26) / Float((int)8));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(203)
		int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(203)
		tmp22->buttonRight->setGraphicSize(tmp25,tmp28);
		HX_STACK_LINE(204)
		::flixel::ui::FlxVirtualPad tmp29 = this->vPad;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(204)
		::flixel::util::FlxPoint tmp30 = tmp29->buttonRight->scale;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(204)
		tmp30->set(((Float).6),((Float).6));
		HX_STACK_LINE(205)
		::flixel::ui::FlxVirtualPad tmp31 = this->vPad;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(205)
		::flixel::ui::FlxVirtualPad tmp32 = this->vPad;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(205)
		Float tmp33 = tmp32->buttonLeft->x;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(205)
		::flixel::ui::FlxVirtualPad tmp34 = this->vPad;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(205)
		Float tmp35 = tmp34->buttonLeft->get_width();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(205)
		Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(205)
		Float tmp37 = (tmp36 + (int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(205)
		::flixel::ui::FlxVirtualPad tmp38 = this->vPad;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(205)
		Float tmp39 = tmp38->buttonLeft->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(205)
		tmp31->buttonRight->setPosition(tmp37,tmp39);
		HX_STACK_LINE(206)
		::flixel::ui::FlxVirtualPad tmp40 = this->vPad;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(206)
		tmp40->buttonA->loadGraphic(HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(207)
		::flixel::ui::FlxVirtualPad tmp41 = this->vPad;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(207)
		int tmp42 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(207)
		Float tmp43 = (Float(tmp42) / Float((int)8));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(207)
		int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(207)
		int tmp45 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(207)
		Float tmp46 = (Float(tmp45) / Float((int)8));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(207)
		int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(207)
		tmp41->buttonA->setGraphicSize(tmp44,tmp47);
		HX_STACK_LINE(208)
		::flixel::ui::FlxVirtualPad tmp48 = this->vPad;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(208)
		::flixel::util::FlxPoint tmp49 = tmp48->buttonA->scale;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(208)
		tmp49->set(((Float).6),((Float).6));
		HX_STACK_LINE(209)
		::flixel::ui::FlxVirtualPad tmp50 = this->vPad;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(209)
		int tmp51 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(209)
		int tmp52 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(209)
		Float tmp53 = (Float(tmp52) / Float((int)15));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(209)
		Float tmp54 = (tmp51 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(209)
		::flixel::ui::FlxVirtualPad tmp55 = this->vPad;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(209)
		Float tmp56 = tmp55->buttonA->get_width();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(209)
		Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(209)
		int tmp58 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(209)
		int tmp59 = (tmp58 - (int)10);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(209)
		::flixel::ui::FlxVirtualPad tmp60 = this->vPad;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(209)
		Float tmp61 = tmp60->buttonLeft->get_height();		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(209)
		Float tmp62 = (tmp59 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(209)
		tmp50->buttonA->setPosition(tmp57,tmp62);
		HX_STACK_LINE(210)
		::flixel::ui::FlxVirtualPad tmp63 = this->vPad;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(210)
		tmp63->buttonB->loadGraphic(HX_HCSTRING("assets/images/dpadB.png","\xa3","\x67","\xb2","\xf0"),false,(int)48,(int)48,null(),null());
		HX_STACK_LINE(211)
		::flixel::ui::FlxVirtualPad tmp64 = this->vPad;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(211)
		int tmp65 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(211)
		Float tmp66 = (Float(tmp65) / Float((int)8));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(211)
		int tmp67 = ::Math_obj::round(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(211)
		int tmp68 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(211)
		Float tmp69 = (Float(tmp68) / Float((int)8));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(211)
		int tmp70 = ::Math_obj::round(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(211)
		tmp64->buttonB->setGraphicSize(tmp67,tmp70);
		HX_STACK_LINE(212)
		::flixel::ui::FlxVirtualPad tmp71 = this->vPad;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(212)
		::flixel::util::FlxPoint tmp72 = tmp71->buttonB->scale;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(212)
		tmp72->set(((Float).6),((Float).6));
		HX_STACK_LINE(213)
		::flixel::ui::FlxVirtualPad tmp73 = this->vPad;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(213)
		::flixel::ui::FlxVirtualPad tmp74 = this->vPad;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(213)
		Float tmp75 = tmp74->buttonA->x;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(213)
		::flixel::ui::FlxVirtualPad tmp76 = this->vPad;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(213)
		Float tmp77 = tmp76->buttonA->get_width();		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(213)
		Float tmp78 = (tmp75 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(213)
		Float tmp79 = (tmp78 - (int)10);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(213)
		::flixel::ui::FlxVirtualPad tmp80 = this->vPad;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(213)
		Float tmp81 = tmp80->buttonA->y;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(213)
		tmp73->buttonB->setPosition(tmp79,tmp81);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,createVirtualPad,(void))

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",216,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		tmp->set_x((int)0);
		HX_STACK_LINE(219)
		this->playAnimation();
		HX_STACK_LINE(221)
		int tmp1 = this->touching;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		int tmp2 = (int(tmp1) & int((int)4096));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		if ((tmp3)){
			HX_STACK_LINE(221)
			int tmp5 = this->wasTouching;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(221)
			int tmp7 = (int(tmp6) & int((int)4096));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(221)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(221)
			tmp4 = (tmp8 <= (int)0);
		}
		else{
			HX_STACK_LINE(221)
			tmp4 = false;
		}
		HX_STACK_LINE(221)
		if ((tmp4)){
			HX_STACK_LINE(221)
			::flixel::_system::FlxSound tmp5 = this->onStepSound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			tmp5->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
			HX_STACK_LINE(221)
			this->_currentAirJump = (int)0;
		}
		HX_STACK_LINE(223)
		this->controls();
		HX_STACK_LINE(225)
		::Bars tmp5 = this->healthBar;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		Float tmp6 = this->maxHealth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		tmp5->setMaxValue(tmp6);
		HX_STACK_LINE(226)
		::Bars tmp7 = this->healthBar;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		Float tmp8 = this->health;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		tmp7->setCurrentValue(tmp8,null());
		HX_STACK_LINE(227)
		::Bars tmp9 = this->healthBar;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		tmp9->update();
		HX_STACK_LINE(228)
		::Bars tmp10 = this->batteryBar;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(228)
		int tmp11 = this->maxBattery;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(228)
		tmp10->setMaxValue(tmp11);
		HX_STACK_LINE(229)
		::Bars tmp12 = this->batteryBar;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(229)
		int tmp13 = this->battery;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		tmp12->setCurrentValue(tmp13,null());
		HX_STACK_LINE(230)
		::Bars tmp14 = this->batteryBar;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(230)
		tmp14->update();
		HX_STACK_LINE(231)
		::flixel::addons::weapon::FlxWeapon tmp15 = this->weapon;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(231)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(231)
		if ((tmp16)){
			HX_STACK_LINE(232)
			::WeaponAttribute tmp17 = this->weaponAttribute;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(232)
			::WeaponType tmp18 = tmp17->type;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(232)
			bool tmp19 = (tmp18 == ::WeaponType_obj::Handgun);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(232)
			if ((tmp19)){
				HX_STACK_LINE(233)
				::Bars tmp20 = this->ammoBar;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(233)
				int tmp21 = this->maxHandgunBullet;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(233)
				tmp20->setMaxValue(tmp21);
				HX_STACK_LINE(234)
				::Bars tmp22 = this->ammoBar;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(234)
				int tmp23 = this->handgunBullet;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(234)
				tmp22->setCurrentValue(tmp23,HX_HCSTRING("Handgun","\x51","\x1a","\x23","\x13"));
			}
			else{
				HX_STACK_LINE(236)
				::WeaponAttribute tmp20 = this->weaponAttribute;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(236)
				::WeaponType tmp21 = tmp20->type;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(236)
				bool tmp22 = (tmp21 == ::WeaponType_obj::Shotgun);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(236)
				if ((tmp22)){
					HX_STACK_LINE(237)
					::Bars tmp23 = this->ammoBar;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(237)
					int tmp24 = this->maxShotgunBullet;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(237)
					tmp23->setMaxValue(tmp24);
					HX_STACK_LINE(238)
					::Bars tmp25 = this->ammoBar;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(238)
					int tmp26 = this->shotgunBullet;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(238)
					tmp25->setCurrentValue(tmp26,HX_HCSTRING("Shotgun","\xa6","\xb9","\x08","\x47"));
				}
				else{
					HX_STACK_LINE(240)
					::WeaponAttribute tmp23 = this->weaponAttribute;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(240)
					::WeaponType tmp24 = tmp23->type;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(240)
					bool tmp25 = (tmp24 == ::WeaponType_obj::Rifle);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(240)
					if ((tmp25)){
						HX_STACK_LINE(241)
						::Bars tmp26 = this->ammoBar;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(241)
						int tmp27 = this->maxRifleBullet;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(241)
						tmp26->setMaxValue(tmp27);
						HX_STACK_LINE(242)
						::Bars tmp28 = this->ammoBar;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(242)
						int tmp29 = this->rifleBullet;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(242)
						tmp28->setCurrentValue(tmp29,HX_HCSTRING("Rifle","\xe8","\xbc","\x90","\x7c"));
					}
					else{
						HX_STACK_LINE(244)
						::WeaponAttribute tmp26 = this->weaponAttribute;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(244)
						::WeaponType tmp27 = tmp26->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(244)
						bool tmp28 = (tmp27 == ::WeaponType_obj::SMG);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(244)
						if ((tmp28)){
							HX_STACK_LINE(245)
							::Bars tmp29 = this->ammoBar;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(245)
							int tmp30 = this->maxSmgBullet;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(245)
							tmp29->setMaxValue(tmp30);
							HX_STACK_LINE(246)
							::Bars tmp31 = this->ammoBar;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(246)
							int tmp32 = this->smgBullet;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(246)
							tmp31->setCurrentValue(tmp32,HX_HCSTRING("SMG","\x6d","\x3e","\x3f","\x00"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(249)
		::Bars tmp17 = this->ammoBar;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(249)
		tmp17->update();
		HX_STACK_LINE(251)
		int tmp18 = this->exp;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(251)
		int tmp19 = this->maxExp;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(251)
		bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(251)
		if ((tmp20)){
			HX_STACK_LINE(252)
			::Bars tmp21 = this->expBar;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(252)
			int tmp22 = this->maxExp;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(252)
			tmp21->setMaxValue(tmp22);
			HX_STACK_LINE(253)
			::Bars tmp23 = this->expBar;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(253)
			int tmp24 = this->exp;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(253)
			tmp23->setCurrentValue(tmp24,null());
			HX_STACK_LINE(254)
			::Bars tmp25 = this->expBar;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(254)
			tmp25->update();
		}
		else{
			HX_STACK_LINE(256)
			this->levelUp();
		}
		HX_STACK_LINE(259)
		::flixel::addons::weapon::FlxWeapon tmp21 = this->weaponToRemove;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(259)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(259)
		if ((tmp22)){
			HX_STACK_LINE(260)
			bool readyToRemove = true;		HX_STACK_VAR(readyToRemove,"readyToRemove");
			HX_STACK_LINE(261)
			::flixel::addons::weapon::FlxWeapon tmp23 = this->weaponToRemove;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(261)
			::flixel::group::FlxTypedGroupIterator tmp24 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp23->group->members,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(261)
			for(::cpp::FastIterator_obj< ::flixel::addons::weapon::FlxBullet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::weapon::FlxBullet >(tmp24);  __it->hasNext(); ){
				::flixel::addons::weapon::FlxBullet bullet = __it->next();
				{
					HX_STACK_LINE(262)
					bool tmp25 = bullet->alive;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(262)
					if ((tmp25)){
						HX_STACK_LINE(262)
						readyToRemove = false;
					}
				}
;
			}
			HX_STACK_LINE(264)
			bool tmp25 = readyToRemove;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(264)
			if ((tmp25)){
				HX_STACK_LINE(265)
				::flixel::FlxState tmp26 = this->gameState;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(265)
				::flixel::addons::weapon::FlxWeapon tmp27 = this->weaponToRemove;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(265)
				::flixel::group::FlxTypedGroup tmp28 = tmp27->group;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(265)
				tmp26->remove(tmp28,null());
			}
		}
		HX_STACK_LINE(269)
		this->super::update();
		HX_STACK_LINE(271)
		::flixel::FlxSprite tmp23 = this->weaponSprite;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(271)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(271)
		if ((tmp24)){
			HX_STACK_LINE(272)
			::flixel::FlxSprite tmp25 = this->weaponSprite;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(272)
			Float tmp26 = this->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(272)
			Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(272)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(272)
			Float tmp29 = this->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(272)
			tmp25->setPosition(tmp28,tmp29);
		}
	}
return null();
}


Void Player_obj::playAnimation( ){
{
		HX_STACK_FRAME("Player","playAnimation",0xccc05cc3,"Player.playAnimation","Player.hx",276,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		if ((tmp2)){
			HX_STACK_LINE(278)
			::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			::flixel::FlxSprite tmp4 = this->weaponSprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(278)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			if ((tmp5)){
				HX_STACK_LINE(278)
				tmp6 = HX_HCSTRING("-weapon","\xc9","\x76","\xa9","\x4b");
			}
			else{
				HX_STACK_LINE(278)
				tmp6 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(278)
			::String tmp7 = (HX_HCSTRING("move","\x11","\xe3","\x60","\x48") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(278)
			tmp3->play(tmp7,null(),null());
		}
		else{
			HX_STACK_LINE(279)
			::flixel::util::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			if ((tmp5)){
				HX_STACK_LINE(280)
				::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				::flixel::animation::FlxAnimation tmp7 = tmp6->_animations->get(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				bool tmp8 = tmp7->finished;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				if ((tmp8)){
					HX_STACK_LINE(281)
					::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					::flixel::FlxSprite tmp10 = this->weaponSprite;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					if ((tmp11)){
						HX_STACK_LINE(281)
						tmp12 = HX_HCSTRING("-weapon","\xc9","\x76","\xa9","\x4b");
					}
					else{
						HX_STACK_LINE(281)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(281)
					::String tmp13 = (HX_HCSTRING("stand","\xd6","\x70","\x0b","\x84") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(281)
					tmp9->play(tmp13,null(),null());
				}
			}
		}
		HX_STACK_LINE(283)
		::flixel::util::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		if ((tmp5)){
			HX_STACK_LINE(284)
			::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			::flixel::FlxSprite tmp7 = this->weaponSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(284)
			::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(284)
			if ((tmp8)){
				HX_STACK_LINE(284)
				tmp9 = HX_HCSTRING("-weapon","\xc9","\x76","\xa9","\x4b");
			}
			else{
				HX_STACK_LINE(284)
				tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(284)
			::String tmp10 = (HX_HCSTRING("jump","\xee","\xc4","\x69","\x46") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(284)
			tmp6->play(tmp10,null(),null());
		}
		else{
			HX_STACK_LINE(285)
			::flixel::util::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(285)
			if ((tmp8)){
				HX_STACK_LINE(286)
				::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(286)
				::flixel::FlxSprite tmp10 = this->weaponSprite;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(286)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(286)
				::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(286)
				if ((tmp11)){
					HX_STACK_LINE(286)
					tmp12 = HX_HCSTRING("-weapon","\xc9","\x76","\xa9","\x4b");
				}
				else{
					HX_STACK_LINE(286)
					tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(286)
				::String tmp13 = (HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(286)
				tmp9->play(tmp13,null(),null());
			}
		}
		HX_STACK_LINE(289)
		::flixel::animation::FlxAnimation tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			::flixel::FlxSprite tmp7 = this->weaponSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			::flixel::animation::FlxAnimationController _this = tmp7->animation;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(289)
			::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(289)
			bool tmp8 = (_this->_curAnim != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			if ((tmp9)){
				HX_STACK_LINE(289)
				Float tmp11 = _this->_curAnim->delay;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(289)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(289)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(289)
				tmp10 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(289)
				tmp10 = false;
			}
			HX_STACK_LINE(289)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			if ((tmp10)){
				HX_STACK_LINE(289)
				bool tmp12 = _this->_curAnim->looped;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(289)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(289)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(289)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(289)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(289)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(289)
				if ((tmp17)){
					HX_STACK_LINE(289)
					bool tmp18 = _this->_curAnim->finished;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(289)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(289)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(289)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(289)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(289)
					tmp11 = !(tmp22);
				}
				else{
					HX_STACK_LINE(289)
					tmp11 = true;
				}
			}
			else{
				HX_STACK_LINE(289)
				tmp11 = false;
			}
			HX_STACK_LINE(289)
			if ((tmp11)){
				HX_STACK_LINE(289)
				anim = _this->_curAnim;
			}
			HX_STACK_LINE(289)
			tmp6 = anim;
		}
		HX_STACK_LINE(289)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(289)
		if ((tmp7)){
			HX_STACK_LINE(290)
			::flixel::animation::FlxAnimation tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				::flixel::FlxSprite tmp9 = this->weaponSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				::flixel::animation::FlxAnimationController _this = tmp9->animation;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(290)
				::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(290)
				bool tmp10 = (_this->_curAnim != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(290)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(290)
				if ((tmp11)){
					HX_STACK_LINE(290)
					Float tmp13 = _this->_curAnim->delay;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(290)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(290)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(290)
					tmp12 = (tmp15 > (int)0);
				}
				else{
					HX_STACK_LINE(290)
					tmp12 = false;
				}
				HX_STACK_LINE(290)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(290)
				if ((tmp12)){
					HX_STACK_LINE(290)
					bool tmp14 = _this->_curAnim->looped;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(290)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(290)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(290)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(290)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(290)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(290)
					if ((tmp19)){
						HX_STACK_LINE(290)
						bool tmp20 = _this->_curAnim->finished;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(290)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(290)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(290)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(290)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(290)
						tmp13 = !(tmp24);
					}
					else{
						HX_STACK_LINE(290)
						tmp13 = true;
					}
				}
				else{
					HX_STACK_LINE(290)
					tmp13 = false;
				}
				HX_STACK_LINE(290)
				if ((tmp13)){
					HX_STACK_LINE(290)
					anim = _this->_curAnim;
				}
				HX_STACK_LINE(290)
				tmp8 = anim;
			}
			HX_STACK_LINE(290)
			::String tmp9 = tmp8->name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			bool tmp10 = (tmp9 == HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(290)
			if ((tmp10)){
				HX_STACK_LINE(291)
				::flixel::animation::FlxAnimation tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::flixel::FlxSprite tmp12 = this->weaponSprite;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(291)
					::flixel::animation::FlxAnimationController _this = tmp12->animation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(291)
					::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(291)
					bool tmp13 = (_this->_curAnim != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(291)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(291)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(291)
					if ((tmp14)){
						HX_STACK_LINE(291)
						Float tmp16 = _this->_curAnim->delay;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(291)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(291)
						Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(291)
						tmp15 = (tmp18 > (int)0);
					}
					else{
						HX_STACK_LINE(291)
						tmp15 = false;
					}
					HX_STACK_LINE(291)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(291)
					if ((tmp15)){
						HX_STACK_LINE(291)
						bool tmp17 = _this->_curAnim->looped;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(291)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(291)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(291)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(291)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(291)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(291)
						if ((tmp22)){
							HX_STACK_LINE(291)
							bool tmp23 = _this->_curAnim->finished;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(291)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(291)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(291)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(291)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(291)
							tmp16 = !(tmp27);
						}
						else{
							HX_STACK_LINE(291)
							tmp16 = true;
						}
					}
					else{
						HX_STACK_LINE(291)
						tmp16 = false;
					}
					HX_STACK_LINE(291)
					if ((tmp16)){
						HX_STACK_LINE(291)
						anim = _this->_curAnim;
					}
					HX_STACK_LINE(291)
					tmp11 = anim;
				}
				HX_STACK_LINE(291)
				int tmp12 = tmp11->curFrame;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(291)
				int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::flixel::FlxSprite tmp14 = this->weaponSprite;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(291)
					::haxe::ds::StringMap tmp15 = tmp14->animation->_animations;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(291)
					::WeaponAttribute tmp16 = this->weaponAttribute;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(291)
					Dynamic tmp17 = tmp16->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(291)
					::flixel::animation::FlxAnimation tmp18 = tmp15->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(291)
					::flixel::animation::FlxAnimation _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(291)
					tmp13 = _this->_frames->length;
				}
				HX_STACK_LINE(291)
				bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(291)
				if ((tmp14)){
					HX_STACK_LINE(292)
					::flixel::FlxSprite tmp15 = this->weaponSprite;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(292)
					::WeaponAttribute tmp16 = this->weaponAttribute;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(292)
					Dynamic tmp17 = tmp16->animations->__get((int)0).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(292)
					tmp15->animation->play(tmp17,null(),null());
					HX_STACK_LINE(293)
					::flixel::animation::FlxAnimation tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(293)
					{
						HX_STACK_LINE(293)
						::flixel::animation::FlxAnimationController tmp19 = this->animation;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(293)
						::flixel::animation::FlxAnimationController _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(293)
						::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
						HX_STACK_LINE(293)
						bool tmp20 = (_this->_curAnim != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(293)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(293)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(293)
						if ((tmp21)){
							HX_STACK_LINE(293)
							Float tmp23 = _this->_curAnim->delay;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(293)
							Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(293)
							Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(293)
							tmp22 = (tmp25 > (int)0);
						}
						else{
							HX_STACK_LINE(293)
							tmp22 = false;
						}
						HX_STACK_LINE(293)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(293)
						if ((tmp22)){
							HX_STACK_LINE(293)
							bool tmp24 = _this->_curAnim->looped;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(293)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(293)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(293)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(293)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(293)
							bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(293)
							if ((tmp29)){
								HX_STACK_LINE(293)
								bool tmp30 = _this->_curAnim->finished;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(293)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(293)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(293)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(293)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(293)
								tmp23 = !(tmp34);
							}
							else{
								HX_STACK_LINE(293)
								tmp23 = true;
							}
						}
						else{
							HX_STACK_LINE(293)
							tmp23 = false;
						}
						HX_STACK_LINE(293)
						if ((tmp23)){
							HX_STACK_LINE(293)
							anim = _this->_curAnim;
						}
						HX_STACK_LINE(293)
						tmp18 = anim;
					}
					HX_STACK_LINE(293)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(293)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(293)
					if ((tmp19)){
						HX_STACK_LINE(293)
						::flixel::animation::FlxAnimation tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(293)
						{
							HX_STACK_LINE(293)
							::flixel::animation::FlxAnimationController tmp22 = this->animation;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(293)
							::flixel::animation::FlxAnimationController tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(293)
							::flixel::animation::FlxAnimationController _this = tmp23;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(293)
							::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
							HX_STACK_LINE(293)
							bool tmp24 = (_this->_curAnim != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(293)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(293)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(293)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(293)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(293)
							if ((tmp28)){
								HX_STACK_LINE(293)
								Float tmp29 = _this->_curAnim->delay;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(293)
								Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(293)
								Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(293)
								Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(293)
								bool tmp33 = (tmp32 > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(293)
								tmp27 = tmp33;
							}
							else{
								HX_STACK_LINE(293)
								tmp27 = false;
							}
							HX_STACK_LINE(293)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(293)
							bool tmp30 = tmp27;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(293)
							if ((tmp30)){
								HX_STACK_LINE(293)
								bool tmp31 = _this->_curAnim->looped;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(293)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(293)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(293)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(293)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(293)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(293)
								bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(293)
								bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(293)
								bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(293)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(293)
								if ((tmp40)){
									HX_STACK_LINE(293)
									bool tmp41 = _this->_curAnim->finished;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(293)
									bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(293)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(293)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(293)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(293)
									bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(293)
									bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(293)
									bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(293)
									tmp29 = tmp48;
								}
								else{
									HX_STACK_LINE(293)
									tmp29 = true;
								}
							}
							else{
								HX_STACK_LINE(293)
								tmp29 = false;
							}
							HX_STACK_LINE(293)
							bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(293)
							if ((tmp31)){
								HX_STACK_LINE(293)
								anim = _this->_curAnim;
							}
							HX_STACK_LINE(293)
							tmp21 = anim;
						}
						HX_STACK_LINE(293)
						::String tmp22 = tmp21->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(293)
						tmp20 = (tmp22 == HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"));
					}
					else{
						HX_STACK_LINE(293)
						tmp20 = false;
					}
					HX_STACK_LINE(293)
					if ((tmp20)){
						HX_STACK_LINE(294)
						::flixel::animation::FlxAnimation tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							::flixel::animation::FlxAnimationController tmp22 = this->animation;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(294)
							::flixel::animation::FlxAnimationController _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(294)
							::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
							HX_STACK_LINE(294)
							bool tmp23 = (_this->_curAnim != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(294)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(294)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(294)
							if ((tmp24)){
								HX_STACK_LINE(294)
								Float tmp26 = _this->_curAnim->delay;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(294)
								Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(294)
								Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(294)
								tmp25 = (tmp28 > (int)0);
							}
							else{
								HX_STACK_LINE(294)
								tmp25 = false;
							}
							HX_STACK_LINE(294)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(294)
							if ((tmp25)){
								HX_STACK_LINE(294)
								bool tmp27 = _this->_curAnim->looped;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(294)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(294)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(294)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(294)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(294)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(294)
								if ((tmp32)){
									HX_STACK_LINE(294)
									bool tmp33 = _this->_curAnim->finished;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(294)
									bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(294)
									bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(294)
									bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(294)
									bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(294)
									tmp26 = !(tmp37);
								}
								else{
									HX_STACK_LINE(294)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(294)
								tmp26 = false;
							}
							HX_STACK_LINE(294)
							if ((tmp26)){
								HX_STACK_LINE(294)
								anim = _this->_curAnim;
							}
							HX_STACK_LINE(294)
							tmp21 = anim;
						}
						HX_STACK_LINE(294)
						tmp21->set_curFrame((int)1);
					}
					HX_STACK_LINE(296)
					int tmp21 = this->facing;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(296)
					bool tmp22 = (tmp21 == (int)16);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(296)
					if ((tmp22)){
						HX_STACK_LINE(297)
						::flixel::FlxSprite tmp23 = this->weaponSprite;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(297)
						tmp23->offset->set_x((int)-28);
					}
					HX_STACK_LINE(299)
					int tmp23 = this->facing;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(299)
					bool tmp24 = (tmp23 == (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(299)
					if ((tmp24)){
						HX_STACK_LINE(300)
						::flixel::FlxSprite tmp25 = this->weaponSprite;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(300)
						tmp25->offset->set_x((int)1);
					}
				}
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,playAnimation,(void))

Void Player_obj::controls( ){
{
		HX_STACK_FRAME("Player","controls",0xc9328d03,"Player.controls","Player.hx",308,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		bool tmp = this->controllable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		if ((tmp)){
			HX_STACK_LINE(310)
			Float tmp1 = this->_jumpDelayLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				Float tmp3 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				hx::SubEq(this->_jumpDelayLeft,tmp3);
			}
			HX_STACK_LINE(313)
			::flixel::ui::FlxVirtualPad tmp3 = this->vPad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			tmp3->buttonA->set_status((int)0);
			HX_STACK_LINE(314)
			::flixel::ui::FlxVirtualPad tmp4 = this->vPad;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			tmp4->buttonB->set_status((int)0);
			HX_STACK_LINE(315)
			::flixel::ui::FlxVirtualPad tmp5 = this->vPad;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			tmp5->buttonLeft->set_status((int)0);
			HX_STACK_LINE(316)
			::flixel::ui::FlxVirtualPad tmp6 = this->vPad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			tmp6->buttonRight->set_status((int)0);
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(317)
				::flixel::input::touch::FlxTouchManager tmp7 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(317)
				Array< ::Dynamic > _g1 = tmp7->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(317)
				while((true)){
					HX_STACK_LINE(317)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(317)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(317)
					if ((tmp9)){
						HX_STACK_LINE(317)
						break;
					}
					HX_STACK_LINE(317)
					::flixel::input::touch::FlxTouch tmp10 = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(317)
					::flixel::input::touch::FlxTouch touch = tmp10;		HX_STACK_VAR(touch,"touch");
					HX_STACK_LINE(317)
					++(_g);
					HX_STACK_LINE(318)
					bool tmp11 = (touch->_current == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(318)
					if ((tmp11)){
						HX_STACK_LINE(319)
						::flixel::ui::FlxVirtualPad tmp12 = this->vPad;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(319)
						::flixel::ui::FlxButton tmp13 = tmp12->buttonA;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(319)
						::flixel::ui::FlxButton tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(319)
						bool tmp15 = touch->overlaps(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(319)
						if ((tmp16)){
							HX_STACK_LINE(319)
							tmp17 = this->_vPadJumpReleased;
						}
						else{
							HX_STACK_LINE(319)
							tmp17 = false;
						}
						HX_STACK_LINE(319)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(319)
						if ((tmp17)){
							HX_STACK_LINE(319)
							int tmp19 = this->touching;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(319)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(319)
							int tmp21 = (int(tmp20) & int((int)4096));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(319)
							int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(319)
							bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(319)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(319)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(319)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(319)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(319)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(319)
							if ((tmp28)){
								HX_STACK_LINE(319)
								int tmp29 = this->_currentAirJump;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(319)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(319)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(319)
								int tmp32 = this->airJumpLimit;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(319)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(319)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(319)
								tmp18 = (tmp31 < tmp34);
							}
							else{
								HX_STACK_LINE(319)
								tmp18 = true;
							}
						}
						else{
							HX_STACK_LINE(319)
							tmp18 = false;
						}
						HX_STACK_LINE(319)
						if ((tmp18)){
							HX_STACK_LINE(320)
							Float tmp19 = this->_jumpDelayLeft;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(320)
							bool tmp20 = (tmp19 <= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(320)
							if ((tmp20)){
								HX_STACK_LINE(321)
								int tmp21 = this->touching;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(321)
								int tmp22 = (int(tmp21) & int((int)4096));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(321)
								bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(321)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(321)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(321)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(321)
								if ((tmp25)){
									HX_STACK_LINE(321)
									int tmp27 = this->_currentAirJump;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(321)
									int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(321)
									int tmp29 = this->airJumpLimit;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(321)
									int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(321)
									tmp26 = (tmp28 < tmp30);
								}
								else{
									HX_STACK_LINE(321)
									tmp26 = false;
								}
								HX_STACK_LINE(321)
								if ((tmp26)){
									HX_STACK_LINE(321)
									(this->_currentAirJump)++;
								}
								HX_STACK_LINE(322)
								Float tmp27 = this->_jumpDelay;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(322)
								this->_jumpDelayLeft = tmp27;
								HX_STACK_LINE(323)
								this->jump();
								HX_STACK_LINE(324)
								this->_vPadJumpReleased = false;
							}
						}
					}
					HX_STACK_LINE(328)
					bool tmp12 = (touch->_current > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(328)
					if ((tmp12)){
						HX_STACK_LINE(329)
						::flixel::ui::FlxVirtualPad tmp13 = this->vPad;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(329)
						::flixel::util::FlxPoint tmp14 = touch->getScreenPosition(null(),null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(329)
						bool tmp15 = tmp13->buttonLeft->overlapsPoint(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(329)
						if ((tmp15)){
							HX_STACK_LINE(329)
							this->moveLeft();
						}
						HX_STACK_LINE(330)
						::flixel::ui::FlxVirtualPad tmp16 = this->vPad;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(330)
						::flixel::util::FlxPoint tmp17 = touch->getScreenPosition(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(330)
						bool tmp18 = tmp16->buttonRight->overlapsPoint(tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(330)
						if ((tmp18)){
							HX_STACK_LINE(330)
							this->moveRight();
						}
						HX_STACK_LINE(331)
						::flixel::ui::FlxVirtualPad tmp19 = this->vPad;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(331)
						::flixel::util::FlxPoint tmp20 = touch->getScreenPosition(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(331)
						bool tmp21 = tmp19->buttonB->overlapsPoint(tmp20,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(331)
						if ((tmp21)){
							HX_STACK_LINE(331)
							this->shoot();
						}
					}
					HX_STACK_LINE(333)
					bool tmp13 = (touch->_current == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(333)
					if ((tmp13)){
						HX_STACK_LINE(334)
						::flixel::ui::FlxVirtualPad tmp14 = this->vPad;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(334)
						int tmp15 = tmp14->buttonA->status;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(334)
						bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(334)
						if ((tmp16)){
							HX_STACK_LINE(334)
							this->_vPadJumpReleased = true;
						}
					}
				}
			}
			HX_STACK_LINE(339)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			int tmp9 = tmp8->pressed->checkStatus;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(339)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(339)
			bool tmp11 = tmp7->checkStatus((int)39,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(339)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(339)
			if ((tmp11)){
				HX_STACK_LINE(339)
				::flixel::input::keyboard::FlxKeyboard tmp13 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(339)
				::flixel::input::keyboard::FlxKeyboard tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(339)
				::flixel::input::keyboard::FlxKeyboard tmp15 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				::flixel::input::keyboard::FlxKeyboard tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(339)
				int tmp17 = tmp16->pressed->checkStatus;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(339)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				tmp12 = tmp14->checkStatus((int)37,tmp19);
			}
			else{
				HX_STACK_LINE(339)
				tmp12 = false;
			}
			HX_STACK_LINE(339)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(339)
			if ((tmp13)){
				HX_STACK_LINE(340)
				::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(340)
				::flixel::input::keyboard::FlxKeyboard tmp15 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(340)
				int tmp16 = tmp15->pressed->checkStatus;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(340)
				bool tmp17 = tmp14->checkStatus((int)37,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(340)
				if ((tmp17)){
					HX_STACK_LINE(340)
					this->moveLeft();
				}
				else{
					HX_STACK_LINE(341)
					::flixel::input::keyboard::FlxKeyboard tmp18 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(341)
					::flixel::input::keyboard::FlxKeyboard tmp19 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(341)
					int tmp20 = tmp19->pressed->checkStatus;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(341)
					bool tmp21 = tmp18->checkStatus((int)39,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(341)
					if ((tmp21)){
						HX_STACK_LINE(341)
						this->moveRight();
					}
				}
			}
			HX_STACK_LINE(343)
			::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(343)
			::flixel::input::keyboard::FlxKeyboard tmp15 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(343)
			int tmp16 = tmp15->pressed->checkStatus;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(343)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(343)
			bool tmp18 = tmp14->checkStatus((int)83,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(343)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(343)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(343)
			if ((tmp19)){
				HX_STACK_LINE(343)
				::flixel::input::gamepad::FlxGamepadManager tmp21 = ::flixel::FlxG_obj::gamepads;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(343)
				::flixel::input::gamepad::FlxGamepadManager tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(343)
				tmp20 = tmp22->anyPressed((int)3);
			}
			else{
				HX_STACK_LINE(343)
				tmp20 = true;
			}
			HX_STACK_LINE(343)
			if ((tmp20)){
				HX_STACK_LINE(343)
				this->shoot();
			}
			HX_STACK_LINE(345)
			int tmp21 = this->touching;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(345)
			int tmp22 = (int(tmp21) & int((int)4096));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(345)
			bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(345)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(345)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(345)
			if ((tmp24)){
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp26 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp29 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(345)
				int tmp32 = tmp31->pressed->checkStatus;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(345)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(345)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(345)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(345)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(345)
				tmp25 = tmp28->checkStatus((int)40,tmp36);
			}
			else{
				HX_STACK_LINE(345)
				tmp25 = false;
			}
			HX_STACK_LINE(345)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(345)
			if ((tmp25)){
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp27 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp29 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(345)
				::flixel::input::keyboard::FlxKeyboard tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(345)
				int tmp31 = tmp30->justPressed->checkStatus;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(345)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(345)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(345)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(345)
				bool tmp35 = tmp28->checkStatus((int)68,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(345)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(345)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(345)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(345)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(345)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(345)
				if ((tmp40)){
					HX_STACK_LINE(345)
					::flixel::input::gamepad::FlxGamepadManager tmp41 = ::flixel::FlxG_obj::gamepads;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(345)
					::flixel::input::gamepad::FlxGamepadManager tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(345)
					::flixel::input::gamepad::FlxGamepadManager tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(345)
					tmp26 = tmp43->anyJustPressed((int)0);
				}
				else{
					HX_STACK_LINE(345)
					tmp26 = true;
				}
			}
			else{
				HX_STACK_LINE(345)
				tmp26 = false;
			}
			HX_STACK_LINE(345)
			if ((tmp26)){
				HX_STACK_LINE(346)
				bool tmp27 = this->noDrop;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(346)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(346)
				if ((tmp28)){
					HX_STACK_LINE(347)
					::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(347)
					Float tmp29 = (_g->y + (int)5);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(347)
					_g->set_y(tmp29);
				}
			}
			else{
				HX_STACK_LINE(348)
				::flixel::input::keyboard::FlxKeyboard tmp27 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(348)
				::flixel::input::keyboard::FlxKeyboard tmp28 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(348)
				int tmp29 = tmp28->justPressed->checkStatus;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(348)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(348)
				bool tmp31 = tmp27->checkStatus((int)68,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(348)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(348)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(348)
				bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(348)
				if ((tmp33)){
					HX_STACK_LINE(348)
					::flixel::input::gamepad::FlxGamepadManager tmp35 = ::flixel::FlxG_obj::gamepads;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(348)
					::flixel::input::gamepad::FlxGamepadManager tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(348)
					::flixel::input::gamepad::FlxGamepadManager tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(348)
					tmp34 = tmp37->anyJustPressed((int)0);
				}
				else{
					HX_STACK_LINE(348)
					tmp34 = true;
				}
				HX_STACK_LINE(348)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(348)
				if ((tmp34)){
					HX_STACK_LINE(349)
					int tmp36 = this->touching;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(349)
					int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(349)
					int tmp38 = (int(tmp37) & int((int)4096));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(349)
					int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(349)
					bool tmp40 = (tmp39 > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(349)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(349)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(349)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(349)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(349)
					if ((tmp45)){
						HX_STACK_LINE(349)
						int tmp46 = this->_currentAirJump;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(349)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(349)
						int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(349)
						int tmp49 = this->airJumpLimit;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(349)
						int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(349)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(349)
						tmp35 = (tmp48 < tmp51);
					}
					else{
						HX_STACK_LINE(349)
						tmp35 = true;
					}
				}
				else{
					HX_STACK_LINE(348)
					tmp35 = false;
				}
				HX_STACK_LINE(348)
				if ((tmp35)){
					HX_STACK_LINE(350)
					Float tmp36 = this->_jumpDelayLeft;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(350)
					bool tmp37 = (tmp36 <= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(350)
					if ((tmp37)){
						HX_STACK_LINE(351)
						int tmp38 = this->touching;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(351)
						int tmp39 = (int(tmp38) & int((int)4096));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(351)
						bool tmp40 = (tmp39 > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(351)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(351)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(351)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(351)
						if ((tmp42)){
							HX_STACK_LINE(351)
							int tmp44 = this->_currentAirJump;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(351)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(351)
							int tmp46 = this->airJumpLimit;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(351)
							int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(351)
							tmp43 = (tmp45 < tmp47);
						}
						else{
							HX_STACK_LINE(351)
							tmp43 = false;
						}
						HX_STACK_LINE(351)
						if ((tmp43)){
							HX_STACK_LINE(351)
							(this->_currentAirJump)++;
						}
						HX_STACK_LINE(352)
						Float tmp44 = this->_jumpDelay;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(352)
						this->_jumpDelayLeft = tmp44;
						HX_STACK_LINE(353)
						this->jump();
						HX_STACK_LINE(354)
						this->_vPadJumpReleased = false;
					}
				}
			}
			HX_STACK_LINE(359)
			int tmp27 = this->touching;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(359)
			int tmp28 = (int(tmp27) & int((int)4096));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(359)
			bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(359)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(359)
			if ((tmp29)){
				HX_STACK_LINE(359)
				bool tmp31 = this->noDrop;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(359)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(359)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(359)
				tmp30 = !(tmp33);
			}
			else{
				HX_STACK_LINE(359)
				tmp30 = false;
			}
			HX_STACK_LINE(359)
			if ((tmp30)){
				HX_STACK_LINE(360)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(360)
				{
					HX_STACK_LINE(360)
					::flixel::input::mouse::FlxMouse tmp32 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(360)
					::flixel::input::mouse::FlxMouseButton _this = tmp32->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(360)
					bool tmp33 = (_this->current == (int)2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(360)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(360)
					if ((tmp34)){
						HX_STACK_LINE(360)
						tmp31 = (_this->current == (int)-2);
					}
					else{
						HX_STACK_LINE(360)
						tmp31 = true;
					}
				}
				HX_STACK_LINE(360)
				if ((tmp31)){
					HX_STACK_LINE(361)
					::flixel::input::mouse::FlxMouse tmp32 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(361)
					Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(361)
					::flixel::input::mouse::FlxMouse tmp34 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(361)
					Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(361)
					::flixel::util::FlxPoint tmp36 = ::flixel::util::FlxPoint_obj::__new(tmp33,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(361)
					this->decentGesture = tmp36;
				}
				else{
					HX_STACK_LINE(363)
					::flixel::input::mouse::FlxMouse tmp32 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(363)
					int tmp33 = tmp32->_leftButton->current;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(363)
					bool tmp34 = (tmp33 > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(363)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(363)
					if ((tmp34)){
						HX_STACK_LINE(363)
						::flixel::util::FlxPoint tmp36 = this->decentGesture;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(363)
						::flixel::util::FlxPoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(363)
						tmp35 = (tmp37 != null());
					}
					else{
						HX_STACK_LINE(363)
						tmp35 = false;
					}
					HX_STACK_LINE(363)
					if ((tmp35)){
						HX_STACK_LINE(364)
						::flixel::util::FlxPoint tmp36 = this->decentGesture;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(364)
						Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(364)
						Float tmp38 = (tmp37 + (int)50);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(364)
						::flixel::input::mouse::FlxMouse tmp39 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(364)
						Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(364)
						bool tmp41 = (tmp38 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(364)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(364)
						if ((tmp41)){
							HX_STACK_LINE(364)
							::flixel::util::FlxPoint tmp43 = this->decentGesture;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(364)
							::flixel::util::FlxPoint tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(364)
							Float tmp45 = tmp44->x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(364)
							Float tmp46 = (tmp45 - (int)50);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(364)
							Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(364)
							::flixel::input::mouse::FlxMouse tmp48 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(364)
							::flixel::input::mouse::FlxMouse tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(364)
							Float tmp50 = tmp49->x;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(364)
							tmp42 = (tmp47 < tmp50);
						}
						else{
							HX_STACK_LINE(364)
							tmp42 = false;
						}
						HX_STACK_LINE(364)
						if ((tmp42)){
							HX_STACK_LINE(365)
							::flixel::util::FlxPoint tmp43 = this->decentGesture;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(365)
							Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(365)
							Float tmp45 = (tmp44 + (int)35);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(365)
							::flixel::input::mouse::FlxMouse tmp46 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(365)
							Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(365)
							bool tmp48 = (tmp45 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(365)
							if ((tmp48)){
								HX_STACK_LINE(366)
								{
									HX_STACK_LINE(366)
									::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(366)
									Float tmp49 = (_g->y + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(366)
									_g->set_y(tmp49);
								}
								HX_STACK_LINE(367)
								this->decentGesture = null();
							}
						}
					}
					else{
						HX_STACK_LINE(371)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							::flixel::input::mouse::FlxMouse tmp37 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(371)
							::flixel::input::mouse::FlxMouseButton _this = tmp37->_leftButton;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(371)
							bool tmp38 = (_this->current == (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(371)
							bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(371)
							if ((tmp39)){
								HX_STACK_LINE(371)
								tmp36 = (_this->current == (int)-2);
							}
							else{
								HX_STACK_LINE(371)
								tmp36 = true;
							}
						}
						HX_STACK_LINE(371)
						if ((tmp36)){
							HX_STACK_LINE(372)
							this->decentGesture = null();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(440)
			::flixel::ui::FlxVirtualPad tmp1 = this->vPad;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			tmp1->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,controls,(void))

Void Player_obj::moveLeft( ){
{
		HX_STACK_FRAME("Player","moveLeft",0x7bdd7a45,"Player.moveLeft","Player.hx",444,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		Float tmp3 = this->moveSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(445)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(445)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		tmp->set_x(tmp6);
		HX_STACK_LINE(446)
		this->set_facing((int)1);
		HX_STACK_LINE(447)
		::flixel::util::FlxPoint tmp7 = this->velocity;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		if ((tmp9)){
			HX_STACK_LINE(448)
			int tmp10 = this->facing;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(448)
			bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(448)
			if ((tmp11)){
				HX_STACK_LINE(449)
				::flixel::util::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(449)
				::flixel::util::FlxPoint _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(449)
				Float tmp13 = _g->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(449)
				Float tmp14 = this->moveSpeed;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(449)
				Float tmp15 = (tmp14 * ((Float).1));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(449)
				Float tmp16 = this->jumpPower;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(449)
				Float tmp17 = (tmp16 * ((Float).1));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(449)
				Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(449)
				Float tmp19 = (tmp13 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(449)
				_g->set_x(tmp19);
			}
		}
		HX_STACK_LINE(452)
		int tmp10 = this->touching;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(452)
		int tmp11 = (int(tmp10) & int((int)4096));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(452)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(452)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(452)
		if ((tmp12)){
			HX_STACK_LINE(452)
			::flixel::animation::FlxAnimation tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(452)
				::flixel::animation::FlxAnimationController tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(452)
				::flixel::animation::FlxAnimationController _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(452)
				::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(452)
				bool tmp17 = (_this->_curAnim != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(452)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(452)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(452)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(452)
				bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(452)
				if ((tmp21)){
					HX_STACK_LINE(452)
					Float tmp22 = _this->_curAnim->delay;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(452)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(452)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(452)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(452)
					bool tmp26 = (tmp25 > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(452)
					tmp20 = tmp26;
				}
				else{
					HX_STACK_LINE(452)
					tmp20 = false;
				}
				HX_STACK_LINE(452)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(452)
				bool tmp23 = tmp20;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(452)
				if ((tmp23)){
					HX_STACK_LINE(452)
					bool tmp24 = _this->_curAnim->looped;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(452)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(452)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(452)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(452)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(452)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(452)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(452)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(452)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(452)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(452)
					if ((tmp33)){
						HX_STACK_LINE(452)
						bool tmp34 = _this->_curAnim->finished;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(452)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(452)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(452)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(452)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(452)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(452)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(452)
						bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(452)
						tmp22 = tmp41;
					}
					else{
						HX_STACK_LINE(452)
						tmp22 = true;
					}
				}
				else{
					HX_STACK_LINE(452)
					tmp22 = false;
				}
				HX_STACK_LINE(452)
				bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(452)
				if ((tmp24)){
					HX_STACK_LINE(452)
					anim = _this->_curAnim;
				}
				HX_STACK_LINE(452)
				tmp14 = anim;
			}
			HX_STACK_LINE(452)
			int tmp15 = tmp14->curIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(452)
			int tmp16 = hx::Mod(tmp15,(int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(452)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(452)
			tmp13 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(452)
			tmp13 = false;
		}
		HX_STACK_LINE(452)
		if ((tmp13)){
			HX_STACK_LINE(452)
			::flixel::_system::FlxSound tmp14 = this->onMoveSound;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(452)
			tmp14->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(454)
		::flixel::FlxSprite tmp14 = this->weaponSprite;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(454)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(454)
		if ((tmp15)){
			HX_STACK_LINE(455)
			::flixel::FlxSprite tmp16 = this->weaponSprite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(455)
			int tmp17 = this->facing;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(455)
			tmp16->set_facing(tmp17);
			HX_STACK_LINE(456)
			::flixel::FlxSprite tmp18 = this->weaponSprite;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(456)
			tmp18->offset->set_x((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveLeft,(void))

Void Player_obj::moveRight( ){
{
		HX_STACK_FRAME("Player","moveRight",0x5cfa8fde,"Player.moveRight","Player.hx",460,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		::flixel::util::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(461)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(461)
		Float tmp3 = this->moveSpeed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(461)
		tmp->set_x(tmp5);
		HX_STACK_LINE(462)
		this->set_facing((int)16);
		HX_STACK_LINE(463)
		::flixel::util::FlxPoint tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		if ((tmp8)){
			HX_STACK_LINE(464)
			int tmp9 = this->facing;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(464)
			bool tmp10 = (tmp9 == (int)16);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(464)
			if ((tmp10)){
				HX_STACK_LINE(465)
				::flixel::util::FlxPoint tmp11 = this->velocity;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(465)
				::flixel::util::FlxPoint _g = tmp11;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(465)
				Float tmp12 = _g->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(465)
				Float tmp13 = this->moveSpeed;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(465)
				Float tmp14 = (tmp13 * ((Float).1));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(465)
				Float tmp15 = this->jumpPower;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(465)
				Float tmp16 = (tmp15 * ((Float).1));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(465)
				Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(465)
				Float tmp18 = (tmp12 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(465)
				_g->set_x(tmp18);
			}
		}
		HX_STACK_LINE(468)
		int tmp9 = this->touching;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(468)
		int tmp10 = (int(tmp9) & int((int)4096));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(468)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(468)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(468)
		if ((tmp11)){
			HX_STACK_LINE(468)
			::flixel::animation::FlxAnimation tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				::flixel::animation::FlxAnimationController tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(468)
				::flixel::animation::FlxAnimationController tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(468)
				::flixel::animation::FlxAnimationController _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(468)
				::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(468)
				bool tmp16 = (_this->_curAnim != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(468)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(468)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(468)
				bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(468)
				if ((tmp20)){
					HX_STACK_LINE(468)
					Float tmp21 = _this->_curAnim->delay;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(468)
					Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(468)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(468)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(468)
					bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(468)
					tmp19 = tmp25;
				}
				else{
					HX_STACK_LINE(468)
					tmp19 = false;
				}
				HX_STACK_LINE(468)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(468)
				bool tmp22 = tmp19;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(468)
				if ((tmp22)){
					HX_STACK_LINE(468)
					bool tmp23 = _this->_curAnim->looped;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(468)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(468)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(468)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(468)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(468)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(468)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(468)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(468)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(468)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(468)
					if ((tmp32)){
						HX_STACK_LINE(468)
						bool tmp33 = _this->_curAnim->finished;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(468)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(468)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(468)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(468)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(468)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(468)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(468)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(468)
						tmp21 = tmp40;
					}
					else{
						HX_STACK_LINE(468)
						tmp21 = true;
					}
				}
				else{
					HX_STACK_LINE(468)
					tmp21 = false;
				}
				HX_STACK_LINE(468)
				bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(468)
				if ((tmp23)){
					HX_STACK_LINE(468)
					anim = _this->_curAnim;
				}
				HX_STACK_LINE(468)
				tmp13 = anim;
			}
			HX_STACK_LINE(468)
			int tmp14 = tmp13->curIndex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(468)
			int tmp15 = hx::Mod(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(468)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(468)
			tmp12 = (tmp16 == (int)0);
		}
		else{
			HX_STACK_LINE(468)
			tmp12 = false;
		}
		HX_STACK_LINE(468)
		if ((tmp12)){
			HX_STACK_LINE(468)
			::flixel::_system::FlxSound tmp13 = this->onMoveSound;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(468)
			tmp13->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(470)
		::flixel::FlxSprite tmp13 = this->weaponSprite;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(470)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(470)
		if ((tmp14)){
			HX_STACK_LINE(471)
			::flixel::FlxSprite tmp15 = this->weaponSprite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(471)
			int tmp16 = this->facing;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(471)
			tmp15->set_facing(tmp16);
			HX_STACK_LINE(472)
			::flixel::FlxSprite tmp17 = this->weaponSprite;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(472)
			tmp17->offset->set_x((int)-28);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveRight,(void))

Void Player_obj::jump( ){
{
		HX_STACK_FRAME("Player","jump",0x1abc40fb,"Player.jump","Player.hx",476,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(477)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(477)
		Float tmp1 = this->jumpPower;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		tmp->set_y(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,jump,(void))

Void Player_obj::shoot( ){
{
		HX_STACK_FRAME("Player","shoot",0x70019132,"Player.shoot","Player.hx",481,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(482)
		::flixel::addons::weapon::FlxWeapon tmp = this->weapon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		if ((tmp1)){
			HX_STACK_LINE(482)
			tmp2 = this->checkBullet();
		}
		else{
			HX_STACK_LINE(482)
			tmp2 = false;
		}
		HX_STACK_LINE(482)
		if ((tmp2)){
			HX_STACK_LINE(483)
			int tmp3 = this->facing;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(483)
			bool tmp4 = (tmp3 == (int)16);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(483)
			if ((tmp4)){
				HX_STACK_LINE(484)
				::flixel::addons::weapon::FlxWeapon tmp5 = this->weapon;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(484)
				::WeaponAttribute tmp6 = this->weaponAttribute;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(484)
				Float tmp7 = tmp6->bulletOffsetWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(484)
				::WeaponAttribute tmp8 = this->weaponAttribute;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(484)
				Float tmp9 = tmp8->bulletOffsetHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(484)
				tmp5->setBulletOffset(tmp7,tmp9);
			}
			HX_STACK_LINE(485)
			int tmp5 = this->facing;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(485)
			bool tmp6 = (tmp5 == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(485)
			if ((tmp6)){
				HX_STACK_LINE(486)
				::flixel::addons::weapon::FlxWeapon tmp7 = this->weapon;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(486)
				::WeaponAttribute tmp8 = this->weaponAttribute;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(486)
				Float tmp9 = tmp8->bulletOffsetWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(486)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(486)
				::WeaponAttribute tmp11 = this->weaponAttribute;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(486)
				int tmp12 = tmp11->bulletWidth;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(486)
				Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(486)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(486)
				::WeaponAttribute tmp15 = this->weaponAttribute;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(486)
				Float tmp16 = tmp15->bulletOffsetHeight;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(486)
				tmp7->setBulletOffset(tmp14,tmp16);
			}
			HX_STACK_LINE(487)
			::flixel::addons::weapon::FlxWeapon tmp7 = this->weapon;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			int tmp8 = this->facing;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(487)
			bool tmp9 = (tmp8 == (int)16);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(487)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(487)
			if ((tmp9)){
				HX_STACK_LINE(487)
				tmp10 = (int)0;
			}
			else{
				HX_STACK_LINE(487)
				tmp10 = (int)180;
			}
			HX_STACK_LINE(487)
			bool tmp11 = tmp7->runFire((int)4,(int)0,(int)0,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(487)
			if ((tmp11)){
				HX_STACK_LINE(488)
				::WeaponAttribute tmp12 = this->weaponAttribute;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(488)
				tmp12->soundFXFire->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
				HX_STACK_LINE(489)
				int tmp13 = this->touching;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(489)
				int tmp14 = (int(tmp13) & int((int)4096));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(489)
				bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(489)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(489)
				if ((tmp15)){
					HX_STACK_LINE(489)
					::flixel::util::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(489)
					::flixel::util::FlxPoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(489)
					Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(489)
					tmp16 = (tmp19 == (int)0);
				}
				else{
					HX_STACK_LINE(489)
					tmp16 = false;
				}
				HX_STACK_LINE(489)
				if ((tmp16)){
					HX_STACK_LINE(489)
					::flixel::animation::FlxAnimationController tmp17 = this->animation;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(489)
					tmp17->play(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),true,null());
				}
				HX_STACK_LINE(490)
				::flixel::FlxSprite tmp17 = this->weaponSprite;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(490)
				::WeaponAttribute tmp18 = this->weaponAttribute;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(490)
				Dynamic tmp19 = tmp18->animations->__get((int)1).StaticCast< cpp::ArrayBase >()->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(490)
				tmp17->animation->play(tmp19,true,null());
				HX_STACK_LINE(491)
				this->consumeBullet();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,(void))

bool Player_obj::checkBullet( ){
	HX_STACK_FRAME("Player","checkBullet",0x476734bd,"Player.checkBullet","Player.hx",496,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	::WeaponAttribute tmp = this->weaponAttribute;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	::WeaponType tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(497)
	bool tmp2 = (tmp1 == ::WeaponType_obj::Handgun);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	if ((tmp2)){
		HX_STACK_LINE(498)
		::WeaponAttribute tmp3 = this->weaponAttribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		int tmp4 = tmp3->bulletCost;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		int tmp5 = this->handgunBullet;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		return tmp6;
	}
	else{
		HX_STACK_LINE(499)
		::WeaponAttribute tmp3 = this->weaponAttribute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		::WeaponType tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(499)
		bool tmp5 = (tmp4 == ::WeaponType_obj::SMG);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(499)
		if ((tmp5)){
			HX_STACK_LINE(500)
			::WeaponAttribute tmp6 = this->weaponAttribute;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(500)
			int tmp7 = tmp6->bulletCost;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(500)
			int tmp8 = this->smgBullet;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(500)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(500)
			return tmp9;
		}
		else{
			HX_STACK_LINE(501)
			::WeaponAttribute tmp6 = this->weaponAttribute;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			::WeaponType tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			bool tmp8 = (tmp7 == ::WeaponType_obj::Shotgun);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			if ((tmp8)){
				HX_STACK_LINE(502)
				::WeaponAttribute tmp9 = this->weaponAttribute;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(502)
				int tmp10 = tmp9->bulletCost;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(502)
				int tmp11 = this->shotgunBullet;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(502)
				bool tmp12 = (tmp10 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(502)
				return tmp12;
			}
			else{
				HX_STACK_LINE(503)
				::WeaponAttribute tmp9 = this->weaponAttribute;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(503)
				::WeaponType tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(503)
				bool tmp11 = (tmp10 == ::WeaponType_obj::Rifle);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(503)
				if ((tmp11)){
					HX_STACK_LINE(504)
					::WeaponAttribute tmp12 = this->weaponAttribute;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(504)
					int tmp13 = tmp12->bulletCost;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(504)
					int tmp14 = this->rifleBullet;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(504)
					bool tmp15 = (tmp13 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(504)
					return tmp15;
				}
			}
		}
	}
	HX_STACK_LINE(506)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,checkBullet,return )

Void Player_obj::consumeBullet( ){
{
		HX_STACK_FRAME("Player","consumeBullet",0x57a98f71,"Player.consumeBullet","Player.hx",509,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(510)
		::WeaponAttribute tmp = this->weaponAttribute;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		::WeaponType tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		bool tmp2 = (tmp1 == ::WeaponType_obj::Handgun);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		if ((tmp2)){
			HX_STACK_LINE(511)
			::WeaponAttribute tmp3 = this->weaponAttribute;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(511)
			hx::SubEq(this->handgunBullet,tmp3->bulletCost);
			HX_STACK_LINE(512)
			::Bars tmp4 = this->ammoBar;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(512)
			int tmp5 = this->handgunBullet;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(512)
			::WeaponAttribute tmp6 = this->weaponAttribute;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(512)
			int tmp7 = tmp6->bulletCost;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(512)
			int tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(512)
			tmp4->setCurrentValue(tmp8,null());
		}
		else{
			HX_STACK_LINE(513)
			::WeaponAttribute tmp3 = this->weaponAttribute;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(513)
			::WeaponType tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			bool tmp5 = (tmp4 == ::WeaponType_obj::SMG);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			if ((tmp5)){
				HX_STACK_LINE(514)
				::Bars tmp6 = this->ammoBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(514)
				int tmp7 = this->smgBullet;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(514)
				::WeaponAttribute tmp8 = this->weaponAttribute;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(514)
				int tmp9 = tmp8->bulletCost;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(514)
				int tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				tmp6->setCurrentValue(tmp10,null());
				HX_STACK_LINE(515)
				::WeaponAttribute tmp11 = this->weaponAttribute;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(515)
				hx::SubEq(this->smgBullet,tmp11->bulletCost);
			}
			else{
				HX_STACK_LINE(516)
				::WeaponAttribute tmp6 = this->weaponAttribute;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(516)
				::WeaponType tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(516)
				bool tmp8 = (tmp7 == ::WeaponType_obj::Shotgun);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(516)
				if ((tmp8)){
					HX_STACK_LINE(517)
					::Bars tmp9 = this->ammoBar;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(517)
					int tmp10 = this->shotgunBullet;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					::WeaponAttribute tmp11 = this->weaponAttribute;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(517)
					int tmp12 = tmp11->bulletCost;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(517)
					int tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(517)
					tmp9->setCurrentValue(tmp13,null());
					HX_STACK_LINE(518)
					::WeaponAttribute tmp14 = this->weaponAttribute;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(518)
					hx::SubEq(this->shotgunBullet,tmp14->bulletCost);
				}
				else{
					HX_STACK_LINE(519)
					::WeaponAttribute tmp9 = this->weaponAttribute;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(519)
					::WeaponType tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(519)
					bool tmp11 = (tmp10 == ::WeaponType_obj::Rifle);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(519)
					if ((tmp11)){
						HX_STACK_LINE(520)
						::Bars tmp12 = this->ammoBar;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(520)
						int tmp13 = this->rifleBullet;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(520)
						::WeaponAttribute tmp14 = this->weaponAttribute;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(520)
						int tmp15 = tmp14->bulletCost;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(520)
						int tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(520)
						tmp12->setCurrentValue(tmp16,null());
						HX_STACK_LINE(521)
						::WeaponAttribute tmp17 = this->weaponAttribute;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(521)
						hx::SubEq(this->rifleBullet,tmp17->bulletCost);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,consumeBullet,(void))

Void Player_obj::levelUp( ){
{
		HX_STACK_FRAME("Player","levelUp",0x4b719312,"Player.levelUp","Player.hx",525,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(526)
		(this->level)++;
		HX_STACK_LINE(527)
		hx::AddEq(this->statPoint,(int)3);
		HX_STACK_LINE(528)
		(this->skillPoint)++;
		HX_STACK_LINE(529)
		int tmp = this->exp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(529)
		int tmp1 = this->maxExp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(529)
		this->exp = tmp2;
		HX_STACK_LINE(530)
		int tmp3 = this->level;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(530)
		int tmp4 = this->Experience()->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(530)
		this->maxExp = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,levelUp,(void))

Array< int > Player_obj::Experience( ){
	HX_STACK_FRAME("Player","Experience",0xd00c3997,"Player.Experience","Player.hx",533,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(534)
	int tmp = this->firstLevelXP;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	Array< int > exp = Array_obj< int >::__new().Add(tmp);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(535)
	{
		HX_STACK_LINE(535)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(535)
		while((true)){
			HX_STACK_LINE(535)
			bool tmp1 = (_g < (int)100);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(535)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(535)
			if ((tmp2)){
				HX_STACK_LINE(535)
				break;
			}
			HX_STACK_LINE(535)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(535)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(536)
			int tmp4 = (i - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			int tmp5 = exp->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			int tmp6 = (i - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			int tmp7 = exp->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			Float tmp10 = ::Math_obj::sqrt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			Float tmp12 = (tmp5 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			int nextExp = tmp13;		HX_STACK_VAR(nextExp,"nextExp");
			HX_STACK_LINE(537)
			int tmp14 = nextExp;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(537)
			::String tmp15 = ::Std_obj::string(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(537)
			int tmp16 = tmp15.length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(537)
			bool tmp17 = (tmp16 <= (int)5);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(537)
			if ((tmp17)){
				HX_STACK_LINE(538)
				Float tmp18 = (Float(nextExp) / Float((int)10));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(538)
				int tmp19 = ::Math_obj::ceil(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(538)
				int tmp20 = (tmp19 * (int)10);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(538)
				nextExp = tmp20;
			}
			else{
				HX_STACK_LINE(539)
				int tmp18 = nextExp;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(539)
				::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(539)
				int tmp20 = tmp19.length;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(539)
				bool tmp21 = (tmp20 == (int)6);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(539)
				if ((tmp21)){
					HX_STACK_LINE(540)
					Float tmp22 = (Float(nextExp) / Float((int)100));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(540)
					int tmp23 = ::Math_obj::ceil(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(540)
					int tmp24 = (tmp23 * (int)100);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(540)
					nextExp = tmp24;
				}
				else{
					HX_STACK_LINE(541)
					int tmp22 = nextExp;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(541)
					::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(541)
					int tmp24 = tmp23.length;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(541)
					bool tmp25 = (tmp24 >= (int)7);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(541)
					if ((tmp25)){
						HX_STACK_LINE(542)
						Float tmp26 = (Float(nextExp) / Float((int)10000));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(542)
						int tmp27 = ::Math_obj::ceil(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(542)
						int tmp28 = (tmp27 * (int)10000);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(542)
						nextExp = tmp28;
					}
				}
			}
			HX_STACK_LINE(544)
			int tmp18 = nextExp;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(544)
			exp->push(tmp18);
		}
	}
	HX_STACK_LINE(546)
	return exp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,Experience,return )


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_MARK_MEMBER_NAME(jumpPower,"jumpPower");
	HX_MARK_MEMBER_NAME(weapon,"weapon");
	HX_MARK_MEMBER_NAME(weaponAttribute,"weaponAttribute");
	HX_MARK_MEMBER_NAME(airJumpLimit,"airJumpLimit");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(firstLevelXP,"firstLevelXP");
	HX_MARK_MEMBER_NAME(maxHealth,"maxHealth");
	HX_MARK_MEMBER_NAME(maxBattery,"maxBattery");
	HX_MARK_MEMBER_NAME(maxExp,"maxExp");
	HX_MARK_MEMBER_NAME(battery,"battery");
	HX_MARK_MEMBER_NAME(exp,"exp");
	HX_MARK_MEMBER_NAME(endurance,"endurance");
	HX_MARK_MEMBER_NAME(handgunPro,"handgunPro");
	HX_MARK_MEMBER_NAME(smgPro,"smgPro");
	HX_MARK_MEMBER_NAME(shotgunPro,"shotgunPro");
	HX_MARK_MEMBER_NAME(riflePro,"riflePro");
	HX_MARK_MEMBER_NAME(handgunBullet,"handgunBullet");
	HX_MARK_MEMBER_NAME(smgBullet,"smgBullet");
	HX_MARK_MEMBER_NAME(shotgunBullet,"shotgunBullet");
	HX_MARK_MEMBER_NAME(rifleBullet,"rifleBullet");
	HX_MARK_MEMBER_NAME(maxHandgunBullet,"maxHandgunBullet");
	HX_MARK_MEMBER_NAME(maxSmgBullet,"maxSmgBullet");
	HX_MARK_MEMBER_NAME(maxShotgunBullet,"maxShotgunBullet");
	HX_MARK_MEMBER_NAME(maxRifleBullet,"maxRifleBullet");
	HX_MARK_MEMBER_NAME(statPoint,"statPoint");
	HX_MARK_MEMBER_NAME(skillPoint,"skillPoint");
	HX_MARK_MEMBER_NAME(vPad,"vPad");
	HX_MARK_MEMBER_NAME(controllable,"controllable");
	HX_MARK_MEMBER_NAME(noDrop,"noDrop");
	HX_MARK_MEMBER_NAME(_spriteSize,"_spriteSize");
	HX_MARK_MEMBER_NAME(_secondJumpReady,"_secondJumpReady");
	HX_MARK_MEMBER_NAME(_vPadJumpReleased,"_vPadJumpReleased");
	HX_MARK_MEMBER_NAME(_currentAirJump,"_currentAirJump");
	HX_MARK_MEMBER_NAME(_jumpDelay,"_jumpDelay");
	HX_MARK_MEMBER_NAME(_jumpDelayLeft,"_jumpDelayLeft");
	HX_MARK_MEMBER_NAME(onJumpSound,"onJumpSound");
	HX_MARK_MEMBER_NAME(onMoveSound,"onMoveSound");
	HX_MARK_MEMBER_NAME(onStepSound,"onStepSound");
	HX_MARK_MEMBER_NAME(healthBar,"healthBar");
	HX_MARK_MEMBER_NAME(batteryBar,"batteryBar");
	HX_MARK_MEMBER_NAME(expBar,"expBar");
	HX_MARK_MEMBER_NAME(ammoBar,"ammoBar");
	HX_MARK_MEMBER_NAME(hud,"hud");
	HX_MARK_MEMBER_NAME(decentGesture,"decentGesture");
	HX_MARK_MEMBER_NAME(gameState,"gameState");
	HX_MARK_MEMBER_NAME(weaponSprite,"weaponSprite");
	HX_MARK_MEMBER_NAME(weaponToRemove,"weaponToRemove");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_VISIT_MEMBER_NAME(jumpPower,"jumpPower");
	HX_VISIT_MEMBER_NAME(weapon,"weapon");
	HX_VISIT_MEMBER_NAME(weaponAttribute,"weaponAttribute");
	HX_VISIT_MEMBER_NAME(airJumpLimit,"airJumpLimit");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(firstLevelXP,"firstLevelXP");
	HX_VISIT_MEMBER_NAME(maxHealth,"maxHealth");
	HX_VISIT_MEMBER_NAME(maxBattery,"maxBattery");
	HX_VISIT_MEMBER_NAME(maxExp,"maxExp");
	HX_VISIT_MEMBER_NAME(battery,"battery");
	HX_VISIT_MEMBER_NAME(exp,"exp");
	HX_VISIT_MEMBER_NAME(endurance,"endurance");
	HX_VISIT_MEMBER_NAME(handgunPro,"handgunPro");
	HX_VISIT_MEMBER_NAME(smgPro,"smgPro");
	HX_VISIT_MEMBER_NAME(shotgunPro,"shotgunPro");
	HX_VISIT_MEMBER_NAME(riflePro,"riflePro");
	HX_VISIT_MEMBER_NAME(handgunBullet,"handgunBullet");
	HX_VISIT_MEMBER_NAME(smgBullet,"smgBullet");
	HX_VISIT_MEMBER_NAME(shotgunBullet,"shotgunBullet");
	HX_VISIT_MEMBER_NAME(rifleBullet,"rifleBullet");
	HX_VISIT_MEMBER_NAME(maxHandgunBullet,"maxHandgunBullet");
	HX_VISIT_MEMBER_NAME(maxSmgBullet,"maxSmgBullet");
	HX_VISIT_MEMBER_NAME(maxShotgunBullet,"maxShotgunBullet");
	HX_VISIT_MEMBER_NAME(maxRifleBullet,"maxRifleBullet");
	HX_VISIT_MEMBER_NAME(statPoint,"statPoint");
	HX_VISIT_MEMBER_NAME(skillPoint,"skillPoint");
	HX_VISIT_MEMBER_NAME(vPad,"vPad");
	HX_VISIT_MEMBER_NAME(controllable,"controllable");
	HX_VISIT_MEMBER_NAME(noDrop,"noDrop");
	HX_VISIT_MEMBER_NAME(_spriteSize,"_spriteSize");
	HX_VISIT_MEMBER_NAME(_secondJumpReady,"_secondJumpReady");
	HX_VISIT_MEMBER_NAME(_vPadJumpReleased,"_vPadJumpReleased");
	HX_VISIT_MEMBER_NAME(_currentAirJump,"_currentAirJump");
	HX_VISIT_MEMBER_NAME(_jumpDelay,"_jumpDelay");
	HX_VISIT_MEMBER_NAME(_jumpDelayLeft,"_jumpDelayLeft");
	HX_VISIT_MEMBER_NAME(onJumpSound,"onJumpSound");
	HX_VISIT_MEMBER_NAME(onMoveSound,"onMoveSound");
	HX_VISIT_MEMBER_NAME(onStepSound,"onStepSound");
	HX_VISIT_MEMBER_NAME(healthBar,"healthBar");
	HX_VISIT_MEMBER_NAME(batteryBar,"batteryBar");
	HX_VISIT_MEMBER_NAME(expBar,"expBar");
	HX_VISIT_MEMBER_NAME(ammoBar,"ammoBar");
	HX_VISIT_MEMBER_NAME(hud,"hud");
	HX_VISIT_MEMBER_NAME(decentGesture,"decentGesture");
	HX_VISIT_MEMBER_NAME(gameState,"gameState");
	HX_VISIT_MEMBER_NAME(weaponSprite,"weaponSprite");
	HX_VISIT_MEMBER_NAME(weaponToRemove,"weaponToRemove");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"exp") ) { return exp; }
		if (HX_FIELD_EQ(inName,"hud") ) { return hud; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"vPad") ) { return vPad; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { return weapon; }
		if (HX_FIELD_EQ(inName,"maxExp") ) { return maxExp; }
		if (HX_FIELD_EQ(inName,"smgPro") ) { return smgPro; }
		if (HX_FIELD_EQ(inName,"noDrop") ) { return noDrop; }
		if (HX_FIELD_EQ(inName,"expBar") ) { return expBar; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"battery") ) { return battery; }
		if (HX_FIELD_EQ(inName,"ammoBar") ) { return ammoBar; }
		if (HX_FIELD_EQ(inName,"levelUp") ) { return levelUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"riflePro") ) { return riflePro; }
		if (HX_FIELD_EQ(inName,"controls") ) { return controls_dyn(); }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { return moveSpeed; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { return jumpPower; }
		if (HX_FIELD_EQ(inName,"maxHealth") ) { return maxHealth; }
		if (HX_FIELD_EQ(inName,"endurance") ) { return endurance; }
		if (HX_FIELD_EQ(inName,"smgBullet") ) { return smgBullet; }
		if (HX_FIELD_EQ(inName,"statPoint") ) { return statPoint; }
		if (HX_FIELD_EQ(inName,"healthBar") ) { return healthBar; }
		if (HX_FIELD_EQ(inName,"gameState") ) { return gameState; }
		if (HX_FIELD_EQ(inName,"addHealth") ) { return addHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"setWeapon") ) { return setWeapon_dyn(); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxBattery") ) { return maxBattery; }
		if (HX_FIELD_EQ(inName,"handgunPro") ) { return handgunPro; }
		if (HX_FIELD_EQ(inName,"shotgunPro") ) { return shotgunPro; }
		if (HX_FIELD_EQ(inName,"skillPoint") ) { return skillPoint; }
		if (HX_FIELD_EQ(inName,"_jumpDelay") ) { return _jumpDelay; }
		if (HX_FIELD_EQ(inName,"batteryBar") ) { return batteryBar; }
		if (HX_FIELD_EQ(inName,"Experience") ) { return Experience_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rifleBullet") ) { return rifleBullet; }
		if (HX_FIELD_EQ(inName,"_spriteSize") ) { return _spriteSize; }
		if (HX_FIELD_EQ(inName,"onJumpSound") ) { return onJumpSound; }
		if (HX_FIELD_EQ(inName,"onMoveSound") ) { return onMoveSound; }
		if (HX_FIELD_EQ(inName,"onStepSound") ) { return onStepSound; }
		if (HX_FIELD_EQ(inName,"checkBullet") ) { return checkBullet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"airJumpLimit") ) { return airJumpLimit; }
		if (HX_FIELD_EQ(inName,"firstLevelXP") ) { return firstLevelXP; }
		if (HX_FIELD_EQ(inName,"maxSmgBullet") ) { return maxSmgBullet; }
		if (HX_FIELD_EQ(inName,"controllable") ) { return controllable; }
		if (HX_FIELD_EQ(inName,"weaponSprite") ) { return weaponSprite; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handgunBullet") ) { return handgunBullet; }
		if (HX_FIELD_EQ(inName,"shotgunBullet") ) { return shotgunBullet; }
		if (HX_FIELD_EQ(inName,"decentGesture") ) { return decentGesture; }
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"consumeBullet") ) { return consumeBullet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxRifleBullet") ) { return maxRifleBullet; }
		if (HX_FIELD_EQ(inName,"_jumpDelayLeft") ) { return _jumpDelayLeft; }
		if (HX_FIELD_EQ(inName,"resetMaxHealth") ) { return resetMaxHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"weaponToRemove") ) { return weaponToRemove; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"weaponAttribute") ) { return weaponAttribute; }
		if (HX_FIELD_EQ(inName,"_currentAirJump") ) { return _currentAirJump; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxHandgunBullet") ) { return maxHandgunBullet; }
		if (HX_FIELD_EQ(inName,"maxShotgunBullet") ) { return maxShotgunBullet; }
		if (HX_FIELD_EQ(inName,"_secondJumpReady") ) { return _secondJumpReady; }
		if (HX_FIELD_EQ(inName,"createVirtualPad") ) { return createVirtualPad_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vPadJumpReleased") ) { return _vPadJumpReleased; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"exp") ) { exp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hud") ) { hud=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vPad") ) { vPad=inValue.Cast< ::flixel::ui::FlxVirtualPad >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { weapon=inValue.Cast< ::flixel::addons::weapon::FlxWeapon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxExp") ) { maxExp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smgPro") ) { smgPro=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noDrop") ) { noDrop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expBar") ) { expBar=inValue.Cast< ::Bars >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"battery") ) { battery=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ammoBar") ) { ammoBar=inValue.Cast< ::Bars >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"riflePro") ) { riflePro=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { moveSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpPower") ) { jumpPower=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHealth") ) { maxHealth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endurance") ) { endurance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smgBullet") ) { smgBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"statPoint") ) { statPoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthBar") ) { healthBar=inValue.Cast< ::Bars >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameState") ) { gameState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxBattery") ) { maxBattery=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handgunPro") ) { handgunPro=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shotgunPro") ) { shotgunPro=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skillPoint") ) { skillPoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpDelay") ) { _jumpDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"batteryBar") ) { batteryBar=inValue.Cast< ::Bars >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rifleBullet") ) { rifleBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteSize") ) { _spriteSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onJumpSound") ) { onJumpSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMoveSound") ) { onMoveSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStepSound") ) { onStepSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"airJumpLimit") ) { airJumpLimit=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstLevelXP") ) { firstLevelXP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSmgBullet") ) { maxSmgBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controllable") ) { controllable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weaponSprite") ) { weaponSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handgunBullet") ) { handgunBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shotgunBullet") ) { shotgunBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decentGesture") ) { decentGesture=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxRifleBullet") ) { maxRifleBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpDelayLeft") ) { _jumpDelayLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weaponToRemove") ) { weaponToRemove=inValue.Cast< ::flixel::addons::weapon::FlxWeapon >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"weaponAttribute") ) { weaponAttribute=inValue.Cast< ::WeaponAttribute >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentAirJump") ) { _currentAirJump=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxHandgunBullet") ) { maxHandgunBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxShotgunBullet") ) { maxShotgunBullet=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_secondJumpReady") ) { _secondJumpReady=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_vPadJumpReleased") ) { _vPadJumpReleased=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"));
	outFields->push(HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52"));
	outFields->push(HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"));
	outFields->push(HX_HCSTRING("weaponAttribute","\xa0","\xfd","\x3b","\x5e"));
	outFields->push(HX_HCSTRING("airJumpLimit","\x83","\xf3","\x8c","\x08"));
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("firstLevelXP","\x2c","\xe1","\xbe","\x4a"));
	outFields->push(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"));
	outFields->push(HX_HCSTRING("maxBattery","\x89","\x01","\x6f","\x35"));
	outFields->push(HX_HCSTRING("maxExp","\x59","\xf8","\x4a","\xbe"));
	outFields->push(HX_HCSTRING("battery","\xcd","\x87","\x4a","\xcb"));
	outFields->push(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("endurance","\xc7","\xb3","\x2e","\xb7"));
	outFields->push(HX_HCSTRING("handgunPro","\x3c","\x82","\x5f","\xb3"));
	outFields->push(HX_HCSTRING("smgPro","\xa0","\xcb","\x09","\x02"));
	outFields->push(HX_HCSTRING("shotgunPro","\x07","\x66","\xb6","\x8d"));
	outFields->push(HX_HCSTRING("riflePro","\x05","\xa0","\x71","\xc1"));
	outFields->push(HX_HCSTRING("handgunBullet","\x93","\xe3","\xf1","\xa6"));
	outFields->push(HX_HCSTRING("smgBullet","\xaf","\x90","\x34","\xe1"));
	outFields->push(HX_HCSTRING("shotgunBullet","\xa8","\x30","\xf9","\xf7"));
	outFields->push(HX_HCSTRING("rifleBullet","\x6a","\xc9","\x2b","\xe0"));
	outFields->push(HX_HCSTRING("maxHandgunBullet","\x4f","\x52","\xfa","\x72"));
	outFields->push(HX_HCSTRING("maxSmgBullet","\x6b","\xf1","\xb7","\x78"));
	outFields->push(HX_HCSTRING("maxShotgunBullet","\x64","\x9f","\x01","\xc4"));
	outFields->push(HX_HCSTRING("maxRifleBullet","\x26","\xd1","\xd5","\xe7"));
	outFields->push(HX_HCSTRING("statPoint","\xdc","\xdf","\x12","\x2a"));
	outFields->push(HX_HCSTRING("skillPoint","\xff","\xc0","\x61","\x15"));
	outFields->push(HX_HCSTRING("vPad","\x7d","\x36","\x3c","\x4e"));
	outFields->push(HX_HCSTRING("controllable","\x89","\x57","\x5a","\xa1"));
	outFields->push(HX_HCSTRING("noDrop","\x10","\x79","\x05","\x12"));
	outFields->push(HX_HCSTRING("_spriteSize","\x85","\x5c","\x6b","\xc4"));
	outFields->push(HX_HCSTRING("_secondJumpReady","\x02","\x71","\xbe","\xb2"));
	outFields->push(HX_HCSTRING("_vPadJumpReleased","\x47","\x60","\x16","\x5b"));
	outFields->push(HX_HCSTRING("_currentAirJump","\xfe","\xb1","\x00","\xe9"));
	outFields->push(HX_HCSTRING("_jumpDelay","\x76","\x5f","\x96","\xbe"));
	outFields->push(HX_HCSTRING("_jumpDelayLeft","\x9d","\x86","\x83","\xf6"));
	outFields->push(HX_HCSTRING("onJumpSound","\xe2","\x7b","\xdc","\x2e"));
	outFields->push(HX_HCSTRING("onMoveSound","\xdf","\x3e","\xd6","\x60"));
	outFields->push(HX_HCSTRING("onStepSound","\xc4","\x04","\x7b","\x13"));
	outFields->push(HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42"));
	outFields->push(HX_HCSTRING("batteryBar","\x06","\x00","\x77","\xa2"));
	outFields->push(HX_HCSTRING("expBar","\x36","\x5d","\x5b","\xc4"));
	outFields->push(HX_HCSTRING("ammoBar","\x25","\xa7","\xc6","\x62"));
	outFields->push(HX_HCSTRING("hud","\xb7","\x50","\x4f","\x00"));
	outFields->push(HX_HCSTRING("decentGesture","\x20","\xe2","\x4c","\xe0"));
	outFields->push(HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9"));
	outFields->push(HX_HCSTRING("weaponSprite","\x01","\x74","\xd4","\x30"));
	outFields->push(HX_HCSTRING("weaponToRemove","\x1b","\xd3","\xd8","\x57"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Player_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(Player_obj,moveSpeed),HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpPower),HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeapon*/ ,(int)offsetof(Player_obj,weapon),HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc")},
	{hx::fsObject /*::WeaponAttribute*/ ,(int)offsetof(Player_obj,weaponAttribute),HX_HCSTRING("weaponAttribute","\xa0","\xfd","\x3b","\x5e")},
	{hx::fsInt,(int)offsetof(Player_obj,airJumpLimit),HX_HCSTRING("airJumpLimit","\x83","\xf3","\x8c","\x08")},
	{hx::fsInt,(int)offsetof(Player_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsInt,(int)offsetof(Player_obj,firstLevelXP),HX_HCSTRING("firstLevelXP","\x2c","\xe1","\xbe","\x4a")},
	{hx::fsFloat,(int)offsetof(Player_obj,maxHealth),HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c")},
	{hx::fsInt,(int)offsetof(Player_obj,maxBattery),HX_HCSTRING("maxBattery","\x89","\x01","\x6f","\x35")},
	{hx::fsInt,(int)offsetof(Player_obj,maxExp),HX_HCSTRING("maxExp","\x59","\xf8","\x4a","\xbe")},
	{hx::fsInt,(int)offsetof(Player_obj,battery),HX_HCSTRING("battery","\xcd","\x87","\x4a","\xcb")},
	{hx::fsInt,(int)offsetof(Player_obj,exp),HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,endurance),HX_HCSTRING("endurance","\xc7","\xb3","\x2e","\xb7")},
	{hx::fsInt,(int)offsetof(Player_obj,handgunPro),HX_HCSTRING("handgunPro","\x3c","\x82","\x5f","\xb3")},
	{hx::fsInt,(int)offsetof(Player_obj,smgPro),HX_HCSTRING("smgPro","\xa0","\xcb","\x09","\x02")},
	{hx::fsInt,(int)offsetof(Player_obj,shotgunPro),HX_HCSTRING("shotgunPro","\x07","\x66","\xb6","\x8d")},
	{hx::fsInt,(int)offsetof(Player_obj,riflePro),HX_HCSTRING("riflePro","\x05","\xa0","\x71","\xc1")},
	{hx::fsInt,(int)offsetof(Player_obj,handgunBullet),HX_HCSTRING("handgunBullet","\x93","\xe3","\xf1","\xa6")},
	{hx::fsInt,(int)offsetof(Player_obj,smgBullet),HX_HCSTRING("smgBullet","\xaf","\x90","\x34","\xe1")},
	{hx::fsInt,(int)offsetof(Player_obj,shotgunBullet),HX_HCSTRING("shotgunBullet","\xa8","\x30","\xf9","\xf7")},
	{hx::fsInt,(int)offsetof(Player_obj,rifleBullet),HX_HCSTRING("rifleBullet","\x6a","\xc9","\x2b","\xe0")},
	{hx::fsInt,(int)offsetof(Player_obj,maxHandgunBullet),HX_HCSTRING("maxHandgunBullet","\x4f","\x52","\xfa","\x72")},
	{hx::fsInt,(int)offsetof(Player_obj,maxSmgBullet),HX_HCSTRING("maxSmgBullet","\x6b","\xf1","\xb7","\x78")},
	{hx::fsInt,(int)offsetof(Player_obj,maxShotgunBullet),HX_HCSTRING("maxShotgunBullet","\x64","\x9f","\x01","\xc4")},
	{hx::fsInt,(int)offsetof(Player_obj,maxRifleBullet),HX_HCSTRING("maxRifleBullet","\x26","\xd1","\xd5","\xe7")},
	{hx::fsInt,(int)offsetof(Player_obj,statPoint),HX_HCSTRING("statPoint","\xdc","\xdf","\x12","\x2a")},
	{hx::fsInt,(int)offsetof(Player_obj,skillPoint),HX_HCSTRING("skillPoint","\xff","\xc0","\x61","\x15")},
	{hx::fsObject /*::flixel::ui::FlxVirtualPad*/ ,(int)offsetof(Player_obj,vPad),HX_HCSTRING("vPad","\x7d","\x36","\x3c","\x4e")},
	{hx::fsBool,(int)offsetof(Player_obj,controllable),HX_HCSTRING("controllable","\x89","\x57","\x5a","\xa1")},
	{hx::fsBool,(int)offsetof(Player_obj,noDrop),HX_HCSTRING("noDrop","\x10","\x79","\x05","\x12")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Player_obj,_spriteSize),HX_HCSTRING("_spriteSize","\x85","\x5c","\x6b","\xc4")},
	{hx::fsBool,(int)offsetof(Player_obj,_secondJumpReady),HX_HCSTRING("_secondJumpReady","\x02","\x71","\xbe","\xb2")},
	{hx::fsBool,(int)offsetof(Player_obj,_vPadJumpReleased),HX_HCSTRING("_vPadJumpReleased","\x47","\x60","\x16","\x5b")},
	{hx::fsInt,(int)offsetof(Player_obj,_currentAirJump),HX_HCSTRING("_currentAirJump","\xfe","\xb1","\x00","\xe9")},
	{hx::fsFloat,(int)offsetof(Player_obj,_jumpDelay),HX_HCSTRING("_jumpDelay","\x76","\x5f","\x96","\xbe")},
	{hx::fsFloat,(int)offsetof(Player_obj,_jumpDelayLeft),HX_HCSTRING("_jumpDelayLeft","\x9d","\x86","\x83","\xf6")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Player_obj,onJumpSound),HX_HCSTRING("onJumpSound","\xe2","\x7b","\xdc","\x2e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Player_obj,onMoveSound),HX_HCSTRING("onMoveSound","\xdf","\x3e","\xd6","\x60")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Player_obj,onStepSound),HX_HCSTRING("onStepSound","\xc4","\x04","\x7b","\x13")},
	{hx::fsObject /*::Bars*/ ,(int)offsetof(Player_obj,healthBar),HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42")},
	{hx::fsObject /*::Bars*/ ,(int)offsetof(Player_obj,batteryBar),HX_HCSTRING("batteryBar","\x06","\x00","\x77","\xa2")},
	{hx::fsObject /*::Bars*/ ,(int)offsetof(Player_obj,expBar),HX_HCSTRING("expBar","\x36","\x5d","\x5b","\xc4")},
	{hx::fsObject /*::Bars*/ ,(int)offsetof(Player_obj,ammoBar),HX_HCSTRING("ammoBar","\x25","\xa7","\xc6","\x62")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Player_obj,hud),HX_HCSTRING("hud","\xb7","\x50","\x4f","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Player_obj,decentGesture),HX_HCSTRING("decentGesture","\x20","\xe2","\x4c","\xe0")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(Player_obj,gameState),HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Player_obj,weaponSprite),HX_HCSTRING("weaponSprite","\x01","\x74","\xd4","\x30")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeapon*/ ,(int)offsetof(Player_obj,weaponToRemove),HX_HCSTRING("weaponToRemove","\x1b","\xd3","\xd8","\x57")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"),
	HX_HCSTRING("jumpPower","\x37","\x58","\x67","\x52"),
	HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"),
	HX_HCSTRING("weaponAttribute","\xa0","\xfd","\x3b","\x5e"),
	HX_HCSTRING("airJumpLimit","\x83","\xf3","\x8c","\x08"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("firstLevelXP","\x2c","\xe1","\xbe","\x4a"),
	HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"),
	HX_HCSTRING("maxBattery","\x89","\x01","\x6f","\x35"),
	HX_HCSTRING("maxExp","\x59","\xf8","\x4a","\xbe"),
	HX_HCSTRING("battery","\xcd","\x87","\x4a","\xcb"),
	HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"),
	HX_HCSTRING("endurance","\xc7","\xb3","\x2e","\xb7"),
	HX_HCSTRING("handgunPro","\x3c","\x82","\x5f","\xb3"),
	HX_HCSTRING("smgPro","\xa0","\xcb","\x09","\x02"),
	HX_HCSTRING("shotgunPro","\x07","\x66","\xb6","\x8d"),
	HX_HCSTRING("riflePro","\x05","\xa0","\x71","\xc1"),
	HX_HCSTRING("handgunBullet","\x93","\xe3","\xf1","\xa6"),
	HX_HCSTRING("smgBullet","\xaf","\x90","\x34","\xe1"),
	HX_HCSTRING("shotgunBullet","\xa8","\x30","\xf9","\xf7"),
	HX_HCSTRING("rifleBullet","\x6a","\xc9","\x2b","\xe0"),
	HX_HCSTRING("maxHandgunBullet","\x4f","\x52","\xfa","\x72"),
	HX_HCSTRING("maxSmgBullet","\x6b","\xf1","\xb7","\x78"),
	HX_HCSTRING("maxShotgunBullet","\x64","\x9f","\x01","\xc4"),
	HX_HCSTRING("maxRifleBullet","\x26","\xd1","\xd5","\xe7"),
	HX_HCSTRING("statPoint","\xdc","\xdf","\x12","\x2a"),
	HX_HCSTRING("skillPoint","\xff","\xc0","\x61","\x15"),
	HX_HCSTRING("vPad","\x7d","\x36","\x3c","\x4e"),
	HX_HCSTRING("controllable","\x89","\x57","\x5a","\xa1"),
	HX_HCSTRING("noDrop","\x10","\x79","\x05","\x12"),
	HX_HCSTRING("_spriteSize","\x85","\x5c","\x6b","\xc4"),
	HX_HCSTRING("_secondJumpReady","\x02","\x71","\xbe","\xb2"),
	HX_HCSTRING("_vPadJumpReleased","\x47","\x60","\x16","\x5b"),
	HX_HCSTRING("_currentAirJump","\xfe","\xb1","\x00","\xe9"),
	HX_HCSTRING("_jumpDelay","\x76","\x5f","\x96","\xbe"),
	HX_HCSTRING("_jumpDelayLeft","\x9d","\x86","\x83","\xf6"),
	HX_HCSTRING("onJumpSound","\xe2","\x7b","\xdc","\x2e"),
	HX_HCSTRING("onMoveSound","\xdf","\x3e","\xd6","\x60"),
	HX_HCSTRING("onStepSound","\xc4","\x04","\x7b","\x13"),
	HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42"),
	HX_HCSTRING("batteryBar","\x06","\x00","\x77","\xa2"),
	HX_HCSTRING("expBar","\x36","\x5d","\x5b","\xc4"),
	HX_HCSTRING("ammoBar","\x25","\xa7","\xc6","\x62"),
	HX_HCSTRING("hud","\xb7","\x50","\x4f","\x00"),
	HX_HCSTRING("decentGesture","\x20","\xe2","\x4c","\xe0"),
	HX_HCSTRING("gameState","\xbf","\x64","\x26","\xb9"),
	HX_HCSTRING("resetMaxHealth","\x91","\x9e","\x01","\x87"),
	HX_HCSTRING("addHealth","\x9d","\x5d","\x2a","\xb5"),
	HX_HCSTRING("weaponSprite","\x01","\x74","\xd4","\x30"),
	HX_HCSTRING("weaponToRemove","\x1b","\xd3","\xd8","\x57"),
	HX_HCSTRING("setWeapon","\x1e","\x0c","\x0b","\x5c"),
	HX_HCSTRING("createVirtualPad","\x24","\x02","\xf5","\x95"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("playAnimation","\x70","\x42","\x7a","\xe5"),
	HX_HCSTRING("controls","\x76","\x86","\xbc","\x37"),
	HX_HCSTRING("moveLeft","\xb8","\x73","\x67","\xea"),
	HX_HCSTRING("moveRight","\x0b","\xdb","\x2a","\xa7"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("checkBullet","\x2a","\x65","\xa2","\xb6"),
	HX_HCSTRING("consumeBullet","\x1e","\x75","\x63","\x70"),
	HX_HCSTRING("levelUp","\xff","\xc8","\x76","\x21"),
	HX_HCSTRING("Experience","\xca","\xb5","\x1d","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

