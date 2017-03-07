#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace flixel{
namespace _system{

Void FlxSound_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxSound","new",0xa043445c,"flixel.system.FlxSound.new","flixel/system/FlxSound.hx",22,0x7d78fc74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(128)
	this->_alreadyPaused = false;
	HX_STACK_LINE(108)
	this->_volumeAdjust = ((Float)1.0);
	HX_STACK_LINE(135)
	super::__construct();
	HX_STACK_LINE(136)
	this->reset();
}
;
	return null();
}

//FlxSound_obj::~FlxSound_obj() { }

Dynamic FlxSound_obj::__CreateEmpty() { return  new FlxSound_obj; }
hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new()
{  hx::ObjectPtr< FlxSound_obj > _result_ = new FlxSound_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSound_obj > _result_ = new FlxSound_obj();
	_result_->__construct();
	return _result_;}

Void FlxSound_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","reset",0xf879b4cb,"flixel.system.FlxSound.reset","flixel/system/FlxSound.hx",143,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		this->destroy();
		HX_STACK_LINE(146)
		this->x = (int)0;
		HX_STACK_LINE(147)
		this->y = (int)0;
		HX_STACK_LINE(149)
		this->time = (int)0;
		HX_STACK_LINE(150)
		this->_paused = false;
		HX_STACK_LINE(151)
		this->_volume = ((Float)1.0);
		HX_STACK_LINE(152)
		this->_volumeAdjust = ((Float)1.0);
		HX_STACK_LINE(153)
		this->_looped = false;
		HX_STACK_LINE(154)
		this->_target = null();
		HX_STACK_LINE(155)
		this->_radius = (int)0;
		HX_STACK_LINE(156)
		this->_proximityPan = false;
		HX_STACK_LINE(157)
		this->set_visible(false);
		HX_STACK_LINE(158)
		this->amplitude = (int)0;
		HX_STACK_LINE(159)
		this->amplitudeLeft = (int)0;
		HX_STACK_LINE(160)
		this->amplitudeRight = (int)0;
		HX_STACK_LINE(161)
		this->autoDestroy = false;
		HX_STACK_LINE(163)
		::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(165)
			::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			this->_transform = tmp2;
		}
		HX_STACK_LINE(167)
		::openfl::media::SoundTransform tmp2 = this->_transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		tmp2->pan = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))

Void FlxSound_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","destroy",0x15a54ef6,"flixel.system.FlxSound.destroy","flixel/system/FlxSound.hx",171,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		this->_transform = null();
		HX_STACK_LINE(173)
		this->set_exists(false);
		HX_STACK_LINE(174)
		this->set_active(false);
		HX_STACK_LINE(175)
		this->_target = null();
		HX_STACK_LINE(176)
		this->name = null();
		HX_STACK_LINE(177)
		this->artist = null();
		HX_STACK_LINE(179)
		::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		if ((tmp1)){
			HX_STACK_LINE(181)
			::openfl::_legacy::media::SoundChannel tmp2 = this->_channel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			::String tmp3 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			Dynamic tmp4 = this->stopped_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			tmp2->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(182)
			::openfl::_legacy::media::SoundChannel tmp5 = this->_channel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			tmp5->stop();
			HX_STACK_LINE(183)
			this->_channel = null();
		}
		HX_STACK_LINE(186)
		::openfl::_legacy::media::Sound tmp2 = this->_sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		if ((tmp3)){
			HX_STACK_LINE(188)
			::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			::String tmp5 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			Dynamic tmp6 = this->gotID3_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(188)
			tmp4->removeEventListener(tmp5,tmp6,null());
			HX_STACK_LINE(189)
			this->_sound = null();
		}
		HX_STACK_LINE(192)
		this->onComplete = null();
		HX_STACK_LINE(194)
		this->super::destroy();
	}
return null();
}


Void FlxSound_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","update",0xf091b78d,"flixel.system.FlxSound.update","flixel/system/FlxSound.hx",201,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(207)
		::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		this->time = tmp4;
		HX_STACK_LINE(209)
		Float radialMultiplier = ((Float)1.0);		HX_STACK_VAR(radialMultiplier,"radialMultiplier");
		HX_STACK_LINE(210)
		Float fadeMultiplier = ((Float)1.0);		HX_STACK_VAR(fadeMultiplier,"fadeMultiplier");
		HX_STACK_LINE(213)
		::flixel::FlxObject tmp5 = this->_target;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		if ((tmp6)){
			HX_STACK_LINE(215)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					::flixel::util::FlxPool tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(215)
					::flixel::FlxObject tmp11 = this->_target;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					::flixel::FlxObject tmp13 = this->_target;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(215)
					Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint tmp15 = tmp10->set(tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(215)
					point->_inPool = false;
					HX_STACK_LINE(215)
					tmp8 = point;
				}
				HX_STACK_LINE(215)
				::flixel::util::FlxPoint Point1 = tmp8;		HX_STACK_VAR(Point1,"Point1");
				HX_STACK_LINE(215)
				::flixel::util::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					::flixel::util::FlxPool tmp10 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					Float tmp12 = this->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(215)
					::flixel::util::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(215)
					point->_inPool = false;
					HX_STACK_LINE(215)
					tmp9 = point;
				}
				HX_STACK_LINE(215)
				::flixel::util::FlxPoint Point2 = tmp9;		HX_STACK_VAR(Point2,"Point2");
				HX_STACK_LINE(215)
				Float tmp10 = (Point1->x - Point2->x);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(215)
				Float dx = tmp10;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(215)
				Float tmp11 = (Point1->y - Point2->y);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(215)
				Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					bool tmp12 = Point1->_weak;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					if ((tmp12)){
						HX_STACK_LINE(215)
						Point1->put();
					}
				}
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					bool tmp12 = Point2->_weak;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					if ((tmp12)){
						HX_STACK_LINE(215)
						Point2->put();
					}
				}
				HX_STACK_LINE(215)
				Float tmp12 = (dx * dx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(215)
				Float tmp13 = (dy * dy);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(215)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(215)
				tmp7 = ::Math_obj::sqrt(tmp14);
			}
			HX_STACK_LINE(215)
			Float tmp8 = this->_radius;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			radialMultiplier = tmp9;
			HX_STACK_LINE(216)
			bool tmp10 = (radialMultiplier < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(216)
			if ((tmp10)){
				HX_STACK_LINE(216)
				radialMultiplier = (int)0;
			}
			HX_STACK_LINE(217)
			bool tmp11 = (radialMultiplier > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			if ((tmp11)){
				HX_STACK_LINE(217)
				radialMultiplier = (int)1;
			}
			HX_STACK_LINE(219)
			Float tmp12 = ((int)1 - radialMultiplier);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(219)
			radialMultiplier = tmp12;
			HX_STACK_LINE(221)
			bool tmp13 = this->_proximityPan;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			if ((tmp13)){
				HX_STACK_LINE(223)
				Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				::flixel::FlxObject tmp15 = this->_target;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(223)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(223)
				Float tmp18 = this->_radius;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(223)
				Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(223)
				Float d = tmp19;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(224)
				bool tmp20 = (d < (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(224)
				if ((tmp20)){
					HX_STACK_LINE(226)
					d = (int)-1;
				}
				else{
					HX_STACK_LINE(228)
					bool tmp21 = (d > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(228)
					if ((tmp21)){
						HX_STACK_LINE(230)
						d = (int)1;
					}
				}
				HX_STACK_LINE(232)
				::openfl::media::SoundTransform tmp21 = this->_transform;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(232)
				tmp21->pan = d;
			}
		}
		HX_STACK_LINE(236)
		Float tmp7 = (radialMultiplier * fadeMultiplier);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(236)
		this->_volumeAdjust = tmp7;
		HX_STACK_LINE(237)
		this->updateTransform();
		HX_STACK_LINE(239)
		::openfl::media::SoundTransform tmp8 = this->_transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		Float tmp9 = tmp8->volume;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(239)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		if ((tmp10)){
			HX_STACK_LINE(241)
			::openfl::_legacy::media::SoundChannel tmp11 = this->_channel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(241)
			Float tmp12 = tmp11->get_leftPeak();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(241)
			::openfl::media::SoundTransform tmp13 = this->_transform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(241)
			Float tmp14 = tmp13->volume;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			this->amplitudeLeft = tmp15;
			HX_STACK_LINE(242)
			::openfl::_legacy::media::SoundChannel tmp16 = this->_channel;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(242)
			Float tmp17 = tmp16->get_rightPeak();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(242)
			::openfl::media::SoundTransform tmp18 = this->_transform;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(242)
			Float tmp19 = tmp18->volume;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(242)
			Float tmp20 = (Float(tmp17) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(242)
			this->amplitudeRight = tmp20;
			HX_STACK_LINE(243)
			Float tmp21 = this->amplitudeLeft;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(243)
			Float tmp22 = this->amplitudeRight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(243)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(243)
			Float tmp24 = (tmp23 * ((Float)0.5));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(243)
			this->amplitude = tmp24;
		}
		else{
			HX_STACK_LINE(247)
			this->amplitudeLeft = (int)0;
			HX_STACK_LINE(248)
			this->amplitudeRight = (int)0;
			HX_STACK_LINE(249)
			this->amplitude = (int)0;
		}
	}
return null();
}


Void FlxSound_obj::kill( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","kill",0x989fe822,"flixel.system.FlxSound.kill","flixel/system/FlxSound.hx",254,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		this->super::kill();
		HX_STACK_LINE(256)
		this->cleanup(false,null(),null());
	}
return null();
}


::flixel::_system::FlxSound FlxSound_obj::loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","loadEmbedded",0xbf233254,"flixel.system.FlxSound.loadEmbedded","flixel/system/FlxSound.hx",269,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(270)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(272)
		Dynamic tmp = EmbeddedSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::_legacy::media::Sound >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		if ((tmp1)){
			HX_STACK_LINE(274)
			this->_sound = EmbeddedSound;
		}
		else{
			HX_STACK_LINE(276)
			Dynamic tmp2 = EmbeddedSound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			if ((tmp3)){
				HX_STACK_LINE(278)
				Dynamic tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				::openfl::_legacy::media::Sound tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(278)
				this->_sound = tmp5;
			}
			else{
				HX_STACK_LINE(280)
				Dynamic tmp4 = EmbeddedSound;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(280)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(280)
				if ((tmp5)){
					HX_STACK_LINE(282)
					Dynamic tmp6 = EmbeddedSound;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(282)
					::openfl::_legacy::media::Sound tmp7 = ::openfl::_legacy::Assets_obj::getSound(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(282)
					this->_sound = tmp7;
				}
			}
		}
		HX_STACK_LINE(286)
		this->_looped = Looped;
		HX_STACK_LINE(287)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(288)
		this->updateTransform();
		HX_STACK_LINE(289)
		this->set_exists(true);
		HX_STACK_LINE(290)
		this->onComplete = OnComplete;
		HX_STACK_LINE(291)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

::flixel::_system::FlxSound FlxSound_obj::loadStream( ::String SoundURL,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","loadStream",0x893586ca,"flixel.system.FlxSound.loadStream","flixel/system/FlxSound.hx",304,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(SoundURL,"SoundURL")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(305)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(307)
		::openfl::_legacy::media::Sound tmp = ::openfl::_legacy::media::Sound_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		this->_sound = tmp;
		HX_STACK_LINE(308)
		::openfl::_legacy::media::Sound tmp1 = this->_sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		Dynamic tmp3 = this->gotID3_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		tmp1->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(309)
		::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(309)
		::openfl::_legacy::net::URLRequest tmp5 = ::openfl::_legacy::net::URLRequest_obj::__new(SoundURL);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		tmp4->load(tmp5,null(),null());
		HX_STACK_LINE(310)
		this->_looped = Looped;
		HX_STACK_LINE(311)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(312)
		this->updateTransform();
		HX_STACK_LINE(313)
		this->set_exists(true);
		HX_STACK_LINE(314)
		this->onComplete = OnComplete;
		HX_STACK_LINE(315)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadStream,return )

::flixel::_system::FlxSound FlxSound_obj::loadByteArray( ::openfl::_legacy::utils::ByteArray Bytes,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","loadByteArray",0x83f8d967,"flixel.system.FlxSound.loadByteArray","flixel/system/FlxSound.hx",327,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bytes,"Bytes")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(328)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(333)
		::openfl::_legacy::media::Sound tmp = ::openfl::_legacy::media::Sound_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		this->_sound = tmp;
		HX_STACK_LINE(334)
		::openfl::_legacy::media::Sound tmp1 = this->_sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		Dynamic tmp3 = this->gotID3_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		tmp1->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(335)
		::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		::openfl::_legacy::utils::ByteArray tmp5 = Bytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		int tmp6 = Bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		tmp4->loadCompressedDataFromByteArray(tmp5,tmp6,null());
		HX_STACK_LINE(336)
		this->_looped = Looped;
		HX_STACK_LINE(337)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(338)
		this->updateTransform();
		HX_STACK_LINE(339)
		this->set_exists(true);
		HX_STACK_LINE(340)
		this->onComplete = OnComplete;
		HX_STACK_LINE(342)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadByteArray,return )

::flixel::_system::FlxSound FlxSound_obj::proximity( Float X,Float Y,::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  __o_Pan){
bool Pan = __o_Pan.Default(true);
	HX_STACK_FRAME("flixel.system.FlxSound","proximity",0x52ce623b,"flixel.system.FlxSound.proximity","flixel/system/FlxSound.hx",357,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(TargetObject,"TargetObject")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Pan,"Pan")
{
		HX_STACK_LINE(358)
		this->x = X;
		HX_STACK_LINE(359)
		this->y = Y;
		HX_STACK_LINE(360)
		this->_target = TargetObject;
		HX_STACK_LINE(361)
		this->_radius = Radius;
		HX_STACK_LINE(362)
		this->_proximityPan = Pan;
		HX_STACK_LINE(363)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

::flixel::_system::FlxSound FlxSound_obj::play( hx::Null< bool >  __o_ForceRestart){
bool ForceRestart = __o_ForceRestart.Default(false);
	HX_STACK_FRAME("flixel.system.FlxSound","play",0x9bf03678,"flixel.system.FlxSound.play","flixel/system/FlxSound.hx",372,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceRestart,"ForceRestart")
{
		HX_STACK_LINE(373)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		if ((tmp1)){
			HX_STACK_LINE(375)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(377)
		bool tmp2 = ForceRestart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		if ((tmp2)){
			HX_STACK_LINE(379)
			this->cleanup(false,true,true);
		}
		else{
			HX_STACK_LINE(381)
			::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			if ((tmp4)){
				HX_STACK_LINE(384)
				return hx::ObjectPtr<OBJ_>(this);
			}
		}
		HX_STACK_LINE(387)
		bool tmp3 = this->_paused;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		if ((tmp3)){
			HX_STACK_LINE(389)
			this->resume();
		}
		else{
			HX_STACK_LINE(393)
			this->startSound((int)0);
		}
		HX_STACK_LINE(395)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,play,return )

::flixel::_system::FlxSound FlxSound_obj::resume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","resume",0x72109b31,"flixel.system.FlxSound.resume","flixel/system/FlxSound.hx",402,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	if ((tmp)){
		HX_STACK_LINE(405)
		Float tmp1 = this->time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		this->startSound(tmp1);
	}
	HX_STACK_LINE(407)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,return )

::flixel::_system::FlxSound FlxSound_obj::pause( ){
	HX_STACK_FRAME("flixel.system.FlxSound","pause",0xcf0941f2,"flixel.system.FlxSound.pause","flixel/system/FlxSound.hx",414,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(415)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(415)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	if ((tmp2)){
		HX_STACK_LINE(417)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(419)
	::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(419)
	Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(419)
	this->time = tmp4;
	HX_STACK_LINE(420)
	this->_paused = true;
	HX_STACK_LINE(421)
	this->cleanup(false,false,false);
	HX_STACK_LINE(422)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,return )

::flixel::_system::FlxSound FlxSound_obj::stop( ){
	HX_STACK_FRAME("flixel.system.FlxSound","stop",0x9df1f886,"flixel.system.FlxSound.stop","flixel/system/FlxSound.hx",429,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(430)
	bool tmp = this->autoDestroy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	this->cleanup(tmp,true,true);
	HX_STACK_LINE(431)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,return )

::flixel::_system::FlxSound FlxSound_obj::fadeOut( hx::Null< Float >  __o_Duration,Dynamic __o_To){
Float Duration = __o_Duration.Default(1);
Dynamic To = __o_To.Default(0);
	HX_STACK_FRAME("flixel.system.FlxSound","fadeOut",0x225b5a6e,"flixel.system.FlxSound.fadeOut","flixel/system/FlxSound.hx",441,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(To,"To")
{
		HX_STACK_LINE(442)
		Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		Dynamic tmp1 = To;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		Float tmp2 = Duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		Dynamic tmp3 = this->volumeTween_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		::flixel::tweens::FlxTween_obj::num(tmp,tmp1,tmp2,null(),tmp3);
		HX_STACK_LINE(443)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,fadeOut,return )

::flixel::_system::FlxSound FlxSound_obj::fadeIn( hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_From,hx::Null< Float >  __o_To){
Float Duration = __o_Duration.Default(1);
Float From = __o_From.Default(0);
Float To = __o_To.Default(1);
	HX_STACK_FRAME("flixel.system.FlxSound","fadeIn",0x4e377e05,"flixel.system.FlxSound.fadeIn","flixel/system/FlxSound.hx",454,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(From,"From")
	HX_STACK_ARG(To,"To")
{
		HX_STACK_LINE(455)
		Float tmp = From;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		Float tmp1 = To;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		Float tmp2 = Duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		Dynamic tmp3 = this->volumeTween_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		::flixel::tweens::FlxTween_obj::num(tmp,tmp1,tmp2,null(),tmp3);
		HX_STACK_LINE(456)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,fadeIn,return )

Void FlxSound_obj::volumeTween( Float f){
{
		HX_STACK_FRAME("flixel.system.FlxSound","volumeTween",0x6ac0ca2d,"flixel.system.FlxSound.volumeTween","flixel/system/FlxSound.hx",460,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(461)
		Float tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		this->set_volume(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,volumeTween,(void))

Float FlxSound_obj::getActualVolume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","getActualVolume",0xa3e81aba,"flixel.system.FlxSound.getActualVolume","flixel/system/FlxSound.hx",470,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(471)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	Float tmp1 = this->_volumeAdjust;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(471)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

Void FlxSound_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.system.FlxSound","setPosition",0xba193a67,"flixel.system.FlxSound.setPosition","flixel/system/FlxSound.hx",482,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(483)
		this->x = X;
		HX_STACK_LINE(484)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,setPosition,(void))

Void FlxSound_obj::updateTransform( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","updateTransform",0x01697c1f,"flixel.system.FlxSound.updateTransform","flixel/system/FlxSound.hx",491,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		::flixel::_system::frontEnds::SoundFrontEnd tmp = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		bool tmp1 = tmp->__Field(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		if ((tmp1)){
			HX_STACK_LINE(492)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(492)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(492)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		Float tmp6 = this->_volume;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(492)
		Float tmp8 = this->_volumeAdjust;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		::openfl::media::SoundTransform tmp10 = this->_transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(492)
		tmp10->volume = tmp9;
		HX_STACK_LINE(493)
		::openfl::_legacy::media::SoundChannel tmp11 = this->_channel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		if ((tmp12)){
			HX_STACK_LINE(495)
			::openfl::_legacy::media::SoundChannel tmp13 = this->_channel;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(495)
			::openfl::media::SoundTransform tmp14 = this->_transform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(495)
			tmp13->set_soundTransform(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

Void FlxSound_obj::startSound( Float Position){
{
		HX_STACK_FRAME("flixel.system.FlxSound","startSound",0x5fc0a891,"flixel.system.FlxSound.startSound","flixel/system/FlxSound.hx",503,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Position,"Position")
		HX_STACK_LINE(504)
		bool tmp = this->_looped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(504)
		if ((tmp)){
			HX_STACK_LINE(504)
			tmp1 = (Position == (int)0);
		}
		else{
			HX_STACK_LINE(504)
			tmp1 = false;
		}
		HX_STACK_LINE(504)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(504)
		if ((tmp1)){
			HX_STACK_LINE(504)
			tmp2 = (int)9999;
		}
		else{
			HX_STACK_LINE(504)
			tmp2 = (int)0;
		}
		HX_STACK_LINE(504)
		int numLoops = tmp2;		HX_STACK_VAR(numLoops,"numLoops");
		HX_STACK_LINE(505)
		this->time = Position;
		HX_STACK_LINE(506)
		this->_paused = false;
		HX_STACK_LINE(507)
		::openfl::_legacy::media::Sound tmp3 = this->_sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		Float tmp4 = this->time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		int tmp5 = numLoops;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		::openfl::media::SoundTransform tmp6 = this->_transform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		::openfl::_legacy::media::SoundChannel tmp7 = tmp3->play(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		this->_channel = tmp7;
		HX_STACK_LINE(508)
		::openfl::_legacy::media::SoundChannel tmp8 = this->_channel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(508)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(508)
		if ((tmp9)){
			HX_STACK_LINE(510)
			::openfl::_legacy::media::SoundChannel tmp10 = this->_channel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			::String tmp11 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(510)
			Dynamic tmp12 = this->stopped_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			tmp10->addEventListener(tmp11,tmp12,null(),null(),null());
			HX_STACK_LINE(511)
			this->set_active(true);
		}
		else{
			HX_STACK_LINE(515)
			this->set_exists(false);
			HX_STACK_LINE(516)
			this->set_active(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

Void FlxSound_obj::stopped( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("flixel.system.FlxSound","stopped",0x3480f409,"flixel.system.FlxSound.stopped","flixel/system/FlxSound.hx",526,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(527)
		Dynamic tmp = this->onComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		if ((tmp1)){
			HX_STACK_LINE(529)
			this->onComplete();
		}
		HX_STACK_LINE(532)
		bool tmp2 = this->_looped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		if ((tmp2)){
			HX_STACK_LINE(534)
			this->cleanup(false,null(),null());
			HX_STACK_LINE(535)
			this->play(null());
		}
		else{
			HX_STACK_LINE(539)
			bool tmp3 = this->autoDestroy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			this->cleanup(tmp3,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

Void FlxSound_obj::cleanup( bool destroySound,hx::Null< bool >  __o_resetPosition,hx::Null< bool >  __o_resetFading){
bool resetPosition = __o_resetPosition.Default(true);
bool resetFading = __o_resetFading.Default(true);
	HX_STACK_FRAME("flixel.system.FlxSound","cleanup",0x9c612e20,"flixel.system.FlxSound.cleanup","flixel/system/FlxSound.hx",551,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(destroySound,"destroySound")
	HX_STACK_ARG(resetPosition,"resetPosition")
	HX_STACK_ARG(resetFading,"resetFading")
{
		HX_STACK_LINE(552)
		bool tmp = destroySound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		if ((tmp)){
			HX_STACK_LINE(554)
			this->reset();
			HX_STACK_LINE(555)
			return null();
		}
		HX_STACK_LINE(558)
		::openfl::_legacy::media::SoundChannel tmp1 = this->_channel;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		if ((tmp2)){
			HX_STACK_LINE(560)
			::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(560)
			::String tmp4 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(560)
			Dynamic tmp5 = this->stopped_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(560)
			tmp3->removeEventListener(tmp4,tmp5,null());
			HX_STACK_LINE(561)
			::openfl::_legacy::media::SoundChannel tmp6 = this->_channel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(561)
			tmp6->stop();
			HX_STACK_LINE(562)
			this->_channel = null();
		}
		HX_STACK_LINE(565)
		this->set_active(false);
		HX_STACK_LINE(567)
		bool tmp3 = resetPosition;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(567)
		if ((tmp3)){
			HX_STACK_LINE(569)
			this->time = (int)0;
			HX_STACK_LINE(570)
			this->_paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,cleanup,(void))

Void FlxSound_obj::gotID3( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("flixel.system.FlxSound","gotID3",0xcead1fb0,"flixel.system.FlxSound.gotID3","flixel/system/FlxSound.hx",579,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(581)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		::openfl::media::ID3Info tmp1 = tmp->get_id3();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(581)
		this->name = tmp1->songName;
		HX_STACK_LINE(582)
		::openfl::_legacy::media::Sound tmp2 = this->_sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(582)
		::openfl::media::ID3Info tmp3 = tmp2->get_id3();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(582)
		this->artist = tmp3->artist;
		HX_STACK_LINE(583)
		::openfl::_legacy::media::Sound tmp4 = this->_sound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		::String tmp5 = ::openfl::_legacy::events::Event_obj::ID3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(583)
		Dynamic tmp6 = this->gotID3_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(583)
		tmp4->removeEventListener(tmp5,tmp6,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

Void FlxSound_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","onFocus",0x8be62035,"flixel.system.FlxSound.onFocus","flixel/system/FlxSound.hx",588,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		bool tmp = this->_alreadyPaused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		if ((tmp1)){
			HX_STACK_LINE(591)
			this->resume();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocus,(void))

Void FlxSound_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.FlxSound","onFocusLost",0x0043b4b9,"flixel.system.FlxSound.onFocusLost","flixel/system/FlxSound.hx",597,0x7d78fc74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(598)
		bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(598)
		this->_alreadyPaused = tmp;
		HX_STACK_LINE(599)
		this->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocusLost,(void))

bool FlxSound_obj::get_playing( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_playing",0xced03f81,"flixel.system.FlxSound.get_playing","flixel/system/FlxSound.hx",603,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(604)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(604)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(604)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Float FlxSound_obj::get_volume( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_volume",0x12b7dd27,"flixel.system.FlxSound.get_volume","flixel/system/FlxSound.hx",608,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

Float FlxSound_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.FlxSound","set_volume",0x16357b9b,"flixel.system.FlxSound.set_volume","flixel/system/FlxSound.hx",613,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(614)
	this->_volume = Volume;
	HX_STACK_LINE(615)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(615)
	bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	if ((tmp1)){
		HX_STACK_LINE(617)
		this->_volume = (int)0;
	}
	else{
		HX_STACK_LINE(619)
		Float tmp2 = this->_volume;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(619)
		bool tmp3 = (tmp2 > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(619)
		if ((tmp3)){
			HX_STACK_LINE(621)
			this->_volume = (int)1;
		}
	}
	HX_STACK_LINE(623)
	this->updateTransform();
	HX_STACK_LINE(624)
	Float tmp2 = Volume;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(624)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_pan( ){
	HX_STACK_FRAME("flixel.system.FlxSound","get_pan",0x17e93bf0,"flixel.system.FlxSound.get_pan","flixel/system/FlxSound.hx",628,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_LINE(629)
	::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	Float tmp1 = tmp->pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(629)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pan,return )

Float FlxSound_obj::set_pan( Float pan){
	HX_STACK_FRAME("flixel.system.FlxSound","set_pan",0x0aeaccfc,"flixel.system.FlxSound.set_pan","flixel/system/FlxSound.hx",633,0x7d78fc74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pan,"pan")
	HX_STACK_LINE(634)
	::openfl::media::SoundTransform tmp = this->_transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	Float tmp1 = tmp->pan = pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pan,return )


FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_looped,"_looped");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_MARK_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_looped,"_looped");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_VISIT_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
}

Dynamic FlxSound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return artist; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"gotID3") ) { return gotID3_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp == hx::paccAlways ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"_looped") ) { return _looped; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { return amplitude; }
		if (HX_FIELD_EQ(inName,"proximity") ) { return proximity_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return loadStream_dyn(); }
		if (HX_FIELD_EQ(inName,"startSound") ) { return startSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return autoDestroy; }
		if (HX_FIELD_EQ(inName,"volumeTween") ) { return volumeTween_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return loadEmbedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return amplitudeLeft; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return _volumeAdjust; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { return _proximityPan; }
		if (HX_FIELD_EQ(inName,"loadByteArray") ) { return loadByteArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return amplitudeRight; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { return _alreadyPaused; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return getActualVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return updateTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::openfl::_legacy::media::Sound >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_looped") ) { _looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::openfl::_legacy::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { _proximityPan=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { _alreadyPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));
	outFields->push(HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69"));
	outFields->push(HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4"));
	outFields->push(HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d"));
	outFields->push(HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"));
	outFields->push(HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	outFields->push(HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"));
	outFields->push(HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"));
	outFields->push(HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32"));
	outFields->push(HX_HCSTRING("_looped","\x62","\x71","\x30","\xd0"));
	outFields->push(HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"));
	outFields->push(HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"));
	outFields->push(HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b"));
	outFields->push(HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxSound_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,persist),HX_HCSTRING("persist","\x14","\x22","\x71","\x83")},
	{hx::fsString,(int)offsetof(FlxSound_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(FlxSound_obj,artist),HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitude),HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeLeft),HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,amplitudeRight),HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,autoDestroy),HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSound_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::openfl::_legacy::media::Sound*/ ,(int)offsetof(FlxSound_obj,_sound),HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c")},
	{hx::fsObject /*::openfl::_legacy::media::SoundChannel*/ ,(int)offsetof(FlxSound_obj,_channel),HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(FlxSound_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_paused),HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_volume),HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_volumeAdjust),HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_looped),HX_HCSTRING("_looped","\x62","\x71","\x30","\xd0")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxSound_obj,_target),HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5")},
	{hx::fsFloat,(int)offsetof(FlxSound_obj,_radius),HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_proximityPan),HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b")},
	{hx::fsBool,(int)offsetof(FlxSound_obj,_alreadyPaused),HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("persist","\x14","\x22","\x71","\x83"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"),
	HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69"),
	HX_HCSTRING("amplitudeLeft","\xea","\xa6","\x0b","\xb4"),
	HX_HCSTRING("amplitudeRight","\x99","\x73","\x33","\x4d"),
	HX_HCSTRING("autoDestroy","\x4b","\xd1","\x69","\x0a"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"),
	HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"),
	HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"),
	HX_HCSTRING("_volumeAdjust","\xe8","\xdc","\xfb","\x32"),
	HX_HCSTRING("_looped","\x62","\x71","\x30","\xd0"),
	HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"),
	HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"),
	HX_HCSTRING("_proximityPan","\x3d","\xe4","\x2d","\x8b"),
	HX_HCSTRING("_alreadyPaused","\xa7","\xfe","\x5b","\xba"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("loadEmbedded","\xd0","\x05","\xcb","\x97"),
	HX_HCSTRING("loadStream","\x46","\x43","\x58","\xc6"),
	HX_HCSTRING("loadByteArray","\x6b","\x12","\x2a","\x3e"),
	HX_HCSTRING("proximity","\x3f","\xc9","\x25","\x82"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("fadeOut","\x72","\x38","\x3c","\x31"),
	HX_HCSTRING("fadeIn","\x81","\x4c","\xab","\xe4"),
	HX_HCSTRING("volumeTween","\x31","\xfa","\x02","\xac"),
	HX_HCSTRING("getActualVolume","\xbe","\x9c","\x9c","\x37"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("updateTransform","\x23","\xfe","\x1d","\x95"),
	HX_HCSTRING("startSound","\x0d","\x65","\xe3","\x9c"),
	HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("gotID3","\x2c","\xee","\x20","\x65"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxSound","\x6a","\x26","\x83","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxSound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSound_obj >;
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
