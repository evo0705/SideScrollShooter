#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",14,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->volume = ((Float)1);
	HX_STACK_LINE(52)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(23)
	this->muted = false;
	HX_STACK_LINE(257)
	this->volumeUpKeys = Array_obj< ::String >::__new().Add(HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")).Add(HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"));
	HX_STACK_LINE(258)
	this->volumeDownKeys = Array_obj< ::String >::__new().Add(HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")).Add(HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"));
	HX_STACK_LINE(259)
	this->muteKeys = Array_obj< ::String >::__new().Add(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")).Add(HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"));
	HX_STACK_LINE(262)
	::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	this->list = tmp;
	HX_STACK_LINE(263)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(263)
	this->_soundCache = tmp1;
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > _result_ = new SoundFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",73,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(74)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::flixel::_system::FlxSound tmp2 = ::flixel::_system::FlxSound_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			this->music = tmp2;
		}
		else{
			HX_STACK_LINE(78)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			bool tmp3 = tmp2->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			if ((tmp3)){
				HX_STACK_LINE(80)
				::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				::flixel::_system::FlxSound _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(80)
				bool tmp5 = _this->__Field(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				_this->__Field(HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"), hx::paccDynamic )(tmp5,true,true);
				HX_STACK_LINE(80)
				_this;
			}
		}
		HX_STACK_LINE(83)
		::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Dynamic tmp3 = Music;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		bool tmp4 = Looped;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		tmp2->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp3,tmp4,null(),null());
		HX_STACK_LINE(84)
		::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		Float tmp6 = Volume;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		tmp5->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(85)
		::flixel::_system::FlxSound tmp7 = this->music;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		tmp7->__FieldRef(HX_HCSTRING("persist","\x14","\x22","\x71","\x83")) = true;
		HX_STACK_LINE(86)
		::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		tmp8->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SoundFrontEnd_obj,playMusic,(void))

::flixel::_system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",101,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(102)
		bool tmp = (EmbeddedSound == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(102)
			tmp1 = (URL == null());
		}
		else{
			HX_STACK_LINE(102)
			tmp1 = false;
		}
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(108)
		::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::flixel::_system::FlxSound tmp3 = tmp2->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::flixel::_system::FlxSound sound = tmp3;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(110)
		bool tmp4 = (EmbeddedSound != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		if ((tmp4)){
			HX_STACK_LINE(112)
			Dynamic tmp5 = EmbeddedSound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			sound->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(116)
			::String tmp5 = URL;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			sound->__Field(HX_HCSTRING("loadStream","\x46","\x43","\x58","\xc6"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);
		}
		HX_STACK_LINE(119)
		Float tmp5 = Volume;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		sound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(121)
		bool tmp6 = AutoPlay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		if ((tmp6)){
			HX_STACK_LINE(123)
			sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
		HX_STACK_LINE(126)
		::flixel::_system::FlxSound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,load,return )

::openfl::_legacy::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",137,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(138)
	::haxe::ds::StringMap tmp = this->_soundCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::String tmp1 = EmbeddedSound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	if ((tmp2)){
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp3 = this->_soundCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::String tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		::openfl::_legacy::media::Sound tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		::openfl::_legacy::media::Sound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		return tmp6;
	}
	else{
		HX_STACK_LINE(144)
		::String tmp3 = EmbeddedSound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		::openfl::_legacy::media::Sound tmp4 = ::openfl::_legacy::Assets_obj::getSound(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		::openfl::_legacy::media::Sound sound = tmp4;		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(145)
		::haxe::ds::StringMap tmp5 = this->_soundCache;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::String tmp6 = EmbeddedSound;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		::openfl::_legacy::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		tmp5->set(tmp6,tmp7);
		HX_STACK_LINE(147)
		::openfl::_legacy::media::Sound tmp8 = sound;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		return tmp8;
	}
	HX_STACK_LINE(138)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

::flixel::_system::FlxSound SoundFrontEnd_obj::play( ::String EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",161,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(162)
		::openfl::_legacy::media::Sound sound = null();		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(164)
		::haxe::ds::StringMap tmp = this->_soundCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		::String tmp1 = EmbeddedSound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(166)
			::haxe::ds::StringMap tmp3 = this->_soundCache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			::String tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			::openfl::_legacy::media::Sound tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			sound = tmp5;
		}
		else{
			HX_STACK_LINE(170)
			::String tmp3 = EmbeddedSound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			::openfl::_legacy::media::Sound tmp4 = ::openfl::_legacy::Assets_obj::getSound(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			sound = tmp4;
			HX_STACK_LINE(171)
			::haxe::ds::StringMap tmp5 = this->_soundCache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			::String tmp6 = EmbeddedSound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			::openfl::_legacy::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(173)
		::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::flixel::_system::FlxSound tmp4 = tmp3->recycle(hx::ClassOf< ::flixel::_system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		::openfl::_legacy::media::Sound tmp5 = sound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		bool tmp6 = Looped;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		bool tmp7 = AutoDestroy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		Dynamic tmp8 = OnComplete;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		::flixel::_system::FlxSound tmp9 = tmp4->__Field(HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		::flixel::_system::FlxSound flixelSound = tmp9;		HX_STACK_VAR(flixelSound,"flixelSound");
		HX_STACK_LINE(174)
		Float tmp10 = Volume;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		flixelSound->__Field(HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(175)
		::flixel::_system::FlxSound tmp11 = flixelSound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,play,return )

::flixel::_system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",189,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(190)
		Float tmp = Volume;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		bool tmp1 = Looped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		bool tmp2 = AutoDestroy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::String tmp3 = URL;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		Dynamic tmp4 = OnComplete;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		::flixel::_system::FlxSound tmp5 = this->load(null(),tmp,tmp1,tmp2,true,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",197,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(198)
			::flixel::_system::FlxSound tmp4 = this->music;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			::flixel::_system::FlxSound tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			tmp3 = tmp6->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(198)
			tmp3 = false;
		}
		HX_STACK_LINE(198)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(198)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			::flixel::_system::FlxSound tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			tmp4 = tmp6->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(198)
			tmp4 = false;
		}
		HX_STACK_LINE(198)
		if ((tmp4)){
			HX_STACK_LINE(200)
			::flixel::_system::FlxSound tmp5 = this->music;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			tmp5->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			::flixel::group::FlxTypedGroup tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			Array< ::Dynamic > _g1 = tmp5->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(203)
			while((true)){
				HX_STACK_LINE(203)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				if ((tmp7)){
					HX_STACK_LINE(203)
					break;
				}
				HX_STACK_LINE(203)
				::flixel::_system::FlxSound tmp8 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				::flixel::_system::FlxSound sound = tmp8;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(203)
				++(_g);
				HX_STACK_LINE(205)
				bool tmp9 = (sound != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(205)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(205)
				if ((tmp10)){
					HX_STACK_LINE(205)
					tmp11 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(205)
					tmp11 = false;
				}
				HX_STACK_LINE(205)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				if ((tmp11)){
					HX_STACK_LINE(205)
					tmp12 = sound->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(205)
					tmp12 = false;
				}
				HX_STACK_LINE(205)
				if ((tmp12)){
					HX_STACK_LINE(207)
					sound->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",216,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		if ((tmp1)){
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			tmp2 = tmp4->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(217)
			tmp2 = false;
		}
		HX_STACK_LINE(217)
		if ((tmp2)){
			HX_STACK_LINE(219)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			tmp3->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(222)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				if ((tmp5)){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(222)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(222)
				++(_g);
				HX_STACK_LINE(224)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(224)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(224)
				if ((tmp7)){
					HX_STACK_LINE(224)
					tmp8 = sound->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic );
				}
				else{
					HX_STACK_LINE(224)
					tmp8 = false;
				}
				HX_STACK_LINE(224)
				if ((tmp8)){
					HX_STACK_LINE(226)
					sound->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",237,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(238)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		if ((tmp1)){
			HX_STACK_LINE(238)
			bool tmp3 = ForceDestroy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			if ((tmp7)){
				HX_STACK_LINE(238)
				::flixel::_system::FlxSound tmp8 = this->music;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				::flixel::_system::FlxSound tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				::flixel::_system::FlxSound tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(238)
				bool tmp11 = tmp10->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(238)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(238)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(238)
				tmp2 = !(tmp13);
			}
			else{
				HX_STACK_LINE(238)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(238)
			tmp2 = false;
		}
		HX_STACK_LINE(238)
		if ((tmp2)){
			HX_STACK_LINE(240)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(241)
			this->music = null();
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			Array< ::Dynamic > _g1 = tmp3->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(244)
				if ((tmp5)){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				::flixel::_system::FlxSound tmp6 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(244)
				::flixel::_system::FlxSound sound = tmp6;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(244)
				++(_g);
				HX_STACK_LINE(246)
				bool tmp7 = (sound != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				if ((tmp7)){
					HX_STACK_LINE(246)
					bool tmp9 = ForceDestroy;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(246)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(246)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(246)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(246)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(246)
					if ((tmp13)){
						HX_STACK_LINE(246)
						bool tmp14 = sound->__Field(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(246)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(246)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(246)
						tmp8 = !(tmp16);
					}
					else{
						HX_STACK_LINE(246)
						tmp8 = true;
					}
				}
				else{
					HX_STACK_LINE(246)
					tmp8 = false;
				}
				HX_STACK_LINE(246)
				if ((tmp8)){
					HX_STACK_LINE(248)
					sound->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",270,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		if ((tmp1)){
			HX_STACK_LINE(271)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			::flixel::_system::FlxSound tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			tmp2 = tmp4->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(271)
			tmp2 = false;
		}
		HX_STACK_LINE(271)
		if ((tmp2)){
			HX_STACK_LINE(273)
			::flixel::_system::FlxSound tmp3 = this->music;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			tmp3->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
		HX_STACK_LINE(276)
		::flixel::group::FlxTypedGroup tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(276)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		if ((tmp4)){
			HX_STACK_LINE(276)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			::flixel::group::FlxTypedGroup tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			tmp5 = tmp7->active;
		}
		else{
			HX_STACK_LINE(276)
			tmp5 = false;
		}
		HX_STACK_LINE(276)
		if ((tmp5)){
			HX_STACK_LINE(278)
			::flixel::group::FlxTypedGroup tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			tmp6->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",283,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(284)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		if ((tmp1)){
			HX_STACK_LINE(286)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			tmp2->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(289)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(289)
				if ((tmp4)){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(289)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(289)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(289)
				++(_g);
				HX_STACK_LINE(291)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				if ((tmp6)){
					HX_STACK_LINE(293)
					sound->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",299,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		::flixel::_system::FlxSound tmp = this->music;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(302)
			::flixel::_system::FlxSound tmp2 = this->music;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			tmp2->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		}
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			::flixel::group::FlxTypedGroup tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(305)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				if ((tmp4)){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				::flixel::_system::FlxSound tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::FlxSound >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				::flixel::_system::FlxSound sound = tmp5;		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(305)
				++(_g);
				HX_STACK_LINE(307)
				bool tmp6 = (sound != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				if ((tmp6)){
					HX_STACK_LINE(309)
					sound->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",318,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		bool tmp1 = (tmp->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		if ((tmp1)){
			HX_STACK_LINE(321)
			::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(321)
			this->set_volume(tmp2->data->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic ));
		}
		else{
			HX_STACK_LINE(325)
			this->set_volume(((Float)0.5));
		}
		HX_STACK_LINE(328)
		::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		bool tmp3 = (tmp2->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		if ((tmp3)){
			HX_STACK_LINE(330)
			::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			this->muted = tmp4->data->__Field(HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(334)
			this->muted = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",339,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(340)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		bool tmp1 = (Volume < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(340)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(340)
			tmp2 = Volume;
		}
		HX_STACK_LINE(340)
		Float lowerBound = tmp2;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(340)
		bool tmp3 = (lowerBound > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		if ((tmp3)){
			HX_STACK_LINE(340)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(340)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(340)
	Volume = tmp;
	HX_STACK_LINE(342)
	Dynamic tmp1 = this->volumeHandler_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	if ((tmp2)){
		HX_STACK_LINE(344)
		bool tmp3 = this->muted;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		if ((tmp3)){
			HX_STACK_LINE(344)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(344)
			tmp4 = Volume;
		}
		HX_STACK_LINE(344)
		Float param = tmp4;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(345)
		Float tmp5 = param;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		this->volumeHandler(tmp5);
	}
	HX_STACK_LINE(347)
	Float tmp3 = this->volume = Volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(_soundCache,"_soundCache");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(_soundCache,"_soundCache");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { return _soundCache; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { _soundCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SoundFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"));
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"));
	outFields->push(HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"));
	outFields->push(HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"));
	outFields->push(HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("_soundCache","\x12","\x7c","\xe3","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SoundFrontEnd_obj,_soundCache),HX_HCSTRING("_soundCache","\x12","\x7c","\xe3","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10"),
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("volumeHandler","\x10","\xfd","\x6f","\x5d"),
	HX_HCSTRING("volumeUpKeys","\x69","\xbb","\xf5","\x23"),
	HX_HCSTRING("volumeDownKeys","\x70","\x2f","\x58","\x0b"),
	HX_HCSTRING("muteKeys","\x6d","\x5d","\x88","\x16"),
	HX_HCSTRING("soundTrayEnabled","\x9c","\x10","\x68","\xe0"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("_soundCache","\x12","\x7c","\xe3","\x7c"),
	HX_HCSTRING("playMusic","\x11","\xfe","\x3e","\x31"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("loadSavedPrefs","\xef","\xed","\x3b","\x02"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SoundFrontEnd","\x27","\xc6","\xa9","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SoundFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundFrontEnd_obj >;
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
