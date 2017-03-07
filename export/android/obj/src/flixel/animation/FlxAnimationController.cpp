#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimationController_obj::__construct(::flixel::FlxSprite Sprite)
{
HX_STACK_FRAME("flixel.animation.FlxAnimationController","new",0x0b6477fc,"flixel.animation.FlxAnimationController.new","flixel/animation/FlxAnimationController.hx",11,0xa6f01372)
HX_STACK_THIS(this)
HX_STACK_ARG(Sprite,"Sprite")
{
	HX_STACK_LINE(21)
	this->frameIndex = (int)-1;
	HX_STACK_LINE(80)
	this->_sprite = Sprite;
	HX_STACK_LINE(81)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		tmp = tmp2;
	}
	HX_STACK_LINE(81)
	this->_animations = tmp;
}
;
	return null();
}

//FlxAnimationController_obj::~FlxAnimationController_obj() { }

Dynamic FlxAnimationController_obj::__CreateEmpty() { return  new FlxAnimationController_obj; }
hx::ObjectPtr< FlxAnimationController_obj > FlxAnimationController_obj::__new(::flixel::FlxSprite Sprite)
{  hx::ObjectPtr< FlxAnimationController_obj > _result_ = new FlxAnimationController_obj();
	_result_->__construct(Sprite);
	return _result_;}

Dynamic FlxAnimationController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimationController_obj > _result_ = new FlxAnimationController_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxAnimationController_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxAnimationController_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxAnimationController_obj >(this); }
Void FlxAnimationController_obj::update( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","update",0x8fb487ed,"flixel.animation.FlxAnimationController.update","flixel/animation/FlxAnimationController.hx",85,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			tmp2->update();
		}
		else{
			HX_STACK_LINE(90)
			::flixel::animation::FlxPrerotatedAnimation tmp2 = this->_prerotated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			if ((tmp3)){
				HX_STACK_LINE(92)
				::flixel::animation::FlxPrerotatedAnimation tmp4 = this->_prerotated;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				::flixel::FlxSprite tmp5 = this->_sprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				Float tmp6 = tmp5->angle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				tmp4->set_angle(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,update,(void))

::flixel::animation::FlxAnimationController FlxAnimationController_obj::copyFrom( ::flixel::animation::FlxAnimationController controller){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","copyFrom",0x9c3f4ea3,"flixel.animation.FlxAnimationController.copyFrom","flixel/animation/FlxAnimationController.hx",97,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(controller,"controller")
	HX_STACK_LINE(98)
	this->destroyAnimations();
	HX_STACK_LINE(100)
	Dynamic tmp = controller->_animations->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	for(::cpp::FastIterator_obj< ::flixel::animation::FlxAnimation > *__it = ::cpp::CreateFastIterator< ::flixel::animation::FlxAnimation >(tmp);  __it->hasNext(); ){
		::flixel::animation::FlxAnimation anim = __it->next();
		{
			HX_STACK_LINE(102)
			::String tmp1 = anim->name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			int tmp2 = anim->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			bool tmp3 = anim->looped;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			this->add(tmp1,anim->_frames,tmp2,tmp3);
		}
;
	}
	HX_STACK_LINE(105)
	bool tmp1 = (controller->_prerotated != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	if ((tmp1)){
		HX_STACK_LINE(107)
		this->createPrerotated(null());
	}
	HX_STACK_LINE(110)
	::String tmp2 = controller->get_name();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	if ((tmp3)){
		HX_STACK_LINE(112)
		::String tmp4 = controller->get_name();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		this->set_name(tmp4);
	}
	HX_STACK_LINE(115)
	int tmp4 = controller->frameIndex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	this->set_frameIndex(tmp4);
	HX_STACK_LINE(117)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,copyFrom,return )

Void FlxAnimationController_obj::createPrerotated( ::flixel::animation::FlxAnimationController Controller){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","createPrerotated",0xc538c8e6,"flixel.animation.FlxAnimationController.createPrerotated","flixel/animation/FlxAnimationController.hx",121,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Controller,"Controller")
		HX_STACK_LINE(122)
		this->destroyAnimations();
		HX_STACK_LINE(123)
		bool tmp = (Controller != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::flixel::animation::FlxAnimationController tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp)){
			HX_STACK_LINE(123)
			tmp1 = Controller;
		}
		else{
			HX_STACK_LINE(123)
			tmp1 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(123)
		Controller = tmp1;
		HX_STACK_LINE(124)
		::flixel::animation::FlxAnimationController tmp2 = Controller;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		Float tmp3 = Controller->_sprite->bakedRotationAngle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		::flixel::animation::FlxPrerotatedAnimation tmp4 = ::flixel::animation::FlxPrerotatedAnimation_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		this->_prerotated = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,createPrerotated,(void))

Void FlxAnimationController_obj::destroyAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroyAnimations",0x0b136325,"flixel.animation.FlxAnimationController.destroyAnimations","flixel/animation/FlxAnimationController.hx",128,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->clearAnimations();
		HX_STACK_LINE(130)
		this->clearPrerotated();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroyAnimations,(void))

Void FlxAnimationController_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","destroy",0xb4f8d296,"flixel.animation.FlxAnimationController.destroy","flixel/animation/FlxAnimationController.hx",134,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		this->destroyAnimations();
		HX_STACK_LINE(136)
		this->_animations = null();
		HX_STACK_LINE(137)
		this->callback = null();
		HX_STACK_LINE(138)
		this->_sprite = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,destroy,(void))

Void FlxAnimationController_obj::clearPrerotated( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearPrerotated",0x8ef9ed6f,"flixel.animation.FlxAnimationController.clearPrerotated","flixel/animation/FlxAnimationController.hx",142,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::flixel::animation::FlxPrerotatedAnimation tmp = this->_prerotated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			::flixel::animation::FlxPrerotatedAnimation tmp2 = this->_prerotated;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			tmp2->destroy();
		}
		HX_STACK_LINE(147)
		this->_prerotated = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearPrerotated,(void))

Void FlxAnimationController_obj::clearAnimations( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","clearAnimations",0x7ffc9e78,"flixel.animation.FlxAnimationController.clearAnimations","flixel/animation/FlxAnimationController.hx",151,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(154)
			::flixel::animation::FlxAnimation anim;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(155)
			::haxe::ds::StringMap tmp2 = this->_animations;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(157)
					::haxe::ds::StringMap tmp4 = this->_animations;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(157)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(157)
					::flixel::animation::FlxAnimation tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					anim = tmp6;
					HX_STACK_LINE(158)
					bool tmp7 = (anim != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					if ((tmp7)){
						HX_STACK_LINE(160)
						anim->destroy();
					}
					HX_STACK_LINE(162)
					::haxe::ds::StringMap tmp8 = this->_animations;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					tmp8->remove(tmp9);
				}
;
			}
		}
		HX_STACK_LINE(165)
		this->_curAnim = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,clearAnimations,(void))

::flixel::animation::FlxAnimation FlxAnimationController_obj::get( ::String Name){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get",0x0b5f2832,"flixel.animation.FlxAnimationController.get","flixel/animation/FlxAnimationController.hx",174,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(175)
	::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	::flixel::animation::FlxAnimation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,get,return )

Void FlxAnimationController_obj::add( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","add",0x0b5a99bd,"flixel.animation.FlxAnimationController.add","flixel/animation/FlxAnimationController.hx",186,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(188)
		int tmp = (Frames->length - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		int numFrames = tmp;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(189)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			bool tmp1 = (i >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			if ((tmp2)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(192)
			int tmp3 = Frames->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			int tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			bool tmp6 = (tmp3 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			if ((tmp6)){
				HX_STACK_LINE(194)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				Frames->splice(tmp7,(int)1);
			}
			HX_STACK_LINE(196)
			(i)--;
		}
		HX_STACK_LINE(199)
		bool tmp1 = (Frames->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(201)
			::flixel::animation::FlxAnimation tmp2 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,Frames,FrameRate,Looped);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(202)
			::haxe::ds::StringMap tmp3 = this->_animations;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			::String tmp4 = Name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			::flixel::animation::FlxAnimation tmp5 = anim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			tmp3->set(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,add,(void))

Void FlxAnimationController_obj::append( ::String Name,Array< int > Frames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","append",0x9882e3be,"flixel.animation.FlxAnimationController.append","flixel/animation/FlxAnimationController.hx",214,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Frames,"Frames")
		HX_STACK_LINE(215)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(217)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		if ((tmp3)){
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + Name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(220)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(220)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(225)
		int tmp4 = (Frames->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		int numFrames = tmp4;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(226)
		int i = numFrames;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			bool tmp5 = (i >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			if ((tmp6)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(229)
			int tmp7 = (numFrames - i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			int tmp8 = Frames->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			::flixel::FlxSprite tmp9 = this->_sprite;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(229)
			int tmp10 = tmp9->frames;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			if ((tmp11)){
				HX_STACK_LINE(232)
				int tmp12 = (numFrames - i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(232)
				int tmp13 = Frames->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(232)
				anim->_frames->push(tmp13);
			}
			HX_STACK_LINE(234)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,append,(void))

Void FlxAnimationController_obj::addByNames( ::String Name,Array< ::String > FrameNames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByNames",0x17c20e34,"flixel.animation.FlxAnimationController.addByNames","flixel/animation/FlxAnimationController.hx",246,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(FrameNames,"FrameNames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(247)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::flixel::util::loaders::CachedGraphics tmp1 = tmp->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		if ((tmp2)){
			HX_STACK_LINE(247)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			::flixel::util::loaders::TexturePackerData tmp6 = tmp5->cachedGraphics->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			::flixel::util::loaders::TexturePackerData tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(247)
			tmp3 = false;
		}
		HX_STACK_LINE(247)
		if ((tmp3)){
			HX_STACK_LINE(249)
			Array< int > indices = Array_obj< int >::__new();		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(250)
			this->byNamesHelper(indices,FrameNames);
			HX_STACK_LINE(252)
			bool tmp4 = (indices->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			if ((tmp4)){
				HX_STACK_LINE(254)
				::flixel::animation::FlxAnimation tmp5 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,indices,FrameRate,Looped);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				::flixel::animation::FlxAnimation anim = tmp5;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(255)
				::haxe::ds::StringMap tmp6 = this->_animations;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				::String tmp7 = Name;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				::flixel::animation::FlxAnimation tmp8 = anim;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(255)
				tmp6->set(tmp7,tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,addByNames,(void))

Void FlxAnimationController_obj::appendByNames( ::String Name,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByNames",0xcdc97653,"flixel.animation.FlxAnimationController.appendByNames","flixel/animation/FlxAnimationController.hx",268,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(269)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(271)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		if ((tmp3)){
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + Name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(274)
			return null();
		}
		HX_STACK_LINE(277)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		::flixel::util::loaders::CachedGraphics tmp5 = tmp4->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		if ((tmp6)){
			HX_STACK_LINE(277)
			::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			::flixel::FlxSprite tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(277)
			::flixel::util::loaders::TexturePackerData tmp10 = tmp9->cachedGraphics->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(277)
			::flixel::util::loaders::TexturePackerData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(277)
			tmp7 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(277)
			tmp7 = false;
		}
		HX_STACK_LINE(277)
		if ((tmp7)){
			HX_STACK_LINE(279)
			this->byNamesHelper(anim->_frames,FrameNames);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByNames,(void))

Void FlxAnimationController_obj::addByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByStringIndices",0x0f3d3cc2,"flixel.animation.FlxAnimationController.addByStringIndices","flixel/animation/FlxAnimationController.hx",293,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(294)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		::flixel::util::loaders::CachedGraphics tmp1 = tmp->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(294)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			::flixel::util::loaders::TexturePackerData tmp6 = tmp5->cachedGraphics->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			::flixel::util::loaders::TexturePackerData tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(294)
			tmp3 = false;
		}
		HX_STACK_LINE(294)
		if ((tmp3)){
			HX_STACK_LINE(296)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(297)
			::String tmp4 = Prefix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			::String tmp5 = Postfix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			this->byStringIndicesHelper(frameIndices,tmp4,Indices,tmp5);
			HX_STACK_LINE(299)
			bool tmp6 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			if ((tmp6)){
				HX_STACK_LINE(301)
				::flixel::animation::FlxAnimation tmp7 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(301)
				::flixel::animation::FlxAnimation anim = tmp7;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(302)
				::haxe::ds::StringMap tmp8 = this->_animations;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				::String tmp9 = Name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				::flixel::animation::FlxAnimation tmp10 = anim;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				tmp8->set(tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByStringIndices,(void))

Void FlxAnimationController_obj::appendByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByStringIndices",0x42285be1,"flixel.animation.FlxAnimationController.appendByStringIndices","flixel/animation/FlxAnimationController.hx",317,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(318)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(320)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		if ((tmp3)){
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(322)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + Name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(322)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(322)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(322)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(323)
			return null();
		}
		HX_STACK_LINE(326)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		::flixel::util::loaders::CachedGraphics tmp5 = tmp4->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(326)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(326)
		if ((tmp6)){
			HX_STACK_LINE(326)
			::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(326)
			::flixel::FlxSprite tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(326)
			::flixel::util::loaders::TexturePackerData tmp10 = tmp9->cachedGraphics->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(326)
			::flixel::util::loaders::TexturePackerData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(326)
			tmp7 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(326)
			tmp7 = false;
		}
		HX_STACK_LINE(326)
		if ((tmp7)){
			HX_STACK_LINE(328)
			::String tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			::String tmp9 = Postfix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			this->byStringIndicesHelper(anim->_frames,tmp8,Indices,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByStringIndices,(void))

Void FlxAnimationController_obj::addByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByIndices",0x4dbf3893,"flixel.animation.FlxAnimationController.addByIndices","flixel/animation/FlxAnimationController.hx",342,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Indices,"Indices")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(343)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		::flixel::util::loaders::CachedGraphics tmp1 = tmp->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		if ((tmp2)){
			HX_STACK_LINE(343)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			::flixel::util::loaders::TexturePackerData tmp6 = tmp5->cachedGraphics->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(343)
			::flixel::util::loaders::TexturePackerData tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(343)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(343)
			tmp3 = false;
		}
		HX_STACK_LINE(343)
		if ((tmp3)){
			HX_STACK_LINE(345)
			Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
			HX_STACK_LINE(346)
			::String tmp4 = Prefix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			::String tmp5 = Postfix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			this->byIndicesHelper(frameIndices,tmp4,Indices,tmp5);
			HX_STACK_LINE(348)
			bool tmp6 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(348)
			if ((tmp6)){
				HX_STACK_LINE(350)
				::flixel::animation::FlxAnimation tmp7 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(350)
				::flixel::animation::FlxAnimation anim = tmp7;		HX_STACK_VAR(anim,"anim");
				HX_STACK_LINE(351)
				::haxe::ds::StringMap tmp8 = this->_animations;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(351)
				::String tmp9 = Name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(351)
				::flixel::animation::FlxAnimation tmp10 = anim;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(351)
				tmp8->set(tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxAnimationController_obj,addByIndices,(void))

Void FlxAnimationController_obj::appendByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByIndices",0x22882672,"flixel.animation.FlxAnimationController.appendByIndices","flixel/animation/FlxAnimationController.hx",366,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(367)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(369)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		if ((tmp3)){
			HX_STACK_LINE(371)
			{
				HX_STACK_LINE(371)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + Name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(371)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(371)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(372)
			return null();
		}
		HX_STACK_LINE(375)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		::flixel::util::loaders::CachedGraphics tmp5 = tmp4->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(375)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(375)
		if ((tmp6)){
			HX_STACK_LINE(375)
			::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(375)
			::flixel::FlxSprite tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(375)
			::flixel::util::loaders::TexturePackerData tmp10 = tmp9->cachedGraphics->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(375)
			::flixel::util::loaders::TexturePackerData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(375)
			tmp7 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(375)
			tmp7 = false;
		}
		HX_STACK_LINE(375)
		if ((tmp7)){
			HX_STACK_LINE(377)
			::String tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			::String tmp9 = Postfix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			this->byIndicesHelper(anim->_frames,tmp8,Indices,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,appendByIndices,(void))

int FlxAnimationController_obj::findSpriteFrame( ::String Prefix,int Index,::String Postfix){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","findSpriteFrame",0x746a2bcb,"flixel.animation.FlxAnimationController.findSpriteFrame","flixel/animation/FlxAnimationController.hx",388,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Postfix,"Postfix")
	HX_STACK_LINE(389)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	int numFrames = tmp->frames;		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(390)
	::flixel::FlxSprite tmp1 = this->_sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	Array< ::Dynamic > flxFrames = tmp1->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic );		HX_STACK_VAR(flxFrames,"flxFrames");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp2 = (_g < numFrames);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(391)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			if ((tmp3)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(393)
			::flixel::_system::layer::frames::FlxFrame tmp5 = flxFrames->__get(i).StaticCast< ::flixel::_system::layer::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			::String name = tmp5->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(394)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			::String tmp7 = Prefix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(394)
			::String tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(394)
			::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(394)
			bool tmp10 = ::StringTools_obj::startsWith(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(394)
			if ((tmp10)){
				HX_STACK_LINE(394)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				::String tmp13 = Postfix;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				::String tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(394)
				::String tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(394)
				tmp11 = ::StringTools_obj::endsWith(tmp14,tmp15);
			}
			else{
				HX_STACK_LINE(394)
				tmp11 = false;
			}
			HX_STACK_LINE(394)
			if ((tmp11)){
				HX_STACK_LINE(396)
				int tmp12 = Prefix.length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(396)
				int tmp13 = (name.length - Postfix.length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(396)
				::String tmp14 = name.substring(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(396)
				Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(396)
				Dynamic index = tmp15;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(397)
				bool tmp16 = (index != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(397)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(397)
				if ((tmp16)){
					HX_STACK_LINE(397)
					tmp17 = (index == Index);
				}
				else{
					HX_STACK_LINE(397)
					tmp17 = false;
				}
				HX_STACK_LINE(397)
				if ((tmp17)){
					HX_STACK_LINE(399)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(399)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(404)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,findSpriteFrame,return )

Void FlxAnimationController_obj::addByPrefix( ::String Name,::String Prefix,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","addByPrefix",0x4347f9a6,"flixel.animation.FlxAnimationController.addByPrefix","flixel/animation/FlxAnimationController.hx",415,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(416)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		::flixel::util::loaders::CachedGraphics tmp1 = tmp->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		if ((tmp2)){
			HX_STACK_LINE(416)
			::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			::flixel::util::loaders::TexturePackerData tmp6 = tmp5->cachedGraphics->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			::flixel::util::loaders::TexturePackerData tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(416)
			tmp3 = false;
		}
		HX_STACK_LINE(416)
		if ((tmp3)){
			HX_STACK_LINE(418)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(419)
			::String tmp4 = Prefix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			this->findByPrefix(animFrames,tmp4);
			HX_STACK_LINE(421)
			bool tmp5 = (animFrames->length > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			if ((tmp5)){
				HX_STACK_LINE(423)
				Array< int > frameIndices = Array_obj< int >::__new();		HX_STACK_VAR(frameIndices,"frameIndices");
				HX_STACK_LINE(424)
				::String tmp6 = Prefix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(424)
				this->byPrefixHelper(frameIndices,animFrames,tmp6);
				HX_STACK_LINE(426)
				bool tmp7 = (frameIndices->length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(426)
				if ((tmp7)){
					HX_STACK_LINE(428)
					::flixel::animation::FlxAnimation tmp8 = ::flixel::animation::FlxAnimation_obj::__new(hx::ObjectPtr<OBJ_>(this),Name,frameIndices,FrameRate,Looped);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(428)
					::flixel::animation::FlxAnimation anim = tmp8;		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(429)
					::haxe::ds::StringMap tmp9 = this->_animations;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(429)
					::String tmp10 = Name;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(429)
					::flixel::animation::FlxAnimation tmp11 = anim;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(429)
					tmp9->set(tmp10,tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,addByPrefix,(void))

Void FlxAnimationController_obj::appendByPrefix( ::String Name,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","appendByPrefix",0xd3bbaca7,"flixel.animation.FlxAnimationController.appendByPrefix","flixel/animation/FlxAnimationController.hx",443,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(444)
		::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(444)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(444)
		::flixel::animation::FlxAnimation anim = tmp2;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(446)
		bool tmp3 = (anim == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		if ((tmp3)){
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(448)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + Name);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(448)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(448)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(448)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(449)
			return null();
		}
		HX_STACK_LINE(452)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(452)
		::flixel::util::loaders::CachedGraphics tmp5 = tmp4->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(452)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(452)
		if ((tmp6)){
			HX_STACK_LINE(452)
			::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			::flixel::FlxSprite tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(452)
			::flixel::util::loaders::TexturePackerData tmp10 = tmp9->cachedGraphics->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(452)
			::flixel::util::loaders::TexturePackerData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(452)
			tmp7 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(452)
			tmp7 = false;
		}
		HX_STACK_LINE(452)
		if ((tmp7)){
			HX_STACK_LINE(454)
			Array< ::Dynamic > animFrames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(animFrames,"animFrames");
			HX_STACK_LINE(455)
			::String tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(455)
			this->findByPrefix(animFrames,tmp8);
			HX_STACK_LINE(457)
			bool tmp9 = (animFrames->length > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(457)
			if ((tmp9)){
				HX_STACK_LINE(459)
				::String tmp10 = Prefix;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(459)
				this->byPrefixHelper(anim->_frames,animFrames,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,appendByPrefix,(void))

Void FlxAnimationController_obj::play( ::String AnimName,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","play",0xeddc2ed8,"flixel.animation.FlxAnimationController.play","flixel/animation/FlxAnimationController.hx",472,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(473)
		bool tmp = (AnimName == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		if ((tmp)){
			HX_STACK_LINE(475)
			::flixel::animation::FlxAnimation tmp1 = this->_curAnim;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(475)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(475)
			if ((tmp2)){
				HX_STACK_LINE(477)
				::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(477)
				tmp3->stop();
			}
			HX_STACK_LINE(479)
			this->_curAnim = null();
		}
		HX_STACK_LINE(482)
		bool tmp1 = (AnimName == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		if ((tmp2)){
			HX_STACK_LINE(482)
			::haxe::ds::StringMap tmp4 = this->_animations;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(482)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(482)
			::String tmp6 = AnimName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(482)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(482)
			::flixel::animation::FlxAnimation tmp8 = tmp5->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(482)
			::flixel::animation::FlxAnimation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(482)
			::flixel::animation::FlxAnimation tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(482)
			tmp3 = (tmp10 == null());
		}
		else{
			HX_STACK_LINE(482)
			tmp3 = true;
		}
		HX_STACK_LINE(482)
		if ((tmp3)){
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				::flixel::_system::frontEnds::LogFrontEnd tmp4 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(484)
				::String tmp5 = (HX_HCSTRING("No animation called \"","\xba","\x9e","\x0f","\x3e") + AnimName);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(484)
				::String tmp6 = (tmp5 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(484)
				::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(484)
				tmp4->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp6,tmp7,true);
			}
			HX_STACK_LINE(485)
			return null();
		}
		HX_STACK_LINE(488)
		::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(488)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(488)
		if ((tmp5)){
			HX_STACK_LINE(488)
			::String tmp7 = AnimName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(488)
			::flixel::animation::FlxAnimation tmp8 = this->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(488)
			::flixel::animation::FlxAnimation tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(488)
			::String tmp10 = tmp9->name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(488)
			tmp6 = (tmp7 != tmp10);
		}
		else{
			HX_STACK_LINE(488)
			tmp6 = false;
		}
		HX_STACK_LINE(488)
		if ((tmp6)){
			HX_STACK_LINE(490)
			::flixel::animation::FlxAnimation tmp7 = this->_curAnim;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			tmp7->stop();
		}
		HX_STACK_LINE(492)
		::haxe::ds::StringMap tmp7 = this->_animations;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(492)
		::String tmp8 = AnimName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		::flixel::animation::FlxAnimation tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		this->_curAnim = tmp9;
		HX_STACK_LINE(493)
		::flixel::animation::FlxAnimation tmp10 = this->_curAnim;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		bool tmp11 = Force;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		int tmp12 = Frame;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		tmp10->play(tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,play,(void))

Void FlxAnimationController_obj::pause( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","pause",0x2b969d92,"flixel.animation.FlxAnimationController.pause","flixel/animation/FlxAnimationController.hx",500,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(501)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		if ((tmp1)){
			HX_STACK_LINE(503)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			tmp2->paused = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,pause,(void))

Void FlxAnimationController_obj::resume( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","resume",0x11336b91,"flixel.animation.FlxAnimationController.resume","flixel/animation/FlxAnimationController.hx",511,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		if ((tmp1)){
			HX_STACK_LINE(514)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			tmp2->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,resume,(void))

::flixel::animation::FlxAnimation FlxAnimationController_obj::getByName( ::String Name){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getByName",0x1940f994,"flixel.animation.FlxAnimationController.getByName","flixel/animation/FlxAnimationController.hx",522,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(523)
	::haxe::ds::StringMap tmp = this->_animations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	::flixel::animation::FlxAnimation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	::flixel::animation::FlxAnimation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(523)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getByName,return )

Void FlxAnimationController_obj::randomFrame( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","randomFrame",0x12c43ec6,"flixel.animation.FlxAnimationController.randomFrame","flixel/animation/FlxAnimationController.hx",531,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(532)
		::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		if ((tmp1)){
			HX_STACK_LINE(534)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			tmp2->stop();
			HX_STACK_LINE(535)
			this->_curAnim = null();
		}
		HX_STACK_LINE(537)
		::flixel::FlxSprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		int tmp3 = tmp2->frames;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(537)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(537)
		int tmp5 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(537)
		this->set_frameIndex(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,randomFrame,(void))

Void FlxAnimationController_obj::fireCallback( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","fireCallback",0x1523547f,"flixel.animation.FlxAnimationController.fireCallback","flixel/animation/FlxAnimationController.hx",541,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_LINE(542)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		if ((tmp1)){
			HX_STACK_LINE(544)
			::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(544)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(544)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(544)
			if ((tmp3)){
				HX_STACK_LINE(544)
				::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(544)
				tmp4 = tmp5->name;
			}
			else{
				HX_STACK_LINE(544)
				tmp4 = null();
			}
			HX_STACK_LINE(544)
			::String name = tmp4;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(545)
			::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(545)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(545)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(545)
			if ((tmp6)){
				HX_STACK_LINE(545)
				::flixel::animation::FlxAnimation tmp8 = this->_curAnim;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(545)
				tmp7 = tmp8->curFrame;
			}
			else{
				HX_STACK_LINE(545)
				tmp7 = this->frameIndex;
			}
			HX_STACK_LINE(545)
			int number = tmp7;		HX_STACK_VAR(number,"number");
			HX_STACK_LINE(546)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			int tmp9 = number;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			int tmp10 = this->frameIndex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(546)
			this->callback(tmp8,tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,fireCallback,(void))

Void FlxAnimationController_obj::byNamesHelper( Array< int > AddTo,Array< ::String > FrameNames){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byNamesHelper",0x4e6fbd5b,"flixel.animation.FlxAnimationController.byNamesHelper","flixel/animation/FlxAnimationController.hx",554,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(FrameNames,"FrameNames")
		HX_STACK_LINE(555)
		int l = FrameNames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(556)
			while((true)){
				HX_STACK_LINE(556)
				bool tmp = (_g < l);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(556)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(556)
				if ((tmp1)){
					HX_STACK_LINE(556)
					break;
				}
				HX_STACK_LINE(556)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(556)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(558)
				::String tmp3 = FrameNames->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(558)
				::String name = tmp3;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(559)
				::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(559)
				::haxe::ds::StringMap tmp5 = tmp4->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(559)
				::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(559)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(559)
				if ((tmp7)){
					HX_STACK_LINE(561)
					::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(561)
					::haxe::ds::StringMap tmp9 = tmp8->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(561)
					::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(561)
					::flixel::_system::layer::frames::FlxFrame tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(561)
					::flixel::_system::layer::frames::FlxFrame frameToAdd = tmp11;		HX_STACK_VAR(frameToAdd,"frameToAdd");
					HX_STACK_LINE(562)
					::flixel::FlxSprite tmp12 = this->_sprite;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(562)
					::flixel::_system::layer::frames::FlxFrame tmp13 = frameToAdd;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(562)
					int tmp14 = tmp12->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(562)
					AddTo->push(tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,byNamesHelper,(void))

Void FlxAnimationController_obj::byStringIndicesHelper( Array< int > AddTo,::String Prefix,Array< ::String > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byStringIndicesHelper",0xccff0b69,"flixel.animation.FlxAnimationController.byStringIndicesHelper","flixel/animation/FlxAnimationController.hx",571,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(572)
		int l = Indices->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(573)
			while((true)){
				HX_STACK_LINE(573)
				bool tmp = (_g < l);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(573)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(573)
				if ((tmp1)){
					HX_STACK_LINE(573)
					break;
				}
				HX_STACK_LINE(573)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(573)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(575)
				::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(575)
				::String tmp4 = Indices->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(575)
				::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(575)
				::String tmp6 = Postfix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(575)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(575)
				::String name = tmp7;		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(576)
				::flixel::FlxSprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(576)
				::haxe::ds::StringMap tmp9 = tmp8->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(576)
				::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(576)
				bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(576)
				if ((tmp11)){
					HX_STACK_LINE(578)
					::flixel::FlxSprite tmp12 = this->_sprite;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(578)
					::haxe::ds::StringMap tmp13 = tmp12->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(578)
					::String tmp14 = name;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(578)
					::flixel::_system::layer::frames::FlxFrame tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(578)
					::flixel::_system::layer::frames::FlxFrame frameToAdd = tmp15;		HX_STACK_VAR(frameToAdd,"frameToAdd");
					HX_STACK_LINE(579)
					::flixel::FlxSprite tmp16 = this->_sprite;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(579)
					::flixel::_system::layer::frames::FlxFrame tmp17 = frameToAdd;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(579)
					int tmp18 = tmp16->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(579)
					AddTo->push(tmp18);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byStringIndicesHelper,(void))

Void FlxAnimationController_obj::byIndicesHelper( Array< int > AddTo,::String Prefix,Array< int > Indices,::String Postfix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byIndicesHelper",0xe757113a,"flixel.animation.FlxAnimationController.byIndicesHelper","flixel/animation/FlxAnimationController.hx",588,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_ARG(Indices,"Indices")
		HX_STACK_ARG(Postfix,"Postfix")
		HX_STACK_LINE(589)
		int l = Indices->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(590)
		{
			HX_STACK_LINE(590)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(590)
			while((true)){
				HX_STACK_LINE(590)
				bool tmp = (_g < l);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(590)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(590)
				if ((tmp1)){
					HX_STACK_LINE(590)
					break;
				}
				HX_STACK_LINE(590)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(590)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(592)
				::String tmp3 = Prefix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(592)
				int tmp4 = Indices->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(592)
				::String tmp5 = Postfix;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(592)
				int tmp6 = this->findSpriteFrame(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(592)
				int indexToAdd = tmp6;		HX_STACK_VAR(indexToAdd,"indexToAdd");
				HX_STACK_LINE(593)
				bool tmp7 = (indexToAdd != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(593)
				if ((tmp7)){
					HX_STACK_LINE(595)
					int tmp8 = indexToAdd;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(595)
					AddTo->push(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxAnimationController_obj,byIndicesHelper,(void))

Void FlxAnimationController_obj::byPrefixHelper( Array< int > AddTo,Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","byPrefixHelper",0x238152fb,"flixel.animation.FlxAnimationController.byPrefixHelper","flixel/animation/FlxAnimationController.hx",604,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AddTo,"AddTo")
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(605)
		::flixel::_system::layer::frames::FlxFrame tmp = AnimFrames->__get((int)0).StaticCast< ::flixel::_system::layer::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(605)
		::String name = tmp->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(606)
		int tmp1 = Prefix.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(606)
		int tmp2 = name.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		int postIndex = tmp2;		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(607)
		int tmp3 = postIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(607)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(607)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(607)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(607)
		if ((tmp5)){
			HX_STACK_LINE(607)
			tmp6 = name.length;
		}
		else{
			HX_STACK_LINE(607)
			tmp6 = postIndex;
		}
		HX_STACK_LINE(607)
		int tmp7 = name.length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(607)
		::String tmp8 = name.substring(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(607)
		::String postFix = tmp8;		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(608)
		::flixel::animation::FlxAnimationController_obj::prefixLength = Prefix.length;
		HX_STACK_LINE(609)
		::flixel::animation::FlxAnimationController_obj::postfixLength = postFix.length;
		HX_STACK_LINE(610)
		Dynamic tmp9 = ::flixel::animation::FlxAnimationController_obj::frameSortFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(610)
		AnimFrames->sort(tmp9);
		HX_STACK_LINE(612)
		int l = AnimFrames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(613)
		{
			HX_STACK_LINE(613)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(613)
			while((true)){
				HX_STACK_LINE(613)
				bool tmp10 = (_g < l);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(613)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(613)
				if ((tmp11)){
					HX_STACK_LINE(613)
					break;
				}
				HX_STACK_LINE(613)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(613)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(615)
				::flixel::FlxSprite tmp13 = this->_sprite;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(615)
				::flixel::_system::layer::frames::FlxFrame tmp14 = AnimFrames->__get(i).StaticCast< ::flixel::_system::layer::frames::FlxFrame >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(615)
				int tmp15 = tmp13->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(615)
				AddTo->push(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimationController_obj,byPrefixHelper,(void))

Void FlxAnimationController_obj::findByPrefix( Array< ::Dynamic > AnimFrames,::String Prefix){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimationController","findByPrefix",0x32419106,"flixel.animation.FlxAnimationController.findByPrefix","flixel/animation/FlxAnimationController.hx",623,0xa6f01372)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AnimFrames,"AnimFrames")
		HX_STACK_ARG(Prefix,"Prefix")
		HX_STACK_LINE(624)
		::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(624)
		int tmp1 = tmp->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(625)
		{
			HX_STACK_LINE(625)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(625)
			while((true)){
				HX_STACK_LINE(625)
				bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(625)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(625)
				if ((tmp3)){
					HX_STACK_LINE(625)
					break;
				}
				HX_STACK_LINE(625)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(625)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(627)
				::flixel::FlxSprite tmp5 = this->_sprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(627)
				::flixel::_system::layer::frames::FlxFrame tmp6 = tmp5->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(627)
				::String tmp7 = tmp6->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(627)
				::String tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(627)
				bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(627)
				if ((tmp9)){
					HX_STACK_LINE(629)
					::flixel::FlxSprite tmp10 = this->_sprite;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(629)
					::flixel::_system::layer::frames::FlxFrame tmp11 = tmp10->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(629)
					AnimFrames->push(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,findByPrefix,(void))

int FlxAnimationController_obj::set_frameIndex( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameIndex",0xd769c646,"flixel.animation.FlxAnimationController.set_frameIndex","flixel/animation/FlxAnimationController.hx",635,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(636)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	::flixel::_system::layer::frames::FlxSpriteFrames tmp1 = tmp->framesData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	if ((tmp2)){
		HX_STACK_LINE(638)
		int tmp3 = Frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(638)
		int tmp5 = tmp4->frames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(638)
		int tmp6 = hx::Mod(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(638)
		Frame = tmp6;
		HX_STACK_LINE(640)
		int tmp7 = Frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(640)
		int tmp8 = this->frameIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(640)
		if ((tmp9)){
			HX_STACK_LINE(642)
			::flixel::FlxSprite tmp10 = this->_sprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(642)
			::flixel::FlxSprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(642)
			::flixel::_system::layer::frames::FlxFrame tmp12 = tmp11->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem(Frame);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(642)
			tmp10->set_frame(tmp12);
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(643)
				Dynamic tmp13 = this->callback_dyn();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(643)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(643)
				if ((tmp14)){
					HX_STACK_LINE(643)
					::flixel::animation::FlxAnimation tmp15 = this->_curAnim;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(643)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(643)
					::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(643)
					if ((tmp16)){
						HX_STACK_LINE(643)
						::flixel::animation::FlxAnimation tmp18 = this->_curAnim;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(643)
						tmp17 = tmp18->name;
					}
					else{
						HX_STACK_LINE(643)
						tmp17 = null();
					}
					HX_STACK_LINE(643)
					::String name = tmp17;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(643)
					::flixel::animation::FlxAnimation tmp18 = this->_curAnim;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(643)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(643)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(643)
					if ((tmp19)){
						HX_STACK_LINE(643)
						::flixel::animation::FlxAnimation tmp21 = this->_curAnim;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(643)
						tmp20 = tmp21->curFrame;
					}
					else{
						HX_STACK_LINE(643)
						tmp20 = this->frameIndex;
					}
					HX_STACK_LINE(643)
					int number = tmp20;		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(643)
					::String tmp21 = name;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(643)
					int tmp22 = number;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(643)
					int tmp23 = this->frameIndex;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(643)
					this->callback(tmp21,tmp22,tmp23);
				}
			}
		}
	}
	HX_STACK_LINE(647)
	int tmp3 = this->frameIndex = Frame;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(647)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameIndex,return )

::String FlxAnimationController_obj::get_frameName( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frameName",0x1674c78b,"flixel.animation.FlxAnimationController.get_frameName","flixel/animation/FlxAnimationController.hx",651,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	::String tmp1 = tmp->frame->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(652)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frameName,return )

::String FlxAnimationController_obj::set_frameName( ::String Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_frameName",0x5b7aa997,"flixel.animation.FlxAnimationController.set_frameName","flixel/animation/FlxAnimationController.hx",656,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(657)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	::flixel::_system::layer::frames::FlxSpriteFrames tmp1 = tmp->framesData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(657)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(657)
	if ((tmp2)){
		HX_STACK_LINE(657)
		::flixel::FlxSprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		::flixel::FlxSprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(657)
		::haxe::ds::StringMap tmp6 = tmp5->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(657)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(657)
		::String tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(657)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(657)
		tmp3 = tmp7->exists(tmp9);
	}
	else{
		HX_STACK_LINE(657)
		tmp3 = false;
	}
	HX_STACK_LINE(657)
	if ((tmp3)){
		HX_STACK_LINE(659)
		::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(659)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(659)
		if ((tmp5)){
			HX_STACK_LINE(661)
			::flixel::animation::FlxAnimation tmp6 = this->_curAnim;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(661)
			tmp6->stop();
			HX_STACK_LINE(662)
			this->_curAnim = null();
		}
		HX_STACK_LINE(665)
		::flixel::FlxSprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(665)
		::haxe::ds::StringMap tmp7 = tmp6->framesData->__Field(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(665)
		::String tmp8 = Value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(665)
		::flixel::_system::layer::frames::FlxFrame tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(665)
		::flixel::_system::layer::frames::FlxFrame frame = tmp9;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(666)
		bool tmp10 = (frame != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(666)
		if ((tmp10)){
			HX_STACK_LINE(668)
			::flixel::FlxSprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(668)
			::flixel::_system::layer::frames::FlxFrame tmp12 = frame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(668)
			int tmp13 = tmp11->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(668)
			this->set_frameIndex(tmp13);
		}
	}
	HX_STACK_LINE(672)
	::String tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(672)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_frameName,return )

::String FlxAnimationController_obj::get_name( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_name",0x9c9870b8,"flixel.animation.FlxAnimationController.get_name","flixel/animation/FlxAnimationController.hx",679,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(680)
	::String animName = null();		HX_STACK_VAR(animName,"animName");
	HX_STACK_LINE(681)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(681)
	if ((tmp1)){
		HX_STACK_LINE(683)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(683)
		animName = tmp2->name;
	}
	HX_STACK_LINE(685)
	::String tmp2 = animName;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(685)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_name,return )

::String FlxAnimationController_obj::set_name( ::String AnimName){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_name",0x4af5ca2c,"flixel.animation.FlxAnimationController.set_name","flixel/animation/FlxAnimationController.hx",693,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AnimName,"AnimName")
	HX_STACK_LINE(694)
	::String tmp = AnimName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	this->play(tmp,null(),null());
	HX_STACK_LINE(695)
	::String tmp1 = AnimName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(695)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_name,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::get_curAnim( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_curAnim",0xd32cfb64,"flixel.animation.FlxAnimationController.get_curAnim","flixel/animation/FlxAnimationController.hx",702,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::flixel::animation::FlxAnimation anim = null();		HX_STACK_VAR(anim,"anim");
	HX_STACK_LINE(704)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(704)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(704)
	if ((tmp2)){
		HX_STACK_LINE(704)
		::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		::flixel::animation::FlxAnimation tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		::flixel::animation::FlxAnimation tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(704)
		Float tmp7 = tmp6->delay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(704)
		tmp3 = (tmp7 > (int)0);
	}
	else{
		HX_STACK_LINE(704)
		tmp3 = false;
	}
	HX_STACK_LINE(704)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(704)
	if ((tmp3)){
		HX_STACK_LINE(704)
		::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		::flixel::animation::FlxAnimation tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(704)
		bool tmp7 = tmp6->looped;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(704)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(704)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(704)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(704)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(704)
		if ((tmp11)){
			HX_STACK_LINE(704)
			::flixel::animation::FlxAnimation tmp12 = this->_curAnim;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(704)
			::flixel::animation::FlxAnimation tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(704)
			::flixel::animation::FlxAnimation tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(704)
			bool tmp15 = tmp14->finished;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(704)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(704)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(704)
			tmp4 = !(tmp17);
		}
		else{
			HX_STACK_LINE(704)
			tmp4 = true;
		}
	}
	else{
		HX_STACK_LINE(704)
		tmp4 = false;
	}
	HX_STACK_LINE(704)
	if ((tmp4)){
		HX_STACK_LINE(706)
		::flixel::animation::FlxAnimation tmp5 = this->_curAnim;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(706)
		anim = tmp5;
	}
	HX_STACK_LINE(708)
	::flixel::animation::FlxAnimation tmp5 = anim;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(708)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_curAnim,return )

::flixel::animation::FlxAnimation FlxAnimationController_obj::set_curAnim( ::flixel::animation::FlxAnimation Anim){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_curAnim",0xdd9a0270,"flixel.animation.FlxAnimationController.set_curAnim","flixel/animation/FlxAnimationController.hx",716,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Anim,"Anim")
	HX_STACK_LINE(717)
	bool tmp = (Anim != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(717)
	if ((tmp)){
		HX_STACK_LINE(717)
		::flixel::animation::FlxAnimation tmp2 = Anim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(717)
		::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(717)
		::flixel::animation::FlxAnimation tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(717)
		tmp1 = (tmp2 != tmp4);
	}
	else{
		HX_STACK_LINE(717)
		tmp1 = false;
	}
	HX_STACK_LINE(717)
	if ((tmp1)){
		HX_STACK_LINE(719)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		if ((tmp3)){
			HX_STACK_LINE(721)
			::flixel::animation::FlxAnimation tmp4 = this->_curAnim;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			tmp4->stop();
		}
		HX_STACK_LINE(723)
		Anim->play(null(),null());
	}
	HX_STACK_LINE(725)
	::flixel::animation::FlxAnimation tmp2 = this->_curAnim = Anim;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(725)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_curAnim,return )

bool FlxAnimationController_obj::get_paused( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_paused",0x1a2b745b,"flixel.animation.FlxAnimationController.get_paused","flixel/animation/FlxAnimationController.hx",729,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(730)
	bool paused = false;		HX_STACK_VAR(paused,"paused");
	HX_STACK_LINE(731)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(731)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(731)
	if ((tmp1)){
		HX_STACK_LINE(733)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(733)
		paused = tmp2->paused;
	}
	HX_STACK_LINE(735)
	bool tmp2 = paused;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(735)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_paused,return )

bool FlxAnimationController_obj::set_paused( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_paused",0x1da912cf,"flixel.animation.FlxAnimationController.set_paused","flixel/animation/FlxAnimationController.hx",739,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(740)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(740)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	if ((tmp1)){
		HX_STACK_LINE(742)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(742)
		tmp2->paused = Value;
	}
	HX_STACK_LINE(744)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(744)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_paused,return )

bool FlxAnimationController_obj::get_finished( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_finished",0x1eabcc5f,"flixel.animation.FlxAnimationController.get_finished","flixel/animation/FlxAnimationController.hx",748,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(749)
	bool finished = true;		HX_STACK_VAR(finished,"finished");
	HX_STACK_LINE(750)
	::flixel::animation::FlxAnimation tmp = this->_curAnim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(750)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(750)
	if ((tmp1)){
		HX_STACK_LINE(752)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		finished = tmp2->finished;
	}
	HX_STACK_LINE(754)
	bool tmp2 = finished;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(754)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_finished,return )

bool FlxAnimationController_obj::set_finished( bool Value){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","set_finished",0x33a4efd3,"flixel.animation.FlxAnimationController.set_finished","flixel/animation/FlxAnimationController.hx",758,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(759)
	bool tmp = (Value == true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(759)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	if ((tmp)){
		HX_STACK_LINE(759)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		::flixel::animation::FlxAnimation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(759)
		tmp1 = false;
	}
	HX_STACK_LINE(759)
	if ((tmp1)){
		HX_STACK_LINE(761)
		::flixel::animation::FlxAnimation tmp2 = this->_curAnim;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(761)
		tmp2->finished = true;
		HX_STACK_LINE(762)
		::flixel::animation::FlxAnimation tmp3 = this->_curAnim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(762)
		int tmp4 = tmp3->_frames->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(762)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(762)
		this->set_frameIndex(tmp5);
	}
	HX_STACK_LINE(764)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(764)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,set_finished,return )

int FlxAnimationController_obj::get_frames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","get_frames",0xd72ce353,"flixel.animation.FlxAnimationController.get_frames","flixel/animation/FlxAnimationController.hx",768,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_LINE(769)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	int tmp1 = tmp->frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(769)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimationController_obj,get_frames,return )

int FlxAnimationController_obj::getFrameIndex( ::flixel::_system::layer::frames::FlxFrame Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","getFrameIndex",0x1c3dee77,"flixel.animation.FlxAnimationController.getFrameIndex","flixel/animation/FlxAnimationController.hx",778,0xa6f01372)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(779)
	::flixel::FlxSprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(779)
	::flixel::_system::layer::frames::FlxFrame tmp1 = Frame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(779)
	int tmp2 = tmp->framesData->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(779)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimationController_obj,getFrameIndex,return )

int FlxAnimationController_obj::prefixLength;

int FlxAnimationController_obj::postfixLength;

int FlxAnimationController_obj::frameSortFunction( ::flixel::_system::layer::frames::FlxFrame frame1,::flixel::_system::layer::frames::FlxFrame frame2){
	HX_STACK_FRAME("flixel.animation.FlxAnimationController","frameSortFunction",0x485c30ff,"flixel.animation.FlxAnimationController.frameSortFunction","flixel/animation/FlxAnimationController.hx",786,0xa6f01372)
	HX_STACK_ARG(frame1,"frame1")
	HX_STACK_ARG(frame2,"frame2")
	HX_STACK_LINE(787)
	::String name1 = frame1->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(788)
	::String name2 = frame2->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(790)
	int tmp = ::flixel::animation::FlxAnimationController_obj::prefixLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(790)
	int tmp1 = name1.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(790)
	int tmp2 = ::flixel::animation::FlxAnimationController_obj::postfixLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(790)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(790)
	::String tmp4 = name1.substring(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(790)
	Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(790)
	int num1 = tmp5;		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(791)
	int tmp6 = ::flixel::animation::FlxAnimationController_obj::prefixLength;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(791)
	int tmp7 = name2.length;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(791)
	int tmp8 = ::flixel::animation::FlxAnimationController_obj::postfixLength;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(791)
	int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(791)
	::String tmp10 = name2.substring(tmp6,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(791)
	Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(791)
	int num2 = tmp11;		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(793)
	bool tmp12 = (num1 > num2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(793)
	if ((tmp12)){
		HX_STACK_LINE(795)
		return (int)1;
	}
	else{
		HX_STACK_LINE(797)
		bool tmp13 = (num2 > num1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(797)
		if ((tmp13)){
			HX_STACK_LINE(799)
			return (int)-1;
		}
	}
	HX_STACK_LINE(802)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAnimationController_obj,frameSortFunction,return )


FlxAnimationController_obj::FlxAnimationController_obj()
{
}

void FlxAnimationController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimationController);
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(_prerotated,"_prerotated");
	HX_MARK_END_CLASS();
}

void FlxAnimationController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(_prerotated,"_prerotated");
}

Dynamic FlxAnimationController_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return get_paused(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return inCallProp == hx::paccAlways ? get_frames() : frames; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == hx::paccAlways) return get_curAnim(); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == hx::paccAlways) return get_finished(); }
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == hx::paccAlways) return get_frameName(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		if (HX_FIELD_EQ(inName,"addByNames") ) { return addByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frames") ) { return get_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { return _prerotated; }
		if (HX_FIELD_EQ(inName,"addByPrefix") ) { return addByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_curAnim") ) { return get_curAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"set_curAnim") ) { return set_curAnim_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addByIndices") ) { return addByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"fireCallback") ) { return fireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"findByPrefix") ) { return findByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_finished") ) { return get_finished_dyn(); }
		if (HX_FIELD_EQ(inName,"set_finished") ) { return set_finished_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"appendByNames") ) { return appendByNames_dyn(); }
		if (HX_FIELD_EQ(inName,"byNamesHelper") ) { return byNamesHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameName") ) { return get_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameName") ) { return set_frameName_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendByPrefix") ) { return appendByPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"byPrefixHelper") ) { return byPrefixHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameIndex") ) { return set_frameIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearPrerotated") ) { return clearPrerotated_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAnimations") ) { return clearAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"appendByIndices") ) { return appendByIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"findSpriteFrame") ) { return findSpriteFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"byIndicesHelper") ) { return byIndicesHelper_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createPrerotated") ) { return createPrerotated_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"destroyAnimations") ) { return destroyAnimations_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addByStringIndices") ) { return addByStringIndices_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"appendByStringIndices") ) { return appendByStringIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"byStringIndicesHelper") ) { return byStringIndicesHelper_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAnimationController_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { outValue = prefixLength; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { outValue = postfixLength; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"frameSortFunction") ) { outValue = frameSortFunction_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxAnimationController_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curAnim") ) { if (inCallProp == hx::paccAlways) return set_curAnim(inValue); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { if (inCallProp == hx::paccAlways) return set_finished(inValue); }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::flixel::animation::FlxAnimation >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameName") ) { if (inCallProp == hx::paccAlways) return set_frameName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { if (inCallProp == hx::paccAlways) return set_frameIndex(inValue);frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prerotated") ) { _prerotated=inValue.Cast< ::flixel::animation::FlxPrerotatedAnimation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAnimationController_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"prefixLength") ) { prefixLength=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"postfixLength") ) { postfixLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxAnimationController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("curAnim","\xb1","\xf7","\x86","\xab"));
	outFields->push(HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"));
	outFields->push(HX_HCSTRING("frameName","\x18","\x31","\x80","\x36"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"));
	outFields->push(HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"));
	outFields->push(HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frameIndex),HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1")},
	{hx::fsInt,(int)offsetof(FlxAnimationController_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAnimationController_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxAnimationController_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsObject /*::flixel::animation::FlxAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_curAnim),HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAnimationController_obj,_animations),HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55")},
	{hx::fsObject /*::flixel::animation::FlxPrerotatedAnimation*/ ,(int)offsetof(FlxAnimationController_obj,_prerotated),HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxAnimationController_obj::prefixLength,HX_HCSTRING("prefixLength","\x18","\x5c","\xb9","\xd7")},
	{hx::fsInt,(void *) &FlxAnimationController_obj::postfixLength,HX_HCSTRING("postfixLength","\x3b","\x48","\x6c","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"),
	HX_HCSTRING("_animations","\x0e","\x02","\xa6","\x55"),
	HX_HCSTRING("_prerotated","\x05","\x51","\xa3","\x64"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("createPrerotated","\x02","\x02","\x47","\xc7"),
	HX_HCSTRING("destroyAnimations","\x89","\x22","\x77","\xd5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("clearPrerotated","\xd3","\x4b","\xbe","\x18"),
	HX_HCSTRING("clearAnimations","\xdc","\xfc","\xc0","\x09"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("addByNames","\x50","\x4a","\xa2","\xdd"),
	HX_HCSTRING("appendByNames","\xb7","\xb3","\x38","\xaf"),
	HX_HCSTRING("addByStringIndices","\xde","\xf4","\x20","\x5c"),
	HX_HCSTRING("appendByStringIndices","\x45","\x9d","\xe9","\x96"),
	HX_HCSTRING("addByIndices","\xaf","\xb3","\x3b","\x79"),
	HX_HCSTRING("appendByIndices","\xd6","\x84","\x4c","\xac"),
	HX_HCSTRING("findSpriteFrame","\x2f","\x8a","\x2e","\xfe"),
	HX_HCSTRING("addByPrefix","\x0a","\x56","\x9c","\xa1"),
	HX_HCSTRING("appendByPrefix","\xc3","\x26","\xa2","\x33"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("randomFrame","\x2a","\x9b","\x18","\x71"),
	HX_HCSTRING("fireCallback","\x9b","\xcf","\x9f","\x40"),
	HX_HCSTRING("byNamesHelper","\xbf","\xfa","\xde","\x2f"),
	HX_HCSTRING("byStringIndicesHelper","\xcd","\x4c","\xc0","\x21"),
	HX_HCSTRING("byIndicesHelper","\x9e","\x6f","\x1b","\x71"),
	HX_HCSTRING("byPrefixHelper","\x17","\xcd","\x67","\x83"),
	HX_HCSTRING("findByPrefix","\x22","\x0c","\xbe","\x5d"),
	HX_HCSTRING("set_frameIndex","\x62","\x40","\x50","\x37"),
	HX_HCSTRING("get_frameName","\xef","\x04","\xe4","\xf7"),
	HX_HCSTRING("set_frameName","\xfb","\xe6","\xe9","\x3c"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_curAnim","\xc8","\x57","\x81","\x31"),
	HX_HCSTRING("set_curAnim","\xd4","\x5e","\xee","\x3b"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("get_finished","\x7b","\x47","\x28","\x4a"),
	HX_HCSTRING("set_finished","\xef","\x6a","\x21","\x5f"),
	HX_HCSTRING("get_frames","\x6f","\x1f","\x0d","\x9d"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::prefixLength,"prefixLength");
	HX_MARK_MEMBER_NAME(FlxAnimationController_obj::postfixLength,"postfixLength");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::prefixLength,"prefixLength");
	HX_VISIT_MEMBER_NAME(FlxAnimationController_obj::postfixLength,"postfixLength");
};

#endif

hx::Class FlxAnimationController_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("prefixLength","\x18","\x5c","\xb9","\xd7"),
	HX_HCSTRING("postfixLength","\x3b","\x48","\x6c","\xdf"),
	HX_HCSTRING("frameSortFunction","\x63","\xf0","\xbf","\x12"),
	::String(null()) };

void FlxAnimationController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimationController","\x0a","\x0a","\xda","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAnimationController_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAnimationController_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimationController_obj >;
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

void FlxAnimationController_obj::__boot()
{
	prefixLength= (int)0;
	postfixLength= (int)0;
}

} // end namespace flixel
} // end namespace animation
