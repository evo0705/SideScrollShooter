#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_sensors_Accelerometer
#include <openfl/_legacy/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace sensors{

Void Accelerometer_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.sensors.Accelerometer","new",0xcade6608,"openfl._legacy.sensors.Accelerometer.new","openfl/_legacy/sensors/Accelerometer.hx",22,0x8f38e36b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(26)
	this->muted = false;
	HX_STACK_LINE(27)
	int tmp = ::openfl::_legacy::sensors::Accelerometer_obj::__defaultInterval;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->setRequestedUpdateInterval(tmp);
}
;
	return null();
}

//Accelerometer_obj::~Accelerometer_obj() { }

Dynamic Accelerometer_obj::__CreateEmpty() { return  new Accelerometer_obj; }
hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new()
{  hx::ObjectPtr< Accelerometer_obj > _result_ = new Accelerometer_obj();
	_result_->__construct();
	return _result_;}

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accelerometer_obj > _result_ = new Accelerometer_obj();
	_result_->__construct();
	return _result_;}

Void Accelerometer_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._legacy.sensors.Accelerometer","addEventListener",0x7bdf0d25,"openfl._legacy.sensors.Accelerometer.addEventListener","openfl/_legacy/sensors/Accelerometer.hx",32,0x8f38e36b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(34)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		bool tmp2 = useCapture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		int tmp3 = priority;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		bool tmp4 = useWeakReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		this->super::addEventListener(tmp,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(35)
		this->__update();
	}
return null();
}


Void Accelerometer_obj::setRequestedUpdateInterval( Float interval){
{
		HX_STACK_FRAME("openfl._legacy.sensors.Accelerometer","setRequestedUpdateInterval",0xe57aee52,"openfl._legacy.sensors.Accelerometer.setRequestedUpdateInterval","openfl/_legacy/sensors/Accelerometer.hx",40,0x8f38e36b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(interval,"interval")
		HX_STACK_LINE(42)
		bool tmp = (interval < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		if ((tmp)){
			HX_STACK_LINE(44)
			::openfl::errors::ArgumentError tmp1 = ::openfl::errors::ArgumentError_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW(tmp1);
		}
		else{
			HX_STACK_LINE(46)
			bool tmp1 = (interval == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			if ((tmp1)){
				HX_STACK_LINE(48)
				int tmp2 = ::openfl::_legacy::sensors::Accelerometer_obj::__defaultInterval;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(48)
				interval = tmp2;
			}
		}
		HX_STACK_LINE(52)
		::haxe::Timer tmp1 = this->__timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		if ((tmp2)){
			HX_STACK_LINE(54)
			::haxe::Timer tmp3 = this->__timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			tmp3->stop();
		}
		HX_STACK_LINE(58)
		bool tmp3 = ::openfl::_legacy::sensors::Accelerometer_obj::get_isSupported();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		if ((tmp3)){
			HX_STACK_LINE(60)
			::haxe::Timer tmp4 = ::haxe::Timer_obj::__new(interval);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			this->__timer = tmp4;
			HX_STACK_LINE(61)
			Dynamic tmp5 = this->__update_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			::haxe::Timer tmp6 = this->__timer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			tmp6->run = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

Void Accelerometer_obj::__update( ){
{
		HX_STACK_FRAME("openfl._legacy.sensors.Accelerometer","__update",0x4922da81,"openfl._legacy.sensors.Accelerometer.__update","openfl/_legacy/sensors/Accelerometer.hx",68,0x8f38e36b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::String tmp = ::openfl::events::AccelerometerEvent_obj::UPDATE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::openfl::events::AccelerometerEvent tmp1 = ::openfl::events::AccelerometerEvent_obj::__new(tmp,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::openfl::events::AccelerometerEvent event = tmp1;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(71)
		Dynamic tmp2 = ::openfl::_legacy::sensors::Accelerometer_obj::lime_input_get_acceleration();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Dynamic data = tmp2;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(73)
		Float tmp3 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		event->timestamp = tmp3;
		HX_STACK_LINE(74)
		event->accelerationX = data->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(75)
		event->accelerationY = data->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(76)
		event->accelerationZ = data->__Field(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"), hx::paccDynamic );
		HX_STACK_LINE(78)
		::openfl::events::AccelerometerEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		this->dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,__update,(void))

bool Accelerometer_obj::isSupported;

int Accelerometer_obj::__defaultInterval;

bool Accelerometer_obj::get_isSupported( ){
	HX_STACK_FRAME("openfl._legacy.sensors.Accelerometer","get_isSupported",0xf554a623,"openfl._legacy.sensors.Accelerometer.get_isSupported","openfl/_legacy/sensors/Accelerometer.hx",90,0x8f38e36b)
	HX_STACK_LINE(90)
	Dynamic tmp = ::openfl::_legacy::sensors::Accelerometer_obj::lime_input_get_acceleration();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )

Dynamic Accelerometer_obj::lime_input_get_acceleration;


Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Accelerometer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return setRequestedUpdateInterval_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Accelerometer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = inCallProp == hx::paccAlways ? get_isSupported() : isSupported; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { outValue = __defaultInterval; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_input_get_acceleration") ) { outValue = lime_input_get_acceleration; return true;  }
	}
	return false;
}

Dynamic Accelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Accelerometer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { __defaultInterval=ioValue.Cast< int >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_input_get_acceleration") ) { lime_input_get_acceleration=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Accelerometer_obj,muted),HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Accelerometer_obj,__timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Accelerometer_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{hx::fsInt,(void *) &Accelerometer_obj::__defaultInterval,HX_HCSTRING("__defaultInterval","\x06","\x68","\xe4","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Accelerometer_obj::lime_input_get_acceleration,HX_HCSTRING("lime_input_get_acceleration","\x08","\x97","\x2e","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("setRequestedUpdateInterval","\xfa","\xce","\x5f","\x28"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::lime_input_get_acceleration,"lime_input_get_acceleration");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::lime_input_get_acceleration,"lime_input_get_acceleration");
};

#endif

hx::Class Accelerometer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("__defaultInterval","\x06","\x68","\xe4","\xd4"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	HX_HCSTRING("lime_input_get_acceleration","\x08","\x97","\x2e","\x7e"),
	::String(null()) };

void Accelerometer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.sensors.Accelerometer","\x16","\x02","\xa9","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Accelerometer_obj::__GetStatic;
	__mClass->mSetStaticField = &Accelerometer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Accelerometer_obj >;
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

void Accelerometer_obj::__boot()
{
	__defaultInterval= (int)34;
	lime_input_get_acceleration= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_input_get_acceleration","\x6a","\x88","\x04","\x03"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace sensors
