#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void Bounds_obj::__construct(Dynamic min,Dynamic max)
{
HX_STACK_FRAME("flixel.effects.particles.Bounds","new",0xc6c1c5e6,"flixel.effects.particles.Bounds.new","flixel/effects/particles/FlxTypedEmitter.hx",899,0xb8028a0a)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
{
	HX_STACK_LINE(900)
	Dynamic tmp = min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(900)
	Dynamic tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(900)
	this->set(tmp,tmp1);
}
;
	return null();
}

//Bounds_obj::~Bounds_obj() { }

Dynamic Bounds_obj::__CreateEmpty() { return  new Bounds_obj; }
hx::ObjectPtr< Bounds_obj > Bounds_obj::__new(Dynamic min,Dynamic max)
{  hx::ObjectPtr< Bounds_obj > _result_ = new Bounds_obj();
	_result_->__construct(min,max);
	return _result_;}

Dynamic Bounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bounds_obj > _result_ = new Bounds_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::effects::particles::Bounds Bounds_obj::set( Dynamic min,Dynamic max){
	HX_STACK_FRAME("flixel.effects.particles.Bounds","set",0xc6c59128,"flixel.effects.particles.Bounds.set","flixel/effects/particles/FlxTypedEmitter.hx",904,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(905)
	this->min = min;
	HX_STACK_LINE(906)
	bool tmp = (max == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(906)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(906)
	if ((tmp)){
		HX_STACK_LINE(906)
		tmp1 = min;
	}
	else{
		HX_STACK_LINE(906)
		tmp1 = max;
	}
	HX_STACK_LINE(906)
	this->max = tmp1;
	HX_STACK_LINE(907)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,set,return )


Bounds_obj::Bounds_obj()
{
}

void Bounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bounds);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void Bounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic Bounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bounds_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bounds_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bounds_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

#endif

hx::Class Bounds_obj::__mClass;

void Bounds_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.Bounds","\xf4","\x9a","\x6b","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bounds_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bounds_obj >;
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
} // end namespace effects
} // end namespace particles
