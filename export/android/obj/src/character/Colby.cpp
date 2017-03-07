#include <hxcpp.h>

#ifndef INCLUDED_Environment
#include <Environment.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_character_Colby
#include <character/Colby.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace character{

Void Colby_obj::__construct(::Environment ENV,::flixel::FlxState State)
{
HX_STACK_FRAME("character.Colby","new",0x7d553164,"character.Colby.new","character/Colby.hx",15,0xc8066f8d)
HX_STACK_THIS(this)
HX_STACK_ARG(ENV,"ENV")
HX_STACK_ARG(State,"State")
{
	HX_STACK_LINE(16)
	::flixel::FlxState tmp = State;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct((int)0,(int)0,HX_HCSTRING("assets/images/char-0001.png","\xc8","\x2a","\x4c","\x7e"),tmp);
	HX_STACK_LINE(17)
	this->name = HX_HCSTRING("Colby","\xf7","\xd5","\x89","\xdd");
	HX_STACK_LINE(18)
	Float tmp1 = this->health = (int)30;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	this->maxHealth = tmp1;
	HX_STACK_LINE(19)
	int tmp2 = this->battery = (int)12;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	this->maxBattery = tmp2;
	HX_STACK_LINE(20)
	this->exp = (int)0;
	HX_STACK_LINE(20)
	int tmp3 = this->firstLevelXP = (int)150;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	this->maxExp = tmp3;
	HX_STACK_LINE(21)
	this->handgunPro = (int)30;
	HX_STACK_LINE(22)
	this->moveSpeed = (int)100;
	HX_STACK_LINE(23)
	this->jumpPower = (int)245;
	HX_STACK_LINE(25)
	::flixel::util::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	Float tmp5 = this->moveSpeed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	Float tmp6 = (tmp5 * (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	tmp4->set_x(tmp6);
	HX_STACK_LINE(26)
	::flixel::util::FlxPoint tmp7 = this->acceleration;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	Float tmp8 = ENV->gravity;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	tmp7->set_y(tmp8);
	HX_STACK_LINE(27)
	::flixel::util::FlxPoint tmp9 = this->maxVelocity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	Float tmp10 = this->moveSpeed;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	Float tmp11 = ENV->gravity;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(27)
	tmp9->set(tmp10,tmp11);
	HX_STACK_LINE(29)
	::flixel::_system::frontEnds::SoundFrontEnd tmp12 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(29)
	::flixel::_system::FlxSound tmp13 = tmp12->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/jump-0001.ogg","\x62","\x4e","\x71","\x8e"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(29)
	this->onJumpSound = tmp13;
	HX_STACK_LINE(30)
	::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(30)
	::flixel::_system::FlxSound tmp15 = tmp14->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/walk-0001.ogg","\xe7","\x5a","\xf0","\xb3"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	this->onMoveSound = tmp15;
	HX_STACK_LINE(31)
	::flixel::_system::frontEnds::SoundFrontEnd tmp16 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(31)
	::flixel::_system::FlxSound tmp17 = tmp16->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/step-0002.ogg","\xc5","\x84","\xe9","\x4c"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(31)
	this->onStepSound = tmp17;
	HX_STACK_LINE(33)
	this->setSize((int)16,(int)28);
	HX_STACK_LINE(34)
	this->centerOffsets(null());
	HX_STACK_LINE(35)
	::flixel::util::FlxPoint tmp18 = this->offset;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(35)
	tmp18->set_y((int)4);
}
;
	return null();
}

//Colby_obj::~Colby_obj() { }

Dynamic Colby_obj::__CreateEmpty() { return  new Colby_obj; }
hx::ObjectPtr< Colby_obj > Colby_obj::__new(::Environment ENV,::flixel::FlxState State)
{  hx::ObjectPtr< Colby_obj > _result_ = new Colby_obj();
	_result_->__construct(ENV,State);
	return _result_;}

Dynamic Colby_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Colby_obj > _result_ = new Colby_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


Colby_obj::Colby_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Colby_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Colby_obj::__mClass,"__mClass");
};

#endif

hx::Class Colby_obj::__mClass;

void Colby_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("character.Colby","\x72","\xef","\xc7","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Colby_obj >;
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

} // end namespace character
