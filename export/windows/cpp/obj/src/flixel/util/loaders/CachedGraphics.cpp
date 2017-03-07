#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{
namespace loaders{

Void CachedGraphics_obj::__construct(::String Key,::openfl::_legacy::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist)
{
HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","new",0xc149abe7,"flixel.util.loaders.CachedGraphics.new","flixel/util/loaders/CachedGraphics.hx",10,0x7a61d3e8)
HX_STACK_THIS(this)
HX_STACK_ARG(Key,"Key")
HX_STACK_ARG(Bitmap,"Bitmap")
HX_STACK_ARG(__o_Persist,"Persist")
bool Persist = __o_Persist.Default(false);
{
	HX_STACK_LINE(57)
	this->useCount = (int)0;
	HX_STACK_LINE(46)
	this->isDumped = false;
	HX_STACK_LINE(41)
	this->destroyOnNoUse = true;
	HX_STACK_LINE(36)
	this->persist = false;
	HX_STACK_LINE(63)
	this->key = Key;
	HX_STACK_LINE(64)
	this->bitmap = Bitmap;
	HX_STACK_LINE(65)
	this->persist = Persist;
}
;
	return null();
}

//CachedGraphics_obj::~CachedGraphics_obj() { }

Dynamic CachedGraphics_obj::__CreateEmpty() { return  new CachedGraphics_obj; }
hx::ObjectPtr< CachedGraphics_obj > CachedGraphics_obj::__new(::String Key,::openfl::_legacy::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist)
{  hx::ObjectPtr< CachedGraphics_obj > _result_ = new CachedGraphics_obj();
	_result_->__construct(Key,Bitmap,__o_Persist);
	return _result_;}

Dynamic CachedGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CachedGraphics_obj > _result_ = new CachedGraphics_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void CachedGraphics_obj::dump( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","dump",0x589cb7cd,"flixel.util.loaders.CachedGraphics.dump","flixel/util/loaders/CachedGraphics.hx",73,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(76)
			::String tmp4 = this->assetsKey;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(76)
			tmp3 = true;
		}
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(78)
			::openfl::_legacy::display::BitmapData tmp4 = this->bitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			tmp4->dumpBits();
			HX_STACK_LINE(79)
			this->isDumped = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,dump,(void))

Void CachedGraphics_obj::undump( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","undump",0x016856e6,"flixel.util.loaders.CachedGraphics.undump","flixel/util/loaders/CachedGraphics.hx",89,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		bool tmp = this->isDumped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		if ((tmp)){
			HX_STACK_LINE(93)
			::openfl::_legacy::display::BitmapData tmp1 = this->getBitmapFromSystem();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			::openfl::_legacy::display::BitmapData newBitmap = tmp1;		HX_STACK_VAR(newBitmap,"newBitmap");
			HX_STACK_LINE(95)
			bool tmp2 = (newBitmap != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			if ((tmp2)){
				HX_STACK_LINE(97)
				this->bitmap = newBitmap;
				HX_STACK_LINE(98)
				::flixel::_system::layer::TileSheetData tmp3 = this->_tilesheet;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(98)
				if ((tmp4)){
					HX_STACK_LINE(101)
					::flixel::_system::layer::TileSheetData tmp5 = this->_tilesheet;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					::openfl::_legacy::display::BitmapData tmp6 = newBitmap;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(101)
					tmp5->__Field(HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"), hx::paccDynamic )(tmp6);
				}
			}
			HX_STACK_LINE(105)
			this->isDumped = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,undump,(void))

Void CachedGraphics_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","onContext",0x22400957,"flixel.util.loaders.CachedGraphics.onContext","flixel/util/loaders/CachedGraphics.hx",115,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		bool tmp = this->isDumped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(119)
			this->undump();
			HX_STACK_LINE(120)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,onContext,(void))

::flixel::util::loaders::TextureRegion CachedGraphics_obj::getRegionForFrame( ::String FrameName){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","getRegionForFrame",0x4be29a75,"flixel.util.loaders.CachedGraphics.getRegionForFrame","flixel/util/loaders/CachedGraphics.hx",125,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FrameName,"FrameName")
	HX_STACK_LINE(126)
	::flixel::util::loaders::TextureRegion tmp = ::flixel::util::loaders::TextureRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::flixel::util::loaders::TextureRegion region = tmp;		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(127)
	::flixel::_system::layer::frames::FlxFrame tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::flixel::_system::layer::TileSheetData tmp2 = this->get_tilesheet();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		::flixel::_system::layer::TileSheetData _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(127)
		::String tmp3 = FrameName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(127)
		::flixel::_system::layer::frames::FlxFrame tmp4 = _this->__Field(HX_HCSTRING("flxFrames","\xb8","\xc9","\xa1","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		tmp1 = tmp4;
	}
	HX_STACK_LINE(127)
	::flixel::_system::layer::frames::FlxFrame frame = tmp1;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(129)
	bool tmp2 = (frame != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	if ((tmp2)){
		HX_STACK_LINE(131)
		Float tmp3 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		region->region->__FieldRef(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05")) = tmp4;
		HX_STACK_LINE(132)
		Float tmp5 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		region->region->__FieldRef(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05")) = tmp6;
		HX_STACK_LINE(133)
		Float tmp7 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		region->region->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp8;
		HX_STACK_LINE(134)
		Float tmp9 = frame->__Field(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		region->region->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp10;
	}
	HX_STACK_LINE(137)
	::flixel::util::loaders::TextureRegion tmp3 = region;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,getRegionForFrame,return )

Void CachedGraphics_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","destroy",0x801dd801,"flixel.util.loaders.CachedGraphics.destroy","flixel/util/loaders/CachedGraphics.hx",141,0x7a61d3e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::openfl::_legacy::display::BitmapData tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::openfl::_legacy::display::BitmapData tmp1 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		this->bitmap = tmp1;
		HX_STACK_LINE(143)
		::flixel::util::loaders::TexturePackerData tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		::flixel::util::loaders::TexturePackerData tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		this->data = tmp3;
		HX_STACK_LINE(144)
		::flixel::_system::layer::TileSheetData tmp4 = this->_tilesheet;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		::flixel::_system::layer::TileSheetData tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		this->_tilesheet = tmp5;
		HX_STACK_LINE(145)
		this->key = null();
		HX_STACK_LINE(146)
		this->assetsKey = null();
		HX_STACK_LINE(147)
		this->assetsClass = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,destroy,(void))

::flixel::_system::layer::TileSheetData CachedGraphics_obj::get_tilesheet( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","get_tilesheet",0xd5f1cecf,"flixel.util.loaders.CachedGraphics.get_tilesheet","flixel/util/loaders/CachedGraphics.hx",151,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::flixel::_system::layer::TileSheetData tmp = this->_tilesheet;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	if ((tmp1)){
		HX_STACK_LINE(154)
		bool tmp2 = this->isDumped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(156)
			this->onContext();
		}
		HX_STACK_LINE(159)
		::openfl::_legacy::display::BitmapData tmp3 = this->bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		::flixel::_system::layer::TileSheetData tmp4 = ::flixel::_system::layer::TileSheetData_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		this->_tilesheet = tmp4;
	}
	HX_STACK_LINE(162)
	::flixel::_system::layer::TileSheetData tmp2 = this->_tilesheet;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_tilesheet,return )

::openfl::_legacy::display::BitmapData CachedGraphics_obj::getBitmapFromSystem( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","getBitmapFromSystem",0xd5289305,"flixel.util.loaders.CachedGraphics.getBitmapFromSystem","flixel/util/loaders/CachedGraphics.hx",166,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::openfl::_legacy::display::BitmapData newBitmap = null();		HX_STACK_VAR(newBitmap,"newBitmap");
	HX_STACK_LINE(168)
	::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp1)){
		HX_STACK_LINE(170)
		::hx::Class tmp2 = this->assetsClass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::hx::Class tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp3 = hx::TCast< ::hx::Class >::cast(tmp2);
		HX_STACK_LINE(170)
		::openfl::_legacy::display::BitmapData tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		newBitmap = tmp4;
	}
	else{
		HX_STACK_LINE(172)
		::String tmp2 = this->assetsKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		if ((tmp3)){
			HX_STACK_LINE(174)
			::String tmp4 = this->assetsKey;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			newBitmap = tmp5;
		}
	}
	HX_STACK_LINE(177)
	::openfl::_legacy::display::BitmapData tmp2 = newBitmap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,getBitmapFromSystem,return )

bool CachedGraphics_obj::get_canBeDumped( ){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","get_canBeDumped",0x64ad8a84,"flixel.util.loaders.CachedGraphics.get_canBeDumped","flixel/util/loaders/CachedGraphics.hx",181,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	::hx::Class tmp = this->assetsClass;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	if ((tmp2)){
		HX_STACK_LINE(182)
		::String tmp4 = this->assetsKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(182)
		tmp3 = true;
	}
	HX_STACK_LINE(182)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(CachedGraphics_obj,get_canBeDumped,return )

int CachedGraphics_obj::set_useCount( int Value){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","set_useCount",0xf01d7a1e,"flixel.util.loaders.CachedGraphics.set_useCount","flixel/util/loaders/CachedGraphics.hx",186,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(187)
	bool tmp = (Value <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp1)){
		HX_STACK_LINE(187)
		tmp2 = this->destroyOnNoUse;
	}
	else{
		HX_STACK_LINE(187)
		tmp2 = false;
	}
	HX_STACK_LINE(187)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(187)
		bool tmp4 = this->persist;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		tmp3 = !(tmp6);
	}
	else{
		HX_STACK_LINE(187)
		tmp3 = false;
	}
	HX_STACK_LINE(187)
	if ((tmp3)){
		HX_STACK_LINE(189)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		::String tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		tmp4->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
	}
	HX_STACK_LINE(192)
	int tmp4 = this->useCount = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(192)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,set_useCount,return )

bool CachedGraphics_obj::set_destroyOnNoUse( bool Value){
	HX_STACK_FRAME("flixel.util.loaders.CachedGraphics","set_destroyOnNoUse",0xf2e436a3,"flixel.util.loaders.CachedGraphics.set_destroyOnNoUse","flixel/util/loaders/CachedGraphics.hx",196,0x7a61d3e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(197)
	bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	if ((tmp1)){
		HX_STACK_LINE(197)
		int tmp3 = this->useCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		tmp2 = (tmp5 == (int)0);
	}
	else{
		HX_STACK_LINE(197)
		tmp2 = false;
	}
	HX_STACK_LINE(197)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	if ((tmp3)){
		HX_STACK_LINE(197)
		::String tmp5 = this->key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		tmp4 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(197)
		tmp4 = false;
	}
	HX_STACK_LINE(197)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(197)
	if ((tmp4)){
		HX_STACK_LINE(197)
		bool tmp6 = this->persist;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		tmp5 = !(tmp8);
	}
	else{
		HX_STACK_LINE(197)
		tmp5 = false;
	}
	HX_STACK_LINE(197)
	if ((tmp5)){
		HX_STACK_LINE(199)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp6 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		::String tmp7 = this->key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		tmp6->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp7);
	}
	HX_STACK_LINE(202)
	bool tmp6 = this->destroyOnNoUse = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(CachedGraphics_obj,set_destroyOnNoUse,return )


CachedGraphics_obj::CachedGraphics_obj()
{
}

void CachedGraphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CachedGraphics);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(useCount,"useCount");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_END_CLASS();
}

void CachedGraphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(useCount,"useCount");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
}

Dynamic CachedGraphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"undump") ) { return undump_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return isDumped; }
		if (HX_FIELD_EQ(inName,"useCount") ) { return useCount; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return assetsKey; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return inCallProp == hx::paccAlways ? get_tilesheet() : tilesheet; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return assetsClass; }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { if (inCallProp == hx::paccAlways) return get_canBeDumped(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return set_useCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tilesheet") ) { return get_tilesheet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return destroyOnNoUse; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return get_canBeDumped_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRegionForFrame") ) { return getRegionForFrame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return set_destroyOnNoUse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return getBitmapFromSystem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CachedGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flixel::util::loaders::TexturePackerData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { if (inCallProp == hx::paccAlways) return set_useCount(inValue);useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::flixel::_system::layer::TileSheetData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::flixel::_system::layer::TileSheetData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == hx::paccAlways) return set_destroyOnNoUse(inValue);destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CachedGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CachedGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6"));
	outFields->push(HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("persist","\x14","\x22","\x71","\x83"));
	outFields->push(HX_HCSTRING("destroyOnNoUse","\x0d","\xef","\x5c","\xa2"));
	outFields->push(HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa"));
	outFields->push(HX_HCSTRING("canBeDumped","\xe6","\x48","\x77","\x53"));
	outFields->push(HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74"));
	outFields->push(HX_HCSTRING("useCount","\x08","\xa7","\xce","\x11"));
	outFields->push(HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CachedGraphics_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(CachedGraphics_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsString,(int)offsetof(CachedGraphics_obj,assetsKey),HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(CachedGraphics_obj,assetsClass),HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37")},
	{hx::fsObject /*::flixel::util::loaders::TexturePackerData*/ ,(int)offsetof(CachedGraphics_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,persist),HX_HCSTRING("persist","\x14","\x22","\x71","\x83")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,destroyOnNoUse),HX_HCSTRING("destroyOnNoUse","\x0d","\xef","\x5c","\xa2")},
	{hx::fsBool,(int)offsetof(CachedGraphics_obj,isDumped),HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa")},
	{hx::fsObject /*::flixel::_system::layer::TileSheetData*/ ,(int)offsetof(CachedGraphics_obj,tilesheet),HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74")},
	{hx::fsInt,(int)offsetof(CachedGraphics_obj,useCount),HX_HCSTRING("useCount","\x08","\xa7","\xce","\x11")},
	{hx::fsObject /*::flixel::_system::layer::TileSheetData*/ ,(int)offsetof(CachedGraphics_obj,_tilesheet),HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("assetsKey","\xdc","\xec","\x09","\xc6"),
	HX_HCSTRING("assetsClass","\xb5","\xe4","\x5d","\x37"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("persist","\x14","\x22","\x71","\x83"),
	HX_HCSTRING("destroyOnNoUse","\x0d","\xef","\x5c","\xa2"),
	HX_HCSTRING("isDumped","\x1d","\x26","\x5d","\xfa"),
	HX_HCSTRING("tilesheet","\xb1","\xd0","\x4d","\x74"),
	HX_HCSTRING("useCount","\x08","\xa7","\xce","\x11"),
	HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"),
	HX_HCSTRING("dump","\x34","\x7d","\x72","\x42"),
	HX_HCSTRING("undump","\x0d","\x84","\x47","\x60"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("getRegionForFrame","\xae","\x40","\xd2","\xd5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_tilesheet","\x88","\xa4","\xb1","\x35"),
	HX_HCSTRING("getBitmapFromSystem","\x7e","\xf9","\xf8","\x76"),
	HX_HCSTRING("get_canBeDumped","\x7d","\x00","\x59","\x14"),
	HX_HCSTRING("set_useCount","\x85","\x7e","\xe1","\xdb"),
	HX_HCSTRING("set_destroyOnNoUse","\x4a","\x02","\xa6","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CachedGraphics_obj::__mClass,"__mClass");
};

#endif

hx::Class CachedGraphics_obj::__mClass;

void CachedGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.loaders.CachedGraphics","\x75","\x2c","\x26","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CachedGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CachedGraphics_obj >;
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
} // end namespace util
} // end namespace loaders
