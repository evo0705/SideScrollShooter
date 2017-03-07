#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_fonts_arial_ttf
#include <__ASSET__assets_fonts_arial_ttf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif

Void __ASSET__assets_fonts_arial_ttf_obj::__construct()
{
HX_STACK_FRAME("__ASSET__assets_fonts_arial_ttf","new",0xb1704c75,"__ASSET__assets_fonts_arial_ttf.new","DefaultAssetLibrary.hx",648,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(648)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(648)
	this->__fontPath = HX_HCSTRING("assets/fonts/arial.ttf","\x24","\x14","\x04","\x2f");
	HX_STACK_LINE(648)
	this->fontName = HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8");
}
;
	return null();
}

//__ASSET__assets_fonts_arial_ttf_obj::~__ASSET__assets_fonts_arial_ttf_obj() { }

Dynamic __ASSET__assets_fonts_arial_ttf_obj::__CreateEmpty() { return  new __ASSET__assets_fonts_arial_ttf_obj; }
hx::ObjectPtr< __ASSET__assets_fonts_arial_ttf_obj > __ASSET__assets_fonts_arial_ttf_obj::__new()
{  hx::ObjectPtr< __ASSET__assets_fonts_arial_ttf_obj > _result_ = new __ASSET__assets_fonts_arial_ttf_obj();
	_result_->__construct();
	return _result_;}

Dynamic __ASSET__assets_fonts_arial_ttf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__assets_fonts_arial_ttf_obj > _result_ = new __ASSET__assets_fonts_arial_ttf_obj();
	_result_->__construct();
	return _result_;}


__ASSET__assets_fonts_arial_ttf_obj::__ASSET__assets_fonts_arial_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__assets_fonts_arial_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_fonts_arial_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__assets_fonts_arial_ttf_obj::__mClass;

void __ASSET__assets_fonts_arial_ttf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__assets_fonts_arial_ttf","\x03","\xee","\xf1","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__assets_fonts_arial_ttf_obj >;
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

