#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemapBuffer_obj::__construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",15,0x56d29ad4)
HX_STACK_THIS(this)
HX_STACK_ARG(TileWidth,"TileWidth")
HX_STACK_ARG(TileHeight,"TileHeight")
HX_STACK_ARG(WidthInTiles,"WidthInTiles")
HX_STACK_ARG(HeightInTiles,"HeightInTiles")
HX_STACK_ARG(Camera,"Camera")
HX_STACK_ARG(__o_ScaleX,"ScaleX")
HX_STACK_ARG(__o_ScaleY,"ScaleY")
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
{
	HX_STACK_LINE(50)
	this->pixelPerfectRender = true;
	HX_STACK_LINE(44)
	this->columns = (int)0;
	HX_STACK_LINE(40)
	this->rows = (int)0;
	HX_STACK_LINE(36)
	this->dirty = false;
	HX_STACK_LINE(32)
	this->height = ((Float)0);
	HX_STACK_LINE(28)
	this->width = ((Float)0);
	HX_STACK_LINE(24)
	this->y = ((Float)0);
	HX_STACK_LINE(20)
	this->x = ((Float)0);
	HX_STACK_LINE(73)
	int tmp = TileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	int tmp1 = WidthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	Float tmp2 = ScaleX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	this->updateColumns(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(74)
	int tmp4 = TileHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	int tmp5 = HeightInTiles;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	Float tmp6 = ScaleY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	this->updateRows(tmp4,tmp5,tmp6,tmp7);
	HX_STACK_LINE(82)
	this->dirty = true;
}
;
	return null();
}

//FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > _result_ = new FlxTilemapBuffer_obj();
	_result_->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return _result_;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > _result_ = new FlxTilemapBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",89,0x56d29ad4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

Void FlxTilemapBuffer_obj::updateColumns( int TileWidth,int WidthInTiles,hx::Null< Float >  __o_ScaleX,::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",137,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(ScaleX,"ScaleX")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(138)
		bool tmp = (WidthInTiles < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(140)
			WidthInTiles = (int)0;
		}
		HX_STACK_LINE(143)
		bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			Camera = tmp2;
		}
		HX_STACK_LINE(148)
		int tmp2 = Camera->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		Float tmp3 = (TileWidth * ScaleX);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		this->columns = tmp6;
		HX_STACK_LINE(150)
		int tmp7 = this->columns;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		int tmp8 = WidthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		if ((tmp9)){
			HX_STACK_LINE(152)
			this->columns = WidthInTiles;
		}
		HX_STACK_LINE(155)
		int tmp10 = this->columns;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		int tmp11 = TileWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		Float tmp13 = ScaleX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(155)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(155)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		this->width = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

Void FlxTilemapBuffer_obj::updateRows( int TileHeight,int HeightInTiles,hx::Null< Float >  __o_ScaleY,::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",159,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(ScaleY,"ScaleY")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(160)
		bool tmp = (HeightInTiles < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		if ((tmp)){
			HX_STACK_LINE(162)
			HeightInTiles = (int)0;
		}
		HX_STACK_LINE(165)
		bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(167)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			Camera = tmp2;
		}
		HX_STACK_LINE(170)
		int tmp2 = Camera->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		Float tmp3 = (TileHeight * ScaleY);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		this->rows = tmp6;
		HX_STACK_LINE(172)
		int tmp7 = this->rows;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		int tmp8 = HeightInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		if ((tmp9)){
			HX_STACK_LINE(174)
			this->rows = HeightInTiles;
		}
		HX_STACK_LINE(177)
		int tmp10 = this->rows;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		int tmp11 = TileHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(177)
		Float tmp13 = ScaleY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(177)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(177)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		this->height = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateRows") ) { return updateRows_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return updateColumns_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTilemapBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateColumns","\xd4","\x11","\xc8","\xbe"),
	HX_HCSTRING("updateRows","\xc2","\xdf","\x63","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemapBuffer","\xca","\x41","\x20","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTilemapBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemapBuffer_obj >;
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
} // end namespace tile
