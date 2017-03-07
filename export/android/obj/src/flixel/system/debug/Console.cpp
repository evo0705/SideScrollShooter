#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleCommands
#include <flixel/system/debug/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void Console_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.Console","new",0x1c127021,"flixel.system.debug.Console.new","flixel/system/debug/Console.hx",24,0x3559cbd0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->_historyIndex = (int)0;
	HX_STACK_LINE(74)
	::flixel::_system::debug::GraphicConsole tmp = ::flixel::_system::debug::GraphicConsole_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	super::__construct(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),tmp,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(76)
	this->commands = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(78)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(78)
	this->registeredObjects = tmp1;
	HX_STACK_LINE(79)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(79)
	this->registeredFunctions = tmp2;
	HX_STACK_LINE(81)
	this->objectStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(83)
	this->cmdHistory = Array_obj< ::String >::__new();
	HX_STACK_LINE(86)
	::flixel::util::FlxSave tmp3 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	bool tmp4 = (tmp3->data->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	if ((tmp4)){
		HX_STACK_LINE(88)
		::flixel::util::FlxSave tmp5 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		this->cmdHistory = tmp5->data->__Field(HX_HCSTRING("history","\x54","\x35","\x47","\x64"), hx::paccDynamic );
		HX_STACK_LINE(89)
		int tmp6 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		this->_historyIndex = tmp6;
	}
	else{
		HX_STACK_LINE(93)
		this->cmdHistory = Array_obj< ::String >::__new();
		HX_STACK_LINE(94)
		::flixel::util::FlxSave tmp5 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		tmp5->data->__FieldRef(HX_HCSTRING("history","\x54","\x35","\x47","\x64")) = this->cmdHistory;
	}
	HX_STACK_LINE(98)
	::openfl::_legacy::text::TextField tmp5 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	this->_input = tmp5;
	HX_STACK_LINE(99)
	::openfl::_legacy::text::TextField tmp6 = this->_input;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	tmp6->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(100)
	::openfl::_legacy::text::TextField tmp7 = this->_input;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(100)
	tmp7->set_embedFonts(true);
	HX_STACK_LINE(101)
	::openfl::_legacy::text::TextField tmp8 = this->_input;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(101)
	::String tmp9 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	::openfl::_legacy::text::TextFormat tmp10 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp9,(int)13,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(101)
	tmp8->set_defaultTextFormat(tmp10);
	HX_STACK_LINE(102)
	::openfl::_legacy::text::TextField tmp11 = this->_input;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(102)
	tmp11->set_text(HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));
	HX_STACK_LINE(103)
	::openfl::_legacy::text::TextField tmp12 = this->_input;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(103)
	int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(103)
	int tmp14 = (tmp13 - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(103)
	tmp12->set_width(tmp14);
	HX_STACK_LINE(104)
	::openfl::_legacy::text::TextField tmp15 = this->_input;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(104)
	int tmp16 = this->_height;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(104)
	int tmp17 = (tmp16 - (int)15);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(104)
	tmp15->set_height(tmp17);
	HX_STACK_LINE(105)
	::openfl::_legacy::text::TextField tmp18 = this->_input;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(105)
	tmp18->set_x((int)2);
	HX_STACK_LINE(106)
	::openfl::_legacy::text::TextField tmp19 = this->_input;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(106)
	tmp19->set_y((int)15);
	HX_STACK_LINE(107)
	::openfl::_legacy::text::TextField tmp20 = this->_input;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(107)
	this->addChild(tmp20);
	HX_STACK_LINE(109)
	::openfl::_legacy::text::TextField tmp21 = this->_input;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(109)
	::String tmp22 = ::openfl::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(109)
	Dynamic tmp23 = this->onFocus_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(109)
	tmp21->addEventListener(tmp22,tmp23,null(),null(),null());
	HX_STACK_LINE(110)
	::openfl::_legacy::text::TextField tmp24 = this->_input;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(110)
	::String tmp25 = ::openfl::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(110)
	Dynamic tmp26 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(110)
	tmp24->addEventListener(tmp25,tmp26,null(),null(),null());
	HX_STACK_LINE(111)
	::openfl::_legacy::text::TextField tmp27 = this->_input;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(111)
	::String tmp28 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(111)
	Dynamic tmp29 = this->onKeyPress_dyn();		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(111)
	tmp27->addEventListener(tmp28,tmp29,null(),null(),null());
	HX_STACK_LINE(115)
	::flixel::_system::debug::ConsoleCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

Void Console_obj::onFocus( ::openfl::events::FocusEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.Console","onFocus",0x4417127a,"flixel.system.debug.Console.onFocus","flixel/system/debug/Console.hx",120,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(130)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		tmp->enabled = false;
		HX_STACK_LINE(133)
		::openfl::_legacy::text::TextField tmp1 = this->_input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		bool tmp3 = (tmp2 == HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		if ((tmp3)){
			HX_STACK_LINE(134)
			::openfl::_legacy::text::TextField tmp4 = this->_input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			tmp4->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))

Void Console_obj::onFocusLost( ::openfl::events::FocusEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.Console","onFocusLost",0x437bad7e,"flixel.system.debug.Console.onFocusLost","flixel/system/debug/Console.hx",139,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(150)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		tmp->enabled = true;
		HX_STACK_LINE(153)
		::openfl::_legacy::text::TextField tmp1 = this->_input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		bool tmp3 = (tmp2 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		if ((tmp3)){
			HX_STACK_LINE(154)
			::openfl::_legacy::text::TextField tmp4 = this->_input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			tmp4->set_text(HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

Void Console_obj::onKeyPress( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.Console","onKeyPress",0x56941802,"flixel.system.debug.Console.onKeyPress","flixel/system/debug/Console.hx",159,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(161)
		bool tmp = (e->keyCode == (int)32);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(161)
			::openfl::_legacy::text::TextField tmp2 = this->_input;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			::openfl::_legacy::text::TextField tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			tmp1 = (tmp5 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(161)
			tmp1 = false;
		}
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(162)
			::openfl::_legacy::text::TextField tmp2 = this->_input;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(165)
		bool tmp2 = (e->keyCode == (int)13);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			::openfl::_legacy::text::TextField tmp4 = this->_input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			::openfl::_legacy::text::TextField tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			tmp3 = (tmp7 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(165)
			tmp3 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(166)
			this->processCommand();
		}
		else{
			HX_STACK_LINE(169)
			bool tmp4 = (e->keyCode == (int)27);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			if ((tmp4)){
				HX_STACK_LINE(170)
				::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(170)
				::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(170)
				tmp6->set_focus(null());
			}
			else{
				HX_STACK_LINE(173)
				bool tmp5 = (e->keyCode == (int)46);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(173)
				if ((tmp5)){
					HX_STACK_LINE(174)
					::openfl::_legacy::text::TextField tmp6 = this->_input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(174)
					tmp6->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(177)
					bool tmp6 = (e->keyCode == (int)38);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(177)
					if ((tmp6)){
						HX_STACK_LINE(179)
						int tmp7 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(179)
						bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(179)
						if ((tmp8)){
							HX_STACK_LINE(180)
							return null();
						}
						HX_STACK_LINE(182)
						::openfl::_legacy::text::TextField tmp9 = this->_input;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(182)
						::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							int tmp11 = this->_historyIndex;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(182)
							bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								(this->_historyIndex)--;
							}
							HX_STACK_LINE(182)
							int tmp13 = this->_historyIndex;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							tmp10 = this->cmdHistory->__GetItem(tmp13);
						}
						HX_STACK_LINE(182)
						tmp9->set_text(tmp10);
						HX_STACK_LINE(185)
						::String tmp11 = ::openfl::_legacy::events::Event_obj::RENDER;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						Dynamic tmp12 = this->overrideDefaultSelection_dyn();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						this->addEventListener(tmp11,tmp12,null(),null(),null());
						HX_STACK_LINE(186)
						::openfl::_legacy::display::MovieClip tmp13 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(186)
						::openfl::_legacy::display::Stage tmp14 = tmp13->get_stage();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						tmp14->invalidate();
					}
					else{
						HX_STACK_LINE(189)
						bool tmp7 = (e->keyCode == (int)40);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(189)
						if ((tmp7)){
							HX_STACK_LINE(191)
							int tmp8 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(191)
							bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(191)
							if ((tmp9)){
								HX_STACK_LINE(192)
								return null();
							}
							HX_STACK_LINE(193)
							::openfl::_legacy::text::TextField tmp10 = this->_input;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(193)
							::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(193)
							{
								HX_STACK_LINE(193)
								int tmp12 = this->_historyIndex;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(193)
								int tmp13 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(193)
								bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(193)
								if ((tmp14)){
									HX_STACK_LINE(193)
									(this->_historyIndex)++;
								}
								HX_STACK_LINE(193)
								int tmp15 = this->_historyIndex;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(193)
								::String tmp16 = this->cmdHistory->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(193)
								bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(193)
								if ((tmp17)){
									HX_STACK_LINE(193)
									int tmp18 = this->_historyIndex;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(193)
									tmp11 = this->cmdHistory->__GetItem(tmp18);
								}
								else{
									HX_STACK_LINE(193)
									tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
							}
							HX_STACK_LINE(193)
							tmp10->set_text(tmp11);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onKeyPress,(void))

Void Console_obj::processCommand( ){
{
		HX_STACK_FRAME("flixel.system.debug.Console","processCommand",0xcb35187b,"flixel.system.debug.Console.processCommand","flixel/system/debug/Console.hx",198,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		::openfl::_legacy::text::TextField tmp = this->_input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		::String tmp2 = ::StringTools_obj::rtrim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		cpp::ArrayBase args = tmp2.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(200)
		Dynamic tmp3 = args->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		::String alias = tmp3;		HX_STACK_VAR(alias,"alias");
		HX_STACK_LINE(201)
		::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		Dynamic tmp5 = ::flixel::_system::debug::ConsoleUtil_obj::findCommand(tmp4,this->commands);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		Dynamic command = tmp5;		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(204)
		bool tmp6 = (command != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		if ((tmp6)){
			HX_STACK_LINE(206)
			Dynamic func = command->__Field(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74"), hx::paccDynamic );		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(209)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				int tmp8 = this->_historyIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				if ((tmp9)){
					HX_STACK_LINE(209)
					(this->_historyIndex)--;
				}
				HX_STACK_LINE(209)
				int tmp10 = this->_historyIndex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				tmp7 = this->cmdHistory->__GetItem(tmp10);
			}
			HX_STACK_LINE(209)
			::openfl::_legacy::text::TextField tmp8 = this->_input;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(209)
			::String tmp9 = tmp8->get_text();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(209)
			bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(209)
			if ((tmp10)){
				HX_STACK_LINE(212)
				::openfl::_legacy::text::TextField tmp11 = this->_input;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(212)
				::String tmp12 = tmp11->get_text();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(212)
				this->cmdHistory->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
				HX_STACK_LINE(213)
				::flixel::util::FlxSave tmp13 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(213)
				tmp13->flush(null(),null());
				HX_STACK_LINE(216)
				int tmp14 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				bool tmp15 = (tmp14 > (int)25);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(216)
				if ((tmp15)){
					HX_STACK_LINE(217)
					this->cmdHistory->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();
				}
			}
			HX_STACK_LINE(220)
			int tmp11 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			this->_historyIndex = tmp11;
			HX_STACK_LINE(222)
			Dynamic tmp12 = func;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(222)
			bool tmp13 = ::Reflect_obj::isFunction(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(222)
			if ((tmp13)){
				HX_STACK_LINE(225)
				bool tmp14 = (command->__Field(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(225)
				if ((tmp14)){
					HX_STACK_LINE(227)
					int tmp15 = (command->__Field(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					int start = tmp15;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(228)
					int tmp16 = start;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(228)
					int tmp17 = args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(228)
					hx::IndexRef((args).mPtr,start) = args->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp16,tmp17);
					HX_STACK_LINE(229)
					Dynamic tmp18 = command->__Field(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(229)
					args = args->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )((int)0,tmp18);
				}
				HX_STACK_LINE(232)
				Dynamic tmp15 = func;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(232)
				::flixel::_system::debug::ConsoleUtil_obj::callFunction(tmp15,args);
			}
			HX_STACK_LINE(243)
			::openfl::_legacy::text::TextField tmp14 = this->_input;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(243)
			tmp14->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(248)
			::flixel::_system::frontEnds::LogFrontEnd tmp7 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			::String tmp8 = (HX_HCSTRING("Console: Invalid command: '","\xdc","\x71","\x88","\x4e") + alias);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			::String tmp9 = (tmp8 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			::flixel::_system::debug::LogStyle tmp10 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			tmp7->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp9,tmp10,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,processCommand,(void))

Void Console_obj::overrideDefaultSelection( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("flixel.system.debug.Console","overrideDefaultSelection",0x1d35c856,"flixel.system.debug.Console.overrideDefaultSelection","flixel/system/debug/Console.hx",253,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(254)
		::openfl::_legacy::text::TextField tmp = this->_input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		::openfl::_legacy::text::TextField tmp1 = this->_input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		::String tmp2 = tmp1->get_text();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		int tmp3 = tmp2.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		::openfl::_legacy::text::TextField tmp4 = this->_input;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		::String tmp5 = tmp4->get_text();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		tmp->setSelection(tmp3,tmp6);
		HX_STACK_LINE(255)
		::String tmp7 = ::openfl::_legacy::events::Event_obj::RENDER;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(255)
		Dynamic tmp8 = this->overrideDefaultSelection_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(255)
		this->removeEventListener(tmp7,tmp8,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,overrideDefaultSelection,(void))

::String Console_obj::getPreviousCommand( ){
	HX_STACK_FRAME("flixel.system.debug.Console","getPreviousCommand",0xe854c33d,"flixel.system.debug.Console.getPreviousCommand","flixel/system/debug/Console.hx",259,0x3559cbd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	int tmp = this->_historyIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	if ((tmp1)){
		HX_STACK_LINE(261)
		(this->_historyIndex)--;
	}
	HX_STACK_LINE(263)
	int tmp2 = this->_historyIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	::String tmp3 = this->cmdHistory->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(263)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getPreviousCommand,return )

::String Console_obj::getNextCommand( ){
	HX_STACK_FRAME("flixel.system.debug.Console","getNextCommand",0x76bea181,"flixel.system.debug.Console.getNextCommand","flixel/system/debug/Console.hx",267,0x3559cbd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	int tmp = this->_historyIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = this->cmdHistory->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	if ((tmp2)){
		HX_STACK_LINE(269)
		(this->_historyIndex)++;
	}
	HX_STACK_LINE(271)
	int tmp3 = this->_historyIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	::String tmp4 = this->cmdHistory->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(271)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(271)
	if ((tmp5)){
		HX_STACK_LINE(272)
		int tmp6 = this->_historyIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		::String tmp7 = this->cmdHistory->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		return tmp7;
	}
	else{
		HX_STACK_LINE(274)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(271)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,getNextCommand,return )

Void Console_obj::registerObject( ::String ObjectAlias,Dynamic AnyObject){
{
		HX_STACK_FRAME("flixel.system.debug.Console","registerObject",0x72ea6b61,"flixel.system.debug.Console.registerObject","flixel/system/debug/Console.hx",285,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAlias,"ObjectAlias")
		HX_STACK_ARG(AnyObject,"AnyObject")
		HX_STACK_LINE(285)
		Dynamic value = AnyObject;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(285)
		::haxe::ds::StringMap tmp = this->registeredObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		::String tmp1 = ObjectAlias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

Void Console_obj::registerFunction( ::String FunctionAlias,Dynamic Function){
{
		HX_STACK_FRAME("flixel.system.debug.Console","registerFunction",0x640b843a,"flixel.system.debug.Console.registerFunction","flixel/system/debug/Console.hx",296,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionAlias,"FunctionAlias")
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(296)
		Dynamic value = Function;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(296)
		::haxe::ds::StringMap tmp = this->registeredFunctions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		::String tmp1 = FunctionAlias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerFunction,(void))

Void Console_obj::addCommand( Array< ::String > Aliases,Dynamic ProcessFunction,::String Help,::String ParamHelp,hx::Null< int >  __o_NumParams,hx::Null< int >  __o_ParamCutoff){
int NumParams = __o_NumParams.Default(0);
int ParamCutoff = __o_ParamCutoff.Default(-1);
	HX_STACK_FRAME("flixel.system.debug.Console","addCommand",0x54e2e789,"flixel.system.debug.Console.addCommand","flixel/system/debug/Console.hx",310,0x3559cbd0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Aliases,"Aliases")
	HX_STACK_ARG(ProcessFunction,"ProcessFunction")
	HX_STACK_ARG(Help,"Help")
	HX_STACK_ARG(ParamHelp,"ParamHelp")
	HX_STACK_ARG(NumParams,"NumParams")
	HX_STACK_ARG(ParamCutoff,"ParamCutoff")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::String &ParamHelp,Array< ::String > &Aliases,int &NumParams,int &ParamCutoff,::String &Help,Dynamic &ProcessFunction){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/Console.hx",311,0x3559cbd0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Aliases,false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , ProcessFunction,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , Help,false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , ParamHelp,false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , NumParams,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(311)
		Dynamic tmp = _Function_1_1::Block(ParamHelp,Aliases,NumParams,ParamCutoff,Help,ProcessFunction);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		this->commands->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Console_obj,addCommand,(void))

Void Console_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Console","destroy",0xcdd6413b,"flixel.system.debug.Console.destroy","flixel/system/debug/Console.hx",319,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		this->super::destroy();
		HX_STACK_LINE(322)
		::openfl::_legacy::text::TextField tmp = this->_input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::String tmp1 = ::openfl::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		Dynamic tmp2 = this->onFocus_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(323)
		::openfl::_legacy::text::TextField tmp3 = this->_input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		::String tmp4 = ::openfl::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		Dynamic tmp5 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		tmp3->removeEventListener(tmp4,tmp5,null());
		HX_STACK_LINE(324)
		::openfl::_legacy::text::TextField tmp6 = this->_input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		::String tmp7 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		Dynamic tmp8 = this->onKeyPress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		tmp6->removeEventListener(tmp7,tmp8,null());
		HX_STACK_LINE(326)
		::openfl::_legacy::text::TextField tmp9 = this->_input;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(326)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(326)
		if ((tmp10)){
			HX_STACK_LINE(328)
			::openfl::_legacy::text::TextField tmp11 = this->_input;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(328)
			this->removeChild(tmp11);
			HX_STACK_LINE(329)
			this->_input = null();
		}
		HX_STACK_LINE(332)
		this->commands = null();
		HX_STACK_LINE(334)
		this->registeredObjects = null();
		HX_STACK_LINE(335)
		this->registeredFunctions = null();
		HX_STACK_LINE(337)
		this->objectStack = null();
	}
return null();
}


Void Console_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Console","updateSize",0x70f3d5c9,"flixel.system.debug.Console.updateSize","flixel/system/debug/Console.hx",344,0x3559cbd0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		this->super::updateSize();
		HX_STACK_LINE(347)
		::openfl::_legacy::text::TextField tmp = this->_input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		int tmp2 = (tmp1 - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		tmp->set_width(tmp2);
		HX_STACK_LINE(348)
		::openfl::_legacy::text::TextField tmp3 = this->_input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		int tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		int tmp5 = (tmp4 - (int)15);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		tmp3->set_height(tmp5);
	}
return null();
}


::String Console_obj::_DEFAULT_TEXT;

int Console_obj::_HISTORY_MAX;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(_historyIndex,"_historyIndex");
	HX_MARK_MEMBER_NAME(_input,"_input");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(cmdHistory,"cmdHistory");
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(_historyIndex,"_historyIndex");
	HX_VISIT_MEMBER_NAME(_input,"_input");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { return _input; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { return cmdHistory; }
		if (HX_FIELD_EQ(inName,"onKeyPress") ) { return onKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"addCommand") ) { return addCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { return objectStack; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_historyIndex") ) { return _historyIndex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processCommand") ) { return processCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"getNextCommand") ) { return getNextCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return registeredObjects; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPreviousCommand") ) { return getPreviousCommand_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return registeredFunctions; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"overrideDefaultSelection") ) { return overrideDefaultSelection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_input") ) { _input=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cmdHistory") ) { cmdHistory=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_historyIndex") ) { _historyIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Console_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"));
	outFields->push(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"));
	outFields->push(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"));
	outFields->push(HX_HCSTRING("cmdHistory","\xfa","\x01","\xe3","\xb6"));
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e"));
	outFields->push(HX_HCSTRING("_input","\x4b","\x0b","\x05","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredObjects),HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredFunctions),HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,objectStack),HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,cmdHistory),HX_HCSTRING("cmdHistory","\xfa","\x01","\xe3","\xb6")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Console_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsInt,(int)offsetof(Console_obj,_historyIndex),HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_input),HX_HCSTRING("_input","\x4b","\x0b","\x05","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Console_obj::_DEFAULT_TEXT,HX_HCSTRING("_DEFAULT_TEXT","\x2a","\x2f","\xc8","\x0f")},
	{hx::fsInt,(void *) &Console_obj::_HISTORY_MAX,HX_HCSTRING("_HISTORY_MAX","\xba","\x4c","\xb9","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"),
	HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"),
	HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"),
	HX_HCSTRING("cmdHistory","\xfa","\x01","\xe3","\xb6"),
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e"),
	HX_HCSTRING("_input","\x4b","\x0b","\x05","\xba"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onKeyPress","\xa3","\xcd","\xa8","\xea"),
	HX_HCSTRING("processCommand","\x9c","\xb2","\xcb","\x33"),
	HX_HCSTRING("overrideDefaultSelection","\xb7","\xb5","\x7c","\xc6"),
	HX_HCSTRING("getPreviousCommand","\xde","\x81","\x79","\x09"),
	HX_HCSTRING("getNextCommand","\xa2","\x3b","\x55","\xdf"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("addCommand","\x2a","\x9d","\xf7","\xe8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::_DEFAULT_TEXT,"_DEFAULT_TEXT");
	HX_MARK_MEMBER_NAME(Console_obj::_HISTORY_MAX,"_HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::_DEFAULT_TEXT,"_DEFAULT_TEXT");
	HX_VISIT_MEMBER_NAME(Console_obj::_HISTORY_MAX,"_HISTORY_MAX");
};

#endif

hx::Class Console_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_DEFAULT_TEXT","\x2a","\x2f","\xc8","\x0f"),
	HX_HCSTRING("_HISTORY_MAX","\xba","\x4c","\xb9","\xbe"),
	::String(null()) };

void Console_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Console","\xaf","\xcb","\xf5","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Console_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
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

void Console_obj::__boot()
{
	_DEFAULT_TEXT= HX_HCSTRING("(Click here / press [Tab] to enter command. Type 'help' for help.)","\xf9","\x4e","\xc0","\x26");
	_HISTORY_MAX= (int)25;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
