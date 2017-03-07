#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_StatsGraph
#include <flixel/system/debug/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Stats_GraphicMaximizeButton
#include <flixel/system/debug/_Stats/GraphicMaximizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Stats_GraphicMinimizeButton
#include <flixel/system/debug/_Stats/GraphicMinimizeButton.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void Stats_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.Stats","new",0x4140b8e9,"flixel.system.debug.Stats.new","flixel/system/debug/Stats.hx",28,0xa5a2e9c8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(94)
	this->_drawCallsMarker = (int)0;
	HX_STACK_LINE(92)
	this->drawCallsCount = (int)0;
	HX_STACK_LINE(87)
	this->_paused = true;
	HX_STACK_LINE(85)
	this->_activeObjectMarker = (int)0;
	HX_STACK_LINE(82)
	this->_visibleObjectMarker = (int)0;
	HX_STACK_LINE(79)
	this->_drawMarker = (int)0;
	HX_STACK_LINE(76)
	this->_updateMarker = (int)0;
	HX_STACK_LINE(73)
	this->_updateTimer = (int)0;
	HX_STACK_LINE(72)
	this->_lastTime = (int)0;
	HX_STACK_LINE(70)
	this->drawTime = (int)0;
	HX_STACK_LINE(69)
	this->updateTime = (int)0;
	HX_STACK_LINE(68)
	this->activeCount = (int)0;
	HX_STACK_LINE(67)
	this->visibleCount = (int)0;
	HX_STACK_LINE(66)
	this->flashPlayerFramerate = ((Float)0);
	HX_STACK_LINE(55)
	this->_itvTime = (int)0;
	HX_STACK_LINE(102)
	::flixel::_system::debug::GraphicStats tmp = ::flixel::_system::debug::GraphicStats_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	super::__construct(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),tmp,(int)0,(int)0,false,null(),null());
	HX_STACK_LINE(104)
	::openfl::_legacy::geom::Point tmp1 = this->minSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	tmp1->y = (int)195;
	HX_STACK_LINE(105)
	this->resize((int)160,(int)195);
	HX_STACK_LINE(107)
	this->start();
	HX_STACK_LINE(109)
	this->_update = Array_obj< int >::__new();
	HX_STACK_LINE(110)
	this->_draw = Array_obj< int >::__new();
	HX_STACK_LINE(111)
	this->_activeObject = Array_obj< int >::__new();
	HX_STACK_LINE(112)
	this->_visibleObject = Array_obj< int >::__new();
	HX_STACK_LINE(115)
	this->_drawCalls = Array_obj< int >::__new();
	HX_STACK_LINE(118)
	int gutter = (int)5;		HX_STACK_VAR(gutter,"gutter");
	HX_STACK_LINE(119)
	int graphX = gutter;		HX_STACK_VAR(graphX,"graphX");
	HX_STACK_LINE(120)
	::openfl::_legacy::display::Bitmap tmp2 = this->_header;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	int tmp5 = gutter;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	int graphY = tmp6;		HX_STACK_VAR(graphY,"graphY");
	HX_STACK_LINE(121)
	int graphHeight = (int)40;		HX_STACK_VAR(graphHeight,"graphHeight");
	HX_STACK_LINE(122)
	int tmp7 = (int)140;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	int graphWidth = tmp7;		HX_STACK_VAR(graphWidth,"graphWidth");
	HX_STACK_LINE(124)
	::flixel::_system::debug::StatsGraph tmp8 = ::flixel::_system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-6881536,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(124)
	this->fpsGraph = tmp8;
	HX_STACK_LINE(125)
	::flixel::_system::debug::StatsGraph tmp9 = this->fpsGraph;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(125)
	this->addChild(tmp9);
	HX_STACK_LINE(126)
	int tmp10 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(126)
	::flixel::_system::debug::StatsGraph tmp11 = this->fpsGraph;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(126)
	tmp11->__FieldRef(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")) = tmp10;
	HX_STACK_LINE(127)
	::flixel::_system::debug::StatsGraph tmp12 = this->fpsGraph;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	tmp12->__FieldRef(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")) = (int)0;
	HX_STACK_LINE(129)
	::openfl::_legacy::display::Bitmap tmp13 = this->_header;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(129)
	Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(129)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(129)
	int tmp16 = graphHeight;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(129)
	int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(129)
	int tmp18 = (tmp17 + (int)20);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(129)
	graphY = tmp18;
	HX_STACK_LINE(131)
	::flixel::_system::debug::StatsGraph tmp19 = ::flixel::_system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-16737025,HX_HCSTRING("MB","\x55","\x43","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(131)
	this->memoryGraph = tmp19;
	HX_STACK_LINE(132)
	::flixel::_system::debug::StatsGraph tmp20 = this->memoryGraph;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(132)
	this->addChild(tmp20);
	HX_STACK_LINE(134)
	::openfl::_legacy::display::Bitmap tmp21 = this->_header;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(134)
	Float tmp22 = tmp21->get_height();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(134)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(134)
	int tmp24 = gutter;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(134)
	int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(134)
	graphY = tmp25;
	HX_STACK_LINE(135)
	int tmp26 = (gutter + graphWidth);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(135)
	int tmp27 = (tmp26 + (int)20);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(135)
	hx::AddEq(graphX,tmp27);
	HX_STACK_LINE(136)
	hx::SubEq(graphWidth,(int)10);
	HX_STACK_LINE(138)
	::flixel::_system::debug::StatsGraph tmp28 = ::flixel::_system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-2305024,HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"),(int)35,HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(138)
	this->updateTimeGraph = tmp28;
	HX_STACK_LINE(139)
	::flixel::_system::debug::StatsGraph tmp29 = this->updateTimeGraph;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(139)
	tmp29->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	HX_STACK_LINE(140)
	::flixel::_system::debug::StatsGraph tmp30 = this->updateTimeGraph;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(140)
	this->addChild(tmp30);
	HX_STACK_LINE(142)
	::openfl::_legacy::display::Bitmap tmp31 = this->_header;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(142)
	Float tmp32 = tmp31->get_height();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(142)
	int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(142)
	int tmp34 = graphHeight;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(142)
	int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(142)
	int tmp36 = (tmp35 + (int)20);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(142)
	graphY = tmp36;
	HX_STACK_LINE(144)
	::flixel::_system::debug::StatsGraph tmp37 = ::flixel::_system::debug::StatsGraph_obj::__new(graphX,graphY,graphWidth,graphHeight,(int)-4784128,HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"),(int)35,HX_HCSTRING("Draw","\x24","\x58","\x49","\x2d"));		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(144)
	this->drawTimeGraph = tmp37;
	HX_STACK_LINE(145)
	::flixel::_system::debug::StatsGraph tmp38 = this->drawTimeGraph;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(145)
	tmp38->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
	HX_STACK_LINE(146)
	::flixel::_system::debug::StatsGraph tmp39 = this->drawTimeGraph;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(146)
	this->addChild(tmp39);
	HX_STACK_LINE(148)
	int tmp40 = gutter;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(148)
	int tmp41 = (graphHeight * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(148)
	int tmp42 = (tmp41 + (int)45);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(148)
	::openfl::_legacy::text::TextField tmp43 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp40,tmp42,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(148)
	::openfl::_legacy::text::TextField tmp44 = this->_leftTextField = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(148)
	this->addChild(tmp44);
	HX_STACK_LINE(149)
	int tmp45 = (gutter + (int)70);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(149)
	int tmp46 = (graphHeight * (int)2);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(149)
	int tmp47 = (tmp46 + (int)45);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(149)
	::openfl::_legacy::text::TextField tmp48 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp45,tmp47,(int)-1,(int)11);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(149)
	::openfl::_legacy::text::TextField tmp49 = this->_rightTextField = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(149)
	this->addChild(tmp49);
	HX_STACK_LINE(151)
	::openfl::_legacy::text::TextField tmp50 = this->_leftTextField;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(151)
	::openfl::_legacy::text::TextField tmp51 = this->_rightTextField;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(151)
	bool tmp52 = tmp51->set_multiline(true);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(151)
	tmp50->set_multiline(tmp52);
	HX_STACK_LINE(152)
	::openfl::_legacy::text::TextField tmp53 = this->_leftTextField;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(152)
	::openfl::_legacy::text::TextField tmp54 = this->_rightTextField;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(152)
	bool tmp55 = tmp54->set_wordWrap(true);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(152)
	tmp53->set_wordWrap(tmp55);
	HX_STACK_LINE(154)
	::openfl::_legacy::text::TextField tmp56 = this->_leftTextField;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(154)
	::String tmp57 = HX_HCSTRING("Update: \nDraw:\nDrawTiles:","\x28","\xa5","\x8e","\x7b");		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(154)
	::String tmp58 = (tmp57 + HX_HCSTRING("\nQuadTrees: \nLists:","\xe5","\xf7","\xd0","\x58"));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(154)
	tmp56->set_text(tmp58);
	HX_STACK_LINE(156)
	::flixel::_system::debug::_Stats::GraphicMaximizeButton tmp59 = ::flixel::_system::debug::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(156)
	Dynamic tmp60 = this->toggleSize_dyn();		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(156)
	::flixel::_system::ui::FlxSystemButton tmp61 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp59,tmp60,null());		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(156)
	this->_toggleSizeButton = tmp61;
	HX_STACK_LINE(157)
	::flixel::_system::ui::FlxSystemButton tmp62 = this->_toggleSizeButton;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(157)
	tmp62->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.8));
	HX_STACK_LINE(158)
	::flixel::_system::ui::FlxSystemButton tmp63 = this->_toggleSizeButton;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(158)
	this->addChild(tmp63);
	HX_STACK_LINE(160)
	this->updateSize();
}
;
	return null();
}

//Stats_obj::~Stats_obj() { }

Dynamic Stats_obj::__CreateEmpty() { return  new Stats_obj; }
hx::ObjectPtr< Stats_obj > Stats_obj::__new()
{  hx::ObjectPtr< Stats_obj > _result_ = new Stats_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stats_obj > _result_ = new Stats_obj();
	_result_->__construct();
	return _result_;}

Void Stats_obj::start( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","start",0x886a512b,"flixel.system.debug.Stats.start","flixel/system/debug/Stats.hx",167,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		if ((tmp)){
			HX_STACK_LINE(170)
			this->_paused = false;
			HX_STACK_LINE(171)
			::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			int tmp2 = this->_itvTime = tmp1->ticks;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(171)
			this->_initTime = tmp2;
			HX_STACK_LINE(172)
			int tmp3 = this->_frameCount = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			this->_totalCount = tmp3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,start,(void))

Void Stats_obj::stop( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","stop",0xdaba7f59,"flixel.system.debug.Stats.stop","flixel/system/debug/Stats.hx",181,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,stop,(void))

Void Stats_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","destroy",0x23ec8e03,"flixel.system.debug.Stats.destroy","flixel/system/debug/Stats.hx",188,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::flixel::_system::debug::StatsGraph tmp = this->fpsGraph;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		if ((tmp1)){
			HX_STACK_LINE(191)
			::flixel::_system::debug::StatsGraph tmp2 = this->fpsGraph;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			tmp2->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(192)
			::flixel::_system::debug::StatsGraph tmp3 = this->fpsGraph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			this->removeChild(tmp3);
		}
		HX_STACK_LINE(194)
		this->fpsGraph = null();
		HX_STACK_LINE(196)
		::flixel::_system::debug::StatsGraph tmp2 = this->memoryGraph;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		if ((tmp3)){
			HX_STACK_LINE(198)
			::flixel::_system::debug::StatsGraph tmp4 = this->memoryGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			this->removeChild(tmp4);
		}
		HX_STACK_LINE(200)
		this->memoryGraph = null();
		HX_STACK_LINE(202)
		::openfl::_legacy::text::TextField tmp4 = this->_leftTextField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		if ((tmp5)){
			HX_STACK_LINE(204)
			::openfl::_legacy::text::TextField tmp6 = this->_leftTextField;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			this->removeChild(tmp6);
		}
		HX_STACK_LINE(206)
		this->_leftTextField = null();
		HX_STACK_LINE(208)
		::openfl::_legacy::text::TextField tmp6 = this->_rightTextField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		if ((tmp7)){
			HX_STACK_LINE(210)
			::openfl::_legacy::text::TextField tmp8 = this->_rightTextField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			this->removeChild(tmp8);
		}
		HX_STACK_LINE(212)
		this->_rightTextField = null();
		HX_STACK_LINE(214)
		this->_update = null();
		HX_STACK_LINE(215)
		this->_draw = null();
		HX_STACK_LINE(216)
		this->_activeObject = null();
		HX_STACK_LINE(217)
		this->_visibleObject = null();
		HX_STACK_LINE(220)
		this->_drawCalls = null();
		HX_STACK_LINE(223)
		this->super::destroy();
	}
return null();
}


Void Stats_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","update",0x55a7d920,"flixel.system.debug.Stats.update","flixel/system/debug/Stats.hx",231,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		if ((tmp)){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(236)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		int tmp2 = this->_currentTime = tmp1->ticks;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		int time = tmp2;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(238)
		int tmp3 = time;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		int tmp4 = this->_lastTime;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		int tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		int elapsed = tmp5;		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(240)
		bool tmp6 = (elapsed > (int)250);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		if ((tmp6)){
			HX_STACK_LINE(242)
			elapsed = (int)250;
		}
		HX_STACK_LINE(244)
		this->_lastTime = time;
		HX_STACK_LINE(246)
		hx::AddEq(this->_updateTimer,elapsed);
		HX_STACK_LINE(248)
		(this->_frameCount)++;
		HX_STACK_LINE(249)
		(this->_totalCount)++;
		HX_STACK_LINE(251)
		int tmp7 = this->_updateTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		bool tmp8 = (tmp7 > (int)250);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		if ((tmp8)){
			HX_STACK_LINE(253)
			::flixel::_system::debug::StatsGraph tmp9 = this->fpsGraph;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(253)
			int tmp10 = this->_frameCount;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(253)
			int tmp11 = this->_currentTime;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(253)
			int tmp12 = this->_itvTime;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(253)
			int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(253)
			Float tmp14 = (Float(tmp13) / Float((int)1000));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(253)
			Float tmp15 = (Float(tmp10) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(253)
			int tmp16 = this->_totalCount;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(253)
			int tmp17 = this->_currentTime;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(253)
			int tmp18 = this->_initTime;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(253)
			int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(253)
			Float tmp20 = (Float(tmp19) / Float((int)1000));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(253)
			Float tmp21 = (Float(tmp16) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(253)
			tmp9->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp15,tmp21);
			HX_STACK_LINE(254)
			::flixel::_system::debug::StatsGraph tmp22 = this->memoryGraph;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(254)
			int tmp23 = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(254)
			Float tmp24 = (Float(tmp23) / Float((int)1024));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(254)
			Float tmp25 = (Float(tmp24) / Float((int)1000));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(254)
			tmp22->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp25,null());
			HX_STACK_LINE(255)
			this->updateTexts();
			HX_STACK_LINE(257)
			this->_frameCount = (int)0;
			HX_STACK_LINE(258)
			int tmp26 = this->_currentTime;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(258)
			this->_itvTime = tmp26;
			HX_STACK_LINE(260)
			this->updateTime = (int)0;
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(261)
				int tmp27 = this->_updateMarker;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				int _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(261)
				while((true)){
					HX_STACK_LINE(261)
					bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(261)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(261)
					if ((tmp29)){
						HX_STACK_LINE(261)
						break;
					}
					HX_STACK_LINE(261)
					int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(261)
					int i = tmp30;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(263)
					int tmp31 = this->_update->__GetItem(i);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(263)
					hx::AddEq(this->updateTime,tmp31);
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(266)
				int tmp27 = this->_activeObjectMarker;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(266)
				int _g = tmp27;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(266)
				while((true)){
					HX_STACK_LINE(266)
					bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(266)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(266)
					if ((tmp29)){
						HX_STACK_LINE(266)
						break;
					}
					HX_STACK_LINE(266)
					int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(266)
					int i = tmp30;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(268)
					int tmp31 = this->_activeObject->__GetItem(i);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(268)
					hx::AddEq(this->activeCount,tmp31);
				}
			}
			HX_STACK_LINE(270)
			int tmp27 = this->activeCount;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(270)
			int tmp28 = this->_activeObjectMarker;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(270)
			Float tmp29 = (Float(tmp27) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(270)
			int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(270)
			this->activeCount = tmp30;
			HX_STACK_LINE(272)
			this->drawTime = (int)0;
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(273)
				int tmp31 = this->_drawMarker;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(273)
				int _g = tmp31;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(273)
				while((true)){
					HX_STACK_LINE(273)
					bool tmp32 = (_g1 < _g);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(273)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(273)
					if ((tmp33)){
						HX_STACK_LINE(273)
						break;
					}
					HX_STACK_LINE(273)
					int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(273)
					int i = tmp34;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(275)
					int tmp35 = this->_draw->__GetItem(i);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(275)
					hx::AddEq(this->drawTime,tmp35);
				}
			}
			HX_STACK_LINE(278)
			{
				HX_STACK_LINE(278)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(278)
				int tmp31 = this->_visibleObjectMarker;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(278)
				int _g = tmp31;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(278)
				while((true)){
					HX_STACK_LINE(278)
					bool tmp32 = (_g1 < _g);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(278)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(278)
					if ((tmp33)){
						HX_STACK_LINE(278)
						break;
					}
					HX_STACK_LINE(278)
					int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(278)
					int i = tmp34;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(280)
					int tmp35 = this->_visibleObject->__GetItem(i);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(280)
					hx::AddEq(this->visibleCount,tmp35);
				}
			}
			HX_STACK_LINE(282)
			int tmp31 = this->visibleCount;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(282)
			int tmp32 = this->_visibleObjectMarker;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(282)
			Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(282)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(282)
			this->visibleCount = tmp34;
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(285)
				int tmp35 = this->_drawCallsMarker;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(285)
				int _g = tmp35;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(285)
				while((true)){
					HX_STACK_LINE(285)
					bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(285)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(285)
					if ((tmp37)){
						HX_STACK_LINE(285)
						break;
					}
					HX_STACK_LINE(285)
					int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(285)
					int i = tmp38;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(287)
					int tmp39 = this->_drawCalls->__GetItem(i);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(287)
					hx::AddEq(this->drawCallsCount,tmp39);
				}
			}
			HX_STACK_LINE(289)
			int tmp35 = this->drawCallsCount;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(289)
			int tmp36 = this->_drawCallsMarker;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(289)
			Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(289)
			int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(289)
			this->drawCallsCount = tmp38;
			HX_STACK_LINE(292)
			this->_updateMarker = (int)0;
			HX_STACK_LINE(293)
			this->_drawMarker = (int)0;
			HX_STACK_LINE(294)
			this->_activeObjectMarker = (int)0;
			HX_STACK_LINE(295)
			this->_visibleObjectMarker = (int)0;
			HX_STACK_LINE(297)
			this->_drawCallsMarker = (int)0;
			HX_STACK_LINE(300)
			hx::SubEq(this->_updateTimer,(int)250);
		}
	}
return null();
}


Void Stats_obj::updateTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","updateTexts",0xaa77cde6,"flixel.system.debug.Stats.updateTexts","flixel/system/debug/Stats.hx",305,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		int tmp = this->updateTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		int tmp1 = this->_updateMarker;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		Float tmp3 = ::flixel::util::FlxMath_obj::roundDecimal(tmp2,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		Float updTime = tmp3;		HX_STACK_VAR(updTime,"updTime");
		HX_STACK_LINE(307)
		int tmp4 = this->drawTime;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		int tmp5 = this->_drawMarker;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(307)
		Float tmp7 = ::flixel::util::FlxMath_obj::roundDecimal(tmp6,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(307)
		Float drwTime = tmp7;		HX_STACK_VAR(drwTime,"drwTime");
		HX_STACK_LINE(309)
		::flixel::_system::debug::StatsGraph tmp8 = this->drawTimeGraph;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(309)
		Float tmp9 = drwTime;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(309)
		tmp8->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp9,null());
		HX_STACK_LINE(310)
		::flixel::_system::debug::StatsGraph tmp10 = this->updateTimeGraph;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(310)
		Float tmp11 = updTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(310)
		tmp10->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp11,null());
		HX_STACK_LINE(312)
		::openfl::_legacy::text::TextField tmp12 = this->_rightTextField;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		int tmp13 = this->activeCount;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		::String tmp14 = (tmp13 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		Float tmp15 = updTime;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(312)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(312)
		::String tmp17 = (tmp16 + HX_HCSTRING("ms)\n","\xa7","\xa8","\x63","\x48"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(313)
		int tmp18 = this->visibleCount;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(312)
		::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(312)
		::String tmp20 = (tmp19 + HX_HCSTRING(" (","\x08","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(313)
		Float tmp21 = drwTime;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(312)
		::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(312)
		::String tmp23 = (tmp22 + HX_HCSTRING("ms)\n","\xa7","\xa8","\x63","\x48"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(315)
		int tmp24 = this->drawCallsCount;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(312)
		::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(312)
		::String tmp26 = (tmp25 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(317)
		int tmp27 = ::flixel::_system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(312)
		::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(312)
		::String tmp29 = (tmp28 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(318)
		int tmp30 = ::flixel::_system::FlxList_obj::_NUM_CACHED_FLX_LIST;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(312)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(312)
		tmp12->set_text(tmp31);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,updateTexts,(void))

Float Stats_obj::currentFps( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","currentFps",0x0f27b7c7,"flixel.system.debug.Stats.currentFps","flixel/system/debug/Stats.hx",325,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(326)
	int tmp = this->_frameCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	int tmp1 = this->_currentTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	int tmp2 = this->_itvTime;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	Float tmp4 = (Float(tmp3) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	Float tmp5 = (Float(tmp) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(326)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentFps,return )

Float Stats_obj::averageFps( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","averageFps",0xceceb123,"flixel.system.debug.Stats.averageFps","flixel/system/debug/Stats.hx",333,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	int tmp = this->_totalCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	int tmp1 = this->_currentTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	int tmp2 = this->_initTime;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(334)
	Float tmp4 = (Float(tmp3) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(334)
	Float tmp5 = (Float(tmp) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(334)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,averageFps,return )

Float Stats_obj::runningTime( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","runningTime",0xc36deb35,"flixel.system.debug.Stats.runningTime","flixel/system/debug/Stats.hx",341,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(342)
	int tmp = this->_currentTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	int tmp1 = this->_initTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,runningTime,return )

Float Stats_obj::intervalTime( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","intervalTime",0x2b393649,"flixel.system.debug.Stats.intervalTime","flixel/system/debug/Stats.hx",349,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	int tmp = this->_currentTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	int tmp1 = this->_itvTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,intervalTime,return )

Float Stats_obj::currentMem( ){
	HX_STACK_FRAME("flixel.system.debug.Stats","currentMem",0x0f2cfdf3,"flixel.system.debug.Stats.currentMem","flixel/system/debug/Stats.hx",357,0xa5a2e9c8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	int tmp = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	Float tmp1 = (Float(tmp) / Float((int)1024));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	Float tmp2 = (Float(tmp1) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,currentMem,return )

Void Stats_obj::flixelUpdate( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","flixelUpdate",0xcd6ea7dc,"flixel.system.debug.Stats.flixelUpdate","flixel/system/debug/Stats.hx",367,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(368)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		if ((tmp)){
			HX_STACK_LINE(369)
			return null();
		}
		HX_STACK_LINE(370)
		int tmp1 = (this->_updateMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		int tmp2 = Time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		hx::IndexRef((this->_update).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelUpdate,(void))

Void Stats_obj::flixelDraw( int Time){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","flixelDraw",0x95df2317,"flixel.system.debug.Stats.flixelDraw","flixel/system/debug/Stats.hx",379,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Time,"Time")
		HX_STACK_LINE(380)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		if ((tmp)){
			HX_STACK_LINE(381)
			return null();
		}
		HX_STACK_LINE(382)
		int tmp1 = (this->_drawMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		int tmp2 = Time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		hx::IndexRef((this->_draw).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,flixelDraw,(void))

Void Stats_obj::activeObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","activeObjects",0xe23f0177,"flixel.system.debug.Stats.activeObjects","flixel/system/debug/Stats.hx",391,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(392)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		if ((tmp)){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(394)
		int tmp1 = (this->_activeObjectMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		int tmp2 = Count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		hx::IndexRef((this->_activeObject).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,activeObjects,(void))

Void Stats_obj::visibleObjects( int Count){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","visibleObjects",0xb04fac99,"flixel.system.debug.Stats.visibleObjects","flixel/system/debug/Stats.hx",403,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Count,"Count")
		HX_STACK_LINE(404)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		if ((tmp)){
			HX_STACK_LINE(405)
			return null();
		}
		HX_STACK_LINE(406)
		int tmp1 = (this->_visibleObjectMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		int tmp2 = Count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		hx::IndexRef((this->_visibleObject).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,visibleObjects,(void))

Void Stats_obj::drawCalls( int Drawcalls){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","drawCalls",0x77ae1cba,"flixel.system.debug.Stats.drawCalls","flixel/system/debug/Stats.hx",416,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Drawcalls,"Drawcalls")
		HX_STACK_LINE(417)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(417)
		if ((tmp)){
			HX_STACK_LINE(418)
			return null();
		}
		HX_STACK_LINE(419)
		int tmp1 = (this->_drawCallsMarker)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		int tmp2 = Drawcalls;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		hx::IndexRef((this->_drawCalls).mPtr,tmp1) = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stats_obj,drawCalls,(void))

Void Stats_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","onFocus",0x9a2d5f42,"flixel.system.debug.Stats.onFocus","flixel/system/debug/Stats.hx",428,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		this->_paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocus,(void))

Void Stats_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","onFocusLost",0xf8cbfe46,"flixel.system.debug.Stats.onFocusLost","flixel/system/debug/Stats.hx",436,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		this->_paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,onFocusLost,(void))

Void Stats_obj::toggleSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","toggleSize",0x2c09110c,"flixel.system.debug.Stats.toggleSize","flixel/system/debug/Stats.hx",440,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(441)
		int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		bool tmp1 = (tmp == (int)160);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		if ((tmp1)){
			HX_STACK_LINE(443)
			int tmp2 = (int)320;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(443)
			int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(443)
			this->resize(tmp2,tmp3);
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				::flixel::_system::debug::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(444)
				Float tmp4 = _g->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(444)
				Float tmp5 = (tmp4 - (int)160);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				_g->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp5);
			}
			HX_STACK_LINE(445)
			::flixel::_system::debug::StatsGraph tmp4 = this->drawTimeGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			tmp4->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
			HX_STACK_LINE(446)
			::flixel::_system::debug::StatsGraph tmp5 = this->updateTimeGraph;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
			HX_STACK_LINE(447)
			::flixel::_system::ui::FlxSystemButton tmp6 = this->_toggleSizeButton;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(447)
			::flixel::_system::debug::_Stats::GraphicMinimizeButton tmp7 = ::flixel::_system::debug::_Stats::GraphicMinimizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			tmp6->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp7);
		}
		else{
			HX_STACK_LINE(451)
			int tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			this->resize((int)160,tmp2);
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::flixel::_system::debug::Stats _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(452)
				Float tmp3 = _g->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(452)
				Float tmp4 = (tmp3 + (int)160);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				_g->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp4);
			}
			HX_STACK_LINE(453)
			::flixel::_system::debug::StatsGraph tmp3 = this->drawTimeGraph;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(453)
			tmp3->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
			HX_STACK_LINE(454)
			::flixel::_system::debug::StatsGraph tmp4 = this->updateTimeGraph;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(454)
			tmp4->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
			HX_STACK_LINE(455)
			::flixel::_system::ui::FlxSystemButton tmp5 = this->_toggleSizeButton;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(455)
			::flixel::_system::debug::_Stats::GraphicMaximizeButton tmp6 = ::flixel::_system::debug::_Stats::GraphicMaximizeButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(455)
			tmp5->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(458)
		this->updateSize();
		HX_STACK_LINE(459)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stats_obj,toggleSize,(void))

Void Stats_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Stats","updateSize",0x4d07b601,"flixel.system.debug.Stats.updateSize","flixel/system/debug/Stats.hx",463,0xa5a2e9c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(464)
		this->super::updateSize();
		HX_STACK_LINE(465)
		::flixel::_system::ui::FlxSystemButton tmp = this->_toggleSizeButton;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		if ((tmp1)){
			HX_STACK_LINE(467)
			::flixel::_system::ui::FlxSystemButton tmp2 = this->_toggleSizeButton;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(467)
			int tmp3 = this->_width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(467)
			::flixel::_system::ui::FlxSystemButton tmp4 = this->_toggleSizeButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			Float tmp5 = tmp4->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(467)
			Float tmp7 = (tmp6 - (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(467)
			tmp2->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp7);
			HX_STACK_LINE(468)
			::flixel::_system::ui::FlxSystemButton tmp8 = this->_toggleSizeButton;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(468)
			tmp8->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)3);
		}
	}
return null();
}


int Stats_obj::UPDATE_DELAY;

int Stats_obj::INITIAL_WIDTH;

int Stats_obj::MIN_HEIGHT;

int Stats_obj::FPS_COLOR;

int Stats_obj::MEMORY_COLOR;

int Stats_obj::DRAW_TIME_COLOR;

int Stats_obj::UPDATE_TIME_COLOR;

int Stats_obj::LABEL_COLOR;

int Stats_obj::TEXT_SIZE;

int Stats_obj::DECIMALS;


Stats_obj::Stats_obj()
{
}

void Stats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stats);
	HX_MARK_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_MARK_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_MARK_MEMBER_NAME(_itvTime,"_itvTime");
	HX_MARK_MEMBER_NAME(_initTime,"_initTime");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_totalCount,"_totalCount");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_MARK_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_MARK_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_MARK_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_MARK_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_MARK_MEMBER_NAME(visibleCount,"visibleCount");
	HX_MARK_MEMBER_NAME(activeCount,"activeCount");
	HX_MARK_MEMBER_NAME(updateTime,"updateTime");
	HX_MARK_MEMBER_NAME(drawTime,"drawTime");
	HX_MARK_MEMBER_NAME(_lastTime,"_lastTime");
	HX_MARK_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_MARK_MEMBER_NAME(_draw,"_draw");
	HX_MARK_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_MARK_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_MARK_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_MARK_MEMBER_NAME(_activeObject,"_activeObject");
	HX_MARK_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	HX_MARK_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_MARK_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_MARK_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stats_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_leftTextField,"_leftTextField");
	HX_VISIT_MEMBER_NAME(_rightTextField,"_rightTextField");
	HX_VISIT_MEMBER_NAME(_itvTime,"_itvTime");
	HX_VISIT_MEMBER_NAME(_initTime,"_initTime");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_totalCount,"_totalCount");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(fpsGraph,"fpsGraph");
	HX_VISIT_MEMBER_NAME(memoryGraph,"memoryGraph");
	HX_VISIT_MEMBER_NAME(drawTimeGraph,"drawTimeGraph");
	HX_VISIT_MEMBER_NAME(updateTimeGraph,"updateTimeGraph");
	HX_VISIT_MEMBER_NAME(flashPlayerFramerate,"flashPlayerFramerate");
	HX_VISIT_MEMBER_NAME(visibleCount,"visibleCount");
	HX_VISIT_MEMBER_NAME(activeCount,"activeCount");
	HX_VISIT_MEMBER_NAME(updateTime,"updateTime");
	HX_VISIT_MEMBER_NAME(drawTime,"drawTime");
	HX_VISIT_MEMBER_NAME(_lastTime,"_lastTime");
	HX_VISIT_MEMBER_NAME(_updateTimer,"_updateTimer");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_updateMarker,"_updateMarker");
	HX_VISIT_MEMBER_NAME(_draw,"_draw");
	HX_VISIT_MEMBER_NAME(_drawMarker,"_drawMarker");
	HX_VISIT_MEMBER_NAME(_visibleObject,"_visibleObject");
	HX_VISIT_MEMBER_NAME(_visibleObjectMarker,"_visibleObjectMarker");
	HX_VISIT_MEMBER_NAME(_activeObject,"_activeObject");
	HX_VISIT_MEMBER_NAME(_activeObjectMarker,"_activeObjectMarker");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_toggleSizeButton,"_toggleSizeButton");
	HX_VISIT_MEMBER_NAME(drawCallsCount,"drawCallsCount");
	HX_VISIT_MEMBER_NAME(_drawCalls,"_drawCalls");
	HX_VISIT_MEMBER_NAME(_drawCallsMarker,"_drawCallsMarker");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stats_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { return _itvTime; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { return fpsGraph; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { return drawTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initTime") ) { return _initTime; }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { return _lastTime; }
		if (HX_FIELD_EQ(inName,"drawCalls") ) { return drawCalls_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { return updateTime; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { return _drawCalls; }
		if (HX_FIELD_EQ(inName,"currentFps") ) { return currentFps_dyn(); }
		if (HX_FIELD_EQ(inName,"averageFps") ) { return averageFps_dyn(); }
		if (HX_FIELD_EQ(inName,"currentMem") ) { return currentMem_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelDraw") ) { return flixelDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleSize") ) { return toggleSize_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		if (HX_FIELD_EQ(inName,"_totalCount") ) { return _totalCount; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { return memoryGraph; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { return activeCount; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { return _drawMarker; }
		if (HX_FIELD_EQ(inName,"updateTexts") ) { return updateTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"runningTime") ) { return runningTime_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return _currentTime; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { return visibleCount; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { return _updateTimer; }
		if (HX_FIELD_EQ(inName,"intervalTime") ) { return intervalTime_dyn(); }
		if (HX_FIELD_EQ(inName,"flixelUpdate") ) { return flixelUpdate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { return drawTimeGraph; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { return _updateMarker; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { return _activeObject; }
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return activeObjects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { return _leftTextField; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { return _visibleObject; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { return drawCallsCount; }
		if (HX_FIELD_EQ(inName,"visibleObjects") ) { return visibleObjects_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { return _rightTextField; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { return updateTimeGraph; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { return _drawCallsMarker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { return _toggleSizeButton; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { return _activeObjectMarker; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { return flashPlayerFramerate; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { return _visibleObjectMarker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stats_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { _draw=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_itvTime") ) { _itvTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsGraph") ) { fpsGraph=inValue.Cast< ::flixel::_system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawTime") ) { drawTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_initTime") ) { _initTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastTime") ) { _lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateTime") ) { updateTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawCalls") ) { _drawCalls=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalCount") ) { _totalCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"memoryGraph") ) { memoryGraph=inValue.Cast< ::flixel::_system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeCount") ) { activeCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawMarker") ) { _drawMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleCount") ) { visibleCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTimer") ) { _updateTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawTimeGraph") ) { drawTimeGraph=inValue.Cast< ::flixel::_system::debug::StatsGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateMarker") ) { _updateMarker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeObject") ) { _activeObject=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_leftTextField") ) { _leftTextField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObject") ) { _visibleObject=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawCallsCount") ) { drawCallsCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_rightTextField") ) { _rightTextField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateTimeGraph") ) { updateTimeGraph=inValue.Cast< ::flixel::_system::debug::StatsGraph >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_drawCallsMarker") ) { _drawCallsMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_toggleSizeButton") ) { _toggleSizeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_activeObjectMarker") ) { _activeObjectMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"flashPlayerFramerate") ) { flashPlayerFramerate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleObjectMarker") ) { _visibleObjectMarker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stats_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51"));
	outFields->push(HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1"));
	outFields->push(HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2"));
	outFields->push(HX_HCSTRING("_initTime","\x9c","\xf2","\x49","\x99"));
	outFields->push(HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"));
	outFields->push(HX_HCSTRING("_totalCount","\x8a","\x07","\x8e","\x23"));
	outFields->push(HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"));
	outFields->push(HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23"));
	outFields->push(HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c"));
	outFields->push(HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae"));
	outFields->push(HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e"));
	outFields->push(HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e"));
	outFields->push(HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf"));
	outFields->push(HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6"));
	outFields->push(HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"));
	outFields->push(HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61"));
	outFields->push(HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27"));
	outFields->push(HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b"));
	outFields->push(HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"));
	outFields->push(HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c"));
	outFields->push(HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5"));
	outFields->push(HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce"));
	outFields->push(HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2"));
	outFields->push(HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f"));
	outFields->push(HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57"));
	outFields->push(HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76"));
	outFields->push(HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"));
	outFields->push(HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01"));
	outFields->push(HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2"));
	outFields->push(HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64"));
	outFields->push(HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Stats_obj,_leftTextField),HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Stats_obj,_rightTextField),HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1")},
	{hx::fsInt,(int)offsetof(Stats_obj,_itvTime),HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2")},
	{hx::fsInt,(int)offsetof(Stats_obj,_initTime),HX_HCSTRING("_initTime","\x9c","\xf2","\x49","\x99")},
	{hx::fsInt,(int)offsetof(Stats_obj,_frameCount),HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00")},
	{hx::fsInt,(int)offsetof(Stats_obj,_totalCount),HX_HCSTRING("_totalCount","\x8a","\x07","\x8e","\x23")},
	{hx::fsInt,(int)offsetof(Stats_obj,_currentTime),HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb")},
	{hx::fsObject /*::flixel::_system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,fpsGraph),HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23")},
	{hx::fsObject /*::flixel::_system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,memoryGraph),HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c")},
	{hx::fsObject /*::flixel::_system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,drawTimeGraph),HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae")},
	{hx::fsObject /*::flixel::_system::debug::StatsGraph*/ ,(int)offsetof(Stats_obj,updateTimeGraph),HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e")},
	{hx::fsFloat,(int)offsetof(Stats_obj,flashPlayerFramerate),HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e")},
	{hx::fsInt,(int)offsetof(Stats_obj,visibleCount),HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf")},
	{hx::fsInt,(int)offsetof(Stats_obj,activeCount),HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6")},
	{hx::fsInt,(int)offsetof(Stats_obj,updateTime),HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawTime),HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61")},
	{hx::fsInt,(int)offsetof(Stats_obj,_lastTime),HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateTimer),HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_update),HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5")},
	{hx::fsInt,(int)offsetof(Stats_obj,_updateMarker),HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_draw),HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawMarker),HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_visibleObject),HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2")},
	{hx::fsInt,(int)offsetof(Stats_obj,_visibleObjectMarker),HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_activeObject),HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57")},
	{hx::fsInt,(int)offsetof(Stats_obj,_activeObjectMarker),HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76")},
	{hx::fsBool,(int)offsetof(Stats_obj,_paused),HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Stats_obj,_toggleSizeButton),HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01")},
	{hx::fsInt,(int)offsetof(Stats_obj,drawCallsCount),HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stats_obj,_drawCalls),HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64")},
	{hx::fsInt,(int)offsetof(Stats_obj,_drawCallsMarker),HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Stats_obj::UPDATE_DELAY,HX_HCSTRING("UPDATE_DELAY","\x6d","\x35","\xf7","\x07")},
	{hx::fsInt,(void *) &Stats_obj::INITIAL_WIDTH,HX_HCSTRING("INITIAL_WIDTH","\x8b","\x7c","\x50","\x0d")},
	{hx::fsInt,(void *) &Stats_obj::MIN_HEIGHT,HX_HCSTRING("MIN_HEIGHT","\x54","\x8a","\xe1","\x8d")},
	{hx::fsInt,(void *) &Stats_obj::FPS_COLOR,HX_HCSTRING("FPS_COLOR","\x0d","\xd1","\x6d","\xcd")},
	{hx::fsInt,(void *) &Stats_obj::MEMORY_COLOR,HX_HCSTRING("MEMORY_COLOR","\x45","\x1e","\xbd","\xfc")},
	{hx::fsInt,(void *) &Stats_obj::DRAW_TIME_COLOR,HX_HCSTRING("DRAW_TIME_COLOR","\xec","\x9b","\xc0","\x3b")},
	{hx::fsInt,(void *) &Stats_obj::UPDATE_TIME_COLOR,HX_HCSTRING("UPDATE_TIME_COLOR","\x07","\x42","\x13","\x96")},
	{hx::fsInt,(void *) &Stats_obj::LABEL_COLOR,HX_HCSTRING("LABEL_COLOR","\x58","\x4d","\x57","\xfe")},
	{hx::fsInt,(void *) &Stats_obj::TEXT_SIZE,HX_HCSTRING("TEXT_SIZE","\xd3","\xdc","\x4f","\x6d")},
	{hx::fsInt,(void *) &Stats_obj::DECIMALS,HX_HCSTRING("DECIMALS","\xc2","\xda","\xef","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_leftTextField","\x07","\x34","\xbe","\x51"),
	HX_HCSTRING("_rightTextField","\xf0","\xe5","\xf5","\xc1"),
	HX_HCSTRING("_itvTime","\x59","\x55","\x8a","\xd2"),
	HX_HCSTRING("_initTime","\x9c","\xf2","\x49","\x99"),
	HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"),
	HX_HCSTRING("_totalCount","\x8a","\x07","\x8e","\x23"),
	HX_HCSTRING("_currentTime","\xe7","\x52","\x98","\xeb"),
	HX_HCSTRING("fpsGraph","\xa5","\x6a","\x9f","\x23"),
	HX_HCSTRING("memoryGraph","\x8d","\x30","\x93","\x6c"),
	HX_HCSTRING("drawTimeGraph","\x5d","\xf7","\x01","\xae"),
	HX_HCSTRING("updateTimeGraph","\xb8","\xb4","\x65","\x9e"),
	HX_HCSTRING("flashPlayerFramerate","\x1c","\x9e","\xc7","\x3e"),
	HX_HCSTRING("visibleCount","\xfd","\x5e","\xe8","\xbf"),
	HX_HCSTRING("activeCount","\x29","\x45","\xa8","\xa6"),
	HX_HCSTRING("updateTime","\xb6","\xb6","\xb1","\x05"),
	HX_HCSTRING("drawTime","\x31","\x76","\x66","\x61"),
	HX_HCSTRING("_lastTime","\xe2","\xdc","\xdb","\x27"),
	HX_HCSTRING("_updateTimer","\xfd","\xd6","\xd7","\x5b"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_updateMarker","\x82","\xaf","\xa2","\x9c"),
	HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5"),
	HX_HCSTRING("_drawMarker","\xfd","\xbd","\xbd","\xce"),
	HX_HCSTRING("_visibleObject","\x12","\x3d","\x83","\xb2"),
	HX_HCSTRING("_visibleObjectMarker","\x6c","\x40","\x96","\x6f"),
	HX_HCSTRING("_activeObject","\x04","\x60","\xc9","\x57"),
	HX_HCSTRING("_activeObjectMarker","\xde","\x24","\x6c","\x76"),
	HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"),
	HX_HCSTRING("_toggleSizeButton","\xa6","\x70","\xb9","\x01"),
	HX_HCSTRING("drawCallsCount","\x9e","\x73","\x40","\xb2"),
	HX_HCSTRING("_drawCalls","\x32","\x23","\xc9","\x64"),
	HX_HCSTRING("_drawCallsMarker","\x8c","\x7e","\xfb","\x1e"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateTexts","\x5d","\xb4","\x31","\xf3"),
	HX_HCSTRING("currentFps","\x30","\x8d","\x28","\xc7"),
	HX_HCSTRING("averageFps","\x8c","\x86","\xcf","\x86"),
	HX_HCSTRING("runningTime","\xac","\xd1","\x27","\x0c"),
	HX_HCSTRING("intervalTime","\xf2","\xf7","\x28","\x85"),
	HX_HCSTRING("currentMem","\x5c","\xd3","\x2d","\xc7"),
	HX_HCSTRING("flixelUpdate","\x85","\x69","\x5e","\x27"),
	HX_HCSTRING("flixelDraw","\x80","\xf8","\xdf","\x4d"),
	HX_HCSTRING("activeObjects","\xae","\xb3","\x18","\x3a"),
	HX_HCSTRING("visibleObjects","\x82","\xea","\xf1","\x36"),
	HX_HCSTRING("drawCalls","\x71","\xa7","\x26","\x09"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("toggleSize","\x75","\xe6","\x09","\xe4"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_MARK_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_MARK_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_MARK_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_MARK_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_MARK_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_DELAY,"UPDATE_DELAY");
	HX_VISIT_MEMBER_NAME(Stats_obj::INITIAL_WIDTH,"INITIAL_WIDTH");
	HX_VISIT_MEMBER_NAME(Stats_obj::MIN_HEIGHT,"MIN_HEIGHT");
	HX_VISIT_MEMBER_NAME(Stats_obj::FPS_COLOR,"FPS_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::MEMORY_COLOR,"MEMORY_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::DRAW_TIME_COLOR,"DRAW_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::UPDATE_TIME_COLOR,"UPDATE_TIME_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::LABEL_COLOR,"LABEL_COLOR");
	HX_VISIT_MEMBER_NAME(Stats_obj::TEXT_SIZE,"TEXT_SIZE");
	HX_VISIT_MEMBER_NAME(Stats_obj::DECIMALS,"DECIMALS");
};

#endif

hx::Class Stats_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UPDATE_DELAY","\x6d","\x35","\xf7","\x07"),
	HX_HCSTRING("INITIAL_WIDTH","\x8b","\x7c","\x50","\x0d"),
	HX_HCSTRING("MIN_HEIGHT","\x54","\x8a","\xe1","\x8d"),
	HX_HCSTRING("FPS_COLOR","\x0d","\xd1","\x6d","\xcd"),
	HX_HCSTRING("MEMORY_COLOR","\x45","\x1e","\xbd","\xfc"),
	HX_HCSTRING("DRAW_TIME_COLOR","\xec","\x9b","\xc0","\x3b"),
	HX_HCSTRING("UPDATE_TIME_COLOR","\x07","\x42","\x13","\x96"),
	HX_HCSTRING("LABEL_COLOR","\x58","\x4d","\x57","\xfe"),
	HX_HCSTRING("TEXT_SIZE","\xd3","\xdc","\x4f","\x6d"),
	HX_HCSTRING("DECIMALS","\xc2","\xda","\xef","\x6b"),
	::String(null()) };

void Stats_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Stats","\x77","\x10","\x8e","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stats_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stats_obj >;
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

void Stats_obj::__boot()
{
	UPDATE_DELAY= (int)250;
	INITIAL_WIDTH= (int)160;
	MIN_HEIGHT= (int)195;
	FPS_COLOR= (int)-6881536;
	MEMORY_COLOR= (int)-16737025;
	DRAW_TIME_COLOR= (int)-4784128;
	UPDATE_TIME_COLOR= (int)-2305024;
	LABEL_COLOR= (int)-1426063361;
	TEXT_SIZE= (int)11;
	DECIMALS= (int)1;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
