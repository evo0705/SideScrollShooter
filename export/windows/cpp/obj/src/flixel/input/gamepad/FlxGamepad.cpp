#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","new",0x48c92544,"flixel.input.gamepad.FlxGamepad.new","flixel/input/gamepad/FlxGamepad.hx",15,0xdb78a809)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(__o_GlobalDeadZone,"GlobalDeadZone")
Float GlobalDeadZone = __o_GlobalDeadZone.Default(0);
{
	HX_STACK_LINE(42)
	this->dpadRight = false;
	HX_STACK_LINE(41)
	this->dpadLeft = false;
	HX_STACK_LINE(40)
	this->dpadDown = false;
	HX_STACK_LINE(39)
	this->dpadUp = false;
	HX_STACK_LINE(30)
	this->deadZone = ((Float)0.15);
	HX_STACK_LINE(56)
	this->buttons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp = (_g1 < (int)6);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(57)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				if ((tmp1)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				_g->push((int)0);
			}
		}
		HX_STACK_LINE(57)
		this->axis = _g;
	}
	HX_STACK_LINE(58)
	this->id = ID;
	HX_STACK_LINE(60)
	bool tmp = (GlobalDeadZone != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	if ((tmp)){
		HX_STACK_LINE(62)
		this->deadZone = GlobalDeadZone;
	}
	HX_STACK_LINE(66)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(66)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(66)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(66)
		point->_inPool = false;
		HX_STACK_LINE(66)
		tmp1 = point;
	}
	HX_STACK_LINE(66)
	this->ball = tmp1;
	HX_STACK_LINE(67)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(67)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(67)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(67)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(67)
		point->_inPool = false;
		HX_STACK_LINE(67)
		tmp2 = point;
	}
	HX_STACK_LINE(67)
	this->hat = tmp2;
}
;
	return null();
}

//FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{  hx::ObjectPtr< FlxGamepad_obj > _result_ = new FlxGamepad_obj();
	_result_->__construct(ID,__o_GlobalDeadZone);
	return _result_;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > _result_ = new FlxGamepad_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxGamepad_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxGamepad_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxGamepad_obj >(this); }
::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getButton",0xf881030c,"flixel.input.gamepad.FlxGamepad.getButton","flixel/input/gamepad/FlxGamepad.hx",72,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(73)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::flixel::input::gamepad::FlxGamepadButton gamepadButton = tmp;		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(75)
	bool tmp1 = (gamepadButton == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(77)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = ::flixel::input::gamepad::FlxGamepadButton_obj::__new(ButtonID,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		gamepadButton = tmp2;
		HX_STACK_LINE(78)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = gamepadButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		this->buttons[ButtonID] = tmp3;
	}
	HX_STACK_LINE(81)
	::flixel::input::gamepad::FlxGamepadButton tmp2 = gamepadButton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

Void FlxGamepad_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","update",0x525157a5,"flixel.input.gamepad.FlxGamepad.update","flixel/input/gamepad/FlxGamepad.hx",115,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			if ((tmp1)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(117)
			bool tmp3 = (button == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			if ((tmp3)){
				HX_STACK_LINE(119)
				continue;
			}
			HX_STACK_LINE(122)
			bool tmp4 = (button->last == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				tmp5 = (button->current == (int)-1);
			}
			else{
				HX_STACK_LINE(122)
				tmp5 = false;
			}
			HX_STACK_LINE(122)
			if ((tmp5)){
				HX_STACK_LINE(124)
				button->current = (int)0;
			}
			else{
				HX_STACK_LINE(126)
				bool tmp6 = (button->last == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(126)
				if ((tmp6)){
					HX_STACK_LINE(126)
					tmp7 = (button->current == (int)2);
				}
				else{
					HX_STACK_LINE(126)
					tmp7 = false;
				}
				HX_STACK_LINE(126)
				if ((tmp7)){
					HX_STACK_LINE(128)
					button->current = (int)1;
				}
			}
			HX_STACK_LINE(131)
			button->last = button->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","reset",0x36e79fb3,"flixel.input.gamepad.FlxGamepad.reset","flixel/input/gamepad/FlxGamepad.hx",136,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				if ((tmp1)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(137)
				::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(137)
				++(_g);
				HX_STACK_LINE(139)
				bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				if ((tmp3)){
					HX_STACK_LINE(141)
					button->current = (int)0;
					HX_STACK_LINE(142)
					button->last = (int)0;
				}
			}
		}
		HX_STACK_LINE(146)
		int tmp = this->axis->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		int numAxis = tmp;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				bool tmp1 = (_g < numAxis);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(148)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(148)
				if ((tmp2)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(154)
		::flixel::util::FlxPoint tmp1 = this->hat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		tmp1->set(null(),null());
		HX_STACK_LINE(155)
		::flixel::util::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		tmp2->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","destroy",0x3b91c3de,"flixel.input.gamepad.FlxGamepad.destroy","flixel/input/gamepad/FlxGamepad.hx",160,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		this->buttons = null();
		HX_STACK_LINE(162)
		this->axis = null();
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		this->hat = tmp1;
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		this->ball = tmp3;
		HX_STACK_LINE(168)
		this->hat = null();
		HX_STACK_LINE(169)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

bool FlxGamepad_obj::checkStatus( int ButtonID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","checkStatus",0x42f892fe,"flixel.input.gamepad.FlxGamepad.checkStatus","flixel/input/gamepad/FlxGamepad.hx",181,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(182)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	if ((tmp1)){
		HX_STACK_LINE(184)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		int tmp3 = tmp2->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		int tmp4 = Status;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		return tmp5;
	}
	HX_STACK_LINE(186)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

bool FlxGamepad_obj::anyPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyPressed",0xee8d44b2,"flixel.input.gamepad.FlxGamepad.anyPressed","flixel/input/gamepad/FlxGamepad.hx",196,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			bool tmp = (_g < ButtonIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			if ((tmp1)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			int tmp2 = ButtonIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(199)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			if ((tmp4)){
				HX_STACK_LINE(201)
				::flixel::input::gamepad::FlxGamepadButton tmp5 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				int tmp6 = tmp5->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(201)
				if ((tmp7)){
					HX_STACK_LINE(202)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(206)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressed,return )

bool FlxGamepad_obj::anyJustPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustPressed",0xd6d7c7e6,"flixel.input.gamepad.FlxGamepad.anyJustPressed","flixel/input/gamepad/FlxGamepad.hx",216,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		while((true)){
			HX_STACK_LINE(217)
			bool tmp = (_g < ButtonIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			if ((tmp1)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(217)
			int tmp2 = ButtonIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(217)
			++(_g);
			HX_STACK_LINE(219)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			if ((tmp4)){
				HX_STACK_LINE(221)
				::flixel::input::gamepad::FlxGamepadButton tmp5 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(221)
				int tmp6 = tmp5->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				bool tmp7 = (tmp6 == (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				if ((tmp7)){
					HX_STACK_LINE(222)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(226)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressed,return )

bool FlxGamepad_obj::anyJustReleased( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustReleased",0x2ccd2ef9,"flixel.input.gamepad.FlxGamepad.anyJustReleased","flixel/input/gamepad/FlxGamepad.hx",236,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			bool tmp = (_g < ButtonIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(237)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(237)
			if ((tmp1)){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			int tmp2 = ButtonIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(237)
			++(_g);
			HX_STACK_LINE(239)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			if ((tmp4)){
				HX_STACK_LINE(241)
				::flixel::input::gamepad::FlxGamepadButton tmp5 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(241)
				int tmp6 = tmp5->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(241)
				bool tmp7 = (tmp6 == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(241)
				if ((tmp7)){
					HX_STACK_LINE(242)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleased,return )

bool FlxGamepad_obj::pressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","pressed",0x50f26986,"flixel.input.gamepad.FlxGamepad.pressed","flixel/input/gamepad/FlxGamepad.hx",256,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(257)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	if ((tmp1)){
		HX_STACK_LINE(259)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		int tmp3 = tmp2->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		return tmp4;
	}
	HX_STACK_LINE(262)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,pressed,return )

bool FlxGamepad_obj::justPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justPressed",0x4d91e6ba,"flixel.input.gamepad.FlxGamepad.justPressed","flixel/input/gamepad/FlxGamepad.hx",272,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(273)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	if ((tmp1)){
		HX_STACK_LINE(275)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		int tmp3 = tmp2->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		return tmp4;
	}
	HX_STACK_LINE(278)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justPressed,return )

bool FlxGamepad_obj::justReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justReleased",0x98ee09a5,"flixel.input.gamepad.FlxGamepad.justReleased","flixel/input/gamepad/FlxGamepad.hx",288,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(289)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	if ((tmp1)){
		HX_STACK_LINE(291)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		int tmp3 = tmp2->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		return tmp4;
	}
	HX_STACK_LINE(294)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justReleased,return )

int FlxGamepad_obj::firstPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstPressedButtonID",0xdedbb35b,"flixel.input.gamepad.FlxGamepad.firstPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",302,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(303)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(303)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			if ((tmp1)){
				HX_STACK_LINE(303)
				break;
			}
			HX_STACK_LINE(303)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(303)
			++(_g);
			HX_STACK_LINE(305)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				tmp4 = (button->current > (int)0);
			}
			else{
				HX_STACK_LINE(305)
				tmp4 = false;
			}
			HX_STACK_LINE(305)
			if ((tmp4)){
				HX_STACK_LINE(307)
				int tmp5 = button->id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(307)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(311)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedButtonID,return )

int FlxGamepad_obj::firstJustPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustPressedButtonID",0x2f24588f,"flixel.input.gamepad.FlxGamepad.firstJustPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",319,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(320)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(320)
			if ((tmp1)){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(320)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(320)
			++(_g);
			HX_STACK_LINE(322)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			if ((tmp3)){
				HX_STACK_LINE(322)
				tmp4 = (button->current == (int)2);
			}
			else{
				HX_STACK_LINE(322)
				tmp4 = false;
			}
			HX_STACK_LINE(322)
			if ((tmp4)){
				HX_STACK_LINE(324)
				int tmp5 = button->id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(324)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(328)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedButtonID,return )

int FlxGamepad_obj::firstJustReleasedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustReleasedButtonID",0x67d646aa,"flixel.input.gamepad.FlxGamepad.firstJustReleasedButtonID","flixel/input/gamepad/FlxGamepad.hx",336,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(337)
		while((true)){
			HX_STACK_LINE(337)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(337)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(337)
			if ((tmp1)){
				HX_STACK_LINE(337)
				break;
			}
			HX_STACK_LINE(337)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(337)
			++(_g);
			HX_STACK_LINE(339)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			if ((tmp3)){
				HX_STACK_LINE(339)
				tmp4 = (button->current == (int)-1);
			}
			else{
				HX_STACK_LINE(339)
				tmp4 = false;
			}
			HX_STACK_LINE(339)
			if ((tmp4)){
				HX_STACK_LINE(341)
				int tmp5 = button->id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(341)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(345)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedButtonID,return )

Float FlxGamepad_obj::getAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxis",0x2a07633b,"flixel.input.gamepad.FlxGamepad.getAxis","flixel/input/gamepad/FlxGamepad.hx",353,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(354)
	int tmp = AxisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	Float tmp1 = this->getAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

Float FlxGamepad_obj::getXAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getXAxis",0xb657655f,"flixel.input.gamepad.FlxGamepad.getXAxis","flixel/input/gamepad/FlxGamepad.hx",361,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(362)
	int tmp = AxisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	Float tmp1 = this->getAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxis,return )

Float FlxGamepad_obj::getYAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getYAxis",0x49bdf9e0,"flixel.input.gamepad.FlxGamepad.getYAxis","flixel/input/gamepad/FlxGamepad.hx",370,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(371)
	int tmp = AxisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Float tmp1 = this->getAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	Float axisValue = tmp1;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(383)
	Float tmp2 = axisValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(383)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxis,return )

bool FlxGamepad_obj::anyButton( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyButton",0xd989e1e2,"flixel.input.gamepad.FlxGamepad.anyButton","flixel/input/gamepad/FlxGamepad.hx",390,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(391)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(391)
			if ((tmp1)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(391)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(393)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			if ((tmp3)){
				HX_STACK_LINE(393)
				tmp4 = (button->current > (int)0);
			}
			else{
				HX_STACK_LINE(393)
				tmp4 = false;
			}
			HX_STACK_LINE(393)
			if ((tmp4)){
				HX_STACK_LINE(395)
				return true;
			}
		}
	}
	HX_STACK_LINE(399)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyButton,return )

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyInput",0x4fe8921a,"flixel.input.gamepad.FlxGamepad.anyInput","flixel/input/gamepad/FlxGamepad.hx",406,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(407)
	bool tmp = this->anyButton();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	if ((tmp)){
		HX_STACK_LINE(408)
		return true;
	}
	HX_STACK_LINE(410)
	int tmp1 = this->axis->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	int numAxis = tmp1;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			bool tmp2 = (_g < numAxis);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(412)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(412)
			if ((tmp3)){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(414)
			Float tmp5 = this->axis->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(414)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(414)
			if ((tmp6)){
				HX_STACK_LINE(416)
				return true;
			}
		}
	}
	HX_STACK_LINE(421)
	::flixel::util::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(421)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(421)
	if ((tmp5)){
		HX_STACK_LINE(421)
		::flixel::util::FlxPoint tmp7 = this->ball;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(421)
		::flixel::util::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(421)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(421)
		tmp6 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(421)
		tmp6 = true;
	}
	HX_STACK_LINE(421)
	if ((tmp6)){
		HX_STACK_LINE(423)
		return true;
	}
	HX_STACK_LINE(426)
	::flixel::util::FlxPoint tmp7 = this->hat;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(426)
	Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(426)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(426)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(426)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(426)
	if ((tmp10)){
		HX_STACK_LINE(426)
		::flixel::util::FlxPoint tmp12 = this->hat;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(426)
		::flixel::util::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(426)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(426)
		tmp11 = (tmp14 != (int)0);
	}
	else{
		HX_STACK_LINE(426)
		tmp11 = true;
	}
	HX_STACK_LINE(426)
	if ((tmp11)){
		HX_STACK_LINE(428)
		return true;
	}
	HX_STACK_LINE(432)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

Float FlxGamepad_obj::getAxisValue( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxisValue",0xcd45f636,"flixel.input.gamepad.FlxGamepad.getAxisValue","flixel/input/gamepad/FlxGamepad.hx",436,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(437)
	bool tmp = (AxisID < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	if ((tmp1)){
		HX_STACK_LINE(437)
		int tmp3 = AxisID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		int tmp4 = this->axis->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(437)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(437)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(437)
		tmp2 = true;
	}
	HX_STACK_LINE(437)
	if ((tmp2)){
		HX_STACK_LINE(439)
		return (int)0;
	}
	HX_STACK_LINE(442)
	Float axisValue = (int)0;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(450)
	Float tmp3 = this->axis->__get(AxisID);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(450)
	axisValue = tmp3;
	HX_STACK_LINE(453)
	Float tmp4 = axisValue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(453)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(453)
	Float tmp6 = this->deadZone;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(453)
	bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(453)
	if ((tmp7)){
		HX_STACK_LINE(455)
		Float tmp8 = axisValue;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		return tmp8;
	}
	HX_STACK_LINE(458)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisValue,return )

bool FlxGamepad_obj::get_dpadUp( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadUp",0x080d2b0f,"flixel.input.gamepad.FlxGamepad.get_dpadUp","flixel/input/gamepad/FlxGamepad.hx",462,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	::flixel::util::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadUp,return )

bool FlxGamepad_obj::get_dpadDown( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadDown",0xfabc5216,"flixel.input.gamepad.FlxGamepad.get_dpadDown","flixel/input/gamepad/FlxGamepad.hx",463,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	::flixel::util::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(463)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadDown,return )

bool FlxGamepad_obj::get_dpadLeft( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadLeft",0xfffe61bb,"flixel.input.gamepad.FlxGamepad.get_dpadLeft","flixel/input/gamepad/FlxGamepad.hx",464,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(464)
	::flixel::util::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(464)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadLeft,return )

bool FlxGamepad_obj::get_dpadRight( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadRight",0x75a42fa8,"flixel.input.gamepad.FlxGamepad.get_dpadRight","flixel/input/gamepad/FlxGamepad.hx",465,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	::flixel::util::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(465)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(465)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadRight,return )

int FlxGamepad_obj::JUST_RELEASED;

int FlxGamepad_obj::RELEASED;

int FlxGamepad_obj::PRESSED;

int FlxGamepad_obj::JUST_PRESSED;


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(dpadUp,"dpadUp");
	HX_MARK_MEMBER_NAME(dpadDown,"dpadDown");
	HX_MARK_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_MARK_MEMBER_NAME(dpadRight,"dpadRight");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(dpadUp,"dpadUp");
	HX_VISIT_MEMBER_NAME(dpadDown,"dpadDown");
	HX_VISIT_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_VISIT_MEMBER_NAME(dpadRight,"dpadRight");
	HX_VISIT_MEMBER_NAME(axis,"axis");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { return inCallProp == hx::paccAlways ? get_dpadUp() : dpadUp; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { return inCallProp == hx::paccAlways ? get_dpadDown() : dpadDown; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { return inCallProp == hx::paccAlways ? get_dpadLeft() : dpadLeft; }
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return getXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return getYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dpadRight") ) { return inCallProp == hx::paccAlways ? get_dpadRight() : dpadRight; }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadUp") ) { return get_dpadUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxisValue") ) { return getAxisValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadDown") ) { return get_dpadDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadLeft") ) { return get_dpadLeft_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dpadRight") ) { return get_dpadRight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstPressedButtonID") ) { return firstPressedButtonID_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"firstJustPressedButtonID") ) { return firstJustPressedButtonID_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"firstJustReleasedButtonID") ) { return firstJustReleasedButtonID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { dpadUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { dpadDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { dpadLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dpadRight") ) { dpadRight=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58"));
	outFields->push(HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("dpadUp","\xaa","\xeb","\xfa","\xb8"));
	outFields->push(HX_HCSTRING("dpadDown","\x71","\xaf","\x0f","\x13"));
	outFields->push(HX_HCSTRING("dpadLeft","\x16","\xbf","\x51","\x18"));
	outFields->push(HX_HCSTRING("dpadRight","\xed","\x81","\x42","\xa6"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepad_obj,buttons),HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{hx::fsFloat,(int)offsetof(FlxGamepad_obj,deadZone),HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,hat),HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadUp),HX_HCSTRING("dpadUp","\xaa","\xeb","\xfa","\xb8")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadDown),HX_HCSTRING("dpadDown","\x71","\xaf","\x0f","\x13")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadLeft),HX_HCSTRING("dpadLeft","\x16","\xbf","\x51","\x18")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadRight),HX_HCSTRING("dpadRight","\xed","\x81","\x42","\xa6")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxGamepad_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxGamepad_obj::JUST_RELEASED,HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6")},
	{hx::fsInt,(void *) &FlxGamepad_obj::RELEASED,HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0")},
	{hx::fsInt,(void *) &FlxGamepad_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{hx::fsInt,(void *) &FlxGamepad_obj::JUST_PRESSED,HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58"),
	HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("dpadUp","\xaa","\xeb","\xfa","\xb8"),
	HX_HCSTRING("dpadDown","\x71","\xaf","\x0f","\x13"),
	HX_HCSTRING("dpadLeft","\x16","\xbf","\x51","\x18"),
	HX_HCSTRING("dpadRight","\xed","\x81","\x42","\xa6"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("getButton","\x28","\xeb","\x36","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("checkStatus","\x1a","\xba","\x0d","\xe8"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("firstPressedButtonID","\xbf","\xc8","\x8e","\xcf"),
	HX_HCSTRING("firstJustPressedButtonID","\xf3","\xef","\x97","\xf3"),
	HX_HCSTRING("firstJustReleasedButtonID","\xc6","\x26","\x87","\x88"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("getXAxis","\xc3","\xf4","\x3e","\xa3"),
	HX_HCSTRING("getYAxis","\x44","\x89","\xa5","\x36"),
	HX_HCSTRING("anyButton","\xfe","\xc9","\x3f","\x37"),
	HX_HCSTRING("anyInput","\x7e","\x21","\xd0","\x3c"),
	HX_HCSTRING("getAxisValue","\x9a","\x07","\xb3","\x9a"),
	HX_HCSTRING("get_dpadUp","\x73","\x5b","\x82","\xa9"),
	HX_HCSTRING("get_dpadDown","\x7a","\x63","\x29","\xc8"),
	HX_HCSTRING("get_dpadLeft","\x1f","\x73","\x6b","\xcd"),
	HX_HCSTRING("get_dpadRight","\xc4","\x55","\xa6","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

#endif

hx::Class FlxGamepad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6"),
	HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d"),
	::String(null()) };

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepad","\x52","\x73","\x7c","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxGamepad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepad_obj >;
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

void FlxGamepad_obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
