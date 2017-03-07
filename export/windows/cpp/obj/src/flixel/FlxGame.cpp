#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
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
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
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
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_FRAME("flixel.FlxGame","new",0xde7d5f44,"flixel.FlxGame.new","flixel/FlxGame.hx",44,0x34f39fed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_GameSizeX,"GameSizeX")
HX_STACK_ARG(__o_GameSizeY,"GameSizeY")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(__o_Zoom,"Zoom")
HX_STACK_ARG(__o_UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(__o_DrawFramerate,"DrawFramerate")
HX_STACK_ARG(__o_SkipSplash,"SkipSplash")
HX_STACK_ARG(__o_StartFullscreen,"StartFullscreen")
int GameSizeX = __o_GameSizeX.Default(640);
int GameSizeY = __o_GameSizeY.Default(480);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(182)
	this->_resetGame = false;
	HX_STACK_LINE(172)
	this->_startFullscreen = false;
	HX_STACK_LINE(166)
	this->_skipSplash = false;
	HX_STACK_LINE(160)
	this->_customFocusLostScreen = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxFocusLostScreen >()));
	HX_STACK_LINE(153)
	this->_customSoundTray = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxSoundTray >()));
	HX_STACK_LINE(132)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(125)
	this->_lostFocus = false;
	HX_STACK_LINE(98)
	this->_total = (int)0;
	HX_STACK_LINE(85)
	this->_gameJustStarted = false;
	HX_STACK_LINE(79)
	this->ticks = (int)0;
	HX_STACK_LINE(49)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(222)
	super::__construct();
	HX_STACK_LINE(225)
	this->_startFullscreen = StartFullscreen;
	HX_STACK_LINE(229)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	this->_inputContainer = tmp;
	HX_STACK_LINE(232)
	int tmp1 = GameSizeX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	int tmp2 = GameSizeY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	Float tmp3 = Zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3);
	HX_STACK_LINE(234)
	int tmp4 = UpdateFramerate;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	::flixel::FlxG_obj::set_updateFramerate(tmp4);
	HX_STACK_LINE(235)
	int tmp5 = DrawFramerate;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	::flixel::FlxG_obj::set_drawFramerate(tmp5);
	HX_STACK_LINE(236)
	int tmp6 = this->_stepMS;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(236)
	this->_accumulator = tmp6;
	HX_STACK_LINE(237)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(244)
	bool tmp7 = (InitialState == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(244)
	::hx::Class tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(244)
	if ((tmp7)){
		HX_STACK_LINE(244)
		tmp8 = hx::ClassOf< ::flixel::FlxState >();
	}
	else{
		HX_STACK_LINE(244)
		tmp8 = InitialState;
	}
	HX_STACK_LINE(244)
	this->_initialState = tmp8;
	HX_STACK_LINE(246)
	::String tmp9 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(246)
	Dynamic tmp10 = this->create_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(246)
	this->addEventListener(tmp9,tmp10,null(),null(),null());
}
;
	return null();
}

//FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(__o_GameSizeX,__o_GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return _result_;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void FlxGame_obj::create( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","create",0x90873e98,"flixel.FlxGame.create","flixel/FlxGame.hx",253,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(254)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(256)
			return null();
		}
		HX_STACK_LINE(258)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Dynamic tmp3 = this->create_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(260)
		int tmp4 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		this->_total = tmp4;
		HX_STACK_LINE(263)
		bool tmp5 = this->_startFullscreen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		::flixel::FlxG_obj::set_fullscreen(tmp5);
		HX_STACK_LINE(267)
		::openfl::_legacy::display::Stage tmp6 = this->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(267)
		tmp6->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(268)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(268)
		tmp7->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(269)
		::openfl::_legacy::display::Stage tmp8 = this->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(269)
		int tmp9 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(269)
		tmp8->set_frameRate(tmp9);
		HX_STACK_LINE(278)
		::openfl::_legacy::display::Sprite tmp10 = this->_inputContainer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		this->addChild(tmp10);
		HX_STACK_LINE(290)
		::hx::Class tmp11 = this->_customSoundTray;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(290)
		::flixel::_system::ui::FlxSoundTray tmp12 = ::Type_obj::createInstance(tmp11,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(290)
		this->soundTray = tmp12;
		HX_STACK_LINE(291)
		::flixel::_system::ui::FlxSoundTray tmp13 = this->soundTray;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(291)
		this->addChild(tmp13);
		HX_STACK_LINE(295)
		::hx::Class tmp14 = this->_customFocusLostScreen;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(295)
		::flixel::_system::ui::FlxFocusLostScreen tmp15 = ::Type_obj::createInstance(tmp14,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(295)
		this->_focusLostScreen = tmp15;
		HX_STACK_LINE(296)
		::flixel::_system::ui::FlxFocusLostScreen tmp16 = this->_focusLostScreen;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(296)
		this->addChild(tmp16);
		HX_STACK_LINE(302)
		::openfl::_legacy::display::Stage tmp17 = this->get_stage();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(302)
		::String tmp18 = ::openfl::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(302)
		Dynamic tmp19 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(302)
		tmp17->addEventListener(tmp18,tmp19,null(),null(),null());
		HX_STACK_LINE(303)
		::openfl::_legacy::display::Stage tmp20 = this->get_stage();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(303)
		::String tmp21 = ::openfl::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(303)
		Dynamic tmp22 = this->onFocus_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(303)
		tmp20->addEventListener(tmp21,tmp22,null(),null(),null());
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::flixel::_system::frontEnds::SignalFrontEnd tmp23 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(310)
			tmp23->__Field(HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
			HX_STACK_LINE(310)
			bool tmp24 = this->_skipSplash;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(310)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(310)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(310)
			if ((tmp25)){
				HX_STACK_LINE(310)
				::hx::Class tmp27 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(310)
				::hx::Class tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(310)
				tmp26 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(310)
				tmp26 = true;
			}
			HX_STACK_LINE(310)
			if ((tmp26)){
				HX_STACK_LINE(310)
				::hx::Class tmp27 = this->_initialState;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(310)
				::flixel::FlxState tmp28 = ::Type_obj::createInstance(tmp27,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(310)
				this->_requestedState = tmp28;
				HX_STACK_LINE(310)
				::hx::Class tmp29 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(310)
				bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(310)
				if ((tmp30)){
					HX_STACK_LINE(310)
					this->_gameJustStarted = true;
				}
			}
			else{
				HX_STACK_LINE(310)
				::hx::Class tmp27 = this->_initialState;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(310)
				::flixel::_system::FlxSplash_obj::nextState = tmp27;
				HX_STACK_LINE(310)
				::flixel::_system::FlxSplash tmp28 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(310)
				this->_requestedState = tmp28;
				HX_STACK_LINE(310)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(310)
			::flixel::FlxG_obj::reset();
		}
		HX_STACK_LINE(311)
		this->switchState();
		HX_STACK_LINE(313)
		::flixel::FlxGame tmp23 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(313)
		int tmp24 = tmp23->_stepMS;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(313)
		Float tmp25 = (Float((int)1000) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(313)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(313)
		int tmp27 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(313)
		bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(313)
		if ((tmp28)){
			HX_STACK_LINE(315)
			Dynamic();
		}
		HX_STACK_LINE(319)
		::openfl::_legacy::display::Stage tmp29 = this->get_stage();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(319)
		::String tmp30 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(319)
		Dynamic tmp31 = this->onEnterFrame_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(319)
		tmp29->addEventListener(tmp30,tmp31,null(),null(),null());
		HX_STACK_LINE(323)
		::openfl::_legacy::display::Stage tmp32 = this->get_stage();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(323)
		::String tmp33 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(323)
		Dynamic tmp34 = this->onResize_dyn();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(323)
		tmp32->addEventListener(tmp33,tmp34,null(),null(),null());
		HX_STACK_LINE(326)
		::openfl::_legacy::display::MovieClip tmp35 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(326)
		::openfl::_legacy::display::Stage tmp36 = tmp35->get_stage();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(326)
		int tmp37 = tmp36->get_stageWidth();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(326)
		::openfl::_legacy::display::MovieClip tmp38 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(326)
		::openfl::_legacy::display::Stage tmp39 = tmp38->get_stage();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(326)
		int tmp40 = tmp39->get_stageHeight();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(326)
		this->resizeGame(tmp37,tmp40);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocus",0x6f2bcf1d,"flixel.FlxGame.onFocus","flixel/FlxGame.hx",330,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(340)
		bool tmp = this->_onFocusFiredOnce;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(342)
			this->_onFocusFiredOnce = true;
			HX_STACK_LINE(343)
			return null();
		}
		HX_STACK_LINE(347)
		this->_lostFocus = false;
		HX_STACK_LINE(348)
		::flixel::_system::frontEnds::SignalFrontEnd tmp2 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		tmp2->__Field(HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(350)
		bool tmp3 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		if ((tmp4)){
			HX_STACK_LINE(352)
			::flixel::FlxState tmp5 = this->_state;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			tmp5->onFocus();
			HX_STACK_LINE(353)
			return null();
		}
		HX_STACK_LINE(357)
		::flixel::_system::ui::FlxFocusLostScreen tmp5 = this->_focusLostScreen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(357)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		if ((tmp6)){
			HX_STACK_LINE(359)
			::flixel::_system::ui::FlxFocusLostScreen tmp7 = this->_focusLostScreen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(359)
			tmp7->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
		}
		HX_STACK_LINE(367)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(367)
		int tmp8 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(367)
		tmp7->set_frameRate(tmp8);
		HX_STACK_LINE(369)
		::flixel::_system::frontEnds::SoundFrontEnd tmp9 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		tmp9->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			::flixel::_system::frontEnds::InputFrontEnd tmp10 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(371)
			Array< ::flixel::interfaces::IFlxInput > _g1 = tmp10->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(371)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(371)
				if ((tmp12)){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::flixel::interfaces::IFlxInput tmp13 = _g1->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(371)
				::flixel::interfaces::IFlxInput input = tmp13;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(371)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocusLost",0xb7eef7a1,"flixel.FlxGame.onFocusLost","flixel/FlxGame.hx",375,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(383)
		this->_lostFocus = true;
		HX_STACK_LINE(384)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		tmp->__Field(HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(386)
		bool tmp1 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		if ((tmp2)){
			HX_STACK_LINE(388)
			::flixel::FlxState tmp3 = this->_state;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			tmp3->onFocusLost();
			HX_STACK_LINE(389)
			return null();
		}
		HX_STACK_LINE(393)
		::flixel::_system::ui::FlxFocusLostScreen tmp3 = this->_focusLostScreen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(393)
		if ((tmp4)){
			HX_STACK_LINE(395)
			::flixel::_system::ui::FlxFocusLostScreen tmp5 = this->_focusLostScreen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(395)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(403)
		::openfl::_legacy::display::Stage tmp5 = this->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		int tmp6 = this->focusLostFramerate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		tmp5->set_frameRate(tmp6);
		HX_STACK_LINE(405)
		::flixel::_system::frontEnds::SoundFrontEnd tmp7 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(405)
		tmp7->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			::flixel::_system::frontEnds::InputFrontEnd tmp8 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(407)
			Array< ::flixel::interfaces::IFlxInput > _g1 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(407)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(407)
				if ((tmp10)){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				::flixel::interfaces::IFlxInput tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				::flixel::interfaces::IFlxInput input = tmp11;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(407)
				++(_g);
				HX_STACK_LINE(407)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onResize( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onResize",0xebfa470f,"flixel.FlxGame.onResize","flixel/FlxGame.hx",412,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(413)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		int width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(414)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(414)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(414)
		int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(414)
		int height = tmp5;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(417)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(417)
		tmp6->__Field(HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"), hx::paccDynamic )();
		HX_STACK_LINE(420)
		::flixel::FlxState tmp7 = this->_state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		int tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		int tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(420)
		tmp7->onResize(tmp8,tmp9);
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(421)
			::flixel::_system::frontEnds::PluginFrontEnd tmp10 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(421)
			Array< ::Dynamic > _g1 = tmp10->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				if ((tmp12)){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(421)
				::flixel::plugin::FlxPlugin tmp13 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(421)
				::flixel::plugin::FlxPlugin plugin = tmp13;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(421)
				++(_g);
				HX_STACK_LINE(421)
				bool tmp14 = plugin->exists;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(421)
				if ((tmp14)){
					HX_STACK_LINE(421)
					int tmp15 = width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					int tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(421)
					plugin->onResize(tmp15,tmp16);
				}
			}
		}
		HX_STACK_LINE(422)
		::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(422)
		int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(422)
		int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(422)
		tmp10->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp11,tmp12);
		HX_STACK_LINE(424)
		int tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(424)
		int tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(424)
		this->resizeGame(tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::resizeGame( int width,int height){
{
		HX_STACK_FRAME("flixel.FlxGame","resizeGame",0xcdcb59a2,"flixel.FlxGame.resizeGame","flixel/FlxGame.hx",428,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(429)
		{
			HX_STACK_LINE(429)
			::flixel::_system::scaleModes::BaseScaleMode tmp = ::flixel::FlxG_obj::_scaleMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(429)
			int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(429)
			int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			tmp->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp1,tmp2);
		}
		HX_STACK_LINE(436)
		::flixel::_system::ui::FlxFocusLostScreen tmp = this->_focusLostScreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		if ((tmp1)){
			HX_STACK_LINE(438)
			::flixel::_system::ui::FlxFocusLostScreen tmp2 = this->_focusLostScreen;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			tmp2->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
		}
		HX_STACK_LINE(443)
		::flixel::_system::ui::FlxSoundTray tmp2 = this->soundTray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		if ((tmp3)){
			HX_STACK_LINE(445)
			::flixel::_system::ui::FlxSoundTray tmp4 = this->soundTray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			tmp4->__Field(HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"), hx::paccDynamic )();
		}
		HX_STACK_LINE(449)
		::openfl::_legacy::display::Sprite tmp4 = this->_inputContainer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		Float tmp6 = tmp5->get_scaleX();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(449)
		Float tmp7 = (Float((int)1) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(449)
		tmp4->set_scaleX(tmp7);
		HX_STACK_LINE(450)
		::openfl::_legacy::display::Sprite tmp8 = this->_inputContainer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(450)
		::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(450)
		Float tmp10 = tmp9->get_scaleY();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(450)
		Float tmp11 = (Float((int)1) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(450)
		tmp8->set_scaleY(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGame_obj,resizeGame,(void))

Void FlxGame_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onEnterFrame",0x001b1a90,"flixel.FlxGame.onEnterFrame","flixel/FlxGame.hx",457,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(458)
		int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		this->ticks = tmp;
		HX_STACK_LINE(459)
		int tmp1 = this->ticks;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		int tmp2 = this->_total;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(459)
		this->_elapsedMS = tmp3;
		HX_STACK_LINE(460)
		int tmp4 = this->ticks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(460)
		this->_total = tmp4;
		HX_STACK_LINE(463)
		::flixel::_system::ui::FlxSoundTray tmp5 = this->soundTray;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		if ((tmp6)){
			HX_STACK_LINE(463)
			::flixel::_system::ui::FlxSoundTray tmp8 = this->soundTray;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(463)
			::flixel::_system::ui::FlxSoundTray tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			tmp7 = tmp9->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(463)
			tmp7 = false;
		}
		HX_STACK_LINE(463)
		if ((tmp7)){
			HX_STACK_LINE(465)
			::flixel::_system::ui::FlxSoundTray tmp8 = this->soundTray;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(465)
			int tmp9 = this->_elapsedMS;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(465)
			tmp8->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp9);
		}
		HX_STACK_LINE(469)
		bool tmp8 = this->_lostFocus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(469)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(469)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(469)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(469)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(469)
		if ((tmp11)){
			HX_STACK_LINE(469)
			bool tmp13 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(469)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(469)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(469)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(469)
			tmp12 = true;
		}
		HX_STACK_LINE(469)
		if ((tmp12)){
			HX_STACK_LINE(471)
			::flixel::_system::frontEnds::VCRFrontEnd tmp13 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(471)
			bool tmp14 = tmp13->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(471)
			if ((tmp14)){
				HX_STACK_LINE(473)
				::flixel::_system::frontEnds::VCRFrontEnd tmp15 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(473)
				bool tmp16 = tmp15->__Field(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(473)
				if ((tmp16)){
					HX_STACK_LINE(475)
					::flixel::_system::frontEnds::VCRFrontEnd tmp17 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(475)
					tmp17->__FieldRef(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")) = false;
				}
				else{
					HX_STACK_LINE(477)
					::flixel::FlxState tmp17 = this->_state;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(477)
					::flixel::FlxState tmp18 = this->_requestedState;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(477)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(477)
					if ((tmp19)){
						HX_STACK_LINE(479)
						return null();
					}
				}
			}
			HX_STACK_LINE(483)
			bool tmp15 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(483)
			if ((tmp15)){
				HX_STACK_LINE(485)
				int tmp16 = this->_elapsedMS;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(485)
				hx::AddEq(this->_accumulator,tmp16);
				HX_STACK_LINE(486)
				int tmp17 = this->_accumulator;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(486)
				int tmp18 = this->_maxAccumulation;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(486)
				bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(486)
				if ((tmp19)){
					HX_STACK_LINE(488)
					int tmp20 = this->_maxAccumulation;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(488)
					this->_accumulator = tmp20;
				}
				HX_STACK_LINE(491)
				while((true)){
					HX_STACK_LINE(491)
					int tmp20 = this->_accumulator;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(491)
					int tmp21 = this->_stepMS;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(491)
					bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(491)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(491)
					if ((tmp23)){
						HX_STACK_LINE(491)
						break;
					}
					HX_STACK_LINE(493)
					this->step();
					HX_STACK_LINE(494)
					int tmp24 = this->_accumulator;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(494)
					int tmp25 = this->_stepMS;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(494)
					int tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(494)
					this->_accumulator = tmp26;
				}
			}
			else{
				HX_STACK_LINE(499)
				this->step();
			}
			HX_STACK_LINE(506)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxGame","resetGame",0xde30cf45,"flixel.FlxGame.resetGame","flixel/FlxGame.hx",520,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(521)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		tmp->__Field(HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(527)
		bool tmp1 = this->_skipSplash;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(527)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(527)
		if ((tmp2)){
			HX_STACK_LINE(527)
			::hx::Class tmp4 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			::hx::Class tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(527)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(527)
			tmp3 = true;
		}
		HX_STACK_LINE(527)
		if ((tmp3)){
			HX_STACK_LINE(529)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(529)
			::flixel::FlxState tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(529)
			this->_requestedState = tmp5;
			HX_STACK_LINE(530)
			::hx::Class tmp6 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(530)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(530)
			if ((tmp7)){
				HX_STACK_LINE(532)
				this->_gameJustStarted = true;
			}
		}
		else{
			HX_STACK_LINE(537)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			::flixel::_system::FlxSplash_obj::nextState = tmp4;
			HX_STACK_LINE(538)
			::flixel::_system::FlxSplash tmp5 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(538)
			this->_requestedState = tmp5;
			HX_STACK_LINE(539)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(549)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_FRAME("flixel.FlxGame","switchState",0xedf41a61,"flixel.FlxGame.switchState","flixel/FlxGame.hx",558,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(560)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(561)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(561)
		tmp->__Field(HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"), hx::paccDynamic )();
		HX_STACK_LINE(562)
		::flixel::_system::frontEnds::CameraFrontEnd tmp1 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		tmp1->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(null());
		HX_STACK_LINE(563)
		::flixel::_system::frontEnds::InputFrontEnd tmp2 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(563)
		tmp2->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )();
		HX_STACK_LINE(565)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(565)
		tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )(null());
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			::flixel::_system::frontEnds::PluginFrontEnd tmp4 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			Array< ::Dynamic > _g1 = tmp4->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(567)
			while((true)){
				HX_STACK_LINE(567)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(567)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(567)
				if ((tmp6)){
					HX_STACK_LINE(567)
					break;
				}
				HX_STACK_LINE(567)
				::flixel::plugin::FlxPlugin tmp7 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(567)
				::flixel::plugin::FlxPlugin plugin = tmp7;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(567)
				++(_g);
				HX_STACK_LINE(567)
				bool tmp8 = plugin->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(567)
				if ((tmp8)){
					HX_STACK_LINE(567)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(568)
		::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(568)
		tmp4->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(575)
		::flixel::FlxState tmp5 = this->_state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(575)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(575)
		if ((tmp6)){
			HX_STACK_LINE(577)
			::flixel::FlxState tmp7 = this->_state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(577)
			tmp7->destroy();
		}
		HX_STACK_LINE(581)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		this->_state = tmp7;
		HX_STACK_LINE(583)
		::flixel::FlxState tmp8 = this->_state;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(583)
		tmp8->create();
		HX_STACK_LINE(585)
		bool tmp9 = this->_gameJustStarted;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(585)
		if ((tmp9)){
			HX_STACK_LINE(587)
			this->gameStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_FRAME("flixel.FlxGame","gameStart",0x0d0c34f4,"flixel.FlxGame.gameStart","flixel/FlxGame.hx",596,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(597)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		tmp->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(598)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_FRAME("flixel.FlxGame","step",0xd28f5fe8,"flixel.FlxGame.step","flixel/FlxGame.hx",608,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		bool tmp = this->_resetGame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		if ((tmp)){
			HX_STACK_LINE(612)
			{
				HX_STACK_LINE(612)
				::flixel::_system::frontEnds::SignalFrontEnd tmp1 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(612)
				tmp1->__Field(HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
				HX_STACK_LINE(612)
				bool tmp2 = this->_skipSplash;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(612)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(612)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(612)
				if ((tmp3)){
					HX_STACK_LINE(612)
					::hx::Class tmp5 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(612)
					::hx::Class tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(612)
					tmp4 = (tmp6 != null());
				}
				else{
					HX_STACK_LINE(612)
					tmp4 = true;
				}
				HX_STACK_LINE(612)
				if ((tmp4)){
					HX_STACK_LINE(612)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(612)
					::flixel::FlxState tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(612)
					this->_requestedState = tmp6;
					HX_STACK_LINE(612)
					::hx::Class tmp7 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(612)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(612)
					if ((tmp8)){
						HX_STACK_LINE(612)
						this->_gameJustStarted = true;
					}
				}
				else{
					HX_STACK_LINE(612)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(612)
					::flixel::_system::FlxSplash_obj::nextState = tmp5;
					HX_STACK_LINE(612)
					::flixel::_system::FlxSplash tmp6 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(612)
					this->_requestedState = tmp6;
					HX_STACK_LINE(612)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(612)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(613)
			this->_resetGame = false;
		}
		HX_STACK_LINE(648)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxGame","update",0x9b7d5da5,"flixel.FlxGame.update","flixel/FlxGame.hx",660,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(661)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(661)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(661)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(661)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(661)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(661)
		if ((tmp4)){
			HX_STACK_LINE(661)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(661)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(661)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(661)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(661)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(661)
			tmp5 = true;
		}
		HX_STACK_LINE(661)
		if ((tmp5)){
			HX_STACK_LINE(663)
			return null();
		}
		HX_STACK_LINE(666)
		::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(666)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(666)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(666)
		if ((tmp8)){
			HX_STACK_LINE(668)
			this->switchState();
		}
		HX_STACK_LINE(678)
		::flixel::_system::frontEnds::SignalFrontEnd tmp9 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(678)
		tmp9->__Field(HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(680)
		bool tmp10 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(680)
		if ((tmp10)){
			HX_STACK_LINE(682)
			Float tmp11 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(682)
			Float tmp12 = this->_stepSeconds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(682)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(682)
			::flixel::FlxG_obj::elapsed = tmp13;
		}
		else{
			HX_STACK_LINE(686)
			Float tmp11 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(686)
			int tmp12 = this->_elapsedMS;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(686)
			Float tmp13 = (Float(tmp12) / Float((int)1000));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(686)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(686)
			::flixel::FlxG_obj::elapsed = tmp14;
			HX_STACK_LINE(688)
			Float tmp15 = ::flixel::FlxG_obj::maxElapsed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(688)
			Float tmp16 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(688)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(688)
			Float max = tmp17;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(689)
			Float tmp18 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(689)
			Float tmp19 = max;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(689)
			bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(689)
			if ((tmp20)){
				HX_STACK_LINE(690)
				::flixel::FlxG_obj::elapsed = max;
			}
		}
		HX_STACK_LINE(693)
		this->updateInput();
		HX_STACK_LINE(696)
		::flixel::_system::frontEnds::SoundFrontEnd tmp11 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(696)
		tmp11->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(698)
			::flixel::_system::frontEnds::PluginFrontEnd tmp12 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(698)
			Array< ::Dynamic > _g1 = tmp12->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(698)
			while((true)){
				HX_STACK_LINE(698)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(698)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(698)
				if ((tmp14)){
					HX_STACK_LINE(698)
					break;
				}
				HX_STACK_LINE(698)
				::flixel::plugin::FlxPlugin tmp15 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(698)
				::flixel::plugin::FlxPlugin plugin = tmp15;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(698)
				++(_g);
				HX_STACK_LINE(698)
				bool tmp16 = plugin->exists;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(698)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(698)
				if ((tmp16)){
					HX_STACK_LINE(698)
					tmp17 = plugin->active;
				}
				else{
					HX_STACK_LINE(698)
					tmp17 = false;
				}
				HX_STACK_LINE(698)
				if ((tmp17)){
					HX_STACK_LINE(698)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(700)
		::flixel::FlxState tmp12 = this->_state;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(700)
		tmp12->tryUpdate();
		HX_STACK_LINE(702)
		{
			HX_STACK_LINE(702)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(702)
			::flixel::_system::frontEnds::CameraFrontEnd tmp13 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(702)
			Array< ::Dynamic > _g1 = tmp13->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(702)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(702)
				if ((tmp15)){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				::flixel::FlxCamera tmp16 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(702)
				::flixel::FlxCamera camera = tmp16;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(702)
				++(_g);
				HX_STACK_LINE(702)
				bool tmp17 = (camera != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(702)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(702)
				if ((tmp17)){
					HX_STACK_LINE(702)
					tmp18 = camera->exists;
				}
				else{
					HX_STACK_LINE(702)
					tmp18 = false;
				}
				HX_STACK_LINE(702)
				if ((tmp18)){
					HX_STACK_LINE(702)
					bool tmp19 = camera->active;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(702)
					if ((tmp19)){
						HX_STACK_LINE(702)
						camera->update();
					}
					HX_STACK_LINE(702)
					Float tmp20 = camera->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(702)
					Float tmp21 = camera->_flashOffset->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(702)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(702)
					camera->flashSprite->set_x(tmp22);
					HX_STACK_LINE(702)
					Float tmp23 = camera->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(702)
					Float tmp24 = camera->_flashOffset->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(702)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(702)
					camera->flashSprite->set_y(tmp25);
					HX_STACK_LINE(702)
					bool tmp26 = camera->visible;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(702)
					camera->flashSprite->set_visible(tmp26);
				}
			}
		}
		HX_STACK_LINE(703)
		::flixel::_system::frontEnds::SignalFrontEnd tmp13 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(703)
		tmp13->__Field(HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(710)
		{
			HX_STACK_LINE(710)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(710)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(710)
			while((true)){
				HX_STACK_LINE(710)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(710)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(710)
				if ((tmp15)){
					HX_STACK_LINE(710)
					break;
				}
				HX_STACK_LINE(710)
				::flixel::input::FlxSwipe tmp16 = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(710)
				::flixel::input::FlxSwipe swipe = tmp16;		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(710)
				++(_g);
				HX_STACK_LINE(712)
				swipe = null();
			}
		}
		HX_STACK_LINE(714)
		::flixel::util::FlxArrayUtil_obj::clearArray(::flixel::FlxG_obj::swipes,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateInput",0x1a1f4025,"flixel.FlxGame.updateInput","flixel/FlxGame.hx",762,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(762)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(762)
		::flixel::_system::frontEnds::InputFrontEnd tmp = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(762)
		Array< ::flixel::interfaces::IFlxInput > _g1 = tmp->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(762)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(762)
			if ((tmp2)){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(762)
			::flixel::interfaces::IFlxInput tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(762)
			::flixel::interfaces::IFlxInput input = tmp3;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(762)
			++(_g);
			HX_STACK_LINE(762)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxGame","draw",0xc8a3a4a0,"flixel.FlxGame.draw","flixel/FlxGame.hx",781,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(782)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(782)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(782)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(782)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(782)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(782)
		if ((tmp4)){
			HX_STACK_LINE(782)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(782)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(782)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(782)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(782)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(782)
			tmp5 = true;
		}
		HX_STACK_LINE(782)
		if ((tmp5)){
			HX_STACK_LINE(784)
			return null();
		}
		HX_STACK_LINE(795)
		::flixel::_system::frontEnds::SignalFrontEnd tmp6 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(795)
		tmp6->__Field(HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(798)
		::flixel::_system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(801)
			::flixel::_system::frontEnds::CameraFrontEnd tmp7 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(801)
			Array< ::Dynamic > _g1 = tmp7->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(801)
			while((true)){
				HX_STACK_LINE(801)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(801)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(801)
				if ((tmp9)){
					HX_STACK_LINE(801)
					break;
				}
				HX_STACK_LINE(801)
				::flixel::FlxCamera tmp10 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(801)
				::flixel::FlxCamera camera = tmp10;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(801)
				++(_g);
				HX_STACK_LINE(801)
				bool tmp11 = (camera == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(801)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(801)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(801)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(801)
				if ((tmp13)){
					HX_STACK_LINE(801)
					bool tmp15 = camera->exists;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(801)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(801)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(801)
					tmp14 = !(tmp17);
				}
				else{
					HX_STACK_LINE(801)
					tmp14 = true;
				}
				HX_STACK_LINE(801)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(801)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(801)
				if ((tmp15)){
					HX_STACK_LINE(801)
					bool tmp17 = camera->visible;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(801)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(801)
					tmp16 = !(tmp18);
				}
				else{
					HX_STACK_LINE(801)
					tmp16 = true;
				}
				HX_STACK_LINE(801)
				if ((tmp16)){
					HX_STACK_LINE(801)
					continue;
				}
				HX_STACK_LINE(801)
				camera->clearDrawStack();
				HX_STACK_LINE(801)
				::openfl::_legacy::display::Graphics tmp17 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(801)
				tmp17->clear();
				HX_STACK_LINE(801)
				int tmp18 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(801)
				bool tmp19 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(801)
				int tmp20 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(801)
				int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(801)
				Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(801)
				camera->fill(tmp18,tmp19,tmp22,null());
			}
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(803)
			::flixel::_system::frontEnds::PluginFrontEnd tmp7 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(803)
			Array< ::Dynamic > _g1 = tmp7->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(803)
			while((true)){
				HX_STACK_LINE(803)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(803)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(803)
				if ((tmp9)){
					HX_STACK_LINE(803)
					break;
				}
				HX_STACK_LINE(803)
				::flixel::plugin::FlxPlugin tmp10 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(803)
				::flixel::plugin::FlxPlugin plugin = tmp10;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(803)
				++(_g);
				HX_STACK_LINE(803)
				bool tmp11 = plugin->exists;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(803)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(803)
				if ((tmp11)){
					HX_STACK_LINE(803)
					tmp12 = plugin->visible;
				}
				else{
					HX_STACK_LINE(803)
					tmp12 = false;
				}
				HX_STACK_LINE(803)
				if ((tmp12)){
					HX_STACK_LINE(803)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(805)
		::flixel::FlxState tmp7 = this->_state;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(805)
		tmp7->draw();
		HX_STACK_LINE(808)
		{
			HX_STACK_LINE(808)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(808)
			::flixel::_system::frontEnds::CameraFrontEnd tmp8 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(808)
			Array< ::Dynamic > _g1 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(808)
			while((true)){
				HX_STACK_LINE(808)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(808)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(808)
				if ((tmp10)){
					HX_STACK_LINE(808)
					break;
				}
				HX_STACK_LINE(808)
				::flixel::FlxCamera tmp11 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(808)
				::flixel::FlxCamera camera = tmp11;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(808)
				++(_g);
				HX_STACK_LINE(808)
				bool tmp12 = (camera != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(808)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(808)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(808)
				if ((tmp13)){
					HX_STACK_LINE(808)
					tmp14 = camera->exists;
				}
				else{
					HX_STACK_LINE(808)
					tmp14 = false;
				}
				HX_STACK_LINE(808)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(808)
				if ((tmp14)){
					HX_STACK_LINE(808)
					tmp15 = camera->visible;
				}
				else{
					HX_STACK_LINE(808)
					tmp15 = false;
				}
				HX_STACK_LINE(808)
				if ((tmp15)){
					HX_STACK_LINE(808)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(837)
			::flixel::_system::frontEnds::CameraFrontEnd tmp8 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(837)
			Array< ::Dynamic > _g1 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(837)
			while((true)){
				HX_STACK_LINE(837)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(837)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(837)
				if ((tmp10)){
					HX_STACK_LINE(837)
					break;
				}
				HX_STACK_LINE(837)
				::flixel::FlxCamera tmp11 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(837)
				::flixel::FlxCamera camera = tmp11;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(837)
				++(_g);
				HX_STACK_LINE(837)
				bool tmp12 = (camera == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(837)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(837)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(837)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(837)
				if ((tmp14)){
					HX_STACK_LINE(837)
					bool tmp16 = camera->exists;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(837)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(837)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(837)
					tmp15 = !(tmp18);
				}
				else{
					HX_STACK_LINE(837)
					tmp15 = true;
				}
				HX_STACK_LINE(837)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(837)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(837)
				if ((tmp16)){
					HX_STACK_LINE(837)
					bool tmp18 = camera->visible;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(837)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(837)
					tmp17 = !(tmp19);
				}
				else{
					HX_STACK_LINE(837)
					tmp17 = true;
				}
				HX_STACK_LINE(837)
				if ((tmp17)){
					HX_STACK_LINE(837)
					continue;
				}
				HX_STACK_LINE(837)
				camera->drawFX();
			}
		}
		HX_STACK_LINE(839)
		::flixel::_system::frontEnds::SignalFrontEnd tmp8 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(839)
		tmp8->__Field(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { return _startFullscreen; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::_system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::_system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { _startFullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"));
	outFields->push(HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"));
	outFields->push(HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"));
	outFields->push(HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"));
	outFields->push(HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"));
	outFields->push(HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"));
	outFields->push(HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"));
	outFields->push(HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"));
	outFields->push(HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"));
	outFields->push(HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"));
	outFields->push(HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"));
	outFields->push(HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"));
	outFields->push(HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"));
	outFields->push(HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"));
	outFields->push(HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"));
	outFields->push(HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"));
	outFields->push(HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"));
	outFields->push(HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"));
	outFields->push(HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"));
	outFields->push(HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"));
	outFields->push(HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGame_obj,focusLostFramerate),HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda")},
	{hx::fsObject /*::flixel::_system::ui::FlxSoundTray*/ ,(int)offsetof(FlxGame_obj,soundTray),HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,ticks),HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_gameJustStarted),HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_initialState),HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_state),HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_total),HX_HCSTRING("_total","\x05","\x9b","\x19","\x10")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_accumulator),HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_elapsedMS),HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_stepMS),HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepSeconds),HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_maxAccumulation),HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_lostFocus),HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_onFocusFiredOnce),HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb")},
	{hx::fsObject /*::flixel::_system::ui::FlxFocusLostScreen*/ ,(int)offsetof(FlxGame_obj,_focusLostScreen),HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,_inputContainer),HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customSoundTray),HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customFocusLostScreen),HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_skipSplash),HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_startFullscreen),HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_requestedState),HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_resetGame),HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"),
	HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"),
	HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"),
	HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"),
	HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"),
	HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"),
	HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"),
	HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"),
	HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"),
	HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"),
	HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"),
	HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"),
	HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"),
	HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"),
	HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"),
	HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"),
	HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"),
	HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"),
	HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"),
	HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"),
	HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"),
	HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("resizeGame","\x06","\x84","\x99","\xb8"),
	HX_HCSTRING("onEnterFrame","\xf4","\xa5","\x93","\xda"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("gameStart","\x10","\x63","\x26","\xb9"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateInput","\x41","\x2d","\xb6","\xa3"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxGame","\x52","\xad","\x0b","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxGame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGame_obj >;
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
