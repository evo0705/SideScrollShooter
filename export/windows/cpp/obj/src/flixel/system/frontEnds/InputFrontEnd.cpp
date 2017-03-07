#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",105,0x759f67bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(105)
	this->list = Array_obj< ::flixel::interfaces::IFlxInput >::__new();
}
;
	return null();
}

//InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",73,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Old,"Old")
	HX_STACK_ARG(New,"New")
	HX_STACK_LINE(74)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(75)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(76)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(76)
			if ((tmp1)){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(78)
			bool tmp3 = (input == Old);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			if ((tmp3)){
				HX_STACK_LINE(79)
				::flixel::input::mouse::FlxMouse tmp4 = New;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				hx::IndexRef((this->list).mPtr,i) = tmp4;
				HX_STACK_LINE(80)
				success = true;
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(83)
			(i)++;
		}
	}
	HX_STACK_LINE(86)
	bool tmp = success;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(87)
		::flixel::input::mouse::FlxMouse tmp1 = New;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		return tmp1;
	}
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",26,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			if ((tmp1)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(30)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(30)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::input::gamepad::FlxGamepadManager tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(30)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					if ((tmp6)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::input::gamepad::FlxGamepadManager tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(30)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						cl = tmp8;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					if ((tmp9)){
						HX_STACK_LINE(30)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(30)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						s = tmp11;
						HX_STACK_LINE(30)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						if ((tmp12)){
							HX_STACK_LINE(30)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(30)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							s = tmp15;
						}
					}
					HX_STACK_LINE(30)
					tmp4 = s;
				}
				HX_STACK_LINE(30)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::interfaces::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					if ((tmp7)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::interfaces::IFlxInput tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(30)
						cl = tmp9;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					if ((tmp10)){
						HX_STACK_LINE(30)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						s = tmp12;
						HX_STACK_LINE(30)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						if ((tmp13)){
							HX_STACK_LINE(30)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(30)
							s = tmp16;
						}
					}
					HX_STACK_LINE(30)
					tmp5 = s;
				}
				HX_STACK_LINE(30)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(30)
			if ((tmp3)){
				HX_STACK_LINE(32)
				::flixel::input::gamepad::FlxGamepadManager tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(36)
	::flixel::input::gamepad::FlxGamepadManager tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(37)
	::flixel::input::gamepad::FlxGamepadManager tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

::flixel::input::touch::FlxTouchManager InputFrontEnd_obj::add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_touch_FlxTouchManager",0x760d6272,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_touch_FlxTouchManager","flixel/system/frontEnds/InputFrontEnd.hx",26,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			if ((tmp1)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(30)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(30)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::input::touch::FlxTouchManager tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(30)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					if ((tmp6)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::input::touch::FlxTouchManager tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(30)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						cl = tmp8;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					if ((tmp9)){
						HX_STACK_LINE(30)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(30)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						s = tmp11;
						HX_STACK_LINE(30)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						if ((tmp12)){
							HX_STACK_LINE(30)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(30)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							s = tmp15;
						}
					}
					HX_STACK_LINE(30)
					tmp4 = s;
				}
				HX_STACK_LINE(30)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::interfaces::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					if ((tmp7)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::interfaces::IFlxInput tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(30)
						cl = tmp9;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					if ((tmp10)){
						HX_STACK_LINE(30)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						s = tmp12;
						HX_STACK_LINE(30)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						if ((tmp13)){
							HX_STACK_LINE(30)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(30)
							s = tmp16;
						}
					}
					HX_STACK_LINE(30)
					tmp5 = s;
				}
				HX_STACK_LINE(30)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(30)
			if ((tmp3)){
				HX_STACK_LINE(32)
				::flixel::input::touch::FlxTouchManager tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(36)
	::flixel::input::touch::FlxTouchManager tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(37)
	::flixel::input::touch::FlxTouchManager tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_touch_FlxTouchManager,return )

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",26,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			if ((tmp1)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(30)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(30)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::input::mouse::FlxMouse tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(30)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					if ((tmp6)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::input::mouse::FlxMouse tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(30)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						cl = tmp8;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					if ((tmp9)){
						HX_STACK_LINE(30)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(30)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						s = tmp11;
						HX_STACK_LINE(30)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						if ((tmp12)){
							HX_STACK_LINE(30)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(30)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							s = tmp15;
						}
					}
					HX_STACK_LINE(30)
					tmp4 = s;
				}
				HX_STACK_LINE(30)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::interfaces::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					if ((tmp7)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::interfaces::IFlxInput tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(30)
						cl = tmp9;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					if ((tmp10)){
						HX_STACK_LINE(30)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						s = tmp12;
						HX_STACK_LINE(30)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						if ((tmp13)){
							HX_STACK_LINE(30)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(30)
							s = tmp16;
						}
					}
					HX_STACK_LINE(30)
					tmp5 = s;
				}
				HX_STACK_LINE(30)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(30)
			if ((tmp3)){
				HX_STACK_LINE(32)
				::flixel::input::mouse::FlxMouse tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(36)
	::flixel::input::mouse::FlxMouse tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(37)
	::flixel::input::mouse::FlxMouse tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",26,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(28)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			if ((tmp1)){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(30)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(30)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::input::keyboard::FlxKeyboard tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(30)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					if ((tmp6)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::input::keyboard::FlxKeyboard tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(30)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						cl = tmp8;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					if ((tmp9)){
						HX_STACK_LINE(30)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(30)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						s = tmp11;
						HX_STACK_LINE(30)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						if ((tmp12)){
							HX_STACK_LINE(30)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(30)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							s = tmp15;
						}
					}
					HX_STACK_LINE(30)
					tmp4 = s;
				}
				HX_STACK_LINE(30)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(30)
					::flixel::interfaces::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					if ((tmp7)){
						HX_STACK_LINE(30)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(30)
						::flixel::interfaces::IFlxInput tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(30)
						cl = tmp9;
					}
					HX_STACK_LINE(30)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(30)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(30)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(30)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(30)
					if ((tmp10)){
						HX_STACK_LINE(30)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(30)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(30)
						s = tmp12;
						HX_STACK_LINE(30)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(30)
						if ((tmp13)){
							HX_STACK_LINE(30)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(30)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(30)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(30)
							s = tmp16;
						}
					}
					HX_STACK_LINE(30)
					tmp5 = s;
				}
				HX_STACK_LINE(30)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(30)
			if ((tmp3)){
				HX_STACK_LINE(32)
				::flixel::input::keyboard::FlxKeyboard tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(36)
	::flixel::input::keyboard::FlxKeyboard tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(37)
	::flixel::input::keyboard::FlxKeyboard tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",97,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			if ((tmp1)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(97)
			++(_g);
			HX_STACK_LINE(99)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",113,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			if ((tmp1)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(115)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",124,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			if ((tmp1)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",135,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(135)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			if ((tmp1)){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(135)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(135)
			++(_g);
			HX_STACK_LINE(137)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",146,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		Array< ::flixel::interfaces::IFlxInput > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(146)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			if ((tmp1)){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			::flixel::interfaces::IFlxInput tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			::flixel::interfaces::IFlxInput input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(146)
			++(_g);
			HX_STACK_LINE(148)
			input->destroy();
			HX_STACK_LINE(149)
			input = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return add_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return replace_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return add_flixel_input_keyboard_FlxKeyboard_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"add_flixel_input_touch_FlxTouchManager") ) { return add_flixel_input_touch_FlxTouchManager_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return add_flixel_input_gamepad_FlxGamepadManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::flixel::interfaces::IFlxInput > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InputFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::flixel::interfaces::IFlxInput >*/ ,(int)offsetof(InputFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("replace_flixel_input_mouse_FlxMouse","\x1a","\x65","\xd5","\xe3"),
	HX_HCSTRING("add_flixel_input_gamepad_FlxGamepadManager","\x26","\xa8","\x4b","\x80"),
	HX_HCSTRING("add_flixel_input_touch_FlxTouchManager","\xe6","\xdb","\x13","\x1c"),
	HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"),
	HX_HCSTRING("add_flixel_input_keyboard_FlxKeyboard","\x3b","\x4b","\x11","\x84"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.InputFrontEnd","\x62","\x30","\x2d","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InputFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
