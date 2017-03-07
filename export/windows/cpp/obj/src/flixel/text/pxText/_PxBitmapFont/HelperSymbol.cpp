#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{
namespace _PxBitmapFont{

Void HelperSymbol_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText._PxBitmapFont.HelperSymbol","new",0xac5d2b4b,"flixel.text.pxText._PxBitmapFont.HelperSymbol.new","flixel/text/pxText/PxBitmapFont.hx",742,0xb7b5754d)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//HelperSymbol_obj::~HelperSymbol_obj() { }

Dynamic HelperSymbol_obj::__CreateEmpty() { return  new HelperSymbol_obj; }
hx::ObjectPtr< HelperSymbol_obj > HelperSymbol_obj::__new()
{  hx::ObjectPtr< HelperSymbol_obj > _result_ = new HelperSymbol_obj();
	_result_->__construct();
	return _result_;}

Dynamic HelperSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelperSymbol_obj > _result_ = new HelperSymbol_obj();
	_result_->__construct();
	return _result_;}


HelperSymbol_obj::HelperSymbol_obj()
{
}

Dynamic HelperSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HelperSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HelperSymbol_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void HelperSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));
	outFields->push(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));
	outFields->push(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));
	outFields->push(HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,xoffset),HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,yoffset),HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,xadvance),HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe")},
	{hx::fsInt,(int)offsetof(HelperSymbol_obj,charCode),HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"),
	HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"),
	HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"),
	HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class HelperSymbol_obj::__mClass;

void HelperSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.pxText._PxBitmapFont.HelperSymbol","\xd9","\x29","\x65","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &HelperSymbol_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HelperSymbol_obj >;
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
} // end namespace _PxBitmapFont
