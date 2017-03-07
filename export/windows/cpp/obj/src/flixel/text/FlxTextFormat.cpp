#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormat_obj::__construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End)
{
HX_STACK_FRAME("flixel.text.FlxTextFormat","new",0x67be2279,"flixel.text.FlxTextFormat.new","flixel/text/FlxText.hx",948,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(FontColor,"FontColor")
HX_STACK_ARG(Bold,"Bold")
HX_STACK_ARG(Italic,"Italic")
HX_STACK_ARG(BorderColor,"BorderColor")
HX_STACK_ARG(__o_Start,"Start")
HX_STACK_ARG(__o_End,"End")
Dynamic Start = __o_Start.Default(-1);
Dynamic End = __o_End.Default(-1);
{
	HX_STACK_LINE(962)
	this->end = (int)-1;
	HX_STACK_LINE(958)
	this->start = (int)-1;
	HX_STACK_LINE(979)
	bool tmp = (FontColor != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(979)
	if ((tmp)){
		HX_STACK_LINE(981)
		hx::AndEq(FontColor,(int)16777215);
	}
	HX_STACK_LINE(983)
	bool tmp1 = (BorderColor != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(983)
	if ((tmp1)){
		HX_STACK_LINE(985)
		hx::AndEq(BorderColor,(int)16777215);
	}
	HX_STACK_LINE(987)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),FontColor,Bold,Italic,null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(987)
	this->format = tmp2;
	HX_STACK_LINE(989)
	bool tmp3 = (Start > (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(989)
	if ((tmp3)){
		HX_STACK_LINE(991)
		this->start = Start;
	}
	HX_STACK_LINE(993)
	bool tmp4 = (End > (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(993)
	if ((tmp4)){
		HX_STACK_LINE(995)
		this->end = End;
	}
	HX_STACK_LINE(998)
	bool tmp5 = (BorderColor == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(998)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(998)
	if ((tmp5)){
		HX_STACK_LINE(998)
		tmp6 = (int)0;
	}
	else{
		HX_STACK_LINE(998)
		tmp6 = BorderColor;
	}
	HX_STACK_LINE(998)
	this->borderColor = tmp6;
}
;
	return null();
}

//FlxTextFormat_obj::~FlxTextFormat_obj() { }

Dynamic FlxTextFormat_obj::__CreateEmpty() { return  new FlxTextFormat_obj; }
hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End)
{  hx::ObjectPtr< FlxTextFormat_obj > _result_ = new FlxTextFormat_obj();
	_result_->__construct(FontColor,Bold,Italic,BorderColor,__o_Start,__o_End);
	return _result_;}

Dynamic FlxTextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormat_obj > _result_ = new FlxTextFormat_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *FlxTextFormat_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTextFormat_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTextFormat_obj >(this); }
Void FlxTextFormat_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxTextFormat","destroy",0xc985ff93,"flixel.text.FlxTextFormat.destroy","flixel/text/FlxText.hx",1003,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1003)
		this->format = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTextFormat_obj,destroy,(void))


FlxTextFormat_obj::FlxTextFormat_obj()
{
}

void FlxTextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormat);
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTextFormat_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxTextFormat_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTextFormat_obj::__mClass;

void FlxTextFormat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxTextFormat","\x07","\x72","\x93","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTextFormat_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTextFormat_obj >;
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
