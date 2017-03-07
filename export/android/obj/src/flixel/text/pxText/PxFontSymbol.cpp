#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxFontSymbol_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText.PxFontSymbol","new",0xfc377b8b,"flixel.text.pxText.PxFontSymbol.new","flixel/text/pxText/PxFontSymbol.hx",26,0xc0d74bc4)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PxFontSymbol_obj::~PxFontSymbol_obj() { }

Dynamic PxFontSymbol_obj::__CreateEmpty() { return  new PxFontSymbol_obj; }
hx::ObjectPtr< PxFontSymbol_obj > PxFontSymbol_obj::__new()
{  hx::ObjectPtr< PxFontSymbol_obj > _result_ = new PxFontSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic PxFontSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxFontSymbol_obj > _result_ = new PxFontSymbol_obj();
	_result_->__construct();
	return _result_;}


PxFontSymbol_obj::PxFontSymbol_obj()
{
}

Dynamic PxFontSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxFontSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PxFontSymbol_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PxFontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));
	outFields->push(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	outFields->push(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,xoffset),HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,yoffset),HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{hx::fsInt,(int)offsetof(PxFontSymbol_obj,tileID),HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"),
	HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class PxFontSymbol_obj::__mClass;

void PxFontSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.pxText.PxFontSymbol","\x19","\x5a","\x42","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PxFontSymbol_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PxFontSymbol_obj >;
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
} // end namespace text
} // end namespace pxText
