#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
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

Void TileSheetData_obj::__construct(::openfl::_legacy::display::BitmapData Bitmap)
{
HX_STACK_FRAME("flixel.system.layer.TileSheetData","new",0xa6b56f23,"flixel.system.layer.TileSheetData.new","flixel/system/layer/TileSheetData.hx",44,0x2838e1ce)
HX_STACK_THIS(this)
HX_STACK_ARG(Bitmap,"Bitmap")
{
	HX_STACK_LINE(45)
	this->bitmap = Bitmap;
	HX_STACK_LINE(47)
	::openfl::_legacy::display::BitmapData tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::flixel::_system::layer::TileSheetExt tmp1 = ::flixel::_system::layer::TileSheetExt_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	this->tileSheet = tmp1;
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(49)
	this->flxSpriteFrames = tmp2;
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(50)
	this->flxFrames = tmp3;
	HX_STACK_LINE(51)
	this->frameNames = Array_obj< ::String >::__new();
	HX_STACK_LINE(52)
	this->framesArr = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::openfl::_legacy::display::BitmapData Bitmap)
{  hx::ObjectPtr< TileSheetData_obj > _result_ = new TileSheetData_obj();
	_result_->__construct(Bitmap);
	return _result_;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > _result_ = new TileSheetData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TileSheetData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

TileSheetData_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< TileSheetData_obj >(this); }
::flixel::_system::layer::frames::FlxFrame TileSheetData_obj::getFrame( ::String name){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getFrame",0x5af38614,"flixel.system.layer.TileSheetData.getFrame","flixel/system/layer/TileSheetData.hx",56,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp = this->flxFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	::flixel::_system::layer::frames::FlxFrame tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	::flixel::_system::layer::frames::FlxFrame tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getFrame,return )

::flixel::_system::layer::frames::FlxSpriteFrames TileSheetData_obj::getSpriteSheetFrames( ::flixel::_system::layer::Region region,::openfl::_legacy::geom::Point origin){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getSpriteSheetFrames",0x12547407,"flixel.system.layer.TileSheetData.getSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",61,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(origin,"origin")
	HX_STACK_LINE(62)
	int bitmapWidth = region->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(63)
	int bitmapHeight = region->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(65)
	int startX = region->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(66)
	int startY = region->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(68)
	int tmp = (startX + bitmapWidth);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int endX = tmp;		HX_STACK_VAR(endX,"endX");
	HX_STACK_LINE(69)
	int tmp1 = (startY + bitmapHeight);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	int endY = tmp1;		HX_STACK_VAR(endY,"endY");
	HX_STACK_LINE(71)
	int xSpacing = region->__Field(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(72)
	int ySpacing = region->__Field(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(74)
	bool tmp2 = (region->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	if ((tmp2)){
		HX_STACK_LINE(74)
		tmp3 = bitmapWidth;
	}
	else{
		HX_STACK_LINE(74)
		tmp3 = region->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );
	}
	HX_STACK_LINE(74)
	int width = tmp3;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(75)
	bool tmp4 = (region->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	if ((tmp4)){
		HX_STACK_LINE(75)
		tmp5 = bitmapHeight;
	}
	else{
		HX_STACK_LINE(75)
		tmp5 = region->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic );
	}
	HX_STACK_LINE(75)
	int height = tmp5;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(77)
	Float tmp6 = (((Float)0.5) * width);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	Float pointX = tmp6;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(78)
	Float tmp7 = (((Float)0.5) * height);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	Float pointY = tmp7;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(80)
	bool tmp8 = (origin != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	if ((tmp8)){
		HX_STACK_LINE(82)
		pointX = origin->x;
		HX_STACK_LINE(83)
		pointY = origin->y;
	}
	HX_STACK_LINE(86)
	::String tmp9 = (width + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	int tmp13 = startX;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	::String tmp15 = (tmp14 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	int tmp16 = startY;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(86)
	::String tmp18 = (tmp17 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(86)
	int tmp19 = endX;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(86)
	::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(86)
	::String tmp21 = (tmp20 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(86)
	int tmp22 = endY;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(86)
	::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(86)
	::String tmp24 = (tmp23 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(86)
	int tmp25 = xSpacing;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(86)
	::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(86)
	::String tmp27 = (tmp26 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(86)
	int tmp28 = ySpacing;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(86)
	::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(86)
	::String tmp30 = (tmp29 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(86)
	Float tmp31 = pointX;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(86)
	::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(86)
	::String tmp33 = (tmp32 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(86)
	Float tmp34 = pointY;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(86)
	::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(86)
	::String key = tmp35;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp36 = this->flxSpriteFrames;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(87)
	::String tmp37 = key;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(87)
	bool tmp38 = tmp36->exists(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(87)
	if ((tmp38)){
		HX_STACK_LINE(89)
		::haxe::ds::StringMap tmp39 = this->flxSpriteFrames;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(89)
		::String tmp40 = key;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(89)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp41 = tmp39->get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(89)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(89)
		return tmp42;
	}
	HX_STACK_LINE(92)
	int tmp39 = region->__Field(HX_HCSTRING("get_numRows","\x96","\xfa","\x29","\x25"), hx::paccDynamic )();		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(92)
	int numRows = tmp39;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(93)
	int tmp40 = region->__Field(HX_HCSTRING("get_numCols","\xb0","\xbd","\x3f","\x1b"), hx::paccDynamic )();		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(93)
	int numCols = tmp40;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(95)
	::openfl::_legacy::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(96)
	bool tmp41 = (origin == null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(96)
	if ((tmp41)){
		HX_STACK_LINE(98)
		::openfl::_legacy::geom::Point tmp42 = ::openfl::_legacy::geom::Point_obj::__new(pointX,pointY);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(98)
		tempPoint = tmp42;
	}
	HX_STACK_LINE(101)
	::flixel::_system::layer::frames::FlxSpriteFrames tmp42 = ::flixel::_system::layer::frames::FlxSpriteFrames_obj::__new(key);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(101)
	::flixel::_system::layer::frames::FlxSpriteFrames spriteData = tmp42;		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(103)
	::flixel::_system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(104)
	::openfl::_legacy::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(106)
	int tmp43 = (width + xSpacing);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(106)
	int spacedWidth = tmp43;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(107)
	int tmp44 = (height + ySpacing);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(107)
	int spacedHeight = tmp44;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		int _g = numRows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			bool tmp45 = (_g1 < _g);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(109)
			bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(109)
			if ((tmp46)){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			int tmp47 = (_g1)++;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(109)
			int j = tmp47;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(111)
				int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(111)
					bool tmp48 = (_g3 < _g2);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(111)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(111)
					if ((tmp49)){
						HX_STACK_LINE(111)
						break;
					}
					HX_STACK_LINE(111)
					int tmp50 = (_g3)++;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(111)
					int i = tmp50;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(113)
					int tmp51 = startX;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(113)
					int tmp52 = (i * spacedWidth);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(113)
					int tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(113)
					int tmp54 = startY;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(113)
					int tmp55 = (j * spacedHeight);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(113)
					int tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(113)
					int tmp57 = width;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(113)
					int tmp58 = height;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(113)
					::openfl::_legacy::geom::Rectangle tmp59 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp53,tmp56,tmp57,tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(113)
					tempRect = tmp59;
					HX_STACK_LINE(114)
					::openfl::_legacy::geom::Rectangle tmp60 = tempRect;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(114)
					::openfl::_legacy::geom::Point tmp61 = tempPoint;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(114)
					::flixel::_system::layer::frames::FlxFrame tmp62 = this->addSpriteSheetFrame(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(114)
					frame = tmp62;
					HX_STACK_LINE(115)
					::flixel::_system::layer::frames::FlxFrame tmp63 = frame;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(115)
					spriteData->__Field(HX_HCSTRING("addFrame","\x4c","\x9e","\xe0","\x7f"), hx::paccDynamic )(tmp63);
				}
			}
		}
	}
	HX_STACK_LINE(119)
	::haxe::ds::StringMap tmp45 = this->flxSpriteFrames;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(119)
	::String tmp46 = key;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(119)
	::flixel::_system::layer::frames::FlxSpriteFrames tmp47 = spriteData;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(119)
	tmp45->set(tmp46,tmp47);
	HX_STACK_LINE(120)
	::flixel::_system::layer::frames::FlxSpriteFrames tmp48 = spriteData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(120)
	return tmp48;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrames,return )

::String TileSheetData_obj::getSpriteSheetFrameKey( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getSpriteSheetFrameKey",0xa740c213,"flixel.system.layer.TileSheetData.getSpriteSheetFrameKey","flixel/system/layer/TileSheetData.hx",130,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(131)
	::String tmp = (rect->x + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	Float tmp1 = rect->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	Float tmp4 = rect->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	::String tmp6 = (tmp5 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(131)
	Float tmp7 = rect->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(131)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(131)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(131)
	Float tmp10 = point->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(131)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(131)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(131)
	Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(131)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(131)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrameKey,return )

::String TileSheetData_obj::getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getKeyForSpriteSheetFrames",0x8c6fd93d,"flixel.system.layer.TileSheetData.getKeyForSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",135,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(endX,"endX")
	HX_STACK_ARG(endY,"endY")
	HX_STACK_ARG(xSpacing,"xSpacing")
	HX_STACK_ARG(ySpacing,"ySpacing")
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_LINE(136)
	::String tmp = (width + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	int tmp4 = startX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	::String tmp6 = (tmp5 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	int tmp7 = startY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(136)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(136)
	int tmp10 = endX;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(136)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(136)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(136)
	int tmp13 = endY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(136)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(136)
	::String tmp15 = (tmp14 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(136)
	int tmp16 = xSpacing;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(136)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(136)
	::String tmp18 = (tmp17 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(136)
	int tmp19 = ySpacing;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(136)
	::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(136)
	::String tmp21 = (tmp20 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(136)
	Float tmp22 = pointX;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(136)
	::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(136)
	::String tmp24 = (tmp23 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(136)
	Float tmp25 = pointY;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(136)
	::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(136)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getKeyForSpriteSheetFrames,return )

bool TileSheetData_obj::containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","containsSpriteSheetFrames",0x6b49c384,"flixel.system.layer.TileSheetData.containsSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",140,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(endX,"endX")
	HX_STACK_ARG(endY,"endY")
	HX_STACK_ARG(xSpacing,"xSpacing")
	HX_STACK_ARG(ySpacing,"ySpacing")
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_LINE(141)
	::String tmp = (width + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	int tmp4 = startX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	::String tmp6 = (tmp5 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	int tmp7 = startY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(141)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(141)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(141)
	int tmp10 = endX;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(141)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(141)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(141)
	int tmp13 = endY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(141)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(141)
	::String tmp15 = (tmp14 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(141)
	int tmp16 = xSpacing;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(141)
	::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(141)
	::String tmp18 = (tmp17 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(141)
	int tmp19 = ySpacing;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(141)
	::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(141)
	::String tmp21 = (tmp20 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(141)
	Float tmp22 = pointX;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(141)
	::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(141)
	::String tmp24 = (tmp23 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(141)
	Float tmp25 = pointY;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(141)
	::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(141)
	::String key = tmp26;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(142)
	::haxe::ds::StringMap tmp27 = this->flxSpriteFrames;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(142)
	::String tmp28 = key;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(142)
	bool tmp29 = tmp27->exists(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(142)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteSheetFrames,return )

::flixel::_system::layer::frames::FlxFrame TileSheetData_obj::addSpriteSheetFrame( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addSpriteSheetFrame",0x64739277,"flixel.system.layer.TileSheetData.addSpriteSheetFrame","flixel/system/layer/TileSheetData.hx",149,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(150)
	::String tmp = (rect->x + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1 = rect->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(150)
	Float tmp4 = rect->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(150)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(150)
	::String tmp6 = (tmp5 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(150)
	Float tmp7 = rect->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(150)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(150)
	::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(150)
	Float tmp10 = point->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(150)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(150)
	::String tmp12 = (tmp11 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(150)
	Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(150)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(150)
	::String key = tmp14;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(151)
	::haxe::ds::StringMap tmp15 = this->flxFrames;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(151)
	::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(151)
	bool tmp17 = tmp15->exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(151)
	if ((tmp17)){
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp18 = this->flxFrames;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(153)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(153)
		::flixel::_system::layer::frames::FlxFrame tmp20 = tmp18->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(153)
		::flixel::_system::layer::frames::FlxFrame tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(153)
		return tmp21;
	}
	HX_STACK_LINE(156)
	::flixel::_system::layer::frames::FlxFrame tmp18 = ::flixel::_system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(156)
	::flixel::_system::layer::frames::FlxFrame frame = tmp18;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(158)
	::flixel::_system::layer::TileSheetExt tmp19 = this->tileSheet;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(158)
	::openfl::_legacy::geom::Rectangle tmp20 = rect;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(158)
	::openfl::_legacy::geom::Point tmp21 = point;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(158)
	int tmp22 = tmp19->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(158)
	frame->__FieldRef(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")) = tmp22;
	HX_STACK_LINE(160)
	frame->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = key;
	HX_STACK_LINE(161)
	frame->__FieldRef(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")) = rect;
	HX_STACK_LINE(162)
	frame->__FieldRef(HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29")) = false;
	HX_STACK_LINE(163)
	Float tmp23 = rect->width;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(163)
	Float tmp24 = rect->height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(163)
	frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp23,tmp24);
	HX_STACK_LINE(164)
	frame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )((int)0,(int)0);
	HX_STACK_LINE(166)
	Float tmp25 = (((Float)0.5) * rect->width);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(166)
	Float tmp26 = (((Float)0.5) * rect->height);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(166)
	frame->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp25,tmp26);
	HX_STACK_LINE(167)
	::haxe::ds::StringMap tmp27 = this->flxFrames;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(167)
	::String tmp28 = key;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(167)
	::flixel::_system::layer::frames::FlxFrame tmp29 = frame;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(167)
	tmp27->set(tmp28,tmp29);
	HX_STACK_LINE(168)
	::String tmp30 = key;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(168)
	this->frameNames->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp30);
	HX_STACK_LINE(169)
	::flixel::_system::layer::frames::FlxFrame tmp31 = frame;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(169)
	this->framesArr->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
	HX_STACK_LINE(170)
	::flixel::_system::layer::frames::FlxFrame tmp32 = frame;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(170)
	return tmp32;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addSpriteSheetFrame,return )

bool TileSheetData_obj::containsFrame( ::String key){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","containsFrame",0x0c1e4e11,"flixel.system.layer.TileSheetData.containsFrame","flixel/system/layer/TileSheetData.hx",174,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(175)
	::haxe::ds::StringMap tmp = this->flxFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsFrame,return )

int TileSheetData_obj::addTileRect( ::openfl::_legacy::geom::Rectangle tileRect,::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addTileRect",0xd31c4476,"flixel.system.layer.TileSheetData.addTileRect","flixel/system/layer/TileSheetData.hx",180,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileRect,"tileRect")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(181)
	::flixel::_system::layer::TileSheetExt tmp = this->tileSheet;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::openfl::_legacy::geom::Rectangle tmp1 = tileRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	::openfl::_legacy::geom::Point tmp2 = point;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	int tmp3 = tmp->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","destroy",0xa631e93d,"flixel.system.layer.TileSheetData.destroy","flixel/system/layer/TileSheetData.hx",186,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->bitmap = null();
		HX_STACK_LINE(189)
		::flixel::_system::layer::TileSheetExt tmp = this->tileSheet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		tmp->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(190)
		this->tileSheet = null();
		HX_STACK_LINE(193)
		::haxe::ds::StringMap tmp1 = this->flxSpriteFrames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		for(::cpp::FastIterator_obj< ::flixel::_system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::_system::layer::frames::FlxSpriteFrames >(tmp2);  __it->hasNext(); ){
			::flixel::_system::layer::frames::FlxSpriteFrames frames = __it->next();
			frames->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(197)
		this->flxSpriteFrames = null();
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			Array< ::Dynamic > _g1 = this->framesArr;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(199)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				if ((tmp4)){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(199)
				::flixel::_system::layer::frames::FlxFrame tmp5 = _g1->__get(_g).StaticCast< ::flixel::_system::layer::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				::flixel::_system::layer::frames::FlxFrame frame = tmp5;		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(199)
				++(_g);
				HX_STACK_LINE(201)
				frame->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			}
		}
		HX_STACK_LINE(203)
		this->flxFrames = null();
		HX_STACK_LINE(205)
		this->frameNames = null();
		HX_STACK_LINE(206)
		this->framesArr = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

Void TileSheetData_obj::onContext( ::openfl::_legacy::display::BitmapData bitmap){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","onContext",0x0267e193,"flixel.system.layer.TileSheetData.onContext","flixel/system/layer/TileSheetData.hx",211,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(212)
		this->bitmap = bitmap;
		HX_STACK_LINE(213)
		::flixel::_system::layer::TileSheetExt tmp = ::flixel::_system::layer::TileSheetExt_obj::__new(bitmap);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::flixel::_system::layer::TileSheetExt newSheet = tmp;		HX_STACK_VAR(newSheet,"newSheet");
		HX_STACK_LINE(214)
		::flixel::_system::layer::TileSheetExt tmp1 = this->tileSheet;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		newSheet->__Field(HX_HCSTRING("rebuildFromOld","\x02","\x3c","\x78","\xa0"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(215)
		this->tileSheet = newSheet;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,onContext,(void))

::flixel::_system::layer::frames::FlxSpriteFrames TileSheetData_obj::getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","getTexturePackerFrames",0xc98e496e,"flixel.system.layer.TileSheetData.getTexturePackerFrames","flixel/system/layer/TileSheetData.hx",223,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
{
		HX_STACK_LINE(225)
		::haxe::ds::StringMap tmp = this->flxSpriteFrames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::String tmp1 = data->assetName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		if ((tmp2)){
			HX_STACK_LINE(227)
			::haxe::ds::StringMap tmp3 = this->flxSpriteFrames;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::String tmp4 = data->assetName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			return tmp6;
		}
		HX_STACK_LINE(230)
		data->parseData();
		HX_STACK_LINE(232)
		::flixel::_system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(233)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp3 = ::flixel::_system::layer::frames::FlxSpriteFrames_obj::__new(data->assetName);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		::flixel::_system::layer::frames::FlxSpriteFrames packerFrames = tmp3;		HX_STACK_VAR(packerFrames,"packerFrames");
		HX_STACK_LINE(235)
		int tmp4 = data->frames->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		int l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(236)
			while((true)){
				HX_STACK_LINE(236)
				bool tmp5 = (_g < l);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(236)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(236)
				if ((tmp6)){
					HX_STACK_LINE(236)
					break;
				}
				HX_STACK_LINE(236)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(236)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(238)
				::flixel::util::loaders::TextureAtlasFrame tmp8 = data->frames->__get(i).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				int tmp9 = startX;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				int tmp10 = startY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(238)
				::flixel::_system::layer::frames::FlxFrame tmp11 = this->addTexturePackerFrame(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(238)
				frame = tmp11;
				HX_STACK_LINE(239)
				::flixel::_system::layer::frames::FlxFrame tmp12 = frame;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(239)
				packerFrames->__Field(HX_HCSTRING("addFrame","\x4c","\x9e","\xe0","\x7f"), hx::paccDynamic )(tmp12);
			}
		}
		HX_STACK_LINE(242)
		::haxe::ds::StringMap tmp5 = this->flxSpriteFrames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::String tmp6 = data->assetName;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp7 = packerFrames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		tmp5->set(tmp6,tmp7);
		HX_STACK_LINE(243)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp8 = packerFrames;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(243)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,getTexturePackerFrames,return )

::flixel::_system::layer::frames::FlxFrame TileSheetData_obj::addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_FRAME("flixel.system.layer.TileSheetData","addTexturePackerFrame",0x4900dfb0,"flixel.system.layer.TileSheetData.addTexturePackerFrame","flixel/system/layer/TileSheetData.hx",250,0x2838e1ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frameData,"frameData")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
{
		HX_STACK_LINE(251)
		::String key = frameData->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(252)
		::haxe::ds::StringMap tmp = this->flxFrames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		if ((tmp2)){
			HX_STACK_LINE(254)
			::haxe::ds::StringMap tmp3 = this->flxFrames;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(254)
			::flixel::_system::layer::frames::FlxFrame tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(254)
			::flixel::_system::layer::frames::FlxFrame tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			return tmp6;
		}
		HX_STACK_LINE(257)
		::flixel::_system::layer::frames::FlxFrame texFrame = null();		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(259)
		bool tmp3 = frameData->rotated;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		if ((tmp3)){
			HX_STACK_LINE(261)
			::flixel::_system::layer::frames::FlxRotatedFrame tmp4 = ::flixel::_system::layer::frames::FlxRotatedFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			texFrame = tmp4;
		}
		else{
			HX_STACK_LINE(265)
			::flixel::_system::layer::frames::FlxFrame tmp4 = ::flixel::_system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			texFrame = tmp4;
		}
		HX_STACK_LINE(268)
		texFrame->__FieldRef(HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29")) = frameData->trimmed;
		HX_STACK_LINE(269)
		texFrame->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = key;
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			::flixel::util::FlxPoint _this = texFrame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(270)
			::flixel::util::FlxPoint point = frameData->sourceSize;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(270)
			Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(270)
			_this->set_x(tmp4);
			HX_STACK_LINE(270)
			Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(270)
			_this->set_y(tmp5);
			HX_STACK_LINE(270)
			_this;
		}
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::flixel::util::FlxPoint _this = texFrame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(271)
			::flixel::util::FlxPoint point = frameData->offset;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(271)
			Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			_this->set_x(tmp4);
			HX_STACK_LINE(271)
			Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			_this->set_y(tmp5);
			HX_STACK_LINE(271)
			_this;
		}
		HX_STACK_LINE(272)
		texFrame->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )((int)0,(int)0);
		HX_STACK_LINE(273)
		::openfl::_legacy::geom::Rectangle tmp4 = frameData->frame->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		texFrame->__FieldRef(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")) = tmp4;
		HX_STACK_LINE(275)
		bool tmp5 = frameData->rotated;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		if ((tmp5)){
			HX_STACK_LINE(277)
			Float tmp6 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			Float tmp8 = texFrame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(277)
			Float tmp10 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(277)
			Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(277)
			Float tmp12 = texFrame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(277)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(277)
			texFrame->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp9,tmp13);
		}
		else{
			HX_STACK_LINE(281)
			Float tmp6 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(281)
			Float tmp8 = texFrame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(281)
			Float tmp10 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(281)
			Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(281)
			Float tmp12 = texFrame->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(281)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(281)
			texFrame->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp9,tmp13);
		}
		HX_STACK_LINE(284)
		texFrame->__FieldRef(HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9")) = frameData->additionalAngle;
		HX_STACK_LINE(287)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			Float tmp7 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(287)
			Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(287)
			Float tmp9 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(287)
			Float tmp10 = (((Float)0.5) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(287)
			::openfl::_legacy::geom::Point tmp11 = ::openfl::_legacy::geom::Point_obj::__new(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(287)
			::openfl::_legacy::geom::Point point = tmp11;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(287)
			::flixel::_system::layer::TileSheetExt tmp12 = this->tileSheet;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(287)
			::openfl::_legacy::geom::Rectangle tmp13 = texFrame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(287)
			::openfl::_legacy::geom::Point tmp14 = point;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(287)
			tmp6 = tmp12->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp13,tmp14);
		}
		HX_STACK_LINE(287)
		texFrame->__FieldRef(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")) = tmp6;
		HX_STACK_LINE(289)
		::haxe::ds::StringMap tmp7 = this->flxFrames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(289)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(289)
		::flixel::_system::layer::frames::FlxFrame tmp9 = texFrame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(289)
		tmp7->set(tmp8,tmp9);
		HX_STACK_LINE(290)
		::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(290)
		this->frameNames->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(291)
		::flixel::_system::layer::frames::FlxFrame tmp11 = texFrame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(291)
		this->framesArr->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(292)
		::flixel::_system::layer::frames::FlxFrame tmp12 = texFrame;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(292)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,addTexturePackerFrame,return )

Void TileSheetData_obj::destroyFrameBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.system.layer.TileSheetData","destroyFrameBitmapDatas",0x25de80ca,"flixel.system.layer.TileSheetData.destroyFrameBitmapDatas","flixel/system/layer/TileSheetData.hx",296,0x2838e1ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		int tmp = this->frameNames->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		int numFrames = tmp;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(298)
			Array< ::Dynamic > _g1 = this->framesArr;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(298)
			while((true)){
				HX_STACK_LINE(298)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(298)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				if ((tmp2)){
					HX_STACK_LINE(298)
					break;
				}
				HX_STACK_LINE(298)
				::flixel::_system::layer::frames::FlxFrame tmp3 = _g1->__get(_g).StaticCast< ::flixel::_system::layer::frames::FlxFrame >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				::flixel::_system::layer::frames::FlxFrame frame = tmp3;		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(298)
				++(_g);
				HX_STACK_LINE(300)
				frame->__Field(HX_HCSTRING("destroyBitmapDatas","\xc0","\x45","\x13","\xd2"), hx::paccDynamic )();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroyFrameBitmapDatas,(void))


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(flxFrames,"flxFrames");
	HX_MARK_MEMBER_NAME(frameNames,"frameNames");
	HX_MARK_MEMBER_NAME(framesArr,"framesArr");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(flxFrames,"flxFrames");
	HX_VISIT_MEMBER_NAME(frameNames,"frameNames");
	HX_VISIT_MEMBER_NAME(framesArr,"framesArr");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { return flxFrames; }
		if (HX_FIELD_EQ(inName,"framesArr") ) { return framesArr; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { return frameNames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsFrame") ) { return containsFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addTexturePackerFrame") ) { return addTexturePackerFrame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrameKey") ) { return getSpriteSheetFrameKey_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"destroyFrameBitmapDatas") ) { return destroyFrameBitmapDatas_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"containsSpriteSheetFrames") ) { return containsSpriteSheetFrames_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyForSpriteSheetFrames") ) { return getKeyForSpriteSheetFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::flixel::_system::layer::TileSheetExt >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { flxFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesArr") ) { framesArr=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { frameNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TileSheetData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"));
	outFields->push(HX_HCSTRING("flxSpriteFrames","\x1d","\x45","\x16","\x3c"));
	outFields->push(HX_HCSTRING("flxFrames","\xb8","\xc9","\xa1","\x8c"));
	outFields->push(HX_HCSTRING("frameNames","\x5b","\xc4","\xaa","\x79"));
	outFields->push(HX_HCSTRING("framesArr","\x5b","\xd2","\xdc","\x4e"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::layer::TileSheetExt*/ ,(int)offsetof(TileSheetData_obj,tileSheet),HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileSheetData_obj,flxSpriteFrames),HX_HCSTRING("flxSpriteFrames","\x1d","\x45","\x16","\x3c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TileSheetData_obj,flxFrames),HX_HCSTRING("flxFrames","\xb8","\xc9","\xa1","\x8c")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TileSheetData_obj,frameNames),HX_HCSTRING("frameNames","\x5b","\xc4","\xaa","\x79")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileSheetData_obj,framesArr),HX_HCSTRING("framesArr","\x5b","\xd2","\xdc","\x4e")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(TileSheetData_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"),
	HX_HCSTRING("flxSpriteFrames","\x1d","\x45","\x16","\x3c"),
	HX_HCSTRING("flxFrames","\xb8","\xc9","\xa1","\x8c"),
	HX_HCSTRING("frameNames","\x5b","\xc4","\xaa","\x79"),
	HX_HCSTRING("framesArr","\x5b","\xd2","\xdc","\x4e"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("getFrame","\xb7","\x87","\x5a","\x66"),
	HX_HCSTRING("getSpriteSheetFrames","\x2a","\xde","\x48","\x46"),
	HX_HCSTRING("getSpriteSheetFrameKey","\xf6","\x3a","\xbe","\x10"),
	HX_HCSTRING("getKeyForSpriteSheetFrames","\xa0","\xff","\xfe","\xc1"),
	HX_HCSTRING("containsSpriteSheetFrames","\x81","\xba","\x92","\x35"),
	HX_HCSTRING("addSpriteSheetFrame","\xb4","\xfd","\xbc","\xf0"),
	HX_HCSTRING("containsFrame","\x8e","\x7d","\xdf","\xd2"),
	HX_HCSTRING("addTileRect","\xb3","\xaa","\x09","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("getTexturePackerFrames","\x51","\xc2","\x0b","\x33"),
	HX_HCSTRING("addTexturePackerFrame","\x2d","\x54","\xe9","\x8a"),
	HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

#endif

hx::Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.TileSheetData","\xb1","\xa1","\xa8","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TileSheetData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileSheetData_obj >;
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
