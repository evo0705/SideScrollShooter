#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{
HX_STACK_FRAME("flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",9,0x660bc6ae)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Looped,"Looped")
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
{
	HX_STACK_LINE(57)
	this->_frameTimer = ((Float)0);
	HX_STACK_LINE(45)
	this->looped = true;
	HX_STACK_LINE(40)
	this->paused = true;
	HX_STACK_LINE(35)
	this->finished = true;
	HX_STACK_LINE(30)
	this->delay = ((Float)0);
	HX_STACK_LINE(20)
	this->curFrame = (int)0;
	HX_STACK_LINE(67)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(69)
	int tmp2 = FrameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	this->set_frameRate(tmp2);
	HX_STACK_LINE(70)
	this->_frames = Frames;
	HX_STACK_LINE(71)
	this->looped = Looped;
}
;
	return null();
}

//FlxAnimation_obj::~FlxAnimation_obj() { }

Dynamic FlxAnimation_obj::__CreateEmpty() { return  new FlxAnimation_obj; }
hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped);
	return _result_;}

Dynamic FlxAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void FlxAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",78,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->_frames = null();
		HX_STACK_LINE(80)
		this->name = null();
		HX_STACK_LINE(81)
		this->super::destroy();
	}
return null();
}


Void FlxAnimation_obj::play( hx::Null< bool >  __o_Force,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",85,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(86)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		if ((tmp2)){
			HX_STACK_LINE(86)
			bool tmp4 = this->looped;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(86)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			if ((tmp9)){
				HX_STACK_LINE(86)
				bool tmp10 = this->finished;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(86)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				tmp3 = !(tmp14);
			}
			else{
				HX_STACK_LINE(86)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(86)
			tmp3 = false;
		}
		HX_STACK_LINE(86)
		if ((tmp3)){
			HX_STACK_LINE(88)
			this->paused = false;
			HX_STACK_LINE(89)
			this->finished = false;
			HX_STACK_LINE(90)
			int tmp4 = this->curFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			this->set_curFrame(tmp4);
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(94)
		this->paused = false;
		HX_STACK_LINE(95)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(97)
		Float tmp4 = this->delay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		if ((tmp6)){
			HX_STACK_LINE(97)
			int tmp8 = Frame;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			int tmp9 = this->_frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(97)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			tmp7 = (tmp8 == tmp12);
		}
		else{
			HX_STACK_LINE(97)
			tmp7 = true;
		}
		HX_STACK_LINE(97)
		if ((tmp7)){
			HX_STACK_LINE(99)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(103)
			this->finished = false;
		}
		HX_STACK_LINE(106)
		bool tmp8 = (Frame < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		if ((tmp8)){
			HX_STACK_LINE(108)
			int tmp9 = this->_frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			int tmp11 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			this->set_curFrame(tmp11);
		}
		else{
			HX_STACK_LINE(110)
			int tmp9 = this->_frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			int tmp10 = Frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			if ((tmp11)){
				HX_STACK_LINE(112)
				int tmp12 = Frame;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(112)
				this->set_curFrame(tmp12);
			}
			else{
				HX_STACK_LINE(116)
				this->set_curFrame((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimation_obj,play,(void))

Void FlxAnimation_obj::restart( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",122,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->play(true,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

Void FlxAnimation_obj::stop( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",126,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->finished = true;
		HX_STACK_LINE(128)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

Void FlxAnimation_obj::update( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",132,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		Float tmp = this->delay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(133)
			bool tmp4 = this->looped;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(133)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(133)
			if ((tmp13)){
				HX_STACK_LINE(133)
				bool tmp14 = this->finished;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(133)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(133)
				tmp3 = !(tmp20);
			}
			else{
				HX_STACK_LINE(133)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(133)
			tmp3 = false;
		}
		HX_STACK_LINE(133)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(133)
			bool tmp5 = this->paused;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(133)
			tmp4 = false;
		}
		HX_STACK_LINE(133)
		if ((tmp4)){
			HX_STACK_LINE(135)
			Float tmp5 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			hx::AddEq(this->_frameTimer,tmp5);
			HX_STACK_LINE(136)
			while((true)){
				HX_STACK_LINE(136)
				Float tmp6 = this->_frameTimer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(136)
				Float tmp7 = this->delay;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(136)
				bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(136)
				if ((tmp9)){
					HX_STACK_LINE(136)
					break;
				}
				HX_STACK_LINE(138)
				Float tmp10 = this->_frameTimer;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(138)
				Float tmp11 = this->delay;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(138)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(138)
				this->_frameTimer = tmp12;
				HX_STACK_LINE(139)
				bool tmp13 = this->looped;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(139)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				if ((tmp13)){
					HX_STACK_LINE(139)
					int tmp15 = this->curFrame;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(139)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(139)
					int tmp17 = this->_frames->length;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(139)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(139)
					int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(139)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(139)
					tmp14 = (tmp16 == tmp20);
				}
				else{
					HX_STACK_LINE(139)
					tmp14 = false;
				}
				HX_STACK_LINE(139)
				if ((tmp14)){
					HX_STACK_LINE(141)
					this->set_curFrame((int)0);
				}
				else{
					HX_STACK_LINE(145)
					::flixel::animation::FlxAnimation _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(145)
					int _g1 = _g->curFrame;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(145)
					int tmp15 = (_g1 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(145)
					_g->set_curFrame(tmp15);
					HX_STACK_LINE(145)
					_g1;
				}
			}
		}
	}
return null();
}


::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",152,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(153)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	int tmp2 = this->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	bool tmp3 = this->looped;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	::flixel::animation::FlxAnimation tmp4 = ::flixel::animation::FlxAnimation_obj::__new(tmp,tmp1,this->_frames,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	return tmp4;
}


int FlxAnimation_obj::set_frameRate( int value){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",157,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(158)
	this->delay = (int)0;
	HX_STACK_LINE(159)
	this->frameRate = value;
	HX_STACK_LINE(160)
	bool tmp = (value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	if ((tmp)){
		HX_STACK_LINE(162)
		Float tmp1 = (Float(((Float)1.0)) / Float(value));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		this->delay = tmp1;
	}
	HX_STACK_LINE(164)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

int FlxAnimation_obj::set_curFrame( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",168,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(169)
	bool tmp = (Frame >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	if ((tmp)){
		HX_STACK_LINE(171)
		bool tmp1 = this->looped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(171)
			int tmp5 = Frame;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			int tmp6 = this->_frames->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			tmp4 = (tmp5 >= tmp7);
		}
		else{
			HX_STACK_LINE(171)
			tmp4 = false;
		}
		HX_STACK_LINE(171)
		if ((tmp4)){
			HX_STACK_LINE(173)
			this->finished = true;
			HX_STACK_LINE(174)
			int tmp5 = this->_frames->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			this->curFrame = tmp6;
		}
		else{
			HX_STACK_LINE(178)
			this->curFrame = Frame;
		}
	}
	else{
		HX_STACK_LINE(183)
		int tmp1 = this->_frames->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		int tmp3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		this->curFrame = tmp3;
	}
	HX_STACK_LINE(186)
	int tmp1 = this->curFrame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	int tmp2 = this->_frames->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	this->set_curIndex(tmp2);
	HX_STACK_LINE(187)
	int tmp3 = Frame;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

int FlxAnimation_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",191,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	int tmp = this->_frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return curFrame; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return inCallProp == hx::paccAlways ? get_numFrames() : numFrames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return set_curFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp == hx::paccAlways) return set_curFrame(inValue);curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue);frameRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAnimation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"));
	outFields->push(HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,numFrames),HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxAnimation_obj,_frames),HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"),
	HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"),
	HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"),
	HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("set_curFrame","\x0a","\x4a","\x44","\x18"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimation","\xce","\x5f","\xe3","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxAnimation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimation_obj >;
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
} // end namespace animation
