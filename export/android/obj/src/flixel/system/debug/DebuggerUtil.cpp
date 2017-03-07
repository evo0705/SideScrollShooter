#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void DebuggerUtil_obj::__construct()
{
	return null();
}

//DebuggerUtil_obj::~DebuggerUtil_obj() { }

Dynamic DebuggerUtil_obj::__CreateEmpty() { return  new DebuggerUtil_obj; }
hx::ObjectPtr< DebuggerUtil_obj > DebuggerUtil_obj::__new()
{  hx::ObjectPtr< DebuggerUtil_obj > _result_ = new DebuggerUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic DebuggerUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerUtil_obj > _result_ = new DebuggerUtil_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::text::TextField DebuggerUtil_obj::createTextField( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Color,hx::Null< int >  __o_Size){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Color = __o_Color.Default(-1);
int Size = __o_Size.Default(12);
	HX_STACK_FRAME("flixel.system.debug.DebuggerUtil","createTextField",0x34b9b52e,"flixel.system.debug.DebuggerUtil.createTextField","flixel/system/debug/DebuggerUtil.hx",27,0x13434d32)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
{
		HX_STACK_LINE(28)
		::openfl::_legacy::text::TextField tmp = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::openfl::_legacy::text::TextField tf = tmp;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(29)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tf->set_x(tmp1);
		HX_STACK_LINE(30)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		tf->set_y(tmp2);
		HX_STACK_LINE(31)
		tf->set_multiline(false);
		HX_STACK_LINE(32)
		tf->set_wordWrap(false);
		HX_STACK_LINE(33)
		tf->set_embedFonts(true);
		HX_STACK_LINE(34)
		tf->set_selectable(false);
		HX_STACK_LINE(39)
		::String tmp3 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		int tmp4 = Size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		int tmp5 = (int(Color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		int tmp8 = (int(Color) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		int tmp12 = (int(Color) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		int tmp13 = (int(tmp11) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		::openfl::_legacy::text::TextFormat tmp14 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp3,tmp4,tmp13,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		tf->set_defaultTextFormat(tmp14);
		HX_STACK_LINE(40)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int tmp16 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(40)
			int f = tmp17;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(40)
			tmp15 = (Float(f) / Float((int)255));
		}
		HX_STACK_LINE(40)
		tf->set_alpha(tmp15);
		HX_STACK_LINE(41)
		::openfl::_legacy::text::TextField tmp16 = tf;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(41)
		return tmp16;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DebuggerUtil_obj,createTextField,return )


DebuggerUtil_obj::DebuggerUtil_obj()
{
}

bool DebuggerUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class DebuggerUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createTextField","\x31","\xde","\x75","\x3a"),
	::String(null()) };

void DebuggerUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.DebuggerUtil","\x6b","\xad","\xc9","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DebuggerUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DebuggerUtil_obj >;
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
} // end namespace debug
