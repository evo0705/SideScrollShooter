#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void VarTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.VarTween","new",0x19cf09e4,"flixel.tweens.misc.VarTween.new","flixel/tweens/misc/VarTween.hx",28,0x836bddcb)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(29)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	super::__construct(tmp);
	HX_STACK_LINE(31)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(32)
	this->_startValues = Array_obj< Float >::__new();
	HX_STACK_LINE(33)
	this->_range = Array_obj< Float >::__new();
}
;
	return null();
}

//VarTween_obj::~VarTween_obj() { }

Dynamic VarTween_obj::__CreateEmpty() { return  new VarTween_obj; }
hx::ObjectPtr< VarTween_obj > VarTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< VarTween_obj > _result_ = new VarTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic VarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VarTween_obj > _result_ = new VarTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VarTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","destroy",0xef76787e,"flixel.tweens.misc.VarTween.destroy","flixel/tweens/misc/VarTween.hx",21,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::destroy();
		HX_STACK_LINE(23)
		this->_object = null();
		HX_STACK_LINE(24)
		this->_properties = null();
	}
return null();
}


::flixel::tweens::misc::VarTween VarTween_obj::tween( Dynamic object,Dynamic properties,Float duration){
	HX_STACK_FRAME("flixel.tweens.misc.VarTween","tween",0xf3504cef,"flixel.tweens.misc.VarTween.tween","flixel/tweens/misc/VarTween.hx",44,0x836bddcb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(56)
	this->_object = object;
	HX_STACK_LINE(57)
	this->_properties = properties;
	HX_STACK_LINE(58)
	this->duration = duration;
	HX_STACK_LINE(59)
	this->start();
	HX_STACK_LINE(60)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(VarTween_obj,tween,return )

Void VarTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","update",0x50d41705,"flixel.tweens.misc.VarTween.update","flixel/tweens/misc/VarTween.hx",64,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		int tmp = this->executions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(65)
			tmp2 = this->loopDelay;
		}
		else{
			HX_STACK_LINE(65)
			tmp2 = this->startDelay;
		}
		HX_STACK_LINE(65)
		Float delay = tmp2;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(67)
		Float tmp3 = this->_secondsSinceStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		Float tmp4 = delay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		if ((tmp5)){
			HX_STACK_LINE(70)
			this->super::update();
		}
		else{
			HX_STACK_LINE(74)
			int tmp6 = this->_vars->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			bool tmp7 = (tmp6 < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			if ((tmp7)){
				HX_STACK_LINE(78)
				this->initializeVars();
			}
			HX_STACK_LINE(81)
			this->super::update();
			HX_STACK_LINE(83)
			int tmp8 = this->_vars->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				int tmp9 = (i)--;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(84)
				if ((tmp11)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(86)
				Dynamic tmp12 = this->_object;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				::String tmp13 = this->_vars->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				Float tmp14 = this->_startValues->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				Float tmp15 = this->_range->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				Float tmp16 = this->scale;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				::Reflect_obj::setProperty(tmp12,tmp13,tmp18);
			}
		}
	}
return null();
}


Void VarTween_obj::initializeVars( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.VarTween","initializeVars",0x0a5a5e18,"flixel.tweens.misc.VarTween.initializeVars","flixel/tweens/misc/VarTween.hx",92,0x836bddcb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(94)
		Array< ::String > fields;		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(96)
		Dynamic tmp = this->_properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = ::Reflect_obj::isObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(98)
			Dynamic tmp2 = this->_properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			fields = ::Reflect_obj::fields(tmp2);
		}
		else{
			HX_STACK_LINE(102)
			HX_STACK_DO_THROW(HX_HCSTRING("Unsupported properties container - use an object containing key/value pairs.","\x0b","\x19","\x89","\x5b"));
		}
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp2 = (_g < fields->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				if ((tmp3)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::String tmp4 = fields->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				::String p1 = tmp4;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				Dynamic tmp5 = this->_object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				::String tmp6 = p1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				Dynamic tmp7 = ::Reflect_obj::getProperty(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				if ((tmp8)){
					HX_STACK_LINE(109)
					::String tmp9 = (HX_HCSTRING("The Object does not have the property \"","\x3c","\x1e","\xc1","\xa6") + p1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(109)
					::String tmp10 = (tmp9 + HX_HCSTRING("\", or it is not accessible.","\xe3","\x75","\xb6","\x55"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					HX_STACK_DO_THROW(tmp10);
				}
				HX_STACK_LINE(112)
				Dynamic tmp9 = this->_object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(112)
				::String tmp10 = p1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(112)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(112)
				Dynamic a = tmp11;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(114)
				Dynamic tmp12 = a;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(114)
				bool tmp13 = ::Math_obj::isNaN(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(114)
				if ((tmp13)){
					HX_STACK_LINE(116)
					::String tmp14 = (HX_HCSTRING("The property \"","\x06","\xe3","\x80","\xa4") + p1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					::String tmp15 = (tmp14 + HX_HCSTRING("\" is not numeric.","\x66","\x4f","\x2a","\xcf"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(118)
				::String tmp14 = p1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(118)
				this->_vars->push(tmp14);
				HX_STACK_LINE(119)
				Dynamic tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(119)
				this->_startValues->push(tmp15);
				HX_STACK_LINE(120)
				Dynamic tmp16 = this->_properties;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(120)
				::String tmp17 = p1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(120)
				Dynamic tmp18 = ::Reflect_obj::getProperty(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(120)
				Dynamic tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(120)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(120)
				this->_range->push(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VarTween_obj,initializeVars,(void))


VarTween_obj::VarTween_obj()
{
}

void VarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_startValues,"_startValues");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_startValues,"_startValues");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VarTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return _properties; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_startValues") ) { return _startValues; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initializeVars") ) { return initializeVars_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_startValues") ) { _startValues=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VarTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	outFields->push(HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"));
	outFields->push(HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01"));
	outFields->push(HX_HCSTRING("_startValues","\xe5","\x0f","\xa7","\x2d"));
	outFields->push(HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VarTween_obj,_properties),HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(VarTween_obj,_vars),HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VarTween_obj,_startValues),HX_HCSTRING("_startValues","\xe5","\x0f","\xa7","\x2d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(VarTween_obj,_range),HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_properties","\x12","\xc9","\x98","\x33"),
	HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01"),
	HX_HCSTRING("_startValues","\xe5","\x0f","\xa7","\x2d"),
	HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("initializeVars","\x1c","\x71","\xd8","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VarTween_obj::__mClass,"__mClass");
};

#endif

hx::Class VarTween_obj::__mClass;

void VarTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.VarTween","\xf2","\x87","\x4b","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VarTween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VarTween_obj >;
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
} // end namespace misc
