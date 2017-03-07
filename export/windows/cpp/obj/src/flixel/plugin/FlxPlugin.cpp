#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
namespace flixel{
namespace plugin{

Void FlxPlugin_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.FlxPlugin","new",0x2840386e,"flixel.plugin.FlxPlugin.new","flixel/plugin/FlxPlugin.hx",10,0x677250e2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

//FlxPlugin_obj::~FlxPlugin_obj() { }

Dynamic FlxPlugin_obj::__CreateEmpty() { return  new FlxPlugin_obj; }
hx::ObjectPtr< FlxPlugin_obj > FlxPlugin_obj::__new()
{  hx::ObjectPtr< FlxPlugin_obj > _result_ = new FlxPlugin_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxPlugin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPlugin_obj > _result_ = new FlxPlugin_obj();
	_result_->__construct();
	return _result_;}

Void FlxPlugin_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.FlxPlugin","onStateSwitch",0xd194f994,"flixel.plugin.FlxPlugin.onStateSwitch","flixel/plugin/FlxPlugin.hx",16,0x677250e2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPlugin_obj,onStateSwitch,(void))

Void FlxPlugin_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.plugin.FlxPlugin","onResize",0x3f41f5a5,"flixel.plugin.FlxPlugin.onResize","flixel/plugin/FlxPlugin.hx",23,0x677250e2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPlugin_obj,onResize,(void))


FlxPlugin_obj::FlxPlugin_obj()
{
}

Dynamic FlxPlugin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPlugin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPlugin_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPlugin_obj::__mClass;

void FlxPlugin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.plugin.FlxPlugin","\x7c","\x29","\x0c","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPlugin_obj >;
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
} // end namespace plugin
