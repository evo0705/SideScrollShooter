#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace layer{
namespace _TileSheetExt{

Void RectPointTileID_obj::__construct(int id,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point)
{
HX_STACK_FRAME("flixel.system.layer._TileSheetExt.RectPointTileID","new",0xd8d2fe9e,"flixel.system.layer._TileSheetExt.RectPointTileID.new","flixel/system/layer/TileSheetExt.hx",104,0x9b6b4f03)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(rect,"rect")
HX_STACK_ARG(point,"point")
{
	HX_STACK_LINE(105)
	this->id = id;
	HX_STACK_LINE(106)
	this->rect = rect;
	HX_STACK_LINE(107)
	this->point = point;
}
;
	return null();
}

//RectPointTileID_obj::~RectPointTileID_obj() { }

Dynamic RectPointTileID_obj::__CreateEmpty() { return  new RectPointTileID_obj; }
hx::ObjectPtr< RectPointTileID_obj > RectPointTileID_obj::__new(int id,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point)
{  hx::ObjectPtr< RectPointTileID_obj > _result_ = new RectPointTileID_obj();
	_result_->__construct(id,rect,point);
	return _result_;}

Dynamic RectPointTileID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectPointTileID_obj > _result_ = new RectPointTileID_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *RectPointTileID_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

RectPointTileID_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< RectPointTileID_obj >(this); }
Void RectPointTileID_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer._TileSheetExt.RectPointTileID","destroy",0xca0c5238,"flixel.system.layer._TileSheetExt.RectPointTileID.destroy","flixel/system/layer/TileSheetExt.hx",111,0x9b6b4f03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->rect = null();
		HX_STACK_LINE(113)
		this->point = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RectPointTileID_obj,destroy,(void))


RectPointTileID_obj::RectPointTileID_obj()
{
}

void RectPointTileID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RectPointTileID);
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void RectPointTileID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic RectPointTileID_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectPointTileID_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RectPointTileID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RectPointTileID_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(RectPointTileID_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(RectPointTileID_obj,point),HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsInt,(int)offsetof(RectPointTileID_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectPointTileID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectPointTileID_obj::__mClass,"__mClass");
};

#endif

hx::Class RectPointTileID_obj::__mClass;

void RectPointTileID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer._TileSheetExt.RectPointTileID","\xac","\x17","\xd4","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RectPointTileID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectPointTileID_obj >;
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
} // end namespace _TileSheetExt
