#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
namespace openfl{
namespace events{

Void AccelerometerEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ)
{
HX_STACK_FRAME("openfl.events.AccelerometerEvent","new",0x41c806b4,"openfl.events.AccelerometerEvent.new","openfl/events/AccelerometerEvent.hx",81,0xf933e51c)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_timestamp,"timestamp")
HX_STACK_ARG(__o_accelerationX,"accelerationX")
HX_STACK_ARG(__o_accelerationY,"accelerationY")
HX_STACK_ARG(__o_accelerationZ,"accelerationZ")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
Float timestamp = __o_timestamp.Default(0);
Float accelerationX = __o_accelerationX.Default(0);
Float accelerationY = __o_accelerationY.Default(0);
Float accelerationZ = __o_accelerationZ.Default(0);
{
	HX_STACK_LINE(83)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(85)
	this->timestamp = timestamp;
	HX_STACK_LINE(86)
	this->accelerationX = accelerationX;
	HX_STACK_LINE(87)
	this->accelerationY = accelerationY;
	HX_STACK_LINE(88)
	this->accelerationZ = accelerationZ;
}
;
	return null();
}

//AccelerometerEvent_obj::~AccelerometerEvent_obj() { }

Dynamic AccelerometerEvent_obj::__CreateEmpty() { return  new AccelerometerEvent_obj; }
hx::ObjectPtr< AccelerometerEvent_obj > AccelerometerEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ)
{  hx::ObjectPtr< AccelerometerEvent_obj > _result_ = new AccelerometerEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_timestamp,__o_accelerationX,__o_accelerationY,__o_accelerationZ);
	return _result_;}

Dynamic AccelerometerEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AccelerometerEvent_obj > _result_ = new AccelerometerEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::openfl::_legacy::events::Event AccelerometerEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.AccelerometerEvent","clone",0xf81086b1,"openfl.events.AccelerometerEvent.clone","openfl/events/AccelerometerEvent.hx",93,0xf933e51c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Float tmp3 = this->timestamp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	Float tmp4 = this->accelerationX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Float tmp5 = this->accelerationY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	Float tmp6 = this->accelerationZ;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	::openfl::events::AccelerometerEvent tmp7 = ::openfl::events::AccelerometerEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	return tmp7;
}


::String AccelerometerEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.AccelerometerEvent","toString",0x0df129d8,"openfl.events.AccelerometerEvent.toString","openfl/events/AccelerometerEvent.hx",100,0xf933e51c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::String tmp1 = (HX_HCSTRING("[AccelerometerEvent type=\"","\x59","\x2d","\x26","\x77") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(102)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(102)
	::String tmp10 = (tmp9 + HX_HCSTRING(" timestamp=","\xc7","\xce","\xf8","\x8a"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(102)
	Float tmp11 = this->timestamp;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(102)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(102)
	::String tmp13 = (tmp12 + HX_HCSTRING(" accelerationX=","\x45","\xd5","\x45","\x54"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(102)
	Float tmp14 = this->accelerationX;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(102)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(102)
	::String tmp16 = (tmp15 + HX_HCSTRING(" accelerationY=","\x24","\xd6","\x45","\x54"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	Float tmp17 = this->accelerationY;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(102)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(102)
	::String tmp19 = (tmp18 + HX_HCSTRING(" accelerationZ=","\x03","\xd7","\x45","\x54"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(102)
	Float tmp20 = this->accelerationZ;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(102)
	::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(102)
	::String tmp22 = (tmp21 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(102)
	return tmp22;
}


::String AccelerometerEvent_obj::UPDATE;


AccelerometerEvent_obj::AccelerometerEvent_obj()
{
}

Dynamic AccelerometerEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { return timestamp; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { return accelerationX; }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { return accelerationY; }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { return accelerationZ; }
	}
	return super::__Field(inName,inCallProp);
}

bool AccelerometerEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UPDATE") ) { outValue = UPDATE; return true;  }
	}
	return false;
}

Dynamic AccelerometerEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { timestamp=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerationX") ) { accelerationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationY") ) { accelerationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelerationZ") ) { accelerationZ=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AccelerometerEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"UPDATE") ) { UPDATE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void AccelerometerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accelerationX","\x18","\x38","\x7f","\x7a"));
	outFields->push(HX_HCSTRING("accelerationY","\x19","\x38","\x7f","\x7a"));
	outFields->push(HX_HCSTRING("accelerationZ","\x1a","\x38","\x7f","\x7a"));
	outFields->push(HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationX),HX_HCSTRING("accelerationX","\x18","\x38","\x7f","\x7a")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationY),HX_HCSTRING("accelerationY","\x19","\x38","\x7f","\x7a")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,accelerationZ),HX_HCSTRING("accelerationZ","\x1a","\x38","\x7f","\x7a")},
	{hx::fsFloat,(int)offsetof(AccelerometerEvent_obj,timestamp),HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AccelerometerEvent_obj::UPDATE,HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accelerationX","\x18","\x38","\x7f","\x7a"),
	HX_HCSTRING("accelerationY","\x19","\x38","\x7f","\x7a"),
	HX_HCSTRING("accelerationZ","\x1a","\x38","\x7f","\x7a"),
	HX_HCSTRING("timestamp","\xd6","\xd4","\xce","\xa5"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AccelerometerEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AccelerometerEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AccelerometerEvent_obj::UPDATE,"UPDATE");
};

#endif

hx::Class AccelerometerEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39"),
	::String(null()) };

void AccelerometerEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.AccelerometerEvent","\xc2","\xdc","\x31","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AccelerometerEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &AccelerometerEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AccelerometerEvent_obj >;
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

} // end namespace openfl
} // end namespace events
