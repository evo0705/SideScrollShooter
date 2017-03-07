#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
namespace flixel{
namespace effects{

Void FlxFlicker_obj::__construct()
{
HX_STACK_FRAME("flixel.effects.FlxFlicker","new",0x4bc826b6,"flixel.effects.FlxFlicker.new","flixel/effects/FlxFlicker.hx",191,0x4fa53f38)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FlxFlicker_obj::~FlxFlicker_obj() { }

Dynamic FlxFlicker_obj::__CreateEmpty() { return  new FlxFlicker_obj; }
hx::ObjectPtr< FlxFlicker_obj > FlxFlicker_obj::__new()
{  hx::ObjectPtr< FlxFlicker_obj > _result_ = new FlxFlicker_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxFlicker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFlicker_obj > _result_ = new FlxFlicker_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxFlicker_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxFlicker_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxFlicker_obj >(this); }
Void FlxFlicker_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","destroy",0x34536650,"flixel.effects.FlxFlicker.destroy","flixel/effects/FlxFlicker.hx",119,0x4fa53f38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		this->object = null();
		HX_STACK_LINE(121)
		this->timer = null();
		HX_STACK_LINE(122)
		this->completionCallback = null();
		HX_STACK_LINE(123)
		this->progressCallback = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,destroy,(void))

Void FlxFlicker_obj::start( ::flixel::FlxObject Object,Float Duration,Float Interval,bool EndVisibility,Dynamic CompletionCallback,Dynamic ProgressCallback){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","start",0xd6028c38,"flixel.effects.FlxFlicker.start","flixel/effects/FlxFlicker.hx",136,0x4fa53f38)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(Duration,"Duration")
		HX_STACK_ARG(Interval,"Interval")
		HX_STACK_ARG(EndVisibility,"EndVisibility")
		HX_STACK_ARG(CompletionCallback,"CompletionCallback")
		HX_STACK_ARG(ProgressCallback,"ProgressCallback")
		HX_STACK_LINE(137)
		this->object = Object;
		HX_STACK_LINE(138)
		this->duration = Duration;
		HX_STACK_LINE(139)
		this->interval = Interval;
		HX_STACK_LINE(140)
		this->completionCallback = CompletionCallback;
		HX_STACK_LINE(141)
		this->progressCallback = ProgressCallback;
		HX_STACK_LINE(142)
		this->endVisibility = EndVisibility;
		HX_STACK_LINE(143)
		Float tmp = this->interval;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		Dynamic tmp1 = this->flickerProgress_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		Float tmp2 = this->duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		Float tmp3 = this->interval;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::flixel::util::FlxTimer tmp6 = ::flixel::util::FlxTimer_obj::__new(tmp,tmp1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		this->timer = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxFlicker_obj,start,(void))

Void FlxFlicker_obj::stop( ){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","stop",0x06b324ec,"flixel.effects.FlxFlicker.stop","flixel/effects/FlxFlicker.hx",150,0x4fa53f38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		::flixel::util::FlxTimer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		tmp->cancel();
		HX_STACK_LINE(152)
		::flixel::FlxObject tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		tmp1->set_visible(true);
		HX_STACK_LINE(153)
		this->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,stop,(void))

Void FlxFlicker_obj::release( ){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","release",0x68babf1d,"flixel.effects.FlxFlicker.release","flixel/effects/FlxFlicker.hx",160,0x4fa53f38)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::haxe::ds::ObjectMap tmp = ::flixel::effects::FlxFlicker_obj::_boundObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::flixel::FlxObject tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		tmp->remove(tmp1);
		HX_STACK_LINE(162)
		::flixel::util::FlxPool tmp2 = ::flixel::effects::FlxFlicker_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		tmp2->put(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFlicker_obj,release,(void))

Void FlxFlicker_obj::flickerProgress( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","flickerProgress",0x5258c61b,"flixel.effects.FlxFlicker.flickerProgress","flixel/effects/FlxFlicker.hx",169,0x4fa53f38)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(170)
		::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		::flixel::FlxObject tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		bool tmp2 = tmp1->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp->set_visible(tmp3);
		HX_STACK_LINE(172)
		Dynamic tmp4 = this->progressCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		if ((tmp5)){
			HX_STACK_LINE(174)
			this->progressCallback(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(177)
		bool tmp6 = (Timer->loops > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		if ((tmp6)){
			HX_STACK_LINE(177)
			int tmp8 = (Timer->loops - Timer->_loopsCounter);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			tmp7 = (tmp9 == (int)0);
		}
		else{
			HX_STACK_LINE(177)
			tmp7 = false;
		}
		HX_STACK_LINE(177)
		if ((tmp7)){
			HX_STACK_LINE(179)
			::flixel::FlxObject tmp8 = this->object;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			bool tmp9 = this->endVisibility;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			tmp8->set_visible(tmp9);
			HX_STACK_LINE(180)
			Dynamic tmp10 = this->completionCallback_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(180)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(180)
			if ((tmp11)){
				HX_STACK_LINE(182)
				this->completionCallback(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(184)
			this->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,flickerProgress,(void))

::flixel::util::FlxPool FlxFlicker_obj::_pool;

::haxe::ds::ObjectMap FlxFlicker_obj::_boundObjects;

Void FlxFlicker_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(((Float)0.04));
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_FRAME("flixel.effects.FlxFlicker","flicker",0x86ba144e,"flixel.effects.FlxFlicker.flicker","flixel/effects/FlxFlicker.hx",34,0x4fa53f38)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Interval,"Interval")
	HX_STACK_ARG(EndVisibility,"EndVisibility")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(CompletionCallback,"CompletionCallback")
	HX_STACK_ARG(ProgressCallback,"ProgressCallback")
{
		HX_STACK_LINE(35)
		::flixel::FlxObject tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1 = ::flixel::effects::FlxFlicker_obj::isFlickering(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(37)
			bool tmp2 = ForceRestart;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			if ((tmp2)){
				HX_STACK_LINE(39)
				::flixel::FlxObject tmp3 = Object;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				::flixel::effects::FlxFlicker_obj::stopFlickering(tmp3);
			}
			else{
				HX_STACK_LINE(44)
				return null();
			}
		}
		HX_STACK_LINE(48)
		bool tmp2 = (Interval <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		if ((tmp2)){
			HX_STACK_LINE(50)
			Float tmp3 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			Interval = tmp3;
		}
		HX_STACK_LINE(53)
		::flixel::util::FlxPool tmp3 = ::flixel::effects::FlxFlicker_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::flixel::effects::FlxFlicker tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::flixel::effects::FlxFlicker flicker = tmp4;		HX_STACK_VAR(flicker,"flicker");
		HX_STACK_LINE(54)
		::flixel::FlxObject tmp5 = Object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Float tmp6 = Duration;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		Float tmp7 = Interval;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		bool tmp8 = EndVisibility;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		Dynamic tmp9 = CompletionCallback;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		Dynamic tmp10 = ProgressCallback;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		flicker->start(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(55)
		::flixel::effects::FlxFlicker tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::haxe::ds::ObjectMap tmp12 = ::flixel::effects::FlxFlicker_obj::_boundObjects;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			::flixel::FlxObject tmp13 = Object;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			::flixel::effects::FlxFlicker tmp14 = flicker;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			tmp12->set(tmp13,tmp14);
			HX_STACK_LINE(55)
			tmp11 = flicker;
		}
		HX_STACK_LINE(55)
		tmp11;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxFlicker_obj,flicker,(void))

bool FlxFlicker_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.effects.FlxFlicker","isFlickering",0x76c8b45e,"flixel.effects.FlxFlicker.isFlickering","flixel/effects/FlxFlicker.hx",63,0x4fa53f38)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(64)
	::haxe::ds::ObjectMap tmp = ::flixel::effects::FlxFlicker_obj::_boundObjects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,isFlickering,return )

Void FlxFlicker_obj::stopFlickering( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.FlxFlicker","stopFlickering",0xf09864f6,"flixel.effects.FlxFlicker.stopFlickering","flixel/effects/FlxFlicker.hx",72,0x4fa53f38)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(73)
		::haxe::ds::ObjectMap tmp = ::flixel::effects::FlxFlicker_obj::_boundObjects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::flixel::effects::FlxFlicker tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::flixel::effects::FlxFlicker boundFlicker = tmp2;		HX_STACK_VAR(boundFlicker,"boundFlicker");
		HX_STACK_LINE(74)
		bool tmp3 = (boundFlicker != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(76)
			boundFlicker->stop();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFlicker_obj,stopFlickering,(void))


FlxFlicker_obj::FlxFlicker_obj()
{
}

void FlxFlicker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFlicker);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(endVisibility,"endVisibility");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(completionCallback,"completionCallback");
	HX_MARK_MEMBER_NAME(progressCallback,"progressCallback");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(interval,"interval");
	HX_MARK_END_CLASS();
}

void FlxFlicker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(endVisibility,"endVisibility");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(completionCallback,"completionCallback");
	HX_VISIT_MEMBER_NAME(progressCallback,"progressCallback");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(interval,"interval");
}

Dynamic FlxFlicker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"interval") ) { return interval; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endVisibility") ) { return endVisibility; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flickerProgress") ) { return flickerProgress_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressCallback") ) { return progressCallback; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"completionCallback") ) { return completionCallback; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFlicker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flicker") ) { outValue = flicker_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isFlickering") ) { outValue = isFlickering_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundObjects") ) { outValue = _boundObjects; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { outValue = stopFlickering_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxFlicker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interval") ) { interval=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"endVisibility") ) { endVisibility=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressCallback") ) { progressCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"completionCallback") ) { completionCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxFlicker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_boundObjects") ) { _boundObjects=ioValue.Cast< ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void FlxFlicker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxFlicker_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsBool,(int)offsetof(FlxFlicker_obj,endVisibility),HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxFlicker_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxFlicker_obj,completionCallback),HX_HCSTRING("completionCallback","\x01","\x9d","\xba","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxFlicker_obj,progressCallback),HX_HCSTRING("progressCallback","\x92","\x42","\x56","\x92")},
	{hx::fsFloat,(int)offsetof(FlxFlicker_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsFloat,(int)offsetof(FlxFlicker_obj,interval),HX_HCSTRING("interval","\x45","\x79","\x7c","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool*/ ,(void *) &FlxFlicker_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &FlxFlicker_obj::_boundObjects,HX_HCSTRING("_boundObjects","\x15","\x17","\x40","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("endVisibility","\x8d","\x35","\xd3","\xe5"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("completionCallback","\x01","\x9d","\xba","\x8a"),
	HX_HCSTRING("progressCallback","\x92","\x42","\x56","\x92"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("flickerProgress","\xc5","\x46","\x11","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::_pool,"_pool");
	HX_MARK_MEMBER_NAME(FlxFlicker_obj::_boundObjects,"_boundObjects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::_pool,"_pool");
	HX_VISIT_MEMBER_NAME(FlxFlicker_obj::_boundObjects,"_boundObjects");
};

#endif

hx::Class FlxFlicker_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_boundObjects","\x15","\x17","\x40","\x1b"),
	HX_HCSTRING("flicker","\xf8","\xda","\xec","\x76"),
	HX_HCSTRING("isFlickering","\x74","\x85","\x73","\x33"),
	HX_HCSTRING("stopFlickering","\x8c","\x27","\x6a","\x4a"),
	::String(null()) };

void FlxFlicker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.FlxFlicker","\xc4","\x53","\xdd","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFlicker_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFlicker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFlicker_obj >;
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

void FlxFlicker_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_obj::__new(hx::ClassOf< ::flixel::effects::FlxFlicker >());
struct _Function_0_1{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/FlxFlicker.hx",20,0x4fa53f38)
		{
			HX_STACK_LINE(20)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(20)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			return tmp1;
		}
		return null();
	}
};
	_boundObjects= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace effects
