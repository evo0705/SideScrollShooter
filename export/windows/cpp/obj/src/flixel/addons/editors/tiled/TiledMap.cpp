#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
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
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledMap_obj::__construct(Dynamic Data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","new",0xde9b4f21,"flixel.addons.editors.tiled.TiledMap.new","flixel/addons/editors/tiled/TiledMap.hx",43,0xfb5e15cd)
HX_STACK_THIS(this)
HX_STACK_ARG(Data,"Data")
{
	HX_STACK_LINE(44)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	this->properties = tmp;
	HX_STACK_LINE(45)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(46)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(48)
	Dynamic tmp1 = Data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(50)
		Dynamic tmp3 = Data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::String tmp4 = ::openfl::_legacy::Assets_obj::getText(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::Xml tmp5 = ::Xml_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::haxe::xml::Fast tmp6 = ::haxe::xml::Fast_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		source = tmp6;
	}
	else{
		HX_STACK_LINE(52)
		Dynamic tmp3 = Data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::Xml >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		if ((tmp4)){
			HX_STACK_LINE(54)
			::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(Data);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			source = tmp5;
		}
		else{
			HX_STACK_LINE(58)
			HX_STACK_DO_THROW(HX_HCSTRING("Unknown TMX map format","\xf2","\x6d","\x02","\xa1"));
		}
	}
	HX_STACK_LINE(61)
	::haxe::xml::Fast tmp3 = source->node->resolve(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	source = tmp3;
	HX_STACK_LINE(64)
	::String tmp4 = source->att->resolve(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	this->version = tmp4;
	HX_STACK_LINE(66)
	::String tmp5 = this->version;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	if ((tmp6)){
		HX_STACK_LINE(68)
		this->version = HX_HCSTRING("unknown","\x8a","\x23","\x7b","\xe1");
	}
	HX_STACK_LINE(71)
	::String tmp7 = source->att->resolve(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	this->orientation = tmp7;
	HX_STACK_LINE(73)
	::String tmp8 = this->orientation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(73)
	bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(73)
	if ((tmp9)){
		HX_STACK_LINE(75)
		this->orientation = HX_HCSTRING("orthogonal","\x79","\xf9","\xf3","\x18");
	}
	HX_STACK_LINE(78)
	::String tmp10 = source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	this->width = tmp11;
	HX_STACK_LINE(79)
	::String tmp12 = source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(79)
	Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(79)
	this->height = tmp13;
	HX_STACK_LINE(80)
	::String tmp14 = source->att->resolve(HX_HCSTRING("tilewidth","\x18","\xa4","\x90","\xc2"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(80)
	Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(80)
	this->tileWidth = tmp15;
	HX_STACK_LINE(81)
	::String tmp16 = source->att->resolve(HX_HCSTRING("tileheight","\x95","\x69","\x4e","\x32"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(81)
	Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(81)
	this->tileHeight = tmp17;
	HX_STACK_LINE(84)
	int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(84)
	int tmp19 = this->tileWidth;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(84)
	int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(84)
	this->fullWidth = tmp20;
	HX_STACK_LINE(85)
	int tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(85)
	int tmp22 = this->tileHeight;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(85)
	int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(85)
	this->fullHeight = tmp23;
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp25 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(87)
		tmp24 = tmp26;
	}
	HX_STACK_LINE(87)
	this->noLoadHash = tmp24;
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp26 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(88)
		tmp25 = tmp27;
	}
	HX_STACK_LINE(88)
	this->tilesets = tmp25;
	HX_STACK_LINE(89)
	this->layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(90)
	this->objectGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::List tmp27 = source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(93)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(93)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(93)
			if ((tmp28)){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(93)
			{
				HX_STACK_LINE(93)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(93)
				_g->val = tmp30;
				HX_STACK_LINE(93)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(93)
				_g->head = tmp31;
				HX_STACK_LINE(93)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(93)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(95)
			::flixel::addons::editors::tiled::TiledPropertySet tmp30 = this->properties;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(95)
			::haxe::xml::Fast tmp31 = node1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(95)
			tmp30->extend(tmp31);
		}
	}
	HX_STACK_LINE(98)
	::flixel::addons::editors::tiled::TiledPropertySet tmp26 = this->properties;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(98)
	::String tmp27 = tmp26->keys->get(HX_HCSTRING("noload","\xe7","\xae","\x73","\x2c"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(98)
	::String noLoadStr = tmp27;		HX_STACK_VAR(noLoadStr,"noLoadStr");
	HX_STACK_LINE(100)
	bool tmp28 = (noLoadStr != null());		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(100)
	if ((tmp28)){
		HX_STACK_LINE(102)
		::EReg tmp29 = ::EReg_obj::__new(HX_HCSTRING("[,;|]","\x8b","\x5e","\xb9","\x82"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(102)
		::EReg regExp = tmp29;		HX_STACK_VAR(regExp,"regExp");
		HX_STACK_LINE(103)
		::String tmp30 = noLoadStr;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(103)
		Array< ::String > noLoadArr = regExp->split(tmp30);		HX_STACK_VAR(noLoadArr,"noLoadArr");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp31 = (_g < noLoadArr->length);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(105)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(105)
				if ((tmp32)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::String tmp33 = noLoadArr->__get(_g);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(105)
				::String s = tmp33;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					::String tmp34 = s;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(107)
					::String tmp35 = ::StringTools_obj::trim(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(107)
					::String key = tmp35;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(107)
					::haxe::ds::StringMap tmp36 = this->noLoadHash;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(107)
					::String tmp37 = key;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(107)
					tmp36->set(tmp37,true);
				}
			}
		}
	}
	HX_STACK_LINE(112)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::_List::ListIterator tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::List tmp30 = source->nodes->resolve(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(113)
			::List _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			tmp29 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(113)
		::_List::ListIterator _g = tmp29;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			bool tmp30 = (_g->head != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(113)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(113)
			if ((tmp31)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				Dynamic tmp33 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(113)
				_g->val = tmp33;
				HX_STACK_LINE(113)
				Dynamic tmp34 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(113)
				_g->head = tmp34;
				HX_STACK_LINE(113)
				tmp32 = _g->val;
			}
			HX_STACK_LINE(113)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp32));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(115)
			::String tmp33 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(115)
			name = tmp33;
			HX_STACK_LINE(117)
			::haxe::ds::StringMap tmp34 = this->noLoadHash;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(117)
			::String tmp35 = name;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(117)
			bool tmp36 = tmp34->exists(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(117)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(117)
			if ((tmp37)){
				HX_STACK_LINE(119)
				::flixel::addons::editors::tiled::TiledTileSet tmp38 = ::flixel::addons::editors::tiled::TiledTileSet_obj::__new(node1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(119)
				::flixel::addons::editors::tiled::TiledTileSet value = tmp38;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(119)
				::haxe::ds::StringMap tmp39 = this->tilesets;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(119)
				::String tmp40 = name;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(119)
				::flixel::addons::editors::tiled::TiledTileSet tmp41 = value;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(119)
				tmp39->set(tmp40,tmp41);
			}
		}
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		::_List::ListIterator tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::List tmp30 = source->nodes->resolve(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(124)
			::List _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(124)
			tmp29 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(124)
		::_List::ListIterator _g = tmp29;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			bool tmp30 = (_g->head != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(124)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(124)
			if ((tmp31)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				Dynamic tmp33 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(124)
				_g->val = tmp33;
				HX_STACK_LINE(124)
				Dynamic tmp34 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(124)
				_g->head = tmp34;
				HX_STACK_LINE(124)
				tmp32 = _g->val;
			}
			HX_STACK_LINE(124)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp32));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(126)
			::String tmp33 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(126)
			name = tmp33;
			HX_STACK_LINE(128)
			::haxe::ds::StringMap tmp34 = this->noLoadHash;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(128)
			::String tmp35 = name;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(128)
			bool tmp36 = tmp34->exists(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(128)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(128)
			if ((tmp37)){
				HX_STACK_LINE(130)
				::flixel::addons::editors::tiled::TiledLayer tmp38 = ::flixel::addons::editors::tiled::TiledLayer_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(130)
				this->layers->push(tmp38);
			}
		}
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::_List::ListIterator tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::List tmp30 = source->nodes->resolve(HX_HCSTRING("objectgroup","\x20","\x60","\xf6","\x75"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(135)
			::List _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(135)
			tmp29 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(135)
		::_List::ListIterator _g = tmp29;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			bool tmp30 = (_g->head != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(135)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(135)
			if ((tmp31)){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(135)
			Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				Dynamic tmp33 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(135)
				_g->val = tmp33;
				HX_STACK_LINE(135)
				Dynamic tmp34 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(135)
				_g->head = tmp34;
				HX_STACK_LINE(135)
				tmp32 = _g->val;
			}
			HX_STACK_LINE(135)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp32));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(137)
			::String tmp33 = node1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(137)
			name = tmp33;
			HX_STACK_LINE(139)
			::haxe::ds::StringMap tmp34 = this->noLoadHash;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(139)
			::String tmp35 = name;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(139)
			bool tmp36 = tmp34->exists(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(139)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(139)
			if ((tmp37)){
				HX_STACK_LINE(141)
				::flixel::addons::editors::tiled::TiledObjectGroup tmp38 = ::flixel::addons::editors::tiled::TiledObjectGroup_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(141)
				this->objectGroups->push(tmp38);
			}
		}
	}
}
;
	return null();
}

//TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(Dynamic Data)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(Data);
	return _result_;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > _result_ = new TiledMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getTileSet( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getTileSet",0x10a90a7d,"flixel.addons.editors.tiled.TiledMap.getTileSet","flixel/addons/editors/tiled/TiledMap.hx",147,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(148)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	::flixel::addons::editors::tiled::TiledTileSet tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	::flixel::addons::editors::tiled::TiledTileSet tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTileSet,return )

::flixel::addons::editors::tiled::TiledLayer TiledMap_obj::getLayer( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getLayer",0xf247f6fa,"flixel.addons.editors.tiled.TiledMap.getLayer","flixel/addons/editors/tiled/TiledMap.hx",152,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(153)
	int tmp = this->layers->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(155)
	while((true)){
		HX_STACK_LINE(155)
		bool tmp1 = (i > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			break;
		}
		HX_STACK_LINE(157)
		int tmp3 = --(i);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		::flixel::addons::editors::tiled::TiledLayer tmp4 = this->layers->__get(tmp3).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		::String tmp6 = Name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		if ((tmp7)){
			HX_STACK_LINE(159)
			::flixel::addons::editors::tiled::TiledLayer tmp8 = this->layers->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			return tmp8;
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayer,return )

::flixel::addons::editors::tiled::TiledObjectGroup TiledMap_obj::getObjectGroup( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getObjectGroup",0xa32109e9,"flixel.addons.editors.tiled.TiledMap.getObjectGroup","flixel/addons/editors/tiled/TiledMap.hx",167,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(168)
	int tmp = this->objectGroups->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(170)
	while((true)){
		HX_STACK_LINE(170)
		bool tmp1 = (i > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		if ((tmp2)){
			HX_STACK_LINE(170)
			break;
		}
		HX_STACK_LINE(172)
		int tmp3 = --(i);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		::flixel::addons::editors::tiled::TiledObjectGroup tmp4 = this->objectGroups->__get(tmp3).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::String tmp5 = tmp4->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		::String tmp6 = Name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		if ((tmp7)){
			HX_STACK_LINE(174)
			::flixel::addons::editors::tiled::TiledObjectGroup tmp8 = this->objectGroups->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			return tmp8;
		}
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getObjectGroup,return )

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getGidOwner( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getGidOwner",0xd5d72748,"flixel.addons.editors.tiled.TiledMap.getGidOwner","flixel/addons/editors/tiled/TiledMap.hx",183,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(184)
	::flixel::addons::editors::tiled::TiledTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(185)
	::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(187)
	::haxe::ds::StringMap tmp = this->tilesets;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp1);  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
		{
			HX_STACK_LINE(189)
			bool tmp2 = (Gid >= set1->firstGID);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			if ((tmp2)){
				HX_STACK_LINE(189)
				int tmp4 = Gid;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				int tmp5 = (set1->firstGID + set1->numTiles);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				tmp3 = (tmp4 < tmp6);
			}
			else{
				HX_STACK_LINE(189)
				tmp3 = false;
			}
			HX_STACK_LINE(189)
			if ((tmp3)){
				HX_STACK_LINE(191)
				::flixel::addons::editors::tiled::TiledTileSet tmp4 = set1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				return tmp4;
			}
		}
;
	}
	HX_STACK_LINE(195)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getGidOwner,return )


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
}

Dynamic TiledMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { return noLoadHash; }
		if (HX_FIELD_EQ(inName,"getTileSet") ) { return getTileSet_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectGroup") ) { return getObjectGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { noLoadHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledMap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"));
	outFields->push(HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6"));
	outFields->push(HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"));
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledMap_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(int)offsetof(TiledMap_obj,orientation),HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullWidth),HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullHeight),HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledMap_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,noLoadHash),HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,tilesets),HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,objectGroups),HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("orientation","\xd0","\xee","\xfe","\xfd"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("fullWidth","\xf7","\x35","\x67","\x47"),
	HX_HCSTRING("fullHeight","\xd6","\x7a","\x37","\xe9"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("noLoadHash","\x75","\xc6","\x05","\xa6"),
	HX_HCSTRING("tilesets","\xbf","\x8c","\x7d","\x9b"),
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("objectGroups","\x73","\x30","\x32","\xf6"),
	HX_HCSTRING("getTileSet","\x1e","\xbf","\xdc","\x94"),
	HX_HCSTRING("getLayer","\x5b","\x91","\x97","\xcf"),
	HX_HCSTRING("getObjectGroup","\x0a","\x23","\xc2","\x90"),
	HX_HCSTRING("getGidOwner","\x87","\x7f","\xe1","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledMap","\xaf","\x2a","\xe3","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledMap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledMap_obj >;
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
