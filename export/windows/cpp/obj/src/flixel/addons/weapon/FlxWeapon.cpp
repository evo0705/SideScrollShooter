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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

Void FlxWeapon_obj::__construct(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID)
{
HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","new",0x3f7727f7,"flixel.addons.weapon.FlxWeapon.new","flixel/addons/weapon/FlxWeapon.hx",33,0x017a22ba)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(ParentRef,"ParentRef")
HX_STACK_ARG(BulletType,"BulletType")
HX_STACK_ARG(__o_BulletID,"BulletID")
Dynamic BulletID = __o_BulletID.Default(0);
{
	HX_STACK_LINE(131)
	this->_bulletsFired = (int)0;
	HX_STACK_LINE(118)
	this->_lastFired = (int)0;
	HX_STACK_LINE(84)
	this->rndFactorLifeSpan = ((Float)0);
	HX_STACK_LINE(83)
	this->rndFactorSpeed = (int)0;
	HX_STACK_LINE(82)
	this->rndFactorAngle = (int)0;
	HX_STACK_LINE(80)
	this->bulletElasticity = ((Float)0);
	HX_STACK_LINE(78)
	this->bulletDamage = ((Float)1);
	HX_STACK_LINE(77)
	this->bulletLifeSpan = ((Float)0);
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/weapon/FlxWeapon.hx",76,0x017a22ba)
			{
				HX_STACK_LINE(76)
				::flixel::util::FlxPoint tmp = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(76)
				return Array_obj< ::Dynamic >::__new().Add(tmp);
			}
			return null();
		}
	};
	HX_STACK_LINE(76)
	this->multiShotPattern = _Function_1_1::Block();
	HX_STACK_LINE(75)
	this->multiShot = (int)1;
	HX_STACK_LINE(67)
	this->fireRate = (int)0;
	HX_STACK_LINE(66)
	this->nextFire = (int)0;
	HX_STACK_LINE(154)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(154)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(154)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(154)
		point->_inPool = false;
		HX_STACK_LINE(154)
		tmp = point;
	}
	HX_STACK_LINE(154)
	this->rndFactorPosition = tmp;
	HX_STACK_LINE(155)
	::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			::flixel::util::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::flixel::util::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(155)
			_this->x = (int)0;
			HX_STACK_LINE(155)
			_this->y = (int)0;
			HX_STACK_LINE(155)
			int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			_this->width = tmp5;
			HX_STACK_LINE(155)
			int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			_this->height = tmp6;
			HX_STACK_LINE(155)
			tmp2 = _this;
		}
		HX_STACK_LINE(155)
		::flixel::util::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(155)
		rect->_inPool = false;
		HX_STACK_LINE(155)
		tmp1 = rect;
	}
	HX_STACK_LINE(155)
	this->bounds = tmp1;
	HX_STACK_LINE(156)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(156)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(156)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(156)
		point->_inPool = false;
		HX_STACK_LINE(156)
		tmp2 = point;
	}
	HX_STACK_LINE(156)
	this->_positionOffset = tmp2;
	HX_STACK_LINE(157)
	::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(157)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(157)
		::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(157)
		point->_inPool = false;
		HX_STACK_LINE(157)
		tmp3 = point;
	}
	HX_STACK_LINE(157)
	this->_velocity = tmp3;
	HX_STACK_LINE(159)
	this->name = Name;
	HX_STACK_LINE(161)
	bool tmp4 = (BulletType == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	if ((tmp4)){
		HX_STACK_LINE(162)
		BulletType = hx::ClassOf< ::flixel::addons::weapon::FlxBullet >();
	}
	HX_STACK_LINE(164)
	this->bulletType = BulletType;
	HX_STACK_LINE(165)
	this->bulletID = BulletID;
	HX_STACK_LINE(167)
	bool tmp5 = (ParentRef != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	if ((tmp5)){
		HX_STACK_LINE(169)
		::flixel::FlxSprite tmp6 = ParentRef;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		this->setParent(tmp6,null(),null(),null());
	}
}
;
	return null();
}

//FlxWeapon_obj::~FlxWeapon_obj() { }

Dynamic FlxWeapon_obj::__CreateEmpty() { return  new FlxWeapon_obj; }
hx::ObjectPtr< FlxWeapon_obj > FlxWeapon_obj::__new(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID)
{  hx::ObjectPtr< FlxWeapon_obj > _result_ = new FlxWeapon_obj();
	_result_->__construct(Name,ParentRef,BulletType,__o_BulletID);
	return _result_;}

Dynamic FlxWeapon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxWeapon_obj > _result_ = new FlxWeapon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxWeapon_obj::makePixelBullet( int Quantity,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_Color,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int Width = __o_Width.Default(2);
int Height = __o_Height.Default(2);
int Color = __o_Color.Default(-1);
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makePixelBullet",0xebee3c31,"flixel.addons.weapon.FlxWeapon.makePixelBullet","flixel/addons/weapon/FlxWeapon.hx",184,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(185)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		this->group = tmp;
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				bool tmp1 = (_g < Quantity);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(187)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				if ((tmp2)){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(187)
				int b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(189)
				::hx::Class tmp4 = this->bulletType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				int tmp5 = this->bulletID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				::flixel::addons::weapon::FlxBullet tmp6 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				::flixel::addons::weapon::FlxBullet tempBullet = tmp6;		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(190)
				int tmp7 = Width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				int tmp8 = Height;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(190)
				int tmp9 = Color;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(190)
				tempBullet->makeGraphic(tmp7,tmp8,tmp9,null(),null());
				HX_STACK_LINE(191)
				::flixel::group::FlxTypedGroup tmp10 = this->group;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				::flixel::addons::weapon::FlxBullet tmp11 = tempBullet;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				tmp10->add(tmp11);
			}
		}
		HX_STACK_LINE(194)
		::flixel::util::FlxPoint tmp1 = this->_positionOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		int tmp2 = OffsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		tmp1->set_x(tmp2);
		HX_STACK_LINE(195)
		::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		int tmp4 = OffsetY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		tmp3->set_y(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxWeapon_obj,makePixelBullet,(void))

Void FlxWeapon_obj::makeImageBullet( int Quantity,Dynamic Image,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY,hx::Null< bool >  __o_AutoRotate,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makeImageBullet",0xc2a162c6,"flixel.addons.weapon.FlxWeapon.makeImageBullet","flixel/addons/weapon/FlxWeapon.hx",212,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(213)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		this->group = tmp;
		HX_STACK_LINE(215)
		this->_rotateToAngle = AutoRotate;
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(217)
			while((true)){
				HX_STACK_LINE(217)
				bool tmp1 = (_g < Quantity);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(217)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				if ((tmp2)){
					HX_STACK_LINE(217)
					break;
				}
				HX_STACK_LINE(217)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				int b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(219)
				::hx::Class tmp4 = this->bulletType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				int tmp5 = this->bulletID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				::flixel::addons::weapon::FlxBullet tmp6 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				::flixel::addons::weapon::FlxBullet tempBullet = tmp6;		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(231)
				Dynamic tmp7 = Image;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(231)
				tempBullet->loadGraphic(tmp7,null(),null(),null(),null(),null());
				HX_STACK_LINE(232)
				int tmp8 = Frame;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				tempBullet->animation->set_frameIndex(tmp8);
				HX_STACK_LINE(233)
				tempBullet->antialiasing = AntiAliasing;
				HX_STACK_LINE(235)
				::flixel::group::FlxTypedGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(235)
				::flixel::addons::weapon::FlxBullet tmp10 = tempBullet;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(235)
				tmp9->add(tmp10);
			}
		}
		HX_STACK_LINE(238)
		::flixel::util::FlxPoint tmp1 = this->_positionOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		int tmp2 = OffsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		tmp1->set_x(tmp2);
		HX_STACK_LINE(239)
		::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		int tmp4 = OffsetY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		tmp3->set_y(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxWeapon_obj,makeImageBullet,(void))

Void FlxWeapon_obj::makeAnimatedBullet( int Quantity,Dynamic ImageSequence,int FrameWidth,int FrameHeight,Array< int > Frames,int FrameRate,bool Looped,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makeAnimatedBullet",0x1dee721c,"flixel.addons.weapon.FlxWeapon.makeAnimatedBullet","flixel/addons/weapon/FlxWeapon.hx",256,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(ImageSequence,"ImageSequence")
	HX_STACK_ARG(FrameWidth,"FrameWidth")
	HX_STACK_ARG(FrameHeight,"FrameHeight")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(257)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		this->group = tmp;
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				bool tmp1 = (_g < Quantity);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(259)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(259)
				if ((tmp2)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(259)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(259)
				int b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(261)
				::hx::Class tmp4 = this->bulletType;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(261)
				int tmp5 = this->bulletID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(261)
				::flixel::addons::weapon::FlxBullet tmp6 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(261)
				::flixel::addons::weapon::FlxBullet tempBullet = tmp6;		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(263)
				Dynamic tmp7 = ImageSequence;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(263)
				int tmp8 = FrameWidth;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				int tmp9 = FrameHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				tempBullet->loadGraphic(tmp7,true,tmp8,tmp9,null(),null());
				HX_STACK_LINE(264)
				int tmp10 = FrameRate;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(264)
				bool tmp11 = Looped;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				tempBullet->addAnimation(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),Frames,tmp10,tmp11);
				HX_STACK_LINE(266)
				::flixel::group::FlxTypedGroup tmp12 = this->group;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				::flixel::addons::weapon::FlxBullet tmp13 = tempBullet;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				tmp12->add(tmp13);
			}
		}
		HX_STACK_LINE(269)
		::flixel::util::FlxPoint tmp1 = this->_positionOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		int tmp2 = OffsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		tmp1->set_x(tmp2);
		HX_STACK_LINE(270)
		::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		int tmp4 = OffsetY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		tmp3->set_y(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxWeapon_obj,makeAnimatedBullet,(void))

bool FlxWeapon_obj::runFire( int Method,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,::flixel::FlxSprite Target,hx::Null< int >  __o_Angle){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Angle = __o_Angle.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","runFire",0xab9557b8,"flixel.addons.weapon.FlxWeapon.runFire","flixel/addons/weapon/FlxWeapon.hx",283,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Method,"Method")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Angle,"Angle")
{
		HX_STACK_LINE(284)
		int tmp = this->fireRate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		if ((tmp1)){
			HX_STACK_LINE(284)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			::flixel::FlxGame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			int tmp5 = tmp4->ticks;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			int tmp6 = this->nextFire;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			tmp2 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(284)
			tmp2 = false;
		}
		HX_STACK_LINE(284)
		if ((tmp2)){
			HX_STACK_LINE(286)
			return false;
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(289)
			int tmp3 = this->multiShot;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(289)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(289)
				if ((tmp5)){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(289)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(289)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(291)
				::flixel::addons::weapon::FlxBullet tmp7 = this->getFreeBullet();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(291)
				this->currentBullet = tmp7;
				HX_STACK_LINE(293)
				::flixel::addons::weapon::FlxBullet tmp8 = this->currentBullet;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				if ((tmp9)){
					HX_STACK_LINE(295)
					return false;
				}
				HX_STACK_LINE(298)
				Dynamic tmp10 = this->onPreFireCallback_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(298)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(298)
				if ((tmp11)){
					HX_STACK_LINE(300)
					this->onPreFireCallback();
				}
				HX_STACK_LINE(304)
				::flixel::_system::FlxSound tmp12 = this->onPreFireSound;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(304)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(304)
				if ((tmp13)){
					HX_STACK_LINE(306)
					::flixel::_system::FlxSound tmp14 = this->onPreFireSound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					tmp14->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				}
				HX_STACK_LINE(311)
				::flixel::addons::weapon::FlxBullet tmp14 = this->currentBullet;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(311)
				tmp14->velocity->set_x((int)0);
				HX_STACK_LINE(312)
				::flixel::addons::weapon::FlxBullet tmp15 = this->currentBullet;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(312)
				tmp15->velocity->set_y((int)0);
				HX_STACK_LINE(314)
				::flixel::FlxGame tmp16 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(314)
				this->_lastFired = tmp16->ticks;
				HX_STACK_LINE(315)
				::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				int tmp18 = tmp17->ticks;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				int tmp19 = this->fireRate;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(315)
				Float tmp20 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(315)
				Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(315)
				int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(315)
				int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(315)
				this->nextFire = tmp23;
				HX_STACK_LINE(319)
				::flixel::util::FlxPoint tmp24 = this->_positionOffset;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(319)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(319)
				::flixel::util::FlxPoint tmp26 = this->multiShotPattern->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(319)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(319)
				Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(319)
				Float launchX = tmp28;		HX_STACK_VAR(launchX,"launchX");
				HX_STACK_LINE(320)
				::flixel::util::FlxPoint tmp29 = this->_positionOffset;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(320)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(320)
				::flixel::util::FlxPoint tmp31 = this->multiShotPattern->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(320)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(320)
				Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(320)
				Float launchY = tmp33;		HX_STACK_VAR(launchY,"launchY");
				HX_STACK_LINE(322)
				bool tmp34 = this->_fireFromParent;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(322)
				if ((tmp34)){
					HX_STACK_LINE(324)
					::flixel::FlxSprite tmp35 = this->parent;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(324)
					hx::AddEq(launchX,tmp35->x);
					HX_STACK_LINE(325)
					::flixel::FlxSprite tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(325)
					hx::AddEq(launchY,tmp36->y);
				}
				else{
					HX_STACK_LINE(327)
					bool tmp35 = this->_fireFromPosition;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(327)
					if ((tmp35)){
						HX_STACK_LINE(329)
						int tmp36 = this->_fireX;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(329)
						hx::AddEq(launchX,tmp36);
						HX_STACK_LINE(330)
						int tmp37 = this->_fireY;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(330)
						hx::AddEq(launchY,tmp37);
					}
				}
				HX_STACK_LINE(333)
				bool tmp35 = this->_directionFromParent;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(333)
				if ((tmp35)){
					HX_STACK_LINE(335)
					::flixel::FlxSprite tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(335)
					int tmp37 = this->bulletSpeed;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(335)
					::flixel::util::FlxPoint tmp38 = ::flixel::util::FlxVelocity_obj::velocityFromFacing(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(335)
					this->_velocity = tmp38;
				}
				HX_STACK_LINE(339)
				bool tmp36 = (Method == (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(339)
				if ((tmp36)){
					HX_STACK_LINE(341)
					::flixel::addons::weapon::FlxBullet tmp37 = this->currentBullet;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(341)
					Float tmp38 = launchX;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(341)
					Float tmp39 = launchY;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(341)
					::flixel::util::FlxPoint tmp40 = this->_velocity;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(341)
					Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(341)
					::flixel::util::FlxPoint tmp42 = this->_velocity;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(341)
					Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(341)
					tmp37->fire(tmp38,tmp39,tmp41,tmp43);
				}
				else{
					HX_STACK_LINE(343)
					bool tmp37 = (Method == (int)2);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(343)
					if ((tmp37)){
						HX_STACK_LINE(345)
						::flixel::addons::weapon::FlxBullet tmp38 = this->currentBullet;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(345)
						Float tmp39 = launchX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(345)
						Float tmp40 = launchY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(345)
						int tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(345)
						int tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(345)
						int tmp43 = this->bulletSpeed;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(345)
						tmp38->fireAtPosition(tmp39,tmp40,tmp41,tmp42,tmp43);
					}
					else{
						HX_STACK_LINE(347)
						bool tmp38 = (Method == (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(347)
						if ((tmp38)){
							HX_STACK_LINE(349)
							::flixel::addons::weapon::FlxBullet tmp39 = this->currentBullet;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(349)
							Float tmp40 = launchX;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(349)
							Float tmp41 = launchY;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(349)
							::flixel::FlxSprite tmp42 = Target;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(349)
							int tmp43 = this->bulletSpeed;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(349)
							tmp39->fireAtTarget(tmp40,tmp41,tmp42,tmp43);
						}
						else{
							HX_STACK_LINE(351)
							bool tmp39 = (Method == (int)4);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(351)
							if ((tmp39)){
								HX_STACK_LINE(353)
								::flixel::addons::weapon::FlxBullet tmp40 = this->currentBullet;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(353)
								int tmp41 = Angle;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(353)
								int tmp42 = ::Math_obj::floor(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(353)
								tmp40->set_angle(tmp42);
								HX_STACK_LINE(354)
								::flixel::addons::weapon::FlxBullet tmp43 = this->currentBullet;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(354)
								Float tmp44 = launchX;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(354)
								Float tmp45 = launchY;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(354)
								int tmp46 = Angle;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(354)
								int tmp47 = this->bulletSpeed;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(354)
								tmp43->fireFromAngle(tmp44,tmp45,tmp46,tmp47);
							}
							else{
								HX_STACK_LINE(356)
								bool tmp40 = (Method == (int)5);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(356)
								if ((tmp40)){
									HX_STACK_LINE(358)
									::flixel::addons::weapon::FlxBullet tmp41 = this->currentBullet;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(358)
									::flixel::FlxSprite tmp42 = this->parent;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(358)
									Float tmp43 = tmp42->angle;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(358)
									int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(358)
									tmp41->set_angle(tmp44);
									HX_STACK_LINE(359)
									::flixel::addons::weapon::FlxBullet tmp45 = this->currentBullet;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(359)
									Float tmp46 = launchX;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(359)
									Float tmp47 = launchY;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(359)
									::flixel::FlxSprite tmp48 = this->parent;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(359)
									Float tmp49 = tmp48->angle;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(359)
									Float tmp50 = (tmp49 - (int)90);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(359)
									int tmp51 = ::Math_obj::floor(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(359)
									int tmp52 = this->bulletSpeed;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(359)
									tmp45->fireFromAngle(tmp46,tmp47,tmp51,tmp52);
								}
								else{
									HX_STACK_LINE(362)
									bool tmp41 = (Method == (int)6);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(362)
									if ((tmp41)){
										HX_STACK_LINE(364)
										::flixel::input::touch::FlxTouch tmp42 = this->_touchTarget;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(364)
										bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(364)
										if ((tmp43)){
											HX_STACK_LINE(365)
											::flixel::addons::weapon::FlxBullet tmp44 = this->currentBullet;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(365)
											Float tmp45 = launchX;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(365)
											Float tmp46 = launchY;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(365)
											::flixel::input::touch::FlxTouch tmp47 = this->_touchTarget;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(365)
											int tmp48 = this->bulletSpeed;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(365)
											tmp44->fireAtTouch(tmp45,tmp46,tmp47,tmp48,null());
										}
									}
									else{
										HX_STACK_LINE(369)
										bool tmp42 = (Method == (int)1);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(369)
										if ((tmp42)){
											HX_STACK_LINE(371)
											::flixel::addons::weapon::FlxBullet tmp43 = this->currentBullet;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(371)
											Float tmp44 = launchX;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(371)
											Float tmp45 = launchY;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(371)
											int tmp46 = this->bulletSpeed;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(371)
											tmp43->fireAtMouse(tmp44,tmp45,tmp46,null());
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(374)
				Dynamic tmp37 = this->onPostFireCallback_dyn();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(374)
				bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(374)
				if ((tmp38)){
					HX_STACK_LINE(376)
					this->onPostFireCallback();
				}
				HX_STACK_LINE(380)
				::flixel::_system::FlxSound tmp39 = this->onPostFireSound;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(380)
				bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(380)
				if ((tmp40)){
					HX_STACK_LINE(382)
					::flixel::_system::FlxSound tmp41 = this->onPostFireSound;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(382)
					tmp41->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				}
				HX_STACK_LINE(386)
				(this->_bulletsFired)++;
			}
		}
		HX_STACK_LINE(389)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxWeapon_obj,runFire,return )

bool FlxWeapon_obj::fire( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fire",0x4385203f,"flixel.addons.weapon.FlxWeapon.fire","flixel/addons/weapon/FlxWeapon.hx",398,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	bool tmp = this->runFire((int)0,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fire,return )

bool FlxWeapon_obj::fireAtMouse( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtMouse",0x58b47db3,"flixel.addons.weapon.FlxWeapon.fireAtMouse","flixel/addons/weapon/FlxWeapon.hx",409,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(410)
	bool tmp = this->runFire((int)1,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fireAtMouse,return )

bool FlxWeapon_obj::fireAtTouch( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtTouch",0x60827f4d,"flixel.addons.weapon.FlxWeapon.fireAtTouch","flixel/addons/weapon/FlxWeapon.hx",422,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(423)
	bool tmp = (Touch == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	if ((tmp)){
		HX_STACK_LINE(425)
		::flixel::input::touch::FlxTouchManager tmp1 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		::flixel::input::touch::FlxTouch tmp2 = tmp1->getFirst();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(425)
		this->_touchTarget = tmp2;
	}
	else{
		HX_STACK_LINE(429)
		this->_touchTarget = Touch;
	}
	HX_STACK_LINE(432)
	bool fired = false;		HX_STACK_VAR(fired,"fired");
	HX_STACK_LINE(434)
	::flixel::input::touch::FlxTouch tmp1 = this->_touchTarget;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	if ((tmp2)){
		HX_STACK_LINE(436)
		bool tmp3 = this->runFire((int)6,null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		fired = tmp3;
		HX_STACK_LINE(437)
		this->_touchTarget = null();
	}
	HX_STACK_LINE(440)
	bool tmp3 = fired;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(440)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireAtTouch,return )

bool FlxWeapon_obj::fireAtPosition( int X,int Y){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtPosition",0x4ce1e5db,"flixel.addons.weapon.FlxWeapon.fireAtPosition","flixel/addons/weapon/FlxWeapon.hx",452,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(453)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(453)
	bool tmp2 = this->runFire((int)2,tmp,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,fireAtPosition,return )

bool FlxWeapon_obj::fireAtTarget( ::flixel::FlxSprite Target){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtTarget",0x00182803,"flixel.addons.weapon.FlxWeapon.fireAtTarget","flixel/addons/weapon/FlxWeapon.hx",463,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(464)
	::flixel::FlxSprite tmp = Target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	bool tmp1 = this->runFire((int)3,(int)0,(int)0,tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireAtTarget,return )

bool FlxWeapon_obj::fireFromAngle( int Angle){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireFromAngle",0xbe686dca,"flixel.addons.weapon.FlxWeapon.fireFromAngle","flixel/addons/weapon/FlxWeapon.hx",474,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(475)
	int tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(475)
	bool tmp1 = this->runFire((int)4,(int)0,(int)0,null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireFromAngle,return )

bool FlxWeapon_obj::fireFromParentAngle( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireFromParentAngle",0xc6dd3380,"flixel.addons.weapon.FlxWeapon.fireFromParentAngle","flixel/addons/weapon/FlxWeapon.hx",484,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	bool tmp = this->runFire((int)5,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fireFromParentAngle,return )

Void FlxWeapon_obj::setParent( ::flixel::FlxSprite ParentRef,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY,hx::Null< bool >  __o_UseDirection){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
bool UseDirection = __o_UseDirection.Default(false);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setParent",0x5b0d1d43,"flixel.addons.weapon.FlxWeapon.setParent","flixel/addons/weapon/FlxWeapon.hx",497,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ParentRef,"ParentRef")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
	HX_STACK_ARG(UseDirection,"UseDirection")
{
		HX_STACK_LINE(498)
		bool tmp = (ParentRef != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(498)
		if ((tmp)){
			HX_STACK_LINE(500)
			this->_fireFromParent = true;
			HX_STACK_LINE(502)
			this->parent = ParentRef;
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint tmp1 = this->_positionOffset;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			int tmp2 = OffsetX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(504)
			tmp1->set_x(tmp2);
			HX_STACK_LINE(505)
			::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(505)
			int tmp4 = OffsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(505)
			tmp3->set_y(tmp4);
			HX_STACK_LINE(507)
			this->_directionFromParent = UseDirection;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setParent,(void))

Void FlxWeapon_obj::setFiringPosition( int X,int Y,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFiringPosition",0xc342f755,"flixel.addons.weapon.FlxWeapon.setFiringPosition","flixel/addons/weapon/FlxWeapon.hx",521,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(522)
		this->_fireFromPosition = true;
		HX_STACK_LINE(523)
		this->_fireX = X;
		HX_STACK_LINE(524)
		this->_fireY = Y;
		HX_STACK_LINE(526)
		::flixel::util::FlxPoint tmp = this->_positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		int tmp1 = OffsetX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		tmp->set_x(tmp1);
		HX_STACK_LINE(527)
		::flixel::util::FlxPoint tmp2 = this->_positionOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(527)
		int tmp3 = OffsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(527)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setFiringPosition,(void))

Void FlxWeapon_obj::setBulletSpeed( int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletSpeed",0xcfe8f32c,"flixel.addons.weapon.FlxWeapon.setBulletSpeed","flixel/addons/weapon/FlxWeapon.hx",538,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(538)
		this->bulletSpeed = Speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletSpeed,(void))

int FlxWeapon_obj::getBulletSpeed( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","getBulletSpeed",0xafc90ab8,"flixel.addons.weapon.FlxWeapon.getBulletSpeed","flixel/addons/weapon/FlxWeapon.hx",547,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(548)
	int tmp = this->bulletSpeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,getBulletSpeed,return )

Void FlxWeapon_obj::setFireRate( int Rate){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFireRate",0x0ca4760f,"flixel.addons.weapon.FlxWeapon.setFireRate","flixel/addons/weapon/FlxWeapon.hx",559,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Rate,"Rate")
		HX_STACK_LINE(559)
		this->fireRate = Rate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setFireRate,(void))

Void FlxWeapon_obj::setBulletBounds( ::flixel::util::FlxRect Bounds){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletBounds",0xc70e5b30,"flixel.addons.weapon.FlxWeapon.setBulletBounds","flixel/addons/weapon/FlxWeapon.hx",570,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(570)
		this->bounds = Bounds;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletBounds,(void))

Void FlxWeapon_obj::setBulletDirection( int Angle,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletDirection",0x8226f464,"flixel.addons.weapon.FlxWeapon.setBulletDirection","flixel/addons/weapon/FlxWeapon.hx",582,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Angle,"Angle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(583)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			int tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(583)
			Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(583)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			Float a = tmp4;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(583)
			::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(583)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(583)
				::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(583)
				::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(583)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(583)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(583)
				::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(583)
				::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(583)
				point->_inPool = false;
				HX_STACK_LINE(583)
				tmp5 = point;
			}
			HX_STACK_LINE(583)
			::flixel::util::FlxPoint result = tmp5;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(583)
			Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(583)
			int tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(583)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(583)
			result->set_x(tmp9);
			HX_STACK_LINE(583)
			Float tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(583)
			Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(583)
			int tmp12 = Speed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(583)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(583)
			result->set_y(tmp13);
			HX_STACK_LINE(583)
			tmp = result;
		}
		HX_STACK_LINE(583)
		this->_velocity = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletDirection,(void))

Void FlxWeapon_obj::setBulletGravity( int ForceX,int ForceY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletGravity",0xe9c8bd33,"flixel.addons.weapon.FlxWeapon.setBulletGravity","flixel/addons/weapon/FlxWeapon.hx",594,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ForceX,"ForceX")
		HX_STACK_ARG(ForceY,"ForceY")
		HX_STACK_LINE(595)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,int,ForceY,int,ForceX)
		int __ArgCount() const { return 1; }
		Void run(::flixel::addons::weapon::FlxBullet b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/addons/weapon/FlxWeapon.hx",595,0x017a22ba)
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(596)
				int tmp1 = ForceX;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(596)
				b->acceleration->set_x(tmp1);
				HX_STACK_LINE(597)
				int tmp2 = ForceY;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(597)
				b->acceleration->set_y(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(595)
		tmp->forEach( Dynamic(new _Function_1_1(ForceY,ForceX)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletGravity,(void))

Void FlxWeapon_obj::setBulletAcceleration( int AccelerationX,int AccelerationY,int SpeedMaxX,int SpeedMaxY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletAcceleration",0x75d6933b,"flixel.addons.weapon.FlxWeapon.setBulletAcceleration","flixel/addons/weapon/FlxWeapon.hx",612,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AccelerationX,"AccelerationX")
		HX_STACK_ARG(AccelerationY,"AccelerationY")
		HX_STACK_ARG(SpeedMaxX,"SpeedMaxX")
		HX_STACK_ARG(SpeedMaxY,"SpeedMaxY")
		HX_STACK_LINE(613)
		bool tmp = (AccelerationX == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		if ((tmp)){
			HX_STACK_LINE(613)
			tmp1 = (AccelerationY == (int)0);
		}
		else{
			HX_STACK_LINE(613)
			tmp1 = false;
		}
		HX_STACK_LINE(613)
		if ((tmp1)){
			HX_STACK_LINE(615)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::flixel::addons::weapon::FlxBullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/weapon/FlxWeapon.hx",616,0x017a22ba)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(616)
					b->accelerates = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(615)
			tmp2->forEach( Dynamic(new _Function_2_1()));
		}
		else{
			HX_STACK_LINE(621)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,int,AccelerationY,int,SpeedMaxX,int,AccelerationX,int,SpeedMaxY)
			int __ArgCount() const { return 1; }
			Void run(::flixel::addons::weapon::FlxBullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/weapon/FlxWeapon.hx",621,0x017a22ba)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(622)
					b->accelerates = true;
					HX_STACK_LINE(623)
					b->xAcceleration = AccelerationX;
					HX_STACK_LINE(624)
					b->yAcceleration = AccelerationY;
					HX_STACK_LINE(625)
					int tmp3 = SpeedMaxX;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(625)
					b->maxVelocity->set_x(tmp3);
					HX_STACK_LINE(626)
					int tmp4 = SpeedMaxY;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(626)
					b->maxVelocity->set_y(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(621)
			tmp2->forEach( Dynamic(new _Function_2_1(AccelerationY,SpeedMaxX,AccelerationX,SpeedMaxY)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setBulletAcceleration,(void))

Void FlxWeapon_obj::setBulletOffset( Float OffsetX,Float OffsetY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletOffset",0xc1306c4e,"flixel.addons.weapon.FlxWeapon.setBulletOffset","flixel/addons/weapon/FlxWeapon.hx",640,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(OffsetX,"OffsetX")
		HX_STACK_ARG(OffsetY,"OffsetY")
		HX_STACK_LINE(641)
		::flixel::util::FlxPoint tmp = this->_positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(641)
		Float tmp1 = OffsetX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		tmp->set_x(tmp1);
		HX_STACK_LINE(642)
		::flixel::util::FlxPoint tmp2 = this->_positionOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(642)
		Float tmp3 = OffsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(642)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletOffset,(void))

Void FlxWeapon_obj::setBulletRandomFactor( hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,::flixel::util::FlxPoint RandomPosition,hx::Null< Float >  __o_RandomLifeSpan){
int RandomAngle = __o_RandomAngle.Default(0);
int RandomSpeed = __o_RandomSpeed.Default(0);
Float RandomLifeSpan = __o_RandomLifeSpan.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletRandomFactor",0x976ca62d,"flixel.addons.weapon.FlxWeapon.setBulletRandomFactor","flixel/addons/weapon/FlxWeapon.hx",654,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RandomAngle,"RandomAngle")
	HX_STACK_ARG(RandomSpeed,"RandomSpeed")
	HX_STACK_ARG(RandomPosition,"RandomPosition")
	HX_STACK_ARG(RandomLifeSpan,"RandomLifeSpan")
{
		HX_STACK_LINE(655)
		this->rndFactorAngle = RandomAngle;
		HX_STACK_LINE(656)
		this->rndFactorSpeed = RandomSpeed;
		HX_STACK_LINE(658)
		bool tmp = (RandomPosition != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		if ((tmp)){
			HX_STACK_LINE(660)
			this->rndFactorPosition = RandomPosition;
		}
		HX_STACK_LINE(663)
		bool tmp1 = (RandomLifeSpan < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(663)
		if ((tmp1)){
			HX_STACK_LINE(663)
			Float tmp3 = RandomLifeSpan;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(663)
			tmp2 = -(tmp3);
		}
		else{
			HX_STACK_LINE(663)
			tmp2 = RandomLifeSpan;
		}
		HX_STACK_LINE(663)
		this->rndFactorLifeSpan = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setBulletRandomFactor,(void))

Void FlxWeapon_obj::setBulletLifeSpan( Float Lifespan){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletLifeSpan",0x7502ff61,"flixel.addons.weapon.FlxWeapon.setBulletLifeSpan","flixel/addons/weapon/FlxWeapon.hx",674,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Lifespan,"Lifespan")
		HX_STACK_LINE(674)
		this->bulletLifeSpan = Lifespan;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletLifeSpan,(void))

Void FlxWeapon_obj::setBulletElasticity( Float Elasticity){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletElasticity",0x858d71b4,"flixel.addons.weapon.FlxWeapon.setBulletElasticity","flixel/addons/weapon/FlxWeapon.hx",684,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Elasticity,"Elasticity")
		HX_STACK_LINE(684)
		this->bulletElasticity = Elasticity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletElasticity,(void))

::flixel::addons::weapon::FlxBullet FlxWeapon_obj::getFreeBullet( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","getFreeBullet",0x2e2a229b,"flixel.addons.weapon.FlxWeapon.getFreeBullet","flixel/addons/weapon/FlxWeapon.hx",693,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(694)
	::flixel::addons::weapon::FlxBullet result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(696)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(696)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(696)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(696)
	if ((tmp2)){
		HX_STACK_LINE(696)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(696)
		::flixel::group::FlxTypedGroup tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(696)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(696)
		tmp3 = (tmp6 == (int)0);
	}
	else{
		HX_STACK_LINE(696)
		tmp3 = true;
	}
	HX_STACK_LINE(696)
	if ((tmp3)){
		HX_STACK_LINE(698)
		HX_STACK_DO_THROW(HX_HCSTRING("Weapon.as cannot fire a bullet until one has been created via a call to makePixelBullet or makeImageBullet","\x20","\xfd","\xba","\xb2"));
		HX_STACK_LINE(699)
		return null();
	}
	HX_STACK_LINE(702)
	::flixel::addons::weapon::FlxBullet bullet;		HX_STACK_VAR(bullet,"bullet");
	HX_STACK_LINE(704)
	{
		HX_STACK_LINE(704)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(704)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		int tmp5 = tmp4->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(704)
		while((true)){
			HX_STACK_LINE(704)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(704)
			if ((tmp7)){
				HX_STACK_LINE(704)
				break;
			}
			HX_STACK_LINE(704)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(706)
			::flixel::group::FlxTypedGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(706)
			::flixel::addons::weapon::FlxBullet tmp10 = tmp9->members->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(706)
			bullet = tmp10;
			HX_STACK_LINE(708)
			bool tmp11 = (bullet->exists == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(708)
			if ((tmp11)){
				HX_STACK_LINE(710)
				result = bullet;
				HX_STACK_LINE(711)
				break;
			}
		}
	}
	HX_STACK_LINE(715)
	::flixel::addons::weapon::FlxBullet tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(715)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,getFreeBullet,return )

Void FlxWeapon_obj::setPreFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setPreFireCallback",0x17fc4125,"flixel.addons.weapon.FlxWeapon.setPreFireCallback","flixel/addons/weapon/FlxWeapon.hx",725,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(726)
		this->onPreFireCallback = Callback;
		HX_STACK_LINE(727)
		this->onPreFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setPreFireCallback,(void))

Void FlxWeapon_obj::setFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFireCallback",0xd6298074,"flixel.addons.weapon.FlxWeapon.setFireCallback","flixel/addons/weapon/FlxWeapon.hx",737,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(738)
		this->onFireCallback = Callback;
		HX_STACK_LINE(739)
		this->onFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setFireCallback,(void))

Void FlxWeapon_obj::setPostFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setPostFireCallback",0xdc094174,"flixel.addons.weapon.FlxWeapon.setPostFireCallback","flixel/addons/weapon/FlxWeapon.hx",749,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(750)
		this->onPostFireCallback = Callback;
		HX_STACK_LINE(751)
		this->onPostFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setPostFireCallback,(void))

Void FlxWeapon_obj::bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  __o_SkipParent){
bool SkipParent = __o_SkipParent.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","bulletsOverlap",0x10a2055f,"flixel.addons.weapon.FlxWeapon.bulletsOverlap","flixel/addons/weapon/FlxWeapon.hx",762,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(NotifyCallBack,"NotifyCallBack")
	HX_STACK_ARG(SkipParent,"SkipParent")
{
		HX_STACK_LINE(763)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(763)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(763)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(763)
		if ((tmp1)){
			HX_STACK_LINE(763)
			::flixel::group::FlxTypedGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(763)
			::flixel::group::FlxTypedGroup tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(763)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(763)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(763)
			tmp2 = false;
		}
		HX_STACK_LINE(763)
		if ((tmp2)){
			HX_STACK_LINE(765)
			this->_skipParentCollision = SkipParent;
			HX_STACK_LINE(766)
			::flixel::FlxBasic tmp3 = ObjectOrGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(766)
			::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(766)
			bool tmp5 = (NotifyCallBack != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(766)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(766)
			if ((tmp5)){
				HX_STACK_LINE(766)
				tmp6 = NotifyCallBack;
			}
			else{
				HX_STACK_LINE(766)
				tmp6 = this->onBulletHit_dyn();
			}
			HX_STACK_LINE(766)
			Dynamic tmp7 = this->shouldBulletHit_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(766)
			::flixel::FlxG_obj::overlap(tmp3,tmp4,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxWeapon_obj,bulletsOverlap,(void))

bool FlxWeapon_obj::shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","shouldBulletHit",0xf466b895,"flixel.addons.weapon.FlxWeapon.shouldBulletHit","flixel/addons/weapon/FlxWeapon.hx",771,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Bullet,"Bullet")
	HX_STACK_LINE(772)
	::flixel::FlxSprite tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(772)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(772)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(772)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(772)
	if ((tmp2)){
		HX_STACK_LINE(772)
		tmp3 = this->_skipParentCollision;
	}
	else{
		HX_STACK_LINE(772)
		tmp3 = false;
	}
	HX_STACK_LINE(772)
	if ((tmp3)){
		HX_STACK_LINE(774)
		return false;
	}
	HX_STACK_LINE(777)
	::flixel::FlxObject tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(777)
	bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::tile::FlxTilemap >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(777)
	if ((tmp5)){
		HX_STACK_LINE(779)
		::flixel::tile::FlxTilemap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(779)
		tmp6 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object);
		HX_STACK_LINE(779)
		::flixel::FlxObject tmp7 = Bullet;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(779)
		bool tmp8 = tmp6->overlapsWithCallback(tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(779)
		return tmp8;
	}
	else{
		HX_STACK_LINE(783)
		return true;
	}
	HX_STACK_LINE(777)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,shouldBulletHit,return )

Void FlxWeapon_obj::onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","onBulletHit",0x45e7eaa9,"flixel.addons.weapon.FlxWeapon.onBulletHit","flixel/addons/weapon/FlxWeapon.hx",789,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(789)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,onBulletHit,(void))

int FlxWeapon_obj::BULLET_UP;

int FlxWeapon_obj::BULLET_DOWN;

int FlxWeapon_obj::BULLET_LEFT;

int FlxWeapon_obj::BULLET_RIGHT;

int FlxWeapon_obj::BULLET_NORTH_EAST;

int FlxWeapon_obj::BULLET_NORTH_WEST;

int FlxWeapon_obj::BULLET_SOUTH_EAST;

int FlxWeapon_obj::BULLET_SOUTH_WEST;

int FlxWeapon_obj::FIRE;

int FlxWeapon_obj::FIRE_AT_MOUSE;

int FlxWeapon_obj::FIRE_AT_POSITION;

int FlxWeapon_obj::FIRE_AT_TARGET;

int FlxWeapon_obj::FIRE_FROM_ANGLE;

int FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE;

int FlxWeapon_obj::FIRE_AT_TOUCH;


FlxWeapon_obj::FlxWeapon_obj()
{
}

void FlxWeapon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxWeapon);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	HX_MARK_MEMBER_NAME(bulletID,"bulletID");
	HX_MARK_MEMBER_NAME(nextFire,"nextFire");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(multiShot,"multiShot");
	HX_MARK_MEMBER_NAME(multiShotPattern,"multiShotPattern");
	HX_MARK_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_MARK_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_MARK_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_MARK_MEMBER_NAME(currentBullet,"currentBullet");
	HX_MARK_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_MARK_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_MARK_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_MARK_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_MARK_MEMBER_NAME(onFireSound,"onFireSound");
	HX_MARK_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_MARK_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	HX_MARK_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_MARK_MEMBER_NAME(_fireX,"_fireX");
	HX_MARK_MEMBER_NAME(_fireY,"_fireY");
	HX_MARK_MEMBER_NAME(_lastFired,"_lastFired");
	HX_MARK_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_MARK_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_MARK_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_MARK_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_MARK_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_MARK_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_MARK_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_MARK_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_MARK_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_MARK_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_MARK_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_MARK_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_MARK_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
	HX_MARK_END_CLASS();
}

void FlxWeapon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	HX_VISIT_MEMBER_NAME(bulletID,"bulletID");
	HX_VISIT_MEMBER_NAME(nextFire,"nextFire");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(multiShot,"multiShot");
	HX_VISIT_MEMBER_NAME(multiShotPattern,"multiShotPattern");
	HX_VISIT_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_VISIT_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_VISIT_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_VISIT_MEMBER_NAME(currentBullet,"currentBullet");
	HX_VISIT_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_VISIT_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_VISIT_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_VISIT_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_VISIT_MEMBER_NAME(onFireSound,"onFireSound");
	HX_VISIT_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_VISIT_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	HX_VISIT_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_VISIT_MEMBER_NAME(_fireX,"_fireX");
	HX_VISIT_MEMBER_NAME(_fireY,"_fireY");
	HX_VISIT_MEMBER_NAME(_lastFired,"_lastFired");
	HX_VISIT_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_VISIT_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_VISIT_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_VISIT_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_VISIT_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_VISIT_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_VISIT_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_VISIT_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_VISIT_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_VISIT_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_VISIT_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_VISIT_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_VISIT_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
}

Dynamic FlxWeapon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { return _fireX; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { return _fireY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runFire") ) { return runFire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { return bulletID; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { return nextFire; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiShot") ) { return multiShot; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { return bulletType; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { return _lastFired; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { return bulletSpeed; }
		if (HX_FIELD_EQ(inName,"onFireSound") ) { return onFireSound; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireRate") ) { return setFireRate_dyn(); }
		if (HX_FIELD_EQ(inName,"onBulletHit") ) { return onBulletHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { return bulletDamage; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { return _touchTarget; }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { return currentBullet; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { return _bulletsFired; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeBullet") ) { return getFreeBullet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { return bulletLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { return onFireCallback; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { return onPreFireSound; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { return _rotateToAngle; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { return _magazineCount; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletSpeed") ) { return setBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getBulletSpeed") ) { return getBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletsOverlap") ) { return bulletsOverlap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { return onPostFireSound; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { return _fireFromParent; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { return _positionOffset; }
		if (HX_FIELD_EQ(inName,"makePixelBullet") ) { return makePixelBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"makeImageBullet") ) { return makeImageBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletBounds") ) { return setBulletBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletOffset") ) { return setBulletOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireCallback") ) { return setFireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"shouldBulletHit") ) { return shouldBulletHit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiShotPattern") ) { return multiShotPattern; }
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { return bulletElasticity; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { return _angleFromParent; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { return _currentMagazine; }
		if (HX_FIELD_EQ(inName,"setBulletGravity") ) { return setBulletGravity_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { return rndFactorPosition; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { return onPreFireCallback; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { return _fireFromPosition; }
		if (HX_FIELD_EQ(inName,"setFiringPosition") ) { return setFiringPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletLifeSpan") ) { return setBulletLifeSpan_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { return onPostFireCallback; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { return _magazineSwapDelay; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { return _magazineSwapSound; }
		if (HX_FIELD_EQ(inName,"makeAnimatedBullet") ) { return makeAnimatedBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletDirection") ) { return setBulletDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreFireCallback") ) { return setPreFireCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { return _bulletsPerMagazine; }
		if (HX_FIELD_EQ(inName,"fireFromParentAngle") ) { return fireFromParentAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletElasticity") ) { return setBulletElasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"setPostFireCallback") ) { return setPostFireCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { return _directionFromParent; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { return _skipParentCollision; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { return _magazineSwapCallback; }
		if (HX_FIELD_EQ(inName,"setBulletAcceleration") ) { return setBulletAcceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletRandomFactor") ) { return setBulletRandomFactor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxWeapon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { _fireX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { _fireY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { bulletID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { nextFire=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiShot") ) { multiShot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { _lastFired=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { bulletSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFireSound") ) { onFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { bulletDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { _touchTarget=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { currentBullet=inValue.Cast< ::flixel::addons::weapon::FlxBullet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { _bulletsFired=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { bulletLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { onFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { onPreFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { _rotateToAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { _magazineCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { onPostFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { _fireFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { _positionOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiShotPattern") ) { multiShotPattern=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { bulletElasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { _angleFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { _currentMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { rndFactorPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { onPreFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { _fireFromPosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { onPostFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { _magazineSwapDelay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { _magazineSwapSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { _bulletsPerMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { _directionFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { _skipParentCollision=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { _magazineSwapCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxWeapon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxWeapon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"));
	outFields->push(HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87"));
	outFields->push(HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("multiShot","\x13","\xbc","\x8a","\x8d"));
	outFields->push(HX_HCSTRING("multiShotPattern","\x7d","\x6a","\x0b","\xc1"));
	outFields->push(HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"));
	outFields->push(HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9"));
	outFields->push(HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"));
	outFields->push(HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"));
	outFields->push(HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"));
	outFields->push(HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"));
	outFields->push(HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89"));
	outFields->push(HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"));
	outFields->push(HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"));
	outFields->push(HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e"));
	outFields->push(HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"));
	outFields->push(HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4"));
	outFields->push(HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66"));
	outFields->push(HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a"));
	outFields->push(HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc"));
	outFields->push(HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc"));
	outFields->push(HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8"));
	outFields->push(HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52"));
	outFields->push(HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc"));
	outFields->push(HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe"));
	outFields->push(HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2"));
	outFields->push(HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1"));
	outFields->push(HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08"));
	outFields->push(HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34"));
	outFields->push(HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab"));
	outFields->push(HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa"));
	outFields->push(HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23"));
	outFields->push(HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f"));
	outFields->push(HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0"));
	outFields->push(HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxWeapon_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxWeapon_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxWeapon_obj,bulletType),HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,bulletID),HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,nextFire),HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,bulletSpeed),HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxWeapon_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxWeapon_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,multiShot),HX_HCSTRING("multiShot","\x13","\xbc","\x8a","\x8d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxWeapon_obj,multiShotPattern),HX_HCSTRING("multiShotPattern","\x7d","\x6a","\x0b","\xc1")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletLifeSpan),HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletDamage),HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletElasticity),HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,rndFactorAngle),HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,rndFactorSpeed),HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,rndFactorLifeSpan),HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,rndFactorPosition),HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89")},
	{hx::fsObject /*::flixel::addons::weapon::FlxBullet*/ ,(int)offsetof(FlxWeapon_obj,currentBullet),HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onPreFireCallback),HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onFireCallback),HX_HCSTRING("onFireCallback","\x5a","\x2f","\x8f","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onPostFireCallback),HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onPreFireSound),HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onFireSound),HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onPostFireSound),HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_rotateToAngle),HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,_velocity),HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_fireFromPosition),HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_fireX),HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_fireY),HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_lastFired),HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(FlxWeapon_obj,_touchTarget),HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_fireFromParent),HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,_positionOffset),HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_directionFromParent),HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_angleFromParent),HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_bulletsFired),HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_currentMagazine),HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_magazineCount),HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_bulletsPerMagazine),HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_magazineSwapDelay),HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_skipParentCollision),HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,_magazineSwapCallback),HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,_magazineSwapSound),HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_UP,HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_DOWN,HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_LEFT,HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_RIGHT,HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_NORTH_EAST,HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_NORTH_WEST,HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_SOUTH_EAST,HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc")},
	{hx::fsInt,(void *) &FlxWeapon_obj::BULLET_SOUTH_WEST,HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE,HX_HCSTRING("FIRE","\xb6","\x9b","\x7c","\x2e")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_AT_MOUSE,HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_AT_POSITION,HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_AT_TARGET,HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_FROM_ANGLE,HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE,HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f")},
	{hx::fsInt,(void *) &FlxWeapon_obj::FIRE_AT_TOUCH,HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"),
	HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87"),
	HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("multiShot","\x13","\xbc","\x8a","\x8d"),
	HX_HCSTRING("multiShotPattern","\x7d","\x6a","\x0b","\xc1"),
	HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"),
	HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9"),
	HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"),
	HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"),
	HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"),
	HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"),
	HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89"),
	HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"),
	HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b"),
	HX_HCSTRING("onFireCallback","\x5a","\x2f","\x8f","\x6a"),
	HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e"),
	HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"),
	HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e"),
	HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"),
	HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4"),
	HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66"),
	HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a"),
	HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc"),
	HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc"),
	HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8"),
	HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52"),
	HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc"),
	HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe"),
	HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2"),
	HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1"),
	HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08"),
	HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34"),
	HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab"),
	HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa"),
	HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23"),
	HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f"),
	HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0"),
	HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd"),
	HX_HCSTRING("makePixelBullet","\x1a","\x5e","\x1a","\x75"),
	HX_HCSTRING("makeImageBullet","\xaf","\x84","\xcd","\x4b"),
	HX_HCSTRING("makeAnimatedBullet","\xd3","\xa7","\x4f","\x02"),
	HX_HCSTRING("runFire","\xa1","\xe8","\xf8","\xd0"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("fireAtMouse","\x1c","\x37","\x7d","\x47"),
	HX_HCSTRING("fireAtTouch","\xb6","\x38","\x4b","\x4f"),
	HX_HCSTRING("fireAtPosition","\x12","\x34","\xfa","\x58"),
	HX_HCSTRING("fireAtTarget","\x7a","\xaa","\xf1","\x00"),
	HX_HCSTRING("fireFromAngle","\x73","\x13","\xe1","\x7b"),
	HX_HCSTRING("fireFromParentAngle","\xe9","\xfd","\x8a","\xb7"),
	HX_HCSTRING("setParent","\x6c","\x7a","\x25","\x4d"),
	HX_HCSTRING("setFiringPosition","\x7e","\x25","\x2a","\x09"),
	HX_HCSTRING("setBulletSpeed","\x63","\x41","\x01","\xdc"),
	HX_HCSTRING("getBulletSpeed","\xef","\x58","\xe1","\xbb"),
	HX_HCSTRING("setFireRate","\x78","\x2f","\x6d","\xfb"),
	HX_HCSTRING("setBulletBounds","\x19","\x7d","\x3a","\x50"),
	HX_HCSTRING("setBulletDirection","\x1b","\x2a","\x88","\x66"),
	HX_HCSTRING("setBulletGravity","\x2a","\x47","\x3a","\x67"),
	HX_HCSTRING("setBulletAcceleration","\xe4","\x89","\x5a","\x45"),
	HX_HCSTRING("setBulletOffset","\x37","\x8e","\x5c","\x4a"),
	HX_HCSTRING("setBulletRandomFactor","\xd6","\x9c","\xf0","\x66"),
	HX_HCSTRING("setBulletLifeSpan","\x8a","\x2d","\xea","\xba"),
	HX_HCSTRING("setBulletElasticity","\x1d","\x3c","\x3b","\x76"),
	HX_HCSTRING("getFreeBullet","\x44","\xc8","\xa2","\xeb"),
	HX_HCSTRING("setPreFireCallback","\xdc","\x76","\x5d","\xfc"),
	HX_HCSTRING("setFireCallback","\x5d","\xa2","\x55","\x5f"),
	HX_HCSTRING("setPostFireCallback","\xdd","\x0b","\xb7","\xcc"),
	HX_HCSTRING("bulletsOverlap","\x96","\x53","\xba","\x1c"),
	HX_HCSTRING("shouldBulletHit","\x7e","\xda","\x92","\x7d"),
	HX_HCSTRING("onBulletHit","\x12","\xa4","\xb0","\x34"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE,"FIRE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE,"FIRE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#endif

hx::Class FlxWeapon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d"),
	HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58"),
	HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d"),
	HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5"),
	HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f"),
	HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b"),
	HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc"),
	HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8"),
	HX_HCSTRING("FIRE","\xb6","\x9b","\x7c","\x2e"),
	HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6"),
	HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe"),
	HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41"),
	HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d"),
	HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f"),
	HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee"),
	::String(null()) };

void FlxWeapon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.weapon.FlxWeapon","\x85","\x60","\xc0","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxWeapon_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxWeapon_obj >;
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

void FlxWeapon_obj::__boot()
{
	BULLET_UP= (int)-90;
	BULLET_DOWN= (int)90;
	BULLET_LEFT= (int)180;
	BULLET_RIGHT= (int)0;
	BULLET_NORTH_EAST= (int)-45;
	BULLET_NORTH_WEST= (int)-135;
	BULLET_SOUTH_EAST= (int)45;
	BULLET_SOUTH_WEST= (int)135;
	FIRE= (int)0;
	FIRE_AT_MOUSE= (int)1;
	FIRE_AT_POSITION= (int)2;
	FIRE_AT_TARGET= (int)3;
	FIRE_FROM_ANGLE= (int)4;
	FIRE_FROM_PARENT_ANGLE= (int)5;
	FIRE_AT_TOUCH= (int)6;
}

} // end namespace flixel
} // end namespace addons
} // end namespace weapon
