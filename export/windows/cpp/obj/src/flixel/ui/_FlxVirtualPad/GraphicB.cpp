#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicB
#include <flixel/ui/_FlxVirtualPad/GraphicB.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace ui{
namespace _FlxVirtualPad{

Void GraphicB_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("flixel.ui._FlxVirtualPad.GraphicB","new",0xbd780077,"flixel.ui._FlxVirtualPad.GraphicB.new","openfl/_legacy/Assets.hx",2010,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(2076)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2076)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2076)
	Dynamic tmp2 = transparent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2076)
	Dynamic tmp3 = fillRGBA;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2076)
	super::__construct(tmp,tmp1,tmp2,tmp3,null());
	HX_STACK_LINE(2078)
	::String tmp4 = ::flixel::ui::_FlxVirtualPad::GraphicB_obj::resourceName;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2078)
	::haxe::io::Bytes tmp5 = ::haxe::Resource_obj::getBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2078)
	::openfl::_legacy::utils::ByteArray tmp6 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2078)
	::openfl::_legacy::utils::ByteArray byteArray = tmp6;		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(2079)
	{
		HX_STACK_LINE(2079)
		::openfl::_legacy::utils::ByteArray tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2079)
		Dynamic tmp8 = ::openfl::_legacy::display::BitmapData_obj::lime_bitmap_data_from_bytes(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2079)
		this->__handle = tmp8;
	}
}
;
	return null();
}

//GraphicB_obj::~GraphicB_obj() { }

Dynamic GraphicB_obj::__CreateEmpty() { return  new GraphicB_obj; }
hx::ObjectPtr< GraphicB_obj > GraphicB_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< GraphicB_obj > _result_ = new GraphicB_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillRGBA);
	return _result_;}

Dynamic GraphicB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicB_obj > _result_ = new GraphicB_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String GraphicB_obj::resourceName;


GraphicB_obj::GraphicB_obj()
{
}

bool GraphicB_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicB_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicB_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicB_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicB_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void GraphicB_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui._FlxVirtualPad.GraphicB","\x05","\xf9","\x4a","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicB_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicB_obj >;
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

void GraphicB_obj::__boot()
{
	resourceName= HX_HCSTRING("__ASSET__:bitmap_flixel_ui__FlxVirtualPad_GraphicB","\x70","\x0c","\x8e","\x38");
}

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxVirtualPad
