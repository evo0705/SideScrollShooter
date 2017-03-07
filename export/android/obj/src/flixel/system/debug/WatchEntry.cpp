#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void WatchEntry_obj::__construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{
HX_STACK_FRAME("flixel.system.debug.WatchEntry","new",0x24d59cbd,"flixel.system.debug.WatchEntry.new","flixel/system/debug/WatchEntry.hx",19,0x35f5be92)
HX_STACK_THIS(this)
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(NameWidth,"NameWidth")
HX_STACK_ARG(ValueWidth,"ValueWidth")
HX_STACK_ARG(Obj,"Obj")
HX_STACK_ARG(Field,"Field")
HX_STACK_ARG(Custom,"Custom")
{
	HX_STACK_LINE(56)
	this->quickWatch = false;
	HX_STACK_LINE(71)
	this->editing = false;
	HX_STACK_LINE(73)
	bool tmp = (Obj == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(73)
		tmp2 = (Field == null());
	}
	else{
		HX_STACK_LINE(73)
		tmp2 = false;
	}
	HX_STACK_LINE(73)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	if ((tmp2)){
		HX_STACK_LINE(73)
		tmp3 = (Custom != null());
	}
	else{
		HX_STACK_LINE(73)
		tmp3 = false;
	}
	HX_STACK_LINE(73)
	if ((tmp3)){
		HX_STACK_LINE(75)
		this->quickWatch = true;
	}
	HX_STACK_LINE(78)
	this->custom = Custom;
	HX_STACK_LINE(81)
	bool tmp4 = this->quickWatch;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	if ((tmp5)){
		HX_STACK_LINE(83)
		this->object = Obj;
		HX_STACK_LINE(84)
		this->field = Field;
		HX_STACK_LINE(86)
		::String tmp6 = this->field;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		Array< ::String > tempArr = tmp6.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tempArr,"tempArr");
		HX_STACK_LINE(87)
		int l = tempArr->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(88)
		Dynamic tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		Dynamic tempObj = tmp7;		HX_STACK_VAR(tempObj,"tempObj");
		HX_STACK_LINE(89)
		::String tempVarName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tempVarName,"tempVarName");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp8 = (_g < l);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(90)
				if ((tmp9)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(90)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				::String tmp11 = tempArr->__get(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				tempVarName = tmp11;
				HX_STACK_LINE(94)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(96)
					Dynamic tmp12 = tempObj;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(96)
					::String tmp13 = tempVarName;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					::Reflect_obj::getProperty(tmp12,tmp13);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::flixel::_system::frontEnds::LogFrontEnd tmp12 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(100)
								Dynamic tmp13 = tempObj;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(100)
								::String tmp14 = ::Std_obj::string(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(100)
								::String tmp15 = (HX_HCSTRING("Watch: ","\x95","\xe2","\xa3","\xf6") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(100)
								::String tmp16 = (tmp15 + HX_HCSTRING(" does not have a field '","\x1e","\x08","\x66","\xc6"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(100)
								::String tmp17 = tempVarName;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(100)
								::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(100)
								::String tmp19 = (tmp18 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(100)
								::flixel::_system::debug::LogStyle tmp20 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(100)
								tmp12->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp19,tmp20,true);
							}
							HX_STACK_LINE(101)
							tempVarName = null();
							HX_STACK_LINE(102)
							break;
						}
					}
				}
				HX_STACK_LINE(105)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(105)
				int tmp13 = (l - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(105)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(105)
				if ((tmp14)){
					HX_STACK_LINE(107)
					Dynamic tmp15 = tempObj;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(107)
					::String tmp16 = tempVarName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(107)
					Dynamic tmp17 = ::Reflect_obj::getProperty(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(107)
					tempObj = tmp17;
				}
			}
		}
		HX_STACK_LINE(111)
		this->object = tempObj;
		HX_STACK_LINE(112)
		this->field = tempVarName;
	}
	HX_STACK_LINE(115)
	::String tmp6 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	::String fontName = tmp6;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(117)
	int color = (int)16777215;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(118)
	bool tmp7 = this->quickWatch;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(118)
	if ((tmp7)){
		HX_STACK_LINE(120)
		color = (int)10875373;
	}
	HX_STACK_LINE(123)
	::openfl::_legacy::text::TextFormat tmp8 = ::openfl::_legacy::text::TextFormat_obj::__new(fontName,(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(123)
	this->_whiteText = tmp8;
	HX_STACK_LINE(124)
	::openfl::_legacy::text::TextFormat tmp9 = ::openfl::_legacy::text::TextFormat_obj::__new(fontName,(int)12,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(124)
	this->_blackText = tmp9;
	HX_STACK_LINE(126)
	::openfl::_legacy::text::TextField tmp10 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(126)
	this->nameDisplay = tmp10;
	HX_STACK_LINE(127)
	::openfl::_legacy::text::TextField tmp11 = this->nameDisplay;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(127)
	Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	tmp11->set_y(tmp12);
	HX_STACK_LINE(128)
	::openfl::_legacy::text::TextField tmp13 = this->nameDisplay;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(128)
	tmp13->set_multiline(false);
	HX_STACK_LINE(129)
	::openfl::_legacy::text::TextField tmp14 = this->nameDisplay;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(129)
	tmp14->set_selectable(true);
	HX_STACK_LINE(130)
	::openfl::_legacy::text::TextField tmp15 = this->nameDisplay;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(130)
	tmp15->set_embedFonts(true);
	HX_STACK_LINE(131)
	::openfl::_legacy::text::TextField tmp16 = this->nameDisplay;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(131)
	::openfl::_legacy::text::TextFormat tmp17 = this->_whiteText;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(131)
	tmp16->set_defaultTextFormat(tmp17);
	HX_STACK_LINE(133)
	::openfl::_legacy::text::TextField tmp18 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(133)
	this->valueDisplay = tmp18;
	HX_STACK_LINE(134)
	::openfl::_legacy::text::TextField tmp19 = this->valueDisplay;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(134)
	Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(134)
	tmp19->set_y(tmp20);
	HX_STACK_LINE(135)
	::openfl::_legacy::text::TextField tmp21 = this->valueDisplay;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(135)
	tmp21->set_height((int)20);
	HX_STACK_LINE(136)
	::openfl::_legacy::text::TextField tmp22 = this->valueDisplay;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(136)
	tmp22->set_multiline(false);
	HX_STACK_LINE(137)
	::openfl::_legacy::text::TextField tmp23 = this->valueDisplay;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(137)
	tmp23->set_selectable(true);
	HX_STACK_LINE(138)
	::openfl::_legacy::text::TextField tmp24 = this->valueDisplay;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(138)
	tmp24->doubleClickEnabled = true;
	HX_STACK_LINE(140)
	bool tmp25 = this->quickWatch;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(140)
	bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(140)
	if ((tmp26)){
		HX_STACK_LINE(142)
		::openfl::_legacy::text::TextField tmp27 = this->valueDisplay;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(142)
		::String tmp28 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(142)
		Dynamic tmp29 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(142)
		tmp27->addEventListener(tmp28,tmp29,null(),null(),null());
		HX_STACK_LINE(143)
		::openfl::_legacy::text::TextField tmp30 = this->valueDisplay;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(143)
		::String tmp31 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(143)
		Dynamic tmp32 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(143)
		tmp30->addEventListener(tmp31,tmp32,null(),null(),null());
	}
	HX_STACK_LINE(145)
	::openfl::_legacy::text::TextField tmp27 = this->valueDisplay;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(145)
	tmp27->set_background(false);
	HX_STACK_LINE(146)
	::openfl::_legacy::text::TextField tmp28 = this->valueDisplay;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(146)
	tmp28->set_backgroundColor((int)16777215);
	HX_STACK_LINE(147)
	::openfl::_legacy::text::TextField tmp29 = this->valueDisplay;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(147)
	tmp29->set_embedFonts(true);
	HX_STACK_LINE(148)
	::openfl::_legacy::text::TextField tmp30 = this->valueDisplay;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(148)
	::openfl::_legacy::text::TextFormat tmp31 = this->_whiteText;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(148)
	tmp30->set_defaultTextFormat(tmp31);
	HX_STACK_LINE(150)
	Float tmp32 = NameWidth;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(150)
	Float tmp33 = ValueWidth;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(150)
	this->updateWidth(tmp32,tmp33);
}
;
	return null();
}

//WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(Y,NameWidth,ValueWidth,Obj,Field,Custom);
	return _result_;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *WatchEntry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

WatchEntry_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< WatchEntry_obj >(this); }
Void WatchEntry_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","destroy",0x6821ebd7,"flixel.system.debug.WatchEntry.destroy","flixel/system/debug/WatchEntry.hx",157,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		this->object = null();
		HX_STACK_LINE(159)
		this->oldValue = null();
		HX_STACK_LINE(160)
		this->nameDisplay = null();
		HX_STACK_LINE(161)
		this->field = null();
		HX_STACK_LINE(162)
		this->custom = null();
		HX_STACK_LINE(163)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(165)
			::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			Dynamic tmp4 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			tmp2->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(166)
			::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			Dynamic tmp7 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			tmp5->removeEventListener(tmp6,tmp7,null());
			HX_STACK_LINE(167)
			this->valueDisplay = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

Void WatchEntry_obj::setY( Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","setY",0x1961977a,"flixel.system.debug.WatchEntry.setY","flixel/system/debug/WatchEntry.hx",175,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(176)
		::openfl::_legacy::text::TextField tmp = this->nameDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		tmp->set_y(tmp1);
		HX_STACK_LINE(177)
		::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setY,(void))

Void WatchEntry_obj::updateWidth( Float NameWidth,Float ValueWidth){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","updateWidth",0xbedc109a,"flixel.system.debug.WatchEntry.updateWidth","flixel/system/debug/WatchEntry.hx",184,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NameWidth,"NameWidth")
		HX_STACK_ARG(ValueWidth,"ValueWidth")
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextField tmp = this->nameDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		Float tmp1 = NameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		tmp->set_width(tmp1);
		HX_STACK_LINE(186)
		::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		Float tmp3 = ValueWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		tmp2->set_width(tmp3);
		HX_STACK_LINE(187)
		::String tmp4 = this->custom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		if ((tmp5)){
			HX_STACK_LINE(189)
			::openfl::_legacy::text::TextField tmp6 = this->nameDisplay;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			::String tmp7 = this->custom;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			tmp6->set_text(tmp7);
		}
		else{
			HX_STACK_LINE(191)
			::String tmp6 = this->field;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			if ((tmp7)){
				HX_STACK_LINE(193)
				::openfl::_legacy::text::TextField tmp8 = this->nameDisplay;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				tmp8->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				HX_STACK_LINE(194)
				bool tmp9 = (NameWidth > (int)120);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(196)
					::openfl::_legacy::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(196)
					::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(196)
					{
						HX_STACK_LINE(196)
						Dynamic tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(196)
						Dynamic Obj = tmp12;		HX_STACK_VAR(Obj,"Obj");
						HX_STACK_LINE(196)
						::hx::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(196)
						Dynamic tmp13 = Obj;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(196)
						bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(196)
						if ((tmp14)){
							HX_STACK_LINE(196)
							cl = ((::hx::Class)(Obj));
						}
						else{
							HX_STACK_LINE(196)
							Dynamic tmp15 = Obj;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(196)
							::hx::Class tmp16 = ::Type_obj::getClass(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(196)
							cl = tmp16;
						}
						HX_STACK_LINE(196)
						::hx::Class tmp15 = cl;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(196)
						::String tmp16 = ::Type_obj::getClassName(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(196)
						::String s = tmp16;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(196)
						bool tmp17 = (s != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(196)
						if ((tmp17)){
							HX_STACK_LINE(196)
							::String tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(196)
							::String tmp19 = ::StringTools_obj::replace(tmp18,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(196)
							s = tmp19;
							HX_STACK_LINE(196)
							{
								HX_STACK_LINE(196)
								int tmp20 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(196)
								int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(196)
								::String tmp22 = s.substr(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(196)
								s = tmp22;
							}
						}
						HX_STACK_LINE(196)
						tmp11 = s;
					}
					HX_STACK_LINE(196)
					::String tmp12 = (tmp11 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(196)
					tmp10->appendText(tmp12);
				}
				HX_STACK_LINE(199)
				::openfl::_legacy::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				::String tmp11 = this->field;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(199)
				tmp10->appendText(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateWidth,(void))

bool WatchEntry_obj::updateValue( ){
	HX_STACK_FRAME("flixel.system.debug.WatchEntry","updateValue",0x2631da05,"flixel.system.debug.WatchEntry.updateValue","flixel/system/debug/WatchEntry.hx",208,0x35f5be92)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	bool tmp = this->editing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	if ((tmp1)){
		HX_STACK_LINE(209)
		tmp2 = this->quickWatch;
	}
	else{
		HX_STACK_LINE(209)
		tmp2 = true;
	}
	HX_STACK_LINE(209)
	if ((tmp2)){
		HX_STACK_LINE(211)
		return false;
	}
	HX_STACK_LINE(214)
	Dynamic tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	::String tmp4 = this->field;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	Dynamic tmp5 = ::Reflect_obj::getProperty(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(214)
	Dynamic property = tmp5;		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(215)
	::openfl::_legacy::text::TextField tmp6 = this->valueDisplay;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	Dynamic tmp7 = property;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	tmp6->set_text(tmp8);
	HX_STACK_LINE(217)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,return )

Void WatchEntry_obj::onMouseUp( ::openfl::_legacy::events::MouseEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","onMouseUp",0xc94c9c9e,"flixel.system.debug.WatchEntry.onMouseUp","flixel/system/debug/WatchEntry.hx",226,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(227)
		this->editing = true;
		HX_STACK_LINE(229)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		tmp->enabled = false;
		HX_STACK_LINE(231)
		Dynamic tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		::String tmp2 = this->field;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		this->oldValue = tmp3;
		HX_STACK_LINE(232)
		::openfl::_legacy::text::TextField tmp4 = this->valueDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		tmp4->set_type(::openfl::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(233)
		::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::openfl::_legacy::text::TextFormat tmp6 = this->_blackText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		tmp5->setTextFormat(tmp6,null(),null());
		HX_STACK_LINE(234)
		::openfl::_legacy::text::TextField tmp7 = this->valueDisplay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		tmp7->set_background(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onMouseUp,(void))

Void WatchEntry_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","onKeyUp",0xb8d81718,"flixel.system.debug.WatchEntry.onKeyUp","flixel/system/debug/WatchEntry.hx",243,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(244)
		bool tmp = (FlashEvent->keyCode == (int)13);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp2)){
			HX_STACK_LINE(244)
			tmp3 = (FlashEvent->keyCode == (int)9);
		}
		else{
			HX_STACK_LINE(244)
			tmp3 = true;
		}
		HX_STACK_LINE(244)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		if ((tmp4)){
			HX_STACK_LINE(244)
			tmp5 = (FlashEvent->keyCode == (int)27);
		}
		else{
			HX_STACK_LINE(244)
			tmp5 = true;
		}
		HX_STACK_LINE(244)
		if ((tmp5)){
			HX_STACK_LINE(246)
			bool tmp6 = (FlashEvent->keyCode == (int)27);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(246)
			if ((tmp6)){
				HX_STACK_LINE(248)
				this->cancel();
			}
			else{
				HX_STACK_LINE(252)
				this->submit();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onKeyUp,(void))

Void WatchEntry_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","cancel",0xaf52793d,"flixel.system.debug.WatchEntry.cancel","flixel/system/debug/WatchEntry.hx",261,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		Dynamic tmp1 = this->oldValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		Dynamic tmp2 = tmp1->toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		tmp->set_text(tmp2);
		HX_STACK_LINE(263)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,cancel,(void))

Void WatchEntry_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","submit",0x9124e3db,"flixel.system.debug.WatchEntry.submit","flixel/system/debug/WatchEntry.hx",270,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		Dynamic tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		::String tmp1 = this->field;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		Dynamic tmp2 = ::Reflect_obj::getProperty(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		Dynamic property = tmp2;		HX_STACK_VAR(property,"property");
		HX_STACK_LINE(274)
		Dynamic tmp3 = property;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::flixel::util::FlxPoint >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		if ((tmp4)){
			HX_STACK_LINE(275)
			::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			::String tmp7 = tmp6.split(HX_HCSTRING(" |","\x5c","\x1c","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			::String xString = tmp7;		HX_STACK_VAR(xString,"xString");
			HX_STACK_LINE(276)
			int tmp8 = xString.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			::String tmp9 = xString.substring((int)3,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(276)
			xString = tmp9;
			HX_STACK_LINE(277)
			::String tmp10 = xString;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(277)
			Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(277)
			Float xValue = tmp11;		HX_STACK_VAR(xValue,"xValue");
			HX_STACK_LINE(279)
			::openfl::_legacy::text::TextField tmp12 = this->valueDisplay;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(279)
			::String tmp13 = tmp12->get_text();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(279)
			::String tmp14 = tmp13.split(HX_HCSTRING("| ","\x24","\x6c","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(279)
			::String yString = tmp14;		HX_STACK_VAR(yString,"yString");
			HX_STACK_LINE(280)
			int tmp15 = yString.length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(280)
			::String tmp16 = yString.substring((int)3,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(280)
			yString = tmp16;
			HX_STACK_LINE(281)
			::String tmp17 = yString;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(281)
			Float tmp18 = ::Std_obj::parseFloat(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(281)
			Float yValue = tmp18;		HX_STACK_VAR(yValue,"yValue");
			HX_STACK_LINE(283)
			Float tmp19 = xValue;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(283)
			bool tmp20 = ::Math_obj::isNaN(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(283)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(283)
			if ((tmp21)){
				HX_STACK_LINE(285)
				Dynamic tmp22 = property;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(285)
				Float tmp23 = xValue;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(285)
				::Reflect_obj::setField(tmp22,HX_HCSTRING("x","\x78","\x00","\x00","\x00"),tmp23);
			}
			HX_STACK_LINE(287)
			Float tmp22 = yValue;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(287)
			bool tmp23 = ::Math_obj::isNaN(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(287)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(287)
			if ((tmp24)){
				HX_STACK_LINE(289)
				Dynamic tmp25 = property;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(289)
				Float tmp26 = yValue;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(289)
				::Reflect_obj::setField(tmp25,HX_HCSTRING("y","\x79","\x00","\x00","\x00"),tmp26);
			}
		}
		else{
			HX_STACK_LINE(294)
			Dynamic tmp5 = this->object;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			::String tmp6 = this->field;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			::openfl::_legacy::text::TextField tmp7 = this->valueDisplay;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			::Reflect_obj::setProperty(tmp5,tmp6,tmp8);
		}
		HX_STACK_LINE(297)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,submit,(void))

::String WatchEntry_obj::toString( ){
	HX_STACK_FRAME("flixel.system.debug.WatchEntry","toString",0x1d1a132f,"flixel.system.debug.WatchEntry.toString","flixel/system/debug/WatchEntry.hx",301,0x35f5be92)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			Dynamic tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			Dynamic Obj = tmp2;		HX_STACK_VAR(Obj,"Obj");
			HX_STACK_LINE(303)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(303)
			Dynamic tmp3 = Obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			if ((tmp4)){
				HX_STACK_LINE(303)
				cl = ((::hx::Class)(Obj));
			}
			else{
				HX_STACK_LINE(303)
				Dynamic tmp5 = Obj;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(303)
				::hx::Class tmp6 = ::Type_obj::getClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(303)
				cl = tmp6;
			}
			HX_STACK_LINE(303)
			::hx::Class tmp5 = cl;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			::String s = tmp6;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(303)
			bool tmp7 = (s != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			if ((tmp7)){
				HX_STACK_LINE(303)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(303)
				::String tmp9 = ::StringTools_obj::replace(tmp8,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(303)
				s = tmp9;
				HX_STACK_LINE(303)
				int tmp10 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(303)
				int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(303)
				::String tmp12 = s.substr(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(303)
				s = tmp12;
			}
			HX_STACK_LINE(303)
			tmp1 = s;
		}
		HX_STACK_LINE(303)
		Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			_this->label = HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15");
			HX_STACK_LINE(303)
			_this->value = value;
			HX_STACK_LINE(303)
			tmp = _this;
		}
	}
	HX_STACK_LINE(304)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(304)
		_this->label = HX_HCSTRING("field","\xba","\x94","\x93","\x00");
		HX_STACK_LINE(304)
		::String tmp4 = this->field;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		_this->value = tmp4;
		HX_STACK_LINE(304)
		tmp1 = _this;
	}
	HX_STACK_LINE(302)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,toString,return )

Void WatchEntry_obj::doneEditing( ){
{
		HX_STACK_FRAME("flixel.system.debug.WatchEntry","doneEditing",0xedb7c213,"flixel.system.debug.WatchEntry.doneEditing","flixel/system/debug/WatchEntry.hx",311,0x35f5be92)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		tmp->set_type(::openfl::text::TextFieldType_obj::DYNAMIC);
		HX_STACK_LINE(313)
		::openfl::_legacy::text::TextField tmp1 = this->valueDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::openfl::_legacy::text::TextFormat tmp2 = this->_whiteText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		tmp1->setTextFormat(tmp2,null(),null());
		HX_STACK_LINE(314)
		::openfl::_legacy::text::TextField tmp3 = this->valueDisplay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		::openfl::_legacy::text::TextFormat tmp4 = this->_whiteText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		tmp3->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(315)
		::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		tmp5->set_background(false);
		HX_STACK_LINE(316)
		this->editing = false;
		HX_STACK_LINE(318)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(318)
		tmp6->enabled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,doneEditing,(void))


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(oldValue,"oldValue");
	HX_MARK_MEMBER_NAME(_whiteText,"_whiteText");
	HX_MARK_MEMBER_NAME(_blackText,"_blackText");
	HX_MARK_MEMBER_NAME(quickWatch,"quickWatch");
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(field,"field");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(oldValue,"oldValue");
	HX_VISIT_MEMBER_NAME(_whiteText,"_whiteText");
	HX_VISIT_MEMBER_NAME(_blackText,"_blackText");
	HX_VISIT_MEMBER_NAME(quickWatch,"quickWatch");
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { return oldValue; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { return _whiteText; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { return _blackText; }
		if (HX_FIELD_EQ(inName,"quickWatch") ) { return quickWatch; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		if (HX_FIELD_EQ(inName,"updateWidth") ) { return updateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"doneEditing") ) { return doneEditing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { return valueDisplay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { oldValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { _whiteText=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { _blackText=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quickWatch") ) { quickWatch=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { valueDisplay=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WatchEntry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	outFields->push(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"));
	outFields->push(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"));
	outFields->push(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"));
	outFields->push(HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"));
	outFields->push(HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18"));
	outFields->push(HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75"));
	outFields->push(HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67"));
	outFields->push(HX_HCSTRING("quickWatch","\x22","\xc4","\x33","\xf4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,custom),HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameDisplay),HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,valueDisplay),HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,editing),HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,oldValue),HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_whiteText),HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_blackText),HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,quickWatch),HX_HCSTRING("quickWatch","\x22","\xc4","\x33","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),
	HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"),
	HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"),
	HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"),
	HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18"),
	HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75"),
	HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67"),
	HX_HCSTRING("quickWatch","\x22","\xc4","\x33","\xf4"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"),
	HX_HCSTRING("updateWidth","\x3d","\x1f","\xfb","\xaf"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("doneEditing","\xb6","\xd0","\xd6","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchEntry_obj::__mClass;

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.WatchEntry","\x4b","\x7a","\xc7","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &WatchEntry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchEntry_obj >;
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
} // end namespace debug
