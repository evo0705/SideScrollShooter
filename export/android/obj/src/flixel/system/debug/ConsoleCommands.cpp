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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
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
namespace _system{
namespace debug{

Void ConsoleCommands_obj::__construct(::flixel::_system::debug::Console console)
{
HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","new",0xd36fb809,"flixel.system.debug.ConsoleCommands.new","flixel/system/debug/ConsoleCommands.hx",11,0x4441c1e8)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(20)
	this->_watchingMouse = false;
	HX_STACK_LINE(25)
	this->_console = console;
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(28)
		Dynamic tmp = this->help_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		int tmp1 = ParamCutoff;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",28,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45")).Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , null(),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , HX_HCSTRING("(Command)","\xc6","\xd4","\xbf","\x8d"),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , (int)1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		Dynamic tmp2 = _Function_2_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(29)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(29)
		Dynamic tmp = this->close_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",29,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("close","\xb8","\x17","\x63","\x48")).Add(HX_HCSTRING("cl","\xa9","\x56","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Closes the debugger overlay.","\x09","\xdd","\x14","\xda"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(30)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(30)
		Dynamic tmp = this->clearHistory_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",30,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f")).Add(HX_HCSTRING("ch","\xa5","\x56","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Clears the command history.","\x58","\xc6","\xe5","\x46"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(32)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(32)
		::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		int tmp2 = NumParams;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		int tmp3 = ParamCutoff;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,int &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",32,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("clearLog","\xf7","\x50","\x0e","\x31")).Add(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp1,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Clears the log window.","\xb9","\x42","\xd4","\x0f"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp2,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic tmp4 = _Function_2_1::Block(tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(34)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(34)
		Dynamic tmp = this->resetState_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",34,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("resetState","\xc2","\xad","\xa7","\x6c")).Add(HX_HCSTRING("rs","\xc1","\x63","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Resets the current state.","\x8f","\x83","\x43","\xbb"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(35)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(35)
		Dynamic tmp = this->switchState_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",35,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77")).Add(HX_HCSTRING("ss","\xa0","\x64","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Switches to a specified state.","\xf3","\xb8","\x24","\x68"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , HX_HCSTRING("[FlxState]","\x63","\x6f","\x63","\xe2"),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(36)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(36)
		Dynamic tmp = this->resetGame_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",36,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a")).Add(HX_HCSTRING("rg","\xb5","\x63","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Resets the game.","\xd1","\xd7","\x73","\xd9"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		Dynamic tmp = this->create_dyn();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",38,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c")).Add(HX_HCSTRING("cr","\xaf","\x56","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Creates a new FlxObject and registers it - by default at the mouse position.","\x3e","\x92","\x8c","\xeb"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , HX_HCSTRING("[FlxObject] (MousePos = true)","\xd6","\x84","\x32","\x07"),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , (int)3,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , (int)3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(40)
		Dynamic tmp = this->set_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		int tmp1 = ParamCutoff;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",40,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00")).Add(HX_HCSTRING("s","\x73","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Sets a variable within a registered object.","\xef","\x1c","\x56","\xe3"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , HX_HCSTRING("[Path to function]","\xe0","\x43","\xf5","\xa7"),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , (int)3,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		Dynamic tmp2 = _Function_2_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Dynamic tmp = this->call_dyn();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",41,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("call","\x9e","\x18","\xba","\x41")).Add(HX_HCSTRING("c","\x63","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Calls a registered function / function within a registered object.","\x82","\xfb","\x74","\x52"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , (int)3,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , (int)2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp1 = _Function_2_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(42)
		Dynamic tmp = this->fields_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		int tmp1 = ParamCutoff;		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",42,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80")).Add(HX_HCSTRING("f","\x66","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Lists the fields of a class or instance","\x6f","\xdd","\x83","\x14"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , HX_HCSTRING("[Class or path to instance] [NumSuperClassesToInclude]","\x42","\x73","\x53","\xec"),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , (int)2,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp2 = _Function_2_1::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(44)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(44)
		Dynamic tmp = this->listObjects_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",44,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39")).Add(HX_HCSTRING("lo","\x83","\x5e","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Lists all the aliases of the registered objects.","\x5b","\x6c","\xc2","\xeb"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(45)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(45)
		Dynamic tmp = this->listFunctions_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",45,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0")).Add(HX_HCSTRING("lf","\x7a","\x5e","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Lists all the aliases of the registered objects.","\x5b","\x6c","\xc2","\xeb"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(47)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(47)
		Dynamic tmp = this->watchMouse_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",47,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84")).Add(HX_HCSTRING("wm","\x16","\x68","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Adds the mouse coordinates to the watch window.","\x16","\x85","\x0c","\x85"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(48)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(48)
		Dynamic tmp = this->track_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",48,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16")).Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Adds a tracker window for the specified object.","\xbe","\x72","\x52","\x81"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(50)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(50)
		Dynamic tmp = this->pause_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		int tmp1 = NumParams;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		int tmp2 = ParamCutoff;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( Dynamic &tmp,int &tmp2,int &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",50,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")).Add(HX_HCSTRING("p","\x70","\x00","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Toggle between paused and unpaused","\x1e","\xe4","\x08","\xc0"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp1,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		Dynamic tmp3 = _Function_2_1::Block(tmp,tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(52)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(52)
		::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = NumParams;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		int tmp3 = ParamCutoff;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,int &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",52,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("clearBitmapLog","\x88","\xb0","\xe0","\x84")).Add(HX_HCSTRING("cbl","\xed","\x74","\x4b","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp1,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Clears the bitmapLog window.","\x4a","\x2e","\xfa","\xed"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp2,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(52)
		Dynamic tmp4 = _Function_2_1::Block(tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(53)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		HX_STACK_LINE(53)
		::flixel::_system::frontEnds::BitmapLogFrontEnd tmp = ::flixel::FlxG_obj::bitmapLog;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Dynamic tmp1 = tmp->__Field(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		int tmp2 = NumParams;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		int tmp3 = ParamCutoff;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_2_1{
			inline static Dynamic Block( int &tmp2,int &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",53,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5") , Array_obj< ::String >::__new().Add(HX_HCSTRING("viewCache","\x9d","\x09","\xa9","\x81")).Add(HX_HCSTRING("vc","\x2d","\x67","\x00","\x00")),false);
					__result->Add(HX_HCSTRING("processFunction","\xa7","\x90","\x6d","\x74") , tmp1,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , HX_HCSTRING("Adds the cache to the bitmapLog window","\x14","\x06","\xf1","\x45"),false);
					__result->Add(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35") , null(),false);
					__result->Add(HX_HCSTRING("numParams","\x2c","\x46","\x7c","\x9e") , tmp2,false);
					__result->Add(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02") , tmp3,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		Dynamic tmp4 = _Function_2_1::Block(tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		console->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		Dynamic value = hx::ClassOf< ::flixel::FlxG >();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(56)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		console->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(HX_HCSTRING("FlxG","\xb5","\x4b","\x97","\x2e"),tmp);
	}
}
;
	return null();
}

//ConsoleCommands_obj::~ConsoleCommands_obj() { }

Dynamic ConsoleCommands_obj::__CreateEmpty() { return  new ConsoleCommands_obj; }
hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new(::flixel::_system::debug::Console console)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleCommands_obj > _result_ = new ConsoleCommands_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ConsoleCommands_obj::help( ::String Alias){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","help",0x2a59fef8,"flixel.system.debug.ConsoleCommands.help","flixel/system/debug/ConsoleCommands.hx",66,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Alias,"Alias")
		HX_STACK_LINE(67)
		bool tmp = (Alias == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(69)
			::String output = HX_HCSTRING("System commands: ","\xdf","\x4e","\x5d","\xa1");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				cpp::ArrayBase _g1 = tmp1->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(70)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(70)
					if ((tmp3)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(70)
					Dynamic command = tmp4;		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(70)
					++(_g);
					HX_STACK_LINE(72)
					::String tmp5 = command->__Field(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					hx::AddEq(output,tmp6);
				}
			}
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(74)
				::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(output),tmp2,null());
			}
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(75)
				::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("help (Command) for more information about a specific command","\xfe","\xe1","\xde","\xd1")),tmp2,null());
			}
		}
		else{
			HX_STACK_LINE(79)
			::String tmp1 = Alias;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			::flixel::_system::debug::Console tmp2 = this->_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			Dynamic tmp3 = ::flixel::_system::debug::ConsoleUtil_obj::findCommand(tmp1,tmp2->__Field(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			Dynamic command = tmp3;		HX_STACK_VAR(command,"command");
			HX_STACK_LINE(81)
			bool tmp4 = (command != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			if ((tmp4)){
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::NORMAL;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp6,null());
				}
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(84)
					::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(command->__Field(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5"), hx::paccDynamic )),tmp6,null());
				}
				HX_STACK_LINE(86)
				bool tmp5 = (command->__Field(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				if ((tmp5)){
					HX_STACK_LINE(87)
					::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(command->__Field(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"), hx::paccDynamic )),tmp7,null());
				}
				HX_STACK_LINE(89)
				::String cutoffHelp = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(cutoffHelp,"cutoffHelp");
				HX_STACK_LINE(90)
				bool tmp6 = (command->__Field(HX_HCSTRING("paramCutoff","\x9a","\x47","\x94","\x02"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				if ((tmp6)){
					HX_STACK_LINE(91)
					cutoffHelp = HX_HCSTRING(" [param0...paramX]","\xa2","\x33","\xdb","\x52");
				}
				HX_STACK_LINE(93)
				bool tmp7 = (command->__Field(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				if ((tmp8)){
					HX_STACK_LINE(93)
					tmp9 = (cutoffHelp != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(93)
					tmp9 = true;
				}
				HX_STACK_LINE(93)
				if ((tmp9)){
					HX_STACK_LINE(94)
					::flixel::_system::frontEnds::LogFrontEnd tmp10 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					::String tmp11 = (HX_HCSTRING("Params: ","\x8c","\xc7","\x56","\x58") + command->__Field(HX_HCSTRING("paramHelp","\xee","\xa9","\x79","\x35"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(94)
					::String tmp12 = cutoffHelp;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(94)
					::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(94)
					::flixel::_system::debug::LogStyle tmp14 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(94)
					tmp10->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp13),tmp14,null());
				}
			}
			else{
				HX_STACK_LINE(98)
				::flixel::_system::frontEnds::LogFrontEnd tmp5 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(98)
				::String tmp6 = (HX_HCSTRING("A command named '","\x4c","\xba","\x4e","\x8b") + Alias);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(98)
				::String tmp7 = (tmp6 + HX_HCSTRING("' does not exist","\x9c","\xd9","\x8e","\xaa"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				::flixel::_system::debug::LogStyle tmp8 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				tmp5->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp7,tmp8,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,(void))

Void ConsoleCommands_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","close",0x0806fba1,"flixel.system.debug.ConsoleCommands.close","flixel/system/debug/ConsoleCommands.hx",105,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		tmp->debugger->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
		HX_STACK_LINE(105)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp1 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		tmp1->__FieldRef(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")) = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

Void ConsoleCommands_obj::clearHistory( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","clearHistory",0xd49e427e,"flixel.system.debug.ConsoleCommands.clearHistory","flixel/system/debug/ConsoleCommands.hx",109,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		::flixel::_system::debug::Console tmp = this->_console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		tmp->__FieldRef(HX_HCSTRING("cmdHistory","\xfa","\x01","\xe3","\xb6")) = Array_obj< ::String >::__new();
		HX_STACK_LINE(111)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		tmp1->flush(null(),null());
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("clearHistory: Command history cleared","\x5e","\xd3","\xfe","\x77")),tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,clearHistory,(void))

Void ConsoleCommands_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","resetState",0x4a33fd39,"flixel.system.debug.ConsoleCommands.resetState","flixel/system/debug/ConsoleCommands.hx",116,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(117)
			::flixel::FlxState tmp1 = tmp->_state;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::flixel::FlxState tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			::flixel::FlxState State = tmp3;		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(117)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			tmp4->_requestedState = State;
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(118)
			::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("resetState: State has been reset","\xd8","\xe8","\xcb","\xa9")),tmp1,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetState,(void))

Void ConsoleCommands_obj::switchState( ::String ClassName){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","switchState",0x74c44026,"flixel.system.debug.ConsoleCommands.switchState","flixel/system/debug/ConsoleCommands.hx",122,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ClassName,"ClassName")
		HX_STACK_LINE(123)
		::String tmp = ClassName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Dynamic tmp1 = ::flixel::_system::debug::ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxState(tmp,hx::ClassOf< ::flixel::FlxState >(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		Dynamic instance = tmp1;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(124)
		bool tmp2 = (instance == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::flixel::FlxState State = instance;		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(127)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			tmp3->_requestedState = State;
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::String tmp4 = (HX_HCSTRING("switchState: New '","\x04","\x3a","\x3c","\x12") + ClassName);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			::String tmp5 = (tmp4 + HX_HCSTRING("' created","\xef","\xf8","\x7f","\x5a"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp5),tmp6,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,switchState,(void))

Void ConsoleCommands_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","resetGame",0x757989ca,"flixel.system.debug.ConsoleCommands.resetGame","flixel/system/debug/ConsoleCommands.hx",132,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			tmp->_resetGame = true;
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("resetGame: Game has been reset","\x08","\xe1","\x05","\x7a")),tmp1,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetGame,(void))

Void ConsoleCommands_obj::create( ::String ClassName,::String __o_MousePos,Array< ::String > Params){
::String MousePos = __o_MousePos.Default(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));
	HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","create",0x6bd2eef3,"flixel.system.debug.ConsoleCommands.create","flixel/system/debug/ConsoleCommands.hx",138,0x4441c1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(MousePos,"MousePos")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(139)
		bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		if ((tmp)){
			HX_STACK_LINE(140)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(142)
		::String tmp1 = ClassName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		Dynamic tmp2 = ::flixel::_system::debug::ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxObject(tmp1,hx::ClassOf< ::flixel::FlxObject >(),Params);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		Dynamic instance = tmp2;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(143)
		bool tmp3 = (instance == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		if ((tmp3)){
			HX_STACK_LINE(144)
			return null();
		}
		HX_STACK_LINE(146)
		::flixel::FlxObject obj = instance;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(148)
		bool tmp4 = (MousePos == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		if ((tmp4)){
			HX_STACK_LINE(150)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			Float tmp6 = tmp5->get_mouseX();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			obj->set_x(tmp6);
			HX_STACK_LINE(151)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			Float tmp8 = tmp7->get_mouseY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			obj->set_y(tmp8);
		}
		HX_STACK_LINE(154)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		Dynamic tmp6 = instance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		tmp5->_state->add(tmp6);
		HX_STACK_LINE(156)
		bool tmp7 = (Params->length == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		if ((tmp7)){
			HX_STACK_LINE(157)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(157)
			::String tmp9 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + ClassName);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(157)
			::String tmp10 = (tmp9 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(157)
			Float tmp11 = obj->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(157)
			::String tmp13 = (tmp12 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(157)
			Float tmp14 = obj->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(157)
			::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(157)
			::flixel::_system::debug::LogStyle tmp16 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(157)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp15),tmp16,null());
		}
		else{
			HX_STACK_LINE(159)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			::String tmp9 = (HX_HCSTRING("create: New ","\x82","\xf9","\x21","\xbf") + ClassName);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			::String tmp10 = (tmp9 + HX_HCSTRING(" created at X = ","\x00","\xf4","\xdf","\x3b"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			Float tmp11 = obj->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(159)
			::String tmp13 = (tmp12 + HX_HCSTRING(" Y = ","\xca","\x0a","\xbf","\xa7"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(159)
			Float tmp14 = obj->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(159)
			::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(159)
			::String tmp16 = (tmp15 + HX_HCSTRING(" with params ","\x20","\xc2","\x85","\xfb"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(159)
			::String tmp17 = ::Std_obj::string(Params);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(159)
			::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(159)
			::flixel::_system::debug::LogStyle tmp19 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(159)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp18),tmp19,null());
		}
		HX_STACK_LINE(161)
		::flixel::_system::debug::Console tmp8 = this->_console;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		Dynamic tmp9 = instance;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(161)
		tmp8->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			Dynamic value = instance;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(162)
			::flixel::_system::debug::Console tmp10 = this->_console;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			::flixel::_system::debug::Console tmp11 = this->_console;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(162)
			int tmp12 = tmp11->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(162)
			::String tmp13 = ::Std_obj::string(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(162)
			Dynamic tmp14 = value;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(162)
			tmp10->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp13,tmp14);
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::flixel::_system::frontEnds::LogFrontEnd tmp10 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			::String tmp11 = (HX_HCSTRING("create: ","\xa2","\x50","\xf4","\x2b") + ClassName);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(164)
			::String tmp12 = (tmp11 + HX_HCSTRING(" registered as object '","\xf6","\x49","\xb2","\x32"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(164)
			::flixel::_system::debug::Console tmp13 = this->_console;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(164)
			int tmp14 = tmp13->__Field(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(164)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(164)
			::String tmp16 = (tmp15 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(164)
			::flixel::_system::debug::LogStyle tmp17 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(164)
			tmp10->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp16),tmp17,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

Void ConsoleCommands_obj::set( ::String ObjectAndVariable,Dynamic NewVariableValue,::String WatchName){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","set",0xd373834b,"flixel.system.debug.ConsoleCommands.set","flixel/system/debug/ConsoleCommands.hx",168,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
		HX_STACK_ARG(NewVariableValue,"NewVariableValue")
		HX_STACK_ARG(WatchName,"WatchName")
		HX_STACK_LINE(169)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
			HX_STACK_LINE(169)
			Array< ::String > splitString = ObjectAndVariable1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(splitString,"splitString");
			HX_STACK_LINE(169)
			::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			::String tmp2 = splitString->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			Dynamic object = tmp3;		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(169)
			splitString->shift();
			HX_STACK_LINE(169)
			::String tmp4 = splitString->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			ObjectAndVariable1 = tmp4;
			HX_STACK_LINE(169)
			::String tmp5 = ObjectAndVariable1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			tmp = ::flixel::_system::debug::ConsoleUtil_obj::resolveObjectAndVariable(tmp5,tmp6);
		}
		HX_STACK_LINE(169)
		Dynamic pathToVariable = tmp;		HX_STACK_VAR(pathToVariable,"pathToVariable");
		HX_STACK_LINE(172)
		bool tmp1 = (pathToVariable == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(175)
		Dynamic object = pathToVariable->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(176)
		::String varName = pathToVariable->__Field(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69"), hx::paccDynamic );		HX_STACK_VAR(varName,"varName");
		HX_STACK_LINE(177)
		Dynamic variable = null();		HX_STACK_VAR(variable,"variable");
		HX_STACK_LINE(179)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(181)
			Dynamic tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			::String tmp3 = varName;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			variable = tmp4;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(185)
					return null();
				}
			}
		}
		HX_STACK_LINE(188)
		bool tmp2 = (variable == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		if ((tmp2)){
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(190)
				::String tmp4 = (HX_HCSTRING("set: '","\x5f","\xf4","\x5b","\x6f") + ObjectAndVariable);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(190)
				::String tmp5 = (tmp4 + HX_HCSTRING("' could not be found","\xaa","\xa1","\x2a","\x84"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(190)
				::flixel::_system::debug::LogStyle tmp6 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(190)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp5,tmp6,true);
			}
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(195)
		Dynamic tmp3 = variable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		if ((tmp4)){
			HX_STACK_LINE(197)
			::String oldVal = NewVariableValue;		HX_STACK_VAR(oldVal,"oldVal");
			HX_STACK_LINE(198)
			Dynamic tmp5 = NewVariableValue;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			Dynamic tmp6 = ::flixel::_system::debug::ConsoleUtil_obj::parseBool(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			NewVariableValue = tmp6;
			HX_STACK_LINE(200)
			bool tmp7 = (NewVariableValue == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(200)
			if ((tmp7)){
				HX_STACK_LINE(202)
				{
					HX_STACK_LINE(202)
					::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(202)
					::String tmp9 = (HX_HCSTRING("set: '","\x5f","\xf4","\x5b","\x6f") + oldVal);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(202)
					::String tmp10 = (tmp9 + HX_HCSTRING("' is not a valid value for Bool '","\x84","\x53","\xf7","\xff"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(202)
					::String tmp11 = varName;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(202)
					::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(202)
					::String tmp13 = (tmp12 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(202)
					::flixel::_system::debug::LogStyle tmp14 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(202)
					tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp13,tmp14,true);
				}
				HX_STACK_LINE(203)
				return null();
			}
		}
		HX_STACK_LINE(208)
		Dynamic tmp5 = variable;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		if ((tmp7)){
			HX_STACK_LINE(208)
			Dynamic tmp9 = NewVariableValue;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(208)
			tmp8 = ::Math_obj::isNaN(tmp13);
		}
		else{
			HX_STACK_LINE(208)
			tmp8 = false;
		}
		HX_STACK_LINE(208)
		if ((tmp8)){
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				::flixel::_system::frontEnds::LogFrontEnd tmp9 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(210)
				Dynamic tmp10 = NewVariableValue;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(210)
				::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(210)
				::String tmp12 = (HX_HCSTRING("set: '","\x5f","\xf4","\x5b","\x6f") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				::String tmp13 = (tmp12 + HX_HCSTRING("' is not a valid value for number '","\x83","\xda","\x5e","\xd8"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				::String tmp14 = varName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				::String tmp16 = (tmp15 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				::flixel::_system::debug::LogStyle tmp17 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				tmp9->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp16,tmp17,true);
			}
			HX_STACK_LINE(211)
			return null();
		}
		else{
			HX_STACK_LINE(214)
			Dynamic tmp9 = variable;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(214)
			if ((tmp13)){
				HX_STACK_LINE(214)
				Dynamic tmp15 = variable;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(214)
				Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(214)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(214)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(214)
				tmp14 = !(tmp22);
			}
			else{
				HX_STACK_LINE(214)
				tmp14 = false;
			}
			HX_STACK_LINE(214)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(214)
			if ((tmp14)){
				HX_STACK_LINE(214)
				Dynamic tmp16 = variable;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(214)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(214)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				tmp15 = !(tmp20);
			}
			else{
				HX_STACK_LINE(214)
				tmp15 = false;
			}
			HX_STACK_LINE(214)
			if ((tmp15)){
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					::String tmp16 = (HX_HCSTRING("set: '","\x5f","\xf4","\x5b","\x6f") + varName);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(216)
					::String tmp17 = (tmp16 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(216)
					::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::hx::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(216)
						Dynamic tmp19 = variable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(216)
						bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(216)
						if ((tmp20)){
							HX_STACK_LINE(216)
							cl = ((::hx::Class)(variable));
						}
						else{
							HX_STACK_LINE(216)
							Dynamic tmp21 = variable;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(216)
							::hx::Class tmp22 = ::Type_obj::getClass(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(216)
							cl = tmp22;
						}
						HX_STACK_LINE(216)
						::hx::Class tmp21 = cl;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(216)
						::String tmp22 = ::Type_obj::getClassName(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(216)
						::String s = tmp22;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(216)
						bool tmp23 = (s != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(216)
						if ((tmp23)){
							HX_STACK_LINE(216)
							::String tmp24 = s;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(216)
							::String tmp25 = ::StringTools_obj::replace(tmp24,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(216)
							s = tmp25;
							HX_STACK_LINE(216)
							int tmp26 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(216)
							int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(216)
							::String tmp28 = s.substr(tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(216)
							s = tmp28;
						}
						HX_STACK_LINE(216)
						tmp18 = s;
					}
					HX_STACK_LINE(216)
					::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(216)
					::String tmp20 = (tmp19 + HX_HCSTRING("' is not of a simple type (number, bool or string)","\x42","\x6c","\x4a","\x9b"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(216)
					Dynamic Data = tmp20;		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(216)
					::flixel::_system::frontEnds::LogFrontEnd tmp21 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(216)
					Dynamic tmp22 = Data;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(216)
					::flixel::_system::debug::LogStyle tmp23 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(216)
					tmp21->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp22,tmp23,true);
				}
				HX_STACK_LINE(217)
				return null();
			}
		}
		HX_STACK_LINE(220)
		Dynamic tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		::String tmp10 = varName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		Dynamic tmp11 = NewVariableValue;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		::Reflect_obj::setProperty(tmp9,tmp10,tmp11);
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				::hx::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(221)
				Dynamic tmp13 = object;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				if ((tmp14)){
					HX_STACK_LINE(221)
					cl = ((::hx::Class)(object));
				}
				else{
					HX_STACK_LINE(221)
					Dynamic tmp15 = object;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(221)
					::hx::Class tmp16 = ::Type_obj::getClass(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(221)
					cl = tmp16;
				}
				HX_STACK_LINE(221)
				::hx::Class tmp15 = cl;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				::String tmp16 = ::Type_obj::getClassName(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(221)
				::String s = tmp16;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(221)
				bool tmp17 = (s != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(221)
				if ((tmp17)){
					HX_STACK_LINE(221)
					::String tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(221)
					::String tmp19 = ::StringTools_obj::replace(tmp18,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(221)
					s = tmp19;
					HX_STACK_LINE(221)
					int tmp20 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(221)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(221)
					::String tmp22 = s.substr(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(221)
					s = tmp22;
				}
				HX_STACK_LINE(221)
				tmp12 = s;
			}
			HX_STACK_LINE(221)
			::String tmp13 = (HX_HCSTRING("set: ","\xc8","\x7a","\x2f","\x7a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			::String tmp14 = (tmp13 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(221)
			::String tmp15 = varName;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(221)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(221)
			::String tmp17 = (tmp16 + HX_HCSTRING(" is now ","\x20","\x22","\x83","\xe5"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(221)
			Dynamic tmp18 = NewVariableValue;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(221)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(221)
			::String tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(221)
			Dynamic Text = tmp20;		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(221)
			::flixel::_system::frontEnds::LogFrontEnd tmp21 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(221)
			::flixel::_system::debug::LogStyle tmp22 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(221)
			tmp21->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp22,null());
		}
		HX_STACK_LINE(223)
		bool tmp12 = (WatchName != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(223)
		if ((tmp12)){
			HX_STACK_LINE(224)
			::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			::flixel::_system::debug::Watch tmp14 = tmp13->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(224)
			Dynamic tmp15 = object;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(224)
			::String tmp16 = varName;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(224)
			::String tmp17 = WatchName;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			tmp14->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp15,tmp16,tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,set,(void))

Void ConsoleCommands_obj::fields( ::String ObjectAndVariable,hx::Null< int >  __o_NumSuperClassesToInclude){
int NumSuperClassesToInclude = __o_NumSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","fields",0x70521670,"flixel.system.debug.ConsoleCommands.fields","flixel/system/debug/ConsoleCommands.hx",228,0x4441c1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(NumSuperClassesToInclude,"NumSuperClassesToInclude")
{
		HX_STACK_LINE(229)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
			HX_STACK_LINE(229)
			Array< ::String > splitString = ObjectAndVariable1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(splitString,"splitString");
			HX_STACK_LINE(229)
			::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			::String tmp2 = splitString->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			Dynamic object = tmp3;		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(229)
			splitString->shift();
			HX_STACK_LINE(229)
			::String tmp4 = splitString->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			ObjectAndVariable1 = tmp4;
			HX_STACK_LINE(229)
			::String tmp5 = ObjectAndVariable1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			tmp = ::flixel::_system::debug::ConsoleUtil_obj::resolveObjectAndVariable(tmp5,tmp6);
		}
		HX_STACK_LINE(229)
		Dynamic pathToVariable = tmp;		HX_STACK_VAR(pathToVariable,"pathToVariable");
		HX_STACK_LINE(232)
		bool tmp1 = (pathToVariable == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(233)
			return null();
		}
		HX_STACK_LINE(235)
		Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(238)
		Dynamic tmp2 = pathToVariable->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		if ((tmp4)){
			HX_STACK_LINE(238)
			tmp5 = (pathToVariable->__Field(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69"), hx::paccDynamic ) == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(238)
			tmp5 = false;
		}
		HX_STACK_LINE(238)
		if ((tmp5)){
			HX_STACK_LINE(240)
			Dynamic tmp6 = pathToVariable->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			fields = ::Type_obj::getClassFields(tmp6);
		}
		else{
			HX_STACK_LINE(244)
			Dynamic tmp6 = pathToVariable->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			::String tmp7 = pathToVariable->__Field(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			Dynamic tmp8 = ::Reflect_obj::getProperty(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			Dynamic instance = tmp8;		HX_STACK_VAR(instance,"instance");
			HX_STACK_LINE(245)
			bool tmp9 = (instance == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			if ((tmp9)){
				HX_STACK_LINE(246)
				return null();
			}
			HX_STACK_LINE(248)
			Dynamic tmp10 = instance;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			::hx::Class tmp11 = ::Type_obj::getClass(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			::hx::Class cl = tmp11;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(249)
			::hx::Class tmp12 = cl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(249)
			int tmp13 = NumSuperClassesToInclude;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(249)
			fields = ::flixel::_system::debug::ConsoleUtil_obj::getInstanceFieldsAdvanced(tmp12,tmp13);
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			::String tmp7 = (HX_HCSTRING("fields: list of fields for ","\xf8","\x42","\x24","\xcd") + ObjectAndVariable);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			::flixel::_system::debug::LogStyle tmp8 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp7),tmp8,null());
		}
		HX_STACK_LINE(253)
		::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp6 = (_g < fields->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(254)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				if ((tmp7)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				::String tmp8 = fields->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(254)
				::String field = tmp8;		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(254)
				++(_g);
				HX_STACK_LINE(256)
				::String tmp9 = (field + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				hx::AddEq(output,tmp9);
			}
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			::flixel::_system::debug::LogStyle tmp7 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(output),tmp7,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,fields,(void))

Void ConsoleCommands_obj::call( ::String FunctionAlias,Array< ::String > Params){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","call",0x2708e4d5,"flixel.system.debug.ConsoleCommands.call","flixel/system/debug/ConsoleCommands.hx",262,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionAlias,"FunctionAlias")
		HX_STACK_ARG(Params,"Params")
		HX_STACK_LINE(263)
		bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		if ((tmp)){
			HX_STACK_LINE(264)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(267)
		::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		::String tmp2 = FunctionAlias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		Dynamic func = tmp3;		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(270)
		Dynamic tmp4 = func;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(270)
		bool tmp5 = ::Reflect_obj::isFunction(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(270)
		if ((tmp6)){
			HX_STACK_LINE(272)
			Array< ::String > searchArr = FunctionAlias.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(searchArr,"searchArr");
			HX_STACK_LINE(273)
			::String tmp7 = searchArr->shift();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			::String objectName = tmp7;		HX_STACK_VAR(objectName,"objectName");
			HX_STACK_LINE(274)
			::flixel::_system::debug::Console tmp8 = this->_console;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			::String tmp9 = objectName;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(274)
			Dynamic tmp10 = tmp8->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(274)
			Dynamic object = tmp10;		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(276)
			Dynamic tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(276)
			bool tmp12 = ::Reflect_obj::isObject(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			if ((tmp13)){
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(278)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(278)
					{
						HX_STACK_LINE(278)
						::hx::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(278)
						Dynamic tmp15 = object;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(278)
						bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(278)
						if ((tmp16)){
							HX_STACK_LINE(278)
							cl = ((::hx::Class)(object));
						}
						else{
							HX_STACK_LINE(278)
							Dynamic tmp17 = object;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(278)
							::hx::Class tmp18 = ::Type_obj::getClass(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(278)
							cl = tmp18;
						}
						HX_STACK_LINE(278)
						::hx::Class tmp17 = cl;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(278)
						::String tmp18 = ::Type_obj::getClassName(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(278)
						::String s = tmp18;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(278)
						bool tmp19 = (s != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(278)
						if ((tmp19)){
							HX_STACK_LINE(278)
							::String tmp20 = s;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(278)
							::String tmp21 = ::StringTools_obj::replace(tmp20,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(278)
							s = tmp21;
							HX_STACK_LINE(278)
							int tmp22 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(278)
							int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(278)
							::String tmp24 = s.substr(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(278)
							s = tmp24;
						}
						HX_STACK_LINE(278)
						tmp14 = s;
					}
					HX_STACK_LINE(278)
					::String tmp15 = (HX_HCSTRING("call: '","\xe3","\xbc","\x40","\x54") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(278)
					::String tmp16 = (tmp15 + HX_HCSTRING("' is not a valid Object to call","\x0f","\x9e","\x79","\x17"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(278)
					Dynamic Data = tmp16;		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(278)
					::flixel::_system::frontEnds::LogFrontEnd tmp17 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(278)
					Dynamic tmp18 = Data;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(278)
					::flixel::_system::debug::LogStyle tmp19 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(278)
					tmp17->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp18,tmp19,true);
				}
				HX_STACK_LINE(279)
				return null();
			}
			HX_STACK_LINE(282)
			Dynamic tempObj = object;		HX_STACK_VAR(tempObj,"tempObj");
			HX_STACK_LINE(283)
			::String tempVarName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tempVarName,"tempVarName");
			HX_STACK_LINE(284)
			::String funcName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(funcName,"funcName");
			HX_STACK_LINE(285)
			int tmp14 = (searchArr->length - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(285)
			int l = tmp14;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(286)
				while((true)){
					HX_STACK_LINE(286)
					bool tmp15 = (_g < l);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(286)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(286)
					if ((tmp16)){
						HX_STACK_LINE(286)
						break;
					}
					HX_STACK_LINE(286)
					int tmp17 = (_g)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(286)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(288)
					::String tmp18 = searchArr->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(288)
					tempVarName = tmp18;
					HX_STACK_LINE(290)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(292)
						Dynamic tmp19 = tempObj;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(292)
						::String tmp20 = tempVarName;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(292)
						Dynamic tmp21 = ::Reflect_obj::getProperty(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(292)
						Dynamic prop = tmp21;		HX_STACK_VAR(prop,"prop");
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(296)
								{
									HX_STACK_LINE(296)
									::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(296)
									{
										HX_STACK_LINE(296)
										::hx::Class cl;		HX_STACK_VAR(cl,"cl");
										HX_STACK_LINE(296)
										Dynamic tmp20 = tempObj;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(296)
										bool tmp21 = ::Std_obj::is(tmp20,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(296)
										if ((tmp21)){
											HX_STACK_LINE(296)
											cl = ((::hx::Class)(tempObj));
										}
										else{
											HX_STACK_LINE(296)
											Dynamic tmp22 = tempObj;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(296)
											::hx::Class tmp23 = ::Type_obj::getClass(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(296)
											cl = tmp23;
										}
										HX_STACK_LINE(296)
										::hx::Class tmp22 = cl;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(296)
										::String tmp23 = ::Type_obj::getClassName(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(296)
										::String s = tmp23;		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(296)
										bool tmp24 = (s != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(296)
										if ((tmp24)){
											HX_STACK_LINE(296)
											::String tmp25 = s;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(296)
											::String tmp26 = ::StringTools_obj::replace(tmp25,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(296)
											s = tmp26;
											HX_STACK_LINE(296)
											int tmp27 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(296)
											int tmp28 = (tmp27 + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(296)
											::String tmp29 = s.substr(tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(296)
											s = tmp29;
										}
										HX_STACK_LINE(296)
										tmp19 = s;
									}
									HX_STACK_LINE(296)
									::String tmp20 = (HX_HCSTRING("call: ","\xc4","\x2e","\xe8","\xb6") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(296)
									::String tmp21 = (tmp20 + HX_HCSTRING(" does not have a field '","\x1e","\x08","\x66","\xc6"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(296)
									::String tmp22 = tempVarName;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(296)
									::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(296)
									::String tmp24 = (tmp23 + HX_HCSTRING("' to call","\x6a","\xc8","\xf8","\x30"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(296)
									Dynamic Data = tmp24;		HX_STACK_VAR(Data,"Data");
									HX_STACK_LINE(296)
									::flixel::_system::frontEnds::LogFrontEnd tmp25 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(296)
									Dynamic tmp26 = Data;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(296)
									::flixel::_system::debug::LogStyle tmp27 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(296)
									tmp25->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp26,tmp27,true);
								}
								HX_STACK_LINE(297)
								return null();
							}
						}
					}
					HX_STACK_LINE(300)
					Dynamic tmp19 = tempObj;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(300)
					::String tmp20 = tempVarName;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(300)
					Dynamic tmp21 = ::Reflect_obj::getProperty(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(300)
					tempObj = tmp21;
				}
			}
			HX_STACK_LINE(303)
			Dynamic tmp15 = tempObj;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(303)
			::String tmp16 = searchArr->__get(l);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(303)
			Dynamic tmp17 = ::Reflect_obj::field(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(303)
			func = tmp17;
			HX_STACK_LINE(305)
			bool tmp18 = (func == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(305)
			if ((tmp18)){
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(307)
						::hx::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(307)
						Dynamic tmp20 = tempObj;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(307)
						bool tmp21 = ::Std_obj::is(tmp20,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(307)
						if ((tmp21)){
							HX_STACK_LINE(307)
							cl = ((::hx::Class)(tempObj));
						}
						else{
							HX_STACK_LINE(307)
							Dynamic tmp22 = tempObj;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(307)
							::hx::Class tmp23 = ::Type_obj::getClass(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(307)
							cl = tmp23;
						}
						HX_STACK_LINE(307)
						::hx::Class tmp22 = cl;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(307)
						::String tmp23 = ::Type_obj::getClassName(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(307)
						::String s = tmp23;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(307)
						bool tmp24 = (s != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(307)
						if ((tmp24)){
							HX_STACK_LINE(307)
							::String tmp25 = s;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(307)
							::String tmp26 = ::StringTools_obj::replace(tmp25,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(307)
							s = tmp26;
							HX_STACK_LINE(307)
							int tmp27 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(307)
							int tmp28 = (tmp27 + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(307)
							::String tmp29 = s.substr(tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(307)
							s = tmp29;
						}
						HX_STACK_LINE(307)
						tmp19 = s;
					}
					HX_STACK_LINE(307)
					::String tmp20 = (HX_HCSTRING("call: ","\xc4","\x2e","\xe8","\xb6") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(307)
					::String tmp21 = (tmp20 + HX_HCSTRING(" does not have a method '","\xab","\x59","\x25","\x76"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(307)
					::String tmp22 = searchArr->__get(l);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(307)
					::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(307)
					::String tmp24 = (tmp23 + HX_HCSTRING("' to call","\x6a","\xc8","\xf8","\x30"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(307)
					Dynamic Data = tmp24;		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(307)
					::flixel::_system::frontEnds::LogFrontEnd tmp25 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(307)
					Dynamic tmp26 = Data;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(307)
					::flixel::_system::debug::LogStyle tmp27 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(307)
					tmp25->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp26,tmp27,true);
				}
				HX_STACK_LINE(308)
				return null();
			}
		}
		HX_STACK_LINE(312)
		Dynamic tmp7 = func;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		bool tmp8 = ::Reflect_obj::isFunction(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		if ((tmp8)){
			HX_STACK_LINE(314)
			Dynamic tmp9 = func;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(314)
			bool tmp10 = ::flixel::_system::debug::ConsoleUtil_obj::callFunction(tmp9,Params);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(314)
			bool success = tmp10;		HX_STACK_VAR(success,"success");
			HX_STACK_LINE(316)
			bool tmp11 = (Params->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(316)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(316)
			if ((tmp11)){
				HX_STACK_LINE(316)
				tmp12 = success;
			}
			else{
				HX_STACK_LINE(316)
				tmp12 = false;
			}
			HX_STACK_LINE(316)
			if ((tmp12)){
				HX_STACK_LINE(317)
				::flixel::_system::frontEnds::LogFrontEnd tmp13 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(317)
				::String tmp14 = (HX_HCSTRING("call: Called '","\xa8","\x98","\x50","\x1b") + FunctionAlias);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(317)
				::String tmp15 = (tmp14 + HX_HCSTRING("()'","\x06","\x7e","\x1e","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(317)
				::flixel::_system::debug::LogStyle tmp16 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(317)
				tmp13->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp15),tmp16,null());
			}
			else{
				HX_STACK_LINE(319)
				bool tmp13 = success;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(319)
				if ((tmp13)){
					HX_STACK_LINE(320)
					::flixel::_system::frontEnds::LogFrontEnd tmp14 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(320)
					::String tmp15 = (HX_HCSTRING("call: Called '","\xa8","\x98","\x50","\x1b") + FunctionAlias);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(320)
					::String tmp16 = (tmp15 + HX_HCSTRING("()' with params ","\x5a","\x78","\xc0","\x9f"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(320)
					::String tmp17 = ::Std_obj::string(Params);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(320)
					::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(320)
					::flixel::_system::debug::LogStyle tmp19 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(320)
					tmp14->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(tmp18),tmp19,null());
				}
			}
		}
		else{
			HX_STACK_LINE(324)
			::flixel::_system::frontEnds::LogFrontEnd tmp9 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			::String tmp10 = (HX_HCSTRING("call: '","\xe3","\xbc","\x40","\x54") + FunctionAlias);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			::String tmp11 = (tmp10 + HX_HCSTRING("' is not a valid function","\x45","\xf6","\xe9","\xae"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			::flixel::_system::debug::LogStyle tmp12 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			tmp9->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp11,tmp12,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,call,(void))

Void ConsoleCommands_obj::listObjects( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","listObjects",0x368814bf,"flixel.system.debug.ConsoleCommands.listObjects","flixel/system/debug/ConsoleCommands.hx",330,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(330)
			::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(330)
					::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(330)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(330)
					hx::AddEq(string,tmp4);
					HX_STACK_LINE(330)
					hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				}
;
			}
			HX_STACK_LINE(330)
			int tmp3 = (string.length - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			tmp = string.substring((int)0,tmp3);
		}
		HX_STACK_LINE(330)
		::String tmp1 = (HX_HCSTRING("Objects registered: \n","\xf6","\xad","\x0c","\xd4") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		Dynamic Text = tmp1;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(330)
		::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp3,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

Void ConsoleCommands_obj::listFunctions( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","listFunctions",0x68aec706,"flixel.system.debug.ConsoleCommands.listFunctions","flixel/system/debug/ConsoleCommands.hx",335,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::String string = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(335)
			::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			Dynamic tmp2 = tmp1->__Field(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(335)
					::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(335)
					::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(335)
					hx::AddEq(string,tmp4);
					HX_STACK_LINE(335)
					hx::AddEq(string,HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));
				}
;
			}
			HX_STACK_LINE(335)
			int tmp3 = (string.length - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			tmp = string.substring((int)0,tmp3);
		}
		HX_STACK_LINE(335)
		::String tmp1 = (HX_HCSTRING("Functions registered: \n","\xbd","\x05","\x3d","\x78") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		Dynamic Text = tmp1;		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(335)
		::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp3,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

Void ConsoleCommands_obj::watchMouse( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","watchMouse",0x61fb80cd,"flixel.system.debug.ConsoleCommands.watchMouse","flixel/system/debug/ConsoleCommands.hx",339,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		bool tmp = this->_watchingMouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(342)
				::flixel::_system::debug::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(342)
				tmp3->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),HX_HCSTRING("Mouse Position","\x44","\x8e","\x3a","\x9d"));
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(343)
				::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(343)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position added to watch window","\x86","\x9c","\xf8","\x24")),tmp3,null());
			}
		}
		else{
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(347)
				::flixel::_system::debug::Watch tmp3 = tmp2->debugger->__Field(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(347)
				tmp3->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ClassOf< ::flixel::FlxG >(),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),null());
			}
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(348)
				::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(348)
				::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(348)
				tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("watchMouse: Mouse position removed from watch window","\x17","\xfe","\x23","\x1d")),tmp3,null());
			}
		}
		HX_STACK_LINE(351)
		bool tmp2 = this->_watchingMouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		this->_watchingMouse = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

Void ConsoleCommands_obj::track( ::String ObjectAndVariable){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","track",0xd5c37274,"flixel.system.debug.ConsoleCommands.track","flixel/system/debug/ConsoleCommands.hx",355,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
		HX_STACK_LINE(356)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		{
			HX_STACK_LINE(356)
			::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
			HX_STACK_LINE(356)
			Array< ::String > splitString = ObjectAndVariable1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(splitString,"splitString");
			HX_STACK_LINE(356)
			::flixel::_system::debug::Console tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			::String tmp2 = splitString->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			Dynamic tmp3 = tmp1->__Field(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			Dynamic object = tmp3;		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(356)
			splitString->shift();
			HX_STACK_LINE(356)
			::String tmp4 = splitString->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			ObjectAndVariable1 = tmp4;
			HX_STACK_LINE(356)
			::String tmp5 = ObjectAndVariable1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			tmp = ::flixel::_system::debug::ConsoleUtil_obj::resolveObjectAndVariable(tmp5,tmp6);
		}
		HX_STACK_LINE(356)
		Dynamic pathToVariable = tmp;		HX_STACK_VAR(pathToVariable,"pathToVariable");
		HX_STACK_LINE(357)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp1 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		Dynamic tmp2 = pathToVariable->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(357)
		::String tmp3 = pathToVariable->__Field(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(357)
		Dynamic tmp4 = ::Reflect_obj::getProperty(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(357)
		tmp1->__Field(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"), hx::paccDynamic )(tmp4,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,track,(void))

Void ConsoleCommands_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","pause",0x7cfbbadf,"flixel.system.debug.ConsoleCommands.pause","flixel/system/debug/ConsoleCommands.hx",361,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(362)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		if ((tmp1)){
			HX_STACK_LINE(364)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			tmp2->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				::flixel::_system::debug::LogStyle tmp4 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game unpaused","\xf9","\xe8","\xd5","\xeb")),tmp4,null());
			}
		}
		else{
			HX_STACK_LINE(369)
			::flixel::_system::frontEnds::VCRFrontEnd tmp2 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(369)
			tmp2->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				::flixel::_system::frontEnds::LogFrontEnd tmp3 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(370)
				::flixel::_system::debug::LogStyle tmp4 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(370)
				tmp3->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("pause: Game paused","\x60","\xa9","\xdd","\x91")),tmp4,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))


ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

Dynamic ConsoleCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return help_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return watchMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearHistory") ) { return clearHistory_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return _watchingMouse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::flixel::_system::debug::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ConsoleCommands_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"));
	outFields->push(HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::Console*/ ,(int)offsetof(ConsoleCommands_obj,_console),HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("_watchingMouse","\x73","\xf3","\x3a","\x2a"),
	HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),
	HX_HCSTRING("resetState","\xc2","\xad","\xa7","\x6c"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),
	HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),
	HX_HCSTRING("watchMouse","\x56","\x31","\x6f","\x84"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.ConsoleCommands","\x97","\xff","\x46","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ConsoleCommands_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConsoleCommands_obj >;
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
