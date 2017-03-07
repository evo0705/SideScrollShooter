#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_StatsGraph
#include <flixel/system/debug/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
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
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void StatsGraph_obj::__construct(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{
HX_STACK_FRAME("flixel.system.debug.StatsGraph","new",0x163af7c9,"flixel.system.debug.StatsGraph.new","flixel/system/debug/StatsGraph.hx",15,0x92e18906)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(GraphColor,"GraphColor")
HX_STACK_ARG(Unit,"Unit")
HX_STACK_ARG(__o_LabelWidth,"LabelWidth")
HX_STACK_ARG(Label,"Label")
int LabelWidth = __o_LabelWidth.Default(45);
{
	HX_STACK_LINE(27)
	this->maxValue = ((Float)5e-324);
	HX_STACK_LINE(26)
	this->minValue = ((Float)1.79e+308);
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(43)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	this->set_x(tmp);
	HX_STACK_LINE(44)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	this->set_y(tmp1);
	HX_STACK_LINE(45)
	int tmp2 = (Width - LabelWidth);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	this->_width = tmp2;
	HX_STACK_LINE(46)
	this->_height = Height;
	HX_STACK_LINE(47)
	this->graphColor = GraphColor;
	HX_STACK_LINE(48)
	this->_unit = Unit;
	HX_STACK_LINE(49)
	this->_labelWidth = LabelWidth;
	HX_STACK_LINE(50)
	bool tmp3 = (Label == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	if ((tmp3)){
		HX_STACK_LINE(50)
		tmp4 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(50)
		tmp4 = Label;
	}
	HX_STACK_LINE(50)
	this->_label = tmp4;
	HX_STACK_LINE(52)
	this->history = Array_obj< Float >::__new();
	HX_STACK_LINE(54)
	::openfl::_legacy::display::Shape tmp5 = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	this->_axis = tmp5;
	HX_STACK_LINE(55)
	::openfl::_legacy::display::Shape tmp6 = this->_axis;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	int tmp7 = this->_labelWidth;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	int tmp8 = (tmp7 + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	tmp6->set_x(tmp8);
	HX_STACK_LINE(57)
	::openfl::_legacy::text::TextField tmp9 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,(int)0,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	this->maxLabel = tmp9;
	HX_STACK_LINE(58)
	int tmp10 = this->_height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(58)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(58)
	Float tmp12 = ((Float)5.5);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(58)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(58)
	int tmp14 = this->graphColor;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(58)
	::openfl::_legacy::text::TextField tmp15 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,tmp13,tmp14,(int)11);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(58)
	this->curLabel = tmp15;
	HX_STACK_LINE(59)
	int tmp16 = this->_height;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(59)
	int tmp17 = (tmp16 - (int)11);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(59)
	::openfl::_legacy::text::TextField tmp18 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,tmp17,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(59)
	this->minLabel = tmp18;
	HX_STACK_LINE(61)
	int tmp19 = this->_labelWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(61)
	int tmp20 = (tmp19 + (int)20);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(61)
	int tmp21 = this->_height;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(61)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(61)
	Float tmp23 = ((Float)5.5);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(61)
	Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(61)
	Float tmp25 = (tmp24 - (int)10);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(61)
	::openfl::_legacy::text::TextField tmp26 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(tmp20,tmp25,(int)-1426063361,(int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(61)
	this->avgLabel = tmp26;
	HX_STACK_LINE(62)
	::openfl::_legacy::text::TextField tmp27 = this->avgLabel;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(62)
	int tmp28 = this->_width;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(62)
	tmp27->set_width(tmp28);
	HX_STACK_LINE(63)
	::String tmp29 = ::openfl::_legacy::text::TextFormatAlign_obj::CENTER;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(63)
	::openfl::_legacy::text::TextField tmp30 = this->avgLabel;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(63)
	::openfl::_legacy::text::TextFormat tmp31 = tmp30->get_defaultTextFormat();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(63)
	tmp31->align = tmp29;
	HX_STACK_LINE(64)
	::openfl::_legacy::text::TextField tmp32 = this->avgLabel;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(64)
	tmp32->set_alpha(((Float)0.5));
	HX_STACK_LINE(66)
	::openfl::_legacy::display::Shape tmp33 = this->_axis;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(66)
	this->addChild(tmp33);
	HX_STACK_LINE(67)
	::openfl::_legacy::text::TextField tmp34 = this->maxLabel;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(67)
	this->addChild(tmp34);
	HX_STACK_LINE(68)
	::openfl::_legacy::text::TextField tmp35 = this->curLabel;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(68)
	this->addChild(tmp35);
	HX_STACK_LINE(69)
	::openfl::_legacy::text::TextField tmp36 = this->minLabel;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(69)
	this->addChild(tmp36);
	HX_STACK_LINE(70)
	::openfl::_legacy::text::TextField tmp37 = this->avgLabel;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(70)
	this->addChild(tmp37);
	HX_STACK_LINE(72)
	this->drawAxis();
}
;
	return null();
}

//StatsGraph_obj::~StatsGraph_obj() { }

Dynamic StatsGraph_obj::__CreateEmpty() { return  new StatsGraph_obj; }
hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__new(int X,int Y,int Width,int Height,int GraphColor,::String Unit,hx::Null< int >  __o_LabelWidth,::String Label)
{  hx::ObjectPtr< StatsGraph_obj > _result_ = new StatsGraph_obj();
	_result_->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return _result_;}

Dynamic StatsGraph_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatsGraph_obj > _result_ = new StatsGraph_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void StatsGraph_obj::drawAxis( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","drawAxis",0x602722bc,"flixel.system.debug.StatsGraph.drawAxis","flixel/system/debug/StatsGraph.hx",79,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::openfl::_legacy::display::Shape tmp = this->_axis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::openfl::_legacy::display::Graphics gfx = tmp1;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(81)
		gfx->clear();
		HX_STACK_LINE(82)
		gfx->beginFill((int)0,null());
		HX_STACK_LINE(83)
		gfx->lineStyle((int)1,(int)16777215,((Float)0.5),null(),null(),null(),null(),null());
		HX_STACK_LINE(86)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(87)
		int tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		gfx->lineTo((int)0,tmp2);
		HX_STACK_LINE(90)
		int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		gfx->moveTo((int)0,tmp3);
		HX_STACK_LINE(91)
		int tmp4 = this->_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		int tmp5 = this->_height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		gfx->lineTo(tmp4,tmp5);
		HX_STACK_LINE(93)
		gfx->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawAxis,(void))

Void StatsGraph_obj::drawGraph( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","drawGraph",0x328160d3,"flixel.system.debug.StatsGraph.drawGraph","flixel/system/debug/StatsGraph.hx",100,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::openfl::_legacy::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(102)
		gfx->clear();
		HX_STACK_LINE(103)
		int tmp1 = this->graphColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		gfx->lineStyle((int)1,tmp1,(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(104)
		::openfl::_legacy::display::Shape tmp2 = this->_axis;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		Float tmp3 = tmp2->get_x();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		::openfl::_legacy::display::Shape tmp4 = this->_axis;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		Float tmp5 = tmp4->get_y();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		gfx->moveTo(tmp3,tmp5);
		HX_STACK_LINE(106)
		int tmp6 = this->_width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		int tmp7 = (int)29;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		Float inc = tmp8;		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(107)
		Float tmp9 = this->maxValue;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(107)
		Float tmp10 = this->minValue;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(107)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(107)
		Float range = tmp11;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(108)
		Float value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(110)
			int tmp12 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(110)
			int _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				if ((tmp14)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(112)
				Float tmp16 = this->history->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				Float tmp17 = this->minValue;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(112)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(112)
				Float tmp19 = range;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(112)
				value = tmp20;
				HX_STACK_LINE(113)
				::openfl::_legacy::display::Shape tmp21 = this->_axis;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(113)
				Float tmp22 = tmp21->get_x();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(113)
				Float tmp23 = (i * inc);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(113)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(113)
				Float tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(113)
				Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(113)
				int tmp27 = this->_height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(113)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(113)
				int tmp29 = this->_height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(113)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(113)
				gfx->lineTo(tmp24,tmp30);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawGraph,(void))

Void StatsGraph_obj::update( Float Value,Dynamic Average){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","update",0xe8382640,"flixel.system.debug.StatsGraph.update","flixel/system/debug/StatsGraph.hx",118,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_ARG(Average,"Average")
		HX_STACK_LINE(119)
		Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		this->history->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(121)
		int tmp1 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		bool tmp2 = (tmp1 > (int)30);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		if ((tmp2)){
			HX_STACK_LINE(122)
			this->history->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
		}
		HX_STACK_LINE(125)
		Float tmp3 = this->maxValue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		Float tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		Float tmp5 = ::Math_obj::max(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		this->maxValue = tmp5;
		HX_STACK_LINE(126)
		Float tmp6 = this->minValue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		Float tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		this->minValue = tmp8;
		HX_STACK_LINE(128)
		::openfl::_legacy::text::TextField tmp9 = this->minLabel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		Float tmp10 = this->minValue;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		Float tmp11 = ::flixel::util::FlxMath_obj::roundDecimal(tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		::String tmp12 = (tmp11 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(128)
		::String tmp13 = this->_unit;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(128)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(128)
		tmp9->set_text(tmp14);
		HX_STACK_LINE(129)
		::openfl::_legacy::text::TextField tmp15 = this->curLabel;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(129)
		Float tmp16 = Value;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(129)
		Float tmp17 = ::flixel::util::FlxMath_obj::roundDecimal(tmp16,(int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(129)
		::String tmp18 = (tmp17 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(129)
		::String tmp19 = this->_unit;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(129)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(129)
		tmp15->set_text(tmp20);
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp21 = this->maxLabel;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(130)
		Float tmp22 = this->maxValue;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(130)
		Float tmp23 = ::flixel::util::FlxMath_obj::roundDecimal(tmp22,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(130)
		::String tmp24 = (tmp23 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(130)
		::String tmp25 = this->_unit;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(130)
		::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(130)
		tmp21->set_text(tmp26);
		HX_STACK_LINE(132)
		bool tmp27 = (Average == null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(132)
		if ((tmp27)){
			HX_STACK_LINE(133)
			Float tmp28 = this->average();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			Average = tmp28;
		}
		HX_STACK_LINE(135)
		::openfl::_legacy::text::TextField tmp28 = this->avgLabel;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(135)
		::String tmp29 = this->_label;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(135)
		::String tmp30 = (tmp29 + HX_HCSTRING("\nAvg: ","\x8e","\xd8","\xea","\xba"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(135)
		Dynamic tmp31 = Average;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(135)
		Float tmp32 = ::flixel::util::FlxMath_obj::roundDecimal(tmp31,(int)1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(135)
		::String tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(135)
		::String tmp34 = (tmp33 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(135)
		::String tmp35 = this->_unit;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(135)
		::String tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(135)
		tmp28->set_text(tmp36);
		HX_STACK_LINE(137)
		this->drawGraph();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StatsGraph_obj,update,(void))

Float StatsGraph_obj::average( ){
	HX_STACK_FRAME("flixel.system.debug.StatsGraph","average",0x0df50146,"flixel.system.debug.StatsGraph.average","flixel/system/debug/StatsGraph.hx",141,0x92e18906)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	Float sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< Float > _g1 = this->history;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			if ((tmp1)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			Float tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			hx::AddEq(sum,value);
		}
	}
	HX_STACK_LINE(146)
	Float tmp = sum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	int tmp1 = this->history->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,average,return )

Void StatsGraph_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.StatsGraph","destroy",0xcf9fbce3,"flixel.system.debug.StatsGraph.destroy","flixel/system/debug/StatsGraph.hx",150,0x92e18906)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		::openfl::_legacy::display::Shape tmp = this->_axis;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(153)
			::openfl::_legacy::display::Shape tmp2 = this->_axis;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			this->removeChild(tmp2);
			HX_STACK_LINE(154)
			this->_axis = null();
		}
		HX_STACK_LINE(157)
		::openfl::_legacy::text::TextField tmp2 = this->minLabel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		if ((tmp3)){
			HX_STACK_LINE(159)
			::openfl::_legacy::text::TextField tmp4 = this->minLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			this->removeChild(tmp4);
			HX_STACK_LINE(160)
			this->minLabel = null();
		}
		HX_STACK_LINE(162)
		::openfl::_legacy::text::TextField tmp4 = this->curLabel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		if ((tmp5)){
			HX_STACK_LINE(164)
			::openfl::_legacy::text::TextField tmp6 = this->curLabel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			this->removeChild(tmp6);
			HX_STACK_LINE(165)
			this->curLabel = null();
		}
		HX_STACK_LINE(167)
		::openfl::_legacy::text::TextField tmp6 = this->maxLabel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		if ((tmp7)){
			HX_STACK_LINE(169)
			::openfl::_legacy::text::TextField tmp8 = this->maxLabel;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			this->removeChild(tmp8);
			HX_STACK_LINE(170)
			this->maxLabel = null();
		}
		HX_STACK_LINE(172)
		::openfl::_legacy::text::TextField tmp8 = this->avgLabel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		if ((tmp9)){
			HX_STACK_LINE(174)
			::openfl::_legacy::text::TextField tmp10 = this->avgLabel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			this->removeChild(tmp10);
			HX_STACK_LINE(175)
			this->avgLabel = null();
		}
		HX_STACK_LINE(178)
		this->history = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,destroy,(void))

int StatsGraph_obj::AXIS_COLOR;

Float StatsGraph_obj::AXIS_ALPHA;

int StatsGraph_obj::HISTORY_MAX;


StatsGraph_obj::StatsGraph_obj()
{
}

void StatsGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatsGraph_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_unit") ) { return _unit; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"average") ) { return average_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return minLabel; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return curLabel; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return maxLabel; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return avgLabel; }
		if (HX_FIELD_EQ(inName,"minValue") ) { return minValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return maxValue; }
		if (HX_FIELD_EQ(inName,"drawAxis") ) { return drawAxis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return drawGraph_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return graphColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return _labelWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatsGraph_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::openfl::_legacy::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StatsGraph_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StatsGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"));
	outFields->push(HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"));
	outFields->push(HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"));
	outFields->push(HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"));
	outFields->push(HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"));
	outFields->push(HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"));
	outFields->push(HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"));
	outFields->push(HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,minLabel),HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,curLabel),HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,maxLabel),HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(StatsGraph_obj,avgLabel),HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,minValue),HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28")},
	{hx::fsFloat,(int)offsetof(StatsGraph_obj,maxValue),HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,graphColor),HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(StatsGraph_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::openfl::_legacy::display::Shape*/ ,(int)offsetof(StatsGraph_obj,_axis),HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_unit),HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00")},
	{hx::fsInt,(int)offsetof(StatsGraph_obj,_labelWidth),HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8")},
	{hx::fsString,(int)offsetof(StatsGraph_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &StatsGraph_obj::AXIS_COLOR,HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4")},
	{hx::fsFloat,(void *) &StatsGraph_obj::AXIS_ALPHA,HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc")},
	{hx::fsInt,(void *) &StatsGraph_obj::HISTORY_MAX,HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minLabel","\x02","\x7b","\xe6","\x66"),
	HX_HCSTRING("curLabel","\x54","\x08","\x5d","\xb7"),
	HX_HCSTRING("maxLabel","\xb0","\x60","\xcc","\x19"),
	HX_HCSTRING("avgLabel","\xc2","\xa2","\xa0","\x08"),
	HX_HCSTRING("minValue","\x7f","\xec","\xef","\x28"),
	HX_HCSTRING("maxValue","\x2d","\xd2","\xd5","\xdb"),
	HX_HCSTRING("graphColor","\x35","\x97","\x9f","\x9d"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("_axis","\x80","\x38","\x8a","\xf3"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"),
	HX_HCSTRING("_labelWidth","\x91","\xd0","\xcf","\xb8"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("drawAxis","\xc5","\xc6","\xe2","\x54"),
	HX_HCSTRING("drawGraph","\xaa","\x44","\xf5","\x61"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("average","\x5d","\x71","\xdb","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

hx::Class StatsGraph_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AXIS_COLOR","\xe5","\x83","\xee","\xe4"),
	HX_HCSTRING("AXIS_ALPHA","\xe0","\xb9","\x28","\xbc"),
	HX_HCSTRING("HISTORY_MAX","\xb9","\x9e","\xaf","\x58"),
	::String(null()) };

void StatsGraph_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.StatsGraph","\x57","\x5f","\x07","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StatsGraph_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StatsGraph_obj >;
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

void StatsGraph_obj::__boot()
{
	AXIS_COLOR= (int)16777215;
	AXIS_ALPHA= ((Float)0.5);
	HISTORY_MAX= (int)30;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
