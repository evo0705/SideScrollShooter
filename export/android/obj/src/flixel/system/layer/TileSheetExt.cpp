#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID
#include <flixel/system/layer/_TileSheetExt/RectPointTileID.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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

Void TileSheetExt_obj::__construct(::openfl::_legacy::display::BitmapData bitmap)
{
HX_STACK_FRAME("flixel.system.layer.TileSheetExt","new",0x0d1974ec,"flixel.system.layer.TileSheetExt.new","flixel/system/layer/TileSheetExt.hx",11,0x9b6b4f03)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
{
	HX_STACK_LINE(15)
	this->numTiles = (int)0;
	HX_STACK_LINE(22)
	::openfl::_legacy::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	super::__construct(tmp);
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(24)
	this->tileIDs = tmp1;
	HX_STACK_LINE(25)
	this->tileOrder = Array_obj< ::String >::__new();
}
;
	return null();
}

//TileSheetExt_obj::~TileSheetExt_obj() { }

Dynamic TileSheetExt_obj::__CreateEmpty() { return  new TileSheetExt_obj; }
hx::ObjectPtr< TileSheetExt_obj > TileSheetExt_obj::__new(::openfl::_legacy::display::BitmapData bitmap)
{  hx::ObjectPtr< TileSheetExt_obj > _result_ = new TileSheetExt_obj();
	_result_->__construct(bitmap);
	return _result_;}

Dynamic TileSheetExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetExt_obj > _result_ = new TileSheetExt_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TileSheetExt_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

TileSheetExt_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TileSheetExt_obj >(this); }
Void TileSheetExt_obj::rebuildFromOld( ::flixel::_system::layer::TileSheetExt old){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetExt","rebuildFromOld",0x06bd0af6,"flixel.system.layer.TileSheetExt.rebuildFromOld","flixel/system/layer/TileSheetExt.hx",29,0x9b6b4f03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(old,"old")
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(30)
			int tmp = old->__Field(HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			while((true)){
				HX_STACK_LINE(30)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(30)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				if ((tmp2)){
					HX_STACK_LINE(30)
					break;
				}
				HX_STACK_LINE(30)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(32)
				::String tmp4 = old->__Field(HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				::String tileName = tmp4;		HX_STACK_VAR(tileName,"tileName");
				HX_STACK_LINE(33)
				::String tmp5 = tileName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				::flixel::_system::layer::_TileSheetExt::RectPointTileID tmp6 = old->__Field(HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				::flixel::_system::layer::_TileSheetExt::RectPointTileID tileObj = tmp6;		HX_STACK_VAR(tileObj,"tileObj");
				HX_STACK_LINE(34)
				::openfl::_legacy::geom::Rectangle tmp7 = tileObj->__Field(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				::openfl::_legacy::geom::Point tmp8 = tileObj->__Field(HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				this->addTileRect(tmp7,tmp8);
			}
		}
		HX_STACK_LINE(37)
		this->tileIDs = old->__Field(HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45"), hx::paccDynamic );
		HX_STACK_LINE(38)
		this->tileOrder = old->__Field(HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0"), hx::paccDynamic );
		HX_STACK_LINE(39)
		this->numTiles = old->__Field(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"), hx::paccDynamic );
		HX_STACK_LINE(41)
		old->__FieldRef(HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45")) = null();
		HX_STACK_LINE(42)
		old->__FieldRef(HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0")) = null();
		HX_STACK_LINE(43)
		::flixel::_system::layer::TileSheetExt tmp = old;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::flixel::util::FlxDestroyUtil_obj::destroy(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,rebuildFromOld,(void))

::String TileSheetExt_obj::getKey( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetExt","getKey",0xe3037d9d,"flixel.system.layer.TileSheetExt.getKey","flixel/system/layer/TileSheetExt.hx",53,0x9b6b4f03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(54)
	::String tmp = (rect->x + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Float tmp1 = rect->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	Float tmp4 = rect->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	::String tmp6 = (tmp5 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	Float tmp7 = rect->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	::String key = tmp9;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(55)
	bool tmp10 = (point != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	if ((tmp10)){
		HX_STACK_LINE(57)
		::String tmp11 = (key + point->x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(57)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(57)
		key = tmp14;
	}
	HX_STACK_LINE(59)
	::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(59)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,getKey,return )

int TileSheetExt_obj::addTileRectID( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetExt","addTileRectID",0x582d88da,"flixel.system.layer.TileSheetExt.addTileRectID","flixel/system/layer/TileSheetExt.hx",67,0x9b6b4f03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(68)
	::openfl::_legacy::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::openfl::_legacy::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::String tmp2 = this->getKey(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(70)
	::haxe::ds::StringMap tmp3 = this->tileIDs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	if ((tmp5)){
		HX_STACK_LINE(72)
		::haxe::ds::StringMap tmp6 = this->tileIDs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		::flixel::_system::layer::_TileSheetExt::RectPointTileID tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		int tmp9 = tmp8->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		return tmp9;
	}
	HX_STACK_LINE(75)
	::openfl::_legacy::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(75)
	::openfl::_legacy::geom::Point tmp7 = point;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(75)
	this->addTileRect(tmp6,tmp7);
	HX_STACK_LINE(76)
	int tmp8 = this->numTiles;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(76)
	int tileID = tmp8;		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(77)
	(this->numTiles)++;
	HX_STACK_LINE(78)
	::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(78)
	hx::IndexRef((this->tileOrder).mPtr,tileID) = tmp9;
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::flixel::_system::layer::_TileSheetExt::RectPointTileID tmp10 = ::flixel::_system::layer::_TileSheetExt::RectPointTileID_obj::__new(tileID,rect,point);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		::flixel::_system::layer::_TileSheetExt::RectPointTileID value = tmp10;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp11 = this->tileIDs;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		::flixel::_system::layer::_TileSheetExt::RectPointTileID tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		tmp11->set(tmp12,tmp13);
	}
	HX_STACK_LINE(80)
	int tmp10 = tileID;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(80)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,addTileRectID,return )

Void TileSheetExt_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetExt","destroy",0xcb070786,"flixel.system.layer.TileSheetExt.destroy","flixel/system/layer/TileSheetExt.hx",84,0x9b6b4f03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->tileOrder = null();
		HX_STACK_LINE(86)
		::haxe::ds::StringMap tmp = this->tileIDs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::haxe::ds::StringMap tmp2 = this->tileIDs;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			for(::cpp::FastIterator_obj< ::flixel::_system::layer::_TileSheetExt::RectPointTileID > *__it = ::cpp::CreateFastIterator< ::flixel::_system::layer::_TileSheetExt::RectPointTileID >(tmp3);  __it->hasNext(); ){
				::flixel::_system::layer::_TileSheetExt::RectPointTileID tileObj = __it->next();
				{
					HX_STACK_LINE(90)
					::flixel::_system::layer::_TileSheetExt::RectPointTileID tmp4 = tileObj;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(90)
					::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);
				}
;
			}
		}
		HX_STACK_LINE(93)
		this->tileIDs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,destroy,(void))

int TileSheetExt_obj::_DRAWCALLS;


TileSheetExt_obj::TileSheetExt_obj()
{
}

void TileSheetExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetExt);
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(tileIDs,"tileIDs");
	HX_MARK_MEMBER_NAME(tileOrder,"tileOrder");
	::openfl::_legacy::display::Tilesheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileSheetExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(tileIDs,"tileIDs");
	HX_VISIT_MEMBER_NAME(tileOrder,"tileOrder");
	::openfl::_legacy::display::Tilesheet_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TileSheetExt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { return tileIDs; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileOrder") ) { return tileOrder; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTileRectID") ) { return addTileRectID_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rebuildFromOld") ) { return rebuildFromOld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TileSheetExt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { outValue = _DRAWCALLS; return true;  }
	}
	return false;
}

Dynamic TileSheetExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { tileIDs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileOrder") ) { tileOrder=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TileSheetExt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void TileSheetExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45"));
	outFields->push(HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TileSheetExt_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileSheetExt_obj,tileIDs),HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TileSheetExt_obj,tileOrder),HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TileSheetExt_obj::_DRAWCALLS,HX_HCSTRING("_DRAWCALLS","\x32","\x23","\xf4","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("tileIDs","\xca","\x85","\x73","\x45"),
	HX_HCSTRING("tileOrder","\x80","\x4e","\x7c","\xc0"),
	HX_HCSTRING("rebuildFromOld","\x02","\x3c","\x78","\xa0"),
	HX_HCSTRING("getKey","\xa9","\xc2","\x20","\xa3"),
	HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

#endif

hx::Class TileSheetExt_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_DRAWCALLS","\x32","\x23","\xf4","\xcc"),
	::String(null()) };

void TileSheetExt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.TileSheetExt","\xfa","\xce","\x31","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TileSheetExt_obj::__GetStatic;
	__mClass->mSetStaticField = &TileSheetExt_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileSheetExt_obj >;
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

void TileSheetExt_obj::__boot()
{
	_DRAWCALLS= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
