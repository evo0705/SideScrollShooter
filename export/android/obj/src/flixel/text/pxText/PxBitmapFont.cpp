#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
namespace text{
namespace pxText{

Void PxBitmapFont_obj::__construct()
{
HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","new",0x07bda9e2,"flixel.text.pxText.PxBitmapFont.new","flixel/text/pxText/PxBitmapFont.hx",19,0xb7b5754d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(30)
	this->_bgTileID = (int)-1;
	HX_STACK_LINE(29)
	this->_num_letters = (int)0;
	HX_STACK_LINE(56)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	this->_point = tmp;
	HX_STACK_LINE(63)
	::haxe::ds::IntMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(63)
	this->_glyphs = tmp1;
}
;
	return null();
}

//PxBitmapFont_obj::~PxBitmapFont_obj() { }

Dynamic PxBitmapFont_obj::__CreateEmpty() { return  new PxBitmapFont_obj; }
hx::ObjectPtr< PxBitmapFont_obj > PxBitmapFont_obj::__new()
{  hx::ObjectPtr< PxBitmapFont_obj > _result_ = new PxBitmapFont_obj();
	_result_->__construct();
	return _result_;}

Dynamic PxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxBitmapFont_obj > _result_ = new PxBitmapFont_obj();
	_result_->__construct();
	return _result_;}

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadPixelizer( ::openfl::_legacy::display::BitmapData PxBitmapData,::String PxLetters){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","loadPixelizer",0x55603520,"flixel.text.pxText.PxBitmapFont.loadPixelizer","flixel/text/pxText/PxBitmapFont.hx",75,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxLetters,"PxLetters")
	HX_STACK_LINE(76)
	this->reset();
	HX_STACK_LINE(78)
	this->_glyphString = PxLetters;
	HX_STACK_LINE(88)
	bool tmp = (PxBitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		this->_tileRects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData tmp1 = PxBitmapData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData tmp2 = this->preparePixelizerBitmapData(tmp1,this->_tileRects);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData result = tmp2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::String tmp4 = tmp3->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		::String key = tmp4;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(93)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp5 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::openfl::_legacy::display::BitmapData tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		::flixel::util::loaders::CachedGraphics tmp8 = tmp5->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp6,(int)0,(int)0,(int)1,(int)1,false,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		this->setCachedGraphics(tmp8);
		HX_STACK_LINE(94)
		::flixel::_system::layer::Region tmp9 = ::flixel::_system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		this->_region = tmp9;
		HX_STACK_LINE(95)
		::flixel::util::loaders::CachedGraphics tmp10 = this->cachedGraphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		int tmp11 = tmp10->bitmap->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		::flixel::_system::layer::Region tmp12 = this->_region;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		tmp12->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp11;
		HX_STACK_LINE(96)
		::flixel::util::loaders::CachedGraphics tmp13 = this->cachedGraphics;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		int tmp14 = tmp13->bitmap->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(96)
		::flixel::_system::layer::Region tmp15 = this->_region;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(96)
		tmp15->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp14;
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
		HX_STACK_LINE(102)
		::flixel::util::loaders::CachedGraphics tmp16 = this->cachedGraphics;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(102)
		::flixel::_system::layer::TileSheetData tmp17 = tmp16->get_tilesheet();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(102)
		this->updateGlyphData(tmp17);
	}
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadPixelizer,return )

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadAngelCode( ::openfl::_legacy::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","loadAngelCode",0x3b23f08a,"flixel.text.pxText.PxBitmapFont.loadAngelCode","flixel/text/pxText/PxBitmapFont.hx",117,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pBitmapData,"pBitmapData")
	HX_STACK_ARG(pXMLData,"pXMLData")
	HX_STACK_LINE(118)
	this->reset();
	HX_STACK_LINE(120)
	bool tmp = (pBitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(120)
		tmp1 = (pXMLData != null());
	}
	else{
		HX_STACK_LINE(120)
		tmp1 = false;
	}
	HX_STACK_LINE(120)
	if ((tmp1)){
		HX_STACK_LINE(122)
		this->_symbols = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(123)
		::openfl::_legacy::display::BitmapData tmp2 = pBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		::Xml tmp3 = pXMLData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		::openfl::_legacy::display::BitmapData tmp4 = this->prepareAngelCodeBitmapData(tmp2,tmp3,this->_symbols);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::openfl::_legacy::display::BitmapData result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(124)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp5 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		::String key = tmp6;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(125)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp7 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		::openfl::_legacy::display::BitmapData tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		::flixel::util::loaders::CachedGraphics tmp10 = tmp7->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp8,(int)0,(int)0,(int)1,(int)1,false,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		this->setCachedGraphics(tmp10);
		HX_STACK_LINE(130)
		::flixel::util::loaders::CachedGraphics tmp11 = this->cachedGraphics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		::flixel::_system::layer::TileSheetData tmp12 = tmp11->get_tilesheet();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		this->updateGlyphData(tmp12);
	}
	HX_STACK_LINE(134)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadAngelCode,return )

Void PxBitmapFont_obj::updateGlyphData( ::flixel::_system::layer::TileSheetData Tiles){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","updateGlyphData",0x6585ab2f,"flixel.text.pxText.PxBitmapFont.updateGlyphData","flixel/text/pxText/PxBitmapFont.hx",141,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Tiles,"Tiles")
		HX_STACK_LINE(143)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			tmp = tmp2;
		}
		HX_STACK_LINE(143)
		this->_glyphs = tmp;
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(148)
		bool tmp1 = (this->_symbols != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			this->_glyphString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(151)
			::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::openfl::_legacy::geom::Point point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(152)
			::openfl::_legacy::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(153)
			::String charString;		HX_STACK_VAR(charString,"charString");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				Array< ::Dynamic > _g1 = this->_symbols;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(155)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(155)
					if ((tmp4)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(155)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol tmp5 = _g1->__get(_g).StaticCast< ::flixel::text::pxText::_PxBitmapFont::HelperSymbol >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(155)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol = tmp5;		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(155)
					++(_g);
					HX_STACK_LINE(157)
					::openfl::_legacy::geom::Rectangle tmp6 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(157)
					rect = tmp6;
					HX_STACK_LINE(158)
					rect->x = symbol->x;
					HX_STACK_LINE(159)
					rect->y = symbol->y;
					HX_STACK_LINE(160)
					rect->width = symbol->width;
					HX_STACK_LINE(161)
					rect->height = symbol->height;
					HX_STACK_LINE(163)
					point->x = symbol->xoffset;
					HX_STACK_LINE(164)
					point->y = symbol->yoffset;
					HX_STACK_LINE(166)
					int tmp7 = symbol->charCode;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(166)
					::String tmp8 = ::String::fromCharCode(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(166)
					charString = tmp8;
					HX_STACK_LINE(167)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(169)
					int xadvance = symbol->xadvance;		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(170)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(172)
					bool tmp9 = (rect->width > xadvance);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(172)
					if ((tmp9)){
						HX_STACK_LINE(174)
						charWidth = symbol->width;
						HX_STACK_LINE(175)
						point->x = (int)0;
					}
					HX_STACK_LINE(197)
					bool tmp10 = (charString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(197)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(197)
					if ((tmp10)){
						HX_STACK_LINE(197)
						tmp11 = (charString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(197)
						tmp11 = false;
					}
					HX_STACK_LINE(197)
					if ((tmp11)){
						HX_STACK_LINE(199)
						::flixel::_system::layer::TileSheetData tmp12 = Tiles;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						int tmp13 = symbol->charCode;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						::openfl::_legacy::geom::Rectangle tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						Float tmp15 = point->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						Float tmp17 = point->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(199)
						int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(199)
						int tmp19 = charWidth;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(199)
						this->setGlyph(tmp12,tmp13,tmp14,tmp16,tmp18,tmp19);
					}
					else{
						HX_STACK_LINE(203)
						::flixel::_system::layer::TileSheetData tmp12 = Tiles;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(203)
						int tmp13 = symbol->charCode;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(203)
						::openfl::_legacy::geom::Rectangle tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(203)
						Float tmp15 = point->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(203)
						int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(203)
						int tmp17 = charWidth;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(203)
						this->setGlyph(tmp12,tmp13,tmp14,tmp16,(int)1,tmp17);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(208)
			bool tmp2 = (this->_tileRects != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			if ((tmp2)){
				HX_STACK_LINE(210)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(210)
				int tmp3 = this->_tileRects->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(210)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(210)
				while((true)){
					HX_STACK_LINE(210)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(210)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(210)
					if ((tmp5)){
						HX_STACK_LINE(210)
						break;
					}
					HX_STACK_LINE(210)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(210)
					int letterID = tmp6;		HX_STACK_VAR(letterID,"letterID");
					HX_STACK_LINE(212)
					::openfl::_legacy::geom::Rectangle tmp7 = this->_tileRects->__get(letterID).StaticCast< ::openfl::_legacy::geom::Rectangle >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(212)
					rect = tmp7;
					HX_STACK_LINE(222)
					::flixel::_system::layer::TileSheetData tmp8 = Tiles;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(222)
					::String tmp9 = this->_glyphString;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					int tmp10 = letterID;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(222)
					Dynamic tmp11 = tmp9.charCodeAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					::openfl::_legacy::geom::Rectangle tmp12 = rect;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					Float tmp13 = rect->width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(222)
					this->setGlyph(tmp8,tmp11,tmp12,(int)0,(int)0,tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateGlyphData,(void))

Void PxBitmapFont_obj::reset( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","reset",0xff7d07d1,"flixel.text.pxText.PxBitmapFont.reset","flixel/text/pxText/PxBitmapFont.hx",232,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(233)
		this->dispose();
		HX_STACK_LINE(234)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(239)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			tmp = tmp2;
		}
		HX_STACK_LINE(239)
		this->_glyphs = tmp;
		HX_STACK_LINE(240)
		this->_bgTileID = (int)-1;
		HX_STACK_LINE(243)
		this->_symbols = null();
		HX_STACK_LINE(244)
		this->_tileRects = null();
		HX_STACK_LINE(245)
		this->_glyphString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,reset,(void))

::openfl::_legacy::display::BitmapData PxBitmapFont_obj::preparePixelizerBitmapData( ::openfl::_legacy::display::BitmapData PxBitmapData,Array< ::Dynamic > PxRects){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","preparePixelizerBitmapData",0xa38b1074,"flixel.text.pxText.PxBitmapFont.preparePixelizerBitmapData","flixel/text/pxText/PxBitmapFont.hx",249,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxRects,"PxRects")
	HX_STACK_LINE(250)
	int tmp = PxBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	int bgColor = tmp;		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(251)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(252)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(254)
	while((true)){
		HX_STACK_LINE(254)
		int tmp1 = cy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		int tmp2 = PxBitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		if ((tmp4)){
			HX_STACK_LINE(254)
			break;
		}
		HX_STACK_LINE(256)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(257)
		cx = (int)0;
		HX_STACK_LINE(259)
		while((true)){
			HX_STACK_LINE(259)
			int tmp5 = cx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			int tmp6 = PxBitmapData->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(259)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(259)
			if ((tmp8)){
				HX_STACK_LINE(259)
				break;
			}
			HX_STACK_LINE(261)
			int tmp9 = cx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			int tmp10 = cy;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			int tmp11 = PxBitmapData->getPixel(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			int tmp13 = bgColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			if ((tmp14)){
				HX_STACK_LINE(264)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(265)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(268)
				while((true)){
					HX_STACK_LINE(268)
					int tmp15 = gx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(268)
					int tmp16 = cy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(268)
					int tmp17 = PxBitmapData->getPixel(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(268)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(268)
					int tmp19 = bgColor;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(268)
					bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(268)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(268)
					if ((tmp21)){
						HX_STACK_LINE(268)
						break;
					}
					HX_STACK_LINE(270)
					(gx)++;
				}
				HX_STACK_LINE(273)
				while((true)){
					HX_STACK_LINE(273)
					int tmp15 = cx;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(273)
					int tmp16 = gy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(273)
					int tmp17 = PxBitmapData->getPixel(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(273)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(273)
					int tmp19 = bgColor;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(273)
					bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(273)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(273)
					if ((tmp21)){
						HX_STACK_LINE(273)
						break;
					}
					HX_STACK_LINE(275)
					(gy)++;
				}
				HX_STACK_LINE(278)
				int tmp15 = (gx - cx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(278)
				int gw = tmp15;		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(279)
				int tmp16 = (gy - cy);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(279)
				int gh = tmp16;		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(281)
				::openfl::_legacy::geom::Rectangle tmp17 = ::openfl::_legacy::geom::Rectangle_obj::__new(cx,cy,gw,gh);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(281)
				PxRects->push(tmp17);
				HX_STACK_LINE(284)
				bool tmp18 = (gh > rowHeight);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(284)
				if ((tmp18)){
					HX_STACK_LINE(286)
					rowHeight = gh;
				}
				HX_STACK_LINE(289)
				int tmp19 = gh;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(289)
				int tmp20 = this->_maxHeight;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(289)
				bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(289)
				if ((tmp21)){
					HX_STACK_LINE(291)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(295)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(298)
			(cx)++;
		}
		HX_STACK_LINE(301)
		int tmp5 = (rowHeight + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		hx::AddEq(cy,tmp5);
	}
	HX_STACK_LINE(305)
	PxBitmapData->floodFill((int)0,(int)0,(int)0);
	HX_STACK_LINE(307)
	::openfl::_legacy::display::BitmapData tmp1 = PxBitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,preparePixelizerBitmapData,return )

::openfl::_legacy::display::BitmapData PxBitmapFont_obj::prepareAngelCodeBitmapData( ::openfl::_legacy::display::BitmapData PxBitmapData,::Xml PxXMLData,Array< ::Dynamic > PxSymbols){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","prepareAngelCodeBitmapData",0x4f7ef45e,"flixel.text.pxText.PxBitmapFont.prepareAngelCodeBitmapData","flixel/text/pxText/PxBitmapFont.hx",311,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxBitmapData,"PxBitmapData")
	HX_STACK_ARG(PxXMLData,"PxXMLData")
	HX_STACK_ARG(PxSymbols,"PxSymbols")
	HX_STACK_LINE(312)
	::Xml chars = null();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(314)
	Dynamic tmp = PxXMLData->elements();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp);  __it->hasNext(); ){
		::Xml node = __it->next();
		{
			HX_STACK_LINE(316)
			::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				int tmp2 = node->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(316)
				int tmp3 = ::Xml_obj::Element;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(316)
				bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(316)
				if ((tmp4)){
					HX_STACK_LINE(316)
					::String tmp5 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(316)
					HX_STACK_DO_THROW(tmp5);
				}
				HX_STACK_LINE(316)
				tmp1 = node->nodeName;
			}
			HX_STACK_LINE(316)
			bool tmp2 = (tmp1 == HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			if ((tmp2)){
				HX_STACK_LINE(318)
				Dynamic tmp3 = node->elements();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp3);  __it->hasNext(); ){
					::Xml nodeChild = __it->next();
					{
						HX_STACK_LINE(320)
						::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							int tmp5 = nodeChild->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(320)
							int tmp6 = ::Xml_obj::Element;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(320)
							bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(320)
							if ((tmp7)){
								HX_STACK_LINE(320)
								::String tmp8 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + nodeChild->nodeType);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(320)
								HX_STACK_DO_THROW(tmp8);
							}
							HX_STACK_LINE(320)
							tmp4 = nodeChild->nodeName;
						}
						HX_STACK_LINE(320)
						bool tmp5 = (tmp4 == HX_HCSTRING("chars","\xdd","\x9c","\xb3","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(320)
						if ((tmp5)){
							HX_STACK_LINE(322)
							chars = nodeChild;
							HX_STACK_LINE(323)
							break;
						}
					}
;
				}
			}
		}
;
	}
	HX_STACK_LINE(329)
	::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol;		HX_STACK_VAR(symbol,"symbol");
	HX_STACK_LINE(330)
	int maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(331)
	int maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(333)
	bool tmp1 = (chars != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	if ((tmp1)){
		HX_STACK_LINE(335)
		Dynamic tmp2 = chars->elements();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp2);  __it->hasNext(); ){
			::Xml node = __it->next();
			{
				HX_STACK_LINE(337)
				::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int tmp4 = node->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(337)
					int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(337)
					bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(337)
					if ((tmp6)){
						HX_STACK_LINE(337)
						::String tmp7 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(337)
						HX_STACK_DO_THROW(tmp7);
					}
					HX_STACK_LINE(337)
					tmp3 = node->nodeName;
				}
				HX_STACK_LINE(337)
				bool tmp4 = (tmp3 == HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(337)
				if ((tmp4)){
					HX_STACK_LINE(339)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol tmp5 = ::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(339)
					symbol = tmp5;
					HX_STACK_LINE(340)
					::String tmp6 = node->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(340)
					Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(340)
					symbol->x = tmp7;
					HX_STACK_LINE(341)
					::String tmp8 = node->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(341)
					Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(341)
					symbol->y = tmp9;
					HX_STACK_LINE(342)
					::String tmp10 = node->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(342)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(342)
					symbol->width = tmp11;
					HX_STACK_LINE(343)
					::String tmp12 = node->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(343)
					Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(343)
					symbol->height = tmp13;
					HX_STACK_LINE(344)
					::String tmp14 = node->get(HX_HCSTRING("xoffset","\x0b","\x42","\x4f","\xde"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(344)
					Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(344)
					symbol->xoffset = tmp15;
					HX_STACK_LINE(345)
					::String tmp16 = node->get(HX_HCSTRING("yoffset","\xcc","\xb8","\xe4","\x07"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(345)
					Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(345)
					symbol->yoffset = tmp17;
					HX_STACK_LINE(346)
					::String tmp18 = node->get(HX_HCSTRING("xadvance","\x0a","\x87","\xb1","\xbe"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(346)
					Dynamic tmp19 = ::Std_obj::parseInt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(346)
					symbol->xadvance = tmp19;
					HX_STACK_LINE(347)
					::String tmp20 = node->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(347)
					Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(347)
					symbol->charCode = tmp21;
					HX_STACK_LINE(349)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol tmp22 = symbol;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(349)
					PxSymbols->push(tmp22);
					HX_STACK_LINE(351)
					int tmp23 = (symbol->x + symbol->width);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(351)
					maxX = tmp23;
					HX_STACK_LINE(352)
					int tmp24 = (symbol->y + symbol->height);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(352)
					maxY = tmp24;
				}
			}
;
		}
	}
	HX_STACK_LINE(357)
	::openfl::_legacy::display::BitmapData tmp2 = PxBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(357)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,prepareAngelCodeBitmapData,return )

Void PxBitmapFont_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","dispose",0xf92e4321,"flixel.text.pxText.PxBitmapFont.dispose","flixel/text/pxText/PxBitmapFont.hx",421,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(435)
		this->_symbols = null();
		HX_STACK_LINE(436)
		this->_tileRects = null();
		HX_STACK_LINE(437)
		this->setCachedGraphics(null());
		HX_STACK_LINE(438)
		this->_region = null();
		HX_STACK_LINE(439)
		this->_glyphs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,dispose,(void))

Void PxBitmapFont_obj::setGlyph( ::flixel::_system::layer::TileSheetData Tiles,int PxCharID,::openfl::_legacy::geom::Rectangle PxRect,hx::Null< int >  __o_PxOffsetX,hx::Null< int >  __o_PxOffsetY,hx::Null< int >  __o_PxAdvanceX){
int PxOffsetX = __o_PxOffsetX.Default(0);
int PxOffsetY = __o_PxOffsetY.Default(0);
int PxAdvanceX = __o_PxAdvanceX.Default(0);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","setGlyph",0x8be1d5e8,"flixel.text.pxText.PxBitmapFont.setGlyph","flixel/text/pxText/PxBitmapFont.hx",490,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tiles,"Tiles")
	HX_STACK_ARG(PxCharID,"PxCharID")
	HX_STACK_ARG(PxRect,"PxRect")
	HX_STACK_ARG(PxOffsetX,"PxOffsetX")
	HX_STACK_ARG(PxOffsetY,"PxOffsetY")
	HX_STACK_ARG(PxAdvanceX,"PxAdvanceX")
{
		HX_STACK_LINE(491)
		::openfl::_legacy::geom::Rectangle tmp = PxRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		::openfl::_legacy::geom::Point tmp1 = ::flixel::text::pxText::PxBitmapFont_obj::ZERO_POINT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		int tmp2 = Tiles->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		int tileID = tmp2;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(492)
		::flixel::text::pxText::PxFontSymbol tmp3 = ::flixel::text::pxText::PxFontSymbol_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		::flixel::text::pxText::PxFontSymbol symbol = tmp3;		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(493)
		symbol->tileID = tileID;
		HX_STACK_LINE(494)
		symbol->xoffset = PxOffsetX;
		HX_STACK_LINE(495)
		symbol->yoffset = PxOffsetY;
		HX_STACK_LINE(496)
		symbol->xadvance = PxAdvanceX;
		HX_STACK_LINE(498)
		::haxe::ds::IntMap tmp4 = this->_glyphs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		int tmp5 = PxCharID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		::flixel::text::pxText::PxFontSymbol tmp6 = symbol;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		tmp4->set(tmp5,tmp6);
		HX_STACK_LINE(499)
		(this->_num_letters)++;
		HX_STACK_LINE(501)
		Float tmp7 = PxRect->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		int tmp9 = PxOffsetY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(501)
		int tmp11 = this->_maxHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(501)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(501)
		if ((tmp12)){
			HX_STACK_LINE(503)
			Float tmp13 = PxRect->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(503)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(503)
			int tmp15 = PxOffsetY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(503)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(503)
			this->_maxHeight = tmp16;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PxBitmapFont_obj,setGlyph,(void))

Void PxBitmapFont_obj::render( Array< Float > DrawData,::String PxText,int PxColor,int PxSecondColor,Float PxAlpha,Float PxOffsetX,Float PxOffsetY,int PxLetterSpacing,Float PxScale,hx::Null< bool >  __o_PxUseColor){
bool PxUseColor = __o_PxUseColor.Default(true);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","render",0x8a9aef14,"flixel.text.pxText.PxBitmapFont.render","flixel/text/pxText/PxBitmapFont.hx",522,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DrawData,"DrawData")
	HX_STACK_ARG(PxText,"PxText")
	HX_STACK_ARG(PxColor,"PxColor")
	HX_STACK_ARG(PxSecondColor,"PxSecondColor")
	HX_STACK_ARG(PxAlpha,"PxAlpha")
	HX_STACK_ARG(PxOffsetX,"PxOffsetX")
	HX_STACK_ARG(PxOffsetY,"PxOffsetY")
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing")
	HX_STACK_ARG(PxScale,"PxScale")
	HX_STACK_ARG(PxUseColor,"PxUseColor")
{
		HX_STACK_LINE(524)
		Float tmp = ((Float)0.00392156862745098);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(524)
		Float colorMultiplier = tmp;		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
		HX_STACK_LINE(525)
		Float red = colorMultiplier;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(526)
		Float green = colorMultiplier;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(527)
		Float blue = colorMultiplier;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(529)
		bool tmp1 = PxUseColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		if ((tmp1)){
			HX_STACK_LINE(531)
			int tmp2 = (int(PxColor) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(531)
			Float tmp3 = colorMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(531)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(531)
			red = tmp4;
			HX_STACK_LINE(532)
			int tmp5 = (int(PxColor) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(532)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(532)
			Float tmp7 = colorMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(532)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(532)
			green = tmp8;
			HX_STACK_LINE(533)
			int tmp9 = (int(PxColor) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			Float tmp10 = colorMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			blue = tmp11;
		}
		HX_STACK_LINE(536)
		hx::AndEq(PxSecondColor,(int)16777215);
		HX_STACK_LINE(537)
		int tmp2 = (int(PxSecondColor) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		hx::MultEq(red,tmp2);
		HX_STACK_LINE(538)
		int tmp3 = (int(PxSecondColor) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		hx::MultEq(green,tmp4);
		HX_STACK_LINE(539)
		int tmp5 = (int(PxSecondColor) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		hx::MultEq(blue,tmp5);
		HX_STACK_LINE(542)
		::openfl::_legacy::geom::Point tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(542)
		tmp6->x = PxOffsetX;
		HX_STACK_LINE(543)
		::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(543)
		tmp7->y = PxOffsetY;
		HX_STACK_LINE(548)
		::flixel::text::pxText::PxFontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(549)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(552)
			int _g = PxText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(552)
			while((true)){
				HX_STACK_LINE(552)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(552)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(552)
				if ((tmp9)){
					HX_STACK_LINE(552)
					break;
				}
				HX_STACK_LINE(552)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(552)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(554)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(554)
				Dynamic tmp12 = PxText.charCodeAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(554)
				int charCode = tmp12;		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(560)
				::haxe::ds::IntMap tmp13 = this->_glyphs;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(560)
				int tmp14 = charCode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(560)
				::flixel::text::pxText::PxFontSymbol tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(560)
				glyph = tmp15;
				HX_STACK_LINE(561)
				::haxe::ds::IntMap tmp16 = this->_glyphs;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(561)
				int tmp17 = charCode;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(561)
				bool tmp18 = tmp16->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(561)
				if ((tmp18)){
					HX_STACK_LINE(568)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(571)
					int tmp19 = glyph->tileID;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(571)
					DrawData->push(tmp19);
					HX_STACK_LINE(573)
					::openfl::_legacy::geom::Point tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(573)
					Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(573)
					Float tmp22 = (glyph->xoffset * PxScale);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(573)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(573)
					DrawData->push(tmp23);
					HX_STACK_LINE(575)
					::openfl::_legacy::geom::Point tmp24 = this->_point;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(575)
					Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(575)
					Float tmp26 = (glyph->yoffset * PxScale);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(575)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(575)
					DrawData->push(tmp27);
					HX_STACK_LINE(576)
					Float tmp28 = red;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(576)
					DrawData->push(tmp28);
					HX_STACK_LINE(577)
					Float tmp29 = green;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(577)
					DrawData->push(tmp29);
					HX_STACK_LINE(578)
					Float tmp30 = blue;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(578)
					DrawData->push(tmp30);
					HX_STACK_LINE(580)
					Float tmp31 = (glyphWidth * PxScale);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(580)
					int tmp32 = PxLetterSpacing;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(580)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(580)
					::openfl::_legacy::geom::Point tmp34 = this->_point;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(580)
					hx::AddEq(tmp34->x,tmp33);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(PxBitmapFont_obj,render,(void))

int PxBitmapFont_obj::getTextWidth( ::String PxText,hx::Null< int >  __o_PxLetterSpacing,hx::Null< Float >  __o_PxFontScale){
int PxLetterSpacing = __o_PxLetterSpacing.Default(0);
Float PxFontScale = __o_PxFontScale.Default(1);
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","getTextWidth",0x7b8ac8e1,"flixel.text.pxText.PxBitmapFont.getTextWidth","flixel/text/pxText/PxBitmapFont.hx",595,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(PxText,"PxText")
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing")
	HX_STACK_ARG(PxFontScale,"PxFontScale")
{
		HX_STACK_LINE(596)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(598)
		int textLength = PxText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(600)
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(600)
			while((true)){
				HX_STACK_LINE(600)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(600)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(600)
				if ((tmp1)){
					HX_STACK_LINE(600)
					break;
				}
				HX_STACK_LINE(600)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(600)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(602)
				int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(602)
				Dynamic tmp4 = PxText.charCodeAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(602)
				int charCode = tmp4;		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(613)
				::haxe::ds::IntMap tmp5 = this->_glyphs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(613)
				int tmp6 = charCode;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(613)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(613)
				if ((tmp7)){
					HX_STACK_LINE(616)
					::haxe::ds::IntMap tmp8 = this->_glyphs;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(616)
					int tmp9 = charCode;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(616)
					::flixel::text::pxText::PxFontSymbol tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(616)
					int tmp11 = tmp10->xadvance;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(616)
					hx::AddEq(w,tmp11);
				}
			}
		}
		HX_STACK_LINE(621)
		Float tmp = (w * PxFontScale);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		w = tmp1;
		HX_STACK_LINE(623)
		bool tmp2 = (textLength > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(623)
		if ((tmp2)){
			HX_STACK_LINE(625)
			int tmp3 = (textLength - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(625)
			int tmp4 = PxLetterSpacing;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(625)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(625)
			hx::AddEq(w,tmp5);
		}
		HX_STACK_LINE(628)
		int tmp3 = w;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(628)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,getTextWidth,return )

int PxBitmapFont_obj::getFontHeight( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","getFontHeight",0xd1978b4e,"flixel.text.pxText.PxBitmapFont.getFontHeight","flixel/text/pxText/PxBitmapFont.hx",637,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	int tmp = this->_maxHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(638)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,getFontHeight,return )

::openfl::_legacy::display::BitmapData PxBitmapFont_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_pixels",0xf34299b4,"flixel.text.pxText.PxBitmapFont.get_pixels","flixel/text/pxText/PxBitmapFont.hx",652,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(653)
	::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	bool tmp1 = tmp->isDumped;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(653)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(653)
	if ((tmp2)){
		HX_STACK_LINE(655)
		::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(655)
		::openfl::_legacy::display::BitmapData tmp4 = tmp3->bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(655)
		return tmp4;
	}
	HX_STACK_LINE(657)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_pixels,return )

int PxBitmapFont_obj::get_bgTileID( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_bgTileID",0xb12d3875,"flixel.text.pxText.PxBitmapFont.get_bgTileID","flixel/text/pxText/PxBitmapFont.hx",663,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(664)
	int tmp = this->_bgTileID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_bgTileID,return )

int PxBitmapFont_obj::get_numLetters( ){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","get_numLetters",0xa0fcd52e,"flixel.text.pxText.PxBitmapFont.get_numLetters","flixel/text/pxText/PxBitmapFont.hx",669,0xb7b5754d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(673)
	int tmp = this->_num_letters;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_numLetters,return )

Void PxBitmapFont_obj::setCachedGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","setCachedGraphics",0x035e0711,"flixel.text.pxText.PxBitmapFont.setCachedGraphics","flixel/text/pxText/PxBitmapFont.hx",678,0xb7b5754d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(679)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(679)
		if ((tmp1)){
			HX_STACK_LINE(679)
			::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(679)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(679)
			::flixel::util::loaders::CachedGraphics tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(679)
			tmp2 = (tmp4 != tmp5);
		}
		else{
			HX_STACK_LINE(679)
			tmp2 = false;
		}
		HX_STACK_LINE(679)
		if ((tmp2)){
			HX_STACK_LINE(681)
			::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(681)
			::flixel::util::loaders::CachedGraphics _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(681)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(681)
			int tmp4 = (_g1 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(681)
			_g->set_useCount(tmp4);
			HX_STACK_LINE(681)
			_g1;
		}
		HX_STACK_LINE(684)
		::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		::flixel::util::loaders::CachedGraphics tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(684)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(684)
		if ((tmp5)){
			HX_STACK_LINE(684)
			tmp6 = (value != null());
		}
		else{
			HX_STACK_LINE(684)
			tmp6 = false;
		}
		HX_STACK_LINE(684)
		if ((tmp6)){
			HX_STACK_LINE(686)
			::flixel::util::loaders::CachedGraphics _g = value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(686)
			int tmp7 = (_g1 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(686)
			_g->set_useCount(tmp7);
			HX_STACK_LINE(686)
			_g1;
		}
		HX_STACK_LINE(693)
		this->cachedGraphics = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,setCachedGraphics,(void))

::haxe::ds::StringMap PxBitmapFont_obj::_storedFonts;

::openfl::_legacy::geom::Point PxBitmapFont_obj::ZERO_POINT;

Void PxBitmapFont_obj::store( ::String PxHandle,::flixel::text::pxText::PxBitmapFont PxFont){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","store",0x9ccad1e3,"flixel.text.pxText.PxBitmapFont.store","flixel/text/pxText/PxBitmapFont.hx",703,0xb7b5754d)
		HX_STACK_ARG(PxHandle,"PxHandle")
		HX_STACK_ARG(PxFont,"PxFont")
		HX_STACK_LINE(704)
		::haxe::ds::StringMap tmp = ::flixel::text::pxText::PxBitmapFont_obj::_storedFonts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		::String tmp1 = PxHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		::flixel::text::pxText::PxBitmapFont tmp2 = PxFont;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		tmp->set(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,store,(void))

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::fetch( ::String PxHandle){
	HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","fetch",0x16aed23c,"flixel.text.pxText.PxBitmapFont.fetch","flixel/text/pxText/PxBitmapFont.hx",714,0xb7b5754d)
	HX_STACK_ARG(PxHandle,"PxHandle")
	HX_STACK_LINE(715)
	::haxe::ds::StringMap tmp = ::flixel::text::pxText::PxBitmapFont_obj::_storedFonts;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	::String tmp1 = PxHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	::flixel::text::pxText::PxBitmapFont tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(715)
	::flixel::text::pxText::PxBitmapFont f = tmp2;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(717)
	::flixel::text::pxText::PxBitmapFont tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(717)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,fetch,return )

Void PxBitmapFont_obj::clearStorage( ){
{
		HX_STACK_FRAME("flixel.text.pxText.PxBitmapFont","clearStorage",0x290b776c,"flixel.text.pxText.PxBitmapFont.clearStorage","flixel/text/pxText/PxBitmapFont.hx",721,0xb7b5754d)
		HX_STACK_LINE(722)
		::haxe::ds::StringMap tmp = ::flixel::text::pxText::PxBitmapFont_obj::_storedFonts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(722)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(722)
		for(::cpp::FastIterator_obj< ::flixel::text::pxText::PxBitmapFont > *__it = ::cpp::CreateFastIterator< ::flixel::text::pxText::PxBitmapFont >(tmp1);  __it->hasNext(); ){
			::flixel::text::pxText::PxBitmapFont font = __it->next();
			font->dispose();
		}
		HX_STACK_LINE(727)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(727)
		{
			HX_STACK_LINE(727)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(727)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(727)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(727)
		::flixel::text::pxText::PxBitmapFont_obj::_storedFonts = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,clearStorage,(void))


PxBitmapFont_obj::PxBitmapFont_obj()
{
}

void PxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxBitmapFont);
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_tileRects,"_tileRects");
	HX_MARK_MEMBER_NAME(_symbols,"_symbols");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(bgTileID,"bgTileID");
	HX_MARK_END_CLASS();
}

void PxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_tileRects,"_tileRects");
	HX_VISIT_MEMBER_NAME(_symbols,"_symbols");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(bgTileID,"bgTileID");
}

Dynamic PxBitmapFont_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp == hx::paccAlways ? get_pixels() : pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { return _symbols; }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"bgTileID") ) { return inCallProp == hx::paccAlways ? get_bgTileID() : bgTileID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { return _bgTileID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { return _tileRects; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { if (inCallProp == hx::paccAlways) return get_numLetters(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgTileID") ) { return get_bgTileID_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGlyphData") ) { return updateGlyphData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setCachedGraphics") ) { return setCachedGraphics_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"preparePixelizerBitmapData") ) { return preparePixelizerBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareAngelCodeBitmapData") ) { return prepareAngelCodeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PxBitmapFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { outValue = store_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fetch") ) { outValue = fetch_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { outValue = ZERO_POINT; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { outValue = _storedFonts; return true;  }
		if (HX_FIELD_EQ(inName,"clearStorage") ) { outValue = clearStorage_dyn(); return true;  }
	}
	return false;
}

Dynamic PxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::flixel::_system::layer::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { _symbols=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgTileID") ) { bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { _bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { _tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PxBitmapFont_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void PxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_glyphs","\xe6","\x0a","\xd0","\x1c"));
	outFields->push(HX_HCSTRING("_num_letters","\x95","\x38","\xb5","\xb6"));
	outFields->push(HX_HCSTRING("_bgTileID","\x8d","\x95","\xc5","\x3a"));
	outFields->push(HX_HCSTRING("_glyphString","\x9e","\xd1","\x9a","\x43"));
	outFields->push(HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_tileRects","\x82","\x0c","\xba","\xcd"));
	outFields->push(HX_HCSTRING("_symbols","\x9c","\x17","\xd4","\x4c"));
	outFields->push(HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f"));
	outFields->push(HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"));
	outFields->push(HX_HCSTRING("numLetters","\x27","\xdb","\xae","\x34"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("bgTileID","\x2e","\x9e","\x2f","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(PxBitmapFont_obj,_glyphs),HX_HCSTRING("_glyphs","\xe6","\x0a","\xd0","\x1c")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_num_letters),HX_HCSTRING("_num_letters","\x95","\x38","\xb5","\xb6")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_bgTileID),HX_HCSTRING("_bgTileID","\x8d","\x95","\xc5","\x3a")},
	{hx::fsString,(int)offsetof(PxBitmapFont_obj,_glyphString),HX_HCSTRING("_glyphString","\x9e","\xd1","\x9a","\x43")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,_maxHeight),HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(PxBitmapFont_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PxBitmapFont_obj,_tileRects),HX_HCSTRING("_tileRects","\x82","\x0c","\xba","\xcd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PxBitmapFont_obj,_symbols),HX_HCSTRING("_symbols","\x9c","\x17","\xd4","\x4c")},
	{hx::fsObject /*::flixel::_system::layer::Region*/ ,(int)offsetof(PxBitmapFont_obj,_region),HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(PxBitmapFont_obj,cachedGraphics),HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(PxBitmapFont_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsInt,(int)offsetof(PxBitmapFont_obj,bgTileID),HX_HCSTRING("bgTileID","\x2e","\x9e","\x2f","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &PxBitmapFont_obj::_storedFonts,HX_HCSTRING("_storedFonts","\x62","\x9d","\x3c","\x56")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &PxBitmapFont_obj::ZERO_POINT,HX_HCSTRING("ZERO_POINT","\x99","\xd8","\xec","\xdc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_glyphs","\xe6","\x0a","\xd0","\x1c"),
	HX_HCSTRING("_num_letters","\x95","\x38","\xb5","\xb6"),
	HX_HCSTRING("_bgTileID","\x8d","\x95","\xc5","\x3a"),
	HX_HCSTRING("_glyphString","\x9e","\xd1","\x9a","\x43"),
	HX_HCSTRING("_maxHeight","\x6c","\x95","\x79","\x8d"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_tileRects","\x82","\x0c","\xba","\xcd"),
	HX_HCSTRING("_symbols","\x9c","\x17","\xd4","\x4c"),
	HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f"),
	HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"),
	HX_HCSTRING("loadPixelizer","\x1e","\xa5","\xda","\x96"),
	HX_HCSTRING("loadAngelCode","\x88","\x60","\x9e","\x7c"),
	HX_HCSTRING("updateGlyphData","\xad","\x96","\x7a","\xce"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("preparePixelizerBitmapData","\xb6","\xf9","\xef","\xcc"),
	HX_HCSTRING("prepareAngelCodeBitmapData","\xa0","\xdd","\xe3","\x78"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("setGlyph","\xaa","\x66","\x39","\xa4"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("getTextWidth","\xa3","\xe2","\xa6","\x72"),
	HX_HCSTRING("getFontHeight","\x4c","\xfb","\x11","\x13"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("get_pixels","\xf6","\x5e","\x31","\x7d"),
	HX_HCSTRING("bgTileID","\x2e","\x9e","\x2f","\xf3"),
	HX_HCSTRING("get_bgTileID","\x37","\x52","\x49","\xa8"),
	HX_HCSTRING("get_numLetters","\x70","\x63","\xa4","\xaa"),
	HX_HCSTRING("setCachedGraphics","\x0f","\x4e","\x03","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

#endif

hx::Class PxBitmapFont_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_storedFonts","\x62","\x9d","\x3c","\x56"),
	HX_HCSTRING("ZERO_POINT","\x99","\xd8","\xec","\xdc"),
	HX_HCSTRING("store","\xe1","\x13","\x16","\x84"),
	HX_HCSTRING("fetch","\x3a","\x14","\xfa","\xfd"),
	HX_HCSTRING("clearStorage","\x2e","\x91","\x27","\x20"),
	::String(null()) };

void PxBitmapFont_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.pxText.PxBitmapFont","\xf0","\xd0","\x2e","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PxBitmapFont_obj::__GetStatic;
	__mClass->mSetStaticField = &PxBitmapFont_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PxBitmapFont_obj >;
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

void PxBitmapFont_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/text/pxText/PxBitmapFont.hx",21,0xb7b5754d)
		{
			HX_STACK_LINE(21)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(21)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			return tmp1;
		}
		return null();
	}
};
	_storedFonts= _Function_0_1::Block();
	ZERO_POINT= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
