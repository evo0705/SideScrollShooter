#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

Void TiledLevel_obj::__construct(Dynamic Data)
{
HX_STACK_FRAME("TiledLevel","new",0x39f0e040,"TiledLevel.new","TiledLevel.hx",34,0x7c3de730)
HX_STACK_THIS(this)
HX_STACK_ARG(Data,"Data")
{
	HX_STACK_LINE(35)
	Dynamic tmp = Data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	super::__construct(tmp);
	HX_STACK_LINE(37)
	::flixel::group::FlxGroup tmp1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->foregroundTiles = tmp1;
	HX_STACK_LINE(38)
	::flixel::group::FlxGroup tmp2 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	this->backgroundTiles = tmp2;
	HX_STACK_LINE(39)
	::flixel::group::FlxGroup tmp3 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	this->frontgroundTiles = tmp3;
	HX_STACK_LINE(40)
	::flixel::group::FlxGroup tmp4 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	this->floors = tmp4;
	HX_STACK_LINE(41)
	::flixel::group::FlxGroup tmp5 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	this->walls = tmp5;
	HX_STACK_LINE(42)
	::flixel::group::FlxGroup tmp6 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	this->deaths = tmp6;
	HX_STACK_LINE(44)
	::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	int tmp8 = this->fullWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	int tmp9 = this->fullHeight;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	tmp7->setBounds((int)0,(int)0,tmp8,tmp9,true);
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			if ((tmp11)){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			::flixel::addons::editors::tiled::TiledLayer tmp12 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			::flixel::addons::editors::tiled::TiledLayer tileLayer = tmp12;		HX_STACK_VAR(tileLayer,"tileLayer");
			HX_STACK_LINE(47)
			++(_g);
			HX_STACK_LINE(49)
			::haxe::ds::StringMap tmp13 = tileLayer->properties->keys;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			::String tmp14 = tmp13->get(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(49)
			::String tileSheetName = tmp14;		HX_STACK_VAR(tileSheetName,"tileSheetName");
			HX_STACK_LINE(51)
			bool tmp15 = (tileSheetName == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(51)
			if ((tmp15)){
				HX_STACK_LINE(52)
				::String tmp16 = (HX_HCSTRING("'tileset' property not defined for the '","\xb8","\xca","\x8f","\xc4") + tileLayer->name);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				::String tmp17 = (tmp16 + HX_HCSTRING("' layer. Please add the property to the layer.","\xc0","\x1d","\x19","\x20"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				HX_STACK_DO_THROW(tmp17);
			}
			HX_STACK_LINE(54)
			::flixel::addons::editors::tiled::TiledTileSet tileSet = null();		HX_STACK_VAR(tileSet,"tileSet");
			HX_STACK_LINE(55)
			::haxe::ds::StringMap tmp16 = this->tilesets;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(55)
			Dynamic tmp17 = tmp16->iterator();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(55)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp17);  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet ts = __it->next();
				{
					HX_STACK_LINE(57)
					bool tmp18 = (ts->name == tileSheetName);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(57)
					if ((tmp18)){
						HX_STACK_LINE(59)
						tileSet = ts;
						HX_STACK_LINE(60)
						break;
					}
				}
;
			}
			HX_STACK_LINE(64)
			bool tmp18 = (tileSet == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(64)
			if ((tmp18)){
				HX_STACK_LINE(65)
				::String tmp19 = (HX_HCSTRING("Tileset '","\x1b","\x32","\x30","\x14") + tileSheetName);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(65)
				::String tmp20 = (tmp19 + HX_HCSTRING(" not found. Did you mispell the 'tilesheet' property in ","\xbf","\x25","\x2a","\xdb"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(65)
				::String tmp21 = tileLayer->name;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(65)
				::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(65)
				::String tmp23 = (tmp22 + HX_HCSTRING("' layer?","\x27","\x50","\x0f","\x42"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(65)
				HX_STACK_DO_THROW(tmp23);
			}
			HX_STACK_LINE(67)
			::String tmp19 = (HX_HCSTRING("assets/images/","\xab","\x47","\xcb","\x9f") + tileSet->imageSource);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(67)
			::haxe::io::Path tmp20 = ::haxe::io::Path_obj::__new(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			::haxe::io::Path imagePath = tmp20;		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(68)
			::String tmp21 = (HX_HCSTRING("assets/images/","\xab","\x47","\xcb","\x9f") + imagePath->file);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			::String tmp22 = (tmp21 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			::String tmp23 = imagePath->ext;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(68)
			::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(68)
			::String processedPath = tmp24;		HX_STACK_VAR(processedPath,"processedPath");
			HX_STACK_LINE(70)
			::flixel::tile::FlxTilemap tmp25 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(70)
			::flixel::tile::FlxTilemap tilemap = tmp25;		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(72)
			int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(72)
			tilemap->widthInTiles = tmp26;
			HX_STACK_LINE(73)
			int tmp27 = this->height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(73)
			tilemap->heightInTiles = tmp27;
			HX_STACK_LINE(74)
			::String tmp28 = processedPath;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(74)
			int tmp29 = tileSet->tileWidth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(74)
			int tmp30 = tileSet->tileHeight;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(74)
			tilemap->loadMap(tileLayer->get_tileArray(),tmp28,tmp29,tmp30,(int)0,(int)1,(int)1,(int)1);
			HX_STACK_LINE(76)
			::haxe::ds::StringMap tmp31 = tileLayer->properties->keys;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(76)
			bool tmp32 = tmp31->exists(HX_HCSTRING("scrollFactorX","\x1c","\x38","\x1f","\x1a"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(76)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(76)
			if ((tmp32)){
				HX_STACK_LINE(76)
				::haxe::ds::StringMap tmp34 = tileLayer->properties->keys;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(76)
				::haxe::ds::StringMap tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(76)
				tmp33 = tmp35->exists(HX_HCSTRING("scrollFactorY","\x1d","\x38","\x1f","\x1a"));
			}
			else{
				HX_STACK_LINE(76)
				tmp33 = false;
			}
			HX_STACK_LINE(76)
			if ((tmp33)){
				HX_STACK_LINE(78)
				::haxe::ds::StringMap tmp34 = tileLayer->properties->keys;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(78)
				::String tmp35 = tmp34->get(HX_HCSTRING("scrollFactorX","\x1c","\x38","\x1f","\x1a"));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(78)
				::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(78)
				Float tmp37 = ::Std_obj::parseFloat(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(78)
				Float factorX = tmp37;		HX_STACK_VAR(factorX,"factorX");
				HX_STACK_LINE(79)
				::haxe::ds::StringMap tmp38 = tileLayer->properties->keys;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(79)
				::String tmp39 = tmp38->get(HX_HCSTRING("scrollFactorY","\x1d","\x38","\x1f","\x1a"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(79)
				::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(79)
				Float tmp41 = ::Std_obj::parseFloat(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(79)
				Float factorY = tmp41;		HX_STACK_VAR(factorY,"factorY");
				HX_STACK_LINE(80)
				Float tmp42 = factorX;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				Float tmp43 = factorY;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(80)
				tilemap->scrollFactor->set(tmp42,tmp43);
			}
			HX_STACK_LINE(83)
			::haxe::ds::StringMap tmp34 = tileLayer->properties->keys;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(83)
			bool tmp35 = tmp34->exists(HX_HCSTRING("back","\x27","\xda","\x10","\x41"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(83)
			if ((tmp35)){
				HX_STACK_LINE(85)
				::flixel::group::FlxGroup tmp36 = this->backgroundTiles;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(85)
				::flixel::tile::FlxTilemap tmp37 = tilemap;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(85)
				tmp36->add(tmp37);
			}
			else{
				HX_STACK_LINE(87)
				::haxe::ds::StringMap tmp36 = tileLayer->properties->keys;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(87)
				bool tmp37 = tmp36->exists(HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(87)
				if ((tmp37)){
					HX_STACK_LINE(89)
					::flixel::group::FlxGroup tmp38 = this->frontgroundTiles;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(89)
					::flixel::tile::FlxTilemap tmp39 = tilemap;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(89)
					tmp38->add(tmp39);
				}
				else{
					HX_STACK_LINE(93)
					::flixel::group::FlxGroup tmp38 = this->foregroundTiles;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(93)
					::flixel::tile::FlxTilemap tmp39 = tilemap;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(93)
					tmp38->add(tmp39);
				}
			}
			HX_STACK_LINE(96)
			::haxe::ds::StringMap tmp36 = tileLayer->properties->keys;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(96)
			bool tmp37 = tmp36->exists(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(96)
			if ((tmp37)){
				HX_STACK_LINE(97)
				bool tmp38 = (this->platformLayers == null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(97)
				if ((tmp38)){
					HX_STACK_LINE(98)
					this->platformLayers = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(99)
				::flixel::tile::FlxTilemap tmp39 = tilemap;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(99)
				this->platformLayers->push(tmp39);
			}
			HX_STACK_LINE(101)
			::haxe::ds::StringMap tmp38 = tileLayer->properties->keys;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(101)
			bool tmp39 = tmp38->exists(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(101)
			if ((tmp39)){
				HX_STACK_LINE(102)
				bool tmp40 = (this->solidLayers == null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(102)
				if ((tmp40)){
					HX_STACK_LINE(103)
					this->solidLayers = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(104)
				::flixel::tile::FlxTilemap tmp41 = tilemap;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(104)
				this->solidLayers->push(tmp41);
			}
		}
	}
	HX_STACK_LINE(108)
	::flixel::addons::editors::tiled::TiledObjectGroup tmp10 = this->getObjectGroup(HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(108)
	bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(108)
	if ((tmp11)){
		HX_STACK_LINE(109)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		::flixel::addons::editors::tiled::TiledObjectGroup tmp12 = this->getObjectGroup(HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(109)
		Array< ::Dynamic > _g1 = tmp12->objects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(109)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(109)
			if ((tmp14)){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			::flixel::addons::editors::tiled::TiledObject tmp15 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(109)
			::flixel::addons::editors::tiled::TiledObject o = tmp15;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(109)
			++(_g);
			HX_STACK_LINE(110)
			::flixel::FlxObject tmp16 = ::flixel::FlxObject_obj::__new(o->x,o->y,o->width,o->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(110)
			::flixel::FlxObject floor = tmp16;		HX_STACK_VAR(floor,"floor");
			HX_STACK_LINE(111)
			floor->set_immovable(true);
			HX_STACK_LINE(112)
			floor->allowCollisions = (int)256;
			HX_STACK_LINE(113)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				::flixel::addons::editors::tiled::TiledObject tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(113)
				tmp18 = hx::TCast< ::flixel::addons::editors::tiled::TiledObject >::cast(o);
				HX_STACK_LINE(113)
				::flixel::addons::editors::tiled::TiledPropertySet _this = tmp18->custom;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(113)
				tmp17 = _this->keys->exists(HX_HCSTRING("nodrop","\xf0","\x4c","\x2c","\x27"));
			}
			HX_STACK_LINE(113)
			if ((tmp17)){
				HX_STACK_LINE(114)
				int tmp18 = ::TiledLevel_obj::NO_DROP;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(114)
				floor->ID = tmp18;
			}
			HX_STACK_LINE(116)
			::flixel::group::FlxGroup tmp18 = this->floors;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			::flixel::FlxObject tmp19 = floor;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			tmp18->add(tmp19);
		}
	}
	HX_STACK_LINE(120)
	::flixel::addons::editors::tiled::TiledObjectGroup tmp12 = this->getObjectGroup(HX_HCSTRING("wall","\x0a","\x5d","\xf2","\x4e"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(120)
	bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(120)
	if ((tmp13)){
		HX_STACK_LINE(121)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		::flixel::addons::editors::tiled::TiledObjectGroup tmp14 = this->getObjectGroup(HX_HCSTRING("wall","\x0a","\x5d","\xf2","\x4e"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(121)
		Array< ::Dynamic > _g1 = tmp14->objects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(121)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			if ((tmp16)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			::flixel::addons::editors::tiled::TiledObject tmp17 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			::flixel::addons::editors::tiled::TiledObject o = tmp17;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(121)
			++(_g);
			HX_STACK_LINE(122)
			::flixel::FlxObject tmp18 = ::flixel::FlxObject_obj::__new(o->x,o->y,o->width,o->height);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(122)
			::flixel::FlxObject wall = tmp18;		HX_STACK_VAR(wall,"wall");
			HX_STACK_LINE(123)
			wall->set_immovable(true);
			HX_STACK_LINE(124)
			::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			{
				HX_STACK_LINE(124)
				::flixel::addons::editors::tiled::TiledObject tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(124)
				tmp20 = hx::TCast< ::flixel::addons::editors::tiled::TiledObject >::cast(o);
				HX_STACK_LINE(124)
				::flixel::addons::editors::tiled::TiledPropertySet _this = tmp20->custom;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(124)
				::String tmp21 = _this->keys->get(HX_HCSTRING("block","\x4d","\x75","\xfc","\xb4"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(124)
				tmp19 = tmp21;
			}
			HX_STACK_LINE(124)
			bool tmp20 = (tmp19 == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(124)
			if ((tmp20)){
				HX_STACK_LINE(125)
				wall->allowCollisions = (int)1;
			}
			else{
				HX_STACK_LINE(126)
				::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					::flixel::addons::editors::tiled::TiledObject tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(126)
					tmp22 = hx::TCast< ::flixel::addons::editors::tiled::TiledObject >::cast(o);
					HX_STACK_LINE(126)
					::flixel::addons::editors::tiled::TiledPropertySet _this = tmp22->custom;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(126)
					::String tmp23 = _this->keys->get(HX_HCSTRING("block","\x4d","\x75","\xfc","\xb4"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(126)
					tmp21 = tmp23;
				}
				HX_STACK_LINE(126)
				bool tmp22 = (tmp21 == HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(126)
				if ((tmp22)){
					HX_STACK_LINE(127)
					wall->allowCollisions = (int)16;
				}
			}
			HX_STACK_LINE(129)
			::flixel::group::FlxGroup tmp21 = this->walls;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			::flixel::FlxObject tmp22 = wall;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(129)
			tmp21->add(tmp22);
		}
	}
	HX_STACK_LINE(133)
	::flixel::addons::editors::tiled::TiledObjectGroup tmp14 = this->getObjectGroup(HX_HCSTRING("death","\x34","\x8f","\x1e","\xd7"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(133)
	bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(133)
	if ((tmp15)){
		HX_STACK_LINE(134)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		::flixel::addons::editors::tiled::TiledObjectGroup tmp16 = this->getObjectGroup(HX_HCSTRING("death","\x34","\x8f","\x1e","\xd7"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(134)
		Array< ::Dynamic > _g1 = tmp16->objects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			bool tmp17 = (_g < _g1->length);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(134)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(134)
			if ((tmp18)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			::flixel::addons::editors::tiled::TiledObject tmp19 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(134)
			::flixel::addons::editors::tiled::TiledObject o = tmp19;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(134)
			++(_g);
			HX_STACK_LINE(135)
			::flixel::FlxObject tmp20 = ::flixel::FlxObject_obj::__new(o->x,o->y,o->width,o->height);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(135)
			::flixel::FlxObject death = tmp20;		HX_STACK_VAR(death,"death");
			HX_STACK_LINE(136)
			death->set_immovable(true);
			HX_STACK_LINE(137)
			::flixel::group::FlxGroup tmp21 = this->deaths;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(137)
			::flixel::FlxObject tmp22 = death;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(137)
			tmp21->add(tmp22);
		}
	}
}
;
	return null();
}

//TiledLevel_obj::~TiledLevel_obj() { }

Dynamic TiledLevel_obj::__CreateEmpty() { return  new TiledLevel_obj; }
hx::ObjectPtr< TiledLevel_obj > TiledLevel_obj::__new(Dynamic Data)
{  hx::ObjectPtr< TiledLevel_obj > _result_ = new TiledLevel_obj();
	_result_->__construct(Data);
	return _result_;}

Dynamic TiledLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLevel_obj > _result_ = new TiledLevel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool TiledLevel_obj::collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback){
	HX_STACK_FRAME("TiledLevel","collideWithLevel",0xbac74e60,"TiledLevel.collideWithLevel","TiledLevel.hx",146,0x7c3de730)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_ARG(notifyCallback,"notifyCallback")
	HX_STACK_ARG(processCallback,"processCallback")
	HX_STACK_LINE(147)
	cpp::ArrayBase floorCollided = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(floorCollided,"floorCollided");
	HX_STACK_LINE(148)
	bool collided = false;		HX_STACK_VAR(collided,"collided");
	HX_STACK_LINE(151)
	::flixel::group::FlxGroup tmp = this->floors;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::flixel::FlxObject tmp1 = obj;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,cpp::ArrayBase,floorCollided)
	int __ArgCount() const { return 2; }
	Void run(::flixel::FlxBasic obj1,::flixel::FlxBasic obj2){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","TiledLevel.hx",151,0x7c3de730)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		{
			HX_STACK_LINE(151)
			::flixel::FlxBasic tmp2 = obj1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::flixel::FlxBasic tmp3 = obj2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Dynamic tmp4 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			::flixel::FlxG_obj::overlap(tmp2,tmp3,null(),tmp4);
			HX_STACK_LINE(151)
			hx::IndexRef((floorCollided).mPtr,(int)0) = obj1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))


	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 2; }
	bool run(Dynamic obj1,Dynamic obj2){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","TiledLevel.hx",151,0x7c3de730)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		{
			HX_STACK_LINE(151)
			Float tmp2 = obj2->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			Float tmp3 = (Float(obj2->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic )) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			Float tmp5 = obj1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			return tmp6;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(151)
	bool tmp2 = ::flixel::FlxG_obj::overlap(tmp,tmp1, Dynamic(new _Function_1_1(floorCollided)), Dynamic(new _Function_1_2()));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	collided = tmp2;
	HX_STACK_LINE(154)
	::flixel::group::FlxGroup tmp3 = this->walls;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	::flixel::FlxObject tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	Dynamic tmp5 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(154)
	::flixel::FlxG_obj::overlap(tmp3,tmp4,null(),tmp5);
	HX_STACK_LINE(158)
	::flixel::group::FlxGroup tmp6 = this->deaths;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	::flixel::FlxObject tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 2; }
	Void run(Dynamic obj1,Dynamic obj2){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","TiledLevel.hx",158,0x7c3de730)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		{
			HX_STACK_LINE(158)
			obj2->__Field(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"), hx::paccDynamic )();
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(158)
	::flixel::FlxG_obj::overlap(tmp6,tmp7, Dynamic(new _Function_1_3()),null());
	HX_STACK_LINE(160)
	::flixel::FlxObject tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(160)
	bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::Player >());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(160)
	if ((tmp9)){
		HX_STACK_LINE(161)
		::Player tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(161)
		tmp10 = hx::TCast< ::Player >::cast(obj);
		HX_STACK_LINE(161)
		tmp10->noDrop = false;
		HX_STACK_LINE(162)
		bool tmp11 = collided;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		if ((tmp11)){
			HX_STACK_LINE(163)
			int tmp12 = ::TiledLevel_obj::NO_DROP;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			bool tmp13 = (floorCollided->__GetItem((int)0)->__Field(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"), hx::paccDynamic ) == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(163)
			if ((tmp13)){
				HX_STACK_LINE(164)
				::Player tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(164)
				tmp14 = hx::TCast< ::Player >::cast(obj);
				HX_STACK_LINE(164)
				tmp14->noDrop = true;
			}
		}
	}
	HX_STACK_LINE(188)
	bool tmp10 = collided;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(188)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,collideWithLevel,return )

int TiledLevel_obj::NO_DROP;


TiledLevel_obj::TiledLevel_obj()
{
}

void TiledLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLevel);
	HX_MARK_MEMBER_NAME(frontgroundTiles,"frontgroundTiles");
	HX_MARK_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_MARK_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_MARK_MEMBER_NAME(floors,"floors");
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(deaths,"deaths");
	HX_MARK_MEMBER_NAME(platformLayers,"platformLayers");
	HX_MARK_MEMBER_NAME(solidLayers,"solidLayers");
	::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frontgroundTiles,"frontgroundTiles");
	HX_VISIT_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_VISIT_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_VISIT_MEMBER_NAME(floors,"floors");
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(deaths,"deaths");
	HX_VISIT_MEMBER_NAME(platformLayers,"platformLayers");
	HX_VISIT_MEMBER_NAME(solidLayers,"solidLayers");
	::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledLevel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { return walls; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floors") ) { return floors; }
		if (HX_FIELD_EQ(inName,"deaths") ) { return deaths; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"solidLayers") ) { return solidLayers; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"platformLayers") ) { return platformLayers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { return foregroundTiles; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { return backgroundTiles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frontgroundTiles") ) { return frontgroundTiles; }
		if (HX_FIELD_EQ(inName,"collideWithLevel") ) { return collideWithLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TiledLevel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"NO_DROP") ) { outValue = NO_DROP; return true;  }
	}
	return false;
}

Dynamic TiledLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floors") ) { floors=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deaths") ) { deaths=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"solidLayers") ) { solidLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"platformLayers") ) { platformLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { foregroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { backgroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frontgroundTiles") ) { frontgroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledLevel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"NO_DROP") ) { NO_DROP=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void TiledLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frontgroundTiles","\x75","\x07","\x85","\x74"));
	outFields->push(HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58"));
	outFields->push(HX_HCSTRING("backgroundTiles","\xb7","\xda","\x1f","\xd3"));
	outFields->push(HX_HCSTRING("floors","\x27","\xc1","\x60","\x41"));
	outFields->push(HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));
	outFields->push(HX_HCSTRING("deaths","\xbf","\xbe","\x9e","\x63"));
	outFields->push(HX_HCSTRING("platformLayers","\x95","\xc4","\x12","\xb6"));
	outFields->push(HX_HCSTRING("solidLayers","\x0d","\x30","\x65","\x83"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,frontgroundTiles),HX_HCSTRING("frontgroundTiles","\x75","\x07","\x85","\x74")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,foregroundTiles),HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,backgroundTiles),HX_HCSTRING("backgroundTiles","\xb7","\xda","\x1f","\xd3")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,floors),HX_HCSTRING("floors","\x27","\xc1","\x60","\x41")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,walls),HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,deaths),HX_HCSTRING("deaths","\xbf","\xbe","\x9e","\x63")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLevel_obj,platformLayers),HX_HCSTRING("platformLayers","\x95","\xc4","\x12","\xb6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLevel_obj,solidLayers),HX_HCSTRING("solidLayers","\x0d","\x30","\x65","\x83")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TiledLevel_obj::NO_DROP,HX_HCSTRING("NO_DROP","\x2d","\xcc","\xfd","\x21")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frontgroundTiles","\x75","\x07","\x85","\x74"),
	HX_HCSTRING("foregroundTiles","\xc2","\xb1","\x53","\x58"),
	HX_HCSTRING("backgroundTiles","\xb7","\xda","\x1f","\xd3"),
	HX_HCSTRING("floors","\x27","\xc1","\x60","\x41"),
	HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"),
	HX_HCSTRING("deaths","\xbf","\xbe","\x9e","\x63"),
	HX_HCSTRING("platformLayers","\x95","\xc4","\x12","\xb6"),
	HX_HCSTRING("solidLayers","\x0d","\x30","\x65","\x83"),
	HX_HCSTRING("collideWithLevel","\x40","\xca","\xf8","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLevel_obj::NO_DROP,"NO_DROP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::NO_DROP,"NO_DROP");
};

#endif

hx::Class TiledLevel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NO_DROP","\x2d","\xcc","\xfd","\x21"),
	::String(null()) };

void TiledLevel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TiledLevel","\x4e","\x00","\xf4","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TiledLevel_obj::__GetStatic;
	__mClass->mSetStaticField = &TiledLevel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledLevel_obj >;
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

void TiledLevel_obj::__boot()
{
	NO_DROP= (int)1;
}

