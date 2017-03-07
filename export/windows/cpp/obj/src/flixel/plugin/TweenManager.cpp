#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
namespace flixel{
namespace plugin{

Void TweenManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.TweenManager","new",0x6947fd5d,"flixel.plugin.TweenManager.new","flixel/plugin/TweenManager.hx",9,0x8f088e93)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_tweens = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->set_visible(false);
}
;
	return null();
}

//TweenManager_obj::~TweenManager_obj() { }

Dynamic TweenManager_obj::__CreateEmpty() { return  new TweenManager_obj; }
hx::ObjectPtr< TweenManager_obj > TweenManager_obj::__new()
{  hx::ObjectPtr< TweenManager_obj > _result_ = new TweenManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic TweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenManager_obj > _result_ = new TweenManager_obj();
	_result_->__construct();
	return _result_;}

::flixel::tweens::motion::QuadPath TweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_QuadPath",0x2aa0f560,"flixel.plugin.TweenManager.add_flixel_tweens_motion_QuadPath","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::QuadPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::QuadPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

::flixel::tweens::motion::LinearPath TweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_LinearPath",0xb741727e,"flixel.plugin.TweenManager.add_flixel_tweens_motion_LinearPath","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::LinearPath tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::LinearPath tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

::flixel::tweens::motion::CircularMotion TweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_CircularMotion",0xb3d7a449,"flixel.plugin.TweenManager.add_flixel_tweens_motion_CircularMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::CircularMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::CircularMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

::flixel::tweens::motion::CubicMotion TweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_CubicMotion",0x8d10bc4c,"flixel.plugin.TweenManager.add_flixel_tweens_motion_CubicMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::CubicMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::CubicMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

::flixel::tweens::motion::QuadMotion TweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_QuadMotion",0xa95c3ab1,"flixel.plugin.TweenManager.add_flixel_tweens_motion_QuadMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::QuadMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::QuadMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

::flixel::tweens::motion::LinearMotion TweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_motion_LinearMotion",0xfcecbb4f,"flixel.plugin.TweenManager.add_flixel_tweens_motion_LinearMotion","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::motion::LinearMotion tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::motion::LinearMotion tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

::flixel::tweens::misc::ColorTween TweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_ColorTween",0x5d4514a6,"flixel.plugin.TweenManager.add_flixel_tweens_misc_ColorTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::misc::ColorTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::misc::ColorTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

::flixel::tweens::misc::AngleTween TweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_AngleTween",0x3c5e6c36,"flixel.plugin.TweenManager.add_flixel_tweens_misc_AngleTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::misc::AngleTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::misc::AngleTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

::flixel::tweens::misc::NumTween TweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_NumTween",0xfb008d63,"flixel.plugin.TweenManager.add_flixel_tweens_misc_NumTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::misc::NumTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::misc::NumTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_NumTween,return )

::flixel::tweens::misc::VarTween TweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_FRAME("flixel.plugin.TweenManager","add_flixel_tweens_misc_VarTween",0x84afa522,"flixel.plugin.TweenManager.add_flixel_tweens_misc_VarTween","flixel/plugin/TweenManager.hx",62,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_ARG(Start,"Start")
{
		HX_STACK_LINE(64)
		bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(69)
		::flixel::tweens::misc::VarTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->_tweens->push(tmp1);
		HX_STACK_LINE(71)
		bool tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			Tween->start();
		}
		HX_STACK_LINE(75)
		::flixel::tweens::misc::VarTween tmp3 = Tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add_flixel_tweens_misc_VarTween,return )

Void TweenManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","update",0xeb2fd52c,"flixel.plugin.TweenManager.update","flixel/plugin/TweenManager.hx",23,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			Array< ::Dynamic > _g1 = this->_tweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(27)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(27)
				if ((tmp1)){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::flixel::tweens::FlxTween tmp2 = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(27)
				::flixel::tweens::FlxTween tween = tmp2;		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(29)
				bool tmp3 = tween->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(29)
				if ((tmp3)){
					HX_STACK_LINE(31)
					tween->update();
					HX_STACK_LINE(32)
					bool tmp4 = tween->finished;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(32)
					if ((tmp4)){
						HX_STACK_LINE(34)
						bool tmp5 = (finishedTweens == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(34)
						if ((tmp5)){
							HX_STACK_LINE(36)
							finishedTweens = Array_obj< ::Dynamic >::__new();
						}
						HX_STACK_LINE(38)
						::flixel::tweens::FlxTween tmp6 = tween;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(38)
						finishedTweens->push(tmp6);
					}
				}
			}
		}
		HX_STACK_LINE(43)
		bool tmp = (finishedTweens != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp1 = (finishedTweens->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				if ((tmp2)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(47)
				::flixel::tweens::FlxTween tmp3 = finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				tmp3->finish();
			}
		}
	}
return null();
}


::flixel::tweens::FlxTween TweenManager_obj::remove( ::flixel::tweens::FlxTween Tween){
	HX_STACK_FRAME("flixel.plugin.TweenManager","remove",0x68b2eb67,"flixel.plugin.TweenManager.remove","flixel/plugin/TweenManager.hx",87,0x8f088e93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tween,"Tween")
	HX_STACK_LINE(88)
	bool tmp = (Tween == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		return null();
	}
	HX_STACK_LINE(93)
	Tween->active = false;
	HX_STACK_LINE(94)
	Tween->destroy();
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Array< ::Dynamic > array = this->_tweens;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(96)
		::flixel::tweens::FlxTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		int tmp2 = array->indexOf(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(96)
		bool tmp3 = (index != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(96)
			int tmp4 = (array->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::flixel::tweens::FlxTween tmp5 = array->__get(tmp4).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			array[index] = tmp5;
			HX_STACK_LINE(96)
			array->pop().StaticCast< ::flixel::tweens::FlxTween >();
			HX_STACK_LINE(96)
			array;
		}
		else{
			HX_STACK_LINE(96)
			array;
		}
	}
	HX_STACK_LINE(98)
	::flixel::tweens::FlxTween tmp1 = Tween;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TweenManager_obj,remove,return )

Void TweenManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","clear",0xf87297ca,"flixel.plugin.TweenManager.clear","flixel/plugin/TweenManager.hx",106,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			int tmp = this->_tweens->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			if ((tmp2)){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(108)
			::flixel::tweens::FlxTween tmp3 = this->_tweens->__get((int)0).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			this->remove(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenManager_obj,clear,(void))

Void TweenManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.TweenManager","onStateSwitch",0xdb1fdf43,"flixel.plugin.TweenManager.onStateSwitch","flixel/plugin/TweenManager.hx",114,0x8f088e93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		this->clear();
	}
return null();
}



TweenManager_obj::TweenManager_obj()
{
}

void TweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	HX_MARK_END_CLASS();
}

void TweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
}

Dynamic TweenManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return add_flixel_tweens_misc_NumTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return add_flixel_tweens_misc_VarTween_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return add_flixel_tweens_motion_QuadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return add_flixel_tweens_misc_ColorTween_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return add_flixel_tweens_misc_AngleTween_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return add_flixel_tweens_motion_LinearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return add_flixel_tweens_motion_QuadMotion_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return add_flixel_tweens_motion_CubicMotion_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return add_flixel_tweens_motion_LinearMotion_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return add_flixel_tweens_motion_CircularMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TweenManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TweenManager_obj,_tweens),HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_tweens_motion_QuadPath","\xa3","\xdd","\xde","\xe6"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearPath","\x81","\x31","\xfc","\x6c"),
	HX_HCSTRING("add_flixel_tweens_motion_CircularMotion","\xcc","\xa0","\x91","\x11"),
	HX_HCSTRING("add_flixel_tweens_motion_CubicMotion","\xe9","\x1f","\xbd","\xda"),
	HX_HCSTRING("add_flixel_tweens_motion_QuadMotion","\xb4","\xf9","\x16","\x5f"),
	HX_HCSTRING("add_flixel_tweens_motion_LinearMotion","\x12","\x81","\x17","\xa6"),
	HX_HCSTRING("add_flixel_tweens_misc_ColorTween","\xe9","\xfc","\x82","\x19"),
	HX_HCSTRING("add_flixel_tweens_misc_AngleTween","\x79","\x54","\x9c","\xf8"),
	HX_HCSTRING("add_flixel_tweens_misc_NumTween","\xe6","\xce","\x88","\x53"),
	HX_HCSTRING("add_flixel_tweens_misc_VarTween","\xa5","\xe6","\x37","\xdd"),
	HX_HCSTRING("_tweens","\x47","\x85","\x9b","\x97"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

#endif

hx::Class TweenManager_obj::__mClass;

void TweenManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.plugin.TweenManager","\xeb","\x0a","\x15","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TweenManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TweenManager_obj >;
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
} // end namespace plugin
