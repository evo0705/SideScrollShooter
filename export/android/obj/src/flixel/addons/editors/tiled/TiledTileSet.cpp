#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
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

Void TiledTileSet_obj::__construct(Dynamic data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","new",0xf865df19,"flixel.addons.editors.tiled.TiledTileSet.new","flixel/addons/editors/tiled/TiledTileSet.hx",32,0x504d33d5)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(33)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(33)
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(34)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(35)
	int tmp = this->numCols = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	this->numRows = tmp;
	HX_STACK_LINE(38)
	Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::haxe::xml::Fast >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(40)
		source = data;
	}
	else{
		HX_STACK_LINE(42)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::utils::ByteArray >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		if ((tmp4)){
			HX_STACK_LINE(44)
			Dynamic tmp5 = data->toString();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			::Xml tmp6 = ::Xml_obj::parse(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			::haxe::xml::Fast tmp7 = ::haxe::xml::Fast_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			source = tmp7;
			HX_STACK_LINE(45)
			::haxe::xml::Fast tmp8 = source->node->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			source = tmp8;
		}
		else{
			HX_STACK_LINE(49)
			HX_STACK_DO_THROW(HX_HCSTRING("Unknown TMX tileset format","\xda","\x21","\x2b","\x65"));
		}
	}
	HX_STACK_LINE(52)
	bool tmp3 = source->has->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	if ((tmp3)){
		HX_STACK_LINE(52)
		::String tmp5 = source->att->resolve(HX_HCSTRING("firstgid","\xd2","\x49","\x26","\xf1"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		tmp4 = ::Std_obj::parseInt(tmp5);
	}
	else{
		HX_STACK_LINE(52)
		tmp4 = (int)1;
	}
	HX_STACK_LINE(52)
	this->firstGID = tmp4;
	HX_STACK_LINE(55)
	bool tmp5 = source->has->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	if ((tmp5)){
	}
	else{
		HX_STACK_LINE(62)
		::haxe::xml::Fast tmp6 = source->node->resolve(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		::haxe::xml::Fast node1 = tmp6;		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(63)
		::String tmp7 = node1->att->resolve(HX_HCSTRING("source","\xdb","\xb0","\x31","\x32"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		this->imageSource = tmp7;
		HX_STACK_LINE(65)
		::String tmp8 = node1->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		Dynamic imgWidth = tmp9;		HX_STACK_VAR(imgWidth,"imgWidth");
		HX_STACK_LINE(66)
		::String tmp10 = node1->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		Dynamic imgHeight = tmp11;		HX_STACK_VAR(imgHeight,"imgHeight");
		HX_STACK_LINE(68)
		::String tmp12 = source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		this->name = tmp12;
		HX_STACK_LINE(70)
		bool tmp13 = source->has->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(70)
		if ((tmp13)){
			HX_STACK_LINE(72)
			::String tmp14 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			this->tileWidth = tmp15;
		}
		HX_STACK_LINE(74)
		bool tmp14 = source->has->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(74)
		if ((tmp14)){
			HX_STACK_LINE(76)
			::String tmp15 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(76)
			Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(76)
			this->tileHeight = tmp16;
		}
		HX_STACK_LINE(78)
		bool tmp15 = source->has->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(78)
		if ((tmp15)){
			HX_STACK_LINE(80)
			::String tmp16 = source->att->resolve(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(80)
			Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(80)
			this->spacing = tmp17;
		}
		HX_STACK_LINE(82)
		bool tmp16 = source->has->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		if ((tmp16)){
			HX_STACK_LINE(84)
			::String tmp17 = source->att->resolve(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			this->margin = tmp18;
		}
		HX_STACK_LINE(88)
		::flixel::addons::editors::tiled::TiledPropertySet tmp17 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		this->properties = tmp17;
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::_List::ListIterator tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				::List tmp19 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				::List _this = tmp19;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(89)
				tmp18 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(89)
			::_List::ListIterator _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				bool tmp19 = (_g->head != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(89)
				if ((tmp20)){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(89)
				{
					HX_STACK_LINE(89)
					Dynamic tmp22 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(89)
					_g->val = tmp22;
					HX_STACK_LINE(89)
					Dynamic tmp23 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(89)
					_g->head = tmp23;
					HX_STACK_LINE(89)
					tmp21 = _g->val;
				}
				HX_STACK_LINE(89)
				::haxe::xml::Fast prop = ((::haxe::xml::Fast)(tmp21));		HX_STACK_VAR(prop,"prop");
				HX_STACK_LINE(90)
				::flixel::addons::editors::tiled::TiledPropertySet tmp22 = this->properties;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(90)
				::haxe::xml::Fast tmp23 = prop;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(90)
				tmp22->extend(tmp23);
			}
		}
		HX_STACK_LINE(94)
		this->tileProps = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			::_List::ListIterator tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::List tmp19 = source->nodes->resolve(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(96)
				::List _this = tmp19;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(96)
				tmp18 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(96)
			::_List::ListIterator _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp19 = (_g->head != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(96)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(96)
				if ((tmp20)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(96)
				{
					HX_STACK_LINE(96)
					Dynamic tmp22 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(96)
					_g->val = tmp22;
					HX_STACK_LINE(96)
					Dynamic tmp23 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(96)
					_g->head = tmp23;
					HX_STACK_LINE(96)
					tmp21 = _g->val;
				}
				HX_STACK_LINE(96)
				::haxe::xml::Fast node2 = ((::haxe::xml::Fast)(tmp21));		HX_STACK_VAR(node2,"node2");
				HX_STACK_LINE(98)
				bool tmp22 = node2->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(98)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(98)
				if ((tmp23)){
					HX_STACK_LINE(100)
					continue;
				}
				HX_STACK_LINE(103)
				::String tmp24 = node2->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(103)
				Dynamic tmp25 = ::Std_obj::parseInt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(103)
				int id = tmp25;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(104)
				::flixel::addons::editors::tiled::TiledPropertySet tmp26 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(104)
				this->tileProps[id] = tmp26;
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					::_List::ListIterator tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						::List tmp28 = node2->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(106)
						::List _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(106)
						tmp27 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(106)
					::_List::ListIterator _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(106)
					while((true)){
						HX_STACK_LINE(106)
						bool tmp28 = (_g1->head != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(106)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(106)
						if ((tmp29)){
							HX_STACK_LINE(106)
							break;
						}
						HX_STACK_LINE(106)
						Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							Dynamic tmp31 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(106)
							_g1->val = tmp31;
							HX_STACK_LINE(106)
							Dynamic tmp32 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(106)
							_g1->head = tmp32;
							HX_STACK_LINE(106)
							tmp30 = _g1->val;
						}
						HX_STACK_LINE(106)
						::haxe::xml::Fast prop = ((::haxe::xml::Fast)(tmp30));		HX_STACK_VAR(prop,"prop");
						HX_STACK_LINE(108)
						::flixel::addons::editors::tiled::TiledPropertySet tmp31 = this->tileProps->__get(id).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(108)
						::haxe::xml::Fast tmp32 = prop;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(108)
						tmp31->extend(tmp32);
					}
				}
			}
		}
		HX_STACK_LINE(112)
		int tmp18 = this->tileWidth;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(112)
		bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(112)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		if ((tmp19)){
			HX_STACK_LINE(112)
			int tmp21 = this->tileHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(112)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(112)
			tmp20 = (tmp22 > (int)0);
		}
		else{
			HX_STACK_LINE(112)
			tmp20 = false;
		}
		HX_STACK_LINE(112)
		if ((tmp20)){
			HX_STACK_LINE(114)
			Dynamic tmp21 = imgWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(114)
			int tmp22 = this->tileWidth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(114)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(114)
			this->numRows = ((int)(tmp23));
			HX_STACK_LINE(115)
			Dynamic tmp24 = imgHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(115)
			int tmp25 = this->tileHeight;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(115)
			Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(115)
			this->numCols = ((int)(tmp26));
			HX_STACK_LINE(116)
			int tmp27 = this->numRows;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(116)
			int tmp28 = this->numCols;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(116)
			int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(116)
			this->numTiles = tmp29;
		}
	}
}
;
	return null();
}

//TiledTileSet_obj::~TiledTileSet_obj() { }

Dynamic TiledTileSet_obj::__CreateEmpty() { return  new TiledTileSet_obj; }
hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new(Dynamic data)
{  hx::ObjectPtr< TiledTileSet_obj > _result_ = new TiledTileSet_obj();
	_result_->__construct(data);
	return _result_;}

Dynamic TiledTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileSet_obj > _result_ = new TiledTileSet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool TiledTileSet_obj::hasGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","hasGid",0x55a8bbaf,"flixel.addons.editors.tiled.TiledTileSet.hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",122,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(123)
	int tmp = Gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		int tmp4 = Gid;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		int tmp5 = this->firstGID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		int tmp7 = this->numTiles;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		tmp3 = (tmp4 < tmp10);
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = false;
	}
	HX_STACK_LINE(123)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )

int TiledTileSet_obj::fromGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","fromGid",0xe24bb3f1,"flixel.addons.editors.tiled.TiledTileSet.fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",127,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(128)
	int tmp = Gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	int tmp1 = this->firstGID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	int tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

int TiledTileSet_obj::toGid( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","toGid",0xbfce2440,"flixel.addons.editors.tiled.TiledTileSet.toGid","flixel/addons/editors/tiled/TiledTileSet.hx",132,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(133)
	int tmp = this->firstGID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	int tmp1 = ID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getPropertiesByGid",0x4c2032e9,"flixel.addons.editors.tiled.TiledTileSet.getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",137,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(138)
	bool tmp = (this->tileProps != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		int tmp1 = Gid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		int tmp2 = this->firstGID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::flixel::addons::editors::tiled::TiledPropertySet tmp4 = this->tileProps->__get(tmp3).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		return tmp4;
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getProperties",0x8aac6822,"flixel.addons.editors.tiled.TiledTileSet.getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",147,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(148)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = this->tileProps->__get(ID).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

::openfl::_legacy::geom::Rectangle TiledTileSet_obj::getRect( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getRect",0xa87c5c13,"flixel.addons.editors.tiled.TiledTileSet.getRect","flixel/addons/editors/tiled/TiledTileSet.hx",152,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(154)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	int tmp1 = this->numCols;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	int tmp3 = this->tileWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	int tmp5 = ID;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(154)
	int tmp6 = this->numCols;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(154)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	int tmp8 = this->tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(154)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(154)
	::openfl::_legacy::geom::Rectangle tmp10 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp4,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(154)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )


TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
}

Dynamic TiledTileSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { return tileProps; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledTileSet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,firstGID),HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,spacing),HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,imageSource),HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledTileSet_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileProps),HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("firstGID","\xb2","\xe5","\x0d","\xf1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("imageSource","\x96","\xba","\x71","\x7a"),
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("tileProps","\x62","\x45","\xeb","\x53"),
	HX_HCSTRING("hasGid","\xc8","\x90","\x35","\xbb"),
	HX_HCSTRING("fromGid","\xb8","\x54","\xf9","\x57"),
	HX_HCSTRING("toGid","\x47","\x35","\x10","\x14"),
	HX_HCSTRING("getPropertiesByGid","\x82","\xc9","\xe4","\xcb"),
	HX_HCSTRING("getProperties","\x29","\x58","\x81","\xbd"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledTileSet","\xa7","\x5e","\x38","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledTileSet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTileSet_obj >;
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
} // end namespace addons
} // end namespace editors
} // end namespace tiled
