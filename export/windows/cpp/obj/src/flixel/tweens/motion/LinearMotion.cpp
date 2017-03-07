#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void LinearMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","new",0x1860e4d1,"flixel.tweens.motion.LinearMotion.new","flixel/tweens/motion/LinearMotion.hx",9,0x15b892fe)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(21)
	this->_distance = ((Float)-1);
	HX_STACK_LINE(20)
	this->_moveY = ((Float)0);
	HX_STACK_LINE(19)
	this->_moveX = ((Float)0);
	HX_STACK_LINE(18)
	this->_fromY = ((Float)0);
	HX_STACK_LINE(17)
	this->_fromX = ((Float)0);
	HX_STACK_LINE(9)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//LinearMotion_obj::~LinearMotion_obj() { }

Dynamic LinearMotion_obj::__CreateEmpty() { return  new LinearMotion_obj; }
hx::ObjectPtr< LinearMotion_obj > LinearMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< LinearMotion_obj > _result_ = new LinearMotion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic LinearMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearMotion_obj > _result_ = new LinearMotion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tweens::motion::LinearMotion LinearMotion_obj::setMotion( Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","setMotion",0x53127aa9,"flixel.tweens.motion.LinearMotion.setMotion","flixel/tweens/motion/LinearMotion.hx",34,0x15b892fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(35)
		this->_distance = (int)-1;
		HX_STACK_LINE(36)
		Float tmp = this->_fromX = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		this->x = tmp;
		HX_STACK_LINE(37)
		Float tmp1 = this->_fromY = FromY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		this->y = tmp1;
		HX_STACK_LINE(38)
		Float tmp2 = (ToX - FromX);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		this->_moveX = tmp2;
		HX_STACK_LINE(39)
		Float tmp3 = (ToY - FromY);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		this->_moveY = tmp3;
		HX_STACK_LINE(41)
		bool tmp4 = UseDuration;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		if ((tmp4)){
			HX_STACK_LINE(43)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(47)
			Float tmp5 = this->get_distance();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			Float tmp6 = DurationOrSpeed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			this->duration = tmp7;
		}
		HX_STACK_LINE(50)
		this->start();
		HX_STACK_LINE(52)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(LinearMotion_obj,setMotion,return )

Void LinearMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","update",0xb80e0e38,"flixel.tweens.motion.LinearMotion.update","flixel/tweens/motion/LinearMotion.hx",56,0x15b892fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::update();
		HX_STACK_LINE(58)
		Float tmp = this->_fromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		Float tmp1 = this->_moveX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		this->x = tmp4;
		HX_STACK_LINE(59)
		Float tmp5 = this->_fromY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = this->_moveY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		this->y = tmp9;
		HX_STACK_LINE(61)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Float tmp11 = this->_fromX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		Float tmp12 = this->_moveX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		bool tmp14 = (tmp10 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(61)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(61)
		if ((tmp15)){
			HX_STACK_LINE(61)
			Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(61)
			Float tmp20 = this->_fromY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(61)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(61)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(61)
			Float tmp23 = this->_moveY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(61)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(61)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(61)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(61)
			tmp16 = (tmp19 == tmp28);
		}
		else{
			HX_STACK_LINE(61)
			tmp16 = false;
		}
		HX_STACK_LINE(61)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(61)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(61)
		if ((tmp17)){
			HX_STACK_LINE(62)
			tmp18 = this->active;
		}
		else{
			HX_STACK_LINE(61)
			tmp18 = false;
		}
		HX_STACK_LINE(61)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(61)
		if ((tmp18)){
			HX_STACK_LINE(62)
			Float tmp20 = this->_secondsSinceStart;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(62)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(62)
			Float tmp22 = this->duration;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(62)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(62)
			tmp19 = (tmp21 >= tmp23);
		}
		else{
			HX_STACK_LINE(61)
			tmp19 = false;
		}
		HX_STACK_LINE(61)
		if ((tmp19)){
			HX_STACK_LINE(64)
			this->finished = true;
		}
		HX_STACK_LINE(66)
		bool tmp20 = this->finished;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(66)
		if ((tmp20)){
			HX_STACK_LINE(68)
			this->postUpdate();
		}
	}
return null();
}


Float LinearMotion_obj::get_distance( ){
	HX_STACK_FRAME("flixel.tweens.motion.LinearMotion","get_distance",0xd1a29cad,"flixel.tweens.motion.LinearMotion.get_distance","flixel/tweens/motion/LinearMotion.hx",73,0x15b892fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Float tmp = this->_distance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	if ((tmp1)){
		HX_STACK_LINE(74)
		Float tmp2 = this->_distance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		return tmp2;
	}
	HX_STACK_LINE(75)
	Float tmp2 = this->_moveX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	Float tmp3 = this->_moveX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	Float tmp5 = this->_moveY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	Float tmp6 = this->_moveY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(75)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(75)
	Float tmp10 = this->_distance = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(75)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(LinearMotion_obj,get_distance,return )


LinearMotion_obj::LinearMotion_obj()
{
}

Dynamic LinearMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LinearMotion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LinearMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08"));
	outFields->push(HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveX),HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_moveY),HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08")},
	{hx::fsFloat,(int)offsetof(LinearMotion_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08"),
	HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08"),
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearMotion_obj::__mClass;

void LinearMotion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.LinearMotion","\x5f","\x28","\x60","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LinearMotion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearMotion_obj >;
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
} // end namespace tweens
} // end namespace motion
