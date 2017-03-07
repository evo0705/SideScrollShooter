#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
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
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",27,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
int Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(153)
	this->_heightInc = (int)0;
	HX_STACK_LINE(152)
	this->_widthInc = (int)0;
	HX_STACK_LINE(110)
	this->borderQuality = ((Float)1);
	HX_STACK_LINE(103)
	this->borderSize = ((Float)1);
	HX_STACK_LINE(98)
	this->borderColor = (int)0;
	HX_STACK_LINE(93)
	this->borderStyle = (int)0;
	HX_STACK_LINE(167)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(169)
	this->_filters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(171)
	bool setTextEmpty = false;		HX_STACK_VAR(setTextEmpty,"setTextEmpty");
	HX_STACK_LINE(172)
	bool tmp2 = (Text == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	if ((tmp3)){
		HX_STACK_LINE(172)
		tmp4 = (Text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(172)
		tmp4 = true;
	}
	HX_STACK_LINE(172)
	if ((tmp4)){
		HX_STACK_LINE(179)
		Text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(181)
		setTextEmpty = true;
	}
	HX_STACK_LINE(184)
	::openfl::_legacy::text::TextField tmp5 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	this->_textField = tmp5;
	HX_STACK_LINE(185)
	::openfl::_legacy::text::TextField tmp6 = this->_textField;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	tmp6->set_selectable(false);
	HX_STACK_LINE(186)
	::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(186)
	tmp7->set_multiline(true);
	HX_STACK_LINE(187)
	::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	tmp8->set_wordWrap(true);
	HX_STACK_LINE(188)
	::String tmp9 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(188)
	int tmp10 = Size;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(188)
	::openfl::_legacy::text::TextFormat tmp11 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp9,tmp10,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(188)
	this->_defaultFormat = tmp11;
	HX_STACK_LINE(189)
	::openfl::_legacy::text::TextFormat tmp12 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(189)
	this->_formatAdjusted = tmp12;
	HX_STACK_LINE(190)
	::openfl::_legacy::text::TextField tmp13 = this->_textField;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(190)
	::openfl::_legacy::text::TextFormat tmp14 = this->_defaultFormat;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(190)
	tmp13->set_defaultTextFormat(tmp14);
	HX_STACK_LINE(191)
	::openfl::_legacy::text::TextField tmp15 = this->_textField;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(191)
	::String tmp16 = Text;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(191)
	tmp15->set_text(tmp16);
	HX_STACK_LINE(192)
	Float tmp17 = FieldWidth;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(192)
	this->set_fieldWidth(tmp17);
	HX_STACK_LINE(193)
	::openfl::_legacy::text::TextField tmp18 = this->_textField;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(193)
	bool tmp19 = EmbeddedFont;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(193)
	tmp18->set_embedFonts(tmp19);
	HX_STACK_LINE(195)
	this->_formats = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(201)
	::openfl::_legacy::text::TextField tmp20 = this->_textField;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(201)
	bool tmp21 = (Text.length <= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(201)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(201)
	if ((tmp21)){
		HX_STACK_LINE(201)
		tmp22 = (int)1;
	}
	else{
		HX_STACK_LINE(201)
		tmp22 = (int)10;
	}
	HX_STACK_LINE(201)
	tmp20->set_height(tmp22);
	HX_STACK_LINE(203)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(204)
	this->set_moves(false);
	HX_STACK_LINE(206)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp23 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(206)
	::String tmp24 = tmp23->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(206)
	::String key = tmp24;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(207)
	bool tmp25 = (FieldWidth <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(207)
	int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(207)
	if ((tmp25)){
		HX_STACK_LINE(207)
		tmp26 = (int)1;
	}
	else{
		HX_STACK_LINE(207)
		Float tmp27 = FieldWidth;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(207)
		tmp26 = ::Std_obj::_int(tmp27);
	}
	HX_STACK_LINE(207)
	int graphicWidth = tmp26;		HX_STACK_VAR(graphicWidth,"graphicWidth");
	HX_STACK_LINE(208)
	int tmp27 = graphicWidth;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(208)
	::String tmp28 = key;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(208)
	this->makeGraphic(tmp27,(int)1,(int)0,false,tmp28);
	HX_STACK_LINE(217)
	bool tmp29 = (Text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(217)
	if ((tmp29)){
		HX_STACK_LINE(219)
		this->calcFrame(null());
	}
	HX_STACK_LINE(223)
	::flixel::util::FlxPoint tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::flixel::util::FlxPool tmp31 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(223)
		::flixel::util::FlxPoint tmp32 = tmp31->get();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(223)
		::flixel::util::FlxPoint tmp33 = tmp32->set((int)1,(int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(223)
		::flixel::util::FlxPoint point = tmp33;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(223)
		point->_inPool = false;
		HX_STACK_LINE(223)
		tmp30 = point;
	}
	HX_STACK_LINE(223)
	this->shadowOffset = tmp30;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return _result_;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",230,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->_textField = null();
		HX_STACK_LINE(232)
		this->_defaultFormat = null();
		HX_STACK_LINE(233)
		this->_formatAdjusted = null();
		HX_STACK_LINE(234)
		this->_filters = null();
		HX_STACK_LINE(235)
		bool tmp = (this->_formats != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(237)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(237)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(237)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(237)
				if ((tmp2)){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(237)
				::flixel::text::FlxTextFormat tmp3 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				::flixel::text::FlxTextFormat format = tmp3;		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(237)
				++(_g);
				HX_STACK_LINE(239)
				bool tmp4 = (format != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				if ((tmp4)){
					HX_STACK_LINE(241)
					format->destroy();
					HX_STACK_LINE(242)
					format = null();
				}
			}
		}
		HX_STACK_LINE(246)
		this->_formats = null();
		HX_STACK_LINE(247)
		::flixel::util::FlxPoint tmp1 = this->shadowOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		::flixel::util::FlxPoint tmp2 = ::flixel::util::FlxDestroyUtil_obj::put(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		this->shadowOffset = tmp2;
		HX_STACK_LINE(248)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",259,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(260)
		bool tmp = (Start > (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp)){
			HX_STACK_LINE(260)
			tmp1 = Start;
		}
		else{
			HX_STACK_LINE(260)
			tmp1 = Format->start;
		}
		HX_STACK_LINE(260)
		Format->start = tmp1;
		HX_STACK_LINE(261)
		bool tmp2 = (End > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		if ((tmp2)){
			HX_STACK_LINE(261)
			tmp3 = End;
		}
		else{
			HX_STACK_LINE(261)
			tmp3 = Format->end;
		}
		HX_STACK_LINE(261)
		Format->end = tmp3;
		HX_STACK_LINE(262)
		::flixel::text::FlxTextFormat tmp4 = Format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		this->_formats->push(tmp4);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::flixel::text::FlxTextFormat left,::flixel::text::FlxTextFormat right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",264,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(264)
				bool tmp5 = (left->start < right->start);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(264)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(264)
				if ((tmp5)){
					HX_STACK_LINE(264)
					tmp6 = (int)-1;
				}
				else{
					HX_STACK_LINE(264)
					tmp6 = (int)1;
				}
				HX_STACK_LINE(264)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(264)
		this->_formats->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(265)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,(void))

Void FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",272,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			Array< ::Dynamic > array = this->_formats;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(273)
			::flixel::text::FlxTextFormat tmp = Format;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(273)
			int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			int index = tmp1;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(273)
			bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			if ((tmp2)){
				HX_STACK_LINE(273)
				int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(273)
				::flixel::text::FlxTextFormat tmp4 = array->__get(tmp3).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(273)
				array[index] = tmp4;
				HX_STACK_LINE(273)
				array->pop().StaticCast< ::flixel::text::FlxTextFormat >();
				HX_STACK_LINE(273)
				array;
			}
			else{
				HX_STACK_LINE(273)
				array;
			}
		}
		HX_STACK_LINE(274)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFormat,(void))

Void FlxText_obj::clearFormats( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",281,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(282)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			while((true)){
				HX_STACK_LINE(282)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(282)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(282)
				if ((tmp1)){
					HX_STACK_LINE(282)
					break;
				}
				HX_STACK_LINE(282)
				::flixel::text::FlxTextFormat tmp2 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(282)
				::flixel::text::FlxTextFormat format = tmp2;		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(282)
				++(_g);
				HX_STACK_LINE(284)
				format->destroy();
				HX_STACK_LINE(285)
				format = null();
			}
		}
		HX_STACK_LINE(288)
		this->_formats = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(290)
			::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			int tmp4 = tmp3.length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			tmp->setTextFormat(tmp1,(int)0,tmp4);
		}
		HX_STACK_LINE(291)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,(void))

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int BorderStyle = __o_BorderStyle.Default(0);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",309,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(310)
		bool tmp = Embedded;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(312)
			bool tmp1 = (Font == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(312)
			if ((tmp1)){
				HX_STACK_LINE(314)
				::String tmp2 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(314)
				::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(314)
				tmp3->font = tmp2;
			}
			else{
				HX_STACK_LINE(318)
				::String tmp2 = Font;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(318)
				::openfl::_legacy::text::Font tmp3 = ::openfl::_legacy::Assets_obj::getFont(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(318)
				tmp4->font = tmp3->fontName;
			}
		}
		else{
			HX_STACK_LINE(321)
			bool tmp1 = (Font != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(321)
			if ((tmp1)){
				HX_STACK_LINE(323)
				::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(323)
				tmp2->font = Font;
			}
		}
		HX_STACK_LINE(326)
		::openfl::_legacy::text::TextField tmp1 = this->_textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		bool tmp2 = Embedded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		tmp1->set_embedFonts(tmp2);
		HX_STACK_LINE(328)
		Float tmp3 = Size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		tmp5->size = tmp4;
		HX_STACK_LINE(329)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(330)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		tmp6->color = Color;
		HX_STACK_LINE(331)
		::String tmp7 = Alignment;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(331)
		::String tmp8 = this->convertTextAlignmentFromString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(331)
		::openfl::_legacy::text::TextFormat tmp9 = this->_defaultFormat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(331)
		tmp9->align = tmp8;
		HX_STACK_LINE(332)
		::openfl::_legacy::text::TextField tmp10 = this->_textField;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(332)
		::openfl::_legacy::text::TextFormat tmp11 = this->_defaultFormat;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(332)
		tmp10->set_defaultTextFormat(tmp11);
		HX_STACK_LINE(333)
		int tmp12 = BorderStyle;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(333)
		this->set_borderStyle(tmp12);
		HX_STACK_LINE(334)
		int tmp13 = BorderColor;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(334)
		this->set_borderColor(tmp13);
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::openfl::_legacy::text::TextField tmp14 = this->_textField;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(335)
			::openfl::_legacy::text::TextFormat tmp15 = this->_defaultFormat;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(335)
			::openfl::_legacy::text::TextField tmp16 = this->_textField;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(335)
			::String tmp17 = tmp16->get_text();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(335)
			int tmp18 = tmp17.length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(335)
			tmp14->setTextFormat(tmp15,(int)0,tmp18);
		}
		HX_STACK_LINE(336)
		this->dirty = true;
		HX_STACK_LINE(338)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::setBorderStyle( int Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",350,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(351)
		int tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		this->set_borderStyle(tmp);
		HX_STACK_LINE(352)
		int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		this->set_borderColor(tmp1);
		HX_STACK_LINE(353)
		Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		this->set_borderSize(tmp2);
		HX_STACK_LINE(354)
		Float tmp3 = Quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		this->set_borderQuality(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

Void FlxText_obj::addFilter( ::openfl::_legacy::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_FRAME("flixel.text.FlxText","addFilter",0x4880657b,"flixel.text.FlxText.addFilter","flixel/text/FlxText.hx",358,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(widthInc,"widthInc")
	HX_STACK_ARG(heightInc,"heightInc")
{
		HX_STACK_LINE(359)
		::openfl::_legacy::filters::BitmapFilter tmp = filter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		this->_filters->push(tmp);
		HX_STACK_LINE(360)
		this->_widthInc = widthInc;
		HX_STACK_LINE(361)
		this->_heightInc = heightInc;
		HX_STACK_LINE(362)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFilter,(void))

Void FlxText_obj::removeFilter( ::openfl::_legacy::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("flixel.text.FlxText","removeFilter",0x2f410f9a,"flixel.text.FlxText.removeFilter","flixel/text/FlxText.hx",366,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(367)
		::openfl::_legacy::filters::BitmapFilter tmp = filter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		bool tmp1 = this->_filters->remove(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		bool removed = tmp1;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(368)
		bool tmp2 = removed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		if ((tmp2)){
			HX_STACK_LINE(370)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFilter,(void))

Void FlxText_obj::clearFilters( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","clearFilters",0x1fa3a82c,"flixel.text.FlxText.clearFilters","flixel/text/FlxText.hx",375,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		int tmp = this->_filters->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		if ((tmp1)){
			HX_STACK_LINE(378)
			this->dirty = true;
		}
		HX_STACK_LINE(380)
		this->_filters = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFilters,(void))

Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateFrameData",0xbc85f3f0,"flixel.text.FlxText.updateFrameData","flixel/text/FlxText.hx",384,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(387)
			::flixel::util::loaders::CachedGraphics tmp2 = this->cachedGraphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(387)
			::flixel::_system::layer::TileSheetData tmp3 = tmp2->get_tilesheet();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(387)
			::flixel::_system::layer::Region tmp4 = this->region;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp5 = tmp3->__Field(HX_HCSTRING("getSpriteSheetFrames","\x2a","\xde","\x48","\x46"), hx::paccDynamic )(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			this->framesData = tmp5;
			HX_STACK_LINE(388)
			::flixel::_system::layer::frames::FlxSpriteFrames tmp6 = this->framesData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(388)
			::flixel::_system::layer::frames::FlxFrame tmp7 = tmp6->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			this->set_frame(tmp7);
			HX_STACK_LINE(389)
			this->frames = (int)1;
		}
	}
return null();
}


Void FlxText_obj::applyFormats( ::openfl::_legacy::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",394,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(396)
		bool tmp = UseBorderColor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		if ((tmp)){
			HX_STACK_LINE(396)
			tmp1 = this->borderColor;
		}
		else{
			HX_STACK_LINE(396)
			::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			tmp1 = tmp2->color;
		}
		HX_STACK_LINE(396)
		FormatAdjusted->color = tmp1;
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			::openfl::_legacy::text::TextFormat tmp3 = FormatAdjusted;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			::String tmp5 = tmp4->get_text();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			tmp2->setTextFormat(tmp3,(int)0,tmp6);
		}
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(400)
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(400)
			while((true)){
				HX_STACK_LINE(400)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(400)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(400)
				if ((tmp3)){
					HX_STACK_LINE(400)
					break;
				}
				HX_STACK_LINE(400)
				::flixel::text::FlxTextFormat tmp4 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(400)
				::flixel::text::FlxTextFormat format = tmp4;		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(400)
				++(_g);
				HX_STACK_LINE(402)
				::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(402)
				::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(402)
				int tmp7 = tmp6.length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(402)
				int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(402)
				int tmp9 = format->start;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(402)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(402)
				if ((tmp10)){
					HX_STACK_LINE(405)
					break;
				}
				else{
					HX_STACK_LINE(409)
					::String tmp11 = format->format->font;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(409)
					FormatAdjusted->font = tmp11;
					HX_STACK_LINE(410)
					Dynamic tmp12 = format->format->bold;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(410)
					FormatAdjusted->bold = tmp12;
					HX_STACK_LINE(411)
					Dynamic tmp13 = format->format->italic;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(411)
					FormatAdjusted->italic = tmp13;
					HX_STACK_LINE(412)
					Dynamic tmp14 = format->format->size;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(412)
					FormatAdjusted->size = tmp14;
					HX_STACK_LINE(413)
					bool tmp15 = UseBorderColor;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(413)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(413)
					if ((tmp15)){
						HX_STACK_LINE(413)
						tmp16 = format->borderColor;
					}
					else{
						HX_STACK_LINE(413)
						tmp16 = format->format->color;
					}
					HX_STACK_LINE(413)
					FormatAdjusted->color = tmp16;
				}
				HX_STACK_LINE(416)
				::openfl::_legacy::text::TextField tmp11 = this->_textField;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(416)
				::openfl::_legacy::text::TextFormat tmp12 = FormatAdjusted;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				int tmp13 = format->start;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				int tmp14 = format->end;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				::openfl::_legacy::text::TextField tmp15 = this->_textField;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				::String tmp16 = tmp15->get_text();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(416)
				int tmp17 = tmp16.length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(416)
				Float tmp18 = ::Math_obj::min(tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(416)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(416)
				tmp11->setTextFormat(tmp12,tmp13,tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",421,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(422)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	if ((tmp1)){
		HX_STACK_LINE(424)
		bool tmp2 = (value <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		if ((tmp2)){
			HX_STACK_LINE(426)
			this->set_wordWrap(false);
			HX_STACK_LINE(427)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(431)
			::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(431)
			tmp3->set_width(tmp4);
		}
		HX_STACK_LINE(434)
		this->dirty = true;
	}
	HX_STACK_LINE(437)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",441,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(442)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	if ((tmp1)){
		HX_STACK_LINE(442)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		tmp2 = tmp3->get_width();
	}
	else{
		HX_STACK_LINE(442)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(442)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",446,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(447)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(447)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(447)
	if ((tmp1)){
		HX_STACK_LINE(449)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		if ((tmp2)){
			HX_STACK_LINE(450)
			::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(450)
			tmp3->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
		}
		else{
			HX_STACK_LINE(452)
			::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(452)
			tmp3->set_autoSize(::openfl::text::TextFieldAutoSize_obj::NONE);
		}
		HX_STACK_LINE(454)
		this->dirty = true;
	}
	HX_STACK_LINE(457)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(457)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",461,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	if ((tmp1)){
		HX_STACK_LINE(462)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		::openfl::text::TextFieldAutoSize tmp4 = tmp3->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		tmp2 = (tmp4 != ::openfl::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(462)
		tmp2 = false;
	}
	HX_STACK_LINE(462)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::get_text( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_text",0x087345b4,"flixel.text.FlxText.get_text","flixel/text/FlxText.hx",466,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(467)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(467)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",471,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(472)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(472)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	::String ot = tmp1;		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(473)
	::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(473)
	::String tmp3 = Text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(473)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(475)
	::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(475)
	::String tmp5 = tmp4->get_text();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(475)
	::String tmp6 = ot;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(475)
	bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(475)
	if ((tmp7)){
		HX_STACK_LINE(477)
		this->dirty = true;
	}
	HX_STACK_LINE(480)
	::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(480)
	::String tmp9 = tmp8->get_text();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(480)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

Float FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",484,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	Dynamic tmp1 = tmp->size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

Float FlxText_obj::set_size( Float Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",489,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(490)
	Float tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(490)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	tmp2->size = tmp1;
	HX_STACK_LINE(491)
	::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	tmp3->set_defaultTextFormat(tmp4);
	HX_STACK_LINE(492)
	{
		HX_STACK_LINE(492)
		::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(492)
		::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(492)
		int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		tmp5->setTextFormat(tmp6,(int)0,tmp9);
	}
	HX_STACK_LINE(493)
	this->dirty = true;
	HX_STACK_LINE(495)
	Float tmp5 = Size;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(495)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",502,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(503)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(504)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	int tmp2 = Color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(504)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(504)
	if ((tmp3)){
		HX_STACK_LINE(506)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		return tmp4;
	}
	HX_STACK_LINE(508)
	::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(508)
	tmp4->color = Color;
	HX_STACK_LINE(509)
	this->color = Color;
	HX_STACK_LINE(510)
	::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(510)
	tmp5->set_defaultTextFormat(tmp6);
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(511)
		::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(511)
		::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(511)
		::openfl::_legacy::text::TextField tmp9 = this->_textField;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(511)
		::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(511)
		int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(511)
		tmp7->setTextFormat(tmp8,(int)0,tmp11);
	}
	HX_STACK_LINE(512)
	this->dirty = true;
	HX_STACK_LINE(513)
	int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(513)
	return tmp7;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",517,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	::String tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(518)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",522,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(523)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	tmp->set_embedFonts(true);
	HX_STACK_LINE(524)
	::String tmp1 = Font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(524)
	::openfl::_legacy::text::Font tmp2 = ::openfl::_legacy::Assets_obj::getFont(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(524)
	::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(524)
	tmp3->font = tmp2->fontName;
	HX_STACK_LINE(525)
	::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(525)
	::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(525)
	tmp4->set_defaultTextFormat(tmp5);
	HX_STACK_LINE(526)
	{
		HX_STACK_LINE(526)
		::openfl::_legacy::text::TextField tmp6 = this->_textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		::openfl::_legacy::text::TextFormat tmp7 = this->_defaultFormat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(526)
		::String tmp9 = tmp8->get_text();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(526)
		int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(526)
		tmp6->setTextFormat(tmp7,(int)0,tmp10);
	}
	HX_STACK_LINE(527)
	this->dirty = true;
	HX_STACK_LINE(528)
	::String tmp6 = Font;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(528)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",532,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(533)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	bool tmp1 = tmp->set_embedFonts(true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(533)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",537,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(538)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	::String tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",542,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(543)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(543)
	tmp->set_embedFonts(false);
	HX_STACK_LINE(544)
	::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	tmp1->font = Font;
	HX_STACK_LINE(545)
	::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(545)
	::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(545)
	tmp2->set_defaultTextFormat(tmp3);
	HX_STACK_LINE(546)
	{
		HX_STACK_LINE(546)
		::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(546)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		::openfl::_legacy::text::TextField tmp6 = this->_textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		::String tmp7 = tmp6->get_text();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(546)
		tmp4->setTextFormat(tmp5,(int)0,tmp8);
	}
	HX_STACK_LINE(547)
	this->dirty = true;
	HX_STACK_LINE(548)
	::String tmp4 = Font;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(548)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",552,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(553)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(553)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(553)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",557,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(558)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(558)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(558)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(558)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(558)
	if ((tmp3)){
		HX_STACK_LINE(560)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(560)
		tmp4->bold = value;
		HX_STACK_LINE(561)
		::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		tmp5->set_defaultTextFormat(tmp6);
		HX_STACK_LINE(562)
		{
			HX_STACK_LINE(562)
			::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(562)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(562)
			::openfl::_legacy::text::TextField tmp9 = this->_textField;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(562)
			::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(562)
			int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(562)
			tmp7->setTextFormat(tmp8,(int)0,tmp11);
		}
		HX_STACK_LINE(563)
		this->dirty = true;
	}
	HX_STACK_LINE(565)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(565)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",569,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(570)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",574,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(575)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(575)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(575)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(575)
	if ((tmp3)){
		HX_STACK_LINE(577)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(577)
		tmp4->italic = value;
		HX_STACK_LINE(578)
		::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(578)
		tmp5->set_defaultTextFormat(tmp6);
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(579)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(579)
			::openfl::_legacy::text::TextField tmp9 = this->_textField;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(579)
			::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(579)
			int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(579)
			tmp7->setTextFormat(tmp8,(int)0,tmp11);
		}
		HX_STACK_LINE(580)
		this->dirty = true;
	}
	HX_STACK_LINE(582)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(582)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",586,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",591,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(592)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(592)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(592)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(592)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(592)
	if ((tmp3)){
		HX_STACK_LINE(594)
		::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		tmp4->set_wordWrap(tmp5);
		HX_STACK_LINE(596)
		this->dirty = true;
	}
	HX_STACK_LINE(598)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(598)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",602,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	tmp1 = hx::TCast< ::String >::cast(tmp->align);
	HX_STACK_LINE(603)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",607,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(608)
	::String tmp = Alignment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(608)
	::String tmp1 = this->convertTextAlignmentFromString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(608)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(608)
	tmp2->align = tmp1;
	HX_STACK_LINE(609)
	::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(609)
	::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(609)
	tmp3->set_defaultTextFormat(tmp4);
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(610)
		::openfl::_legacy::text::TextField tmp5 = this->_textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(610)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(610)
		::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(610)
		::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(610)
		int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(610)
		tmp5->setTextFormat(tmp6,(int)0,tmp9);
	}
	HX_STACK_LINE(611)
	this->dirty = true;
	HX_STACK_LINE(612)
	::String tmp5 = Alignment;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(612)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

int FlxText_obj::set_borderStyle( int style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",616,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(617)
	int tmp = style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(617)
	int tmp1 = this->borderStyle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(617)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(617)
	if ((tmp2)){
		HX_STACK_LINE(619)
		this->borderStyle = style;
		HX_STACK_LINE(620)
		this->dirty = true;
	}
	HX_STACK_LINE(623)
	int tmp3 = this->borderStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(623)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",627,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(628)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(630)
	int tmp = this->borderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(630)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	if ((tmp2)){
		HX_STACK_LINE(630)
		int tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(630)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(630)
		tmp3 = (tmp5 != (int)0);
	}
	else{
		HX_STACK_LINE(630)
		tmp3 = false;
	}
	HX_STACK_LINE(630)
	if ((tmp3)){
		HX_STACK_LINE(632)
		this->dirty = true;
	}
	HX_STACK_LINE(634)
	this->borderColor = Color;
	HX_STACK_LINE(636)
	int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(636)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",640,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(641)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	Float tmp1 = this->borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(641)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(641)
	if ((tmp2)){
		HX_STACK_LINE(641)
		int tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(641)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(641)
		tmp3 = (tmp5 != (int)0);
	}
	else{
		HX_STACK_LINE(641)
		tmp3 = false;
	}
	HX_STACK_LINE(641)
	if ((tmp3)){
		HX_STACK_LINE(643)
		this->dirty = true;
	}
	HX_STACK_LINE(645)
	this->borderSize = Value;
	HX_STACK_LINE(647)
	Float tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(647)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",651,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(652)
	bool tmp = (Value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	if ((tmp)){
		HX_STACK_LINE(653)
		Value = (int)0;
	}
	else{
		HX_STACK_LINE(654)
		bool tmp1 = (Value > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		if ((tmp1)){
			HX_STACK_LINE(655)
			Value = (int)1;
		}
	}
	HX_STACK_LINE(657)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	Float tmp2 = this->borderQuality;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(657)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(657)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(657)
	if ((tmp3)){
		HX_STACK_LINE(657)
		int tmp5 = this->borderStyle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(657)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(657)
		tmp4 = (tmp6 != (int)0);
	}
	else{
		HX_STACK_LINE(657)
		tmp4 = false;
	}
	HX_STACK_LINE(657)
	if ((tmp4)){
		HX_STACK_LINE(659)
		this->dirty = true;
	}
	HX_STACK_LINE(661)
	this->borderQuality = Value;
	HX_STACK_LINE(663)
	Float tmp5 = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(663)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::openfl::_legacy::text::TextField FlxText_obj::get_textField( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_textField",0xa2909266,"flixel.text.FlxText.get_textField","flixel/text/FlxText.hx",667,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(668)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(668)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_textField,return )

::flixel::util::loaders::CachedGraphics FlxText_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_cachedGraphics",0x5e50a108,"flixel.text.FlxText.set_cachedGraphics","flixel/text/FlxText.hx",672,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(673)
	::flixel::util::loaders::CachedGraphics tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	::flixel::util::loaders::CachedGraphics tmp1 = this->super::set_cachedGraphics(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(673)
	::flixel::util::loaders::CachedGraphics cached = tmp1;		HX_STACK_VAR(cached,"cached");
	HX_STACK_LINE(675)
	bool tmp2 = (Value != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(675)
	if ((tmp2)){
		HX_STACK_LINE(676)
		Value->set_destroyOnNoUse(true);
	}
	HX_STACK_LINE(678)
	::flixel::util::loaders::CachedGraphics tmp3 = cached;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(678)
	return tmp3;
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",682,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(683)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(683)
		bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(683)
		if ((tmp1)){
			HX_STACK_LINE(685)
			::openfl::_legacy::geom::ColorTransform tmp2 = this->colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(685)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(685)
			if ((tmp3)){
				HX_STACK_LINE(687)
				Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(687)
				::openfl::_legacy::geom::ColorTransform tmp5 = ::openfl::_legacy::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,tmp4,null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(687)
				this->colorTransform = tmp5;
			}
			else{
				HX_STACK_LINE(691)
				Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::ColorTransform tmp5 = this->colorTransform;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(691)
				tmp5->alphaMultiplier = tmp4;
			}
			HX_STACK_LINE(693)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(697)
			::openfl::_legacy::geom::ColorTransform tmp2 = this->colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(697)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(697)
			if ((tmp3)){
				HX_STACK_LINE(699)
				::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(699)
				tmp4->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(702)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(705)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphics",0x8e9d026a,"flixel.text.FlxText.regenGraphics","flixel/text/FlxText.hx",709,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(710)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		int tmp1 = tmp->bitmap->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		Float oldWidth = tmp1;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(711)
		::flixel::util::loaders::CachedGraphics tmp2 = this->cachedGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(711)
		int tmp3 = tmp2->bitmap->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(711)
		Float oldHeight = tmp3;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(713)
		::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(713)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(713)
		int tmp6 = this->_widthInc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(713)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(713)
		Float newWidth = tmp7;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(715)
		::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(715)
		Float tmp9 = tmp8->get_textHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		int tmp10 = this->_heightInc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(715)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(715)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(715)
		Float newHeight = tmp12;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(718)
		::openfl::_legacy::text::TextField tmp13 = this->_textField;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(718)
		Float tmp14 = tmp13->get_textHeight();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(718)
		bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(718)
		if ((tmp15)){
			HX_STACK_LINE(720)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(723)
		bool tmp16 = (oldWidth != newWidth);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(723)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(723)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(723)
		if ((tmp17)){
			HX_STACK_LINE(723)
			tmp18 = (oldHeight != newHeight);
		}
		else{
			HX_STACK_LINE(723)
			tmp18 = true;
		}
		HX_STACK_LINE(723)
		if ((tmp18)){
			HX_STACK_LINE(726)
			Float tmp19 = newHeight;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(726)
			int tmp20 = this->_heightInc;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(726)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(726)
			this->set_height(tmp21);
			HX_STACK_LINE(727)
			::flixel::util::loaders::CachedGraphics tmp22 = this->cachedGraphics;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(727)
			::String key = tmp22->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(728)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp23 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(728)
			::String tmp24 = key;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(728)
			tmp23->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp24);
			HX_STACK_LINE(730)
			Float tmp25 = newWidth;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(730)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(730)
			Float tmp27 = newHeight;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(730)
			int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(730)
			::String tmp29 = key;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(730)
			this->makeGraphic(tmp26,tmp28,(int)0,false,tmp29);
			HX_STACK_LINE(731)
			Float tmp30 = this->get_height();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(731)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(731)
			this->frameHeight = tmp31;
			HX_STACK_LINE(732)
			::openfl::_legacy::text::TextField tmp32 = this->_textField;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(732)
			Float tmp33 = this->get_height();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(732)
			Float tmp34 = (tmp33 * ((Float)1.2));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(732)
			tmp32->set_height(tmp34);
			HX_STACK_LINE(733)
			::openfl::_legacy::geom::Rectangle tmp35 = this->_flashRect;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(733)
			tmp35->x = (int)0;
			HX_STACK_LINE(734)
			::openfl::_legacy::geom::Rectangle tmp36 = this->_flashRect;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(734)
			tmp36->y = (int)0;
			HX_STACK_LINE(735)
			::openfl::_legacy::geom::Rectangle tmp37 = this->_flashRect;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(735)
			tmp37->width = newWidth;
			HX_STACK_LINE(736)
			::openfl::_legacy::geom::Rectangle tmp38 = this->_flashRect;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(736)
			tmp38->height = newHeight;
		}
		else{
			HX_STACK_LINE(741)
			::flixel::util::loaders::CachedGraphics tmp19 = this->cachedGraphics;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(741)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(741)
			tmp19->bitmap->fillRect(tmp20,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",751,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(752)
		::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		if ((tmp1)){
			HX_STACK_LINE(754)
			return null();
		}
		HX_STACK_LINE(757)
		bool tmp2 = (this->_filters != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(757)
		if ((tmp2)){
			HX_STACK_LINE(759)
			::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(759)
			tmp3->set_filters(this->_filters);
		}
		HX_STACK_LINE(762)
		this->regenGraphics();
		HX_STACK_LINE(764)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(764)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(764)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(764)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(764)
		if ((tmp5)){
			HX_STACK_LINE(764)
			::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(764)
			::openfl::_legacy::text::TextField tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(764)
			::openfl::_legacy::text::TextField tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(764)
			::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(764)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(764)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(764)
			tmp6 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(764)
			tmp6 = false;
		}
		HX_STACK_LINE(764)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(764)
		if ((tmp6)){
			HX_STACK_LINE(764)
			::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(764)
			::openfl::_legacy::text::TextField tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(764)
			::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(764)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(764)
			int tmp12 = tmp11.length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(764)
			tmp7 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(764)
			tmp7 = false;
		}
		HX_STACK_LINE(764)
		if ((tmp7)){
			HX_STACK_LINE(767)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(767)
			::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(767)
			tmp9->font = tmp8->font;
			HX_STACK_LINE(768)
			::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(768)
			::openfl::_legacy::text::TextFormat tmp11 = this->_formatAdjusted;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(768)
			tmp11->size = tmp10->size;
			HX_STACK_LINE(769)
			::openfl::_legacy::text::TextFormat tmp12 = this->_defaultFormat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(769)
			::openfl::_legacy::text::TextFormat tmp13 = this->_formatAdjusted;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(769)
			tmp13->bold = tmp12->bold;
			HX_STACK_LINE(770)
			::openfl::_legacy::text::TextFormat tmp14 = this->_defaultFormat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(770)
			::openfl::_legacy::text::TextFormat tmp15 = this->_formatAdjusted;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(770)
			tmp15->italic = tmp14->italic;
			HX_STACK_LINE(771)
			::openfl::_legacy::text::TextFormat tmp16 = this->_defaultFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(771)
			::openfl::_legacy::text::TextFormat tmp17 = this->_formatAdjusted;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(771)
			tmp17->color = tmp16->color;
			HX_STACK_LINE(772)
			::openfl::_legacy::text::TextFormat tmp18 = this->_defaultFormat;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(772)
			::openfl::_legacy::text::TextFormat tmp19 = this->_formatAdjusted;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(772)
			tmp19->align = tmp18->align;
			HX_STACK_LINE(773)
			::openfl::_legacy::geom::Matrix tmp20 = this->_matrix;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(773)
			tmp20->identity();
			HX_STACK_LINE(775)
			::openfl::_legacy::geom::Matrix tmp21 = this->_matrix;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(775)
			int tmp22 = this->_widthInc;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(775)
			Float tmp23 = (((Float)0.5) * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(775)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(775)
			int tmp25 = this->_heightInc;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(775)
			Float tmp26 = (((Float)0.5) * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(775)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(775)
			tmp21->translate(tmp24,tmp27);
			HX_STACK_LINE(778)
			::openfl::_legacy::text::TextFormat tmp28 = this->_defaultFormat;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(778)
			::String tmp29 = tmp28->align;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(778)
			::String tmp30 = ::openfl::_legacy::text::TextFormatAlign_obj::CENTER;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(778)
			bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(778)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(778)
			if ((tmp31)){
				HX_STACK_LINE(778)
				::openfl::_legacy::text::TextField tmp33 = this->_textField;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(778)
				::openfl::_legacy::text::TextField tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(778)
				int tmp35 = tmp34->get_numLines();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(778)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(778)
				tmp32 = (tmp36 == (int)1);
			}
			else{
				HX_STACK_LINE(778)
				tmp32 = false;
			}
			HX_STACK_LINE(778)
			if ((tmp32)){
				HX_STACK_LINE(780)
				::String tmp33 = ::openfl::_legacy::text::TextFormatAlign_obj::LEFT;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(780)
				::openfl::_legacy::text::TextFormat tmp34 = this->_formatAdjusted;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(780)
				tmp34->align = tmp33;
				HX_STACK_LINE(781)
				{
					HX_STACK_LINE(781)
					::openfl::_legacy::text::TextField tmp35 = this->_textField;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(781)
					::openfl::_legacy::text::TextFormat tmp36 = this->_formatAdjusted;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(781)
					::openfl::_legacy::text::TextField tmp37 = this->_textField;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(781)
					::String tmp38 = tmp37->get_text();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(781)
					int tmp39 = tmp38.length;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(781)
					tmp35->setTextFormat(tmp36,(int)0,tmp39);
				}
				HX_STACK_LINE(786)
				::openfl::_legacy::geom::Matrix tmp35 = this->_matrix;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(786)
				Float tmp36 = this->get_width();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(786)
				::openfl::_legacy::text::TextField tmp37 = this->_textField;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(786)
				Float tmp38 = tmp37->get_textWidth();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(786)
				Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(786)
				Float tmp40 = (Float(tmp39) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(786)
				int tmp41 = ::Math_obj::floor(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(786)
				tmp35->translate(tmp41,(int)0);
			}
			HX_STACK_LINE(790)
			int tmp33 = this->borderStyle;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(790)
			bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(790)
			if ((tmp34)){
				HX_STACK_LINE(792)
				Float tmp35 = this->borderSize;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(792)
				Float tmp36 = this->borderQuality;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(792)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(792)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(792)
				int iterations = tmp38;		HX_STACK_VAR(iterations,"iterations");
				HX_STACK_LINE(793)
				bool tmp39 = (iterations <= (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(793)
				if ((tmp39)){
					HX_STACK_LINE(795)
					iterations = (int)1;
				}
				HX_STACK_LINE(797)
				Float tmp40 = this->borderSize;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(797)
				int tmp41 = iterations;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(797)
				Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(797)
				Float delta = tmp42;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(799)
				int tmp43 = this->borderStyle;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(799)
				bool tmp44 = (tmp43 == (int)1);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(799)
				if ((tmp44)){
					HX_STACK_LINE(803)
					{
						HX_STACK_LINE(803)
						::openfl::_legacy::text::TextFormat tmp45 = this->_formatAdjusted;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(803)
						::openfl::_legacy::text::TextFormat FormatAdjusted = tmp45;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(803)
						Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(803)
						tmp46 = this->borderColor;
						HX_STACK_LINE(803)
						FormatAdjusted->color = tmp46;
						HX_STACK_LINE(803)
						{
							HX_STACK_LINE(803)
							::openfl::_legacy::text::TextField tmp47 = this->_textField;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(803)
							::openfl::_legacy::text::TextFormat tmp48 = FormatAdjusted;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(803)
							::openfl::_legacy::text::TextField tmp49 = this->_textField;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(803)
							::String tmp50 = tmp49->get_text();		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(803)
							int tmp51 = tmp50.length;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(803)
							tmp47->setTextFormat(tmp48,(int)0,tmp51);
						}
						HX_STACK_LINE(803)
						{
							HX_STACK_LINE(803)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(803)
							Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(803)
							while((true)){
								HX_STACK_LINE(803)
								bool tmp47 = (_g < _g1->length);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(803)
								bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(803)
								if ((tmp48)){
									HX_STACK_LINE(803)
									break;
								}
								HX_STACK_LINE(803)
								::flixel::text::FlxTextFormat tmp49 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(803)
								::flixel::text::FlxTextFormat format = tmp49;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(803)
								++(_g);
								HX_STACK_LINE(803)
								::openfl::_legacy::text::TextField tmp50 = this->_textField;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(803)
								::String tmp51 = tmp50->get_text();		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(803)
								int tmp52 = tmp51.length;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(803)
								int tmp53 = (tmp52 - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(803)
								int tmp54 = format->start;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(803)
								bool tmp55 = (tmp53 < tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(803)
								if ((tmp55)){
									HX_STACK_LINE(803)
									break;
								}
								else{
									HX_STACK_LINE(803)
									::String tmp56 = format->format->font;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(803)
									FormatAdjusted->font = tmp56;
									HX_STACK_LINE(803)
									Dynamic tmp57 = format->format->bold;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(803)
									FormatAdjusted->bold = tmp57;
									HX_STACK_LINE(803)
									Dynamic tmp58 = format->format->italic;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(803)
									FormatAdjusted->italic = tmp58;
									HX_STACK_LINE(803)
									Dynamic tmp59 = format->format->size;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(803)
									FormatAdjusted->size = tmp59;
									HX_STACK_LINE(803)
									Dynamic tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(803)
									tmp60 = format->borderColor;
									HX_STACK_LINE(803)
									FormatAdjusted->color = tmp60;
								}
								HX_STACK_LINE(803)
								::openfl::_legacy::text::TextField tmp56 = this->_textField;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(803)
								::openfl::_legacy::text::TextFormat tmp57 = FormatAdjusted;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(803)
								int tmp58 = format->start;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(803)
								int tmp59 = format->end;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(803)
								::openfl::_legacy::text::TextField tmp60 = this->_textField;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(803)
								::String tmp61 = tmp60->get_text();		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(803)
								int tmp62 = tmp61.length;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(803)
								Float tmp63 = ::Math_obj::min(tmp59,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(803)
								int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(803)
								tmp56->setTextFormat(tmp57,tmp58,tmp64);
							}
						}
					}
					HX_STACK_LINE(805)
					{
						HX_STACK_LINE(805)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(805)
						while((true)){
							HX_STACK_LINE(805)
							bool tmp45 = (_g < iterations);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(805)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(805)
							if ((tmp46)){
								HX_STACK_LINE(805)
								break;
							}
							HX_STACK_LINE(805)
							int tmp47 = (_g)++;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(805)
							int iter = tmp47;		HX_STACK_VAR(iter,"iter");
							HX_STACK_LINE(807)
							::openfl::_legacy::geom::Matrix tmp48 = this->_matrix;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(807)
							Float tmp49 = delta;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(807)
							Float tmp50 = delta;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(807)
							tmp48->translate(tmp49,tmp50);
							HX_STACK_LINE(808)
							::flixel::util::loaders::CachedGraphics tmp51 = this->cachedGraphics;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(808)
							::openfl::_legacy::text::TextField tmp52 = this->_textField;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(808)
							::openfl::_legacy::geom::Matrix tmp53 = this->_matrix;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(808)
							tmp51->bitmap->draw(tmp52,tmp53,null(),null(),null(),null());
						}
					}
					HX_STACK_LINE(811)
					::openfl::_legacy::geom::Matrix tmp45 = this->_matrix;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(811)
					::flixel::util::FlxPoint tmp46 = this->shadowOffset;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(811)
					Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(811)
					Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(811)
					Float tmp49 = this->borderSize;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(811)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(811)
					::flixel::util::FlxPoint tmp51 = this->shadowOffset;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(811)
					Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(811)
					Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(811)
					Float tmp54 = this->borderSize;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(811)
					Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(811)
					tmp45->translate(tmp50,tmp55);
					HX_STACK_LINE(812)
					{
						HX_STACK_LINE(812)
						::openfl::_legacy::text::TextFormat tmp56 = this->_formatAdjusted;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(812)
						::openfl::_legacy::text::TextFormat FormatAdjusted = tmp56;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(812)
						Dynamic tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(812)
							::openfl::_legacy::text::TextFormat tmp58 = this->_defaultFormat;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(812)
							tmp57 = tmp58->color;
						}
						HX_STACK_LINE(812)
						FormatAdjusted->color = tmp57;
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(812)
							::openfl::_legacy::text::TextField tmp58 = this->_textField;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(812)
							::openfl::_legacy::text::TextFormat tmp59 = FormatAdjusted;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(812)
							::openfl::_legacy::text::TextField tmp60 = this->_textField;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(812)
							::String tmp61 = tmp60->get_text();		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(812)
							int tmp62 = tmp61.length;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(812)
							tmp58->setTextFormat(tmp59,(int)0,tmp62);
						}
						HX_STACK_LINE(812)
						{
							HX_STACK_LINE(812)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(812)
							Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(812)
							while((true)){
								HX_STACK_LINE(812)
								bool tmp58 = (_g < _g1->length);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(812)
								bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(812)
								if ((tmp59)){
									HX_STACK_LINE(812)
									break;
								}
								HX_STACK_LINE(812)
								::flixel::text::FlxTextFormat tmp60 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(812)
								::flixel::text::FlxTextFormat format = tmp60;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(812)
								++(_g);
								HX_STACK_LINE(812)
								::openfl::_legacy::text::TextField tmp61 = this->_textField;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(812)
								::String tmp62 = tmp61->get_text();		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(812)
								int tmp63 = tmp62.length;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(812)
								int tmp64 = (tmp63 - (int)1);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(812)
								int tmp65 = format->start;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(812)
								bool tmp66 = (tmp64 < tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(812)
								if ((tmp66)){
									HX_STACK_LINE(812)
									break;
								}
								else{
									HX_STACK_LINE(812)
									::String tmp67 = format->format->font;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(812)
									FormatAdjusted->font = tmp67;
									HX_STACK_LINE(812)
									Dynamic tmp68 = format->format->bold;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(812)
									FormatAdjusted->bold = tmp68;
									HX_STACK_LINE(812)
									Dynamic tmp69 = format->format->italic;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(812)
									FormatAdjusted->italic = tmp69;
									HX_STACK_LINE(812)
									Dynamic tmp70 = format->format->size;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(812)
									FormatAdjusted->size = tmp70;
									HX_STACK_LINE(812)
									Dynamic tmp71;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(812)
									tmp71 = format->format->color;
									HX_STACK_LINE(812)
									FormatAdjusted->color = tmp71;
								}
								HX_STACK_LINE(812)
								::openfl::_legacy::text::TextField tmp67 = this->_textField;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(812)
								::openfl::_legacy::text::TextFormat tmp68 = FormatAdjusted;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(812)
								int tmp69 = format->start;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(812)
								int tmp70 = format->end;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(812)
								::openfl::_legacy::text::TextField tmp71 = this->_textField;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(812)
								::String tmp72 = tmp71->get_text();		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(812)
								int tmp73 = tmp72.length;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(812)
								Float tmp74 = ::Math_obj::min(tmp70,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(812)
								int tmp75 = ::Std_obj::_int(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(812)
								tmp67->setTextFormat(tmp68,tmp69,tmp75);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(814)
					int tmp45 = this->borderStyle;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(814)
					bool tmp46 = (tmp45 == (int)2);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(814)
					if ((tmp46)){
						HX_STACK_LINE(818)
						{
							HX_STACK_LINE(818)
							::openfl::_legacy::text::TextFormat tmp47 = this->_formatAdjusted;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(818)
							::openfl::_legacy::text::TextFormat FormatAdjusted = tmp47;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(818)
							Dynamic tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(818)
							tmp48 = this->borderColor;
							HX_STACK_LINE(818)
							FormatAdjusted->color = tmp48;
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								::openfl::_legacy::text::TextField tmp49 = this->_textField;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(818)
								::openfl::_legacy::text::TextFormat tmp50 = FormatAdjusted;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(818)
								::openfl::_legacy::text::TextField tmp51 = this->_textField;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(818)
								::String tmp52 = tmp51->get_text();		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(818)
								int tmp53 = tmp52.length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(818)
								tmp49->setTextFormat(tmp50,(int)0,tmp53);
							}
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(818)
								Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(818)
								while((true)){
									HX_STACK_LINE(818)
									bool tmp49 = (_g < _g1->length);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(818)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(818)
									if ((tmp50)){
										HX_STACK_LINE(818)
										break;
									}
									HX_STACK_LINE(818)
									::flixel::text::FlxTextFormat tmp51 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(818)
									::flixel::text::FlxTextFormat format = tmp51;		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(818)
									++(_g);
									HX_STACK_LINE(818)
									::openfl::_legacy::text::TextField tmp52 = this->_textField;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(818)
									::String tmp53 = tmp52->get_text();		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(818)
									int tmp54 = tmp53.length;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(818)
									int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(818)
									int tmp56 = format->start;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(818)
									bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(818)
									if ((tmp57)){
										HX_STACK_LINE(818)
										break;
									}
									else{
										HX_STACK_LINE(818)
										::String tmp58 = format->format->font;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(818)
										FormatAdjusted->font = tmp58;
										HX_STACK_LINE(818)
										Dynamic tmp59 = format->format->bold;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(818)
										FormatAdjusted->bold = tmp59;
										HX_STACK_LINE(818)
										Dynamic tmp60 = format->format->italic;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(818)
										FormatAdjusted->italic = tmp60;
										HX_STACK_LINE(818)
										Dynamic tmp61 = format->format->size;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(818)
										FormatAdjusted->size = tmp61;
										HX_STACK_LINE(818)
										Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(818)
										tmp62 = format->borderColor;
										HX_STACK_LINE(818)
										FormatAdjusted->color = tmp62;
									}
									HX_STACK_LINE(818)
									::openfl::_legacy::text::TextField tmp58 = this->_textField;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(818)
									::openfl::_legacy::text::TextFormat tmp59 = FormatAdjusted;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(818)
									int tmp60 = format->start;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(818)
									int tmp61 = format->end;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(818)
									::openfl::_legacy::text::TextField tmp62 = this->_textField;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(818)
									::String tmp63 = tmp62->get_text();		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(818)
									int tmp64 = tmp63.length;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(818)
									Float tmp65 = ::Math_obj::min(tmp61,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(818)
									int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(818)
									tmp58->setTextFormat(tmp59,tmp60,tmp66);
								}
							}
						}
						HX_STACK_LINE(820)
						Float itd = delta;		HX_STACK_VAR(itd,"itd");
						HX_STACK_LINE(821)
						{
							HX_STACK_LINE(821)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(821)
							while((true)){
								HX_STACK_LINE(821)
								bool tmp47 = (_g < iterations);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(821)
								bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(821)
								if ((tmp48)){
									HX_STACK_LINE(821)
									break;
								}
								HX_STACK_LINE(821)
								int tmp49 = (_g)++;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(821)
								int iter = tmp49;		HX_STACK_VAR(iter,"iter");
								HX_STACK_LINE(823)
								::openfl::_legacy::geom::Matrix tmp50 = this->_matrix;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(823)
								Float tmp51 = itd;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(823)
								Float tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(823)
								Float tmp53 = itd;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(823)
								Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(823)
								tmp50->translate(tmp52,tmp54);
								HX_STACK_LINE(824)
								::flixel::util::loaders::CachedGraphics tmp55 = this->cachedGraphics;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(824)
								::openfl::_legacy::text::TextField tmp56 = this->_textField;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(824)
								::openfl::_legacy::geom::Matrix tmp57 = this->_matrix;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(824)
								tmp55->bitmap->draw(tmp56,tmp57,null(),null(),null(),null());
								HX_STACK_LINE(825)
								::openfl::_legacy::geom::Matrix tmp58 = this->_matrix;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(825)
								Float tmp59 = itd;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(825)
								tmp58->translate(tmp59,(int)0);
								HX_STACK_LINE(826)
								::flixel::util::loaders::CachedGraphics tmp60 = this->cachedGraphics;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(826)
								::openfl::_legacy::text::TextField tmp61 = this->_textField;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(826)
								::openfl::_legacy::geom::Matrix tmp62 = this->_matrix;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(826)
								tmp60->bitmap->draw(tmp61,tmp62,null(),null(),null(),null());
								HX_STACK_LINE(827)
								::openfl::_legacy::geom::Matrix tmp63 = this->_matrix;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(827)
								Float tmp64 = itd;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(827)
								tmp63->translate(tmp64,(int)0);
								HX_STACK_LINE(828)
								::flixel::util::loaders::CachedGraphics tmp65 = this->cachedGraphics;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(828)
								::openfl::_legacy::text::TextField tmp66 = this->_textField;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(828)
								::openfl::_legacy::geom::Matrix tmp67 = this->_matrix;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(828)
								tmp65->bitmap->draw(tmp66,tmp67,null(),null(),null(),null());
								HX_STACK_LINE(829)
								::openfl::_legacy::geom::Matrix tmp68 = this->_matrix;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(829)
								Float tmp69 = itd;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(829)
								tmp68->translate((int)0,tmp69);
								HX_STACK_LINE(830)
								::flixel::util::loaders::CachedGraphics tmp70 = this->cachedGraphics;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(830)
								::openfl::_legacy::text::TextField tmp71 = this->_textField;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(830)
								::openfl::_legacy::geom::Matrix tmp72 = this->_matrix;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(830)
								tmp70->bitmap->draw(tmp71,tmp72,null(),null(),null(),null());
								HX_STACK_LINE(831)
								::openfl::_legacy::geom::Matrix tmp73 = this->_matrix;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(831)
								Float tmp74 = itd;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(831)
								tmp73->translate((int)0,tmp74);
								HX_STACK_LINE(832)
								::flixel::util::loaders::CachedGraphics tmp75 = this->cachedGraphics;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(832)
								::openfl::_legacy::text::TextField tmp76 = this->_textField;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(832)
								::openfl::_legacy::geom::Matrix tmp77 = this->_matrix;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(832)
								tmp75->bitmap->draw(tmp76,tmp77,null(),null(),null(),null());
								HX_STACK_LINE(833)
								::openfl::_legacy::geom::Matrix tmp78 = this->_matrix;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(833)
								Float tmp79 = itd;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(833)
								Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(833)
								tmp78->translate(tmp80,(int)0);
								HX_STACK_LINE(834)
								::flixel::util::loaders::CachedGraphics tmp81 = this->cachedGraphics;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(834)
								::openfl::_legacy::text::TextField tmp82 = this->_textField;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(834)
								::openfl::_legacy::geom::Matrix tmp83 = this->_matrix;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(834)
								tmp81->bitmap->draw(tmp82,tmp83,null(),null(),null(),null());
								HX_STACK_LINE(835)
								::openfl::_legacy::geom::Matrix tmp84 = this->_matrix;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(835)
								Float tmp85 = itd;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(835)
								Float tmp86 = -(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(835)
								tmp84->translate(tmp86,(int)0);
								HX_STACK_LINE(836)
								::flixel::util::loaders::CachedGraphics tmp87 = this->cachedGraphics;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(836)
								::openfl::_legacy::text::TextField tmp88 = this->_textField;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(836)
								::openfl::_legacy::geom::Matrix tmp89 = this->_matrix;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(836)
								tmp87->bitmap->draw(tmp88,tmp89,null(),null(),null(),null());
								HX_STACK_LINE(837)
								::openfl::_legacy::geom::Matrix tmp90 = this->_matrix;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(837)
								Float tmp91 = itd;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(837)
								Float tmp92 = -(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(837)
								tmp90->translate((int)0,tmp92);
								HX_STACK_LINE(838)
								::flixel::util::loaders::CachedGraphics tmp93 = this->cachedGraphics;		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(838)
								::openfl::_legacy::text::TextField tmp94 = this->_textField;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(838)
								::openfl::_legacy::geom::Matrix tmp95 = this->_matrix;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(838)
								tmp93->bitmap->draw(tmp94,tmp95,null(),null(),null(),null());
								HX_STACK_LINE(839)
								::openfl::_legacy::geom::Matrix tmp96 = this->_matrix;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(839)
								Float tmp97 = itd;		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(839)
								tmp96->translate(tmp97,(int)0);
								HX_STACK_LINE(840)
								hx::AddEq(itd,delta);
							}
						}
						HX_STACK_LINE(843)
						{
							HX_STACK_LINE(843)
							::openfl::_legacy::text::TextFormat tmp47 = this->_formatAdjusted;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(843)
							::openfl::_legacy::text::TextFormat FormatAdjusted = tmp47;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(843)
							Dynamic tmp48;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(843)
							{
								HX_STACK_LINE(843)
								::openfl::_legacy::text::TextFormat tmp49 = this->_defaultFormat;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(843)
								tmp48 = tmp49->color;
							}
							HX_STACK_LINE(843)
							FormatAdjusted->color = tmp48;
							HX_STACK_LINE(843)
							{
								HX_STACK_LINE(843)
								::openfl::_legacy::text::TextField tmp49 = this->_textField;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(843)
								::openfl::_legacy::text::TextFormat tmp50 = FormatAdjusted;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(843)
								::openfl::_legacy::text::TextField tmp51 = this->_textField;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(843)
								::String tmp52 = tmp51->get_text();		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(843)
								int tmp53 = tmp52.length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(843)
								tmp49->setTextFormat(tmp50,(int)0,tmp53);
							}
							HX_STACK_LINE(843)
							{
								HX_STACK_LINE(843)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(843)
								Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(843)
								while((true)){
									HX_STACK_LINE(843)
									bool tmp49 = (_g < _g1->length);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(843)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(843)
									if ((tmp50)){
										HX_STACK_LINE(843)
										break;
									}
									HX_STACK_LINE(843)
									::flixel::text::FlxTextFormat tmp51 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(843)
									::flixel::text::FlxTextFormat format = tmp51;		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(843)
									++(_g);
									HX_STACK_LINE(843)
									::openfl::_legacy::text::TextField tmp52 = this->_textField;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(843)
									::String tmp53 = tmp52->get_text();		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(843)
									int tmp54 = tmp53.length;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(843)
									int tmp55 = (tmp54 - (int)1);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(843)
									int tmp56 = format->start;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(843)
									bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(843)
									if ((tmp57)){
										HX_STACK_LINE(843)
										break;
									}
									else{
										HX_STACK_LINE(843)
										::String tmp58 = format->format->font;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(843)
										FormatAdjusted->font = tmp58;
										HX_STACK_LINE(843)
										Dynamic tmp59 = format->format->bold;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(843)
										FormatAdjusted->bold = tmp59;
										HX_STACK_LINE(843)
										Dynamic tmp60 = format->format->italic;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(843)
										FormatAdjusted->italic = tmp60;
										HX_STACK_LINE(843)
										Dynamic tmp61 = format->format->size;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(843)
										FormatAdjusted->size = tmp61;
										HX_STACK_LINE(843)
										Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(843)
										tmp62 = format->format->color;
										HX_STACK_LINE(843)
										FormatAdjusted->color = tmp62;
									}
									HX_STACK_LINE(843)
									::openfl::_legacy::text::TextField tmp58 = this->_textField;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(843)
									::openfl::_legacy::text::TextFormat tmp59 = FormatAdjusted;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(843)
									int tmp60 = format->start;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(843)
									int tmp61 = format->end;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(843)
									::openfl::_legacy::text::TextField tmp62 = this->_textField;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(843)
									::String tmp63 = tmp62->get_text();		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(843)
									int tmp64 = tmp63.length;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(843)
									Float tmp65 = ::Math_obj::min(tmp61,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(843)
									int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(843)
									tmp58->setTextFormat(tmp59,tmp60,tmp66);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(845)
						int tmp47 = this->borderStyle;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(845)
						bool tmp48 = (tmp47 == (int)3);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(845)
						if ((tmp48)){
							HX_STACK_LINE(850)
							{
								HX_STACK_LINE(850)
								::openfl::_legacy::text::TextFormat tmp49 = this->_formatAdjusted;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(850)
								::openfl::_legacy::text::TextFormat FormatAdjusted = tmp49;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(850)
								Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(850)
								tmp50 = this->borderColor;
								HX_STACK_LINE(850)
								FormatAdjusted->color = tmp50;
								HX_STACK_LINE(850)
								{
									HX_STACK_LINE(850)
									::openfl::_legacy::text::TextField tmp51 = this->_textField;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(850)
									::openfl::_legacy::text::TextFormat tmp52 = FormatAdjusted;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(850)
									::openfl::_legacy::text::TextField tmp53 = this->_textField;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(850)
									::String tmp54 = tmp53->get_text();		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(850)
									int tmp55 = tmp54.length;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(850)
									tmp51->setTextFormat(tmp52,(int)0,tmp55);
								}
								HX_STACK_LINE(850)
								{
									HX_STACK_LINE(850)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(850)
									Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(850)
									while((true)){
										HX_STACK_LINE(850)
										bool tmp51 = (_g < _g1->length);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(850)
										bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(850)
										if ((tmp52)){
											HX_STACK_LINE(850)
											break;
										}
										HX_STACK_LINE(850)
										::flixel::text::FlxTextFormat tmp53 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(850)
										::flixel::text::FlxTextFormat format = tmp53;		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(850)
										++(_g);
										HX_STACK_LINE(850)
										::openfl::_legacy::text::TextField tmp54 = this->_textField;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(850)
										::String tmp55 = tmp54->get_text();		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(850)
										int tmp56 = tmp55.length;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(850)
										int tmp57 = (tmp56 - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(850)
										int tmp58 = format->start;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(850)
										bool tmp59 = (tmp57 < tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(850)
										if ((tmp59)){
											HX_STACK_LINE(850)
											break;
										}
										else{
											HX_STACK_LINE(850)
											::String tmp60 = format->format->font;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(850)
											FormatAdjusted->font = tmp60;
											HX_STACK_LINE(850)
											Dynamic tmp61 = format->format->bold;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(850)
											FormatAdjusted->bold = tmp61;
											HX_STACK_LINE(850)
											Dynamic tmp62 = format->format->italic;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(850)
											FormatAdjusted->italic = tmp62;
											HX_STACK_LINE(850)
											Dynamic tmp63 = format->format->size;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(850)
											FormatAdjusted->size = tmp63;
											HX_STACK_LINE(850)
											Dynamic tmp64;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(850)
											tmp64 = format->borderColor;
											HX_STACK_LINE(850)
											FormatAdjusted->color = tmp64;
										}
										HX_STACK_LINE(850)
										::openfl::_legacy::text::TextField tmp60 = this->_textField;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(850)
										::openfl::_legacy::text::TextFormat tmp61 = FormatAdjusted;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(850)
										int tmp62 = format->start;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(850)
										int tmp63 = format->end;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(850)
										::openfl::_legacy::text::TextField tmp64 = this->_textField;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(850)
										::String tmp65 = tmp64->get_text();		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(850)
										int tmp66 = tmp65.length;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(850)
										Float tmp67 = ::Math_obj::min(tmp63,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(850)
										int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(850)
										tmp60->setTextFormat(tmp61,tmp62,tmp68);
									}
								}
							}
							HX_STACK_LINE(852)
							Float itd = delta;		HX_STACK_VAR(itd,"itd");
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(853)
								while((true)){
									HX_STACK_LINE(853)
									bool tmp49 = (_g < iterations);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(853)
									bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(853)
									if ((tmp50)){
										HX_STACK_LINE(853)
										break;
									}
									HX_STACK_LINE(853)
									int tmp51 = (_g)++;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(853)
									int iter = tmp51;		HX_STACK_VAR(iter,"iter");
									HX_STACK_LINE(855)
									::openfl::_legacy::geom::Matrix tmp52 = this->_matrix;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(855)
									Float tmp53 = itd;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(855)
									Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(855)
									Float tmp55 = itd;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(855)
									Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(855)
									tmp52->translate(tmp54,tmp56);
									HX_STACK_LINE(856)
									::flixel::util::loaders::CachedGraphics tmp57 = this->cachedGraphics;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(856)
									::openfl::_legacy::text::TextField tmp58 = this->_textField;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(856)
									::openfl::_legacy::geom::Matrix tmp59 = this->_matrix;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(856)
									tmp57->bitmap->draw(tmp58,tmp59,null(),null(),null(),null());
									HX_STACK_LINE(857)
									::openfl::_legacy::geom::Matrix tmp60 = this->_matrix;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(857)
									Float tmp61 = (itd * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(857)
									tmp60->translate(tmp61,(int)0);
									HX_STACK_LINE(858)
									::flixel::util::loaders::CachedGraphics tmp62 = this->cachedGraphics;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(858)
									::openfl::_legacy::text::TextField tmp63 = this->_textField;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(858)
									::openfl::_legacy::geom::Matrix tmp64 = this->_matrix;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(858)
									tmp62->bitmap->draw(tmp63,tmp64,null(),null(),null(),null());
									HX_STACK_LINE(859)
									::openfl::_legacy::geom::Matrix tmp65 = this->_matrix;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(859)
									Float tmp66 = (itd * (int)2);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(859)
									tmp65->translate((int)0,tmp66);
									HX_STACK_LINE(860)
									::flixel::util::loaders::CachedGraphics tmp67 = this->cachedGraphics;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(860)
									::openfl::_legacy::text::TextField tmp68 = this->_textField;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(860)
									::openfl::_legacy::geom::Matrix tmp69 = this->_matrix;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(860)
									tmp67->bitmap->draw(tmp68,tmp69,null(),null(),null(),null());
									HX_STACK_LINE(861)
									::openfl::_legacy::geom::Matrix tmp70 = this->_matrix;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(861)
									Float tmp71 = itd;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(861)
									Float tmp72 = -(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(861)
									Float tmp73 = (tmp72 * (int)2);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(861)
									tmp70->translate(tmp73,(int)0);
									HX_STACK_LINE(862)
									::flixel::util::loaders::CachedGraphics tmp74 = this->cachedGraphics;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(862)
									::openfl::_legacy::text::TextField tmp75 = this->_textField;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(862)
									::openfl::_legacy::geom::Matrix tmp76 = this->_matrix;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(862)
									tmp74->bitmap->draw(tmp75,tmp76,null(),null(),null(),null());
									HX_STACK_LINE(863)
									::openfl::_legacy::geom::Matrix tmp77 = this->_matrix;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(863)
									Float tmp78 = itd;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(863)
									Float tmp79 = itd;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(863)
									Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(863)
									tmp77->translate(tmp78,tmp80);
									HX_STACK_LINE(864)
									hx::AddEq(itd,delta);
								}
							}
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								::openfl::_legacy::text::TextFormat tmp49 = this->_formatAdjusted;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(867)
								::openfl::_legacy::text::TextFormat FormatAdjusted = tmp49;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(867)
								Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									::openfl::_legacy::text::TextFormat tmp51 = this->_defaultFormat;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(867)
									tmp50 = tmp51->color;
								}
								HX_STACK_LINE(867)
								FormatAdjusted->color = tmp50;
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									::openfl::_legacy::text::TextField tmp51 = this->_textField;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(867)
									::openfl::_legacy::text::TextFormat tmp52 = FormatAdjusted;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(867)
									::openfl::_legacy::text::TextField tmp53 = this->_textField;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(867)
									::String tmp54 = tmp53->get_text();		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(867)
									int tmp55 = tmp54.length;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(867)
									tmp51->setTextFormat(tmp52,(int)0,tmp55);
								}
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(867)
									Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(867)
									while((true)){
										HX_STACK_LINE(867)
										bool tmp51 = (_g < _g1->length);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(867)
										bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(867)
										if ((tmp52)){
											HX_STACK_LINE(867)
											break;
										}
										HX_STACK_LINE(867)
										::flixel::text::FlxTextFormat tmp53 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(867)
										::flixel::text::FlxTextFormat format = tmp53;		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(867)
										++(_g);
										HX_STACK_LINE(867)
										::openfl::_legacy::text::TextField tmp54 = this->_textField;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(867)
										::String tmp55 = tmp54->get_text();		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(867)
										int tmp56 = tmp55.length;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(867)
										int tmp57 = (tmp56 - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(867)
										int tmp58 = format->start;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(867)
										bool tmp59 = (tmp57 < tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(867)
										if ((tmp59)){
											HX_STACK_LINE(867)
											break;
										}
										else{
											HX_STACK_LINE(867)
											::String tmp60 = format->format->font;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(867)
											FormatAdjusted->font = tmp60;
											HX_STACK_LINE(867)
											Dynamic tmp61 = format->format->bold;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(867)
											FormatAdjusted->bold = tmp61;
											HX_STACK_LINE(867)
											Dynamic tmp62 = format->format->italic;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(867)
											FormatAdjusted->italic = tmp62;
											HX_STACK_LINE(867)
											Dynamic tmp63 = format->format->size;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(867)
											FormatAdjusted->size = tmp63;
											HX_STACK_LINE(867)
											Dynamic tmp64;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(867)
											tmp64 = format->format->color;
											HX_STACK_LINE(867)
											FormatAdjusted->color = tmp64;
										}
										HX_STACK_LINE(867)
										::openfl::_legacy::text::TextField tmp60 = this->_textField;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(867)
										::openfl::_legacy::text::TextFormat tmp61 = FormatAdjusted;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(867)
										int tmp62 = format->start;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(867)
										int tmp63 = format->end;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(867)
										::openfl::_legacy::text::TextField tmp64 = this->_textField;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(867)
										::String tmp65 = tmp64->get_text();		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(867)
										int tmp66 = tmp65.length;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(867)
										Float tmp67 = ::Math_obj::min(tmp63,tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(867)
										int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(867)
										tmp60->setTextFormat(tmp61,tmp62,tmp68);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(872)
				::openfl::_legacy::text::TextFormat tmp35 = this->_formatAdjusted;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(872)
				::openfl::_legacy::text::TextFormat FormatAdjusted = tmp35;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(872)
				Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(872)
				{
					HX_STACK_LINE(872)
					::openfl::_legacy::text::TextFormat tmp37 = this->_defaultFormat;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(872)
					tmp36 = tmp37->color;
				}
				HX_STACK_LINE(872)
				FormatAdjusted->color = tmp36;
				HX_STACK_LINE(872)
				{
					HX_STACK_LINE(872)
					::openfl::_legacy::text::TextField tmp37 = this->_textField;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(872)
					::openfl::_legacy::text::TextFormat tmp38 = FormatAdjusted;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(872)
					::openfl::_legacy::text::TextField tmp39 = this->_textField;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(872)
					::String tmp40 = tmp39->get_text();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(872)
					int tmp41 = tmp40.length;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(872)
					tmp37->setTextFormat(tmp38,(int)0,tmp41);
				}
				HX_STACK_LINE(872)
				{
					HX_STACK_LINE(872)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(872)
					Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(872)
					while((true)){
						HX_STACK_LINE(872)
						bool tmp37 = (_g < _g1->length);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(872)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(872)
						if ((tmp38)){
							HX_STACK_LINE(872)
							break;
						}
						HX_STACK_LINE(872)
						::flixel::text::FlxTextFormat tmp39 = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(872)
						::flixel::text::FlxTextFormat format = tmp39;		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(872)
						++(_g);
						HX_STACK_LINE(872)
						::openfl::_legacy::text::TextField tmp40 = this->_textField;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(872)
						::String tmp41 = tmp40->get_text();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(872)
						int tmp42 = tmp41.length;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(872)
						int tmp43 = (tmp42 - (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(872)
						int tmp44 = format->start;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(872)
						bool tmp45 = (tmp43 < tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(872)
						if ((tmp45)){
							HX_STACK_LINE(872)
							break;
						}
						else{
							HX_STACK_LINE(872)
							::String tmp46 = format->format->font;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(872)
							FormatAdjusted->font = tmp46;
							HX_STACK_LINE(872)
							Dynamic tmp47 = format->format->bold;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(872)
							FormatAdjusted->bold = tmp47;
							HX_STACK_LINE(872)
							Dynamic tmp48 = format->format->italic;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(872)
							FormatAdjusted->italic = tmp48;
							HX_STACK_LINE(872)
							Dynamic tmp49 = format->format->size;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(872)
							FormatAdjusted->size = tmp49;
							HX_STACK_LINE(872)
							Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(872)
							tmp50 = format->format->color;
							HX_STACK_LINE(872)
							FormatAdjusted->color = tmp50;
						}
						HX_STACK_LINE(872)
						::openfl::_legacy::text::TextField tmp46 = this->_textField;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(872)
						::openfl::_legacy::text::TextFormat tmp47 = FormatAdjusted;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(872)
						int tmp48 = format->start;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(872)
						int tmp49 = format->end;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(872)
						::openfl::_legacy::text::TextField tmp50 = this->_textField;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(872)
						::String tmp51 = tmp50->get_text();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(872)
						int tmp52 = tmp51.length;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(872)
						Float tmp53 = ::Math_obj::min(tmp49,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(872)
						int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(872)
						tmp46->setTextFormat(tmp47,tmp48,tmp54);
					}
				}
			}
			HX_STACK_LINE(876)
			::flixel::util::loaders::CachedGraphics tmp35 = this->cachedGraphics;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(876)
			::openfl::_legacy::text::TextField tmp36 = this->_textField;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(876)
			::openfl::_legacy::geom::Matrix tmp37 = this->_matrix;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(876)
			tmp35->bitmap->draw(tmp36,tmp37,null(),null(),null(),null());
		}
		HX_STACK_LINE(879)
		this->dirty = false;
		HX_STACK_LINE(882)
		bool tmp8 = RunOnCpp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(882)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(882)
		if ((tmp9)){
			HX_STACK_LINE(884)
			return null();
		}
		HX_STACK_LINE(889)
		::openfl::_legacy::display::BitmapData tmp10 = this->framePixels;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(889)
		bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(889)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(889)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(889)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(889)
		if ((tmp13)){
			HX_STACK_LINE(889)
			::openfl::_legacy::display::BitmapData tmp15 = this->framePixels;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(889)
			::openfl::_legacy::display::BitmapData tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(889)
			::openfl::_legacy::display::BitmapData tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(889)
			int tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(889)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(889)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(889)
			::flixel::util::loaders::CachedGraphics tmp21 = this->cachedGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(889)
			::flixel::util::loaders::CachedGraphics tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(889)
			::flixel::util::loaders::CachedGraphics tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(889)
			int tmp24 = tmp23->bitmap->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(889)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(889)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(889)
			tmp14 = (tmp20 != tmp26);
		}
		else{
			HX_STACK_LINE(889)
			tmp14 = true;
		}
		HX_STACK_LINE(889)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(889)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(889)
		if ((tmp15)){
			HX_STACK_LINE(889)
			::openfl::_legacy::display::BitmapData tmp17 = this->framePixels;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(889)
			::openfl::_legacy::display::BitmapData tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(889)
			int tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(889)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(889)
			::flixel::util::loaders::CachedGraphics tmp21 = this->cachedGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(889)
			::flixel::util::loaders::CachedGraphics tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(889)
			int tmp23 = tmp22->bitmap->get_height();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(889)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(889)
			tmp16 = (tmp20 != tmp24);
		}
		else{
			HX_STACK_LINE(889)
			tmp16 = true;
		}
		HX_STACK_LINE(889)
		if ((tmp16)){
			HX_STACK_LINE(891)
			::openfl::_legacy::display::BitmapData tmp17 = this->framePixels;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(891)
			::openfl::_legacy::display::BitmapData tmp18 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(891)
			this->framePixels = tmp18;
			HX_STACK_LINE(892)
			::flixel::util::loaders::CachedGraphics tmp19 = this->cachedGraphics;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(892)
			int tmp20 = tmp19->bitmap->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(892)
			::flixel::util::loaders::CachedGraphics tmp21 = this->cachedGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(892)
			int tmp22 = tmp21->bitmap->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(892)
			::openfl::_legacy::display::BitmapData tmp23 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp20,tmp22,true,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(892)
			this->framePixels = tmp23;
		}
		HX_STACK_LINE(895)
		::openfl::_legacy::display::BitmapData tmp17 = this->framePixels;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(895)
		::flixel::util::loaders::CachedGraphics tmp18 = this->cachedGraphics;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(895)
		::openfl::_legacy::display::BitmapData tmp19 = tmp18->bitmap;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(895)
		::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(895)
		::openfl::_legacy::geom::Point tmp21 = this->_flashPointZero;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(895)
		tmp17->copyPixels(tmp19,tmp20,tmp21,null(),null(),null());
		HX_STACK_LINE(897)
		bool tmp22 = this->useColorTransform;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(897)
		if ((tmp22)){
			HX_STACK_LINE(899)
			::openfl::_legacy::display::BitmapData tmp23 = this->framePixels;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(899)
			::openfl::_legacy::geom::Rectangle tmp24 = this->_flashRect;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(899)
			::openfl::_legacy::geom::ColorTransform tmp25 = this->colorTransform;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(899)
			tmp23->colorTransform(tmp24,tmp25);
		}
	}
return null();
}


::openfl::_legacy::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",909,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(910)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(910)
	::openfl::_legacy::text::TextFormat tmp1 = tmp->get_defaultTextFormat();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(910)
	::openfl::_legacy::text::TextFormat defaultTextFormat = tmp1;		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(912)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(912)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_FRAME("flixel.text.FlxText","convertTextAlignmentFromString",0xca79ae3c,"flixel.text.FlxText.convertTextAlignmentFromString","flixel/text/FlxText.hx",919,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StrAlign,"StrAlign")
	HX_STACK_LINE(920)
	bool tmp = (StrAlign == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	if ((tmp)){
		HX_STACK_LINE(922)
		::String tmp1 = ::openfl::_legacy::text::TextFormatAlign_obj::RIGHT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(922)
		return tmp1;
	}
	else{
		HX_STACK_LINE(924)
		bool tmp1 = (StrAlign == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(924)
		if ((tmp1)){
			HX_STACK_LINE(926)
			::String tmp2 = ::openfl::_legacy::text::TextFormatAlign_obj::CENTER;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(926)
			return tmp2;
		}
		else{
			HX_STACK_LINE(928)
			bool tmp2 = (StrAlign == HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(928)
			if ((tmp2)){
				HX_STACK_LINE(930)
				::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::JUSTIFY;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(930)
				return tmp3;
			}
			else{
				HX_STACK_LINE(934)
				::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::LEFT;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(934)
				return tmp3;
			}
		}
	}
	HX_STACK_LINE(920)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

Void FlxText_obj::updateFormat( ::openfl::_legacy::text::TextFormat Format){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateFormat",0x38308a9e,"flixel.text.FlxText.updateFormat","flixel/text/FlxText.hx",939,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Format,"Format")
		HX_STACK_LINE(941)
		::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(941)
		::openfl::_legacy::text::TextFormat tmp1 = Format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(941)
		::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(941)
		::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(941)
		int tmp4 = tmp3.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(941)
		tmp->setTextFormat(tmp1,(int)0,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

int FlxText_obj::BORDER_NONE;

int FlxText_obj::BORDER_SHADOW;

int FlxText_obj::BORDER_OUTLINE;

int FlxText_obj::BORDER_OUTLINE_FAST;


FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formats,"_formats");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_widthInc,"_widthInc");
	HX_MARK_MEMBER_NAME(_heightInc,"_heightInc");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formats,"_formats");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_widthInc,"_widthInc");
	HX_VISIT_MEMBER_NAME(_heightInc,"_heightInc");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return get_bold(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return get_italic(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == hx::paccAlways) return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"_formats") ) { return _formats; }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { if (inCallProp == hx::paccAlways) return get_textField(); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { return _widthInc; }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		if (HX_FIELD_EQ(inName,"_heightInc") ) { return _heightInc; }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textField") ) { return get_textField_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return set_bold(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return set_italic(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"_formats") ) { _formats=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { _widthInc=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return set_fieldWidth(inValue); }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_heightInc") ) { _heightInc=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == hx::paccAlways) return set_borderStyle(inValue);borderStyle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == hx::paccAlways) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde"));
	outFields->push(HX_HCSTRING("systemFont","\x5e","\xc4","\x43","\xf2"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"));
	outFields->push(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("fieldWidth","\xec","\x2e","\xe5","\x97"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"));
	outFields->push(HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5"));
	outFields->push(HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"));
	outFields->push(HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"));
	outFields->push(HX_HCSTRING("_formats","\xdd","\x1a","\xe7","\x18"));
	outFields->push(HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"));
	outFields->push(HX_HCSTRING("_widthInc","\xd7","\x0d","\x78","\xf7"));
	outFields->push(HX_HCSTRING("_heightInc","\xf8","\xe2","\x3c","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxText_obj,borderStyle),HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(FlxText_obj,_textField),HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formats),HX_HCSTRING("_formats","\xdd","\x1a","\xe7","\x18")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_filters),HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42")},
	{hx::fsInt,(int)offsetof(FlxText_obj,_widthInc),HX_HCSTRING("_widthInc","\xd7","\x0d","\x78","\xf7")},
	{hx::fsInt,(int)offsetof(FlxText_obj,_heightInc),HX_HCSTRING("_heightInc","\xf8","\xe2","\x3c","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxText_obj::BORDER_NONE,HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38")},
	{hx::fsInt,(void *) &FlxText_obj::BORDER_SHADOW,HX_HCSTRING("BORDER_SHADOW","\x13","\xc2","\x0d","\x0c")},
	{hx::fsInt,(void *) &FlxText_obj::BORDER_OUTLINE,HX_HCSTRING("BORDER_OUTLINE","\xcf","\x09","\x2c","\x02")},
	{hx::fsInt,(void *) &FlxText_obj::BORDER_OUTLINE_FAST,HX_HCSTRING("BORDER_OUTLINE_FAST","\x4c","\xae","\xfa","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"),
	HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"),
	HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5"),
	HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"),
	HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"),
	HX_HCSTRING("_formats","\xdd","\x1a","\xe7","\x18"),
	HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"),
	HX_HCSTRING("_widthInc","\xd7","\x0d","\x78","\xf7"),
	HX_HCSTRING("_heightInc","\xf8","\xe2","\x3c","\x0a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addFormat","\x38","\xc4","\xb2","\xb5"),
	HX_HCSTRING("removeFormat","\x9b","\x2a","\xbc","\x6c"),
	HX_HCSTRING("clearFormats","\x4f","\x73","\xad","\xba"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setBorderStyle","\x23","\xac","\x54","\xb8"),
	HX_HCSTRING("addFilter","\xb9","\x54","\x59","\x3d"),
	HX_HCSTRING("removeFilter","\x1c","\xbb","\x62","\xf4"),
	HX_HCSTRING("clearFilters","\xae","\x53","\xc5","\xe4"),
	HX_HCSTRING("updateFrameData","\xae","\xe5","\x6e","\x7f"),
	HX_HCSTRING("applyFormats","\x8e","\x0d","\x9c","\x1e"),
	HX_HCSTRING("set_fieldWidth","\xa9","\x9f","\xfa","\x2d"),
	HX_HCSTRING("get_fieldWidth","\x35","\xb7","\xda","\x0d"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_embedded","\x93","\xcd","\x7b","\x93"),
	HX_HCSTRING("get_systemFont","\xa7","\x4c","\x39","\x68"),
	HX_HCSTRING("set_systemFont","\x1b","\x35","\x59","\x88"),
	HX_HCSTRING("get_bold","\x0e","\x3d","\xd6","\xc0"),
	HX_HCSTRING("set_bold","\x82","\x96","\x33","\x6f"),
	HX_HCSTRING("get_italic","\xb9","\x9e","\xeb","\xf6"),
	HX_HCSTRING("set_italic","\x2d","\x3d","\x69","\xfa"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("get_alignment","\xba","\xb6","\xa1","\xab"),
	HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"),
	HX_HCSTRING("set_borderStyle","\x48","\xa5","\x43","\xcd"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("set_borderQuality","\x96","\x78","\x03","\xa3"),
	HX_HCSTRING("get_textField","\xa4","\xf8","\xe4","\x5a"),
	HX_HCSTRING("set_cachedGraphics","\x0a","\xda","\x6a","\x26"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("regenGraphics","\xa8","\x68","\xf1","\x46"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("dtfCopy","\xab","\x51","\x45","\x87"),
	HX_HCSTRING("convertTextAlignmentFromString","\x3e","\x62","\x06","\xb9"),
	HX_HCSTRING("updateFormat","\x20","\x36","\x52","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

#endif

hx::Class FlxText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BORDER_NONE","\x2b","\x26","\x75","\x38"),
	HX_HCSTRING("BORDER_SHADOW","\x13","\xc2","\x0d","\x0c"),
	HX_HCSTRING("BORDER_OUTLINE","\xcf","\x09","\x2c","\x02"),
	HX_HCSTRING("BORDER_OUTLINE_FAST","\x4c","\xae","\xfa","\x79"),
	::String(null()) };

void FlxText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxText","\xb0","\x4a","\x1b","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxText_obj >;
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

void FlxText_obj::__boot()
{
	BORDER_NONE= (int)0;
	BORDER_SHADOW= (int)1;
	BORDER_OUTLINE= (int)2;
	BORDER_OUTLINE_FAST= (int)3;
}

} // end namespace flixel
} // end namespace text
