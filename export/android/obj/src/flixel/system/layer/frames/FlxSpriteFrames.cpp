#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace _system{
namespace layer{
namespace frames{

Void FlxSpriteFrames_obj::__construct(::String name)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","new",0x5124a771,"flixel.system.layer.frames.FlxSpriteFrames.new","flixel/system/layer/frames/FlxSpriteFrames.hx",12,0xd69cfd1f)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(15)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		tmp = tmp2;
	}
	HX_STACK_LINE(15)
	this->framesHash = tmp;
}
;
	return null();
}

//FlxSpriteFrames_obj::~FlxSpriteFrames_obj() { }

Dynamic FlxSpriteFrames_obj::__CreateEmpty() { return  new FlxSpriteFrames_obj; }
hx::ObjectPtr< FlxSpriteFrames_obj > FlxSpriteFrames_obj::__new(::String name)
{  hx::ObjectPtr< FlxSpriteFrames_obj > _result_ = new FlxSpriteFrames_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic FlxSpriteFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteFrames_obj > _result_ = new FlxSpriteFrames_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *FlxSpriteFrames_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxSpriteFrames_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxSpriteFrames_obj >(this); }
Void FlxSpriteFrames_obj::addFrame( ::flixel::_system::layer::frames::FlxFrame frame){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","addFrame",0xc3b5899b,"flixel.system.layer.frames.FlxSpriteFrames.addFrame","flixel/system/layer/frames/FlxSpriteFrames.hx",19,0xd69cfd1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(20)
		::flixel::_system::layer::frames::FlxFrame tmp = frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		this->frames->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(21)
		::haxe::ds::StringMap tmp1 = this->framesHash;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::String tmp2 = frame->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::flixel::_system::layer::frames::FlxFrame tmp3 = frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		tmp1->set(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteFrames_obj,addFrame,(void))

Void FlxSpriteFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxSpriteFrames","destroy",0x0dde608b,"flixel.system.layer.frames.FlxSpriteFrames.destroy","flixel/system/layer/frames/FlxSpriteFrames.hx",25,0xd69cfd1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->frames = null();
		HX_STACK_LINE(27)
		this->framesHash = null();
		HX_STACK_LINE(28)
		this->name = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSpriteFrames_obj,destroy,(void))


FlxSpriteFrames_obj::FlxSpriteFrames_obj()
{
}

void FlxSpriteFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteFrames);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxSpriteFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxSpriteFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addFrame") ) { return addFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return framesHash; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSpriteFrames_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxSpriteFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSpriteFrames_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxSpriteFrames_obj,framesHash),HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6")},
	{hx::fsString,(int)offsetof(FlxSpriteFrames_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("addFrame","\x4c","\x9e","\xe0","\x7f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSpriteFrames_obj::__mClass;

void FlxSpriteFrames_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.frames.FlxSpriteFrames","\xff","\x1a","\x26","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxSpriteFrames_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSpriteFrames_obj >;
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
} // end namespace layer
} // end namespace frames
