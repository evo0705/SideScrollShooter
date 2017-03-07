#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledLayer_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","new",0x018fcf96,"flixel.addons.editors.tiled.TiledLayer.new","flixel/addons/editors/tiled/TiledLayer.hx",31,0x30daee78)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(32)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->properties = tmp;
	HX_STACK_LINE(33)
	this->map = Parent;
	HX_STACK_LINE(34)
	::String tmp1 = Source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	this->name = tmp1;
	HX_STACK_LINE(35)
	bool tmp2 = Source->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(35)
		::String tmp4 = Source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		tmp3 = ::Std_obj::parseInt(tmp4);
	}
	else{
		HX_STACK_LINE(35)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(35)
	this->x = tmp3;
	HX_STACK_LINE(36)
	bool tmp4 = Source->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	if ((tmp4)){
		HX_STACK_LINE(36)
		::String tmp6 = Source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		tmp5 = ::Std_obj::parseInt(tmp6);
	}
	else{
		HX_STACK_LINE(36)
		tmp5 = (int)0;
	}
	HX_STACK_LINE(36)
	this->y = tmp5;
	HX_STACK_LINE(37)
	::String tmp6 = Source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	this->width = tmp7;
	HX_STACK_LINE(38)
	::String tmp8 = Source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	this->height = tmp9;
	HX_STACK_LINE(39)
	bool tmp10 = Source->has->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	if ((tmp10)){
		HX_STACK_LINE(39)
		::String tmp12 = Source->att->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		tmp11 = (tmp13 == HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(39)
		tmp11 = false;
	}
	HX_STACK_LINE(39)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	if ((tmp11)){
		HX_STACK_LINE(39)
		tmp12 = false;
	}
	else{
		HX_STACK_LINE(39)
		tmp12 = true;
	}
	HX_STACK_LINE(39)
	this->visible = tmp12;
	HX_STACK_LINE(40)
	bool tmp13 = Source->has->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(40)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(40)
	if ((tmp13)){
		HX_STACK_LINE(40)
		::String tmp15 = Source->att->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(40)
		tmp14 = ::Std_obj::parseFloat(tmp15);
	}
	else{
		HX_STACK_LINE(40)
		tmp14 = ((Float)1.0);
	}
	HX_STACK_LINE(40)
	this->opacity = tmp14;
	HX_STACK_LINE(41)
	this->tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::_List::ListIterator tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::List tmp16 = Source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(46)
			::List _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(46)
			tmp15 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(46)
		::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(46)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(46)
			if ((tmp17)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(46)
				_g->val = tmp19;
				HX_STACK_LINE(46)
				Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				_g->head = tmp20;
				HX_STACK_LINE(46)
				tmp18 = _g->val;
			}
			HX_STACK_LINE(46)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp18));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(48)
			::flixel::addons::editors::tiled::TiledPropertySet tmp19 = this->properties;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(48)
			::haxe::xml::Fast tmp20 = node1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(48)
			tmp19->extend(tmp20);
		}
	}
	HX_STACK_LINE(52)
	::haxe::xml::Fast tmp15 = Source->node->resolve(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(52)
	this->_xmlData = tmp15;
	HX_STACK_LINE(54)
	::haxe::xml::Fast tmp16 = this->_xmlData;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(54)
	bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(54)
	if ((tmp17)){
		HX_STACK_LINE(56)
		HX_STACK_DO_THROW(HX_HCSTRING("Error loading TiledLayer level data","\x8f","\x52","\x0a","\xf4"));
	}
}
;
	return null();
}

//TiledLayer_obj::~TiledLayer_obj() { }

Dynamic TiledLayer_obj::__CreateEmpty() { return  new TiledLayer_obj; }
hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(Source,Parent);
	return _result_;}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLayer_obj > _result_ = new TiledLayer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::_legacy::utils::ByteArray TiledLayer_obj::getByteArrayData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","getByteArrayData",0xed9db0cf,"flixel.addons.editors.tiled.TiledLayer.getByteArrayData","flixel/addons/editors/tiled/TiledLayer.hx",61,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::openfl::_legacy::utils::ByteArray result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(64)
	::haxe::xml::Fast tmp = this->_xmlData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	::String tmp1 = tmp->att->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = (tmp1 == HX_HCSTRING("base64","\x8f","\xfd","\x27","\x55"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(66)
		::haxe::xml::Fast tmp3 = this->_xmlData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::String tmp4 = tmp3->get_innerData();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		::String chunk = tmp4;		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(67)
		bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
		HX_STACK_LINE(69)
		::String tmp5 = chunk;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		::openfl::_legacy::utils::ByteArray tmp6 = ::flixel::addons::editors::tiled::TiledLayer_obj::base64ToByteArray(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		result = tmp6;
		HX_STACK_LINE(70)
		result->set_endian(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
		HX_STACK_LINE(72)
		::haxe::xml::Fast tmp7 = this->_xmlData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		bool tmp8 = tmp7->has->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		if ((tmp8)){
			HX_STACK_LINE(74)
			::haxe::xml::Fast tmp9 = this->_xmlData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			::String tmp10 = tmp9->att->resolve(HX_HCSTRING("compression","\x66","\xb7","\x2b","\x77"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			::String _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			::String tmp11 = _g;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			::String _switch_1 = (tmp11);
			if (  ( _switch_1==HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"))){
				HX_STACK_LINE(77)
				compressed = true;
			}
			else  {
				HX_STACK_LINE(79)
				HX_STACK_DO_THROW(HX_HCSTRING("TiledLayer - data compression type not supported!","\xce","\x90","\x21","\xa6"));
			}
;
;
		}
		HX_STACK_LINE(83)
		bool tmp9 = compressed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		if ((tmp9)){
			HX_STACK_LINE(88)
			result->uncompress(null());
		}
	}
	HX_STACK_LINE(93)
	result->set_endian(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
	HX_STACK_LINE(94)
	::openfl::_legacy::utils::ByteArray tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,getByteArrayData,return )

int TiledLayer_obj::resolveTile( int GlobalTileID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","resolveTile",0x12f71570,"flixel.addons.editors.tiled.TiledLayer.resolveTile","flixel/addons/editors/tiled/TiledLayer.hx",150,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GlobalTileID,"GlobalTileID")
	HX_STACK_LINE(151)
	::flixel::addons::editors::tiled::TiledTile tmp = ::flixel::addons::editors::tiled::TiledTile_obj::__new(GlobalTileID);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::flixel::addons::editors::tiled::TiledTile tile = tmp;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(153)
	int tilesetID = tile->tilesetID;		HX_STACK_VAR(tilesetID,"tilesetID");
	HX_STACK_LINE(154)
	::flixel::addons::editors::tiled::TiledMap tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	Dynamic tmp2 = tmp1->tilesets->iterator();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp2);  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet tileset = __it->next();
		{
			HX_STACK_LINE(156)
			bool tmp3 = (tilesetID >= tileset->firstGID);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			if ((tmp3)){
				HX_STACK_LINE(156)
				int tmp5 = tilesetID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(156)
				int tmp6 = (tileset->firstGID + tileset->numTiles);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(156)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				tmp4 = (tmp5 < tmp7);
			}
			else{
				HX_STACK_LINE(156)
				tmp4 = false;
			}
			HX_STACK_LINE(156)
			if ((tmp4)){
				HX_STACK_LINE(158)
				::flixel::addons::editors::tiled::TiledTile tmp5 = tile;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				this->tiles->push(tmp5);
				HX_STACK_LINE(160)
				int tmp6 = tilesetID;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				return tmp6;
			}
		}
;
	}
	HX_STACK_LINE(163)
	this->tiles->push(null());
	HX_STACK_LINE(164)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveTile,return )

::String TiledLayer_obj::resolveCsvTiles( ::String csvData){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","resolveCsvTiles",0x907f0f21,"flixel.addons.editors.tiled.TiledLayer.resolveCsvTiles","flixel/addons/editors/tiled/TiledLayer.hx",174,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(csvData,"csvData")
	HX_STACK_LINE(175)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	::StringBuf buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(176)
	Array< ::String > rows = csvData.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(177)
	Array< ::String > values;		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		while((true)){
			HX_STACK_LINE(178)
			bool tmp1 = (_g < rows->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(178)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			if ((tmp2)){
				HX_STACK_LINE(178)
				break;
			}
			HX_STACK_LINE(178)
			::String tmp3 = rows->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			::String row = tmp3;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(178)
			++(_g);
			HX_STACK_LINE(179)
			values = row.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			HX_STACK_LINE(180)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(181)
				while((true)){
					HX_STACK_LINE(181)
					bool tmp4 = (_g1 < values->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(181)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(181)
					if ((tmp5)){
						HX_STACK_LINE(181)
						break;
					}
					HX_STACK_LINE(181)
					::String tmp6 = values->__get(_g1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(181)
					::String v = tmp6;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(181)
					++(_g1);
					HX_STACK_LINE(182)
					bool tmp7 = (v == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(182)
					if ((tmp7)){
						HX_STACK_LINE(183)
						continue;
					}
					HX_STACK_LINE(185)
					::String tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(185)
					Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(185)
					i = tmp9;
					HX_STACK_LINE(186)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(186)
					int tmp11 = this->resolveTile(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					::String tmp12 = (tmp11 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					buffer->add(tmp12);
				}
			}
			HX_STACK_LINE(188)
			buffer->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(191)
	::String tmp1 = buffer->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	::String result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(192)
	buffer = null();
	HX_STACK_LINE(193)
	::String tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveCsvTiles,return )

::String TiledLayer_obj::get_csvData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","get_csvData",0xdf15e65d,"flixel.addons.editors.tiled.TiledLayer.get_csvData","flixel/addons/editors/tiled/TiledLayer.hx",199,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::String tmp = this->csvData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	if ((tmp1)){
		HX_STACK_LINE(202)
		::haxe::xml::Fast tmp2 = this->_xmlData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::String tmp3 = tmp2->att->resolve(HX_HCSTRING("encoding","\xd3","\x8c","\x58","\x30"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		bool tmp4 = (tmp3 == HX_HCSTRING("csv","\xc6","\x83","\x4b","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		if ((tmp4)){
			HX_STACK_LINE(204)
			::haxe::xml::Fast tmp5 = this->_xmlData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::String tmp6 = tmp5->get_innerData();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			this->csvData = tmp6;
		}
		else{
			HX_STACK_LINE(208)
			HX_STACK_DO_THROW(HX_HCSTRING("Must use CSV encoding in order to get CSV data.","\x05","\x1a","\xfa","\xa5"));
		}
	}
	HX_STACK_LINE(211)
	::String tmp2 = this->csvData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_csvData,return )

Array< int > TiledLayer_obj::get_tileArray( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","get_tileArray",0x2709fe18,"flixel.addons.editors.tiled.TiledLayer.get_tileArray","flixel/addons/editors/tiled/TiledLayer.hx",217,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	bool tmp = (this->tileArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	if ((tmp)){
		HX_STACK_LINE(220)
		::openfl::_legacy::utils::ByteArray tmp1 = this->getByteArrayData();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		::openfl::_legacy::utils::ByteArray mapData = tmp1;		HX_STACK_VAR(mapData,"mapData");
		HX_STACK_LINE(222)
		bool tmp2 = (mapData == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		if ((tmp2)){
			HX_STACK_LINE(224)
			HX_STACK_DO_THROW(HX_HCSTRING("Must use Base64 encoding (with or without zlip compression) in order to get 1D Array.","\x13","\x2f","\x11","\xcb"));
		}
		HX_STACK_LINE(227)
		this->tileArray = Array_obj< int >::__new();
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			bool tmp3 = (mapData->position < mapData->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			if ((tmp4)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(231)
			int tmp5 = mapData->readUnsignedInt();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			int tmp6 = this->resolveTile(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			this->tileArray->push(tmp6);
		}
	}
	HX_STACK_LINE(235)
	return this->tileArray;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_tileArray,return )

::String TiledLayer_obj::BASE64_CHARS;

::openfl::_legacy::utils::ByteArray TiledLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","base64ToByteArray",0x12099cdd,"flixel.addons.editors.tiled.TiledLayer.base64ToByteArray","flixel/addons/editors/tiled/TiledLayer.hx",98,0x30daee78)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(99)
	::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::openfl::_legacy::utils::ByteArray output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(102)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(103)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		int tmp1 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			if ((tmp3)){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			int c1 = tmp4;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(107)
			int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			Dynamic tmp6 = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3").charCodeAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			int tmp7 = c1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			lookup[tmp6] = tmp7;
		}
	}
	HX_STACK_LINE(110)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(112)
	while((true)){
		HX_STACK_LINE(112)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		int tmp2 = (data.length - (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		if ((tmp4)){
			HX_STACK_LINE(112)
			break;
		}
		HX_STACK_LINE(115)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::String tmp6 = data.charAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		bool tmp7 = (tmp6 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(115)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(115)
		if ((tmp9)){
			HX_STACK_LINE(115)
			int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			::String tmp14 = data.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			tmp10 = (tmp16 == HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(115)
			tmp10 = true;
		}
		HX_STACK_LINE(115)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(115)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(115)
		if ((tmp11)){
			HX_STACK_LINE(115)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			::String tmp15 = data.charAt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			tmp12 = (tmp16 == HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(115)
			tmp12 = true;
		}
		HX_STACK_LINE(115)
		if ((tmp12)){
			HX_STACK_LINE(117)
			(i)++;
			HX_STACK_LINE(117)
			continue;
		}
		HX_STACK_LINE(121)
		int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(121)
		Dynamic tmp14 = data.charCodeAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(121)
		int tmp15 = lookup->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(121)
		int a0 = tmp15;		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(122)
		int tmp16 = (i + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(122)
		Dynamic tmp17 = data.charCodeAt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(122)
		int tmp18 = lookup->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(122)
		int a1 = tmp18;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(123)
		int tmp19 = (i + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(123)
		Dynamic tmp20 = data.charCodeAt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(123)
		int tmp21 = lookup->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(123)
		int a2 = tmp21;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(124)
		int tmp22 = (i + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(124)
		Dynamic tmp23 = data.charCodeAt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		int tmp24 = lookup->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		int a3 = tmp24;		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(127)
		bool tmp25 = (a1 < (int)64);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(127)
		if ((tmp25)){
			HX_STACK_LINE(129)
			int tmp26 = output->position;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(129)
			output->ensureElem(tmp26,true);
			HX_STACK_LINE(129)
			int tmp27 = (output->position)++;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(129)
			int tmp28 = (int(a0) << int((int)2));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(129)
			int tmp29 = (int(a1) & int((int)48));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(129)
			int tmp30 = (int(tmp29) >> int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(129)
			int tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(129)
			output->b[tmp27] = tmp31;
		}
		HX_STACK_LINE(131)
		bool tmp26 = (a2 < (int)64);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(131)
		if ((tmp26)){
			HX_STACK_LINE(133)
			int tmp27 = output->position;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(133)
			output->ensureElem(tmp27,true);
			HX_STACK_LINE(133)
			int tmp28 = (output->position)++;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			int tmp29 = (int(a1) & int((int)15));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(133)
			int tmp30 = (int(tmp29) << int((int)4));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(133)
			int tmp31 = (int(a2) & int((int)60));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(133)
			int tmp32 = (int(tmp31) >> int((int)2));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(133)
			int tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(133)
			output->b[tmp28] = tmp33;
		}
		HX_STACK_LINE(135)
		bool tmp27 = (a3 < (int)64);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(135)
		if ((tmp27)){
			HX_STACK_LINE(137)
			int tmp28 = output->position;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(137)
			output->ensureElem(tmp28,true);
			HX_STACK_LINE(137)
			int tmp29 = (output->position)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(137)
			int tmp30 = (int(a2) & int((int)3));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(137)
			int tmp31 = (int(tmp30) << int((int)6));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(137)
			int tmp32 = a3;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(137)
			int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(137)
			output->b[tmp29] = tmp33;
		}
		HX_STACK_LINE(140)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(144)
	output->position = (int)0;
	HX_STACK_LINE(146)
	::openfl::_legacy::utils::ByteArray tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,base64ToByteArray,return )


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(_xmlData,"_xmlData");
	HX_MARK_MEMBER_NAME(csvData,"csvData");
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(_xmlData,"_xmlData");
	HX_VISIT_MEMBER_NAME(csvData,"csvData");
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
}

Dynamic TiledLayer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"csvData") ) { return inCallProp == hx::paccAlways ? get_csvData() : csvData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { return _xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return inCallProp == hx::paccAlways ? get_tileArray() : tileArray; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return resolveTile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_csvData") ) { return get_csvData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileArray") ) { return get_tileArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveCsvTiles") ) { return resolveCsvTiles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getByteArrayData") ) { return getByteArrayData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TiledLayer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { outValue = base64ToByteArray_dyn(); return true;  }
	}
	return false;
}

Dynamic TiledLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"csvData") ) { csvData=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { _xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledLayer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("_xmlData","\x22","\x81","\x31","\xa9"));
	outFields->push(HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e"));
	outFields->push(HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledLayer_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledLayer_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLayer_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(TiledLayer_obj,_xmlData),HX_HCSTRING("_xmlData","\x22","\x81","\x31","\xa9")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,csvData),HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TiledLayer_obj,tileArray),HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TiledLayer_obj::BASE64_CHARS,HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("_xmlData","\x22","\x81","\x31","\xa9"),
	HX_HCSTRING("getByteArrayData","\xc5","\x79","\x1d","\xa1"),
	HX_HCSTRING("resolveTile","\x3a","\xf0","\x37","\xe8"),
	HX_HCSTRING("resolveCsvTiles","\xeb","\x16","\x26","\xaf"),
	HX_HCSTRING("csvData","\x10","\x61","\x5c","\x2e"),
	HX_HCSTRING("get_csvData","\x27","\xc1","\x56","\xb4"),
	HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"),
	HX_HCSTRING("get_tileArray","\x62","\x9f","\x4e","\x72"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

hx::Class TiledLayer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BASE64_CHARS","\xcd","\xf6","\x92","\x21"),
	HX_HCSTRING("base64ToByteArray","\x27","\xab","\x59","\x6e"),
	::String(null()) };

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledLayer","\xa4","\x0c","\xa7","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TiledLayer_obj::__GetStatic;
	__mClass->mSetStaticField = &TiledLayer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLayer_obj >;
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

void TiledLayer_obj::__boot()
{
	BASE64_CHARS= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=","\xda","\xa1","\xd5","\xa3");
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
