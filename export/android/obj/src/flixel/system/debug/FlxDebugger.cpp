#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_BitmapLog
#include <flixel/system/debug/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_FRAME("flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",57,0xd9fc0a74)
HX_STACK_THIS(this)
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(78)
	this->hasMouse = false;
	HX_STACK_LINE(404)
	super::__construct();
	HX_STACK_LINE(405)
	this->set_visible(false);
	HX_STACK_LINE(406)
	this->_layout = ::flixel::_system::debug::DebuggerLayout_obj::STANDARD;
	HX_STACK_LINE(407)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	this->_screen = tmp;
	HX_STACK_LINE(408)
	this->_windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(410)
	::openfl::_legacy::display::Sprite tmp1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	this->_topBar = tmp1;
	HX_STACK_LINE(411)
	::openfl::_legacy::display::Sprite tmp2 = this->_topBar;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(411)
	Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(411)
	tmp3->beginFill((int)0,tmp4);
	HX_STACK_LINE(412)
	::openfl::_legacy::display::Sprite tmp5 = this->_topBar;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(412)
	::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(412)
	::openfl::_legacy::display::MovieClip tmp7 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(412)
	::openfl::_legacy::display::Stage tmp8 = tmp7->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(412)
	int tmp9 = tmp8->get_stageWidth();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(412)
	tmp6->drawRect((int)0,(int)0,tmp9,(int)20);
	HX_STACK_LINE(413)
	::openfl::_legacy::display::Sprite tmp10 = this->_topBar;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(413)
	::openfl::_legacy::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(413)
	tmp11->endFill();
	HX_STACK_LINE(414)
	::openfl::_legacy::display::Sprite tmp12 = this->_topBar;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(414)
	this->addChild(tmp12);
	HX_STACK_LINE(416)
	::openfl::_legacy::text::TextField tmp13 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(416)
	::openfl::_legacy::text::TextField txt = tmp13;		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(417)
	txt->set_height((int)20);
	HX_STACK_LINE(418)
	txt->set_selectable(false);
	HX_STACK_LINE(419)
	txt->set_y((int)-9);
	HX_STACK_LINE(420)
	txt->set_multiline(false);
	HX_STACK_LINE(421)
	txt->set_embedFonts(true);
	HX_STACK_LINE(422)
	::String tmp14 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(422)
	::openfl::_legacy::text::TextFormat tmp15 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp14,(int)12,(int)-1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(422)
	::openfl::_legacy::text::TextFormat format = tmp15;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(423)
	::openfl::_legacy::text::TextFormat tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(423)
	txt->set_defaultTextFormat(tmp16);
	HX_STACK_LINE(424)
	txt->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(425)
	::flixel::_system::FlxVersion tmp17 = ::flixel::FlxG_obj::VERSION;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(425)
	::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(425)
	txt->set_text(tmp18);
	HX_STACK_LINE(427)
	this->_leftButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(428)
	this->_rightButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(429)
	this->_middleButtons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		::flixel::_system::debug::Log tmp19 = ::flixel::_system::debug::Log_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(431)
		::flixel::_system::debug::Log tmp20 = this->log = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(431)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(431)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(431)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(431)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(431)
		this->addChild(tmp22);
		HX_STACK_LINE(431)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(431)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(431)
		if ((tmp24)){
			HX_STACK_LINE(431)
			this->updateBounds();
			HX_STACK_LINE(431)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(431)
		window;
	}
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		::flixel::_system::debug::BitmapLog tmp19 = ::flixel::_system::debug::BitmapLog_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(432)
		::flixel::_system::debug::BitmapLog tmp20 = this->bitmapLog = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(432)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(432)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(432)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(432)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(432)
		this->addChild(tmp22);
		HX_STACK_LINE(432)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(432)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(432)
		if ((tmp24)){
			HX_STACK_LINE(432)
			this->updateBounds();
			HX_STACK_LINE(432)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(432)
		window;
	}
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		::flixel::_system::debug::Watch tmp19 = ::flixel::_system::debug::Watch_obj::__new(null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(433)
		::flixel::_system::debug::Watch tmp20 = this->watch = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(433)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(433)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(433)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(433)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(433)
		this->addChild(tmp22);
		HX_STACK_LINE(433)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(433)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(433)
		if ((tmp24)){
			HX_STACK_LINE(433)
			this->updateBounds();
			HX_STACK_LINE(433)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(433)
		window;
	}
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::flixel::_system::debug::Console tmp19 = ::flixel::_system::debug::Console_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(434)
		::flixel::_system::debug::Console tmp20 = this->console = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(434)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(434)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(434)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(434)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(434)
		this->addChild(tmp22);
		HX_STACK_LINE(434)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(434)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(434)
		if ((tmp24)){
			HX_STACK_LINE(434)
			this->updateBounds();
			HX_STACK_LINE(434)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(434)
		window;
	}
	HX_STACK_LINE(435)
	{
		HX_STACK_LINE(435)
		::flixel::_system::debug::Stats tmp19 = ::flixel::_system::debug::Stats_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(435)
		::flixel::_system::debug::Stats tmp20 = this->stats = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(435)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(435)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(435)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(435)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(435)
		this->addChild(tmp22);
		HX_STACK_LINE(435)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(435)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(435)
		if ((tmp24)){
			HX_STACK_LINE(435)
			this->updateBounds();
			HX_STACK_LINE(435)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(435)
		window;
	}
	HX_STACK_LINE(437)
	::flixel::_system::debug::VCR tmp19 = ::flixel::_system::debug::VCR_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(437)
	this->vcr = tmp19;
	HX_STACK_LINE(439)
	::flixel::_system::debug::_FlxDebugger::GraphicFlixel tmp20 = ::flixel::_system::debug::_FlxDebugger::GraphicFlixel_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(439)
	Dynamic tmp21 = this->openHomepage_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(439)
	this->addButton(::flixel::_system::debug::ButtonAlignment_obj::LEFT,tmp20,tmp21,null(),null());
	HX_STACK_LINE(440)
	Dynamic tmp22 = this->openHomepage_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(440)
	::flixel::_system::ui::FlxSystemButton tmp23 = this->addButton(::flixel::_system::debug::ButtonAlignment_obj::LEFT,null(),tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(440)
	::openfl::_legacy::text::TextField tmp24 = txt;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(440)
	tmp23->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp24);
	HX_STACK_LINE(442)
	::flixel::_system::debug::BitmapLog tmp25 = this->bitmapLog;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(442)
	this->addWindowToggleButton(tmp25,hx::ClassOf< ::flixel::_system::debug::GraphicBitmapLog >());
	HX_STACK_LINE(443)
	::flixel::_system::debug::Log tmp26 = this->log;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(443)
	this->addWindowToggleButton(tmp26,hx::ClassOf< ::flixel::_system::debug::GraphicLog >());
	HX_STACK_LINE(445)
	::flixel::_system::debug::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(445)
	this->addWindowToggleButton(tmp27,hx::ClassOf< ::flixel::_system::debug::GraphicWatch >());
	HX_STACK_LINE(446)
	::flixel::_system::debug::Console tmp28 = this->console;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(446)
	this->addWindowToggleButton(tmp28,hx::ClassOf< ::flixel::_system::debug::GraphicConsole >());
	HX_STACK_LINE(447)
	::flixel::_system::debug::Stats tmp29 = this->stats;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(447)
	this->addWindowToggleButton(tmp29,hx::ClassOf< ::flixel::_system::debug::GraphicStats >());
	HX_STACK_LINE(449)
	::flixel::_system::debug::_FlxDebugger::GraphicDrawDebug tmp30 = ::flixel::_system::debug::_FlxDebugger::GraphicDrawDebug_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(449)
	Dynamic tmp31 = this->toggleDrawDebug_dyn();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(449)
	::flixel::_system::ui::FlxSystemButton tmp32 = this->addButton(::flixel::_system::debug::ButtonAlignment_obj::RIGHT,tmp30,tmp31,true,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(449)
	::flixel::_system::ui::FlxSystemButton drawDebugButton = tmp32;		HX_STACK_VAR(drawDebugButton,"drawDebugButton");
	HX_STACK_LINE(450)
	::flixel::_system::frontEnds::DebuggerFrontEnd tmp33 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(450)
	bool tmp34 = tmp33->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(450)
	bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(450)
	drawDebugButton->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp35);
	HX_STACK_LINE(451)
	{
		HX_STACK_LINE(451)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp36 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp36,"tmp36");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::flixel::_system::ui::FlxSystemButton,drawDebugButton)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/system/debug/FlxDebugger.hx",451,0xd9fc0a74)
			{
				HX_STACK_LINE(451)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp37 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(451)
				bool tmp38 = tmp37->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(451)
				drawDebugButton->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp38);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(451)
		tmp36->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(drawDebugButton)));
	}
	HX_STACK_LINE(457)
	Float tmp36 = Width;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(457)
	Float tmp37 = Height;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(457)
	this->onResize(tmp36,tmp37);
	HX_STACK_LINE(459)
	::String tmp38 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(459)
	Dynamic tmp39 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(459)
	this->addEventListener(tmp38,tmp39,null(),null(),null());
	HX_STACK_LINE(460)
	::String tmp40 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(460)
	Dynamic tmp41 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(460)
	this->addEventListener(tmp40,tmp41,null(),null(),null());
	HX_STACK_LINE(462)
	{
		HX_STACK_LINE(462)
		::flixel::_system::frontEnds::SignalFrontEnd tmp42 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(462)
		Dynamic tmp43 = ::flixel::_system::debug::Tracker_obj::onStateSwitch_dyn();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(462)
		tmp42->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp43);
	}
}
;
	return null();
}

//FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > _result_ = new FlxDebugger_obj();
	_result_->__construct(Width,Height);
	return _result_;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > _result_ = new FlxDebugger_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","destroy",0x0aa38497,"flixel.system.debug.FlxDebugger.destroy","flixel/system/debug/FlxDebugger.hx",114,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->_screen = null();
		HX_STACK_LINE(117)
		this->_leftButtons = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_leftButtons);
		HX_STACK_LINE(118)
		this->_middleButtons = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_middleButtons);
		HX_STACK_LINE(119)
		this->_rightButtons = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_rightButtons);
		HX_STACK_LINE(121)
		::openfl::_legacy::display::Sprite tmp = this->_topBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		this->removeChild(tmp);
		HX_STACK_LINE(122)
		this->_topBar = null();
		HX_STACK_LINE(124)
		::flixel::_system::debug::Log tmp1 = this->log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(126)
			::flixel::_system::debug::Log tmp3 = this->log;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			this->removeChild(tmp3);
			HX_STACK_LINE(127)
			::flixel::_system::debug::Log tmp4 = this->log;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			tmp4->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(128)
			this->log = null();
		}
		HX_STACK_LINE(130)
		::flixel::_system::debug::Watch tmp3 = this->watch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		if ((tmp4)){
			HX_STACK_LINE(132)
			::flixel::_system::debug::Watch tmp5 = this->watch;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			this->removeChild(tmp5);
			HX_STACK_LINE(133)
			::flixel::_system::debug::Watch tmp6 = this->watch;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			tmp6->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(134)
			this->watch = null();
		}
		HX_STACK_LINE(136)
		::flixel::_system::debug::BitmapLog tmp5 = this->bitmapLog;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		if ((tmp6)){
			HX_STACK_LINE(138)
			::flixel::_system::debug::BitmapLog tmp7 = this->bitmapLog;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			this->removeChild(tmp7);
			HX_STACK_LINE(139)
			::flixel::_system::debug::BitmapLog tmp8 = this->bitmapLog;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(139)
			tmp8->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(140)
			this->bitmapLog = null();
		}
		HX_STACK_LINE(142)
		::flixel::_system::debug::Stats tmp7 = this->stats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		if ((tmp8)){
			HX_STACK_LINE(144)
			::flixel::_system::debug::Stats tmp9 = this->stats;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			this->removeChild(tmp9);
			HX_STACK_LINE(145)
			::flixel::_system::debug::Stats tmp10 = this->stats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(145)
			tmp10->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(146)
			this->stats = null();
		}
		HX_STACK_LINE(148)
		::flixel::_system::debug::Console tmp9 = this->console;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(148)
		if ((tmp10)){
			HX_STACK_LINE(150)
			::flixel::_system::debug::Console tmp11 = this->console;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			this->removeChild(tmp11);
			HX_STACK_LINE(151)
			::flixel::_system::debug::Console tmp12 = this->console;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(151)
			tmp12->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(152)
			this->console = null();
		}
		HX_STACK_LINE(155)
		this->_windows = null();
		HX_STACK_LINE(157)
		::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		Dynamic tmp12 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		this->removeEventListener(tmp11,tmp12,null());
		HX_STACK_LINE(158)
		::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(158)
		Dynamic tmp14 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(158)
		this->removeEventListener(tmp13,tmp14,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

Void FlxDebugger_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","update",0x10a9d10c,"flixel.system.debug.FlxDebugger.update","flixel/system/debug/FlxDebugger.hx",163,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(163)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			if ((tmp1)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::flixel::_system::debug::Window tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			::flixel::_system::debug::Window window = tmp2;		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			window->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,update,(void))

Void FlxDebugger_obj::setLayout( ::flixel::_system::debug::DebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","setLayout",0x62385cc9,"flixel.system.debug.FlxDebugger.setLayout","flixel/system/debug/FlxDebugger.hx",175,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
		HX_STACK_LINE(176)
		this->_layout = Layout;
		HX_STACK_LINE(177)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetLayout",0xf3cb1bf6,"flixel.system.debug.FlxDebugger.resetLayout","flixel/system/debug/FlxDebugger.hx",186,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::_system::debug::DebuggerLayout tmp = this->_layout;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::flixel::_system::debug::DebuggerLayout _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(189)
				::flixel::_system::debug::Log tmp1 = this->log;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(189)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(189)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(189)
				Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp4,(int)68);
				HX_STACK_LINE(190)
				::flixel::_system::debug::Log tmp5 = this->log;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(190)
				::openfl::_legacy::geom::Point tmp6 = this->_screen;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(190)
				Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				tmp5->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp7);
				HX_STACK_LINE(191)
				::flixel::_system::debug::Console tmp8 = this->console;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::openfl::_legacy::geom::Point tmp9 = this->_screen;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				int tmp12 = (int)8;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(191)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(191)
				tmp8->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp13,(int)35);
				HX_STACK_LINE(192)
				::flixel::_system::debug::Console tmp14 = this->console;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(192)
				::flixel::_system::debug::Log tmp15 = this->log;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(192)
				Float tmp16 = tmp15->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(192)
				::flixel::_system::debug::Log tmp17 = this->log;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(192)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(192)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(192)
				Float tmp20 = (tmp19 + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(192)
				::openfl::_legacy::geom::Point tmp21 = this->_screen;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(192)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(192)
				tmp14->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp20,tmp22);
				HX_STACK_LINE(193)
				::flixel::_system::debug::Watch tmp23 = this->watch;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(193)
				::openfl::_legacy::geom::Point tmp24 = this->_screen;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(193)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(193)
				Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(193)
				tmp23->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp26,(int)68);
				HX_STACK_LINE(194)
				::flixel::_system::debug::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(194)
				::openfl::_legacy::geom::Point tmp28 = this->_screen;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(194)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(194)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(194)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(194)
				tmp27->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp29,tmp31);
				HX_STACK_LINE(195)
				::flixel::_system::debug::Stats tmp32 = this->stats;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(195)
				::openfl::_legacy::geom::Point tmp33 = this->_screen;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(195)
				Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(195)
				tmp32->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp34,(int)0);
				HX_STACK_LINE(196)
				::flixel::_system::debug::BitmapLog tmp35 = this->bitmapLog;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(196)
				::openfl::_legacy::geom::Point tmp36 = this->_screen;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(196)
				Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(196)
				Float tmp38 = (Float(tmp37) / Float((int)4));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(196)
				tmp35->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp38,(int)68);
				HX_STACK_LINE(197)
				::flixel::_system::debug::BitmapLog tmp39 = this->bitmapLog;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(197)
				::openfl::_legacy::geom::Point tmp40 = this->_screen;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(197)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(197)
				int tmp42 = (int)136;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(197)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(197)
				int tmp44 = (int)4;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(197)
				Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(197)
				tmp39->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp45);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(199)
				::flixel::_system::debug::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(199)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(199)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(199)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(200)
				::flixel::_system::debug::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(201)
				::flixel::_system::debug::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(201)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(201)
				int tmp12 = (int)6;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(201)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(201)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(201)
				::openfl::_legacy::geom::Point tmp15 = this->_screen;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(201)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(201)
				Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(201)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp14,tmp17);
				HX_STACK_LINE(202)
				::flixel::_system::debug::Log tmp18 = this->log;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(202)
				::openfl::_legacy::geom::Point tmp19 = this->_screen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(202)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(202)
				::flixel::_system::debug::Log tmp21 = this->log;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(202)
				Float tmp22 = tmp21->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(202)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(202)
				::flixel::_system::debug::Console tmp24 = this->console;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(202)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(202)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(202)
				Float tmp27 = ((Float)3.);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(202)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				tmp18->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp28);
				HX_STACK_LINE(203)
				::flixel::_system::debug::Watch tmp29 = this->watch;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(203)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(203)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(203)
				int tmp32 = (int)6;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(203)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(203)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(203)
				::openfl::_legacy::geom::Point tmp35 = this->_screen;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(203)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(203)
				Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(203)
				tmp29->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp34,tmp37);
				HX_STACK_LINE(204)
				::flixel::_system::debug::Watch tmp38 = this->watch;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(204)
				::openfl::_legacy::geom::Point tmp39 = this->_screen;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(204)
				Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(204)
				::openfl::_legacy::geom::Point tmp41 = this->_screen;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(204)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(204)
				::flixel::_system::debug::Watch tmp43 = this->watch;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(204)
				Float tmp44 = tmp43->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(204)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(204)
				::flixel::_system::debug::Console tmp46 = this->console;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(204)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(204)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(204)
				Float tmp49 = ((Float)3.);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(204)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(204)
				tmp38->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp40,tmp50);
				HX_STACK_LINE(205)
				::flixel::_system::debug::Stats tmp51 = this->stats;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(205)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(205)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(205)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp53,(int)0);
				HX_STACK_LINE(206)
				::flixel::_system::debug::BitmapLog tmp54 = this->bitmapLog;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(206)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(206)
				Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(206)
				int tmp57 = (int)6;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(206)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(206)
				Float tmp59 = (Float(tmp58) / Float((int)2));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(206)
				::openfl::_legacy::geom::Point tmp60 = this->_screen;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(206)
				Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(206)
				int tmp62 = (int)4;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(206)
				Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(206)
				::openfl::_legacy::geom::Point tmp64 = this->_screen;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(206)
				Float tmp65 = tmp64->y;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(206)
				Float tmp66 = (Float(tmp65) / Float((int)2));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(206)
				Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(206)
				int tmp68 = (int)70;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(206)
				Float tmp69 = (tmp67 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(206)
				tmp54->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp59,tmp69);
				HX_STACK_LINE(207)
				::flixel::_system::debug::BitmapLog tmp70 = this->bitmapLog;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(207)
				Float tmp71 = ((Float)3.);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(207)
				tmp70->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp71);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(209)
				::flixel::_system::debug::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(209)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(209)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(210)
				::flixel::_system::debug::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(210)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(211)
				::flixel::_system::debug::Log tmp7 = this->log;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				::openfl::_legacy::geom::Point tmp8 = this->_screen;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(211)
				int tmp10 = (int)6;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(211)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(211)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(211)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(211)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(211)
				Float tmp15 = (Float(tmp14) / Float((int)4));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(211)
				tmp7->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp15);
				HX_STACK_LINE(212)
				::flixel::_system::debug::Log tmp16 = this->log;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(212)
				::flixel::_system::debug::Console tmp17 = this->console;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(212)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(212)
				Float tmp19 = (tmp18 + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(212)
				Float tmp20 = (tmp19 + (int)15);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(212)
				tmp16->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp20);
				HX_STACK_LINE(213)
				::flixel::_system::debug::Watch tmp21 = this->watch;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				::openfl::_legacy::geom::Point tmp22 = this->_screen;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				int tmp24 = (int)6;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(213)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(213)
				Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(213)
				::openfl::_legacy::geom::Point tmp27 = this->_screen;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(213)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(213)
				Float tmp29 = (Float(tmp28) / Float((int)4));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(213)
				tmp21->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp26,tmp29);
				HX_STACK_LINE(214)
				::flixel::_system::debug::Watch tmp30 = this->watch;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(214)
				::openfl::_legacy::geom::Point tmp31 = this->_screen;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(214)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(214)
				::flixel::_system::debug::Console tmp33 = this->console;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(214)
				Float tmp34 = tmp33->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(214)
				Float tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(214)
				Float tmp36 = (tmp35 + (int)15);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(214)
				tmp30->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp32,tmp36);
				HX_STACK_LINE(215)
				::flixel::_system::debug::Stats tmp37 = this->stats;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(215)
				::openfl::_legacy::geom::Point tmp38 = this->_screen;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(215)
				Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(215)
				::openfl::_legacy::geom::Point tmp40 = this->_screen;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(215)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(215)
				tmp37->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp39,tmp41);
				HX_STACK_LINE(216)
				::flixel::_system::debug::BitmapLog tmp42 = this->bitmapLog;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(216)
				::openfl::_legacy::geom::Point tmp43 = this->_screen;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(216)
				Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(216)
				int tmp45 = (int)6;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(216)
				Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(216)
				Float tmp47 = (Float(tmp46) / Float((int)2));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(216)
				::openfl::_legacy::geom::Point tmp48 = this->_screen;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(216)
				Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(216)
				Float tmp50 = (Float(tmp49) / Float((int)4));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(216)
				tmp42->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp47,tmp50);
				HX_STACK_LINE(217)
				::flixel::_system::debug::BitmapLog tmp51 = this->bitmapLog;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(217)
				::flixel::_system::debug::Console tmp52 = this->console;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(217)
				Float tmp53 = tmp52->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(217)
				int tmp54 = (int)4;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(217)
				Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(217)
				Float tmp56 = (tmp55 + (int)15);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(217)
				::openfl::_legacy::geom::Point tmp57 = this->_screen;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(217)
				Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(217)
				Float tmp59 = (Float(tmp58) / Float((int)4));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(217)
				Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(217)
				Float tmp61 = (tmp60 + (int)2);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(217)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp61);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(219)
				::flixel::_system::debug::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(219)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(219)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(219)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(219)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(220)
				::flixel::_system::debug::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(220)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(221)
				::flixel::_system::debug::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				Float tmp12 = (Float(tmp11) / Float((int)3));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				Float tmp15 = (tmp14 - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				Float tmp16 = ((Float)5.);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(221)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(221)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(221)
				::flixel::_system::debug::Console tmp19 = this->console;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(221)
				Float tmp20 = tmp19->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(221)
				Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(221)
				Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(221)
				Float tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(221)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp23);
				HX_STACK_LINE(222)
				::flixel::_system::debug::Log tmp24 = this->log;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(222)
				tmp24->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(223)
				::flixel::_system::debug::Watch tmp25 = this->watch;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(223)
				::openfl::_legacy::geom::Point tmp26 = this->_screen;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(223)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(223)
				Float tmp28 = (Float(tmp27) / Float((int)3));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(223)
				::openfl::_legacy::geom::Point tmp29 = this->_screen;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(223)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(223)
				Float tmp31 = (tmp30 - (int)15);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(223)
				Float tmp32 = ((Float)5.);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(223)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(223)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(223)
				::flixel::_system::debug::Console tmp35 = this->console;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(223)
				Float tmp36 = tmp35->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(223)
				Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(223)
				Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(223)
				tmp25->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp28,tmp38);
				HX_STACK_LINE(224)
				::flixel::_system::debug::Watch tmp39 = this->watch;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(224)
				::flixel::_system::debug::Log tmp40 = this->log;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(224)
				Float tmp41 = tmp40->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(224)
				::flixel::_system::debug::Log tmp42 = this->log;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(224)
				Float tmp43 = tmp42->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(224)
				Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(224)
				Float tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(224)
				tmp39->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp45);
				HX_STACK_LINE(225)
				::flixel::_system::debug::Stats tmp46 = this->stats;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(225)
				::openfl::_legacy::geom::Point tmp47 = this->_screen;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(225)
				Float tmp48 = tmp47->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(225)
				tmp46->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp48,(int)0);
				HX_STACK_LINE(226)
				::flixel::_system::debug::BitmapLog tmp49 = this->bitmapLog;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(226)
				::openfl::_legacy::geom::Point tmp50 = this->_screen;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(226)
				Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(226)
				Float tmp52 = (Float(tmp51) / Float((int)3));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(226)
				::openfl::_legacy::geom::Point tmp53 = this->_screen;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(226)
				Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(226)
				Float tmp55 = (tmp54 - (int)15);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(226)
				Float tmp56 = ((Float)5.);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(226)
				Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(226)
				Float tmp58 = (Float(tmp57) / Float((int)2));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(226)
				::flixel::_system::debug::Console tmp59 = this->console;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(226)
				Float tmp60 = tmp59->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(226)
				Float tmp61 = (Float(tmp60) / Float((int)2));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(226)
				Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(226)
				Float tmp63 = (tmp62 - (int)2);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(226)
				tmp49->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp52,tmp63);
				HX_STACK_LINE(227)
				::flixel::_system::debug::BitmapLog tmp64 = this->bitmapLog;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(227)
				::openfl::_legacy::geom::Point tmp65 = this->_screen;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(227)
				Float tmp66 = tmp65->x;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(227)
				Float tmp67 = (Float(tmp66) / Float((int)3));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(227)
				int tmp68 = (int)4;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(227)
				Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(227)
				tmp64->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp69,(int)0);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(229)
				::flixel::_system::debug::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(229)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(229)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(229)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(230)
				::flixel::_system::debug::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(230)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(230)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(231)
				::flixel::_system::debug::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(231)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(231)
				Float tmp12 = (Float(tmp11) / Float((int)3));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(231)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(231)
				Float tmp15 = (tmp14 - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(231)
				Float tmp16 = ((Float)5.);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(231)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(231)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(231)
				::flixel::_system::debug::Console tmp19 = this->console;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(231)
				Float tmp20 = tmp19->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(231)
				Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(231)
				Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(231)
				Float tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(231)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp23);
				HX_STACK_LINE(232)
				::flixel::_system::debug::Log tmp24 = this->log;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(232)
				::openfl::_legacy::geom::Point tmp25 = this->_screen;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(232)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(232)
				tmp24->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp26,(int)0);
				HX_STACK_LINE(233)
				::flixel::_system::debug::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(233)
				::openfl::_legacy::geom::Point tmp28 = this->_screen;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(233)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(233)
				Float tmp30 = (Float(tmp29) / Float((int)3));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(233)
				::openfl::_legacy::geom::Point tmp31 = this->_screen;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(233)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(233)
				Float tmp33 = (tmp32 - (int)15);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(233)
				Float tmp34 = ((Float)5.);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(233)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(233)
				Float tmp36 = (Float(tmp35) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(233)
				::flixel::_system::debug::Console tmp37 = this->console;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(233)
				Float tmp38 = tmp37->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(233)
				Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(233)
				Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(233)
				tmp27->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp30,tmp40);
				HX_STACK_LINE(234)
				::flixel::_system::debug::Watch tmp41 = this->watch;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(234)
				::openfl::_legacy::geom::Point tmp42 = this->_screen;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(234)
				Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(234)
				::flixel::_system::debug::Log tmp44 = this->log;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(234)
				Float tmp45 = tmp44->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(234)
				::flixel::_system::debug::Log tmp46 = this->log;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(234)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(234)
				Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(234)
				Float tmp49 = (tmp48 + (int)2);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(234)
				tmp41->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp43,tmp49);
				HX_STACK_LINE(235)
				::flixel::_system::debug::Stats tmp50 = this->stats;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(235)
				tmp50->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(236)
				::flixel::_system::debug::BitmapLog tmp51 = this->bitmapLog;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(236)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(236)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(236)
				Float tmp54 = (Float(tmp53) / Float((int)3));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(236)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(236)
				Float tmp56 = tmp55->y;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(236)
				Float tmp57 = (tmp56 - (int)15);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(236)
				Float tmp58 = ((Float)5.);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(236)
				Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(236)
				Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(236)
				::flixel::_system::debug::Console tmp61 = this->console;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(236)
				Float tmp62 = tmp61->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(236)
				Float tmp63 = (Float(tmp62) / Float((int)2));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(236)
				Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(236)
				Float tmp65 = (tmp64 - (int)2);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(236)
				tmp51->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp54,tmp65);
				HX_STACK_LINE(237)
				::flixel::_system::debug::BitmapLog tmp66 = this->bitmapLog;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(237)
				::openfl::_legacy::geom::Point tmp67 = this->_screen;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(237)
				Float tmp68 = tmp67->x;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(237)
				int tmp69 = (int)4;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(237)
				Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(237)
				::openfl::_legacy::geom::Point tmp71 = this->_screen;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(237)
				Float tmp72 = tmp71->x;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(237)
				Float tmp73 = (Float(tmp72) / Float((int)3));		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(237)
				Float tmp74 = (tmp73 * (int)2);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(237)
				Float tmp75 = (tmp70 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(237)
				tmp66->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp75,(int)0);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(239)
				::flixel::_system::debug::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(239)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(239)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(240)
				::flixel::_system::debug::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(241)
				::flixel::_system::debug::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(241)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(241)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(241)
				int tmp12 = (int)6;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(241)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(241)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(241)
				::openfl::_legacy::geom::Point tmp15 = this->_screen;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(241)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(241)
				Float tmp17 = (Float(tmp16) / Float((int)4));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(241)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp14,tmp17);
				HX_STACK_LINE(242)
				::flixel::_system::debug::Log tmp18 = this->log;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(242)
				::openfl::_legacy::geom::Point tmp19 = this->_screen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(242)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(242)
				::flixel::_system::debug::Log tmp21 = this->log;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(242)
				Float tmp22 = tmp21->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(242)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(242)
				::flixel::_system::debug::Console tmp24 = this->console;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(242)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(242)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(242)
				Float tmp27 = ((Float)3.);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(242)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(242)
				tmp18->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp28);
				HX_STACK_LINE(243)
				::flixel::_system::debug::Watch tmp29 = this->watch;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(243)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(243)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(243)
				int tmp32 = (int)6;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(243)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(243)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(243)
				::openfl::_legacy::geom::Point tmp35 = this->_screen;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(243)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(243)
				Float tmp37 = (Float(tmp36) / Float((int)4));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(243)
				tmp29->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp34,tmp37);
				HX_STACK_LINE(244)
				::flixel::_system::debug::Watch tmp38 = this->watch;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(244)
				::openfl::_legacy::geom::Point tmp39 = this->_screen;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(244)
				Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(244)
				::openfl::_legacy::geom::Point tmp41 = this->_screen;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(244)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(244)
				::flixel::_system::debug::Watch tmp43 = this->watch;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(244)
				Float tmp44 = tmp43->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(244)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(244)
				::flixel::_system::debug::Console tmp46 = this->console;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(244)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(244)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(244)
				Float tmp49 = ((Float)3.);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(244)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(244)
				tmp38->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp40,tmp50);
				HX_STACK_LINE(245)
				::flixel::_system::debug::Stats tmp51 = this->stats;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(245)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(245)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(245)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp53,(int)0);
				HX_STACK_LINE(246)
				::flixel::_system::debug::BitmapLog tmp54 = this->bitmapLog;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(246)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(246)
				Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(246)
				int tmp57 = (int)6;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(246)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(246)
				Float tmp59 = (Float(tmp58) / Float((int)2));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(246)
				::openfl::_legacy::geom::Point tmp60 = this->_screen;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(246)
				Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(246)
				Float tmp62 = (Float(tmp61) / Float((int)4));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(246)
				tmp54->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp59,tmp62);
				HX_STACK_LINE(247)
				::flixel::_system::debug::BitmapLog tmp63 = this->bitmapLog;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(247)
				::flixel::_system::debug::Log tmp64 = this->log;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(247)
				Float tmp65 = tmp64->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(247)
				Float tmp66 = (tmp65 - (int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(247)
				::flixel::_system::debug::BitmapLog tmp67 = this->bitmapLog;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(247)
				Float tmp68 = tmp67->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(247)
				Float tmp69 = (tmp66 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(247)
				tmp63->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp69);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::onResize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onResize",0x5bb7a236,"flixel.system.debug.FlxDebugger.onResize","flixel/system/debug/FlxDebugger.hx",252,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(253)
		::openfl::_legacy::geom::Point tmp = this->_screen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		tmp->x = Width;
		HX_STACK_LINE(254)
		::openfl::_legacy::geom::Point tmp1 = this->_screen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		tmp1->y = Height;
		HX_STACK_LINE(256)
		this->updateBounds();
		HX_STACK_LINE(257)
		::openfl::_legacy::display::Sprite tmp2 = this->_topBar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		tmp2->set_width(tmp5);
		HX_STACK_LINE(258)
		this->resetButtonLayout();
		HX_STACK_LINE(259)
		this->resetLayout();
		HX_STACK_LINE(260)
		::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		Float tmp7 = tmp6->get_scaleX();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		Float tmp8 = (Float((int)1) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		this->set_scaleX(tmp8);
		HX_STACK_LINE(261)
		::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(261)
		Float tmp10 = tmp9->get_scaleY();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(261)
		Float tmp11 = (Float((int)1) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		this->set_scaleY(tmp11);
		HX_STACK_LINE(262)
		::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(262)
		Float tmp13 = tmp12->get_x();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(262)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(262)
		Float tmp15 = this->get_scaleX();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(262)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(262)
		this->set_x(tmp16);
		HX_STACK_LINE(263)
		::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(263)
		Float tmp18 = tmp17->get_y();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(263)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(263)
		Float tmp20 = this->get_scaleY();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(263)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(263)
		this->set_y(tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

Void FlxDebugger_obj::updateBounds( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","updateBounds",0x09101ca1,"flixel.system.debug.FlxDebugger.updateBounds","flixel/system/debug/FlxDebugger.hx",267,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		Float tmp = ((Float)1.);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(268)
		Float tmp1 = ((int)20 + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(268)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		::openfl::_legacy::geom::Point tmp6 = this->_screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(268)
		int tmp8 = (int)4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(268)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(268)
		Float tmp10 = (tmp9 - (int)20);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(268)
		::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)2,tmp1,tmp5,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(268)
		this->_screenBounds = tmp11;
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(269)
			Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(269)
			while((true)){
				HX_STACK_LINE(269)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(269)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(269)
				if ((tmp13)){
					HX_STACK_LINE(269)
					break;
				}
				HX_STACK_LINE(269)
				::flixel::_system::debug::Window tmp14 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(269)
				::flixel::_system::debug::Window window = tmp14;		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(269)
				++(_g);
				HX_STACK_LINE(271)
				::openfl::_legacy::geom::Rectangle tmp15 = this->_screenBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(271)
				window->__Field(HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"), hx::paccDynamic )(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,updateBounds,(void))

Float FlxDebugger_obj::hAlignButtons( Array< ::Dynamic > Sprites,hx::Null< Float >  __o_Padding,hx::Null< bool >  __o_Set,hx::Null< Float >  __o_LeftOffset){
Float Padding = __o_Padding.Default(0);
bool Set = __o_Set.Default(true);
Float LeftOffset = __o_LeftOffset.Default(0);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","hAlignButtons",0x74a569e1,"flixel.system.debug.FlxDebugger.hAlignButtons","flixel/system/debug/FlxDebugger.hx",279,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprites,"Sprites")
	HX_STACK_ARG(Padding,"Padding")
	HX_STACK_ARG(Set,"Set")
	HX_STACK_ARG(LeftOffset,"LeftOffset")
{
		HX_STACK_LINE(280)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(281)
		Float last = LeftOffset;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(283)
			int _g = Sprites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(283)
			while((true)){
				HX_STACK_LINE(283)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(283)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(283)
				if ((tmp1)){
					HX_STACK_LINE(283)
					break;
				}
				HX_STACK_LINE(283)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(285)
				::flixel::_system::ui::FlxSystemButton tmp3 = Sprites->__get(i).StaticCast< ::flixel::_system::ui::FlxSystemButton >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				::openfl::_legacy::display::Sprite o = tmp3;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(286)
				Float tmp4 = o->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				Float tmp5 = Padding;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				hx::AddEq(width,tmp6);
				HX_STACK_LINE(287)
				bool tmp7 = Set;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				if ((tmp7)){
					HX_STACK_LINE(288)
					Float tmp8 = last;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(288)
					o->set_x(tmp8);
				}
				HX_STACK_LINE(290)
				Float tmp8 = o->get_x();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(290)
				Float tmp9 = o->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(290)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(290)
				Float tmp11 = Padding;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(290)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(290)
				last = tmp12;
			}
		}
		HX_STACK_LINE(293)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignButtons,return )

Void FlxDebugger_obj::resetButtonLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetButtonLayout",0x30f7f488,"flixel.system.debug.FlxDebugger.resetButtonLayout","flixel/system/debug/FlxDebugger.hx",300,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		this->hAlignButtons(this->_leftButtons,(int)10,true,(int)10);
		HX_STACK_LINE(303)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		Float tmp4 = this->hAlignButtons(this->_middleButtons,(int)10,false,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		Float tmp5 = (tmp4 * ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		Float offset = tmp6;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(304)
		Float tmp7 = offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(304)
		this->hAlignButtons(this->_middleButtons,(int)10,true,tmp7);
		HX_STACK_LINE(306)
		::openfl::_legacy::display::MovieClip tmp8 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(306)
		::openfl::_legacy::display::Stage tmp9 = tmp8->get_stage();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		int tmp10 = tmp9->get_stageWidth();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(306)
		Float tmp11 = this->hAlignButtons(this->_rightButtons,(int)10,false,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(306)
		Float offset1 = tmp12;		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(307)
		Float tmp13 = offset1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(307)
		this->hAlignButtons(this->_rightButtons,(int)10,true,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

::flixel::_system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::_system::debug::ButtonAlignment Position,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(false);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addButton",0x3bdccfd0,"flixel.system.debug.FlxDebugger.addButton","flixel/system/debug/FlxDebugger.hx",321,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Position,"Position")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(322)
		::flixel::_system::ui::FlxSystemButton tmp = ::flixel::_system::ui::FlxSystemButton_obj::__new(Icon,UpHandler,ToggleMode);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::flixel::_system::ui::FlxSystemButton button = tmp;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(324)
		Array< ::Dynamic > array;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(325)
		switch( (int)(Position->__Index())){
			case (int)0: {
				HX_STACK_LINE(328)
				array = this->_leftButtons;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(330)
				array = this->_middleButtons;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(332)
				array = this->_rightButtons;
			}
			;break;
		}
		HX_STACK_LINE(335)
		Float tmp1 = ((Float)10.);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		Float tmp2 = button->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		button->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(336)
		::flixel::_system::ui::FlxSystemButton tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		array->push(tmp5);
		HX_STACK_LINE(337)
		::flixel::_system::ui::FlxSystemButton tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		this->addChild(tmp6);
		HX_STACK_LINE(339)
		bool tmp7 = UpdateLayout;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(339)
		if ((tmp7)){
			HX_STACK_LINE(341)
			this->resetButtonLayout();
		}
		HX_STACK_LINE(344)
		::flixel::_system::ui::FlxSystemButton tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

Void FlxDebugger_obj::removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButton",0xec3cec99,"flixel.system.debug.FlxDebugger.removeButton","flixel/system/debug/FlxDebugger.hx",354,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(355)
		::flixel::_system::ui::FlxSystemButton tmp = Button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		this->removeChild(tmp);
		HX_STACK_LINE(356)
		Button->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(357)
		::flixel::_system::ui::FlxSystemButton tmp1 = Button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		this->removeButtonFromArray(this->_leftButtons,tmp1);
		HX_STACK_LINE(358)
		::flixel::_system::ui::FlxSystemButton tmp2 = Button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		this->removeButtonFromArray(this->_middleButtons,tmp2);
		HX_STACK_LINE(359)
		::flixel::_system::ui::FlxSystemButton tmp3 = Button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		this->removeButtonFromArray(this->_rightButtons,tmp3);
		HX_STACK_LINE(361)
		bool tmp4 = UpdateLayout;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		if ((tmp4)){
			HX_STACK_LINE(363)
			this->resetButtonLayout();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButton,(void))

Void FlxDebugger_obj::addWindowToggleButton( ::flixel::_system::debug::Window window,::hx::Class icon){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindowToggleButton",0x07784794,"flixel.system.debug.FlxDebugger.addWindowToggleButton","flixel/system/debug/FlxDebugger.hx",368,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(icon,"icon")
		HX_STACK_LINE(369)
		::hx::Class tmp = icon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		::openfl::_legacy::display::BitmapData tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(369)
		Dynamic tmp2 = window->__Field(HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(369)
		::flixel::_system::ui::FlxSystemButton tmp3 = this->addButton(::flixel::_system::debug::ButtonAlignment_obj::RIGHT,tmp1,tmp2,true,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		::flixel::_system::ui::FlxSystemButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(370)
		window->__FieldRef(HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f")) = button;
		HX_STACK_LINE(371)
		bool tmp4 = window->__Field(HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(371)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(371)
		button->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,addWindowToggleButton,(void))

::flixel::_system::debug::Window FlxDebugger_obj::addWindow( ::flixel::_system::debug::Window window){
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindow",0xb48901ce,"flixel.system.debug.FlxDebugger.addWindow","flixel/system/debug/FlxDebugger.hx",375,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(376)
	::flixel::_system::debug::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(377)
	::flixel::_system::debug::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	this->addChild(tmp1);
	HX_STACK_LINE(378)
	::openfl::_legacy::geom::Rectangle tmp2 = this->_screenBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(378)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(378)
	if ((tmp3)){
		HX_STACK_LINE(380)
		this->updateBounds();
		HX_STACK_LINE(381)
		window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
	}
	HX_STACK_LINE(383)
	::flixel::_system::debug::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(383)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,addWindow,return )

Void FlxDebugger_obj::removeWindow( ::flixel::_system::debug::Window window){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeWindow",0x64e91e97,"flixel.system.debug.FlxDebugger.removeWindow","flixel/system/debug/FlxDebugger.hx",387,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(388)
		::flixel::_system::debug::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		if ((tmp1)){
			HX_STACK_LINE(390)
			::flixel::_system::debug::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			Array< ::Dynamic > array = this->_windows;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(392)
			::flixel::_system::debug::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(392)
			int tmp3 = array->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(392)
			int index = tmp3;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(392)
			bool tmp4 = (index != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			if ((tmp4)){
				HX_STACK_LINE(392)
				int tmp5 = (array->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(392)
				::flixel::_system::debug::Window tmp6 = array->__get(tmp5).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(392)
				array[index] = tmp6;
				HX_STACK_LINE(392)
				array->pop().StaticCast< ::flixel::_system::debug::Window >();
				HX_STACK_LINE(392)
				array;
			}
			else{
				HX_STACK_LINE(392)
				array;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,removeWindow,(void))

Void FlxDebugger_obj::onMouseOver( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOver",0x134e1717,"flixel.system.debug.FlxDebugger.onMouseOver","flixel/system/debug/FlxDebugger.hx",469,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(470)
		this->hasMouse = true;
		HX_STACK_LINE(472)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(472)
		tmp->set_useSystemCursor(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::onMouseOut( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOut",0x752e442b,"flixel.system.debug.FlxDebugger.onMouseOut","flixel/system/debug/FlxDebugger.hx",480,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(481)
		this->hasMouse = false;
		HX_STACK_LINE(484)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(486)
			::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(486)
			tmp3->set_useSystemCursor(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::removeButtonFromArray( Array< ::Dynamic > Arr,::flixel::_system::ui::FlxSystemButton Button){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButtonFromArray",0xbb326ff6,"flixel.system.debug.FlxDebugger.removeButtonFromArray","flixel/system/debug/FlxDebugger.hx",492,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Arr,"Arr")
		HX_STACK_ARG(Button,"Button")
		HX_STACK_LINE(493)
		::flixel::_system::ui::FlxSystemButton tmp = Button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(493)
		int tmp1 = Arr->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(494)
		bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(494)
		if ((tmp2)){
			HX_STACK_LINE(496)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			Arr->splice(tmp3,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButtonFromArray,(void))

Void FlxDebugger_obj::toggleDrawDebug( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","toggleDrawDebug",0x1fb0d218,"flixel.system.debug.FlxDebugger.toggleDrawDebug","flixel/system/debug/FlxDebugger.hx",502,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(502)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		::flixel::_system::frontEnds::DebuggerFrontEnd _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(502)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp1 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		bool tmp2 = tmp1->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		bool Value = tmp3;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(502)
		bool tmp4 = (Value != _this->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(502)
		if ((tmp4)){
			HX_STACK_LINE(502)
			_this->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		}
		HX_STACK_LINE(502)
		_this->__FieldRef(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f")) = Value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleDrawDebug,(void))

Void FlxDebugger_obj::openHomepage( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openHomepage",0x2c4a291b,"flixel.system.debug.FlxDebugger.openHomepage","flixel/system/debug/FlxDebugger.hx",507,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(507)
		::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(507)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^https?://","\x48","\xee","\xdd","\x38"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(507)
		bool tmp1 = tmp->match(HX_HCSTRING("http://www.haxeflixel.com","\xde","\xbc","\x02","\xe0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(507)
		if ((tmp2)){
			HX_STACK_LINE(507)
			prefix = HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a");
		}
		HX_STACK_LINE(507)
		::String tmp3 = (prefix + HX_HCSTRING("http://www.haxeflixel.com","\xde","\xbc","\x02","\xe0"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		::openfl::_legacy::net::URLRequest tmp4 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		::openfl::_legacy::Lib_obj::getURL(tmp4,HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

int FlxDebugger_obj::GUTTER;

int FlxDebugger_obj::TOP_HEIGHT;


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_MARK_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_MARK_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_windows,"_windows");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_middleButtons,"_middleButtons");
	HX_VISIT_MEMBER_NAME(_leftButtons,"_leftButtons");
	HX_VISIT_MEMBER_NAME(_rightButtons,"_rightButtons");
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_windows,"_windows");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return _topBar; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		if (HX_FIELD_EQ(inName,"_windows") ) { return _windows; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { return _leftButtons; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return openHomepage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return _screenBounds; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { return _rightButtons; }
		if (HX_FIELD_EQ(inName,"hAlignButtons") ) { return hAlignButtons_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { return _middleButtons; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleDrawDebug") ) { return toggleDrawDebug_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return resetButtonLayout_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addWindowToggleButton") ) { return addWindowToggleButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButtonFromArray") ) { return removeButtonFromArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::_system::debug::Log >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::_system::debug::VCR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::flixel::_system::debug::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::_system::debug::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::_system::debug::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::flixel::_system::debug::DebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_windows") ) { _windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::_system::debug::BitmapLog >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_leftButtons") ) { _leftButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightButtons") ) { _rightButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middleButtons") ) { _middleButtons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDebugger_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"));
	outFields->push(HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"));
	outFields->push(HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"));
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	outFields->push(HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98"));
	outFields->push(HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"));
	outFields->push(HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5"));
	outFields->push(HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25"));
	outFields->push(HX_HCSTRING("_middleButtons","\xad","\xdb","\x49","\x83"));
	outFields->push(HX_HCSTRING("_leftButtons","\xfb","\x3e","\x12","\x30"));
	outFields->push(HX_HCSTRING("_rightButtons","\xa4","\x74","\x92","\x97"));
	outFields->push(HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03"));
	outFields->push(HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::Stats*/ ,(int)offsetof(FlxDebugger_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{hx::fsObject /*::flixel::_system::debug::Log*/ ,(int)offsetof(FlxDebugger_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsObject /*::flixel::_system::debug::Watch*/ ,(int)offsetof(FlxDebugger_obj,watch),HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5")},
	{hx::fsObject /*::flixel::_system::debug::BitmapLog*/ ,(int)offsetof(FlxDebugger_obj,bitmapLog),HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6")},
	{hx::fsObject /*::flixel::_system::debug::VCR*/ ,(int)offsetof(FlxDebugger_obj,vcr),HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00")},
	{hx::fsObject /*::flixel::_system::debug::Console*/ ,(int)offsetof(FlxDebugger_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,hasMouse),HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98")},
	{hx::fsObject /*::flixel::_system::debug::DebuggerLayout*/ ,(int)offsetof(FlxDebugger_obj,_layout),HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxDebugger_obj,_screen),HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxDebugger_obj,_screenBounds),HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_middleButtons),HX_HCSTRING("_middleButtons","\xad","\xdb","\x49","\x83")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_leftButtons),HX_HCSTRING("_leftButtons","\xfb","\x3e","\x12","\x30")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_rightButtons),HX_HCSTRING("_rightButtons","\xa4","\x74","\x92","\x97")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxDebugger_obj,_topBar),HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_windows),HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxDebugger_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsInt,(void *) &FlxDebugger_obj::TOP_HEIGHT,HX_HCSTRING("TOP_HEIGHT","\xb1","\x2b","\xf8","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"),
	HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98"),
	HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"),
	HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5"),
	HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25"),
	HX_HCSTRING("_middleButtons","\xad","\xdb","\x49","\x83"),
	HX_HCSTRING("_leftButtons","\xfb","\x3e","\x12","\x30"),
	HX_HCSTRING("_rightButtons","\xa4","\x74","\x92","\x97"),
	HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03"),
	HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setLayout","\xec","\x23","\x60","\xb8"),
	HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"),
	HX_HCSTRING("hAlignButtons","\x84","\xfe","\xc2","\x4e"),
	HX_HCSTRING("resetButtonLayout","\xab","\x16","\xc0","\x05"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("addWindowToggleButton","\x37","\xb7","\xff","\xa6"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18"),
	HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81"),
	HX_HCSTRING("removeButtonFromArray","\x99","\xdf","\xb9","\x5a"),
	HX_HCSTRING("toggleDrawDebug","\x7b","\x15","\xd7","\xeb"),
	HX_HCSTRING("openHomepage","\xd8","\x39","\x1b","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#endif

hx::Class FlxDebugger_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("TOP_HEIGHT","\xb1","\x2b","\xf8","\x33"),
	::String(null()) };

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.FlxDebugger","\x0b","\x53","\xa2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxDebugger_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDebugger_obj >;
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

void FlxDebugger_obj::__boot()
{
	GUTTER= (int)2;
	TOP_HEIGHT= (int)20;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
