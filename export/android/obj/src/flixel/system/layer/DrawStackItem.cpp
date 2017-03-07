#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
namespace flixel{
namespace _system{
namespace layer{

Void DrawStackItem_obj::__construct()
{
HX_STACK_FRAME("flixel.system.layer.DrawStackItem","new",0x05802d9f,"flixel.system.layer.DrawStackItem.new","flixel/system/layer/DrawStackItem.hx",5,0xaa5e86d2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->antialiasing = false;
	HX_STACK_LINE(15)
	this->initialized = false;
	HX_STACK_LINE(13)
	this->blending = (int)0;
	HX_STACK_LINE(12)
	this->colored = false;
	HX_STACK_LINE(9)
	this->position = (int)0;
	HX_STACK_LINE(21)
	this->drawData = Array_obj< Float >::__new();
}
;
	return null();
}

//DrawStackItem_obj::~DrawStackItem_obj() { }

Dynamic DrawStackItem_obj::__CreateEmpty() { return  new DrawStackItem_obj; }
hx::ObjectPtr< DrawStackItem_obj > DrawStackItem_obj::__new()
{  hx::ObjectPtr< DrawStackItem_obj > _result_ = new DrawStackItem_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawStackItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawStackItem_obj > _result_ = new DrawStackItem_obj();
	_result_->__construct();
	return _result_;}

Void DrawStackItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.layer.DrawStackItem","reset",0xd5b5b4ce,"flixel.system.layer.DrawStackItem.reset","flixel/system/layer/DrawStackItem.hx",25,0xaa5e86d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->graphics = null();
		HX_STACK_LINE(27)
		this->initialized = false;
		HX_STACK_LINE(28)
		this->antialiasing = false;
		HX_STACK_LINE(29)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,reset,(void))

Void DrawStackItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.system.layer.DrawStackItem","dispose",0x50a9e95e,"flixel.system.layer.DrawStackItem.dispose","flixel/system/layer/DrawStackItem.hx",33,0xaa5e86d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->graphics = null();
		HX_STACK_LINE(35)
		this->drawData = null();
		HX_STACK_LINE(36)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,dispose,(void))


DrawStackItem_obj::DrawStackItem_obj()
{
}

void DrawStackItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawStackItem);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_END_CLASS();
}

void DrawStackItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
}

Dynamic DrawStackItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawStackItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::_system::layer::DrawStackItem >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawStackItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DrawStackItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("colored","\x82","\x28","\x66","\xef"));
	outFields->push(HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(DrawStackItem_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawStackItem_obj,drawData),HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56")},
	{hx::fsInt,(int)offsetof(DrawStackItem_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*::flixel::_system::layer::DrawStackItem*/ ,(int)offsetof(DrawStackItem_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,colored),HX_HCSTRING("colored","\x82","\x28","\x66","\xef")},
	{hx::fsInt,(int)offsetof(DrawStackItem_obj,blending),HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(int)offsetof(DrawStackItem_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("colored","\x82","\x28","\x66","\xef"),
	HX_HCSTRING("blending","\x31","\x6d","\xe6","\x6a"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawStackItem_obj::__mClass;

void DrawStackItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.DrawStackItem","\x2d","\x72","\x1b","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DrawStackItem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawStackItem_obj >;
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
