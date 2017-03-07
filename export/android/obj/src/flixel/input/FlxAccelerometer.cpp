#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxAccelerometer
#include <flixel/input/FlxAccelerometer.h>
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
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
namespace flixel{
namespace input{

Void FlxAccelerometer_obj::__construct()
{
HX_STACK_FRAME("flixel.input.FlxAccelerometer","new",0x0d021645,"flixel.input.FlxAccelerometer.new","flixel/input/FlxAccelerometer.hx",10,0x4bc92349)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->z = ((Float)0);
	HX_STACK_LINE(21)
	this->y = ((Float)0);
	HX_STACK_LINE(16)
	this->x = ((Float)0);
	HX_STACK_LINE(37)
	bool tmp = ::openfl::_legacy::sensors::Accelerometer_obj::get_isSupported();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	if ((tmp)){
		HX_STACK_LINE(39)
		::openfl::_legacy::sensors::Accelerometer tmp1 = ::openfl::_legacy::sensors::Accelerometer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		this->_sensor = tmp1;
		HX_STACK_LINE(40)
		::openfl::_legacy::sensors::Accelerometer tmp2 = this->_sensor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::String tmp3 = ::openfl::events::AccelerometerEvent_obj::UPDATE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		Dynamic tmp4 = this->updateCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
	}
}
;
	return null();
}

//FlxAccelerometer_obj::~FlxAccelerometer_obj() { }

Dynamic FlxAccelerometer_obj::__CreateEmpty() { return  new FlxAccelerometer_obj; }
hx::ObjectPtr< FlxAccelerometer_obj > FlxAccelerometer_obj::__new()
{  hx::ObjectPtr< FlxAccelerometer_obj > _result_ = new FlxAccelerometer_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAccelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAccelerometer_obj > _result_ = new FlxAccelerometer_obj();
	_result_->__construct();
	return _result_;}

bool FlxAccelerometer_obj::get_isSupported( ){
	HX_STACK_FRAME("flixel.input.FlxAccelerometer","get_isSupported",0x551e3de0,"flixel.input.FlxAccelerometer.get_isSupported","flixel/input/FlxAccelerometer.hx",45,0x4bc92349)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	bool tmp = ::openfl::_legacy::sensors::Accelerometer_obj::get_isSupported();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAccelerometer_obj,get_isSupported,return )

Void FlxAccelerometer_obj::updateCallback( ::openfl::events::AccelerometerEvent Event){
{
		HX_STACK_FRAME("flixel.input.FlxAccelerometer","updateCallback",0x130b7729,"flixel.input.FlxAccelerometer.updateCallback","flixel/input/FlxAccelerometer.hx",50,0x4bc92349)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Event,"Event")
		HX_STACK_LINE(52)
		this->x = Event->accelerationX;
		HX_STACK_LINE(53)
		this->y = Event->accelerationY;
		HX_STACK_LINE(54)
		this->z = Event->accelerationZ;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAccelerometer_obj,updateCallback,(void))


FlxAccelerometer_obj::FlxAccelerometer_obj()
{
}

void FlxAccelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAccelerometer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(_sensor,"_sensor");
	HX_MARK_END_CLASS();
}

void FlxAccelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(_sensor,"_sensor");
}

Dynamic FlxAccelerometer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { return _sensor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) return get_isSupported(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateCallback") ) { return updateCallback_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAccelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sensor") ) { _sensor=inValue.Cast< ::openfl::_legacy::sensors::Accelerometer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxAccelerometer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxAccelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("_sensor","\xd9","\x43","\x07","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxAccelerometer_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_legacy::sensors::Accelerometer*/ ,(int)offsetof(FlxAccelerometer_obj,_sensor),HX_HCSTRING("_sensor","\xd9","\x43","\x07","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("_sensor","\xd9","\x43","\x07","\xda"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	HX_HCSTRING("updateCallback","\xee","\x8c","\x30","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAccelerometer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAccelerometer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAccelerometer_obj::__mClass;

void FlxAccelerometer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxAccelerometer","\xd3","\x8f","\xc6","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxAccelerometer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAccelerometer_obj >;
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
} // end namespace input
