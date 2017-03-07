#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TextureRegion_obj::__construct(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("flixel.util.loaders.TextureRegion","new",0x14240bf9,"flixel.util.loaders.TextureRegion.new","flixel/util/loaders/TextureRegion.hx",13,0xdc04a3f8)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_startX,"startX")
HX_STACK_ARG(__o_startY,"startY")
HX_STACK_ARG(__o_tileWidth,"tileWidth")
HX_STACK_ARG(__o_tileHeight,"tileHeight")
HX_STACK_ARG(__o_spacingX,"spacingX")
HX_STACK_ARG(__o_spacingY,"spacingY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int tileWidth = __o_tileWidth.Default(0);
int tileHeight = __o_tileHeight.Default(0);
int spacingX = __o_spacingX.Default(0);
int spacingY = __o_spacingY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(14)
	this->data = data;
	HX_STACK_LINE(16)
	bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	if ((tmp)){
		HX_STACK_LINE(16)
		int tmp1 = data->bitmap->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		width = tmp1;
	}
	HX_STACK_LINE(17)
	bool tmp1 = (height <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	if ((tmp1)){
		HX_STACK_LINE(17)
		int tmp2 = data->bitmap->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		height = tmp2;
	}
	HX_STACK_LINE(19)
	::flixel::_system::layer::Region tmp2 = ::flixel::_system::layer::Region_obj::__new(startX,startY,tileWidth,tileHeight,spacingX,spacingY,width,height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	this->region = tmp2;
}
;
	return null();
}

//TextureRegion_obj::~TextureRegion_obj() { }

Dynamic TextureRegion_obj::__CreateEmpty() { return  new TextureRegion_obj; }
hx::ObjectPtr< TextureRegion_obj > TextureRegion_obj::__new(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< TextureRegion_obj > _result_ = new TextureRegion_obj();
	_result_->__construct(data,__o_startX,__o_startY,__o_tileWidth,__o_tileHeight,__o_spacingX,__o_spacingY,__o_width,__o_height);
	return _result_;}

Dynamic TextureRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureRegion_obj > _result_ = new TextureRegion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

hx::Object *TextureRegion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

TextureRegion_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TextureRegion_obj >(this); }
::flixel::util::loaders::TextureRegion TextureRegion_obj::clone( ){
	HX_STACK_FRAME("flixel.util.loaders.TextureRegion","clone",0x1d6c2736,"flixel.util.loaders.TextureRegion.clone","flixel/util/loaders/TextureRegion.hx",23,0xdc04a3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::flixel::util::loaders::CachedGraphics tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp1 = this->region;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	int tmp2 = tmp1->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp3 = this->region;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	int tmp4 = tmp3->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp5 = this->region;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	int tmp6 = tmp5->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp7 = this->region;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	int tmp8 = tmp7->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp9 = this->region;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	int tmp10 = tmp9->__Field(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp11 = this->region;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(24)
	int tmp12 = tmp11->__Field(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp13 = this->region;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(24)
	int tmp14 = tmp13->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	::flixel::_system::layer::Region tmp15 = this->region;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(24)
	int tmp16 = tmp15->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(24)
	::flixel::util::loaders::TextureRegion tmp17 = ::flixel::util::loaders::TextureRegion_obj::__new(tmp,tmp2,tmp4,tmp6,tmp8,tmp10,tmp12,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(24)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,clone,return )

Void TextureRegion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TextureRegion","destroy",0x1cdea913,"flixel.util.loaders.TextureRegion.destroy","flixel/util/loaders/TextureRegion.hx",28,0xdc04a3f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->data = null();
		HX_STACK_LINE(30)
		this->region = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,destroy,(void))


TextureRegion_obj::TextureRegion_obj()
{
}

void TextureRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureRegion);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_END_CLASS();
}

void TextureRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(region,"region");
}

Dynamic TextureRegion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::_system::layer::Region >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureRegion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(TextureRegion_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::flixel::_system::layer::Region*/ ,(int)offsetof(TextureRegion_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureRegion_obj::__mClass;

void TextureRegion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.loaders.TextureRegion","\x87","\x9b","\x66","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TextureRegion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureRegion_obj >;
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
} // end namespace util
} // end namespace loaders
