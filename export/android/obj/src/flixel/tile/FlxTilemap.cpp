#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#include <flixel/util/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",39,0x448feb74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(191)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(162)
	this->_scaledTileHeight = ((Float)0);
	HX_STACK_LINE(161)
	this->_scaledTileWidth = ((Float)0);
	HX_STACK_LINE(159)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(155)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(80)
	this->tileScaleHack = ((Float)1.01);
	HX_STACK_LINE(76)
	this->totalTiles = (int)0;
	HX_STACK_LINE(72)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(68)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(64)
	this->_auto = (int)0;
	HX_STACK_LINE(210)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(212)
	this->collisionType = (int)3;
	HX_STACK_LINE(214)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(215)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	this->_flashPoint = tmp;
	HX_STACK_LINE(217)
	this->set_immovable(true);
	HX_STACK_LINE(218)
	this->set_moves(false);
	HX_STACK_LINE(221)
	::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	this->_helperPoint = tmp1;
	HX_STACK_LINE(224)
	Dynamic tmp2 = this->setScaleXCallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	Dynamic tmp3 = this->setScaleYCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	Dynamic tmp4 = this->setScaleXYCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(224)
	::flixel::util::FlxCallbackPoint tmp5 = ::flixel::util::FlxCallbackPoint_obj::__new(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	this->scale = tmp5;
	HX_STACK_LINE(225)
	::flixel::util::FlxPoint tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	tmp6->set((int)1,(int)1);
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		::flixel::_system::frontEnds::SignalFrontEnd tmp7 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		Dynamic tmp8 = this->onGameResize_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(227)
		tmp7->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp8);
	}
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",234,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_flashPoint = null();
		HX_STACK_LINE(236)
		this->_flashRect = null();
		HX_STACK_LINE(237)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(240)
		bool tmp = (this->_tileObjects != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		if ((tmp)){
			HX_STACK_LINE(242)
			int tmp1 = this->_tileObjects->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			l = tmp1;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(244)
				while((true)){
					HX_STACK_LINE(244)
					bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(244)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(244)
					if ((tmp3)){
						HX_STACK_LINE(244)
						break;
					}
					HX_STACK_LINE(244)
					int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(244)
					int i1 = tmp4;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(246)
					::flixel::tile::FlxTile tmp5 = this->_tileObjects->__get(i1).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(246)
					tmp5->destroy();
				}
			}
			HX_STACK_LINE(249)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(252)
		bool tmp1 = (this->_buffers != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp1)){
			HX_STACK_LINE(254)
			i = (int)0;
			HX_STACK_LINE(255)
			int tmp2 = this->_buffers->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			l = tmp2;
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(257)
				while((true)){
					HX_STACK_LINE(257)
					bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(257)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(257)
					if ((tmp4)){
						HX_STACK_LINE(257)
						break;
					}
					HX_STACK_LINE(257)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(257)
					int i1 = tmp5;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(259)
					::flixel::tile::FlxTilemapBuffer tmp6 = this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					tmp6->destroy();
				}
			}
			HX_STACK_LINE(262)
			this->_buffers = null();
		}
		HX_STACK_LINE(265)
		this->_data = null();
		HX_STACK_LINE(276)
		this->_helperPoint = null();
		HX_STACK_LINE(277)
		this->_rectIDs = null();
		HX_STACK_LINE(280)
		this->framesData = null();
		HX_STACK_LINE(281)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(282)
		this->region = null();
		HX_STACK_LINE(285)
		::flixel::util::FlxPoint tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		this->scale = tmp3;
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			Dynamic tmp5 = this->onGameResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			tmp4->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
		}
		HX_STACK_LINE(289)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","loadMap",0x8c4a14d2,"flixel.tile.FlxTilemap.loadMap","flixel/tile/FlxTilemap.hx",306,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(307)
		this->_auto = AutoTile;
		HX_STACK_LINE(308)
		bool tmp = (StartingIndex <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		if ((tmp)){
			HX_STACK_LINE(308)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(308)
			tmp1 = StartingIndex;
		}
		HX_STACK_LINE(308)
		this->_startingIndex = tmp1;
		HX_STACK_LINE(311)
		Dynamic tmp2 = MapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		if ((tmp3)){
			HX_STACK_LINE(313)
			Dynamic tmp4 = MapData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			::String tmp5 = ::StringTools_obj::rtrim(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			MapData = tmp5;
			HX_STACK_LINE(316)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(317)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(318)
			Dynamic tmp6 = MapData->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(318)
			Array< ::String > rows = tmp6;		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(319)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(320)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(321)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(322)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(324)
			while((true)){
				HX_STACK_LINE(324)
				int tmp7 = row;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(324)
				int tmp8 = this->heightInTiles;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(324)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(324)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(324)
				if ((tmp10)){
					HX_STACK_LINE(324)
					break;
				}
				HX_STACK_LINE(326)
				int tmp11 = (row)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				::String tmp12 = rows->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				columns = tmp12.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
				HX_STACK_LINE(328)
				bool tmp13 = (columns->length < (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(328)
				if ((tmp13)){
					HX_STACK_LINE(330)
					int tmp14 = this->heightInTiles;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(330)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(330)
					this->heightInTiles = tmp15;
					HX_STACK_LINE(331)
					continue;
				}
				HX_STACK_LINE(333)
				int tmp14 = this->widthInTiles;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(333)
				bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(333)
				if ((tmp15)){
					HX_STACK_LINE(335)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(337)
				column = (int)0;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(339)
					int tmp16 = column;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(339)
					int tmp17 = this->widthInTiles;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(339)
					bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(339)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(339)
					if ((tmp19)){
						HX_STACK_LINE(339)
						break;
					}
					HX_STACK_LINE(342)
					::String tmp20 = columns->__get(column);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(342)
					Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(342)
					int curTile = tmp21;		HX_STACK_VAR(curTile,"curTile");
					HX_STACK_LINE(364)
					int tmp22 = curTile;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(364)
					this->_data->push(tmp22);
					HX_STACK_LINE(365)
					(column)++;
				}
			}
		}
		else{
			HX_STACK_LINE(373)
			Dynamic tmp4 = MapData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			if ((tmp5)){
				HX_STACK_LINE(375)
				this->_data = ((Array< int >)(MapData));
				HX_STACK_LINE(376)
				this->_data = this->_data->copy();
			}
			else{
				HX_STACK_LINE(380)
				Dynamic tmp6 = MapData;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				::ValueType tmp7 = ::Type_obj::_typeof(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(380)
				::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(380)
				::String tmp9 = (HX_HCSTRING("Unexpected MapData format '","\xa7","\x72","\xd6","\x2c") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(380)
				::String tmp10 = (tmp9 + HX_HCSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.","\xbb","\x21","\x6a","\x88"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(380)
				HX_STACK_DO_THROW(tmp10);
			}
		}
		HX_STACK_LINE(384)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(385)
		int tmp4 = this->_data->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(385)
		this->totalTiles = tmp4;
		HX_STACK_LINE(387)
		int tmp5 = this->_auto;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(387)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		if ((tmp6)){
			HX_STACK_LINE(389)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(390)
			DrawIndex = (int)1;
			HX_STACK_LINE(391)
			CollideIndex = (int)1;
			HX_STACK_LINE(392)
			i = (int)0;
			HX_STACK_LINE(394)
			while((true)){
				HX_STACK_LINE(394)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(394)
				int tmp8 = this->totalTiles;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(394)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(394)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(394)
				if ((tmp10)){
					HX_STACK_LINE(394)
					break;
				}
				HX_STACK_LINE(396)
				int tmp11 = (i)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(396)
				this->autoTile(tmp11);
			}
		}
		HX_STACK_LINE(400)
		bool tmp7 = (this->customTileRemap != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(400)
		if ((tmp7)){
			HX_STACK_LINE(402)
			i = (int)0;
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(403)
				int tmp9 = this->totalTiles;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(403)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(403)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(403)
				if ((tmp11)){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(405)
				int tmp12 = this->_data->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(405)
				int old_index = tmp12;		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(406)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(407)
				int tmp13 = old_index;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(407)
				int tmp14 = this->customTileRemap->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(407)
				bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(407)
				if ((tmp15)){
					HX_STACK_LINE(409)
					int tmp16 = this->customTileRemap->__get(old_index);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(409)
					new_index = tmp16;
				}
				HX_STACK_LINE(411)
				int tmp16 = new_index;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(411)
				this->_data[i] = tmp16;
				HX_STACK_LINE(412)
				(i)++;
			}
		}
		HX_STACK_LINE(416)
		bool tmp8 = (this->_randomIndices != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		if ((tmp8)){
			HX_STACK_LINE(418)
			Dynamic tmp9 = this->_randomLambda_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(418)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(418)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(418)
			if ((tmp10)){
				HX_STACK_LINE(418)
				tmp11 = this->_randomLambda_dyn();
			}
			else{
				HX_STACK_LINE(418)
				tmp11 = ::flixel::util::FlxRandom_obj::_float_dyn();
			}
			HX_STACK_LINE(418)
			Dynamic randLambda = tmp11;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(420)
			i = (int)0;
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				int tmp13 = this->totalTiles;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(421)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(421)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(421)
				if ((tmp15)){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(423)
				int tmp16 = this->_data->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(423)
				int old_index = tmp16;		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(424)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(425)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(426)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(426)
					while((true)){
						HX_STACK_LINE(426)
						bool tmp17 = (_g < _g1->length);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(426)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(426)
						if ((tmp18)){
							HX_STACK_LINE(426)
							break;
						}
						HX_STACK_LINE(426)
						int tmp19 = _g1->__get(_g);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(426)
						int rand = tmp19;		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(426)
						++(_g);
						HX_STACK_LINE(428)
						bool tmp20 = (old_index == rand);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(428)
						if ((tmp20)){
							HX_STACK_LINE(430)
							Float tmp21 = randLambda().Cast< Float >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(430)
							int tmp22 = this->_randomChoices->__get(j).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(430)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(430)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(430)
							int k = tmp24;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(431)
							int tmp25 = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(431)
							new_index = tmp25;
						}
						HX_STACK_LINE(433)
						(j)++;
					}
				}
				HX_STACK_LINE(435)
				int tmp17 = new_index;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(435)
				this->_data[i] = tmp17;
				HX_STACK_LINE(436)
				(i)++;
			}
		}
		HX_STACK_LINE(441)
		::flixel::util::loaders::CachedGraphics tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(441)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp10 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(441)
			Dynamic tmp11 = TileGraphic;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(441)
			bool tmp12 = Unique;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(441)
			tmp9 = tmp10->__Field(HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"), hx::paccDynamic )(tmp11,(int)0,(int)0,(int)1,(int)1,tmp12,null());
		}
		HX_STACK_LINE(441)
		this->set_cachedGraphics(tmp9);
		HX_STACK_LINE(442)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(444)
		int tmp10 = this->_tileWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(444)
		bool tmp11 = (tmp10 <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(444)
		if ((tmp11)){
			HX_STACK_LINE(446)
			::flixel::util::loaders::CachedGraphics tmp12 = this->cachedGraphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(446)
			int tmp13 = tmp12->bitmap->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(446)
			this->_tileWidth = tmp13;
		}
		HX_STACK_LINE(449)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(451)
		int tmp12 = this->_tileHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(451)
		bool tmp13 = (tmp12 <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(451)
		if ((tmp13)){
			HX_STACK_LINE(453)
			int tmp14 = this->_tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(453)
			this->_tileHeight = tmp14;
		}
		HX_STACK_LINE(456)
		Dynamic tmp14 = TileGraphic;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(456)
		bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(456)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(456)
		if ((tmp16)){
			HX_STACK_LINE(458)
			int tmp17 = this->_tileWidth;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(458)
			int tmp18 = this->_tileHeight;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(458)
			::flixel::_system::layer::Region tmp19 = ::flixel::_system::layer::Region_obj::__new((int)0,(int)0,tmp17,tmp18,null(),null(),null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(458)
			this->region = tmp19;
			HX_STACK_LINE(459)
			::flixel::util::loaders::CachedGraphics tmp20 = this->cachedGraphics;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(459)
			int tmp21 = tmp20->bitmap->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(459)
			int tmp22 = this->_tileWidth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(459)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(459)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(459)
			int tmp25 = this->_tileWidth;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(459)
			int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(459)
			::flixel::_system::layer::Region tmp27 = this->region;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(459)
			tmp27->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp26;
			HX_STACK_LINE(460)
			::flixel::util::loaders::CachedGraphics tmp28 = this->cachedGraphics;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(460)
			int tmp29 = tmp28->bitmap->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(460)
			int tmp30 = this->_tileHeight;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(460)
			Float tmp31 = (Float(tmp29) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(460)
			int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(460)
			int tmp33 = this->_tileHeight;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(460)
			int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(460)
			::flixel::_system::layer::Region tmp35 = this->region;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(460)
			tmp35->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp34;
		}
		else{
			HX_STACK_LINE(464)
			::flixel::util::loaders::TextureRegion spriteRegion = ((::flixel::util::loaders::TextureRegion)(TileGraphic));		HX_STACK_VAR(spriteRegion,"spriteRegion");
			HX_STACK_LINE(465)
			::flixel::_system::layer::Region tmp17 = spriteRegion->region->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(465)
			this->region = tmp17;
			HX_STACK_LINE(466)
			::flixel::_system::layer::Region tmp18 = this->region;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(466)
			int tmp19 = tmp18->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(466)
			if ((tmp20)){
				HX_STACK_LINE(468)
				::flixel::_system::layer::Region tmp21 = this->region;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(468)
				this->_tileWidth = tmp21->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(472)
				int tmp21 = this->_tileWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(472)
				::flixel::_system::layer::Region tmp22 = this->region;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(472)
				tmp22->__FieldRef(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")) = tmp21;
			}
			HX_STACK_LINE(475)
			::flixel::_system::layer::Region tmp21 = this->region;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(475)
			int tmp22 = tmp21->__Field(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(475)
			bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(475)
			if ((tmp23)){
				HX_STACK_LINE(477)
				::flixel::_system::layer::Region tmp24 = this->region;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(477)
				this->_tileHeight = tmp24->__Field(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(481)
				int tmp24 = this->_tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(481)
				::flixel::_system::layer::Region tmp25 = this->region;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(481)
				tmp25->__FieldRef(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")) = tmp24;
			}
		}
		HX_STACK_LINE(486)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(488)
		::flixel::_system::layer::Region tmp17 = this->region;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(488)
		int tmp18 = tmp17->__Field(HX_HCSTRING("get_numTiles","\x68","\xc5","\x5e","\x82"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(488)
		int length = tmp18;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(489)
		int tmp19 = this->_startingIndex;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(489)
		hx::AddEq(length,tmp19);
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(491)
			while((true)){
				HX_STACK_LINE(491)
				bool tmp20 = (_g < length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(491)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(491)
				if ((tmp21)){
					HX_STACK_LINE(491)
					break;
				}
				HX_STACK_LINE(491)
				int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(491)
				int i1 = tmp22;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(493)
				int tmp23 = i1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(493)
				int tmp24 = this->_tileWidth;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(493)
				int tmp25 = this->_tileHeight;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(493)
				bool tmp26 = (i1 >= DrawIndex);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(493)
				bool tmp27 = (i1 >= CollideIndex);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(493)
				int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(493)
				if ((tmp27)){
					HX_STACK_LINE(493)
					tmp28 = this->allowCollisions;
				}
				else{
					HX_STACK_LINE(493)
					tmp28 = (int)0;
				}
				HX_STACK_LINE(493)
				::flixel::tile::FlxTile tmp29 = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp23,tmp24,tmp25,tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(493)
				this->_tileObjects[i1] = tmp29;
			}
		}
		HX_STACK_LINE(503)
		int tmp20 = this->_tileWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(503)
		::flixel::util::FlxPoint tmp21 = this->scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(503)
		Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(503)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(503)
		this->_scaledTileWidth = tmp23;
		HX_STACK_LINE(504)
		int tmp24 = this->_tileHeight;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(504)
		::flixel::util::FlxPoint tmp25 = this->scale;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(504)
		Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(504)
		Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(504)
		this->_scaledTileHeight = tmp27;
		HX_STACK_LINE(507)
		int tmp28 = this->widthInTiles;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(507)
		Float tmp29 = this->_scaledTileWidth;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(507)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(507)
		this->set_width(tmp30);
		HX_STACK_LINE(508)
		int tmp31 = this->heightInTiles;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(508)
		Float tmp32 = this->_scaledTileHeight;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(508)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(508)
		this->set_height(tmp33);
		HX_STACK_LINE(524)
		this->updateFrameData();
		HX_STACK_LINE(527)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setCustomTileMappings",0x2422e242,"flixel.tile.FlxTilemap.setCustomTileMappings","flixel/tile/FlxTilemap.hx",540,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(541)
		this->customTileRemap = mappings;
		HX_STACK_LINE(542)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(543)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(544)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(547)
		bool tmp = (this->_randomIndices != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		if ((tmp)){
			HX_STACK_LINE(547)
			bool tmp2 = (this->_randomChoices == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(547)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(547)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(547)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(547)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(547)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(547)
			if ((tmp7)){
				HX_STACK_LINE(547)
				int tmp8 = this->_randomChoices->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(547)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(547)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(547)
				tmp1 = (tmp10 == (int)0);
			}
			else{
				HX_STACK_LINE(547)
				tmp1 = true;
			}
		}
		else{
			HX_STACK_LINE(547)
			tmp1 = false;
		}
		HX_STACK_LINE(547)
		if ((tmp1)){
			HX_STACK_LINE(549)
			HX_STACK_DO_THROW(HX_HCSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function.","\x58","\xd6","\x21","\x51"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setCustomTileMappings,(void))

Void FlxTilemap_obj::drawDebugOnCamera( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawDebugOnCamera",0x0d929baf,"flixel.tile.FlxTilemap.drawDebugOnCamera","flixel/tile/FlxTilemap.hx",555,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(557)
		::flixel::tile::FlxTilemapBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(558)
		::flixel::_system::frontEnds::CameraFrontEnd tmp = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(558)
		int tmp1 = tmp->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(558)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(560)
			while((true)){
				HX_STACK_LINE(560)
				bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(560)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(560)
				if ((tmp3)){
					HX_STACK_LINE(560)
					break;
				}
				HX_STACK_LINE(560)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(560)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(562)
				::flixel::_system::frontEnds::CameraFrontEnd tmp5 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(562)
				::flixel::FlxCamera tmp6 = tmp5->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(562)
				::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(562)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(562)
				if ((tmp8)){
					HX_STACK_LINE(564)
					::flixel::tile::FlxTilemapBuffer tmp9 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(564)
					buffer = tmp9;
					HX_STACK_LINE(565)
					break;
				}
			}
		}
		HX_STACK_LINE(569)
		bool tmp2 = (buffer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		if ((tmp2)){
			HX_STACK_LINE(571)
			return null();
		}
		HX_STACK_LINE(575)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(575)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(575)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(575)
		::flixel::util::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(575)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(575)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(575)
		Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(575)
		Float tmp10 = (tmp9 * (int)5);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(575)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(575)
		Float tmp12 = (Float(tmp11) / Float((int)5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(575)
		Float tmp13 = (tmp12 + ((Float)0.1));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(575)
		::openfl::_legacy::geom::Point tmp14 = this->_helperPoint;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(575)
		tmp14->x = tmp13;
		HX_STACK_LINE(576)
		Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(576)
		Float tmp16 = Camera->scroll->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(576)
		int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(576)
		::flixel::util::FlxPoint tmp18 = this->scrollFactor;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(576)
		Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(576)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(576)
		Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(576)
		Float tmp22 = (tmp21 * (int)5);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(576)
		int tmp23 = ::Math_obj::floor(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(576)
		Float tmp24 = (Float(tmp23) / Float((int)5));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(576)
		Float tmp25 = (tmp24 + ((Float)0.1));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(576)
		::openfl::_legacy::geom::Point tmp26 = this->_helperPoint;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(576)
		tmp26->y = tmp25;
		HX_STACK_LINE(578)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(579)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(580)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(581)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(585)
		::flixel::util::FlxPoint tmp27 = this->_point;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(585)
		Float tmp28 = Camera->scroll->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(585)
		::flixel::util::FlxPoint tmp29 = this->scrollFactor;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(585)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(585)
		Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(585)
		Float tmp32 = this->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(585)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(585)
		tmp27->set_x(tmp33);
		HX_STACK_LINE(586)
		::flixel::util::FlxPoint tmp34 = this->_point;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(586)
		Float tmp35 = Camera->scroll->y;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(586)
		::flixel::util::FlxPoint tmp36 = this->scrollFactor;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(586)
		Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(586)
		Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(586)
		Float tmp39 = this->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(586)
		Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(586)
		tmp34->set_y(tmp40);
		HX_STACK_LINE(587)
		::flixel::util::FlxPoint tmp41 = this->_point;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(587)
		Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(587)
		Float tmp43 = this->_scaledTileWidth;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(587)
		Float tmp44 = (Float(tmp42) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(587)
		int tmp45 = ::Math_obj::floor(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(587)
		int screenXInTiles = tmp45;		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(588)
		::flixel::util::FlxPoint tmp46 = this->_point;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(588)
		Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(588)
		Float tmp48 = this->_scaledTileHeight;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(588)
		Float tmp49 = (Float(tmp47) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(588)
		int tmp50 = ::Math_obj::floor(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(588)
		int screenYInTiles = tmp50;		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(589)
		int screenRows = buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(590)
		int screenColumns = buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(593)
		bool tmp51 = (screenXInTiles < (int)0);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(593)
		if ((tmp51)){
			HX_STACK_LINE(595)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(597)
		int tmp52 = screenXInTiles;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(597)
		int tmp53 = this->widthInTiles;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(597)
		int tmp54 = screenColumns;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(597)
		int tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(597)
		bool tmp56 = (tmp52 > tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(597)
		if ((tmp56)){
			HX_STACK_LINE(599)
			int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(599)
			int tmp58 = screenColumns;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(599)
			int tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(599)
			screenXInTiles = tmp59;
		}
		HX_STACK_LINE(601)
		bool tmp57 = (screenYInTiles < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(601)
		if ((tmp57)){
			HX_STACK_LINE(603)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(605)
		int tmp58 = screenYInTiles;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(605)
		int tmp59 = this->heightInTiles;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(605)
		int tmp60 = screenRows;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(605)
		int tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(605)
		bool tmp62 = (tmp58 > tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(605)
		if ((tmp62)){
			HX_STACK_LINE(607)
			int tmp63 = this->heightInTiles;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(607)
			int tmp64 = screenRows;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(607)
			int tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(607)
			screenYInTiles = tmp65;
		}
		HX_STACK_LINE(610)
		int tmp63 = screenYInTiles;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(610)
		int tmp64 = this->widthInTiles;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(610)
		int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(610)
		int tmp66 = screenXInTiles;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(610)
		int tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(610)
		int rowIndex = tmp67;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(611)
		::openfl::_legacy::geom::Point tmp68 = this->_flashPoint;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(611)
		tmp68->y = (int)0;
		HX_STACK_LINE(612)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(613)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(614)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(615)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(616)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(618)
		while((true)){
			HX_STACK_LINE(618)
			bool tmp69 = (row < screenRows);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(618)
			bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(618)
			if ((tmp70)){
				HX_STACK_LINE(618)
				break;
			}
			HX_STACK_LINE(620)
			columnIndex = rowIndex;
			HX_STACK_LINE(621)
			column = (int)0;
			HX_STACK_LINE(622)
			::openfl::_legacy::geom::Point tmp71 = this->_flashPoint;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(622)
			tmp71->x = (int)0;
			HX_STACK_LINE(624)
			while((true)){
				HX_STACK_LINE(624)
				bool tmp72 = (column < screenColumns);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(624)
				bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(624)
				if ((tmp73)){
					HX_STACK_LINE(624)
					break;
				}
				HX_STACK_LINE(626)
				int tmp74 = this->_rectIDs->__get(columnIndex);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(626)
				tileID = tmp74;
				HX_STACK_LINE(628)
				bool tmp75 = (tileID != (int)-1);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(628)
				if ((tmp75)){
					HX_STACK_LINE(630)
					::openfl::_legacy::geom::Point tmp76 = this->_helperPoint;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(630)
					Float tmp77 = tmp76->x;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(630)
					int tmp78 = columnIndex;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(630)
					int tmp79 = this->widthInTiles;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(630)
					int tmp80 = hx::Mod(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(630)
					Float tmp81 = this->_scaledTileWidth;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(630)
					Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(630)
					Float tmp83 = (tmp77 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(630)
					drawX = tmp83;
					HX_STACK_LINE(631)
					::openfl::_legacy::geom::Point tmp84 = this->_helperPoint;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(631)
					Float tmp85 = tmp84->y;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(631)
					int tmp86 = columnIndex;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(631)
					int tmp87 = this->widthInTiles;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(631)
					Float tmp88 = (Float(tmp86) / Float(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(631)
					int tmp89 = ::Math_obj::floor(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(631)
					Float tmp90 = this->_scaledTileHeight;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(631)
					Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(631)
					Float tmp92 = (tmp85 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(631)
					drawY = tmp92;
					HX_STACK_LINE(633)
					int tmp93 = this->_data->__get(columnIndex);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(633)
					::flixel::tile::FlxTile tmp94 = this->_tileObjects->__get(tmp93).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(633)
					tile = tmp94;
					HX_STACK_LINE(635)
					bool tmp95 = (tile != null());		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(635)
					if ((tmp95)){
						HX_STACK_LINE(637)
						bool tmp96 = (tile->allowCollisions <= (int)0);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(637)
						if ((tmp96)){
							HX_STACK_LINE(639)
							debugColor = (int)-16776961;
						}
						else{
							HX_STACK_LINE(641)
							bool tmp97 = (tile->allowCollisions != (int)4369);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(641)
							if ((tmp97)){
								HX_STACK_LINE(643)
								debugColor = (int)-16181;
							}
							else{
								HX_STACK_LINE(647)
								debugColor = (int)-16744448;
							}
						}
						HX_STACK_LINE(651)
						::openfl::_legacy::display::Graphics tmp97 = Camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(651)
						::openfl::_legacy::display::Graphics gfx = tmp97;		HX_STACK_VAR(gfx,"gfx");
						HX_STACK_LINE(652)
						int tmp98 = debugColor;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(652)
						gfx->lineStyle((int)1,tmp98,((Float)0.5),null(),null(),null(),null(),null());
						HX_STACK_LINE(653)
						Float tmp99 = drawX;		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(653)
						Float tmp100 = drawY;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(653)
						Float tmp101 = this->_scaledTileWidth;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(653)
						Float tmp102 = this->_scaledTileHeight;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(653)
						gfx->drawRect(tmp99,tmp100,tmp101,tmp102);
					}
				}
				HX_STACK_LINE(657)
				Float tmp76 = this->_scaledTileWidth;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(657)
				::openfl::_legacy::geom::Point tmp77 = this->_flashPoint;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(657)
				hx::AddEq(tmp77->x,tmp76);
				HX_STACK_LINE(658)
				(column)++;
				HX_STACK_LINE(659)
				(columnIndex)++;
			}
			HX_STACK_LINE(662)
			int tmp72 = this->widthInTiles;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(662)
			hx::AddEq(rowIndex,tmp72);
			HX_STACK_LINE(663)
			Float tmp73 = this->_scaledTileHeight;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(663)
			::openfl::_legacy::geom::Point tmp74 = this->_flashPoint;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(663)
			hx::AddEq(tmp74->y,tmp73);
			HX_STACK_LINE(664)
			(row)++;
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",674,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		Array< ::Dynamic > cameras = this->get_cameras();		HX_STACK_VAR(cameras,"cameras");
		HX_STACK_LINE(676)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(677)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(678)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(679)
		int l = cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(681)
		while((true)){
			HX_STACK_LINE(681)
			bool tmp = (i < l);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(681)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(681)
			if ((tmp1)){
				HX_STACK_LINE(681)
				break;
			}
			HX_STACK_LINE(683)
			::flixel::FlxCamera tmp2 = cameras->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(683)
			camera = tmp2;
			HX_STACK_LINE(685)
			bool tmp3 = camera->visible;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(685)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(685)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(685)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(685)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(685)
			if ((tmp6)){
				HX_STACK_LINE(685)
				bool tmp8 = camera->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(685)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(685)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(685)
				tmp7 = true;
			}
			HX_STACK_LINE(685)
			if ((tmp7)){
				HX_STACK_LINE(687)
				continue;
			}
			HX_STACK_LINE(690)
			::flixel::tile::FlxTilemapBuffer tmp8 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(690)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(690)
			if ((tmp9)){
				HX_STACK_LINE(692)
				::flixel::tile::FlxTilemapBuffer tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(692)
				{
					HX_STACK_LINE(692)
					int tmp11 = this->_tileWidth;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(692)
					int tmp12 = this->_tileHeight;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(692)
					int tmp13 = this->widthInTiles;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(692)
					int tmp14 = this->heightInTiles;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(692)
					::flixel::FlxCamera tmp15 = camera;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(692)
					::flixel::util::FlxPoint tmp16 = this->scale;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(692)
					Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(692)
					::flixel::util::FlxPoint tmp18 = this->scale;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(692)
					Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(692)
					::flixel::tile::FlxTilemapBuffer tmp20 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp11,tmp12,tmp13,tmp14,tmp15,tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(692)
					::flixel::tile::FlxTilemapBuffer buffer1 = tmp20;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(692)
					bool tmp21 = this->pixelPerfectRender;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(692)
					buffer1->pixelPerfectRender = tmp21;
					HX_STACK_LINE(692)
					tmp10 = buffer1;
				}
				HX_STACK_LINE(692)
				this->_buffers[i] = tmp10;
			}
			HX_STACK_LINE(695)
			int tmp10 = (i)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(695)
			::flixel::tile::FlxTilemapBuffer tmp11 = this->_buffers->__get(tmp10).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(695)
			buffer = tmp11;
			HX_STACK_LINE(696)
			buffer->dirty = true;
			HX_STACK_LINE(717)
			::flixel::tile::FlxTilemapBuffer tmp12 = buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(717)
			::flixel::FlxCamera tmp13 = camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(717)
			this->drawTilemap(tmp12,tmp13);
			HX_STACK_LINE(721)
			(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
		HX_STACK_LINE(726)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(726)
		bool tmp1 = tmp->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(726)
		if ((tmp1)){
			HX_STACK_LINE(727)
			this->drawDebug();
		}
	}
return null();
}


Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getData",0x9852969c,"flixel.tile.FlxTilemap.getData","flixel/tile/FlxTilemap.hx",738,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(739)
		bool tmp = Simple;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(739)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(739)
		if ((tmp1)){
			HX_STACK_LINE(741)
			return this->_data;
		}
		HX_STACK_LINE(744)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(745)
		int tmp2 = this->_data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(745)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(746)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(747)
		int tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(747)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,tmp3);
		HX_STACK_LINE(749)
		while((true)){
			HX_STACK_LINE(749)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(749)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(749)
			if ((tmp5)){
				HX_STACK_LINE(749)
				break;
			}
			HX_STACK_LINE(751)
			int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(751)
			::flixel::tile::FlxTile tmp7 = this->_tileObjects->__get(tmp6).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(751)
			int tmp8 = tmp7->allowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(751)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(751)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(751)
			if ((tmp9)){
				HX_STACK_LINE(751)
				tmp10 = (int)1;
			}
			else{
				HX_STACK_LINE(751)
				tmp10 = (int)0;
			}
			HX_STACK_LINE(751)
			data[i] = tmp10;
			HX_STACK_LINE(752)
			(i)++;
		}
		HX_STACK_LINE(755)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",766,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(766)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(766)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(766)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(766)
			if ((tmp1)){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(766)
			::flixel::tile::FlxTilemapBuffer tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(766)
			::flixel::tile::FlxTilemapBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(766)
			++(_g);
			HX_STACK_LINE(768)
			buffer->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< ::Dynamic > FlxTilemap_obj::findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","findPath",0x18780642,"flixel.tile.FlxTilemap.findPath","flixel/tile/FlxTilemap.hx",784,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
{
		HX_STACK_LINE(786)
		Float tmp = Start->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(786)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(786)
		Float tmp3 = this->_scaledTileHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(786)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(786)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(786)
		int tmp6 = this->widthInTiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(786)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(786)
		Float tmp8 = Start->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(786)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(786)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(786)
		Float tmp11 = this->_scaledTileWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(786)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(786)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(786)
		int tmp14 = (tmp7 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(786)
		int startIndex = tmp14;		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(787)
		Float tmp15 = End->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(787)
		Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(787)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(787)
		Float tmp18 = this->_scaledTileHeight;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(787)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(787)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(787)
		int tmp21 = this->widthInTiles;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(787)
		int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(787)
		Float tmp23 = End->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(787)
		Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(787)
		Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(787)
		Float tmp26 = this->_scaledTileWidth;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(787)
		Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(787)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(787)
		int tmp29 = (tmp22 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(787)
		int endIndex = tmp29;		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(790)
		int tmp30 = this->_data->__get(startIndex);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(790)
		::flixel::tile::FlxTile tmp31 = this->_tileObjects->__get(tmp30).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(790)
		int tmp32 = tmp31->allowCollisions;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(790)
		bool tmp33 = (tmp32 > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(790)
		bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(790)
		bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(790)
		if ((tmp34)){
			HX_STACK_LINE(790)
			int tmp36 = this->_data->__get(endIndex);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(790)
			int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(790)
			::flixel::tile::FlxTile tmp38 = this->_tileObjects->__get(tmp37).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(790)
			::flixel::tile::FlxTile tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(790)
			int tmp40 = tmp39->allowCollisions;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(790)
			tmp35 = (tmp40 > (int)0);
		}
		else{
			HX_STACK_LINE(790)
			tmp35 = true;
		}
		HX_STACK_LINE(790)
		if ((tmp35)){
			HX_STACK_LINE(792)
			return null();
		}
		HX_STACK_LINE(796)
		int tmp36 = startIndex;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(796)
		int tmp37 = endIndex;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(796)
		bool tmp38 = WideDiagonal;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(796)
		Array< int > distances = this->computePathDistance(tmp36,tmp37,tmp38,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(798)
		bool tmp39 = (distances == null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(798)
		if ((tmp39)){
			HX_STACK_LINE(800)
			return null();
		}
		HX_STACK_LINE(804)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(805)
		int tmp40 = endIndex;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(805)
		this->walkPath(distances,tmp40,points);
		HX_STACK_LINE(808)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(809)
		int tmp41 = (points->length - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(809)
		::flixel::util::FlxPoint tmp42 = points->__get(tmp41).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(809)
		node = tmp42;
		HX_STACK_LINE(810)
		Float tmp43 = Start->x;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(810)
		node->set_x(tmp43);
		HX_STACK_LINE(811)
		Float tmp44 = Start->y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(811)
		node->set_y(tmp44);
		HX_STACK_LINE(812)
		::flixel::util::FlxPoint tmp45 = points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(812)
		node = tmp45;
		HX_STACK_LINE(813)
		Float tmp46 = End->x;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(813)
		node->set_x(tmp46);
		HX_STACK_LINE(814)
		Float tmp47 = End->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(814)
		node->set_y(tmp47);
		HX_STACK_LINE(817)
		bool tmp48 = Simplify;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(817)
		if ((tmp48)){
			HX_STACK_LINE(819)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(821)
		bool tmp49 = RaySimplify;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(821)
		if ((tmp49)){
			HX_STACK_LINE(823)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(827)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(828)
		int tmp50 = (points->length - (int)1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(828)
		int i = tmp50;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(830)
		while((true)){
			HX_STACK_LINE(830)
			bool tmp51 = (i >= (int)0);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(830)
			bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(830)
			if ((tmp52)){
				HX_STACK_LINE(830)
				break;
			}
			HX_STACK_LINE(832)
			int tmp53 = (i)--;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(832)
			::flixel::util::FlxPoint tmp54 = points->__get(tmp53).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(832)
			node = tmp54;
			HX_STACK_LINE(834)
			bool tmp55 = (node != null());		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(834)
			if ((tmp55)){
				HX_STACK_LINE(836)
				::flixel::util::FlxPoint tmp56 = node;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(836)
				path->push(tmp56);
			}
		}
		HX_STACK_LINE(840)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

bool FlxTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlaps",0xc0bce6d0,"flixel.tile.FlxTilemap.overlaps","flixel/tile/FlxTilemap.hx",854,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(855)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(855)
			bool tmp1 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(855)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(855)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(855)
			if ((tmp2)){
				HX_STACK_LINE(855)
				tmp3 = (ObjectOrGroup->collisionType == (int)2);
			}
			else{
				HX_STACK_LINE(855)
				tmp3 = true;
			}
			HX_STACK_LINE(855)
			if ((tmp3)){
				HX_STACK_LINE(855)
				bool tmp4 = (ObjectOrGroup->collisionType == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(855)
				if ((tmp4)){
					HX_STACK_LINE(855)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(855)
					bool tmp5 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(855)
					if ((tmp5)){
						HX_STACK_LINE(855)
						::flixel::group::FlxSpriteGroup tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(855)
						tmp6 = hx::TCast< ::flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup);
						HX_STACK_LINE(855)
						group = tmp6->group;
					}
				}
			}
			HX_STACK_LINE(855)
			tmp = group;
		}
		HX_STACK_LINE(855)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(856)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(856)
		if ((tmp1)){
			HX_STACK_LINE(858)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				Dynamic tmp3 = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(858)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(858)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(858)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(858)
				if ((tmp4)){
					HX_STACK_LINE(858)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(858)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(858)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(858)
					while((true)){
						HX_STACK_LINE(858)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(858)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(858)
						if ((tmp6)){
							HX_STACK_LINE(858)
							break;
						}
						HX_STACK_LINE(858)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(858)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(858)
						basic = tmp8;
						HX_STACK_LINE(858)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(858)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(858)
						if ((tmp9)){
							HX_STACK_LINE(858)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(858)
							bool tmp12 = InScreenSpace;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(858)
							::flixel::FlxCamera tmp13 = Camera;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(858)
							::flixel::FlxBasic tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(858)
							bool tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(858)
							::flixel::FlxCamera tmp16 = tmp13;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(858)
							tmp10 = Callback(tmp14,(int)0,(int)0,tmp15,tmp16).Cast< bool >();
						}
						else{
							HX_STACK_LINE(858)
							tmp10 = false;
						}
						HX_STACK_LINE(858)
						if ((tmp10)){
							HX_STACK_LINE(858)
							result = true;
							HX_STACK_LINE(858)
							break;
						}
					}
				}
				HX_STACK_LINE(858)
				tmp2 = result;
			}
			HX_STACK_LINE(858)
			return tmp2;
		}
		else{
			HX_STACK_LINE(860)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(860)
			{
				HX_STACK_LINE(860)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(860)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(860)
				bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
				HX_STACK_LINE(860)
				bool tmp3 = (ObjectOrGroup->collisionType == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(860)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(860)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(860)
				if ((tmp4)){
					HX_STACK_LINE(860)
					tmp5 = (ObjectOrGroup->collisionType == (int)3);
				}
				else{
					HX_STACK_LINE(860)
					tmp5 = true;
				}
				HX_STACK_LINE(860)
				if ((tmp5)){
					HX_STACK_LINE(860)
					::flixel::FlxObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(860)
					tmp6 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
					HX_STACK_LINE(860)
					tmp2 = this->overlapsWithCallback(tmp6,null(),null(),null());
				}
				else{
					HX_STACK_LINE(860)
					::flixel::FlxBasic tmp6 = ObjectOrGroup;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(860)
					bool tmp7 = InScreenSpace1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(860)
					tmp2 = this->overlaps(tmp6,tmp7,null());
				}
			}
			HX_STACK_LINE(860)
			if ((tmp2)){
				HX_STACK_LINE(862)
				return true;
			}
		}
		HX_STACK_LINE(864)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsCallback",0x199365fb,"flixel.tile.FlxTilemap.tilemapOverlapsCallback","flixel/tile/FlxTilemap.hx",868,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(869)
		bool tmp = (ObjectOrGroup->collisionType == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(869)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(869)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(869)
		if ((tmp1)){
			HX_STACK_LINE(870)
			tmp2 = (ObjectOrGroup->collisionType == (int)3);
		}
		else{
			HX_STACK_LINE(869)
			tmp2 = true;
		}
		HX_STACK_LINE(869)
		if ((tmp2)){
			HX_STACK_LINE(872)
			::flixel::FlxObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(872)
			tmp3 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(872)
			bool tmp4 = this->overlapsWithCallback(tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(872)
			return tmp4;
		}
		else{
			HX_STACK_LINE(876)
			::flixel::FlxBasic tmp3 = ObjectOrGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(876)
			bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(876)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(876)
			bool tmp6 = this->overlaps(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(876)
			return tmp6;
		}
		HX_STACK_LINE(869)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsAt",0x16e073e3,"flixel.tile.FlxTilemap.overlapsAt","flixel/tile/FlxTilemap.hx",893,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(894)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(894)
		{
			HX_STACK_LINE(894)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(894)
			bool tmp1 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(894)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(894)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(894)
			if ((tmp2)){
				HX_STACK_LINE(894)
				tmp3 = (ObjectOrGroup->collisionType == (int)2);
			}
			else{
				HX_STACK_LINE(894)
				tmp3 = true;
			}
			HX_STACK_LINE(894)
			if ((tmp3)){
				HX_STACK_LINE(894)
				bool tmp4 = (ObjectOrGroup->collisionType == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(894)
				if ((tmp4)){
					HX_STACK_LINE(894)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(894)
					bool tmp5 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(894)
					if ((tmp5)){
						HX_STACK_LINE(894)
						::flixel::group::FlxSpriteGroup tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(894)
						tmp6 = hx::TCast< ::flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup);
						HX_STACK_LINE(894)
						group = tmp6->group;
					}
				}
			}
			HX_STACK_LINE(894)
			tmp = group;
		}
		HX_STACK_LINE(894)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(895)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		if ((tmp1)){
			HX_STACK_LINE(897)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(897)
			{
				HX_STACK_LINE(897)
				Dynamic tmp3 = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(897)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(897)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(897)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(897)
				if ((tmp4)){
					HX_STACK_LINE(897)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(897)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(897)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(897)
					while((true)){
						HX_STACK_LINE(897)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(897)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(897)
						if ((tmp6)){
							HX_STACK_LINE(897)
							break;
						}
						HX_STACK_LINE(897)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(897)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(897)
						basic = tmp8;
						HX_STACK_LINE(897)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(897)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(897)
						if ((tmp9)){
							HX_STACK_LINE(897)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(897)
							Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(897)
							Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(897)
							bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(897)
							::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(897)
							::flixel::FlxBasic tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(897)
							Float tmp17 = tmp12;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(897)
							Float tmp18 = tmp13;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(897)
							bool tmp19 = tmp14;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(897)
							::flixel::FlxCamera tmp20 = tmp15;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(897)
							tmp10 = Callback(tmp16,tmp17,tmp18,tmp19,tmp20).Cast< bool >();
						}
						else{
							HX_STACK_LINE(897)
							tmp10 = false;
						}
						HX_STACK_LINE(897)
						if ((tmp10)){
							HX_STACK_LINE(897)
							result = true;
							HX_STACK_LINE(897)
							break;
						}
					}
				}
				HX_STACK_LINE(897)
				tmp2 = result;
			}
			HX_STACK_LINE(897)
			return tmp2;
		}
		else{
			HX_STACK_LINE(899)
			bool tmp2 = (ObjectOrGroup->collisionType == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(899)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(899)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(899)
			if ((tmp3)){
				HX_STACK_LINE(899)
				tmp4 = (ObjectOrGroup->collisionType == (int)3);
			}
			else{
				HX_STACK_LINE(899)
				tmp4 = true;
			}
			HX_STACK_LINE(899)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(899)
			if ((tmp4)){
				HX_STACK_LINE(899)
				::flixel::FlxObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(899)
				tmp6 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
				HX_STACK_LINE(899)
				::flixel::util::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(899)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(899)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(899)
				::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(899)
				tmp5 = this->overlapsWithCallback(tmp6,null(),false,tmp10);
			}
			else{
				HX_STACK_LINE(899)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(899)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(899)
				::flixel::FlxBasic tmp8 = ObjectOrGroup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(899)
				bool tmp9 = InScreenSpace;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(899)
				::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(899)
				tmp5 = this->overlapsAt(tmp6,tmp7,tmp8,tmp9,tmp10);
			}
			HX_STACK_LINE(899)
			if ((tmp5)){
				HX_STACK_LINE(901)
				return true;
			}
		}
		HX_STACK_LINE(904)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsAtCallback",0xbad41b8e,"flixel.tile.FlxTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxTilemap.hx",908,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(909)
	bool tmp = (ObjectOrGroup->collisionType == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(909)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(909)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(909)
	if ((tmp1)){
		HX_STACK_LINE(910)
		tmp2 = (ObjectOrGroup->collisionType == (int)3);
	}
	else{
		HX_STACK_LINE(909)
		tmp2 = true;
	}
	HX_STACK_LINE(909)
	if ((tmp2)){
		HX_STACK_LINE(912)
		::flixel::FlxObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(912)
		tmp3 = hx::TCast< ::flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(912)
		::flixel::util::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(912)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(912)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(912)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(912)
		bool tmp8 = this->overlapsWithCallback(tmp3,null(),false,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(912)
		return tmp8;
	}
	else{
		HX_STACK_LINE(916)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(916)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(916)
		::flixel::FlxBasic tmp5 = ObjectOrGroup;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(916)
		bool tmp6 = InScreenSpace;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(916)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(916)
		bool tmp8 = this->overlapsAt(tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(916)
		return tmp8;
	}
	HX_STACK_LINE(909)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",932,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(933)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(935)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(935)
		Float X = tmp;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(936)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(936)
		Float Y = tmp1;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(938)
		bool tmp2 = (Position != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(938)
		if ((tmp2)){
			HX_STACK_LINE(940)
			X = Position->x;
			HX_STACK_LINE(941)
			Y = Position->y;
		}
		HX_STACK_LINE(945)
		Float tmp3 = (Object->x - X);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(945)
		Float tmp4 = this->_scaledTileWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(945)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(945)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(945)
		int selectionX = tmp6;		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(946)
		Float tmp7 = (Object->y - Y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(946)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(946)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(946)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(946)
		int selectionY = tmp10;		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(947)
		int tmp11 = selectionX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(947)
		Float tmp12 = Object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(947)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(947)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(947)
		int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(947)
		int tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(947)
		int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(947)
		int selectionWidth = tmp17;		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(948)
		int tmp18 = selectionY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(948)
		Float tmp19 = Object->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(948)
		Float tmp20 = this->_scaledTileHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(948)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(948)
		int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(948)
		int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(948)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(948)
		int selectionHeight = tmp24;		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(951)
		Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(951)
		{
			HX_STACK_LINE(951)
			int tmp26 = this->widthInTiles;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(951)
			Float Max = tmp26;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(951)
			bool tmp27 = (selectionX < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(951)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(951)
			if ((tmp27)){
				HX_STACK_LINE(951)
				tmp28 = (int)0;
			}
			else{
				HX_STACK_LINE(951)
				tmp28 = selectionX;
			}
			HX_STACK_LINE(951)
			Float lowerBound = tmp28;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(951)
			bool tmp29 = (lowerBound > Max);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(951)
			if ((tmp29)){
				HX_STACK_LINE(951)
				tmp25 = Max;
			}
			else{
				HX_STACK_LINE(951)
				tmp25 = lowerBound;
			}
		}
		HX_STACK_LINE(951)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(951)
		selectionX = tmp26;
		HX_STACK_LINE(952)
		Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(952)
		{
			HX_STACK_LINE(952)
			int tmp28 = this->heightInTiles;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(952)
			Float Max = tmp28;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(952)
			bool tmp29 = (selectionY < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(952)
			Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(952)
			if ((tmp29)){
				HX_STACK_LINE(952)
				tmp30 = (int)0;
			}
			else{
				HX_STACK_LINE(952)
				tmp30 = selectionY;
			}
			HX_STACK_LINE(952)
			Float lowerBound = tmp30;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(952)
			bool tmp31 = (lowerBound > Max);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(952)
			if ((tmp31)){
				HX_STACK_LINE(952)
				tmp27 = Max;
			}
			else{
				HX_STACK_LINE(952)
				tmp27 = lowerBound;
			}
		}
		HX_STACK_LINE(952)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(952)
		selectionY = tmp28;
		HX_STACK_LINE(953)
		Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(953)
		{
			HX_STACK_LINE(953)
			int tmp30 = this->widthInTiles;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(953)
			Float Max = tmp30;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(953)
			bool tmp31 = (selectionWidth < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(953)
			Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(953)
			if ((tmp31)){
				HX_STACK_LINE(953)
				tmp32 = (int)0;
			}
			else{
				HX_STACK_LINE(953)
				tmp32 = selectionWidth;
			}
			HX_STACK_LINE(953)
			Float lowerBound = tmp32;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(953)
			bool tmp33 = (lowerBound > Max);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(953)
			if ((tmp33)){
				HX_STACK_LINE(953)
				tmp29 = Max;
			}
			else{
				HX_STACK_LINE(953)
				tmp29 = lowerBound;
			}
		}
		HX_STACK_LINE(953)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(953)
		selectionWidth = tmp30;
		HX_STACK_LINE(954)
		Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(954)
		{
			HX_STACK_LINE(954)
			int tmp32 = this->heightInTiles;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(954)
			Float Max = tmp32;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(954)
			bool tmp33 = (selectionHeight < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(954)
			Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(954)
			if ((tmp33)){
				HX_STACK_LINE(954)
				tmp34 = (int)0;
			}
			else{
				HX_STACK_LINE(954)
				tmp34 = selectionHeight;
			}
			HX_STACK_LINE(954)
			Float lowerBound = tmp34;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(954)
			bool tmp35 = (lowerBound > Max);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(954)
			if ((tmp35)){
				HX_STACK_LINE(954)
				tmp31 = Max;
			}
			else{
				HX_STACK_LINE(954)
				tmp31 = lowerBound;
			}
		}
		HX_STACK_LINE(954)
		int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(954)
		selectionHeight = tmp32;
		HX_STACK_LINE(957)
		int tmp33 = selectionY;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(957)
		int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(957)
		int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(957)
		int rowStart = tmp35;		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(958)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(959)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(960)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(961)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(962)
		Float tmp36 = X;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(962)
		::flixel::util::FlxPoint tmp37 = this->last;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(962)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(962)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(962)
		Float deltaX = tmp39;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(963)
		Float tmp40 = Y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(963)
		::flixel::util::FlxPoint tmp41 = this->last;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(963)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(963)
		Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(963)
		Float deltaY = tmp43;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(965)
		while((true)){
			HX_STACK_LINE(965)
			bool tmp44 = (row < selectionHeight);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(965)
			bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(965)
			if ((tmp45)){
				HX_STACK_LINE(965)
				break;
			}
			HX_STACK_LINE(967)
			column = selectionX;
			HX_STACK_LINE(969)
			while((true)){
				HX_STACK_LINE(969)
				bool tmp46 = (column < selectionWidth);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(969)
				bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(969)
				if ((tmp47)){
					HX_STACK_LINE(969)
					break;
				}
				HX_STACK_LINE(971)
				int tmp48 = (rowStart + column);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(971)
				int index = tmp48;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(972)
				bool tmp49 = (index < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(972)
				bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(972)
				bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(972)
				if ((tmp50)){
					HX_STACK_LINE(972)
					int tmp52 = index;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(972)
					int tmp53 = this->_data->length;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(972)
					int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(972)
					int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(972)
					int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(972)
					tmp51 = (tmp52 > tmp56);
				}
				else{
					HX_STACK_LINE(972)
					tmp51 = true;
				}
				HX_STACK_LINE(972)
				if ((tmp51)){
					HX_STACK_LINE(974)
					(column)++;
					HX_STACK_LINE(975)
					continue;
				}
				HX_STACK_LINE(978)
				int tmp52 = this->_data->__get(index);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(978)
				int dataIndex = tmp52;		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(979)
				bool tmp53 = (dataIndex < (int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(979)
				if ((tmp53)){
					HX_STACK_LINE(981)
					(column)++;
					HX_STACK_LINE(982)
					continue;
				}
				HX_STACK_LINE(985)
				::flixel::tile::FlxTile tmp54 = this->_tileObjects->__get(dataIndex).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(985)
				tile = tmp54;
				HX_STACK_LINE(986)
				Float tmp55 = this->_scaledTileWidth;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(986)
				tile->set_width(tmp55);
				HX_STACK_LINE(987)
				Float tmp56 = this->_scaledTileHeight;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(987)
				tile->set_height(tmp56);
				HX_STACK_LINE(988)
				Float tmp57 = X;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(988)
				int tmp58 = column;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(988)
				Float tmp59 = tile->get_width();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(988)
				Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(988)
				Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(988)
				tile->set_x(tmp61);
				HX_STACK_LINE(989)
				Float tmp62 = Y;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(989)
				int tmp63 = row;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(989)
				Float tmp64 = tile->get_height();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(989)
				Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(989)
				Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(989)
				tile->set_y(tmp66);
				HX_STACK_LINE(990)
				Float tmp67 = (tile->x - deltaX);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(990)
				tile->last->set_x(tmp67);
				HX_STACK_LINE(991)
				Float tmp68 = (tile->y - deltaY);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(991)
				tile->last->set_y(tmp68);
				HX_STACK_LINE(993)
				Float tmp69 = Object->x;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(993)
				Float tmp70 = Object->get_width();		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(993)
				Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(993)
				Float tmp72 = tile->x;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(993)
				bool tmp73 = (tmp71 > tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(993)
				bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(993)
				bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(993)
				if ((tmp74)){
					HX_STACK_LINE(993)
					Float tmp76 = Object->x;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(993)
					Float tmp77 = tile->x;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(993)
					Float tmp78 = tile->get_width();		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(993)
					Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(993)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(993)
					Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(993)
					Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(993)
					Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(993)
					tmp75 = (tmp76 < tmp83);
				}
				else{
					HX_STACK_LINE(993)
					tmp75 = false;
				}
				HX_STACK_LINE(993)
				bool tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(993)
				bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(993)
				if ((tmp76)){
					HX_STACK_LINE(994)
					Float tmp78 = Object->y;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(994)
					Float tmp79 = Object->get_height();		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(994)
					Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(994)
					Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(994)
					Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(994)
					Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(994)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(994)
					Float tmp85 = tile->y;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(994)
					tmp77 = (tmp84 > tmp85);
				}
				else{
					HX_STACK_LINE(993)
					tmp77 = false;
				}
				HX_STACK_LINE(993)
				bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(993)
				if ((tmp77)){
					HX_STACK_LINE(994)
					Float tmp79 = Object->y;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(994)
					Float tmp80 = tile->y;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(994)
					Float tmp81 = tile->get_height();		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(994)
					Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(994)
					Float tmp83 = (tmp80 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(994)
					Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(994)
					tmp78 = (tmp79 < tmp84);
				}
				else{
					HX_STACK_LINE(993)
					tmp78 = false;
				}
				HX_STACK_LINE(993)
				overlapFound = tmp78;
				HX_STACK_LINE(996)
				bool tmp79 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(996)
				if ((tmp79)){
					HX_STACK_LINE(998)
					bool tmp80 = (Callback != null());		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(998)
					if ((tmp80)){
						HX_STACK_LINE(1000)
						bool tmp81 = FlipCallbackParams;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(1000)
						if ((tmp81)){
							HX_STACK_LINE(1002)
							::flixel::FlxObject tmp82 = Object;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(1002)
							::flixel::tile::FlxTile tmp83 = tile;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1002)
							bool tmp84 = Callback(tmp82,tmp83).Cast< bool >();		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(1002)
							overlapFound = tmp84;
						}
						else{
							HX_STACK_LINE(1006)
							::flixel::tile::FlxTile tmp82 = tile;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(1006)
							::flixel::FlxObject tmp83 = Object;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1006)
							bool tmp84 = Callback(tmp82,tmp83).Cast< bool >();		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(1006)
							overlapFound = tmp84;
						}
					}
				}
				HX_STACK_LINE(1011)
				bool tmp80 = overlapFound;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1011)
				if ((tmp80)){
					HX_STACK_LINE(1013)
					bool tmp81 = (tile->callbackFunction != null());		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(1013)
					bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(1013)
					if ((tmp81)){
						HX_STACK_LINE(1013)
						bool tmp83 = (tile->filter == null());		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(1013)
						bool tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(1013)
						bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(1013)
						bool tmp86 = !(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(1013)
						bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(1013)
						bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(1013)
						if ((tmp88)){
							HX_STACK_LINE(1013)
							::flixel::FlxObject tmp89 = Object;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1013)
							::hx::Class tmp90 = tile->filter;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(1013)
							::flixel::FlxObject tmp91 = tmp89;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(1013)
							::hx::Class tmp92 = tmp90;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(1013)
							::flixel::FlxObject tmp93 = tmp91;		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(1013)
							::hx::Class tmp94 = tmp92;		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(1013)
							tmp82 = ::Std_obj::is(tmp93,tmp94);
						}
						else{
							HX_STACK_LINE(1013)
							tmp82 = true;
						}
					}
					else{
						HX_STACK_LINE(1013)
						tmp82 = false;
					}
					HX_STACK_LINE(1013)
					if ((tmp82)){
						HX_STACK_LINE(1015)
						int tmp83 = (rowStart + column);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(1015)
						tile->mapIndex = tmp83;
						HX_STACK_LINE(1016)
						::flixel::tile::FlxTile tmp84 = tile;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(1016)
						::flixel::FlxObject tmp85 = Object;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(1016)
						tile->callbackFunction(tmp84,tmp85);
					}
					HX_STACK_LINE(1019)
					bool tmp83 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1019)
					if ((tmp83)){
						HX_STACK_LINE(1021)
						results = true;
					}
				}
				HX_STACK_LINE(1025)
				(column)++;
			}
			HX_STACK_LINE(1028)
			int tmp46 = this->widthInTiles;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1028)
			hx::AddEq(rowStart,tmp46);
			HX_STACK_LINE(1029)
			(row)++;
		}
		HX_STACK_LINE(1032)
		bool tmp44 = results;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1032)
		return tmp44;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsPoint",0xaeb98b60,"flixel.tile.FlxTilemap.overlapsPoint","flixel/tile/FlxTilemap.hx",1044,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1045)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1045)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1045)
		if ((tmp1)){
			HX_STACK_LINE(1047)
			Float tmp2 = WorldPoint->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1047)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1047)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1047)
			Float tmp5 = this->_scaledTileHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1047)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1047)
			int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1047)
			int tmp8 = this->widthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1047)
			int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1047)
			Float tmp10 = WorldPoint->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1047)
			Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1047)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1047)
			Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1047)
			Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1047)
			Float tmp15 = (tmp9 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1047)
			int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1047)
			int tmp17 = this->_data->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1047)
			::flixel::tile::FlxTile tmp18 = this->_tileObjects->__get(tmp17).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1047)
			int tmp19 = tmp18->allowCollisions;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1047)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1047)
			return tmp20;
		}
		HX_STACK_LINE(1050)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1050)
		if ((tmp2)){
			HX_STACK_LINE(1052)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1052)
			Camera = tmp3;
		}
		HX_STACK_LINE(1055)
		Float tmp3 = WorldPoint->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1055)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1055)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1055)
		WorldPoint->set_x(tmp5);
		HX_STACK_LINE(1056)
		Float tmp6 = WorldPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1056)
		Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1056)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1056)
		WorldPoint->set_y(tmp8);
		HX_STACK_LINE(1057)
		::flixel::util::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1057)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1057)
		this->getScreenXY(tmp9,tmp10);
		HX_STACK_LINE(1059)
		Float tmp11 = (WorldPoint->y - WorldPoint->y);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1059)
		Float tmp12 = this->_scaledTileHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1059)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1059)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1059)
		int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1059)
		int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1059)
		Float tmp17 = (WorldPoint->x - WorldPoint->x);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1059)
		Float tmp18 = this->_scaledTileWidth;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1059)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1059)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1059)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1059)
		int tmp22 = this->_data->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1059)
		::flixel::tile::FlxTile tmp23 = this->_tileObjects->__get(tmp22).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1059)
		int tmp24 = tmp23->allowCollisions;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1059)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1059)
		bool result = tmp25;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1060)
		{
			HX_STACK_LINE(1060)
			bool tmp26 = WorldPoint->_weak;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1060)
			if ((tmp26)){
				HX_STACK_LINE(1060)
				WorldPoint->put();
			}
		}
		HX_STACK_LINE(1061)
		bool tmp26 = result;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1061)
		return tmp26;
	}
}


int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTile",0xa2ec0ba0,"flixel.tile.FlxTilemap.getTile","flixel/tile/FlxTilemap.hx",1072,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(1073)
	int tmp = Y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1073)
	int tmp1 = this->widthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1073)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1073)
	int tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1073)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1073)
	int tmp5 = this->_data->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1073)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileByIndex",0x27fbf9fb,"flixel.tile.FlxTilemap.getTileByIndex","flixel/tile/FlxTilemap.hx",1083,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1084)
	int tmp = this->_data->__get(Index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1084)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCollisions",0x0a549381,"flixel.tile.FlxTilemap.getTileCollisions","flixel/tile/FlxTilemap.hx",1094,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1095)
	::flixel::tile::FlxTile tmp = this->_tileObjects->__get(Index).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1095)
	int tmp1 = tmp->allowCollisions;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1095)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileCollisions,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileInstances",0xee32e37e,"flixel.tile.FlxTilemap.getTileInstances","flixel/tile/FlxTilemap.hx",1105,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1106)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1107)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1108)
	int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1108)
	int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1108)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1108)
	int l = tmp2;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1110)
	while((true)){
		HX_STACK_LINE(1110)
		bool tmp3 = (i < l);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1110)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1110)
		if ((tmp4)){
			HX_STACK_LINE(1110)
			break;
		}
		HX_STACK_LINE(1112)
		int tmp5 = this->_data->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1112)
		int tmp6 = Index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1112)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1112)
		if ((tmp7)){
			HX_STACK_LINE(1114)
			bool tmp8 = (array == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1114)
			if ((tmp8)){
				HX_STACK_LINE(1116)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1118)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1118)
			array->push(tmp9);
		}
		HX_STACK_LINE(1121)
		(i)++;
	}
	HX_STACK_LINE(1124)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",1135,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(1136)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1138)
		::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1139)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1140)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1140)
		int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1140)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1140)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1142)
		while((true)){
			HX_STACK_LINE(1142)
			bool tmp3 = (i < l);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1142)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1142)
			if ((tmp4)){
				HX_STACK_LINE(1142)
				break;
			}
			HX_STACK_LINE(1144)
			int tmp5 = this->_data->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1144)
			int tmp6 = Index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1144)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1144)
			if ((tmp7)){
				HX_STACK_LINE(1146)
				::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1146)
				{
					HX_STACK_LINE(1146)
					Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1146)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1146)
					int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1146)
					int tmp12 = hx::Mod(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1146)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1146)
					Float tmp14 = this->_scaledTileWidth;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1146)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1146)
					Float tmp16 = (tmp9 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1146)
					Float X = tmp16;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1146)
					Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1146)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1146)
					int tmp19 = this->widthInTiles;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1146)
					Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1146)
					int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1146)
					Float tmp22 = this->_scaledTileHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1146)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1146)
					Float tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1146)
					Float Y = tmp24;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1146)
					::flixel::util::FlxPool tmp25 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1146)
					::flixel::util::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1146)
					Float tmp27 = X;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1146)
					Float tmp28 = Y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1146)
					::flixel::util::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1146)
					::flixel::util::FlxPoint point1 = tmp29;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(1146)
					point1->_inPool = false;
					HX_STACK_LINE(1146)
					tmp8 = point1;
				}
				HX_STACK_LINE(1146)
				point = tmp8;
				HX_STACK_LINE(1148)
				bool tmp9 = Midpoint;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1148)
				if ((tmp9)){
					HX_STACK_LINE(1150)
					{
						HX_STACK_LINE(1150)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1150)
						Float tmp10 = _g->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1150)
						Float tmp11 = this->_scaledTileWidth;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1150)
						Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1150)
						Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1150)
						_g->set_x(tmp13);
					}
					HX_STACK_LINE(1151)
					{
						HX_STACK_LINE(1151)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1151)
						Float tmp10 = _g->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1151)
						Float tmp11 = this->_scaledTileHeight;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1151)
						Float tmp12 = (tmp11 * ((Float)0.5));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1151)
						Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1151)
						_g->set_y(tmp13);
					}
				}
				HX_STACK_LINE(1154)
				bool tmp10 = (array == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1154)
				if ((tmp10)){
					HX_STACK_LINE(1156)
					array = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1158)
				::flixel::util::FlxPoint tmp11 = point;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1158)
				array->push(tmp11);
			}
			HX_STACK_LINE(1161)
			(i)++;
		}
		HX_STACK_LINE(1164)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTile",0x95ed9cac,"flixel.tile.FlxTilemap.setTile","flixel/tile/FlxTilemap.hx",1177,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1178)
		int tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1178)
		int tmp1 = this->widthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1178)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1178)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1178)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1178)
		if ((tmp3)){
			HX_STACK_LINE(1178)
			int tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1178)
			int tmp6 = this->heightInTiles;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1178)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1178)
			tmp4 = (tmp5 >= tmp7);
		}
		else{
			HX_STACK_LINE(1178)
			tmp4 = true;
		}
		HX_STACK_LINE(1178)
		if ((tmp4)){
			HX_STACK_LINE(1180)
			return false;
		}
		HX_STACK_LINE(1183)
		int tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1183)
		int tmp6 = this->widthInTiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1183)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1183)
		int tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1183)
		int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1183)
		int tmp10 = Tile;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1183)
		bool tmp11 = UpdateGraphics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1183)
		bool tmp12 = this->setTileByIndex(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1183)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileByIndex",0x481be26f,"flixel.tile.FlxTilemap.setTileByIndex","flixel/tile/FlxTilemap.hx",1195,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1196)
		int tmp = Index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1196)
		int tmp1 = this->_data->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1196)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1196)
		if ((tmp2)){
			HX_STACK_LINE(1198)
			return false;
		}
		HX_STACK_LINE(1201)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1202)
		int tmp3 = Tile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1202)
		this->_data[Index] = tmp3;
		HX_STACK_LINE(1204)
		bool tmp4 = UpdateGraphics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1204)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1204)
		if ((tmp5)){
			HX_STACK_LINE(1206)
			bool tmp6 = ok;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1206)
			return tmp6;
		}
		HX_STACK_LINE(1209)
		this->setDirty(null());
		HX_STACK_LINE(1211)
		int tmp6 = this->_auto;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1211)
		bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1211)
		if ((tmp7)){
			HX_STACK_LINE(1213)
			int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1213)
			this->updateTile(tmp8);
			HX_STACK_LINE(1214)
			bool tmp9 = ok;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1214)
			return tmp9;
		}
		HX_STACK_LINE(1218)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1219)
		int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1219)
		int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1219)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1219)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1219)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1219)
		int row = tmp12;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1220)
		int tmp13 = (row + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1220)
		int rowLength = tmp13;		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1221)
		int tmp14 = Index;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1221)
		int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1221)
		int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1221)
		int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1221)
		int column = tmp17;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1222)
		int tmp18 = (column + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1222)
		int columnHeight = tmp18;		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1224)
		while((true)){
			HX_STACK_LINE(1224)
			bool tmp19 = (row < rowLength);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1224)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1224)
			if ((tmp20)){
				HX_STACK_LINE(1224)
				break;
			}
			HX_STACK_LINE(1226)
			int tmp21 = (columnHeight - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1226)
			column = tmp21;
			HX_STACK_LINE(1228)
			while((true)){
				HX_STACK_LINE(1228)
				bool tmp22 = (column < columnHeight);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1228)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1228)
				if ((tmp23)){
					HX_STACK_LINE(1228)
					break;
				}
				HX_STACK_LINE(1230)
				bool tmp24 = (row >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1230)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1230)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1230)
				if ((tmp25)){
					HX_STACK_LINE(1230)
					int tmp27 = row;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1230)
					int tmp28 = this->heightInTiles;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1230)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1230)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1230)
					tmp26 = (tmp27 < tmp30);
				}
				else{
					HX_STACK_LINE(1230)
					tmp26 = false;
				}
				HX_STACK_LINE(1230)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1230)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1230)
				if ((tmp27)){
					HX_STACK_LINE(1230)
					tmp28 = (column >= (int)0);
				}
				else{
					HX_STACK_LINE(1230)
					tmp28 = false;
				}
				HX_STACK_LINE(1230)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1230)
				if ((tmp28)){
					HX_STACK_LINE(1230)
					int tmp30 = column;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1230)
					int tmp31 = this->widthInTiles;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1230)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1230)
					tmp29 = (tmp30 < tmp32);
				}
				else{
					HX_STACK_LINE(1230)
					tmp29 = false;
				}
				HX_STACK_LINE(1230)
				if ((tmp29)){
					HX_STACK_LINE(1232)
					int tmp30 = row;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1232)
					int tmp31 = this->widthInTiles;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1232)
					int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1232)
					int tmp33 = column;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1232)
					int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1232)
					i = tmp34;
					HX_STACK_LINE(1233)
					int tmp35 = i;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1233)
					this->autoTile(tmp35);
					HX_STACK_LINE(1234)
					int tmp36 = i;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1234)
					this->updateTile(tmp36);
				}
				HX_STACK_LINE(1236)
				(column)++;
			}
			HX_STACK_LINE(1239)
			(row)++;
		}
		HX_STACK_LINE(1242)
		bool tmp19 = ok;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1242)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::hx::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileProperties",0x96b8abbf,"flixel.tile.FlxTilemap.setTileProperties","flixel/tile/FlxTilemap.hx",1256,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(1257)
		bool tmp = (Range <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1257)
		if ((tmp)){
			HX_STACK_LINE(1259)
			Range = (int)1;
		}
		HX_STACK_LINE(1262)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1263)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1264)
		int tmp1 = (Tile + Range);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1264)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1266)
		while((true)){
			HX_STACK_LINE(1266)
			bool tmp2 = (i < l);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1266)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1266)
			if ((tmp3)){
				HX_STACK_LINE(1266)
				break;
			}
			HX_STACK_LINE(1268)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1268)
			::flixel::tile::FlxTile tmp5 = this->_tileObjects->__get(tmp4).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1268)
			tile = tmp5;
			HX_STACK_LINE(1269)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1270)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1271)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",1283,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1284)
		bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1284)
		if ((tmp)){
			HX_STACK_LINE(1286)
			::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1286)
			Camera = tmp1;
		}
		HX_STACK_LINE(1289)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1289)
		int tmp2 = Border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1289)
		Float tmp3 = this->_scaledTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1289)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1289)
		Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1289)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1289)
		int tmp7 = Border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1289)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1289)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1289)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1289)
		Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1289)
		int tmp12 = Border;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1289)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1289)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1289)
		Float tmp15 = (tmp14 * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1289)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1289)
		Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1289)
		int tmp18 = Border;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1289)
		Float tmp19 = this->_scaledTileHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1289)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1289)
		Float tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1289)
		Float tmp22 = (tmp17 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1289)
		bool tmp23 = UpdateWorld;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1289)
		Camera->setBounds(tmp5,tmp10,tmp16,tmp22,tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::flixel::util::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getBounds",0x86b34767,"flixel.tile.FlxTilemap.getBounds","flixel/tile/FlxTilemap.hx",1299,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1300)
	bool tmp = (Bounds == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1300)
	if ((tmp)){
		HX_STACK_LINE(1302)
		::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1302)
		{
			HX_STACK_LINE(1302)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1302)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1302)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(1302)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(1302)
			::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1302)
			{
				HX_STACK_LINE(1302)
				::flixel::util::FlxPool tmp3 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1302)
				::flixel::util::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1302)
				::flixel::util::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1302)
				_this->x = X;
				HX_STACK_LINE(1302)
				_this->y = Y;
				HX_STACK_LINE(1302)
				_this->width = Width;
				HX_STACK_LINE(1302)
				_this->height = Height;
				HX_STACK_LINE(1302)
				tmp2 = _this;
			}
			HX_STACK_LINE(1302)
			::flixel::util::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1302)
			rect->_inPool = false;
			HX_STACK_LINE(1302)
			tmp1 = rect;
		}
		HX_STACK_LINE(1302)
		Bounds = tmp1;
	}
	HX_STACK_LINE(1305)
	::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1305)
	{
		HX_STACK_LINE(1305)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1305)
		Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1305)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1305)
		Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1305)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1305)
		Bounds->x = tmp4;
		HX_STACK_LINE(1305)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1305)
		Bounds->y = tmp5;
		HX_STACK_LINE(1305)
		Bounds->width = Width;
		HX_STACK_LINE(1305)
		Bounds->height = Height;
		HX_STACK_LINE(1305)
		tmp1 = Bounds;
	}
	HX_STACK_LINE(1305)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

bool FlxTilemap_obj::ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",1319,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(1320)
		Float tmp = this->_scaledTileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1320)
		Float step = tmp;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1322)
		Float tmp1 = this->_scaledTileHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1322)
		Float tmp2 = this->_scaledTileWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1322)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1322)
		if ((tmp3)){
			HX_STACK_LINE(1324)
			Float tmp4 = this->_scaledTileHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1324)
			step = tmp4;
		}
		HX_STACK_LINE(1327)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1328)
		Float tmp4 = (End->x - Start->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1328)
		Float deltaX = tmp4;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1329)
		Float tmp5 = (End->y - Start->y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1329)
		Float deltaY = tmp5;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1330)
		Float tmp6 = (deltaX * deltaX);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1330)
		Float tmp7 = (deltaY * deltaY);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1330)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1330)
		Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1330)
		Float distance = tmp9;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1331)
		Float tmp10 = (Float(distance) / Float(step));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1331)
		int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1331)
		int steps = tmp11;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1332)
		Float tmp12 = (Float(deltaX) / Float(steps));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1332)
		Float stepX = tmp12;		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1333)
		Float tmp13 = (Float(deltaY) / Float(steps));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1333)
		Float stepY = tmp13;		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1334)
		Float tmp14 = (Start->x - stepX);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1334)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1334)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1334)
		Float curX = tmp16;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1335)
		Float tmp17 = (Start->y - stepY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1335)
		Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1335)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1335)
		Float curY = tmp19;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1336)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1337)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1338)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			bool tmp20 = Start->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1340)
			if ((tmp20)){
				HX_STACK_LINE(1340)
				Start->put();
			}
		}
		HX_STACK_LINE(1341)
		{
			HX_STACK_LINE(1341)
			bool tmp20 = End->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1341)
			if ((tmp20)){
				HX_STACK_LINE(1341)
				End->put();
			}
		}
		HX_STACK_LINE(1343)
		while((true)){
			HX_STACK_LINE(1343)
			bool tmp20 = (i < steps);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1343)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1343)
			if ((tmp21)){
				HX_STACK_LINE(1343)
				break;
			}
			HX_STACK_LINE(1345)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1346)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1348)
			bool tmp22 = (curX < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1348)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1348)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1348)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1348)
			if ((tmp24)){
				HX_STACK_LINE(1348)
				Float tmp26 = curX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1348)
				Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1348)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1348)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1348)
				tmp25 = (tmp26 > tmp29);
			}
			else{
				HX_STACK_LINE(1348)
				tmp25 = true;
			}
			HX_STACK_LINE(1348)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1348)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1348)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1348)
			if ((tmp27)){
				HX_STACK_LINE(1348)
				tmp28 = (curY < (int)0);
			}
			else{
				HX_STACK_LINE(1348)
				tmp28 = true;
			}
			HX_STACK_LINE(1348)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1348)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1348)
			if ((tmp29)){
				HX_STACK_LINE(1348)
				Float tmp31 = curY;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1348)
				Float tmp32 = this->get_height();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1348)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1348)
				tmp30 = (tmp31 > tmp33);
			}
			else{
				HX_STACK_LINE(1348)
				tmp30 = true;
			}
			HX_STACK_LINE(1348)
			if ((tmp30)){
				HX_STACK_LINE(1350)
				(i)++;
				HX_STACK_LINE(1351)
				continue;
			}
			HX_STACK_LINE(1354)
			Float tmp31 = curX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1354)
			Float tmp32 = this->_scaledTileWidth;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1354)
			Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1354)
			int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1354)
			tileX = tmp34;
			HX_STACK_LINE(1355)
			Float tmp35 = curY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1355)
			Float tmp36 = this->_scaledTileHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1355)
			Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1355)
			int tmp38 = ::Math_obj::floor(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1355)
			tileY = tmp38;
			HX_STACK_LINE(1357)
			int tmp39 = tileY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1357)
			int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1357)
			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1357)
			int tmp42 = tileX;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1357)
			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1357)
			int tmp44 = this->_data->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1357)
			::flixel::tile::FlxTile tmp45 = this->_tileObjects->__get(tmp44).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1357)
			int tmp46 = tmp45->allowCollisions;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1357)
			bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1357)
			if ((tmp47)){
				HX_STACK_LINE(1360)
				Float tmp48 = this->_scaledTileWidth;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1360)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1360)
				hx::MultEq(tileX,tmp49);
				HX_STACK_LINE(1361)
				Float tmp50 = this->_scaledTileHeight;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1361)
				int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1361)
				hx::MultEq(tileY,tmp51);
				HX_STACK_LINE(1362)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1363)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1364)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1365)
				Float tmp52 = (curX - stepX);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1365)
				Float lx = tmp52;		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1366)
				Float tmp53 = (curY - stepY);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1366)
				Float ly = tmp53;		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1369)
				q = tileX;
				HX_STACK_LINE(1371)
				bool tmp54 = (deltaX < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1371)
				if ((tmp54)){
					HX_STACK_LINE(1373)
					Float tmp55 = this->_scaledTileWidth;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1373)
					hx::AddEq(q,tmp55);
				}
				HX_STACK_LINE(1376)
				rx = q;
				HX_STACK_LINE(1377)
				Float tmp55 = ly;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1377)
				Float tmp56 = stepY;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1377)
				Float tmp57 = (q - lx);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1377)
				Float tmp58 = stepX;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1377)
				Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1377)
				Float tmp60 = (tmp56 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1377)
				Float tmp61 = (tmp55 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1377)
				ry = tmp61;
				HX_STACK_LINE(1379)
				bool tmp62 = (ry > tileY);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1379)
				bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1379)
				if ((tmp62)){
					HX_STACK_LINE(1379)
					Float tmp64 = ry;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1379)
					int tmp65 = tileY;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(1379)
					Float tmp66 = this->_scaledTileHeight;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(1379)
					Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(1379)
					Float tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(1379)
					Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(1379)
					tmp63 = (tmp64 < tmp69);
				}
				else{
					HX_STACK_LINE(1379)
					tmp63 = false;
				}
				HX_STACK_LINE(1379)
				if ((tmp63)){
					HX_STACK_LINE(1381)
					bool tmp64 = (Result == null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1381)
					if ((tmp64)){
						HX_STACK_LINE(1383)
						::flixel::util::FlxPoint tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1383)
						{
							HX_STACK_LINE(1383)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(1383)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(1383)
							::flixel::util::FlxPool tmp66 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1383)
							::flixel::util::FlxPoint tmp67 = tmp66->get();		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1383)
							Float tmp68 = X;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1383)
							Float tmp69 = Y;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1383)
							::flixel::util::FlxPoint tmp70 = tmp67->set(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1383)
							::flixel::util::FlxPoint point = tmp70;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1383)
							point->_inPool = false;
							HX_STACK_LINE(1383)
							tmp65 = point;
						}
						HX_STACK_LINE(1383)
						Result = tmp65;
					}
					HX_STACK_LINE(1386)
					Float tmp65 = rx;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(1386)
					Result->set_x(tmp65);
					HX_STACK_LINE(1387)
					Float tmp66 = ry;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(1387)
					Result->set_y(tmp66);
					HX_STACK_LINE(1389)
					return false;
				}
				HX_STACK_LINE(1393)
				q = tileY;
				HX_STACK_LINE(1395)
				bool tmp64 = (deltaY < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1395)
				if ((tmp64)){
					HX_STACK_LINE(1397)
					Float tmp65 = this->_scaledTileHeight;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(1397)
					hx::AddEq(q,tmp65);
				}
				HX_STACK_LINE(1400)
				Float tmp65 = lx;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1400)
				Float tmp66 = stepX;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1400)
				Float tmp67 = (q - ly);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1400)
				Float tmp68 = stepY;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1400)
				Float tmp69 = (Float(tmp67) / Float(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1400)
				Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1400)
				Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1400)
				rx = tmp71;
				HX_STACK_LINE(1401)
				ry = q;
				HX_STACK_LINE(1403)
				bool tmp72 = (rx > tileX);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1403)
				bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1403)
				if ((tmp72)){
					HX_STACK_LINE(1403)
					Float tmp74 = rx;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1403)
					int tmp75 = tileX;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1403)
					Float tmp76 = this->_scaledTileWidth;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1403)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1403)
					Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1403)
					Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(1403)
					tmp73 = (tmp74 < tmp79);
				}
				else{
					HX_STACK_LINE(1403)
					tmp73 = false;
				}
				HX_STACK_LINE(1403)
				if ((tmp73)){
					HX_STACK_LINE(1405)
					bool tmp74 = (Result == null());		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1405)
					if ((tmp74)){
						HX_STACK_LINE(1407)
						::flixel::util::FlxPoint tmp75;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(1407)
						{
							HX_STACK_LINE(1407)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(1407)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(1407)
							::flixel::util::FlxPool tmp76 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1407)
							::flixel::util::FlxPoint tmp77 = tmp76->get();		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1407)
							Float tmp78 = X;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1407)
							Float tmp79 = Y;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1407)
							::flixel::util::FlxPoint tmp80 = tmp77->set(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1407)
							::flixel::util::FlxPoint point = tmp80;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1407)
							point->_inPool = false;
							HX_STACK_LINE(1407)
							tmp75 = point;
						}
						HX_STACK_LINE(1407)
						Result = tmp75;
					}
					HX_STACK_LINE(1410)
					Float tmp75 = rx;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1410)
					Result->set_x(tmp75);
					HX_STACK_LINE(1411)
					Float tmp76 = ry;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1411)
					Result->set_y(tmp76);
					HX_STACK_LINE(1413)
					return false;
				}
				HX_STACK_LINE(1416)
				return true;
			}
			HX_STACK_LINE(1419)
			(i)++;
		}
		HX_STACK_LINE(1422)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateFrameData",0x0334926a,"flixel.tile.FlxTilemap.updateFrameData","flixel/tile/FlxTilemap.hx",1430,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1431)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1431)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1431)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1431)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1431)
		if ((tmp2)){
			HX_STACK_LINE(1431)
			int tmp4 = this->_tileWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1431)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1431)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1431)
			tmp3 = (tmp6 >= (int)1);
		}
		else{
			HX_STACK_LINE(1431)
			tmp3 = false;
		}
		HX_STACK_LINE(1431)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1431)
		if ((tmp3)){
			HX_STACK_LINE(1431)
			int tmp5 = this->_tileHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1431)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1431)
			tmp4 = (tmp6 >= (int)1);
		}
		else{
			HX_STACK_LINE(1431)
			tmp4 = false;
		}
		HX_STACK_LINE(1431)
		if ((tmp4)){
			HX_STACK_LINE(1433)
			::flixel::util::loaders::CachedGraphics tmp5 = this->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1433)
			::flixel::_system::layer::TileSheetData tmp6 = tmp5->get_tilesheet();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1433)
			::flixel::_system::layer::Region tmp7 = this->region;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1433)
			::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1433)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp9 = tmp6->__Field(HX_HCSTRING("getSpriteSheetFrames","\x2a","\xde","\x48","\x46"), hx::paccDynamic )(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1433)
			this->framesData = tmp9;
			HX_STACK_LINE(1435)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(1436)
			int tmp10 = this->totalTiles;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1436)
			::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_rectIDs,tmp10);
			HX_STACK_LINE(1438)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1440)
			while((true)){
				HX_STACK_LINE(1440)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1440)
				int tmp12 = this->totalTiles;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1440)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1440)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1440)
				if ((tmp14)){
					HX_STACK_LINE(1440)
					break;
				}
				HX_STACK_LINE(1442)
				int tmp15 = (i)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1442)
				this->updateTile(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateFrameData,(void))

::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToFlxSprite",0x2b66754a,"flixel.tile.FlxTilemap.tileToFlxSprite","flixel/tile/FlxTilemap.hx",1457,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
{
		HX_STACK_LINE(1458)
		int tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1458)
		int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1458)
		int tmp2 = this->widthInTiles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1458)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1458)
		int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1458)
		int rowIndex = tmp4;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1460)
		::openfl::_legacy::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1466)
		int tmp5 = this->_data->__get(rowIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1466)
		::flixel::tile::FlxTile tmp6 = this->_tileObjects->__get(tmp5).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1466)
		::flixel::tile::FlxTile tile = tmp6;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1468)
		bool tmp7 = (tile == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1468)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1468)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1468)
		if ((tmp8)){
			HX_STACK_LINE(1468)
			bool tmp10 = tile->visible;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1468)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1468)
			tmp9 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1468)
			tmp9 = true;
		}
		HX_STACK_LINE(1468)
		if ((tmp9)){
		}
		else{
			HX_STACK_LINE(1474)
			int tmp10 = this->_data->__get(rowIndex);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1474)
			int tmp11 = this->_startingIndex;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1474)
			int tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1474)
			int tmp13 = this->_tileWidth;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1474)
			::flixel::_system::layer::Region tmp14 = this->region;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1474)
			int tmp15 = tmp14->__Field(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1474)
			int tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1474)
			int tmp17 = (tmp12 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1474)
			int rx = tmp17;		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1475)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1477)
			int tmp18 = rx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1477)
			::flixel::_system::layer::Region tmp19 = this->region;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1477)
			int tmp20 = tmp19->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1477)
			bool tmp21 = (tmp18 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1477)
			if ((tmp21)){
				HX_STACK_LINE(1479)
				int tmp22 = rx;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1479)
				::flixel::_system::layer::Region tmp23 = this->region;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1479)
				int tmp24 = tmp23->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1479)
				Float tmp25 = (Float(tmp22) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1479)
				int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1479)
				int tmp27 = this->_tileHeight;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1479)
				::flixel::_system::layer::Region tmp28 = this->region;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1479)
				int tmp29 = tmp28->__Field(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1479)
				int tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1479)
				int tmp31 = (tmp26 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1479)
				ry = tmp31;
				HX_STACK_LINE(1480)
				::flixel::_system::layer::Region tmp32 = this->region;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1480)
				hx::ModEq(rx,tmp32->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
			}
			HX_STACK_LINE(1483)
			int tmp22 = rx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1483)
			::flixel::_system::layer::Region tmp23 = this->region;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1483)
			int tmp24 = tmp23->__Field(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1483)
			int tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1483)
			int tmp26 = ry;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1483)
			::flixel::_system::layer::Region tmp27 = this->region;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1483)
			int tmp28 = tmp27->__Field(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1483)
			int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1483)
			int tmp30 = this->_tileWidth;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1483)
			int tmp31 = this->_tileHeight;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1483)
			::openfl::_legacy::geom::Rectangle tmp32 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp25,tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1483)
			rect = tmp32;
		}
		HX_STACK_LINE(1488)
		::openfl::_legacy::geom::Point tmp10 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1488)
		::openfl::_legacy::geom::Point pt = tmp10;		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(1489)
		::flixel::FlxSprite tmp11 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1489)
		::flixel::FlxSprite tileSprite = tmp11;		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(1490)
		int tmp12 = this->_tileWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1490)
		int tmp13 = this->_tileHeight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1490)
		tileSprite->makeGraphic(tmp12,tmp13,(int)0,true,null());
		HX_STACK_LINE(1491)
		int tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1491)
		int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1491)
		int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1491)
		Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1491)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1491)
		tileSprite->set_x(tmp18);
		HX_STACK_LINE(1492)
		int tmp19 = Y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1492)
		int tmp20 = this->_tileHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1492)
		int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1492)
		Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1492)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1492)
		tileSprite->set_y(tmp23);
		HX_STACK_LINE(1493)
		::flixel::util::FlxPoint tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1493)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1493)
		tileSprite->scale->set_x(tmp25);
		HX_STACK_LINE(1494)
		::flixel::util::FlxPoint tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1494)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1494)
		tileSprite->scale->set_y(tmp27);
		HX_STACK_LINE(1496)
		bool tmp28 = (rect != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1496)
		if ((tmp28)){
			HX_STACK_LINE(1498)
			::openfl::_legacy::display::BitmapData tmp29 = tileSprite->get_pixels();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1498)
			::flixel::util::loaders::CachedGraphics tmp30 = this->cachedGraphics;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1498)
			::openfl::_legacy::display::BitmapData tmp31 = tmp30->bitmap;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1498)
			::openfl::_legacy::geom::Rectangle tmp32 = rect;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1498)
			::openfl::_legacy::geom::Point tmp33 = pt;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1498)
			tmp29->copyPixels(tmp31,tmp32,tmp33,null(),null(),null());
		}
		HX_STACK_LINE(1501)
		tileSprite->dirty = true;
		HX_STACK_LINE(1502)
		tileSprite->updateFrameData();
		HX_STACK_LINE(1504)
		bool tmp29 = (NewTile >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1504)
		if ((tmp29)){
			HX_STACK_LINE(1506)
			int tmp30 = X;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1506)
			int tmp31 = Y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1506)
			int tmp32 = NewTile;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1506)
			this->setTile(tmp30,tmp31,tmp32,null());
		}
		HX_STACK_LINE(1509)
		::flixel::FlxSprite tmp30 = tileSprite;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1509)
		return tmp30;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",1516,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1517)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1518)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1520)
		bool tmp = (this->_buffers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1520)
		if ((tmp)){
			HX_STACK_LINE(1522)
			i = (int)0;
			HX_STACK_LINE(1523)
			int tmp1 = this->_buffers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1523)
			l = tmp1;
			HX_STACK_LINE(1525)
			{
				HX_STACK_LINE(1525)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1525)
				while((true)){
					HX_STACK_LINE(1525)
					bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1525)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1525)
					if ((tmp3)){
						HX_STACK_LINE(1525)
						break;
					}
					HX_STACK_LINE(1525)
					int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1525)
					int i1 = tmp4;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1527)
					::flixel::tile::FlxTilemapBuffer tmp5 = this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1527)
					tmp5->destroy();
				}
			}
			HX_STACK_LINE(1530)
			this->_buffers = null();
		}
		HX_STACK_LINE(1533)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",1543,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(1547)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1547)
		Float tmp1 = Camera->scroll->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1547)
		::flixel::util::FlxPoint tmp2 = this->scrollFactor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1547)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1547)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1547)
		Float tmp5 = (tmp - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1547)
		::openfl::_legacy::geom::Point tmp6 = this->_helperPoint;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1547)
		tmp6->x = tmp5;
		HX_STACK_LINE(1548)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1548)
		Float tmp8 = Camera->scroll->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1548)
		::flixel::util::FlxPoint tmp9 = this->scrollFactor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1548)
		Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1548)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1548)
		Float tmp12 = (tmp7 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1548)
		::openfl::_legacy::geom::Point tmp13 = this->_helperPoint;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1548)
		tmp13->y = tmp12;
		HX_STACK_LINE(1550)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(1551)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(1552)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(1554)
		Float tmp14 = this->tileScaleHack;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1554)
		::flixel::util::FlxPoint tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1554)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1554)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1554)
		Float hackScaleX = tmp17;		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(1555)
		Float tmp18 = this->tileScaleHack;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1555)
		::flixel::util::FlxPoint tmp19 = this->scale;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1555)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1555)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1555)
		Float hackScaleY = tmp21;		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(1557)
		::flixel::util::loaders::CachedGraphics tmp22 = this->cachedGraphics;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1557)
		::flixel::_system::layer::DrawStackItem tmp23 = Camera->getDrawStackItem(tmp22,false,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1557)
		::flixel::_system::layer::DrawStackItem drawItem = tmp23;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(1558)
		Array< Float > currDrawData = drawItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(1559)
		int currIndex = drawItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(1563)
		::flixel::util::FlxPoint tmp24 = this->_point;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1563)
		Float tmp25 = Camera->scroll->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1563)
		::flixel::util::FlxPoint tmp26 = this->scrollFactor;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1563)
		Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1563)
		Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1563)
		Float tmp29 = this->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1563)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1563)
		tmp24->set_x(tmp30);
		HX_STACK_LINE(1564)
		::flixel::util::FlxPoint tmp31 = this->_point;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1564)
		Float tmp32 = Camera->scroll->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1564)
		::flixel::util::FlxPoint tmp33 = this->scrollFactor;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1564)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1564)
		Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1564)
		Float tmp36 = this->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1564)
		Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1564)
		tmp31->set_y(tmp37);
		HX_STACK_LINE(1566)
		::flixel::util::FlxPoint tmp38 = this->_point;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1566)
		Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1566)
		Float tmp40 = this->_scaledTileWidth;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1566)
		Float tmp41 = (Float(tmp39) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1566)
		int tmp42 = ::Math_obj::floor(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1566)
		int screenXInTiles = tmp42;		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(1567)
		::flixel::util::FlxPoint tmp43 = this->_point;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1567)
		Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1567)
		Float tmp45 = this->_scaledTileHeight;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1567)
		Float tmp46 = (Float(tmp44) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1567)
		int tmp47 = ::Math_obj::floor(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1567)
		int screenYInTiles = tmp47;		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(1568)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(1569)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(1572)
		bool tmp48 = (screenXInTiles < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1572)
		if ((tmp48)){
			HX_STACK_LINE(1574)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(1576)
		int tmp49 = screenXInTiles;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1576)
		int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1576)
		int tmp51 = screenColumns;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1576)
		int tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1576)
		bool tmp53 = (tmp49 > tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1576)
		if ((tmp53)){
			HX_STACK_LINE(1578)
			int tmp54 = this->widthInTiles;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1578)
			int tmp55 = screenColumns;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1578)
			int tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1578)
			screenXInTiles = tmp56;
		}
		HX_STACK_LINE(1580)
		bool tmp54 = (screenYInTiles < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1580)
		if ((tmp54)){
			HX_STACK_LINE(1582)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(1584)
		int tmp55 = screenYInTiles;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1584)
		int tmp56 = this->heightInTiles;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1584)
		int tmp57 = screenRows;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1584)
		int tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(1584)
		bool tmp59 = (tmp55 > tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1584)
		if ((tmp59)){
			HX_STACK_LINE(1586)
			int tmp60 = this->heightInTiles;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1586)
			int tmp61 = screenRows;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1586)
			int tmp62 = (tmp60 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1586)
			screenYInTiles = tmp62;
		}
		HX_STACK_LINE(1589)
		int tmp60 = screenYInTiles;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(1589)
		int tmp61 = this->widthInTiles;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(1589)
		int tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(1589)
		int tmp63 = screenXInTiles;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(1589)
		int tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(1589)
		int rowIndex = tmp64;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1590)
		::openfl::_legacy::geom::Point tmp65 = this->_flashPoint;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1590)
		tmp65->y = (int)0;
		HX_STACK_LINE(1591)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1592)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1593)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(1594)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1597)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(1600)
		while((true)){
			HX_STACK_LINE(1600)
			bool tmp66 = (row < screenRows);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1600)
			bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1600)
			if ((tmp67)){
				HX_STACK_LINE(1600)
				break;
			}
			HX_STACK_LINE(1602)
			columnIndex = rowIndex;
			HX_STACK_LINE(1603)
			column = (int)0;
			HX_STACK_LINE(1604)
			::openfl::_legacy::geom::Point tmp68 = this->_flashPoint;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1604)
			tmp68->x = (int)0;
			HX_STACK_LINE(1606)
			while((true)){
				HX_STACK_LINE(1606)
				bool tmp69 = (column < screenColumns);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1606)
				bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1606)
				if ((tmp70)){
					HX_STACK_LINE(1606)
					break;
				}
				HX_STACK_LINE(1644)
				int tmp71 = this->_rectIDs->__get(columnIndex);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1644)
				tileID = tmp71;
				HX_STACK_LINE(1646)
				bool tmp72 = (tileID != (int)-1);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1646)
				if ((tmp72)){
					HX_STACK_LINE(1648)
					::openfl::_legacy::geom::Point tmp73 = this->_helperPoint;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(1648)
					Float tmp74 = tmp73->x;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1648)
					int tmp75 = columnIndex;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1648)
					int tmp76 = this->widthInTiles;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1648)
					int tmp77 = hx::Mod(tmp75,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1648)
					Float tmp78 = this->_scaledTileWidth;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(1648)
					Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(1648)
					Float tmp80 = (tmp74 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(1648)
					drawX = tmp80;
					HX_STACK_LINE(1649)
					::openfl::_legacy::geom::Point tmp81 = this->_helperPoint;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(1649)
					Float tmp82 = tmp81->y;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(1649)
					int tmp83 = columnIndex;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1649)
					int tmp84 = this->widthInTiles;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1649)
					Float tmp85 = (Float(tmp83) / Float(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1649)
					int tmp86 = ::Math_obj::floor(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(1649)
					Float tmp87 = this->_scaledTileHeight;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(1649)
					Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(1649)
					Float tmp89 = (tmp82 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(1649)
					drawY = tmp89;
					HX_STACK_LINE(1651)
					int tmp90 = (currIndex)++;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(1651)
					bool tmp91 = this->pixelPerfectRender;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(1651)
					Float tmp92;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(1651)
					if ((tmp91)){
						HX_STACK_LINE(1651)
						Float tmp93 = drawX;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(1651)
						tmp92 = ::Math_obj::floor(tmp93);
					}
					else{
						HX_STACK_LINE(1651)
						tmp92 = drawX;
					}
					HX_STACK_LINE(1651)
					currDrawData[tmp90] = tmp92;
					HX_STACK_LINE(1652)
					int tmp93 = (currIndex)++;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(1652)
					bool tmp94 = this->pixelPerfectRender;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(1652)
					Float tmp95;		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(1652)
					if ((tmp94)){
						HX_STACK_LINE(1652)
						Float tmp96 = drawY;		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(1652)
						tmp95 = ::Math_obj::floor(tmp96);
					}
					else{
						HX_STACK_LINE(1652)
						tmp95 = drawY;
					}
					HX_STACK_LINE(1652)
					currDrawData[tmp93] = tmp95;
					HX_STACK_LINE(1653)
					int tmp96 = (currIndex)++;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(1653)
					int tmp97 = tileID;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(1653)
					currDrawData[tmp96] = tmp97;
					HX_STACK_LINE(1656)
					int tmp98 = (currIndex)++;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(1656)
					Float tmp99 = hackScaleX;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(1656)
					currDrawData[tmp98] = tmp99;
					HX_STACK_LINE(1657)
					int tmp100 = (currIndex)++;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(1657)
					currDrawData[tmp100] = (int)0;
					HX_STACK_LINE(1658)
					int tmp101 = (currIndex)++;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(1658)
					currDrawData[tmp101] = (int)0;
					HX_STACK_LINE(1660)
					int tmp102 = (currIndex)++;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(1660)
					Float tmp103 = hackScaleY;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(1660)
					currDrawData[tmp102] = tmp103;
					HX_STACK_LINE(1663)
					int tmp104 = (currIndex)++;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(1663)
					currDrawData[tmp104] = ((Float)1.0);
				}
				HX_STACK_LINE(1670)
				(column)++;
				HX_STACK_LINE(1671)
				(columnIndex)++;
			}
			HX_STACK_LINE(1677)
			int tmp69 = this->widthInTiles;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1677)
			hx::AddEq(rowIndex,tmp69);
			HX_STACK_LINE(1678)
			(row)++;
		}
		HX_STACK_LINE(1682)
		drawItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = currIndex;
		HX_STACK_LINE(1685)
		int tmp66 = screenXInTiles;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(1685)
		Float tmp67 = this->_scaledTileWidth;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(1685)
		Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(1685)
		Buffer->x = tmp68;
		HX_STACK_LINE(1686)
		int tmp69 = screenYInTiles;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(1686)
		Float tmp70 = this->_scaledTileHeight;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(1686)
		Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(1686)
		Buffer->y = tmp71;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","simplifyPath",0x8a506712,"flixel.tile.FlxTilemap.simplifyPath","flixel/tile/FlxTilemap.hx",1720,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1721)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1722)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1723)
		::flixel::util::FlxPoint tmp = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1723)
		::flixel::util::FlxPoint last = tmp;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1724)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1725)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1726)
		int tmp1 = (Points->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1726)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1728)
		while((true)){
			HX_STACK_LINE(1728)
			bool tmp2 = (i < l);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1728)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1728)
			if ((tmp3)){
				HX_STACK_LINE(1728)
				break;
			}
			HX_STACK_LINE(1730)
			::flixel::util::FlxPoint tmp4 = Points->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1730)
			node = tmp4;
			HX_STACK_LINE(1731)
			Float tmp5 = (node->x - last->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1731)
			Float tmp6 = (node->y - last->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1731)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1731)
			deltaPrevious = tmp7;
			HX_STACK_LINE(1732)
			Float tmp8 = node->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1732)
			int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1732)
			::flixel::util::FlxPoint tmp10 = Points->__get(tmp9).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1732)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1732)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1732)
			Float tmp13 = node->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1732)
			int tmp14 = (i + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1732)
			::flixel::util::FlxPoint tmp15 = Points->__get(tmp14).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1732)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1732)
			Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1732)
			Float tmp18 = (Float(tmp12) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1732)
			deltaNext = tmp18;
			HX_STACK_LINE(1734)
			Float tmp19 = last->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1734)
			int tmp20 = (i + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1734)
			::flixel::util::FlxPoint tmp21 = Points->__get(tmp20).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1734)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1734)
			bool tmp23 = (tmp19 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1734)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1734)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1734)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1734)
			if ((tmp25)){
				HX_STACK_LINE(1734)
				Float tmp27 = last->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1734)
				int tmp28 = (i + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1734)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1734)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1734)
				::flixel::util::FlxPoint tmp31 = Points->__get(tmp30).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1734)
				::flixel::util::FlxPoint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1734)
				::flixel::util::FlxPoint tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1734)
				Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1734)
				tmp26 = (tmp27 == tmp34);
			}
			else{
				HX_STACK_LINE(1734)
				tmp26 = true;
			}
			HX_STACK_LINE(1734)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1734)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1734)
			if ((tmp27)){
				HX_STACK_LINE(1734)
				tmp28 = (deltaPrevious == deltaNext);
			}
			else{
				HX_STACK_LINE(1734)
				tmp28 = true;
			}
			HX_STACK_LINE(1734)
			if ((tmp28)){
				HX_STACK_LINE(1736)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1740)
				last = node;
			}
			HX_STACK_LINE(1743)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","raySimplifyPath",0xc5bc2714,"flixel.tile.FlxTilemap.raySimplifyPath","flixel/tile/FlxTilemap.hx",1753,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1754)
		::flixel::util::FlxPoint tmp = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1754)
		::flixel::util::FlxPoint source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1755)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1756)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1757)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1758)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1760)
		while((true)){
			HX_STACK_LINE(1760)
			bool tmp1 = (i < l);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1760)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1760)
			if ((tmp2)){
				HX_STACK_LINE(1760)
				break;
			}
			HX_STACK_LINE(1762)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1762)
			::flixel::util::FlxPoint tmp4 = Points->__get(tmp3).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1762)
			node = tmp4;
			HX_STACK_LINE(1764)
			bool tmp5 = (node == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1764)
			if ((tmp5)){
				HX_STACK_LINE(1766)
				continue;
			}
			HX_STACK_LINE(1769)
			::flixel::util::FlxPoint tmp6 = source;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1769)
			::flixel::util::FlxPoint tmp7 = node;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1769)
			::flixel::util::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1769)
			bool tmp9 = this->ray(tmp6,tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1769)
			if ((tmp9)){
				HX_STACK_LINE(1771)
				bool tmp10 = (lastIndex >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1771)
				if ((tmp10)){
					HX_STACK_LINE(1773)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1778)
				::flixel::util::FlxPoint tmp10 = Points->__get(lastIndex).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1778)
				source = tmp10;
			}
			HX_STACK_LINE(1781)
			int tmp10 = (i - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1781)
			lastIndex = tmp10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","computePathDistance",0x95b706cd,"flixel.tile.FlxTilemap.computePathDistance","flixel/tile/FlxTilemap.hx",1796,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(1799)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1799)
		int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1799)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1799)
		int mapSize = tmp2;		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(1800)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(1801)
		int tmp3 = mapSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1801)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,tmp3);
		HX_STACK_LINE(1802)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1804)
		while((true)){
			HX_STACK_LINE(1804)
			bool tmp4 = (i < mapSize);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1804)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1804)
			if ((tmp5)){
				HX_STACK_LINE(1804)
				break;
			}
			HX_STACK_LINE(1806)
			int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1806)
			::flixel::tile::FlxTile tmp7 = this->_tileObjects->__get(tmp6).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1806)
			int tmp8 = tmp7->allowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1806)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1806)
			if ((tmp9)){
				HX_STACK_LINE(1808)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(1812)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(1814)
			(i)++;
		}
		HX_STACK_LINE(1817)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(1818)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1819)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(1820)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1821)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(1822)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1823)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1824)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1825)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1826)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(1827)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(1829)
		while((true)){
			HX_STACK_LINE(1829)
			bool tmp4 = (neighbors->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1829)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1829)
			if ((tmp5)){
				HX_STACK_LINE(1829)
				break;
			}
			HX_STACK_LINE(1831)
			current = neighbors;
			HX_STACK_LINE(1832)
			neighbors = Array_obj< int >::__new();
			HX_STACK_LINE(1834)
			i = (int)0;
			HX_STACK_LINE(1835)
			currentLength = current->length;
			HX_STACK_LINE(1836)
			while((true)){
				HX_STACK_LINE(1836)
				bool tmp6 = (i < currentLength);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1836)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1836)
				if ((tmp7)){
					HX_STACK_LINE(1836)
					break;
				}
				HX_STACK_LINE(1838)
				int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1838)
				int tmp9 = current->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1838)
				currentIndex = tmp9;
				HX_STACK_LINE(1840)
				int tmp10 = currentIndex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1840)
				int tmp11 = EndIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1840)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1840)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1840)
				if ((tmp13)){
					HX_STACK_LINE(1842)
					foundEnd = true;
					HX_STACK_LINE(1843)
					bool tmp14 = StopOnEnd;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1843)
					if ((tmp14)){
						HX_STACK_LINE(1845)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(1846)
						break;
					}
				}
				HX_STACK_LINE(1851)
				int tmp14 = currentIndex;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1851)
				int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1851)
				int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1851)
				bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1851)
				left = tmp17;
				HX_STACK_LINE(1852)
				int tmp18 = currentIndex;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1852)
				int tmp19 = this->widthInTiles;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1852)
				int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1852)
				int tmp21 = this->widthInTiles;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1852)
				int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1852)
				bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1852)
				right = tmp23;
				HX_STACK_LINE(1853)
				int tmp24 = currentIndex;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1853)
				int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1853)
				Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1853)
				bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1853)
				up = tmp27;
				HX_STACK_LINE(1854)
				int tmp28 = currentIndex;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1854)
				int tmp29 = this->widthInTiles;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1854)
				Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1854)
				int tmp31 = this->heightInTiles;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1854)
				int tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1854)
				bool tmp33 = (tmp30 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1854)
				down = tmp33;
				HX_STACK_LINE(1856)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1858)
				bool tmp34 = up;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1858)
				if ((tmp34)){
					HX_STACK_LINE(1860)
					int tmp35 = currentIndex;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1860)
					int tmp36 = this->widthInTiles;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1860)
					int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1860)
					index = tmp37;
					HX_STACK_LINE(1862)
					int tmp38 = distances->__get(index);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1862)
					bool tmp39 = (tmp38 == (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1862)
					if ((tmp39)){
						HX_STACK_LINE(1864)
						int tmp40 = distance;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1864)
						distances[index] = tmp40;
						HX_STACK_LINE(1865)
						int tmp41 = index;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1865)
						neighbors->push(tmp41);
					}
				}
				HX_STACK_LINE(1868)
				bool tmp35 = right;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1868)
				if ((tmp35)){
					HX_STACK_LINE(1870)
					int tmp36 = (currentIndex + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1870)
					index = tmp36;
					HX_STACK_LINE(1872)
					int tmp37 = distances->__get(index);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1872)
					bool tmp38 = (tmp37 == (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1872)
					if ((tmp38)){
						HX_STACK_LINE(1874)
						int tmp39 = distance;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1874)
						distances[index] = tmp39;
						HX_STACK_LINE(1875)
						int tmp40 = index;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1875)
						neighbors->push(tmp40);
					}
				}
				HX_STACK_LINE(1878)
				bool tmp36 = down;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1878)
				if ((tmp36)){
					HX_STACK_LINE(1880)
					int tmp37 = currentIndex;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1880)
					int tmp38 = this->widthInTiles;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1880)
					int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1880)
					index = tmp39;
					HX_STACK_LINE(1882)
					int tmp40 = distances->__get(index);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1882)
					bool tmp41 = (tmp40 == (int)-1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1882)
					if ((tmp41)){
						HX_STACK_LINE(1884)
						int tmp42 = distance;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1884)
						distances[index] = tmp42;
						HX_STACK_LINE(1885)
						int tmp43 = index;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1885)
						neighbors->push(tmp43);
					}
				}
				HX_STACK_LINE(1888)
				bool tmp37 = left;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1888)
				if ((tmp37)){
					HX_STACK_LINE(1890)
					int tmp38 = (currentIndex - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1890)
					index = tmp38;
					HX_STACK_LINE(1892)
					int tmp39 = distances->__get(index);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1892)
					bool tmp40 = (tmp39 == (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1892)
					if ((tmp40)){
						HX_STACK_LINE(1894)
						int tmp41 = distance;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1894)
						distances[index] = tmp41;
						HX_STACK_LINE(1895)
						int tmp42 = index;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1895)
						neighbors->push(tmp42);
					}
				}
				HX_STACK_LINE(1898)
				bool tmp38 = up;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1898)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1898)
				if ((tmp38)){
					HX_STACK_LINE(1898)
					tmp39 = right;
				}
				else{
					HX_STACK_LINE(1898)
					tmp39 = false;
				}
				HX_STACK_LINE(1898)
				if ((tmp39)){
					HX_STACK_LINE(1900)
					int tmp40 = currentIndex;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1900)
					int tmp41 = this->widthInTiles;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1900)
					int tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1900)
					int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1900)
					index = tmp43;
					HX_STACK_LINE(1902)
					bool tmp44 = WideDiagonal;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1902)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1902)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1902)
					if ((tmp45)){
						HX_STACK_LINE(1902)
						int tmp47 = distances->__get(index);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1902)
						int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1902)
						int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1902)
						tmp46 = (tmp49 == (int)-1);
					}
					else{
						HX_STACK_LINE(1902)
						tmp46 = false;
					}
					HX_STACK_LINE(1902)
					bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1902)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1902)
					if ((tmp47)){
						HX_STACK_LINE(1902)
						int tmp49 = currentIndex;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1902)
						int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1902)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1902)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1902)
						int tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1902)
						int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1902)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1902)
						int tmp56 = distances->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1902)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1902)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1902)
						tmp48 = (tmp58 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1902)
						tmp48 = false;
					}
					HX_STACK_LINE(1902)
					bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1902)
					if ((tmp48)){
						HX_STACK_LINE(1902)
						int tmp50 = (currentIndex + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1902)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1902)
						int tmp52 = distances->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1902)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1902)
						tmp49 = (tmp53 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1902)
						tmp49 = false;
					}
					HX_STACK_LINE(1902)
					if ((tmp49)){
						HX_STACK_LINE(1904)
						int tmp50 = distance;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1904)
						distances[index] = tmp50;
						HX_STACK_LINE(1905)
						int tmp51 = index;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1905)
						neighbors->push(tmp51);
					}
					else{
						HX_STACK_LINE(1907)
						bool tmp50 = WideDiagonal;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1907)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1907)
						bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1907)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1907)
						if ((tmp52)){
							HX_STACK_LINE(1907)
							int tmp54 = distances->__get(index);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1907)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1907)
							tmp53 = (tmp55 == (int)-1);
						}
						else{
							HX_STACK_LINE(1907)
							tmp53 = false;
						}
						HX_STACK_LINE(1907)
						if ((tmp53)){
							HX_STACK_LINE(1909)
							int tmp54 = distance;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1909)
							distances[index] = tmp54;
							HX_STACK_LINE(1910)
							int tmp55 = index;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1910)
							neighbors->push(tmp55);
						}
					}
				}
				HX_STACK_LINE(1913)
				bool tmp40 = right;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1913)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1913)
				if ((tmp40)){
					HX_STACK_LINE(1913)
					tmp41 = down;
				}
				else{
					HX_STACK_LINE(1913)
					tmp41 = false;
				}
				HX_STACK_LINE(1913)
				if ((tmp41)){
					HX_STACK_LINE(1915)
					int tmp42 = currentIndex;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1915)
					int tmp43 = this->widthInTiles;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1915)
					int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1915)
					int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1915)
					index = tmp45;
					HX_STACK_LINE(1917)
					bool tmp46 = WideDiagonal;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1917)
					bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1917)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1917)
					if ((tmp47)){
						HX_STACK_LINE(1917)
						int tmp49 = distances->__get(index);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1917)
						int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1917)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1917)
						tmp48 = (tmp51 == (int)-1);
					}
					else{
						HX_STACK_LINE(1917)
						tmp48 = false;
					}
					HX_STACK_LINE(1917)
					bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1917)
					bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1917)
					if ((tmp49)){
						HX_STACK_LINE(1917)
						int tmp51 = currentIndex;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1917)
						int tmp52 = this->widthInTiles;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1917)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1917)
						int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1917)
						int tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1917)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1917)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1917)
						int tmp58 = distances->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1917)
						int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1917)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1917)
						tmp50 = (tmp60 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1917)
						tmp50 = false;
					}
					HX_STACK_LINE(1917)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1917)
					if ((tmp50)){
						HX_STACK_LINE(1917)
						int tmp52 = (currentIndex + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1917)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1917)
						int tmp54 = distances->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1917)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1917)
						tmp51 = (tmp55 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1917)
						tmp51 = false;
					}
					HX_STACK_LINE(1917)
					if ((tmp51)){
						HX_STACK_LINE(1919)
						int tmp52 = distance;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1919)
						distances[index] = tmp52;
						HX_STACK_LINE(1920)
						int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1920)
						neighbors->push(tmp53);
					}
					else{
						HX_STACK_LINE(1922)
						bool tmp52 = WideDiagonal;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1922)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1922)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1922)
						bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1922)
						if ((tmp54)){
							HX_STACK_LINE(1922)
							int tmp56 = distances->__get(index);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1922)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1922)
							tmp55 = (tmp57 == (int)-1);
						}
						else{
							HX_STACK_LINE(1922)
							tmp55 = false;
						}
						HX_STACK_LINE(1922)
						if ((tmp55)){
							HX_STACK_LINE(1924)
							int tmp56 = distance;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1924)
							distances[index] = tmp56;
							HX_STACK_LINE(1925)
							int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1925)
							neighbors->push(tmp57);
						}
					}
				}
				HX_STACK_LINE(1928)
				bool tmp42 = left;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1928)
				bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1928)
				if ((tmp42)){
					HX_STACK_LINE(1928)
					tmp43 = down;
				}
				else{
					HX_STACK_LINE(1928)
					tmp43 = false;
				}
				HX_STACK_LINE(1928)
				if ((tmp43)){
					HX_STACK_LINE(1930)
					int tmp44 = currentIndex;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1930)
					int tmp45 = this->widthInTiles;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1930)
					int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1930)
					int tmp47 = (tmp46 - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1930)
					index = tmp47;
					HX_STACK_LINE(1932)
					bool tmp48 = WideDiagonal;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1932)
					bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1932)
					bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1932)
					if ((tmp49)){
						HX_STACK_LINE(1932)
						int tmp51 = distances->__get(index);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1932)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1932)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1932)
						tmp50 = (tmp53 == (int)-1);
					}
					else{
						HX_STACK_LINE(1932)
						tmp50 = false;
					}
					HX_STACK_LINE(1932)
					bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1932)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1932)
					if ((tmp51)){
						HX_STACK_LINE(1932)
						int tmp53 = currentIndex;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1932)
						int tmp54 = this->widthInTiles;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1932)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1932)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1932)
						int tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1932)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1932)
						int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1932)
						int tmp60 = distances->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1932)
						int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1932)
						int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1932)
						tmp52 = (tmp62 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1932)
						tmp52 = false;
					}
					HX_STACK_LINE(1932)
					bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1932)
					if ((tmp52)){
						HX_STACK_LINE(1932)
						int tmp54 = (currentIndex - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1932)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1932)
						int tmp56 = distances->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1932)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1932)
						tmp53 = (tmp57 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1932)
						tmp53 = false;
					}
					HX_STACK_LINE(1932)
					if ((tmp53)){
						HX_STACK_LINE(1934)
						int tmp54 = distance;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1934)
						distances[index] = tmp54;
						HX_STACK_LINE(1935)
						int tmp55 = index;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1935)
						neighbors->push(tmp55);
					}
					else{
						HX_STACK_LINE(1937)
						bool tmp54 = WideDiagonal;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1937)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1937)
						bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1937)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1937)
						if ((tmp56)){
							HX_STACK_LINE(1937)
							int tmp58 = distances->__get(index);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1937)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1937)
							tmp57 = (tmp59 == (int)-1);
						}
						else{
							HX_STACK_LINE(1937)
							tmp57 = false;
						}
						HX_STACK_LINE(1937)
						if ((tmp57)){
							HX_STACK_LINE(1939)
							int tmp58 = distance;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1939)
							distances[index] = tmp58;
							HX_STACK_LINE(1940)
							int tmp59 = index;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1940)
							neighbors->push(tmp59);
						}
					}
				}
				HX_STACK_LINE(1943)
				bool tmp44 = up;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1943)
				bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1943)
				if ((tmp44)){
					HX_STACK_LINE(1943)
					tmp45 = left;
				}
				else{
					HX_STACK_LINE(1943)
					tmp45 = false;
				}
				HX_STACK_LINE(1943)
				if ((tmp45)){
					HX_STACK_LINE(1945)
					int tmp46 = currentIndex;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1945)
					int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1945)
					int tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1945)
					int tmp49 = (tmp48 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1945)
					index = tmp49;
					HX_STACK_LINE(1947)
					bool tmp50 = WideDiagonal;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1947)
					bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1947)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1947)
					if ((tmp51)){
						HX_STACK_LINE(1947)
						int tmp53 = distances->__get(index);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1947)
						int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1947)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1947)
						tmp52 = (tmp55 == (int)-1);
					}
					else{
						HX_STACK_LINE(1947)
						tmp52 = false;
					}
					HX_STACK_LINE(1947)
					bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1947)
					bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1947)
					if ((tmp53)){
						HX_STACK_LINE(1947)
						int tmp55 = currentIndex;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1947)
						int tmp56 = this->widthInTiles;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1947)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1947)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1947)
						int tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1947)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1947)
						int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1947)
						int tmp62 = distances->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1947)
						int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1947)
						int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1947)
						tmp54 = (tmp64 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1947)
						tmp54 = false;
					}
					HX_STACK_LINE(1947)
					bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1947)
					if ((tmp54)){
						HX_STACK_LINE(1947)
						int tmp56 = (currentIndex - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1947)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1947)
						int tmp58 = distances->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1947)
						int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1947)
						tmp55 = (tmp59 >= (int)-1);
					}
					else{
						HX_STACK_LINE(1947)
						tmp55 = false;
					}
					HX_STACK_LINE(1947)
					if ((tmp55)){
						HX_STACK_LINE(1949)
						int tmp56 = distance;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1949)
						distances[index] = tmp56;
						HX_STACK_LINE(1950)
						int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1950)
						neighbors->push(tmp57);
					}
					else{
						HX_STACK_LINE(1952)
						bool tmp56 = WideDiagonal;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1952)
						bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1952)
						bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1952)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1952)
						if ((tmp58)){
							HX_STACK_LINE(1952)
							int tmp60 = distances->__get(index);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1952)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1952)
							tmp59 = (tmp61 == (int)-1);
						}
						else{
							HX_STACK_LINE(1952)
							tmp59 = false;
						}
						HX_STACK_LINE(1952)
						if ((tmp59)){
							HX_STACK_LINE(1954)
							int tmp60 = distance;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1954)
							distances[index] = tmp60;
							HX_STACK_LINE(1955)
							int tmp61 = index;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1955)
							neighbors->push(tmp61);
						}
					}
				}
			}
			HX_STACK_LINE(1960)
			(distance)++;
		}
		HX_STACK_LINE(1962)
		bool tmp4 = foundEnd;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1962)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1962)
		if ((tmp5)){
			HX_STACK_LINE(1964)
			distances = null();
		}
		HX_STACK_LINE(1967)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","walkPath",0xd33d3b12,"flixel.tile.FlxTilemap.walkPath","flixel/tile/FlxTilemap.hx",1978,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1979)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1979)
		{
			HX_STACK_LINE(1979)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1979)
			int tmp2 = Start;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1979)
			int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1979)
			int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1979)
			int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1979)
			Float tmp6 = this->_scaledTileWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1979)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1979)
			Float tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1979)
			Float tmp9 = this->_scaledTileWidth;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1979)
			Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1979)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1979)
			Float X = tmp11;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1979)
			Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1979)
			int tmp13 = Start;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1979)
			int tmp14 = this->widthInTiles;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1979)
			Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1979)
			int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1979)
			Float tmp17 = this->_scaledTileHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1979)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1979)
			Float tmp19 = (tmp12 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1979)
			Float tmp20 = this->_scaledTileHeight;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1979)
			Float tmp21 = (tmp20 * ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1979)
			Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1979)
			Float Y = tmp22;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1979)
			::flixel::util::FlxPool tmp23 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1979)
			::flixel::util::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1979)
			Float tmp25 = X;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1979)
			Float tmp26 = Y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1979)
			::flixel::util::FlxPoint tmp27 = tmp24->set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1979)
			::flixel::util::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1979)
			point->_inPool = false;
			HX_STACK_LINE(1979)
			tmp = point;
		}
		HX_STACK_LINE(1979)
		Points->push(tmp);
		HX_STACK_LINE(1981)
		int tmp1 = Data->__get(Start);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1981)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1981)
		if ((tmp2)){
			HX_STACK_LINE(1983)
			return null();
		}
		HX_STACK_LINE(1987)
		int tmp3 = Start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1987)
		int tmp4 = this->widthInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1987)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1987)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1987)
		bool left = tmp6;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1988)
		int tmp7 = Start;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1988)
		int tmp8 = this->widthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1988)
		int tmp9 = hx::Mod(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1988)
		int tmp10 = this->widthInTiles;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1988)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1988)
		bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1988)
		bool right = tmp12;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1989)
		int tmp13 = Start;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1989)
		int tmp14 = this->widthInTiles;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1989)
		Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1989)
		bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1989)
		bool up = tmp16;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1990)
		int tmp17 = Start;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1990)
		int tmp18 = this->widthInTiles;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1990)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1990)
		int tmp20 = this->heightInTiles;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1990)
		int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1990)
		bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1990)
		bool down = tmp22;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1992)
		int tmp23 = Data->__get(Start);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1992)
		int current = tmp23;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1993)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1995)
		bool tmp24 = up;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1995)
		if ((tmp24)){
			HX_STACK_LINE(1997)
			int tmp25 = Start;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1997)
			int tmp26 = this->widthInTiles;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1997)
			int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1997)
			i = tmp27;
			HX_STACK_LINE(1999)
			bool tmp28 = (i >= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1999)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1999)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1999)
			if ((tmp29)){
				HX_STACK_LINE(1999)
				int tmp31 = Data->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1999)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1999)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1999)
				tmp30 = (tmp33 >= (int)0);
			}
			else{
				HX_STACK_LINE(1999)
				tmp30 = false;
			}
			HX_STACK_LINE(1999)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1999)
			if ((tmp30)){
				HX_STACK_LINE(1999)
				int tmp32 = Data->__get(i);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1999)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1999)
				int tmp34 = current;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1999)
				tmp31 = (tmp33 < tmp34);
			}
			else{
				HX_STACK_LINE(1999)
				tmp31 = false;
			}
			HX_STACK_LINE(1999)
			if ((tmp31)){
				HX_STACK_LINE(2001)
				int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2001)
				this->walkPath(Data,tmp32,Points);
				HX_STACK_LINE(2001)
				return null();
			}
		}
		HX_STACK_LINE(2004)
		bool tmp25 = right;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2004)
		if ((tmp25)){
			HX_STACK_LINE(2006)
			int tmp26 = (Start + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2006)
			i = tmp26;
			HX_STACK_LINE(2008)
			bool tmp27 = (i >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2008)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2008)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2008)
			if ((tmp28)){
				HX_STACK_LINE(2008)
				int tmp30 = Data->__get(i);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2008)
				int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2008)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2008)
				tmp29 = (tmp32 >= (int)0);
			}
			else{
				HX_STACK_LINE(2008)
				tmp29 = false;
			}
			HX_STACK_LINE(2008)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2008)
			if ((tmp29)){
				HX_STACK_LINE(2008)
				int tmp31 = Data->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2008)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2008)
				int tmp33 = current;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2008)
				tmp30 = (tmp32 < tmp33);
			}
			else{
				HX_STACK_LINE(2008)
				tmp30 = false;
			}
			HX_STACK_LINE(2008)
			if ((tmp30)){
				HX_STACK_LINE(2010)
				int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2010)
				this->walkPath(Data,tmp31,Points);
				HX_STACK_LINE(2010)
				return null();
			}
		}
		HX_STACK_LINE(2013)
		bool tmp26 = down;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2013)
		if ((tmp26)){
			HX_STACK_LINE(2015)
			int tmp27 = Start;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2015)
			int tmp28 = this->widthInTiles;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2015)
			int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2015)
			i = tmp29;
			HX_STACK_LINE(2017)
			bool tmp30 = (i >= (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2017)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2017)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2017)
			if ((tmp31)){
				HX_STACK_LINE(2017)
				int tmp33 = Data->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2017)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2017)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2017)
				tmp32 = (tmp35 >= (int)0);
			}
			else{
				HX_STACK_LINE(2017)
				tmp32 = false;
			}
			HX_STACK_LINE(2017)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2017)
			if ((tmp32)){
				HX_STACK_LINE(2017)
				int tmp34 = Data->__get(i);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2017)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2017)
				int tmp36 = current;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2017)
				tmp33 = (tmp35 < tmp36);
			}
			else{
				HX_STACK_LINE(2017)
				tmp33 = false;
			}
			HX_STACK_LINE(2017)
			if ((tmp33)){
				HX_STACK_LINE(2019)
				int tmp34 = i;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2019)
				this->walkPath(Data,tmp34,Points);
				HX_STACK_LINE(2019)
				return null();
			}
		}
		HX_STACK_LINE(2022)
		bool tmp27 = left;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2022)
		if ((tmp27)){
			HX_STACK_LINE(2024)
			int tmp28 = (Start - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2024)
			i = tmp28;
			HX_STACK_LINE(2026)
			bool tmp29 = (i >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2026)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2026)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2026)
			if ((tmp30)){
				HX_STACK_LINE(2026)
				int tmp32 = Data->__get(i);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2026)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2026)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2026)
				tmp31 = (tmp34 >= (int)0);
			}
			else{
				HX_STACK_LINE(2026)
				tmp31 = false;
			}
			HX_STACK_LINE(2026)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2026)
			if ((tmp31)){
				HX_STACK_LINE(2026)
				int tmp33 = Data->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2026)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2026)
				int tmp35 = current;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2026)
				tmp32 = (tmp34 < tmp35);
			}
			else{
				HX_STACK_LINE(2026)
				tmp32 = false;
			}
			HX_STACK_LINE(2026)
			if ((tmp32)){
				HX_STACK_LINE(2028)
				int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2028)
				this->walkPath(Data,tmp33,Points);
				HX_STACK_LINE(2028)
				return null();
			}
		}
		HX_STACK_LINE(2031)
		bool tmp28 = up;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2031)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2031)
		if ((tmp28)){
			HX_STACK_LINE(2031)
			tmp29 = right;
		}
		else{
			HX_STACK_LINE(2031)
			tmp29 = false;
		}
		HX_STACK_LINE(2031)
		if ((tmp29)){
			HX_STACK_LINE(2033)
			int tmp30 = Start;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2033)
			int tmp31 = this->widthInTiles;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2033)
			int tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2033)
			int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2033)
			i = tmp33;
			HX_STACK_LINE(2035)
			bool tmp34 = (i >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2035)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2035)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2035)
			if ((tmp35)){
				HX_STACK_LINE(2035)
				int tmp37 = Data->__get(i);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(2035)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(2035)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(2035)
				tmp36 = (tmp39 >= (int)0);
			}
			else{
				HX_STACK_LINE(2035)
				tmp36 = false;
			}
			HX_STACK_LINE(2035)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2035)
			if ((tmp36)){
				HX_STACK_LINE(2035)
				int tmp38 = Data->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(2035)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(2035)
				int tmp40 = current;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2035)
				tmp37 = (tmp39 < tmp40);
			}
			else{
				HX_STACK_LINE(2035)
				tmp37 = false;
			}
			HX_STACK_LINE(2035)
			if ((tmp37)){
				HX_STACK_LINE(2037)
				int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(2037)
				this->walkPath(Data,tmp38,Points);
				HX_STACK_LINE(2037)
				return null();
			}
		}
		HX_STACK_LINE(2040)
		bool tmp30 = right;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2040)
		bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2040)
		if ((tmp30)){
			HX_STACK_LINE(2040)
			tmp31 = down;
		}
		else{
			HX_STACK_LINE(2040)
			tmp31 = false;
		}
		HX_STACK_LINE(2040)
		if ((tmp31)){
			HX_STACK_LINE(2042)
			int tmp32 = Start;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2042)
			int tmp33 = this->widthInTiles;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2042)
			int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2042)
			int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2042)
			i = tmp35;
			HX_STACK_LINE(2044)
			bool tmp36 = (i >= (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2044)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2044)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2044)
			if ((tmp37)){
				HX_STACK_LINE(2044)
				int tmp39 = Data->__get(i);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(2044)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2044)
				int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2044)
				tmp38 = (tmp41 >= (int)0);
			}
			else{
				HX_STACK_LINE(2044)
				tmp38 = false;
			}
			HX_STACK_LINE(2044)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2044)
			if ((tmp38)){
				HX_STACK_LINE(2044)
				int tmp40 = Data->__get(i);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2044)
				int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2044)
				int tmp42 = current;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2044)
				tmp39 = (tmp41 < tmp42);
			}
			else{
				HX_STACK_LINE(2044)
				tmp39 = false;
			}
			HX_STACK_LINE(2044)
			if ((tmp39)){
				HX_STACK_LINE(2046)
				int tmp40 = i;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2046)
				this->walkPath(Data,tmp40,Points);
				HX_STACK_LINE(2046)
				return null();
			}
		}
		HX_STACK_LINE(2049)
		bool tmp32 = left;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2049)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2049)
		if ((tmp32)){
			HX_STACK_LINE(2049)
			tmp33 = down;
		}
		else{
			HX_STACK_LINE(2049)
			tmp33 = false;
		}
		HX_STACK_LINE(2049)
		if ((tmp33)){
			HX_STACK_LINE(2051)
			int tmp34 = Start;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2051)
			int tmp35 = this->widthInTiles;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2051)
			int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2051)
			int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2051)
			i = tmp37;
			HX_STACK_LINE(2053)
			bool tmp38 = (i >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2053)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2053)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2053)
			if ((tmp39)){
				HX_STACK_LINE(2053)
				int tmp41 = Data->__get(i);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2053)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2053)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(2053)
				tmp40 = (tmp43 >= (int)0);
			}
			else{
				HX_STACK_LINE(2053)
				tmp40 = false;
			}
			HX_STACK_LINE(2053)
			bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2053)
			if ((tmp40)){
				HX_STACK_LINE(2053)
				int tmp42 = Data->__get(i);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2053)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(2053)
				int tmp44 = current;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2053)
				tmp41 = (tmp43 < tmp44);
			}
			else{
				HX_STACK_LINE(2053)
				tmp41 = false;
			}
			HX_STACK_LINE(2053)
			if ((tmp41)){
				HX_STACK_LINE(2055)
				int tmp42 = i;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2055)
				this->walkPath(Data,tmp42,Points);
				HX_STACK_LINE(2055)
				return null();
			}
		}
		HX_STACK_LINE(2058)
		bool tmp34 = up;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(2058)
		bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(2058)
		if ((tmp34)){
			HX_STACK_LINE(2058)
			tmp35 = left;
		}
		else{
			HX_STACK_LINE(2058)
			tmp35 = false;
		}
		HX_STACK_LINE(2058)
		if ((tmp35)){
			HX_STACK_LINE(2060)
			int tmp36 = Start;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2060)
			int tmp37 = this->widthInTiles;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2060)
			int tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2060)
			int tmp39 = (tmp38 - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2060)
			i = tmp39;
			HX_STACK_LINE(2062)
			bool tmp40 = (i >= (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2062)
			bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2062)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(2062)
			if ((tmp41)){
				HX_STACK_LINE(2062)
				int tmp43 = Data->__get(i);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(2062)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2062)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(2062)
				tmp42 = (tmp45 >= (int)0);
			}
			else{
				HX_STACK_LINE(2062)
				tmp42 = false;
			}
			HX_STACK_LINE(2062)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(2062)
			if ((tmp42)){
				HX_STACK_LINE(2062)
				int tmp44 = Data->__get(i);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2062)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(2062)
				int tmp46 = current;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(2062)
				tmp43 = (tmp45 < tmp46);
			}
			else{
				HX_STACK_LINE(2062)
				tmp43 = false;
			}
			HX_STACK_LINE(2062)
			if ((tmp43)){
				HX_STACK_LINE(2064)
				int tmp44 = i;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2064)
				this->walkPath(Data,tmp44,Points);
				HX_STACK_LINE(2064)
				return null();
			}
		}
		HX_STACK_LINE(2068)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",2077,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2078)
		int tmp = this->_data->__get(Index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2078)
		::flixel::tile::FlxTile tmp1 = this->_tileObjects->__get(tmp).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2078)
		::flixel::tile::FlxTile tile = tmp1;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2080)
		bool tmp2 = (tile == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2080)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2080)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2080)
		if ((tmp3)){
			HX_STACK_LINE(2080)
			bool tmp5 = tile->visible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2080)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2080)
			tmp4 = !(tmp6);
		}
		else{
			HX_STACK_LINE(2080)
			tmp4 = true;
		}
		HX_STACK_LINE(2080)
		if ((tmp4)){
			HX_STACK_LINE(2085)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2088)
			return null();
		}
		HX_STACK_LINE(2102)
		::flixel::_system::layer::frames::FlxSpriteFrames tmp5 = this->framesData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2102)
		int tmp6 = this->_data->__get(Index);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2102)
		int tmp7 = this->_startingIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2102)
		int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2102)
		::flixel::_system::layer::frames::FlxFrame tmp9 = tmp5->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2102)
		int tmp10 = tmp9->__Field(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2102)
		this->_rectIDs[Index] = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","autoTile",0xabb4ce01,"flixel.tile.FlxTilemap.autoTile","flixel/tile/FlxTilemap.hx",2112,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2113)
		int tmp = this->_data->__get(Index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2113)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2113)
		if ((tmp1)){
			HX_STACK_LINE(2115)
			return null();
		}
		HX_STACK_LINE(2118)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(2121)
		int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2121)
		int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2121)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2121)
		bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2121)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2121)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2121)
		if ((tmp6)){
			HX_STACK_LINE(2121)
			int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2121)
			int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2121)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2121)
			int tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2121)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2121)
			int tmp13 = this->_data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2121)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2121)
			tmp7 = (tmp14 > (int)0);
		}
		else{
			HX_STACK_LINE(2121)
			tmp7 = true;
		}
		HX_STACK_LINE(2121)
		if ((tmp7)){
			HX_STACK_LINE(2123)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(2126)
		int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2126)
		int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2126)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2126)
		int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2126)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2126)
		bool tmp13 = (tmp10 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2126)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2126)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2126)
		if ((tmp14)){
			HX_STACK_LINE(2126)
			int tmp16 = (Index + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2126)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2126)
			int tmp18 = this->_data->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2126)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2126)
			tmp15 = (tmp19 > (int)0);
		}
		else{
			HX_STACK_LINE(2126)
			tmp15 = true;
		}
		HX_STACK_LINE(2126)
		if ((tmp15)){
			HX_STACK_LINE(2128)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(2131)
		int tmp16 = Index;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2131)
		int tmp17 = this->widthInTiles;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2131)
		int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2131)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2131)
		int tmp20 = this->totalTiles;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2131)
		bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(2131)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(2131)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(2131)
		if ((tmp22)){
			HX_STACK_LINE(2131)
			int tmp24 = Index;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2131)
			int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2131)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2131)
			int tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2131)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2131)
			int tmp29 = this->_data->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2131)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2131)
			tmp23 = (tmp30 > (int)0);
		}
		else{
			HX_STACK_LINE(2131)
			tmp23 = true;
		}
		HX_STACK_LINE(2131)
		if ((tmp23)){
			HX_STACK_LINE(2133)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(2136)
		int tmp24 = Index;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2136)
		int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2136)
		int tmp26 = hx::Mod(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2136)
		bool tmp27 = (tmp26 <= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2136)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2136)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2136)
		if ((tmp28)){
			HX_STACK_LINE(2136)
			int tmp30 = (Index - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2136)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2136)
			int tmp32 = this->_data->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2136)
			int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2136)
			tmp29 = (tmp33 > (int)0);
		}
		else{
			HX_STACK_LINE(2136)
			tmp29 = true;
		}
		HX_STACK_LINE(2136)
		if ((tmp29)){
			HX_STACK_LINE(2138)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(2142)
		int tmp30 = this->_auto;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2142)
		bool tmp31 = (tmp30 == (int)2);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2142)
		bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2142)
		if ((tmp31)){
			HX_STACK_LINE(2142)
			int tmp33 = this->_data->__get(Index);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2142)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2142)
			tmp32 = (tmp34 == (int)15);
		}
		else{
			HX_STACK_LINE(2142)
			tmp32 = false;
		}
		HX_STACK_LINE(2142)
		if ((tmp32)){
			HX_STACK_LINE(2145)
			int tmp33 = Index;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2145)
			int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2145)
			int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2145)
			bool tmp36 = (tmp35 > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2145)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2145)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2145)
			if ((tmp37)){
				HX_STACK_LINE(2145)
				int tmp39 = Index;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(2145)
				int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2145)
				int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2145)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2145)
				int tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(2145)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2145)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(2145)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(2145)
				int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(2145)
				int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(2145)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(2145)
				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(2145)
				int tmp51 = this->totalTiles;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(2145)
				int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(2145)
				int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(2145)
				tmp38 = (tmp50 < tmp53);
			}
			else{
				HX_STACK_LINE(2145)
				tmp38 = false;
			}
			HX_STACK_LINE(2145)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2145)
			if ((tmp38)){
				HX_STACK_LINE(2145)
				int tmp40 = Index;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2145)
				int tmp41 = this->widthInTiles;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2145)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2145)
				int tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(2145)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(2145)
				int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(2145)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(2145)
				int tmp47 = this->_data->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(2145)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(2145)
				tmp39 = (tmp48 <= (int)0);
			}
			else{
				HX_STACK_LINE(2145)
				tmp39 = false;
			}
			HX_STACK_LINE(2145)
			if ((tmp39)){
				HX_STACK_LINE(2147)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2150)
			int tmp40 = Index;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2150)
			int tmp41 = this->widthInTiles;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2150)
			int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(2150)
			bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(2150)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(2150)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(2150)
			if ((tmp44)){
				HX_STACK_LINE(2150)
				int tmp46 = Index;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(2150)
				int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(2150)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(2150)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(2150)
				int tmp50 = (tmp46 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(2150)
				int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(2150)
				int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(2150)
				tmp45 = (tmp52 >= (int)0);
			}
			else{
				HX_STACK_LINE(2150)
				tmp45 = false;
			}
			HX_STACK_LINE(2150)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(2150)
			if ((tmp45)){
				HX_STACK_LINE(2150)
				int tmp47 = Index;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(2150)
				int tmp48 = this->widthInTiles;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(2150)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(2150)
				int tmp50 = (tmp47 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(2150)
				int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(2150)
				int tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(2150)
				int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(2150)
				int tmp54 = this->_data->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(2150)
				int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(2150)
				tmp46 = (tmp55 <= (int)0);
			}
			else{
				HX_STACK_LINE(2150)
				tmp46 = false;
			}
			HX_STACK_LINE(2150)
			if ((tmp46)){
				HX_STACK_LINE(2152)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2155)
			int tmp47 = Index;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(2155)
			int tmp48 = this->widthInTiles;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(2155)
			int tmp49 = hx::Mod(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(2155)
			int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(2155)
			int tmp51 = (tmp50 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(2155)
			bool tmp52 = (tmp49 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(2155)
			bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(2155)
			bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(2155)
			if ((tmp53)){
				HX_STACK_LINE(2155)
				int tmp55 = Index;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(2155)
				int tmp56 = this->widthInTiles;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(2155)
				int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(2155)
				int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(2155)
				int tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(2155)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(2155)
				int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(2155)
				tmp54 = (tmp61 >= (int)0);
			}
			else{
				HX_STACK_LINE(2155)
				tmp54 = false;
			}
			HX_STACK_LINE(2155)
			bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(2155)
			if ((tmp54)){
				HX_STACK_LINE(2155)
				int tmp56 = Index;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(2155)
				int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(2155)
				int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(2155)
				int tmp59 = (tmp56 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(2155)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(2155)
				int tmp61 = (tmp60 + (int)1);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(2155)
				int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(2155)
				int tmp63 = this->_data->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(2155)
				int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(2155)
				tmp55 = (tmp64 <= (int)0);
			}
			else{
				HX_STACK_LINE(2155)
				tmp55 = false;
			}
			HX_STACK_LINE(2155)
			if ((tmp55)){
				HX_STACK_LINE(2157)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(2160)
			int tmp56 = Index;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(2160)
			int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(2160)
			int tmp58 = hx::Mod(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(2160)
			int tmp59 = this->widthInTiles;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(2160)
			int tmp60 = (tmp59 - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(2160)
			bool tmp61 = (tmp58 < tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(2160)
			bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(2160)
			bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(2160)
			if ((tmp62)){
				HX_STACK_LINE(2160)
				int tmp64 = Index;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(2160)
				int tmp65 = this->widthInTiles;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(2160)
				int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(2160)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(2160)
				int tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(2160)
				int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(2160)
				int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(2160)
				int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(2160)
				int tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(2160)
				int tmp73 = ::Std_obj::_int(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(2160)
				int tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(2160)
				int tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(2160)
				int tmp76 = this->totalTiles;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(2160)
				int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(2160)
				int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(2160)
				tmp63 = (tmp75 < tmp78);
			}
			else{
				HX_STACK_LINE(2160)
				tmp63 = false;
			}
			HX_STACK_LINE(2160)
			bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(2160)
			if ((tmp63)){
				HX_STACK_LINE(2160)
				int tmp65 = Index;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(2160)
				int tmp66 = this->widthInTiles;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(2160)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(2160)
				int tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(2160)
				int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(2160)
				int tmp70 = (tmp69 + (int)1);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(2160)
				int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(2160)
				int tmp72 = this->_data->__get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(2160)
				int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(2160)
				tmp64 = (tmp73 <= (int)0);
			}
			else{
				HX_STACK_LINE(2160)
				tmp64 = false;
			}
			HX_STACK_LINE(2160)
			if ((tmp64)){
				HX_STACK_LINE(2162)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2166)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",2170,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(2171)
	int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2171)
	int tmp1 = this->_tileHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2171)
	int tmp2 = this->widthInTiles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2171)
	int tmp3 = this->heightInTiles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2171)
	::flixel::FlxCamera tmp4 = camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2171)
	::flixel::util::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2171)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2171)
	::flixel::util::FlxPoint tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2171)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2171)
	::flixel::tile::FlxTilemapBuffer tmp9 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2171)
	::flixel::tile::FlxTilemapBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(2172)
	bool tmp10 = this->pixelPerfectRender;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2172)
	buffer->pixelPerfectRender = tmp10;
	HX_STACK_LINE(2173)
	::flixel::tile::FlxTilemapBuffer tmp11 = buffer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(2173)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",2181,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(2181)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2181)
		int tmp = this->get_cameras()->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2181)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2181)
		while((true)){
			HX_STACK_LINE(2181)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2181)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2181)
			if ((tmp2)){
				HX_STACK_LINE(2181)
				break;
			}
			HX_STACK_LINE(2181)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2181)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2183)
			::flixel::FlxCamera tmp4 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2183)
			::flixel::FlxCamera camera = tmp4;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(2184)
			::flixel::tile::FlxTilemapBuffer tmp5 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2184)
			::flixel::tile::FlxTilemapBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2187)
			::flixel::tile::FlxTilemapBuffer tmp6 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2187)
			int tmp7 = this->_tileWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2187)
			int tmp8 = this->widthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2187)
			::flixel::util::FlxPoint tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2187)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2187)
			::flixel::FlxCamera tmp11 = camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2187)
			tmp6->updateColumns(tmp7,tmp8,tmp10,tmp11);
			HX_STACK_LINE(2188)
			::flixel::tile::FlxTilemapBuffer tmp12 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2188)
			int tmp13 = this->_tileHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2188)
			int tmp14 = this->heightInTiles;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2188)
			::flixel::util::FlxPoint tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2188)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2188)
			::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2188)
			tmp12->updateRows(tmp13,tmp14,tmp16,tmp17);
			HX_STACK_LINE(2191)
			bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2191)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2191)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2191)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2191)
			if ((tmp20)){
				HX_STACK_LINE(2191)
				::flixel::tile::FlxTilemapBuffer tmp22 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2191)
				::flixel::tile::FlxTilemapBuffer tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2191)
				::flixel::tile::FlxTilemapBuffer tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2191)
				int tmp25 = tmp24->columns;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2191)
				int tmp26 = buffer->columns;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2191)
				tmp21 = (tmp25 != tmp26);
			}
			else{
				HX_STACK_LINE(2191)
				tmp21 = true;
			}
			HX_STACK_LINE(2191)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2191)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2191)
			if ((tmp22)){
				HX_STACK_LINE(2191)
				::flixel::tile::FlxTilemapBuffer tmp24 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2191)
				::flixel::tile::FlxTilemapBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2191)
				int tmp26 = tmp25->rows;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2191)
				int tmp27 = buffer->rows;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2191)
				tmp23 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(2191)
				tmp23 = true;
			}
			HX_STACK_LINE(2191)
			if ((tmp23)){
				HX_STACK_LINE(2193)
				bool tmp24 = (buffer != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2193)
				if ((tmp24)){
					HX_STACK_LINE(2194)
					buffer->destroy();
				}
				HX_STACK_LINE(2196)
				::flixel::tile::FlxTilemapBuffer tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2196)
				{
					HX_STACK_LINE(2196)
					int tmp26 = this->_tileWidth;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2196)
					int tmp27 = this->_tileHeight;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2196)
					int tmp28 = this->widthInTiles;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2196)
					int tmp29 = this->heightInTiles;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2196)
					::flixel::FlxCamera tmp30 = camera;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2196)
					::flixel::util::FlxPoint tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2196)
					Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2196)
					::flixel::util::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2196)
					Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2196)
					::flixel::tile::FlxTilemapBuffer tmp35 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp26,tmp27,tmp28,tmp29,tmp30,tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2196)
					::flixel::tile::FlxTilemapBuffer buffer1 = tmp35;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(2196)
					bool tmp36 = this->pixelPerfectRender;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2196)
					buffer1->pixelPerfectRender = tmp36;
					HX_STACK_LINE(2196)
					tmp25 = buffer1;
				}
				HX_STACK_LINE(2196)
				this->_buffers[i] = tmp25;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

::flixel::util::loaders::CachedGraphics FlxTilemap_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_cachedGraphics",0xb8bccace,"flixel.tile.FlxTilemap.set_cachedGraphics","flixel/tile/FlxTilemap.hx",2206,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2207)
	::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2207)
	::flixel::util::loaders::CachedGraphics oldCached = tmp;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(2209)
	::flixel::util::loaders::CachedGraphics tmp1 = this->cachedGraphics;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2209)
	::flixel::util::loaders::CachedGraphics tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2209)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2209)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2209)
	if ((tmp3)){
		HX_STACK_LINE(2209)
		tmp4 = (Value != null());
	}
	else{
		HX_STACK_LINE(2209)
		tmp4 = false;
	}
	HX_STACK_LINE(2209)
	if ((tmp4)){
		HX_STACK_LINE(2211)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2211)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2211)
		int tmp5 = (_g1 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2211)
		_g->set_useCount(tmp5);
		HX_STACK_LINE(2211)
		_g1;
	}
	HX_STACK_LINE(2214)
	bool tmp5 = (oldCached != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2214)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2214)
	if ((tmp5)){
		HX_STACK_LINE(2214)
		tmp6 = (oldCached != Value);
	}
	else{
		HX_STACK_LINE(2214)
		tmp6 = false;
	}
	HX_STACK_LINE(2214)
	if ((tmp6)){
		HX_STACK_LINE(2216)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2216)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2216)
		int tmp7 = (_g1 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2216)
		_g->set_useCount(tmp7);
		HX_STACK_LINE(2216)
		_g1;
	}
	HX_STACK_LINE(2219)
	::flixel::util::loaders::CachedGraphics tmp7 = this->cachedGraphics = Value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2219)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_cachedGraphics,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",2223,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2224)
	bool tmp = (this->_buffers != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2224)
	if ((tmp)){
		HX_STACK_LINE(2226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2226)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2226)
		while((true)){
			HX_STACK_LINE(2226)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2226)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2226)
			if ((tmp2)){
				HX_STACK_LINE(2226)
				break;
			}
			HX_STACK_LINE(2226)
			::flixel::tile::FlxTilemapBuffer tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2226)
			::flixel::tile::FlxTilemapBuffer buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2226)
			++(_g);
			HX_STACK_LINE(2228)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(2232)
	bool tmp1 = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2232)
	return tmp1;
}


Void FlxTilemap_obj::setScaleXYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",2236,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2237)
		::flixel::util::FlxPoint tmp = Scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2237)
		this->setScaleXCallback(tmp);
		HX_STACK_LINE(2238)
		::flixel::util::FlxPoint tmp1 = Scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2238)
		this->setScaleYCallback(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",2242,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2243)
		int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2243)
		::flixel::util::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2243)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2243)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2243)
		this->_scaledTileWidth = tmp3;
		HX_STACK_LINE(2244)
		int tmp4 = this->widthInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2244)
		Float tmp5 = this->_scaledTileWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2244)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2244)
		this->set_width(tmp6);
		HX_STACK_LINE(2246)
		bool tmp7 = (this->get_cameras() != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2246)
		if ((tmp7)){
			HX_STACK_LINE(2248)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2248)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2248)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2248)
			while((true)){
				HX_STACK_LINE(2248)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2248)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2248)
				if ((tmp10)){
					HX_STACK_LINE(2248)
					break;
				}
				HX_STACK_LINE(2248)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2248)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2250)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2250)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2250)
				if ((tmp13)){
					HX_STACK_LINE(2252)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2252)
					int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2252)
					int tmp16 = this->widthInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2252)
					::flixel::util::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2252)
					Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2252)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2252)
					tmp14->updateColumns(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",2259,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2260)
		int tmp = this->_tileHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2260)
		::flixel::util::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2260)
		Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2260)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2260)
		this->_scaledTileHeight = tmp3;
		HX_STACK_LINE(2261)
		int tmp4 = this->heightInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2261)
		Float tmp5 = this->_scaledTileHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2261)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2261)
		this->set_height(tmp6);
		HX_STACK_LINE(2263)
		bool tmp7 = (this->get_cameras() != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2263)
		if ((tmp7)){
			HX_STACK_LINE(2265)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2265)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2265)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2265)
			while((true)){
				HX_STACK_LINE(2265)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2265)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2265)
				if ((tmp10)){
					HX_STACK_LINE(2265)
					break;
				}
				HX_STACK_LINE(2265)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2265)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2267)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2267)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2267)
				if ((tmp13)){
					HX_STACK_LINE(2269)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2269)
					int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2269)
					int tmp16 = this->heightInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2269)
					::flixel::util::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2269)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2269)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2269)
					tmp14->updateRows(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

int FlxTilemap_obj::OFF;

int FlxTilemap_obj::AUTO;

int FlxTilemap_obj::ALT;

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { outValue = _helperBuffer; return true;  }
	}
	return false;
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::_system::layer::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::_system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp == hx::paccAlways) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=ioValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return true; }
	}
	return false;
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"));
	outFields->push(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"));
	outFields->push(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"));
	outFields->push(HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16"));
	outFields->push(HX_HCSTRING("tileScaleHack","\x7d","\x68","\x41","\x98"));
	outFields->push(HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	outFields->push(HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4"));
	outFields->push(HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"));
	outFields->push(HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36"));
	outFields->push(HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"));
	outFields->push(HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"));
	outFields->push(HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"));
	outFields->push(HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"));
	outFields->push(HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87"));
	outFields->push(HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d"));
	outFields->push(HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"));
	outFields->push(HX_HCSTRING("_rectIDs","\x15","\x7b","\xe2","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_auto),HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,widthInTiles),HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,heightInTiles),HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,totalTiles),HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,tileScaleHack),HX_HCSTRING("tileScaleHack","\x7d","\x68","\x41","\x98")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,customTileRemap),HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::_system::layer::Region*/ ,(int)offsetof(FlxTilemap_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{hx::fsObject /*::flixel::_system::layer::frames::FlxSpriteFrames*/ ,(int)offsetof(FlxTilemap_obj,framesData),HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxTilemap_obj,cachedGraphics),HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_randomIndices),HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_randomChoices),HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemap_obj,_randomLambda),HX_HCSTRING("_randomLambda","\x49","\x40","\x18","\x0b")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_tileObjects),HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_startingIndex),HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_rectIDs),HX_HCSTRING("_rectIDs","\x15","\x7b","\xe2","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxTilemap_obj::OFF,HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00")},
	{hx::fsInt,(void *) &FlxTilemap_obj::AUTO,HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")},
	{hx::fsInt,(void *) &FlxTilemap_obj::ALT,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")},
	{hx::fsObject /*::flixel::tile::FlxTilemapBuffer*/ ,(void *) &FlxTilemap_obj::_helperBuffer,HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"),
	HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"),
	HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"),
	HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16"),
	HX_HCSTRING("tileScaleHack","\x7d","\x68","\x41","\x98"),
	HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("framesData","\xf0","\xfc","\x49","\xb4"),
	HX_HCSTRING("cachedGraphics","\xcd","\xc6","\x21","\xae"),
	HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36"),
	HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b"),
	HX_HCSTRING("_randomLambda","\x49","\x40","\x18","\x0b"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"),
	HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"),
	HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"),
	HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"),
	HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87"),
	HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d"),
	HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"),
	HX_HCSTRING("_rectIDs","\x15","\x7b","\xe2","\x6d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadMap","\x16","\x84","\xdd","\x08"),
	HX_HCSTRING("setCustomTileMappings","\x86","\x00","\x11","\x09"),
	HX_HCSTRING("drawDebugOnCamera","\xf3","\x47","\x7b","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("setDirty","\x10","\xb9","\x04","\xe8"),
	HX_HCSTRING("findPath","\x7e","\xf2","\xe5","\x9c"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("tilemapOverlapsCallback","\x3f","\x9d","\xf8","\xac"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("tilemapOverlapsAtCallback","\xd2","\xab","\x68","\xdb"),
	HX_HCSTRING("overlapsWithCallback","\x17","\xc3","\x72","\xa8"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("getTileByIndex","\x37","\xbb","\xaa","\xc4"),
	HX_HCSTRING("getTileCollisions","\xc5","\x3f","\x3d","\xc8"),
	HX_HCSTRING("getTileInstances","\xba","\x6b","\x01","\x25"),
	HX_HCSTRING("getTileCoords","\x22","\xd6","\x8d","\x89"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("setTileByIndex","\xab","\xa3","\xca","\xe4"),
	HX_HCSTRING("setTileProperties","\x03","\x58","\xa1","\x54"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("updateFrameData","\xae","\xe5","\x6e","\x7f"),
	HX_HCSTRING("tileToFlxSprite","\x8e","\xc8","\xa0","\xa7"),
	HX_HCSTRING("updateBuffers","\x6a","\x08","\xff","\x7c"),
	HX_HCSTRING("drawTilemap","\x8a","\x34","\xd7","\x8e"),
	HX_HCSTRING("simplifyPath","\x4e","\x21","\x2f","\x66"),
	HX_HCSTRING("raySimplifyPath","\x58","\x7a","\xf6","\x41"),
	HX_HCSTRING("computePathDistance","\x11","\x4c","\x56","\x20"),
	HX_HCSTRING("walkPath","\x4e","\x27","\xab","\x57"),
	HX_HCSTRING("updateTile","\xd7","\xb5","\xb1","\x05"),
	HX_HCSTRING("autoTile","\x3d","\xba","\x22","\x30"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("onGameResize","\x85","\xe5","\x34","\x23"),
	HX_HCSTRING("set_cachedGraphics","\x0a","\xda","\x6a","\x26"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("setScaleXYCallback","\x6e","\xfd","\x35","\x90"),
	HX_HCSTRING("setScaleXCallback","\xb5","\x05","\xa2","\x03"),
	HX_HCSTRING("setScaleYCallback","\xb6","\x6e","\x93","\xd6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

hx::Class FlxTilemap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3"),
	::String(null()) };

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemap","\x2a","\xd5","\x63","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemap_obj >;
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

void FlxTilemap_obj::__boot()
{
	OFF= (int)0;
	AUTO= (int)1;
	ALT= (int)2;
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
