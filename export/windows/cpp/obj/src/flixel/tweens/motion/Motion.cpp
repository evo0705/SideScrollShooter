#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void Motion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.Motion","new",0x8c813b8c,"flixel.tweens.motion.Motion.new","flixel/tweens/motion/Motion.hx",10,0xc6c8a363)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(19)
	this->y = ((Float)0);
	HX_STACK_LINE(15)
	this->x = ((Float)0);
	HX_STACK_LINE(10)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//Motion_obj::~Motion_obj() { }

Dynamic Motion_obj::__CreateEmpty() { return  new Motion_obj; }
hx::ObjectPtr< Motion_obj > Motion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< Motion_obj > _result_ = new Motion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic Motion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Motion_obj > _result_ = new Motion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Motion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","destroy",0x00e69e26,"flixel.tweens.motion.Motion.destroy","flixel/tweens/motion/Motion.hx",24,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::destroy();
		HX_STACK_LINE(26)
		this->_object = null();
	}
return null();
}


::flixel::tweens::motion::Motion Motion_obj::setObject( ::flixel::FlxObject object){
	HX_STACK_FRAME("flixel.tweens.motion.Motion","setObject",0x7f27082d,"flixel.tweens.motion.Motion.setObject","flixel/tweens/motion/Motion.hx",30,0xc6c8a363)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(31)
	this->_object = object;
	HX_STACK_LINE(32)
	::flixel::FlxObject tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	tmp->set_immovable(true);
	HX_STACK_LINE(33)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Motion_obj,setObject,return )

Void Motion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","update",0xebe25e5d,"flixel.tweens.motion.Motion.update","flixel/tweens/motion/Motion.hx",37,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::update();
		HX_STACK_LINE(39)
		this->postUpdate();
	}
return null();
}


Void Motion_obj::postUpdate( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.Motion","postUpdate",0xca0f98dd,"flixel.tweens.motion.Motion.postUpdate","flixel/tweens/motion/Motion.hx",43,0xc6c8a363)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::FlxObject tmp = this->_object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(46)
			::flixel::FlxObject tmp2 = this->_object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			tmp2->setPosition(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Motion_obj,postUpdate,(void))


Motion_obj::Motion_obj()
{
}

void Motion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Motion);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_object,"_object");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Motion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Motion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setObject") ) { return setObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Motion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Motion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Motion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Motion_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Motion_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(Motion_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setObject","\x01","\xf4","\xe6","\x74"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

#endif

hx::Class Motion_obj::__mClass;

void Motion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.Motion","\x9a","\xc5","\x49","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Motion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Motion_obj >;
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
