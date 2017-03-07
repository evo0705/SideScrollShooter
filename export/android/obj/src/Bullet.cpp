#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Bullet_obj::__construct(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID,Float MinDamage,Float MaxDamage)
{
HX_STACK_FRAME("Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",13,0xb42ce59c)
HX_STACK_THIS(this)
HX_STACK_ARG(Weapon,"Weapon")
HX_STACK_ARG(WeaponID,"WeaponID")
HX_STACK_ARG(MinDamage,"MinDamage")
HX_STACK_ARG(MaxDamage,"MaxDamage")
{
	HX_STACK_LINE(19)
	this->_currentHitCount = ((Float)1);
	HX_STACK_LINE(18)
	this->hitCount = ((Float)1);
	HX_STACK_LINE(23)
	::flixel::addons::weapon::FlxWeapon tmp = Weapon;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = WeaponID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(24)
	this->minDamage = MinDamage;
	HX_STACK_LINE(25)
	this->maxDamage = MaxDamage;
	HX_STACK_LINE(26)
	Float tmp2 = this->hitCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	this->_currentHitCount = tmp2;
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::haxe::ds::IntMap tmp3 = this->_facingFlip;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bullet.hx",27,0xb42ce59c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(27)
		Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		tmp3->set((int)1,tmp4);
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::haxe::ds::IntMap tmp3 = this->_facingFlip;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Bullet.hx",28,0xb42ce59c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp3->set((int)16,tmp4);
	}
	HX_STACK_LINE(29)
	this->set_facing((int)16);
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID,Float MinDamage,Float MaxDamage)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(Weapon,WeaponID,MinDamage,MaxDamage);
	return _result_;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Bullet_obj::hitTarget( ::flixel::FlxSprite Target,bool AllowDamage){
{
		HX_STACK_FRAME("Bullet","hitTarget",0x9d6dccf8,"Bullet.hitTarget","Bullet.hx",33,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(AllowDamage,"AllowDamage")
		HX_STACK_LINE(34)
		Float tmp = this->_currentHitCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(35)
			::flixel::util::FlxPoint tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			tmp2->set((int)0,(int)0);
			HX_STACK_LINE(36)
			(this->_currentHitCount)--;
			HX_STACK_LINE(37)
			bool tmp3 = AllowDamage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			if ((tmp3)){
				HX_STACK_LINE(38)
				Float tmp4 = this->minDamage;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				Float tmp5 = this->maxDamage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				Target->hurt(tmp6);
			}
			HX_STACK_LINE(39)
			::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			tmp4->play(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bullet_obj,hitTarget,(void))

Void Bullet_obj::hitWall( ::flixel::FlxObject Target){
{
		HX_STACK_FRAME("Bullet","hitWall",0xca8daef1,"Bullet.hitWall","Bullet.hx",43,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Target,"Target")
		HX_STACK_LINE(44)
		Float tmp = this->_currentHitCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(45)
			::flixel::util::FlxPoint tmp2 = this->velocity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			tmp2->set((int)0,(int)0);
			HX_STACK_LINE(46)
			Float tmp3 = Target->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			Float tmp4 = this->angle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(46)
				Float tmp7 = this->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				tmp6 = -(tmp7);
			}
			else{
				HX_STACK_LINE(46)
				tmp6 = Target->get_width();
			}
			HX_STACK_LINE(46)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			this->set_x(tmp7);
			HX_STACK_LINE(47)
			(this->_currentHitCount)--;
			HX_STACK_LINE(48)
			::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			tmp8->play(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bullet_obj,hitWall,(void))

Void Bullet_obj::kill( ){
{
		HX_STACK_FRAME("Bullet","kill",0xc757252a,"Bullet.kill","Bullet.hx",52,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::kill();
		HX_STACK_LINE(54)
		Float tmp = this->hitCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		this->_currentHitCount = tmp;
	}
return null();
}


Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("Bullet","update",0xa9584695,"Bullet.update","Bullet.hx",58,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(60)
			::flixel::util::FlxPoint tmp3 = this->velocity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			if ((tmp5)){
				HX_STACK_LINE(60)
				tmp6 = (int)0;
			}
			else{
				HX_STACK_LINE(60)
				tmp6 = (int)180;
			}
			HX_STACK_LINE(60)
			this->set_angle(tmp6);
		}
		HX_STACK_LINE(62)
		::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		bool tmp4 = tmp3->get_finished();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		if ((tmp4)){
			HX_STACK_LINE(63)
			this->kill();
		}
		HX_STACK_LINE(65)
		this->super::update();
	}
return null();
}


Void Bullet_obj::postFire( ){
{
		HX_STACK_FRAME("Bullet","postFire",0x6ee82fc2,"Bullet.postFire","Bullet.hx",69,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->super::postFire();
	}
return null();
}



Bullet_obj::Bullet_obj()
{
}

Dynamic Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitWall") ) { return hitWall_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hitCount") ) { return hitCount; }
		if (HX_FIELD_EQ(inName,"postFire") ) { return postFire_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { return minDamage; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { return maxDamage; }
		if (HX_FIELD_EQ(inName,"hitTarget") ) { return hitTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentHitCount") ) { return _currentHitCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"hitCount") ) { hitCount=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { minDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { maxDamage=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentHitCount") ) { _currentHitCount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bullet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"));
	outFields->push(HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"));
	outFields->push(HX_HCSTRING("hitCount","\x7c","\xa1","\xc2","\x89"));
	outFields->push(HX_HCSTRING("_currentHitCount","\x56","\x9d","\xf3","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Bullet_obj,minDamage),HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,maxDamage),HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,hitCount),HX_HCSTRING("hitCount","\x7c","\xa1","\xc2","\x89")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,_currentHitCount),HX_HCSTRING("_currentHitCount","\x56","\x9d","\xf3","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"),
	HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"),
	HX_HCSTRING("hitCount","\x7c","\xa1","\xc2","\x89"),
	HX_HCSTRING("_currentHitCount","\x56","\x9d","\xf3","\x48"),
	HX_HCSTRING("hitTarget","\x04","\xae","\xfe","\xba"),
	HX_HCSTRING("hitWall","\xfd","\xf4","\x77","\xe4"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("postFire","\x36","\x34","\xfb","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

hx::Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bullet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
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

