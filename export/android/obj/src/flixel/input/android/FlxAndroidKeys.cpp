#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeys_obj::__construct()
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",17,0x680fe935)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->preventDefaultBackAction = false;
	HX_STACK_LINE(22)
	this->enabled = true;
	HX_STACK_LINE(163)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		tmp = tmp2;
	}
	HX_STACK_LINE(163)
	this->_keyLookup = tmp;
	HX_STACK_LINE(165)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(165)
	this->_keyList = tmp1;
	HX_STACK_LINE(167)
	this->addKey(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),(int)27);
	HX_STACK_LINE(168)
	this->addKey(HX_HCSTRING("MENU","\x9f","\x0d","\x1a","\x33"),(int)16777234);
	HX_STACK_LINE(170)
	::openfl::_legacy::display::MovieClip tmp2 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	::openfl::_legacy::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	::String tmp4 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	Dynamic tmp5 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(170)
	tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(171)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(171)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(171)
	::String tmp8 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(171)
	Dynamic tmp9 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(171)
	tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
	HX_STACK_LINE(173)
	Dynamic tmp10 = this->anyPressed_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(173)
	Dynamic tmp11 = ::Reflect_obj::makeVarArgs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(173)
	this->pressed = tmp11;
	HX_STACK_LINE(174)
	Dynamic tmp12 = this->anyJustPressed_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(174)
	Dynamic tmp13 = ::Reflect_obj::makeVarArgs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(174)
	this->justPressed = tmp13;
	HX_STACK_LINE(175)
	Dynamic tmp14 = this->anyJustReleased_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(175)
	Dynamic tmp15 = ::Reflect_obj::makeVarArgs(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(175)
	this->justReleased = tmp15;
}
;
	return null();
}

//FlxAndroidKeys_obj::~FlxAndroidKeys_obj() { }

Dynamic FlxAndroidKeys_obj::__CreateEmpty() { return  new FlxAndroidKeys_obj; }
hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__new()
{  hx::ObjectPtr< FlxAndroidKeys_obj > _result_ = new FlxAndroidKeys_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAndroidKeys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeys_obj > _result_ = new FlxAndroidKeys_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxAndroidKeys_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxAndroidKeys_obj::operator ::flixel::interfaces::IFlxInput_obj *()
	{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxAndroidKeys_obj >(this); }
Void FlxAndroidKeys_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","addKey",0x61dc0046,"flixel.input.android.FlxAndroidKeys.addKey","flixel/input/android/FlxAndroidKeys.hx",49,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyName,"KeyName")
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp = this->_keyLookup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::String tmp1 = KeyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		int tmp2 = KeyCode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKey tmp3 = ::flixel::input::keyboard::FlxKey_obj::__new(KeyName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKey value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(51)
			::haxe::ds::IntMap tmp4 = this->_keyList;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = KeyCode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			::flixel::input::keyboard::FlxKey tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp4->set(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,addKey,(void))

bool FlxAndroidKeys_obj::anyPressed( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyPressed",0x87609f5e,"flixel.input.android.FlxAndroidKeys.anyPressed","flixel/input/android/FlxAndroidKeys.hx",67,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(68)
	bool tmp = this->checkKeyStatus(KeyArray,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyPressed,return )

bool FlxAndroidKeys_obj::anyJustPressed( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyJustPressed",0xee4be892,"flixel.input.android.FlxAndroidKeys.anyJustPressed","flixel/input/android/FlxAndroidKeys.hx",84,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(85)
	bool tmp = this->checkKeyStatus(KeyArray,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyJustPressed,return )

bool FlxAndroidKeys_obj::anyJustReleased( cpp::ArrayBase KeyArray){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","anyJustReleased",0x9af5a4cd,"flixel.input.android.FlxAndroidKeys.anyJustReleased","flixel/input/android/FlxAndroidKeys.hx",101,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(102)
	bool tmp = this->checkKeyStatus(KeyArray,(int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,anyJustReleased,return )

int FlxAndroidKeys_obj::getKeyCode( ::String KeyName){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","getKeyCode",0xe25dd2be,"flixel.input.android.FlxAndroidKeys.getKeyCode","flixel/input/android/FlxAndroidKeys.hx",113,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyName,"KeyName")
	HX_STACK_LINE(114)
	::haxe::ds::StringMap tmp = this->_keyLookup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::String tmp1 = KeyName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,getKeyCode,return )

Array< ::Dynamic > FlxAndroidKeys_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","getIsDown",0x424cfd5a,"flixel.input.android.FlxAndroidKeys.getIsDown","flixel/input/android/FlxAndroidKeys.hx",123,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(126)
	::haxe::ds::IntMap tmp = this->_keyList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(tmp1);  __it->hasNext(); ){
		::flixel::input::keyboard::FlxKey key = __it->next();
		{
			HX_STACK_LINE(128)
			bool tmp2 = (key != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			if ((tmp2)){
				HX_STACK_LINE(128)
				tmp3 = (key->current > (int)0);
			}
			else{
				HX_STACK_LINE(128)
				tmp3 = false;
			}
			HX_STACK_LINE(128)
			if ((tmp3)){
				HX_STACK_LINE(130)
				::flixel::input::keyboard::FlxKey tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(130)
				keysDown->push(tmp4);
			}
		}
;
	}
	HX_STACK_LINE(133)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,getIsDown,return )

Void FlxAndroidKeys_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","destroy",0xdfe645b2,"flixel.input.android.FlxAndroidKeys.destroy","flixel/input/android/FlxAndroidKeys.hx",140,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->_keyList = null();
		HX_STACK_LINE(142)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,destroy,(void))

Void FlxAndroidKeys_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","reset",0xa9aa4487,"flixel.input.android.FlxAndroidKeys.reset","flixel/input/android/FlxAndroidKeys.hx",149,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::haxe::ds::IntMap tmp = this->_keyList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(tmp1);  __it->hasNext(); ){
			::flixel::input::keyboard::FlxKey key = __it->next();
			{
				HX_STACK_LINE(152)
				bool tmp2 = (key != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				if ((tmp2)){
					HX_STACK_LINE(154)
					key->current = (int)0;
					HX_STACK_LINE(155)
					key->last = (int)0;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,reset,(void))

bool FlxAndroidKeys_obj::checkKeyStatus( cpp::ArrayBase KeyArray,int Status){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","checkKeyStatus",0x4c4f4291,"flixel.input.android.FlxAndroidKeys.checkKeyStatus","flixel/input/android/FlxAndroidKeys.hx",186,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(187)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(189)
		return false;
	}
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			bool tmp1 = (_g < KeyArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			if ((tmp2)){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(192)
			Dynamic tmp3 = KeyArray->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			Dynamic key = tmp3;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(192)
			++(_g);
			HX_STACK_LINE(195)
			Dynamic tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(195)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(195)
			::String tmp6 = tmp5.toUpperCase();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			key = tmp6;
			HX_STACK_LINE(197)
			::flixel::input::keyboard::FlxKey tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(197)
					::String key1 = key;		HX_STACK_VAR(key1,"key1");
					HX_STACK_LINE(197)
					::haxe::ds::StringMap tmp9 = this->_keyLookup;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(197)
					::String tmp10 = key1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(197)
					tmp8 = tmp9->get(tmp10);
				}
				HX_STACK_LINE(197)
				int key1 = tmp8;		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(197)
				::haxe::ds::IntMap tmp9 = this->_keyList;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(197)
				int tmp10 = key1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(197)
				tmp7 = tmp9->get(tmp10);
			}
			HX_STACK_LINE(197)
			::flixel::input::keyboard::FlxKey k = tmp7;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(198)
			bool tmp8 = (k != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(198)
			if ((tmp8)){
				HX_STACK_LINE(200)
				bool tmp9 = (k->current == Status);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(200)
				if ((tmp9)){
					HX_STACK_LINE(202)
					return true;
				}
				else{
					HX_STACK_LINE(204)
					bool tmp10 = (Status == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(204)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(204)
					if ((tmp10)){
						HX_STACK_LINE(204)
						tmp11 = (k->current == (int)2);
					}
					else{
						HX_STACK_LINE(204)
						tmp11 = false;
					}
					HX_STACK_LINE(204)
					if ((tmp11)){
						HX_STACK_LINE(206)
						return true;
					}
					else{
						HX_STACK_LINE(208)
						bool tmp12 = (Status == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(208)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(208)
						if ((tmp12)){
							HX_STACK_LINE(208)
							tmp13 = (k->current == (int)-1);
						}
						else{
							HX_STACK_LINE(208)
							tmp13 = false;
						}
						HX_STACK_LINE(208)
						if ((tmp13)){
							HX_STACK_LINE(210)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(215)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,checkKeyStatus,return )

Void FlxAndroidKeys_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onKeyUp",0x309c70f3,"flixel.input.android.FlxAndroidKeys.onKeyUp","flixel/input/android/FlxAndroidKeys.hx",224,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(225)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(227)
		bool tmp = this->preventDefaultBackAction;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(227)
			int tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::haxe::ds::StringMap tmp3 = this->_keyLookup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			Dynamic tmp5 = tmp4->get(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			tmp1 = (tmp2 == tmp7);
		}
		else{
			HX_STACK_LINE(227)
			tmp1 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(230)
			FlashEvent->stopImmediatePropagation();
			HX_STACK_LINE(231)
			FlashEvent->stopPropagation();
		}
		HX_STACK_LINE(235)
		bool tmp2 = this->enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		if ((tmp3)){
			HX_STACK_LINE(237)
			return null();
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			::haxe::ds::IntMap tmp4 = this->_keyList;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			::flixel::input::keyboard::FlxKey tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			::flixel::input::keyboard::FlxKey obj = tmp6;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(240)
			bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			if ((tmp7)){
				HX_STACK_LINE(240)
				bool tmp8 = (obj->current > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				if ((tmp8)){
					HX_STACK_LINE(240)
					obj->current = (int)-1;
				}
				else{
					HX_STACK_LINE(240)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,onKeyUp,(void))

Void FlxAndroidKeys_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onKeyDown",0xda13d8fa,"flixel.input.android.FlxAndroidKeys.onKeyDown","flixel/input/android/FlxAndroidKeys.hx",249,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(250)
		int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(252)
		bool tmp = this->preventDefaultBackAction;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(252)
			int tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			::haxe::ds::StringMap tmp3 = this->_keyLookup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			Dynamic tmp5 = tmp4->get(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			tmp1 = (tmp2 == tmp7);
		}
		else{
			HX_STACK_LINE(252)
			tmp1 = false;
		}
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(254)
			FlashEvent->stopImmediatePropagation();
			HX_STACK_LINE(255)
			FlashEvent->stopPropagation();
		}
		HX_STACK_LINE(258)
		bool tmp2 = this->enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		if ((tmp2)){
			HX_STACK_LINE(260)
			::haxe::ds::IntMap tmp3 = this->_keyList;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			::flixel::input::keyboard::FlxKey tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			::flixel::input::keyboard::FlxKey obj = tmp5;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(260)
			bool tmp6 = (obj != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			if ((tmp6)){
				HX_STACK_LINE(260)
				bool tmp7 = (obj->current > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(260)
				if ((tmp7)){
					HX_STACK_LINE(260)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(260)
					obj->current = (int)2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKeys_obj,onKeyDown,(void))

bool FlxAndroidKeys_obj::inKeyArray( Array< ::String > KeyArray,int KeyCode){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","inKeyArray",0xbd4f42c7,"flixel.input.android.FlxAndroidKeys.inKeyArray","flixel/input/android/FlxAndroidKeys.hx",269,0x680fe935)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(270)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	if ((tmp)){
		HX_STACK_LINE(272)
		return false;
	}
	else{
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			bool tmp1 = (_g < KeyArray->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(276)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			if ((tmp2)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			::String tmp3 = KeyArray->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			::String keyString = tmp3;		HX_STACK_VAR(keyString,"keyString");
			HX_STACK_LINE(276)
			++(_g);
			HX_STACK_LINE(278)
			bool tmp4 = (keyString == HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(278)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			if ((tmp5)){
				HX_STACK_LINE(278)
				::haxe::ds::StringMap tmp7 = this->_keyLookup;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(278)
				::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				::String tmp9 = keyString;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(278)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				Dynamic tmp11 = tmp8->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(278)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(278)
				int tmp13 = ((int)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(278)
				int tmp14 = KeyCode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(278)
				tmp6 = (tmp13 == tmp14);
			}
			else{
				HX_STACK_LINE(278)
				tmp6 = true;
			}
			HX_STACK_LINE(278)
			if ((tmp6)){
				HX_STACK_LINE(280)
				return true;
			}
		}
	}
	HX_STACK_LINE(285)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,inKeyArray,return )

Void FlxAndroidKeys_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","updateKeyStates",0x4849b9b0,"flixel.input.android.FlxAndroidKeys.updateKeyStates","flixel/input/android/FlxAndroidKeys.hx",292,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(293)
		::haxe::ds::IntMap tmp = this->_keyList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		int tmp1 = KeyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::flixel::input::keyboard::FlxKey tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		::flixel::input::keyboard::FlxKey obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(295)
		bool tmp3 = (obj != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		if ((tmp3)){
			HX_STACK_LINE(297)
			bool tmp4 = (obj->current > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			if ((tmp4)){
				HX_STACK_LINE(299)
				bool tmp5 = Down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				if ((tmp5)){
					HX_STACK_LINE(301)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(305)
					obj->current = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(310)
				bool tmp5 = Down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				if ((tmp5)){
					HX_STACK_LINE(312)
					obj->current = (int)2;
				}
				else{
					HX_STACK_LINE(316)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxAndroidKeys_obj,updateKeyStates,(void))

Void FlxAndroidKeys_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onFocus",0x562716f1,"flixel.input.android.FlxAndroidKeys.onFocus","flixel/input/android/FlxAndroidKeys.hx",322,0x680fe935)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,onFocus,(void))

Void FlxAndroidKeys_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","onFocusLost",0xbc8cb975,"flixel.input.android.FlxAndroidKeys.onFocusLost","flixel/input/android/FlxAndroidKeys.hx",326,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,onFocusLost,(void))

Void FlxAndroidKeys_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","update",0x49deec51,"flixel.input.android.FlxAndroidKeys.update","flixel/input/android/FlxAndroidKeys.hx",333,0x680fe935)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		::haxe::ds::IntMap tmp = this->_keyList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		for(::cpp::FastIterator_obj< ::flixel::input::keyboard::FlxKey > *__it = ::cpp::CreateFastIterator< ::flixel::input::keyboard::FlxKey >(tmp1);  __it->hasNext(); ){
			::flixel::input::keyboard::FlxKey key = __it->next();
			{
				HX_STACK_LINE(336)
				bool tmp2 = (key == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(336)
				if ((tmp2)){
					HX_STACK_LINE(338)
					continue;
				}
				HX_STACK_LINE(341)
				bool tmp3 = (key->last == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(341)
				if ((tmp3)){
					HX_STACK_LINE(341)
					tmp4 = (key->current == (int)-1);
				}
				else{
					HX_STACK_LINE(341)
					tmp4 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp4)){
					HX_STACK_LINE(343)
					key->current = (int)0;
				}
				else{
					HX_STACK_LINE(345)
					bool tmp5 = (key->last == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(345)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(345)
					if ((tmp5)){
						HX_STACK_LINE(345)
						tmp6 = (key->current == (int)2);
					}
					else{
						HX_STACK_LINE(345)
						tmp6 = false;
					}
					HX_STACK_LINE(345)
					if ((tmp6)){
						HX_STACK_LINE(347)
						key->current = (int)1;
					}
				}
				HX_STACK_LINE(350)
				key->last = key->current;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeys_obj,update,(void))

int FlxAndroidKeys_obj::TOTAL;


FlxAndroidKeys_obj::FlxAndroidKeys_obj()
{
}

void FlxAndroidKeys_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAndroidKeys);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_MEMBER_NAME(_keyList,"_keyList");
	HX_MARK_MEMBER_NAME(preventDefaultBackAction,"preventDefaultBackAction");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_END_CLASS();
}

void FlxAndroidKeys_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_VISIT_MEMBER_NAME(_keyList,"_keyList");
	HX_VISIT_MEMBER_NAME(preventDefaultBackAction,"preventDefaultBackAction");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
}

Dynamic FlxAndroidKeys_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { return _keyList; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { return _keyLookup; }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyCode") ) { return getKeyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return inKeyArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeyStatus") ) { return checkKeyStatus_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"preventDefaultBackAction") ) { return preventDefaultBackAction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAndroidKeys_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { _keyList=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"preventDefaultBackAction") ) { preventDefaultBackAction=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAndroidKeys_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxAndroidKeys_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55"));
	outFields->push(HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb"));
	outFields->push(HX_HCSTRING("preventDefaultBackAction","\x66","\x87","\x77","\xfc"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxAndroidKeys_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxAndroidKeys_obj,_keyLookup),HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxAndroidKeys_obj,_keyList),HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb")},
	{hx::fsBool,(int)offsetof(FlxAndroidKeys_obj,preventDefaultBackAction),HX_HCSTRING("preventDefaultBackAction","\x66","\x87","\x77","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,justPressed),HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxAndroidKeys_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxAndroidKeys_obj::TOTAL,HX_HCSTRING("TOTAL","\xa4","\x8b","\x20","\x92")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55"),
	HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb"),
	HX_HCSTRING("preventDefaultBackAction","\x66","\x87","\x77","\xfc"),
	HX_HCSTRING("addKey","\xfe","\x99","\x02","\x9f"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("getKeyCode","\x76","\xa8","\xff","\xea"),
	HX_HCSTRING("getIsDown","\xa2","\x46","\x2b","\xdc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("checkKeyStatus","\x49","\x54","\xba","\x04"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("inKeyArray","\x7f","\x18","\xf1","\xc5"),
	HX_HCSTRING("updateKeyStates","\xf8","\x28","\x8e","\xed"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::TOTAL,"TOTAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::TOTAL,"TOTAL");
};

#endif

hx::Class FlxAndroidKeys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOTAL","\xa4","\x8b","\x20","\x92"),
	::String(null()) };

void FlxAndroidKeys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.android.FlxAndroidKeys","\x26","\x01","\x11","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxAndroidKeys_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAndroidKeys_obj >;
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

void FlxAndroidKeys_obj::__boot()
{
	TOTAL= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace android
