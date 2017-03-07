#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void TexturePackerData_obj::__construct(::String Description,::String AssetName)
{
HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","new",0x258f8355,"flixel.util.loaders.TexturePackerData.new","flixel/util/loaders/TexturePackerData.hx",26,0x94e9909c)
HX_STACK_THIS(this)
HX_STACK_ARG(Description,"Description")
HX_STACK_ARG(AssetName,"AssetName")
{
	HX_STACK_LINE(27)
	this->assetName = AssetName;
	HX_STACK_LINE(28)
	this->description = Description;
	HX_STACK_LINE(30)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	this->parseData();
}
;
	return null();
}

//TexturePackerData_obj::~TexturePackerData_obj() { }

Dynamic TexturePackerData_obj::__CreateEmpty() { return  new TexturePackerData_obj; }
hx::ObjectPtr< TexturePackerData_obj > TexturePackerData_obj::__new(::String Description,::String AssetName)
{  hx::ObjectPtr< TexturePackerData_obj > _result_ = new TexturePackerData_obj();
	_result_->__construct(Description,AssetName);
	return _result_;}

Dynamic TexturePackerData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TexturePackerData_obj > _result_ = new TexturePackerData_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *TexturePackerData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

TexturePackerData_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TexturePackerData_obj >(this); }
Void TexturePackerData_obj::parseData( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","parseData",0xc62180b2,"flixel.util.loaders.TexturePackerData.parseData","flixel/util/loaders/TexturePackerData.hx",40,0x94e9909c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		int tmp = this->frames->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(44)
		::String tmp2 = this->assetName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(44)
			::String tmp6 = this->description;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			tmp5 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(44)
			tmp5 = true;
		}
		HX_STACK_LINE(44)
		if ((tmp5)){
			HX_STACK_LINE(44)
			return null();
		}
		HX_STACK_LINE(46)
		::flixel::util::loaders::CachedGraphics tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(46)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp7 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			::String tmp8 = this->assetName;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			bool tmp9 = Unique;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			tmp6 = tmp7->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp8,(int)0,(int)0,(int)1,(int)1,tmp9,null());
		}
		HX_STACK_LINE(46)
		this->asset = tmp6->bitmap;
		HX_STACK_LINE(47)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::String tmp8 = this->description;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			::String tmp9 = ::openfl::_legacy::Assets_obj::getText(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			::String text = tmp9;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(47)
			::haxe::format::JsonParser tmp10 = ::haxe::format::JsonParser_obj::__new(text);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			tmp7 = tmp10->parseRec();
		}
		HX_STACK_LINE(47)
		Dynamic data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			cpp::ArrayBase _g1 = ::Lambda_obj::array(data->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				if ((tmp9)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				Dynamic frame = tmp10;		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				::flixel::util::loaders::TextureAtlasFrame tmp11 = ::flixel::util::loaders::TextureAtlasFrame_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(51)
				::flixel::util::loaders::TextureAtlasFrame texFrame = tmp11;		HX_STACK_VAR(texFrame,"texFrame");
				HX_STACK_LINE(52)
				texFrame->trimmed = frame->__Field(HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29"), hx::paccDynamic );
				HX_STACK_LINE(53)
				texFrame->rotated = frame->__Field(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"), hx::paccDynamic );
				HX_STACK_LINE(54)
				texFrame->name = frame->__Field(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"), hx::paccDynamic );
				HX_STACK_LINE(56)
				::flixel::util::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::flixel::util::FlxPool tmp13 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					::flixel::util::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(56)
					Float tmp15 = frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(56)
					Float tmp16 = frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					::flixel::util::FlxPoint tmp17 = tmp14->set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(56)
					::flixel::util::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(56)
					point->_inPool = false;
					HX_STACK_LINE(56)
					tmp12 = point;
				}
				HX_STACK_LINE(56)
				texFrame->sourceSize = tmp12;
				HX_STACK_LINE(57)
				::flixel::util::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::flixel::util::FlxPool tmp14 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					::flixel::util::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					::flixel::util::FlxPoint tmp16 = tmp15->set((int)0,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					::flixel::util::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(57)
					point->_inPool = false;
					HX_STACK_LINE(57)
					tmp13 = point;
				}
				HX_STACK_LINE(57)
				texFrame->offset = tmp13;
				HX_STACK_LINE(58)
				Float tmp14 = frame->__Field(HX_HCSTRING("spriteSourceSize","\xa1","\x7f","\xc1","\x03"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(58)
				Float tmp15 = frame->__Field(HX_HCSTRING("spriteSourceSize","\xa1","\x7f","\xc1","\x03"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(58)
				texFrame->offset->set(tmp14,tmp15);
				HX_STACK_LINE(60)
				bool tmp16 = frame->__Field(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(60)
				if ((tmp16)){
					HX_STACK_LINE(62)
					Float tmp17 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					Float tmp18 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					Float tmp19 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					Float tmp20 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(62)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(62)
					texFrame->frame = tmp21;
					HX_STACK_LINE(63)
					texFrame->additionalAngle = (int)-90;
				}
				else{
					HX_STACK_LINE(67)
					Float tmp17 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(67)
					Float tmp18 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					Float tmp19 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("w","\x77","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					Float tmp20 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(67)
					texFrame->frame = tmp21;
					HX_STACK_LINE(68)
					texFrame->additionalAngle = (int)0;
				}
				HX_STACK_LINE(71)
				::flixel::util::loaders::TextureAtlasFrame tmp17 = texFrame;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(71)
				this->frames->push(tmp17);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,parseData,(void))

Void TexturePackerData_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.TexturePackerData","destroy",0x67aefe6f,"flixel.util.loaders.TexturePackerData.destroy","flixel/util/loaders/TexturePackerData.hx",79,0x94e9909c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
		HX_STACK_LINE(81)
		this->assetName = null();
		HX_STACK_LINE(82)
		this->description = null();
		HX_STACK_LINE(83)
		this->asset = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TexturePackerData_obj,destroy,(void))


TexturePackerData_obj::TexturePackerData_obj()
{
}

void TexturePackerData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TexturePackerData);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(assetName,"assetName");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_END_CLASS();
}

void TexturePackerData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(assetName,"assetName");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(asset,"asset");
}

Dynamic TexturePackerData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { return assetName; }
		if (HX_FIELD_EQ(inName,"parseData") ) { return parseData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TexturePackerData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetName") ) { assetName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TexturePackerData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TexturePackerData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("assetName","\x5b","\xc0","\xa5","\xad"));
	outFields->push(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"));
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TexturePackerData_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsString,(int)offsetof(TexturePackerData_obj,assetName),HX_HCSTRING("assetName","\x5b","\xc0","\xa5","\xad")},
	{hx::fsString,(int)offsetof(TexturePackerData_obj,description),HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(TexturePackerData_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("assetName","\x5b","\xc0","\xa5","\xad"),
	HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"),
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("parseData","\xfd","\xa7","\x09","\xca"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TexturePackerData_obj::__mClass,"__mClass");
};

#endif

hx::Class TexturePackerData_obj::__mClass;

void TexturePackerData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.loaders.TexturePackerData","\xe3","\x34","\xb4","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TexturePackerData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TexturePackerData_obj >;
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
