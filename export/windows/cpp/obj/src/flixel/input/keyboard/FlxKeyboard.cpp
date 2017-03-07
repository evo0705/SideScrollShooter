#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
namespace keyboard{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",17,0x41882875)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->enabled = true;
	HX_STACK_LINE(239)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		tmp = tmp2;
	}
	HX_STACK_LINE(239)
	this->_keyLookup = tmp;
	HX_STACK_LINE(241)
	this->_keyList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(242)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_input_keyboard_FlxKey(this->_keyList,(int)256);
	HX_STACK_LINE(244)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(247)
	i = (int)65;
	HX_STACK_LINE(249)
	while((true)){
		HX_STACK_LINE(249)
		bool tmp1 = (i <= (int)90);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(249)
			break;
		}
		HX_STACK_LINE(251)
		int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		::String tmp4 = ::String::fromCharCode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		this->addKey(tmp4,tmp5);
		HX_STACK_LINE(252)
		(i)++;
	}
	HX_STACK_LINE(256)
	i = (int)48;
	HX_STACK_LINE(257)
	int tmp1 = (i)++;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	this->addKey(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),tmp1);
	HX_STACK_LINE(258)
	int tmp2 = (i)++;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	this->addKey(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),tmp2);
	HX_STACK_LINE(259)
	int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	this->addKey(HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),tmp3);
	HX_STACK_LINE(260)
	int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	this->addKey(HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),tmp4);
	HX_STACK_LINE(261)
	int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	this->addKey(HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),tmp5);
	HX_STACK_LINE(262)
	int tmp6 = (i)++;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(262)
	this->addKey(HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),tmp6);
	HX_STACK_LINE(263)
	int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(263)
	this->addKey(HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),tmp7);
	HX_STACK_LINE(264)
	int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(264)
	this->addKey(HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),tmp8);
	HX_STACK_LINE(265)
	int tmp9 = (i)++;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(265)
	this->addKey(HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),tmp9);
	HX_STACK_LINE(266)
	int tmp10 = (i)++;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(266)
	this->addKey(HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),tmp10);
	HX_STACK_LINE(267)
	i = (int)96;
	HX_STACK_LINE(268)
	int tmp11 = (i)++;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(268)
	this->addKey(HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"),tmp11);
	HX_STACK_LINE(269)
	int tmp12 = (i)++;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(269)
	this->addKey(HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"),tmp12);
	HX_STACK_LINE(270)
	int tmp13 = (i)++;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(270)
	this->addKey(HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"),tmp13);
	HX_STACK_LINE(271)
	int tmp14 = (i)++;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(271)
	this->addKey(HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"),tmp14);
	HX_STACK_LINE(272)
	int tmp15 = (i)++;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(272)
	this->addKey(HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"),tmp15);
	HX_STACK_LINE(273)
	int tmp16 = (i)++;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(273)
	this->addKey(HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"),tmp16);
	HX_STACK_LINE(274)
	int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(274)
	this->addKey(HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"),tmp17);
	HX_STACK_LINE(275)
	int tmp18 = (i)++;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(275)
	this->addKey(HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"),tmp18);
	HX_STACK_LINE(276)
	int tmp19 = (i)++;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(276)
	this->addKey(HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"),tmp19);
	HX_STACK_LINE(277)
	int tmp20 = (i)++;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(277)
	this->addKey(HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"),tmp20);
	HX_STACK_LINE(279)
	this->addKey(HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),(int)33);
	HX_STACK_LINE(280)
	this->addKey(HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),(int)34);
	HX_STACK_LINE(281)
	this->addKey(HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),(int)36);
	HX_STACK_LINE(282)
	this->addKey(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),(int)35);
	HX_STACK_LINE(283)
	this->addKey(HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),(int)45);
	HX_STACK_LINE(286)
	i = (int)1;
	HX_STACK_LINE(287)
	while((true)){
		HX_STACK_LINE(287)
		bool tmp21 = (i <= (int)12);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(287)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(287)
		if ((tmp22)){
			HX_STACK_LINE(287)
			break;
		}
		HX_STACK_LINE(289)
		::String tmp23 = (HX_HCSTRING("F","\x46","\x00","\x00","\x00") + i);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(289)
		int tmp24 = ((int)111 + i);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(289)
		this->addKey(tmp23,tmp24);
		HX_STACK_LINE(290)
		(i)++;
	}
	HX_STACK_LINE(294)
	this->addKey(HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),(int)27);
	HX_STACK_LINE(295)
	this->addKey(HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),(int)189);
	HX_STACK_LINE(296)
	this->addKey(HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),(int)187);
	HX_STACK_LINE(297)
	this->addKey(HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),(int)46);
	HX_STACK_LINE(298)
	this->addKey(HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),(int)8);
	HX_STACK_LINE(299)
	this->addKey(HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),(int)219);
	HX_STACK_LINE(300)
	this->addKey(HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),(int)221);
	HX_STACK_LINE(301)
	this->addKey(HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),(int)220);
	HX_STACK_LINE(302)
	this->addKey(HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),(int)20);
	HX_STACK_LINE(303)
	this->addKey(HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),(int)186);
	HX_STACK_LINE(304)
	this->addKey(HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),(int)222);
	HX_STACK_LINE(305)
	this->addKey(HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),(int)13);
	HX_STACK_LINE(306)
	this->addKey(HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),(int)16);
	HX_STACK_LINE(307)
	this->addKey(HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),(int)188);
	HX_STACK_LINE(308)
	this->addKey(HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),(int)190);
	HX_STACK_LINE(309)
	this->addKey(HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),(int)191);
	HX_STACK_LINE(310)
	this->addKey(HX_HCSTRING("NUMPADSLASH","\x30","\x62","\xc6","\x2a"),(int)191);
	HX_STACK_LINE(311)
	this->addKey(HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"),(int)192);
	HX_STACK_LINE(312)
	this->addKey(HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),(int)17);
	HX_STACK_LINE(313)
	this->addKey(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),(int)18);
	HX_STACK_LINE(314)
	this->addKey(HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),(int)32);
	HX_STACK_LINE(315)
	this->addKey(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),(int)38);
	HX_STACK_LINE(316)
	this->addKey(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),(int)40);
	HX_STACK_LINE(317)
	this->addKey(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),(int)37);
	HX_STACK_LINE(318)
	this->addKey(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),(int)39);
	HX_STACK_LINE(319)
	this->addKey(HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),(int)9);
	HX_STACK_LINE(320)
	this->addKey(HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"),(int)301);
	HX_STACK_LINE(322)
	this->addKey(HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"),(int)106);
	HX_STACK_LINE(323)
	this->addKey(HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"),(int)109);
	HX_STACK_LINE(324)
	this->addKey(HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"),(int)107);
	HX_STACK_LINE(325)
	this->addKey(HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"),(int)110);
	HX_STACK_LINE(328)
	::haxe::ds::StringMap tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		::haxe::ds::StringMap tmp22 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(328)
		::haxe::ds::StringMap tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(328)
		tmp21 = tmp23;
	}
	HX_STACK_LINE(328)
	this->_nativeCorrection = tmp21;
	HX_STACK_LINE(330)
	::haxe::ds::StringMap tmp22 = this->_nativeCorrection;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(330)
	tmp22->set(HX_HCSTRING("0_64","\x2d","\x83","\x02","\x20"),(int)45);
	HX_STACK_LINE(331)
	::haxe::ds::StringMap tmp23 = this->_nativeCorrection;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(331)
	tmp23->set(HX_HCSTRING("0_65","\x2e","\x83","\x02","\x20"),(int)35);
	HX_STACK_LINE(332)
	::haxe::ds::StringMap tmp24 = this->_nativeCorrection;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(332)
	tmp24->set(HX_HCSTRING("0_67","\x30","\x83","\x02","\x20"),(int)34);
	HX_STACK_LINE(333)
	::haxe::ds::StringMap tmp25 = this->_nativeCorrection;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(333)
	tmp25->set(HX_HCSTRING("0_69","\x32","\x83","\x02","\x20"),(int)-1);
	HX_STACK_LINE(334)
	::haxe::ds::StringMap tmp26 = this->_nativeCorrection;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(334)
	tmp26->set(HX_HCSTRING("0_73","\x0b","\x84","\x02","\x20"),(int)33);
	HX_STACK_LINE(335)
	::haxe::ds::StringMap tmp27 = this->_nativeCorrection;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(335)
	tmp27->set(HX_HCSTRING("0_266","\x23","\x3d","\x2d","\xe2"),(int)46);
	HX_STACK_LINE(336)
	::haxe::ds::StringMap tmp28 = this->_nativeCorrection;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(336)
	tmp28->set(HX_HCSTRING("123_222","\xa5","\xbc","\xd4","\x8f"),(int)219);
	HX_STACK_LINE(337)
	::haxe::ds::StringMap tmp29 = this->_nativeCorrection;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(337)
	tmp29->set(HX_HCSTRING("125_187","\xa5","\x28","\xa1","\xb6"),(int)221);
	HX_STACK_LINE(338)
	::haxe::ds::StringMap tmp30 = this->_nativeCorrection;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(338)
	tmp30->set(HX_HCSTRING("126_233","\x08","\x7b","\x08","\x4a"),(int)192);
	HX_STACK_LINE(340)
	::haxe::ds::StringMap tmp31 = this->_nativeCorrection;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(340)
	tmp31->set(HX_HCSTRING("0_80","\xe7","\x84","\x02","\x20"),(int)112);
	HX_STACK_LINE(341)
	::haxe::ds::StringMap tmp32 = this->_nativeCorrection;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(341)
	tmp32->set(HX_HCSTRING("0_81","\xe8","\x84","\x02","\x20"),(int)113);
	HX_STACK_LINE(342)
	::haxe::ds::StringMap tmp33 = this->_nativeCorrection;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(342)
	tmp33->set(HX_HCSTRING("0_82","\xe9","\x84","\x02","\x20"),(int)114);
	HX_STACK_LINE(343)
	::haxe::ds::StringMap tmp34 = this->_nativeCorrection;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(343)
	tmp34->set(HX_HCSTRING("0_83","\xea","\x84","\x02","\x20"),(int)115);
	HX_STACK_LINE(344)
	::haxe::ds::StringMap tmp35 = this->_nativeCorrection;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(344)
	tmp35->set(HX_HCSTRING("0_84","\xeb","\x84","\x02","\x20"),(int)116);
	HX_STACK_LINE(345)
	::haxe::ds::StringMap tmp36 = this->_nativeCorrection;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(345)
	tmp36->set(HX_HCSTRING("0_85","\xec","\x84","\x02","\x20"),(int)117);
	HX_STACK_LINE(346)
	::haxe::ds::StringMap tmp37 = this->_nativeCorrection;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(346)
	tmp37->set(HX_HCSTRING("0_86","\xed","\x84","\x02","\x20"),(int)118);
	HX_STACK_LINE(347)
	::haxe::ds::StringMap tmp38 = this->_nativeCorrection;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(347)
	tmp38->set(HX_HCSTRING("0_87","\xee","\x84","\x02","\x20"),(int)119);
	HX_STACK_LINE(348)
	::haxe::ds::StringMap tmp39 = this->_nativeCorrection;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(348)
	tmp39->set(HX_HCSTRING("0_88","\xef","\x84","\x02","\x20"),(int)120);
	HX_STACK_LINE(349)
	::haxe::ds::StringMap tmp40 = this->_nativeCorrection;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(349)
	tmp40->set(HX_HCSTRING("0_89","\xf0","\x84","\x02","\x20"),(int)121);
	HX_STACK_LINE(350)
	::haxe::ds::StringMap tmp41 = this->_nativeCorrection;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(350)
	tmp41->set(HX_HCSTRING("0_90","\xc6","\x85","\x02","\x20"),(int)122);
	HX_STACK_LINE(352)
	::haxe::ds::StringMap tmp42 = this->_nativeCorrection;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(352)
	tmp42->set(HX_HCSTRING("48_224","\xf9","\xa0","\xf0","\x47"),(int)48);
	HX_STACK_LINE(353)
	::haxe::ds::StringMap tmp43 = this->_nativeCorrection;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(353)
	tmp43->set(HX_HCSTRING("49_38","\x5f","\x96","\xcb","\x16"),(int)49);
	HX_STACK_LINE(354)
	::haxe::ds::StringMap tmp44 = this->_nativeCorrection;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(354)
	tmp44->set(HX_HCSTRING("50_233","\x2e","\x5a","\x17","\x13"),(int)50);
	HX_STACK_LINE(355)
	::haxe::ds::StringMap tmp45 = this->_nativeCorrection;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(355)
	tmp45->set(HX_HCSTRING("51_34","\xe4","\x75","\xe8","\xa4"),(int)51);
	HX_STACK_LINE(356)
	::haxe::ds::StringMap tmp46 = this->_nativeCorrection;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(356)
	tmp46->set(HX_HCSTRING("52_222","\x50","\x82","\xe4","\x39"),(int)52);
	HX_STACK_LINE(357)
	::haxe::ds::StringMap tmp47 = this->_nativeCorrection;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(357)
	tmp47->set(HX_HCSTRING("53_40","\xfd","\xe3","\x3a","\xa6"),(int)53);
	HX_STACK_LINE(358)
	::haxe::ds::StringMap tmp48 = this->_nativeCorrection;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(358)
	tmp48->set(HX_HCSTRING("54_189","\x52","\xee","\xb0","\x60"),(int)54);
	HX_STACK_LINE(359)
	::haxe::ds::StringMap tmp49 = this->_nativeCorrection;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(359)
	tmp49->set(HX_HCSTRING("55_232","\xb2","\x40","\x18","\xf4"),(int)55);
	HX_STACK_LINE(360)
	::haxe::ds::StringMap tmp50 = this->_nativeCorrection;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(360)
	tmp50->set(HX_HCSTRING("56_95","\x3a","\x8c","\x36","\xa8"),(int)56);
	HX_STACK_LINE(361)
	::haxe::ds::StringMap tmp51 = this->_nativeCorrection;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(361)
	tmp51->set(HX_HCSTRING("57_231","\xb3","\x69","\xe5","\x1a"),(int)57);
	HX_STACK_LINE(363)
	::haxe::ds::StringMap tmp52 = this->_nativeCorrection;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(363)
	tmp52->set(HX_HCSTRING("48_64","\x59","\x62","\x22","\x16"),(int)96);
	HX_STACK_LINE(364)
	::haxe::ds::StringMap tmp53 = this->_nativeCorrection;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(364)
	tmp53->set(HX_HCSTRING("49_65","\xf9","\x98","\xcb","\x16"),(int)97);
	HX_STACK_LINE(365)
	::haxe::ds::StringMap tmp54 = this->_nativeCorrection;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(365)
	tmp54->set(HX_HCSTRING("50_66","\xe4","\x41","\x3f","\xa4"),(int)98);
	HX_STACK_LINE(366)
	::haxe::ds::StringMap tmp55 = this->_nativeCorrection;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(366)
	tmp55->set(HX_HCSTRING("51_67","\x84","\x78","\xe8","\xa4"),(int)99);
	HX_STACK_LINE(367)
	::haxe::ds::StringMap tmp56 = this->_nativeCorrection;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(367)
	tmp56->set(HX_HCSTRING("52_68","\x24","\xaf","\x91","\xa5"),(int)100);
	HX_STACK_LINE(368)
	::haxe::ds::StringMap tmp57 = this->_nativeCorrection;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(368)
	tmp57->set(HX_HCSTRING("53_69","\xc4","\xe5","\x3a","\xa6"),(int)101);
	HX_STACK_LINE(369)
	::haxe::ds::StringMap tmp58 = this->_nativeCorrection;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(369)
	tmp58->set(HX_HCSTRING("54_70","\x39","\x1d","\xe4","\xa6"),(int)102);
	HX_STACK_LINE(370)
	::haxe::ds::StringMap tmp59 = this->_nativeCorrection;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(370)
	tmp59->set(HX_HCSTRING("55_71","\xd9","\x53","\x8d","\xa7"),(int)103);
	HX_STACK_LINE(371)
	::haxe::ds::StringMap tmp60 = this->_nativeCorrection;		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(371)
	tmp60->set(HX_HCSTRING("56_72","\x79","\x8a","\x36","\xa8"),(int)104);
	HX_STACK_LINE(372)
	::haxe::ds::StringMap tmp61 = this->_nativeCorrection;		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(372)
	tmp61->set(HX_HCSTRING("57_73","\x19","\xc1","\xdf","\xa8"),(int)105);
	HX_STACK_LINE(374)
	::haxe::ds::StringMap tmp62 = this->_nativeCorrection;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(374)
	tmp62->set(HX_HCSTRING("43_75","\x1e","\x52","\xd4","\x12"),(int)107);
	HX_STACK_LINE(375)
	::haxe::ds::StringMap tmp63 = this->_nativeCorrection;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(375)
	tmp63->set(HX_HCSTRING("45_77","\x5e","\xbf","\x26","\x14"),(int)109);
	HX_STACK_LINE(376)
	::haxe::ds::StringMap tmp64 = this->_nativeCorrection;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(376)
	tmp64->set(HX_HCSTRING("47_79","\x9e","\x2c","\x79","\x15"),(int)191);
	HX_STACK_LINE(377)
	::haxe::ds::StringMap tmp65 = this->_nativeCorrection;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(377)
	tmp65->set(HX_HCSTRING("46_78","\xfe","\xf5","\xcf","\x14"),(int)110);
	HX_STACK_LINE(378)
	::haxe::ds::StringMap tmp66 = this->_nativeCorrection;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(378)
	tmp66->set(HX_HCSTRING("42_74","\x7e","\x1b","\x2b","\x12"),(int)106);
	HX_STACK_LINE(381)
	::openfl::_legacy::display::MovieClip tmp67 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(381)
	::openfl::_legacy::display::Stage tmp68 = tmp67->get_stage();		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(381)
	::String tmp69 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(381)
	Dynamic tmp70 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(381)
	tmp68->addEventListener(tmp69,tmp70,null(),null(),null());
	HX_STACK_LINE(382)
	::openfl::_legacy::display::MovieClip tmp71 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(382)
	::openfl::_legacy::display::Stage tmp72 = tmp71->get_stage();		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(382)
	::String tmp73 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(382)
	Dynamic tmp74 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(382)
	tmp72->addEventListener(tmp73,tmp74,null(),null(),null());
	HX_STACK_LINE(384)
	::flixel::input::keyboard::FlxKeyList tmp75 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)1);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(384)
	this->pressed = tmp75;
	HX_STACK_LINE(385)
	::flixel::input::keyboard::FlxKeyList tmp76 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)2);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(385)
	this->justPressed = tmp76;
	HX_STACK_LINE(386)
	::flixel::input::keyboard::FlxKeyList tmp77 = ::flixel::input::keyboard::FlxKeyList_obj::__new((int)-1);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(386)
	this->justReleased = tmp77;
}
;
	return null();
}

//FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > _result_ = new FlxKeyboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > _result_ = new FlxKeyboard_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxKeyboard_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxKeyboard_obj::operator ::flixel::interfaces::IFlxInput_obj *()
	{ return new ::flixel::interfaces::IFlxInput_delegate_< FlxKeyboard_obj >(this); }
bool FlxKeyboard_obj::anyPressed( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyPressed",0xd7d5173c,"flixel.input.keyboard.FlxKeyboard.anyPressed","flixel/input/keyboard/FlxKeyboard.hx",68,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(69)
	bool tmp = this->checkKeyStatus(KeyArray,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyPressed,return )

bool FlxKeyboard_obj::anyJustPressed( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyJustPressed",0x0abca770,"flixel.input.keyboard.FlxKeyboard.anyJustPressed","flixel/input/keyboard/FlxKeyboard.hx",80,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(81)
	bool tmp = this->checkKeyStatus(KeyArray,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustPressed,return )

bool FlxKeyboard_obj::anyJustReleased( Array< ::String > KeyArray){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","anyJustReleased",0x612be82f,"flixel.input.keyboard.FlxKeyboard.anyJustReleased","flixel/input/keyboard/FlxKeyboard.hx",92,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(93)
	bool tmp = this->checkKeyStatus(KeyArray,(int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,anyJustReleased,return )

::String FlxKeyboard_obj::firstPressed( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstPressed",0x3e8adff8,"flixel.input.keyboard.FlxKeyboard.firstPressed","flixel/input/keyboard/FlxKeyboard.hx",102,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			if ((tmp1)){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(105)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			if ((tmp3)){
				HX_STACK_LINE(105)
				tmp4 = (key->current == (int)1);
			}
			else{
				HX_STACK_LINE(105)
				tmp4 = false;
			}
			HX_STACK_LINE(105)
			if ((tmp4)){
				HX_STACK_LINE(107)
				::String tmp5 = key->name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(110)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstPressed,return )

::String FlxKeyboard_obj::firstJustPressed( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstJustPressed",0xd34b7e2c,"flixel.input.keyboard.FlxKeyboard.firstJustPressed","flixel/input/keyboard/FlxKeyboard.hx",119,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(120)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			if ((tmp1)){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(122)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp3)){
				HX_STACK_LINE(122)
				tmp4 = (key->current == (int)2);
			}
			else{
				HX_STACK_LINE(122)
				tmp4 = false;
			}
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(124)
				::String tmp5 = key->name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(127)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstJustPressed,return )

::String FlxKeyboard_obj::firstJustReleased( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","firstJustReleased",0x1598f5f3,"flixel.input.keyboard.FlxKeyboard.firstJustReleased","flixel/input/keyboard/FlxKeyboard.hx",136,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
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
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(137)
			++(_g);
			HX_STACK_LINE(139)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			if ((tmp3)){
				HX_STACK_LINE(139)
				tmp4 = (key->current == (int)-1);
			}
			else{
				HX_STACK_LINE(139)
				tmp4 = false;
			}
			HX_STACK_LINE(139)
			if ((tmp4)){
				HX_STACK_LINE(141)
				::String tmp5 = key->name;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(144)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,firstJustReleased,return )

bool FlxKeyboard_obj::checkStatus( int KeyCode,int Status){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","checkStatus",0x7888f934,"flixel.input.keyboard.FlxKeyboard.checkStatus","flixel/input/keyboard/FlxKeyboard.hx",155,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(156)
	::flixel::input::keyboard::FlxKey tmp = this->_keyList->__get(KeyCode).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::flixel::input::keyboard::FlxKey k = tmp;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(157)
	bool tmp1 = (k != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(159)
		bool tmp2 = (k->current == Status);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		if ((tmp2)){
			HX_STACK_LINE(161)
			return true;
		}
		else{
			HX_STACK_LINE(163)
			bool tmp3 = (Status == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			if ((tmp3)){
				HX_STACK_LINE(163)
				tmp4 = (k->current == (int)2);
			}
			else{
				HX_STACK_LINE(163)
				tmp4 = false;
			}
			HX_STACK_LINE(163)
			if ((tmp4)){
				HX_STACK_LINE(165)
				return true;
			}
			else{
				HX_STACK_LINE(167)
				bool tmp5 = (Status == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(167)
				if ((tmp5)){
					HX_STACK_LINE(167)
					tmp6 = (k->current == (int)-1);
				}
				else{
					HX_STACK_LINE(167)
					tmp6 = false;
				}
				HX_STACK_LINE(167)
				if ((tmp6)){
					HX_STACK_LINE(169)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(179)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,checkStatus,return )

int FlxKeyboard_obj::getKeyCode( ::String KeyName){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","getKeyCode",0x32d24a9c,"flixel.input.keyboard.FlxKeyboard.getKeyCode","flixel/input/keyboard/FlxKeyboard.hx",189,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyName,"KeyName")
	HX_STACK_LINE(190)
	::haxe::ds::StringMap tmp = this->_keyLookup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::String tmp1 = KeyName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,getKeyCode,return )

Array< ::Dynamic > FlxKeyboard_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","getIsDown",0x5d10ab3c,"flixel.input.keyboard.FlxKeyboard.getIsDown","flixel/input/keyboard/FlxKeyboard.hx",199,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(202)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			if ((tmp1)){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(202)
			++(_g);
			HX_STACK_LINE(204)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			if ((tmp3)){
				HX_STACK_LINE(204)
				tmp4 = (key->current > (int)0);
			}
			else{
				HX_STACK_LINE(204)
				tmp4 = false;
			}
			HX_STACK_LINE(204)
			if ((tmp4)){
				HX_STACK_LINE(206)
				::flixel::input::keyboard::FlxKey tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				keysDown->push(tmp5);
			}
		}
	}
	HX_STACK_LINE(209)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,getIsDown,return )

Void FlxKeyboard_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","destroy",0x52b95714,"flixel.input.keyboard.FlxKeyboard.destroy","flixel/input/keyboard/FlxKeyboard.hx",216,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->_keyList = null();
		HX_STACK_LINE(218)
		this->_keyLookup = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,destroy,(void))

Void FlxKeyboard_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","reset",0xa104d969,"flixel.input.keyboard.FlxKeyboard.reset","flixel/input/keyboard/FlxKeyboard.hx",226,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(226)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			if ((tmp1)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(228)
			bool tmp3 = (key != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			if ((tmp3)){
				HX_STACK_LINE(230)
				key->current = (int)0;
				HX_STACK_LINE(231)
				key->last = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,reset,(void))

Void FlxKeyboard_obj::addKey( ::String KeyName,int KeyCode){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","addKey",0xd9c3b124,"flixel.input.keyboard.FlxKeyboard.addKey","flixel/input/keyboard/FlxKeyboard.hx",396,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyName,"KeyName")
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_LINE(397)
		::haxe::ds::StringMap tmp = this->_keyLookup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		::String tmp1 = KeyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		int tmp2 = KeyCode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		tmp->set(tmp1,tmp2);
		HX_STACK_LINE(398)
		::flixel::input::keyboard::FlxKey tmp3 = ::flixel::input::keyboard::FlxKey_obj::__new(KeyName);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		this->_keyList[KeyCode] = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,addKey,(void))

Void FlxKeyboard_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","update",0xc1c69d2f,"flixel.input.keyboard.FlxKeyboard.update","flixel/input/keyboard/FlxKeyboard.hx",406,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(406)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(406)
		Array< ::Dynamic > _g1 = this->_keyList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			if ((tmp1)){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(406)
			::flixel::input::keyboard::FlxKey tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			::flixel::input::keyboard::FlxKey key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(406)
			++(_g);
			HX_STACK_LINE(408)
			bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			if ((tmp3)){
				HX_STACK_LINE(410)
				continue;
			}
			HX_STACK_LINE(413)
			bool tmp4 = (key->last == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(413)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			if ((tmp4)){
				HX_STACK_LINE(413)
				tmp5 = (key->current == (int)-1);
			}
			else{
				HX_STACK_LINE(413)
				tmp5 = false;
			}
			HX_STACK_LINE(413)
			if ((tmp5)){
				HX_STACK_LINE(415)
				key->current = (int)0;
			}
			else{
				HX_STACK_LINE(417)
				bool tmp6 = (key->last == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(417)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(417)
				if ((tmp6)){
					HX_STACK_LINE(417)
					tmp7 = (key->current == (int)2);
				}
				else{
					HX_STACK_LINE(417)
					tmp7 = false;
				}
				HX_STACK_LINE(417)
				if ((tmp7)){
					HX_STACK_LINE(419)
					key->current = (int)1;
				}
			}
			HX_STACK_LINE(422)
			key->last = key->current;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,update,(void))

bool FlxKeyboard_obj::checkKeyStatus( Array< ::String > KeyArray,int Status){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","checkKeyStatus",0x68c0016f,"flixel.input.keyboard.FlxKeyboard.checkKeyStatus","flixel/input/keyboard/FlxKeyboard.hx",434,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(435)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	if ((tmp)){
		HX_STACK_LINE(437)
		return false;
	}
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(440)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		while((true)){
			HX_STACK_LINE(440)
			bool tmp1 = (_g < KeyArray->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			if ((tmp2)){
				HX_STACK_LINE(440)
				break;
			}
			HX_STACK_LINE(440)
			::String tmp3 = KeyArray->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			::String code = tmp3;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(440)
			++(_g);
			HX_STACK_LINE(442)
			::flixel::input::keyboard::FlxKey key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(445)
			::String tmp4 = code.toUpperCase();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			code = tmp4;
			HX_STACK_LINE(446)
			::haxe::ds::StringMap tmp5 = this->_keyLookup;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			::String tmp6 = code;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(446)
			::flixel::input::keyboard::FlxKey tmp9 = this->_keyList->__get(tmp8).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(446)
			key = tmp9;
			HX_STACK_LINE(448)
			bool tmp10 = (key != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(448)
			if ((tmp10)){
				HX_STACK_LINE(450)
				bool tmp11 = (key->current == Status);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(450)
				if ((tmp11)){
					HX_STACK_LINE(452)
					return true;
				}
				else{
					HX_STACK_LINE(454)
					bool tmp12 = (Status == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(454)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(454)
					if ((tmp12)){
						HX_STACK_LINE(454)
						tmp13 = (key->current == (int)2);
					}
					else{
						HX_STACK_LINE(454)
						tmp13 = false;
					}
					HX_STACK_LINE(454)
					if ((tmp13)){
						HX_STACK_LINE(456)
						return true;
					}
					else{
						HX_STACK_LINE(458)
						bool tmp14 = (Status == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(458)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(458)
						if ((tmp14)){
							HX_STACK_LINE(458)
							tmp15 = (key->current == (int)-1);
						}
						else{
							HX_STACK_LINE(458)
							tmp15 = false;
						}
						HX_STACK_LINE(458)
						if ((tmp15)){
							HX_STACK_LINE(460)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(465)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,checkKeyStatus,return )

Void FlxKeyboard_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",472,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(473)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			::haxe::ds::StringMap tmp1 = this->_nativeCorrection;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(473)
			::String tmp2 = (FlashEvent->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(473)
			int tmp3 = FlashEvent->keyCode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(473)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(473)
			Dynamic tmp5 = tmp1->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(473)
			Dynamic code = tmp5;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(473)
			bool tmp6 = (code == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(473)
			if ((tmp6)){
				HX_STACK_LINE(473)
				tmp = FlashEvent->keyCode;
			}
			else{
				HX_STACK_LINE(473)
				tmp = code;
			}
		}
		HX_STACK_LINE(473)
		int c = ((int)(tmp));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(484)
		bool tmp1 = this->enabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(486)
			return null();
		}
		HX_STACK_LINE(492)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		bool tmp5 = this->inKeyArray(tmp3->__Field(HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"), hx::paccDynamic ),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		if ((tmp5)){
			HX_STACK_LINE(494)
			::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			bool tmp7 = tmp6->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(494)
			::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(494)
			tmp9->__FieldRef(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")) = tmp8;
			HX_STACK_LINE(496)
			::flixel::_system::frontEnds::SoundFrontEnd tmp10 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(496)
			Dynamic tmp11 = tmp10->__Field(HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(496)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(496)
			if ((tmp12)){
				HX_STACK_LINE(498)
				::flixel::_system::frontEnds::SoundFrontEnd tmp13 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(498)
				::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(498)
				bool tmp15 = tmp14->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				if ((tmp15)){
					HX_STACK_LINE(498)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(498)
					::flixel::_system::frontEnds::SoundFrontEnd tmp17 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(498)
					tmp16 = tmp17->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );
				}
				HX_STACK_LINE(498)
				tmp13->__Field(HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"), hx::paccDynamic )(tmp16);
			}
			HX_STACK_LINE(502)
			::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(502)
			::flixel::_system::ui::FlxSoundTray tmp14 = tmp13->soundTray;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(502)
			bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(502)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(502)
			if ((tmp15)){
				HX_STACK_LINE(502)
				::flixel::_system::frontEnds::SoundFrontEnd tmp17 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(502)
				::flixel::_system::frontEnds::SoundFrontEnd tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(502)
				tmp16 = tmp18->__Field(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(502)
				tmp16 = false;
			}
			HX_STACK_LINE(502)
			if ((tmp16)){
				HX_STACK_LINE(504)
				::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(504)
				tmp17->soundTray->__Field(HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"), hx::paccDynamic )(null());
			}
		}
		else{
			HX_STACK_LINE(509)
			::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(509)
			int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			bool tmp8 = this->inKeyArray(tmp6->__Field(HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"), hx::paccDynamic ),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(509)
			if ((tmp8)){
				HX_STACK_LINE(511)
				::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(511)
				tmp9->__FieldRef(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")) = false;
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					::flixel::_system::frontEnds::SoundFrontEnd tmp10 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(512)
					::flixel::_system::frontEnds::SoundFrontEnd _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(512)
					Float tmp11 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) - ((Float)0.1));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(512)
					_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp11);
				}
				HX_STACK_LINE(515)
				::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(515)
				::flixel::_system::ui::FlxSoundTray tmp11 = tmp10->soundTray;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(515)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(515)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(515)
				if ((tmp12)){
					HX_STACK_LINE(515)
					::flixel::_system::frontEnds::SoundFrontEnd tmp14 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(515)
					::flixel::_system::frontEnds::SoundFrontEnd tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(515)
					tmp13 = tmp15->__Field(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(515)
					tmp13 = false;
				}
				HX_STACK_LINE(515)
				if ((tmp13)){
					HX_STACK_LINE(517)
					::flixel::FlxGame tmp14 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(517)
					tmp14->soundTray->__Field(HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"), hx::paccDynamic )(null());
				}
			}
			else{
				HX_STACK_LINE(522)
				::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(522)
				int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(522)
				bool tmp11 = this->inKeyArray(tmp9->__Field(HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"), hx::paccDynamic ),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(522)
				if ((tmp11)){
					HX_STACK_LINE(524)
					::flixel::_system::frontEnds::SoundFrontEnd tmp12 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(524)
					tmp12->__FieldRef(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")) = false;
					HX_STACK_LINE(525)
					{
						HX_STACK_LINE(525)
						::flixel::_system::frontEnds::SoundFrontEnd tmp13 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(525)
						::flixel::_system::frontEnds::SoundFrontEnd _g = tmp13;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(525)
						Float tmp14 = (_g->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) + ((Float)0.1));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(525)
						_g->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp14);
					}
					HX_STACK_LINE(528)
					::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(528)
					::flixel::_system::ui::FlxSoundTray tmp14 = tmp13->soundTray;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(528)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(528)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(528)
					if ((tmp15)){
						HX_STACK_LINE(528)
						::flixel::_system::frontEnds::SoundFrontEnd tmp17 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(528)
						::flixel::_system::frontEnds::SoundFrontEnd tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(528)
						tmp16 = tmp18->__Field(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(528)
						tmp16 = false;
					}
					HX_STACK_LINE(528)
					if ((tmp16)){
						HX_STACK_LINE(530)
						::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(530)
						tmp17->soundTray->__Field(HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"), hx::paccDynamic )(null());
					}
				}
			}
		}
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			::flixel::input::keyboard::FlxKey tmp6 = this->_keyList->__get(c).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			::flixel::input::keyboard::FlxKey obj = tmp6;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(536)
			bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			if ((tmp7)){
				HX_STACK_LINE(536)
				bool tmp8 = (obj->current > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(536)
				if ((tmp8)){
					HX_STACK_LINE(536)
					obj->current = (int)-1;
				}
				else{
					HX_STACK_LINE(536)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyUp,(void))

Void FlxKeyboard_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",543,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(544)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			::haxe::ds::StringMap tmp1 = this->_nativeCorrection;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(544)
			::String tmp2 = (FlashEvent->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(544)
			int tmp3 = FlashEvent->keyCode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(544)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(544)
			Dynamic tmp5 = tmp1->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			Dynamic code = tmp5;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(544)
			bool tmp6 = (code == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			if ((tmp6)){
				HX_STACK_LINE(544)
				tmp = FlashEvent->keyCode;
			}
			else{
				HX_STACK_LINE(544)
				tmp = code;
			}
		}
		HX_STACK_LINE(544)
		int c = ((int)(tmp));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(562)
		bool tmp1 = this->enabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		if ((tmp1)){
			HX_STACK_LINE(564)
			::flixel::input::keyboard::FlxKey tmp2 = this->_keyList->__get(c).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(564)
			::flixel::input::keyboard::FlxKey obj = tmp2;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(564)
			bool tmp3 = (obj != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(564)
			if ((tmp3)){
				HX_STACK_LINE(564)
				bool tmp4 = (obj->current > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(564)
				if ((tmp4)){
					HX_STACK_LINE(564)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(564)
					obj->current = (int)2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,onKeyDown,(void))

bool FlxKeyboard_obj::inKeyArray( Array< ::String > KeyArray,int KeyCode){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","inKeyArray",0x0dc3baa5,"flixel.input.keyboard.FlxKeyboard.inKeyArray","flixel/input/keyboard/FlxKeyboard.hx",573,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(574)
	bool tmp = (KeyArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	if ((tmp)){
		HX_STACK_LINE(576)
		return false;
	}
	else{
		HX_STACK_LINE(580)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(580)
		while((true)){
			HX_STACK_LINE(580)
			bool tmp1 = (_g < KeyArray->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(580)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(580)
			if ((tmp2)){
				HX_STACK_LINE(580)
				break;
			}
			HX_STACK_LINE(580)
			::String tmp3 = KeyArray->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			::String keyString = tmp3;		HX_STACK_VAR(keyString,"keyString");
			HX_STACK_LINE(580)
			++(_g);
			HX_STACK_LINE(582)
			bool tmp4 = (keyString == HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(582)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(582)
			if ((tmp5)){
				HX_STACK_LINE(582)
				::haxe::ds::StringMap tmp7 = this->_keyLookup;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(582)
				::String tmp9 = keyString;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(582)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(582)
				Dynamic tmp11 = tmp8->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(582)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(582)
				int tmp13 = ((int)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(582)
				int tmp14 = KeyCode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(582)
				tmp6 = (tmp13 == tmp14);
			}
			else{
				HX_STACK_LINE(582)
				tmp6 = true;
			}
			HX_STACK_LINE(582)
			if ((tmp6)){
				HX_STACK_LINE(584)
				return true;
			}
		}
	}
	HX_STACK_LINE(589)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,inKeyArray,return )

int FlxKeyboard_obj::resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",593,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(597)
	::haxe::ds::StringMap tmp = this->_nativeCorrection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	::String tmp1 = (e->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(597)
	int tmp2 = e->keyCode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(597)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(597)
	Dynamic tmp4 = tmp->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(597)
	Dynamic code = tmp4;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(598)
	bool tmp5 = (code == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(598)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(598)
	if ((tmp5)){
		HX_STACK_LINE(598)
		tmp6 = e->keyCode;
	}
	else{
		HX_STACK_LINE(598)
		tmp6 = code;
	}
	HX_STACK_LINE(598)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,resolveKeyCode,return )

Void FlxKeyboard_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","updateKeyStates",0x0e7ffd12,"flixel.input.keyboard.FlxKeyboard.updateKeyStates","flixel/input/keyboard/FlxKeyboard.hx",606,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(607)
		::flixel::input::keyboard::FlxKey tmp = this->_keyList->__get(KeyCode).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		::flixel::input::keyboard::FlxKey obj = tmp;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(609)
		bool tmp1 = (obj != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		if ((tmp1)){
			HX_STACK_LINE(611)
			bool tmp2 = (obj->current > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(611)
			if ((tmp2)){
				HX_STACK_LINE(613)
				bool tmp3 = Down;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(613)
				if ((tmp3)){
					HX_STACK_LINE(615)
					obj->current = (int)1;
				}
				else{
					HX_STACK_LINE(619)
					obj->current = (int)-1;
				}
			}
			else{
				HX_STACK_LINE(624)
				bool tmp3 = Down;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(624)
				if ((tmp3)){
					HX_STACK_LINE(626)
					obj->current = (int)2;
				}
				else{
					HX_STACK_LINE(630)
					obj->current = (int)0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyboard_obj,updateKeyStates,(void))

Void FlxKeyboard_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onFocus",0xc8fa2853,"flixel.input.keyboard.FlxKeyboard.onFocus","flixel/input/keyboard/FlxKeyboard.hx",636,0x41882875)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocus,(void))

Void FlxKeyboard_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onFocusLost",0xd20123d7,"flixel.input.keyboard.FlxKeyboard.onFocusLost","flixel/input/keyboard/FlxKeyboard.hx",640,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_LINE(640)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,onFocusLost,(void))

Array< ::Dynamic > FlxKeyboard_obj::record( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",653,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(654)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(655)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(657)
	while((true)){
		HX_STACK_LINE(657)
		bool tmp = (i < (int)256);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(657)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		if ((tmp1)){
			HX_STACK_LINE(657)
			break;
		}
		HX_STACK_LINE(659)
		int tmp2 = (i)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(659)
		::flixel::input::keyboard::FlxKey tmp3 = this->_keyList->__get(tmp2).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(659)
		::flixel::input::keyboard::FlxKey key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(661)
		bool tmp4 = (key == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(661)
		if ((tmp5)){
			HX_STACK_LINE(661)
			tmp6 = (key->current == (int)0);
		}
		else{
			HX_STACK_LINE(661)
			tmp6 = true;
		}
		HX_STACK_LINE(661)
		if ((tmp6)){
			HX_STACK_LINE(663)
			continue;
		}
		HX_STACK_LINE(666)
		bool tmp7 = (data == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(666)
		if ((tmp7)){
			HX_STACK_LINE(668)
			data = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(671)
		int tmp8 = (i - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(671)
		int tmp9 = key->current;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(671)
		::flixel::_system::replay::CodeValuePair tmp10 = ::flixel::_system::replay::CodeValuePair_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(671)
		data->push(tmp10);
	}
	HX_STACK_LINE(673)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

Void FlxKeyboard_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",683,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(684)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(685)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(686)
		::flixel::_system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(687)
		::flixel::input::keyboard::FlxKey o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(689)
		while((true)){
			HX_STACK_LINE(689)
			bool tmp = (i < l);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(689)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(689)
			if ((tmp1)){
				HX_STACK_LINE(689)
				break;
			}
			HX_STACK_LINE(691)
			int tmp2 = (i)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(691)
			::flixel::_system::replay::CodeValuePair tmp3 = Record->__get(tmp2).StaticCast< ::flixel::_system::replay::CodeValuePair >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(691)
			o = tmp3;
			HX_STACK_LINE(692)
			::flixel::input::keyboard::FlxKey tmp4 = this->_keyList->__get(o->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic )).StaticCast< ::flixel::input::keyboard::FlxKey >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(692)
			o2 = tmp4;
			HX_STACK_LINE(693)
			o2->current = o->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))

int FlxKeyboard_obj::TOTAL;


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyList,"_keyList");
	HX_MARK_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyList,"_keyList");
	HX_VISIT_MEMBER_NAME(_keyLookup,"_keyLookup");
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addKey") ) { return addKey_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
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
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
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
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return firstPressed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"checkKeyStatus") ) { return checkKeyStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return firstJustPressed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return firstJustReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_keyList") ) { _keyList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_keyLookup") ) { _keyLookup=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< ::flixel::input::keyboard::FlxKeyList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxKeyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb"));
	outFields->push(HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55"));
	outFields->push(HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxKeyboard_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,justPressed),HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyList*/ ,(int)offsetof(FlxKeyboard_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxKeyboard_obj,_keyList),HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_keyLookup),HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxKeyboard_obj::TOTAL,HX_HCSTRING("TOTAL","\xa4","\x8b","\x20","\x92")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("_keyList","\x1e","\xe7","\x44","\xdb"),
	HX_HCSTRING("_keyLookup","\x3a","\x9d","\x5f","\x55"),
	HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("firstPressed","\x52","\xe8","\x2e","\x63"),
	HX_HCSTRING("firstJustPressed","\x86","\xbb","\xa3","\x20"),
	HX_HCSTRING("firstJustReleased","\x59","\x67","\x76","\x75"),
	HX_HCSTRING("checkStatus","\x1a","\xba","\x0d","\xe8"),
	HX_HCSTRING("getKeyCode","\x76","\xa8","\xff","\xea"),
	HX_HCSTRING("getIsDown","\xa2","\x46","\x2b","\xdc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("addKey","\xfe","\x99","\x02","\x9f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("checkKeyStatus","\x49","\x54","\xba","\x04"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("inKeyArray","\x7f","\x18","\xf1","\xc5"),
	HX_HCSTRING("resolveKeyCode","\xe0","\xac","\x16","\xf4"),
	HX_HCSTRING("updateKeyStates","\xf8","\x28","\x8e","\xed"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::TOTAL,"TOTAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::TOTAL,"TOTAL");
};

#endif

hx::Class FlxKeyboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOTAL","\xa4","\x8b","\x20","\x92"),
	::String(null()) };

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard.FlxKeyboard","\x88","\xe0","\x02","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxKeyboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyboard_obj >;
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

void FlxKeyboard_obj::__boot()
{
	TOTAL= (int)256;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
