#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
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
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
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
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",22,0x91a05ae2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->clearCache();
}
;
	return null();
}

//BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > _result_ = new BitmapFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",31,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::flixel::util::loaders::CachedGraphics tmp = this->_whitePixel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(34)
		::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new((int)2,(int)2,true,(int)-1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::openfl::_legacy::display::BitmapData bd = tmp2;		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(35)
		::flixel::util::loaders::CachedGraphics tmp3 = ::flixel::util::loaders::CachedGraphics_obj::__new(HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"),bd,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		this->_whitePixel = tmp3;
		HX_STACK_LINE(36)
		::flixel::util::loaders::CachedGraphics tmp4 = this->_whitePixel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		tmp4->persist = true;
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::flixel::util::loaders::CachedGraphics tmp5 = this->_whitePixel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			::flixel::_system::layer::TileSheetData tmp6 = tmp5->get_tilesheet();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			::flixel::_system::layer::TileSheetData _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Rectangle tmp7 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Rectangle tileRect = tmp7;		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Point point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Rectangle tmp9 = tileRect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Point tmp10 = point;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			_this->__Field(HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"), hx::paccDynamic )->__Field(HX_HCSTRING("addTileRectID","\x4e","\x3d","\xd0","\xcc"), hx::paccDynamic )(tmp9,tmp10);
		}
	}
	HX_STACK_LINE(40)
	::flixel::util::loaders::CachedGraphics tmp2 = this->_whitePixel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",44,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(47)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(51)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(51)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(51)
					::flixel::util::loaders::CachedGraphics tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					obj = tmp6;
					HX_STACK_LINE(52)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(52)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(52)
					if ((tmp7)){
						HX_STACK_LINE(52)
						tmp8 = obj->isDumped;
					}
					else{
						HX_STACK_LINE(52)
						tmp8 = false;
					}
					HX_STACK_LINE(52)
					if ((tmp8)){
						HX_STACK_LINE(54)
						obj->onContext();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",66,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(74)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(74)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(74)
					::flixel::util::loaders::CachedGraphics tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					obj = tmp6;
					HX_STACK_LINE(75)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(75)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(75)
					if ((tmp7)){
						HX_STACK_LINE(75)
						bool tmp9 = (obj->assetsClass != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(75)
						bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(75)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(75)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(75)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(75)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(75)
						if ((tmp14)){
							HX_STACK_LINE(75)
							tmp8 = (obj->assetsKey != null());
						}
						else{
							HX_STACK_LINE(75)
							tmp8 = true;
						}
					}
					else{
						HX_STACK_LINE(75)
						tmp8 = false;
					}
					HX_STACK_LINE(75)
					if ((tmp8)){
						HX_STACK_LINE(77)
						obj->dump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",91,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(92)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	bool tmp3 = tmp->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	if ((tmp3)){
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp5 = this->_cache;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::String tmp7 = Key;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		::flixel::util::loaders::CachedGraphics tmp9 = tmp6->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		::flixel::util::loaders::CachedGraphics tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(92)
		::flixel::util::loaders::CachedGraphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(92)
		tmp4 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(92)
		tmp4 = false;
	}
	HX_STACK_LINE(92)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",106,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(107)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(108)
		bool tmp = (key == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		if ((tmp)){
			HX_STACK_LINE(110)
			::String tmp1 = (Width + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			::String tmp4 = (tmp3 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			key = tmp6;
			HX_STACK_LINE(111)
			bool tmp7 = Unique;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			if ((tmp7)){
				HX_STACK_LINE(111)
				::haxe::ds::StringMap tmp9 = this->_cache;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(111)
				::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(111)
				::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(111)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(111)
				bool tmp14 = tmp10->exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(111)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(111)
				if ((tmp16)){
					HX_STACK_LINE(111)
					::haxe::ds::StringMap tmp17 = this->_cache;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(111)
					::haxe::ds::StringMap tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(111)
					::haxe::ds::StringMap tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(111)
					::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(111)
					::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(111)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(111)
					::flixel::util::loaders::CachedGraphics tmp23 = tmp19->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(111)
					::flixel::util::loaders::CachedGraphics tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(111)
					::flixel::util::loaders::CachedGraphics tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(111)
					::flixel::util::loaders::CachedGraphics tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(111)
					tmp8 = (tmp26 != null());
				}
				else{
					HX_STACK_LINE(111)
					tmp8 = false;
				}
			}
			else{
				HX_STACK_LINE(111)
				tmp8 = false;
			}
			HX_STACK_LINE(111)
			if ((tmp8)){
				HX_STACK_LINE(113)
				::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				::String tmp10 = this->getUniqueKey(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				key = tmp10;
			}
		}
		HX_STACK_LINE(116)
		::haxe::ds::StringMap tmp1 = this->_cache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		bool tmp4 = tmp1->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		if ((tmp4)){
			HX_STACK_LINE(116)
			::haxe::ds::StringMap tmp6 = this->_cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::flixel::util::loaders::CachedGraphics tmp10 = tmp7->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			::flixel::util::loaders::CachedGraphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			::flixel::util::loaders::CachedGraphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			tmp5 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(116)
			tmp5 = false;
		}
		HX_STACK_LINE(116)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		if ((tmp6)){
			HX_STACK_LINE(118)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(Width,Height,true,Color,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			::flixel::util::loaders::CachedGraphics tmp9 = ::flixel::util::loaders::CachedGraphics_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::flixel::util::loaders::CachedGraphics value = tmp9;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(118)
			::haxe::ds::StringMap tmp10 = this->_cache;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			::flixel::util::loaders::CachedGraphics tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			tmp10->set(tmp11,tmp12);
		}
		HX_STACK_LINE(121)
		::haxe::ds::StringMap tmp7 = this->_cache;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		::flixel::util::loaders::CachedGraphics tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		::flixel::util::loaders::CachedGraphics tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",133,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(134)
		Dynamic tmp = Graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		bool tmp1 = Unique;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		::String tmp2 = Key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::flixel::util::loaders::CachedGraphics tmp3 = this->addWithSpaces(tmp,(int)0,(int)0,(int)1,(int)1,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::addWithSpaces( Dynamic Graphic,int FrameWidth,int FrameHeight,hx::Null< int >  __o_SpacingX,hx::Null< int >  __o_SpacingY,hx::Null< bool >  __o_Unique,::String Key){
int SpacingX = __o_SpacingX.Default(1);
int SpacingY = __o_SpacingY.Default(1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addWithSpaces",0x971bd0e1,"flixel.system.frontEnds.BitmapFrontEnd.addWithSpaces","flixel/system/frontEnds/BitmapFrontEnd.hx",151,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(FrameWidth,"FrameWidth")
	HX_STACK_ARG(FrameHeight,"FrameHeight")
	HX_STACK_ARG(SpacingX,"SpacingX")
	HX_STACK_ARG(SpacingY,"SpacingY")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(152)
		bool tmp = (Graphic == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		if ((tmp)){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(157)
		::flixel::util::loaders::TextureRegion region = null();		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(158)
		::flixel::util::loaders::CachedGraphics graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(160)
		bool isClass = false;		HX_STACK_VAR(isClass,"isClass");
		HX_STACK_LINE(161)
		bool isBitmap = false;		HX_STACK_VAR(isBitmap,"isBitmap");
		HX_STACK_LINE(162)
		bool isRegion = false;		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(163)
		bool isGraphics = false;		HX_STACK_VAR(isGraphics,"isGraphics");
		HX_STACK_LINE(165)
		Dynamic tmp1 = Graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(167)
			isGraphics = true;
			HX_STACK_LINE(168)
			::flixel::util::loaders::CachedGraphics tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			tmp3 = hx::TCast< ::flixel::util::loaders::CachedGraphics >::cast(Graphic);
			HX_STACK_LINE(168)
			graphic = tmp3;
			HX_STACK_LINE(170)
			bool tmp4 = Unique;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			if ((tmp6)){
				HX_STACK_LINE(170)
				bool tmp8 = (FrameWidth <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				if ((tmp10)){
					HX_STACK_LINE(170)
					tmp7 = (FrameHeight <= (int)0);
				}
				else{
					HX_STACK_LINE(170)
					tmp7 = false;
				}
			}
			else{
				HX_STACK_LINE(170)
				tmp7 = false;
			}
			HX_STACK_LINE(170)
			if ((tmp7)){
				HX_STACK_LINE(172)
				::flixel::util::loaders::CachedGraphics tmp8 = graphic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				return tmp8;
			}
		}
		else{
			HX_STACK_LINE(175)
			Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(177)
				isClass = true;
			}
			else{
				HX_STACK_LINE(179)
				Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(179)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(179)
				if ((tmp6)){
					HX_STACK_LINE(181)
					isBitmap = true;
				}
				else{
					HX_STACK_LINE(183)
					Dynamic tmp7 = Graphic;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(183)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::flixel::util::loaders::TextureRegion >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(183)
					if ((tmp8)){
						HX_STACK_LINE(185)
						isRegion = true;
						HX_STACK_LINE(186)
						::flixel::util::loaders::TextureRegion tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(186)
						tmp9 = hx::TCast< ::flixel::util::loaders::TextureRegion >::cast(Graphic);
						HX_STACK_LINE(186)
						region = tmp9;
					}
					else{
						HX_STACK_LINE(188)
						Dynamic tmp9 = Graphic;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(188)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(188)
						if ((tmp10)){
						}
						else{
							HX_STACK_LINE(194)
							return null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(197)
		::String additionalKey = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(additionalKey,"additionalKey");
		HX_STACK_LINE(199)
		bool tmp3 = (FrameWidth > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		if ((tmp4)){
			HX_STACK_LINE(199)
			tmp5 = (FrameHeight > (int)0);
		}
		else{
			HX_STACK_LINE(199)
			tmp5 = true;
		}
		HX_STACK_LINE(199)
		if ((tmp5)){
			HX_STACK_LINE(201)
			::String tmp6 = (HX_HCSTRING("FrameSize:","\x0c","\x41","\xb0","\x56") + FrameWidth);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			::String tmp7 = (tmp6 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			int tmp8 = FrameHeight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(201)
			::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(201)
			::String tmp10 = (tmp9 + HX_HCSTRING("_Spacing:","\xd6","\x92","\x59","\x13"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(201)
			int tmp11 = SpacingX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(201)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			::String tmp13 = (tmp12 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			int tmp14 = SpacingY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(201)
			::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(201)
			additionalKey = tmp15;
		}
		HX_STACK_LINE(204)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(205)
		bool tmp6 = (key == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		if ((tmp6)){
			HX_STACK_LINE(207)
			bool tmp7 = isClass;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(207)
			if ((tmp7)){
				HX_STACK_LINE(209)
				::hx::Class tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				tmp8 = hx::TCast< ::hx::Class >::cast(Graphic);
				HX_STACK_LINE(209)
				::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				key = tmp9;
			}
			else{
				HX_STACK_LINE(211)
				bool tmp8 = isBitmap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				if ((tmp8)){
					HX_STACK_LINE(213)
					bool tmp9 = Unique;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(213)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					if ((tmp10)){
						HX_STACK_LINE(215)
						::openfl::_legacy::display::BitmapData tmp11 = ((::openfl::_legacy::display::BitmapData)(Graphic));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(215)
						::String tmp12 = this->getCacheKeyFor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(215)
						key = tmp12;
						HX_STACK_LINE(216)
						bool tmp13 = (key == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(216)
						if ((tmp13)){
							HX_STACK_LINE(218)
							::String tmp14 = this->getUniqueKey(null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(218)
							key = tmp14;
						}
					}
				}
				else{
					HX_STACK_LINE(222)
					bool tmp9 = isRegion;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					if ((tmp9)){
						HX_STACK_LINE(224)
						::String tmp10 = region->data->key;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(224)
						key = tmp10;
					}
					else{
						HX_STACK_LINE(226)
						bool tmp10 = isGraphics;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(226)
						if ((tmp10)){
							HX_STACK_LINE(228)
							key = graphic->key;
						}
						else{
							HX_STACK_LINE(232)
							key = Graphic;
						}
					}
				}
			}
			HX_STACK_LINE(235)
			hx::AddEq(key,additionalKey);
			HX_STACK_LINE(237)
			bool tmp8 = Unique;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			if ((tmp8)){
				HX_STACK_LINE(239)
				bool tmp9 = (key == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				if ((tmp9)){
					HX_STACK_LINE(239)
					tmp10 = HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c");
				}
				else{
					HX_STACK_LINE(239)
					tmp10 = key;
				}
				HX_STACK_LINE(239)
				::String tmp11 = this->getUniqueKey(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(239)
				key = tmp11;
			}
		}
		HX_STACK_LINE(244)
		::haxe::ds::StringMap tmp7 = this->_cache;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		bool tmp10 = tmp7->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(244)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		if ((tmp10)){
			HX_STACK_LINE(244)
			::haxe::ds::StringMap tmp12 = this->_cache;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			::haxe::ds::StringMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(244)
			::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(244)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(244)
			::flixel::util::loaders::CachedGraphics tmp16 = tmp13->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			::flixel::util::loaders::CachedGraphics tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(244)
			::flixel::util::loaders::CachedGraphics tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(244)
			tmp11 = (tmp18 != null());
		}
		else{
			HX_STACK_LINE(244)
			tmp11 = false;
		}
		HX_STACK_LINE(244)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		if ((tmp12)){
			HX_STACK_LINE(246)
			::openfl::_legacy::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(247)
			bool tmp13 = isClass;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(247)
			if ((tmp13)){
				HX_STACK_LINE(249)
				::hx::Class tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				tmp14 = hx::TCast< ::hx::Class >::cast(Graphic);
				HX_STACK_LINE(249)
				::openfl::_legacy::display::BitmapData tmp15 = ::Type_obj::createInstance(tmp14,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(249)
				bd = tmp15;
			}
			else{
				HX_STACK_LINE(251)
				bool tmp14 = isBitmap;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(251)
				if ((tmp14)){
					HX_STACK_LINE(253)
					bd = ((::openfl::_legacy::display::BitmapData)(Graphic));
				}
				else{
					HX_STACK_LINE(255)
					bool tmp15 = isRegion;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(255)
					if ((tmp15)){
						HX_STACK_LINE(257)
						::openfl::_legacy::display::BitmapData tmp16 = region->data->bitmap;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(257)
						bd = tmp16;
					}
					else{
						HX_STACK_LINE(259)
						bool tmp16 = isGraphics;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(259)
						if ((tmp16)){
							HX_STACK_LINE(261)
							bd = graphic->bitmap;
						}
						else{
							HX_STACK_LINE(265)
							::openfl::_legacy::display::BitmapData tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::String id = Graphic;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(265)
								::String tmp18 = id;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(265)
								tmp17 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp18,false);
							}
							HX_STACK_LINE(265)
							bd = tmp17;
						}
					}
				}
			}
			HX_STACK_LINE(268)
			bool tmp14 = (FrameWidth > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(268)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(268)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(268)
			if ((tmp15)){
				HX_STACK_LINE(268)
				tmp16 = (FrameHeight > (int)0);
			}
			else{
				HX_STACK_LINE(268)
				tmp16 = true;
			}
			HX_STACK_LINE(268)
			if ((tmp16)){
				HX_STACK_LINE(270)
				bool tmp17 = (FrameWidth == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(270)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(270)
				if ((tmp17)){
					HX_STACK_LINE(270)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(270)
					int tmp19 = bd->get_width();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(270)
					int tmp20 = FrameWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(270)
					Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(270)
					tmp18 = ::Std_obj::_int(tmp21);
				}
				HX_STACK_LINE(270)
				int numHorizontalFrames = tmp18;		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
				HX_STACK_LINE(271)
				bool tmp19 = (FrameHeight == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(271)
				if ((tmp19)){
					HX_STACK_LINE(271)
					tmp20 = (int)1;
				}
				else{
					HX_STACK_LINE(271)
					int tmp21 = bd->get_height();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(271)
					int tmp22 = FrameHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(271)
					Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(271)
					tmp20 = ::Std_obj::_int(tmp23);
				}
				HX_STACK_LINE(271)
				int numVerticalFrames = tmp20;		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
				HX_STACK_LINE(273)
				bool tmp21 = (FrameWidth == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(273)
				int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(273)
				if ((tmp21)){
					HX_STACK_LINE(273)
					tmp22 = bd->get_width();
				}
				else{
					HX_STACK_LINE(273)
					tmp22 = FrameWidth;
				}
				HX_STACK_LINE(273)
				FrameWidth = tmp22;
				HX_STACK_LINE(274)
				bool tmp23 = (FrameHeight == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(274)
				int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(274)
				if ((tmp23)){
					HX_STACK_LINE(274)
					tmp24 = bd->get_height();
				}
				else{
					HX_STACK_LINE(274)
					tmp24 = FrameHeight;
				}
				HX_STACK_LINE(274)
				FrameHeight = tmp24;
				HX_STACK_LINE(276)
				int tmp25 = bd->get_width();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(276)
				int tmp26 = (numHorizontalFrames * SpacingX);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(276)
				int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(276)
				int tmp28 = bd->get_height();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(276)
				int tmp29 = (numVerticalFrames * SpacingY);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(276)
				int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(276)
				::openfl::_legacy::display::BitmapData tmp31 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp27,tmp30,true,(int)0,null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(276)
				::openfl::_legacy::display::BitmapData tempBitmap = tmp31;		HX_STACK_VAR(tempBitmap,"tempBitmap");
				HX_STACK_LINE(277)
				tempBitmap->lock();
				HX_STACK_LINE(278)
				::openfl::_legacy::geom::Rectangle tmp32 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,FrameWidth,FrameHeight);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(278)
				::openfl::_legacy::geom::Rectangle tempRect = tmp32;		HX_STACK_VAR(tempRect,"tempRect");
				HX_STACK_LINE(279)
				::openfl::_legacy::geom::Point tmp33 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(279)
				::openfl::_legacy::geom::Point tempPoint = tmp33;		HX_STACK_VAR(tempPoint,"tempPoint");
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(281)
					while((true)){
						HX_STACK_LINE(281)
						bool tmp34 = (_g < numHorizontalFrames);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(281)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(281)
						if ((tmp35)){
							HX_STACK_LINE(281)
							break;
						}
						HX_STACK_LINE(281)
						int tmp36 = (_g)++;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(281)
						int i = tmp36;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(283)
						int tmp37 = i;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(283)
						int tmp38 = (FrameWidth + SpacingX);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(283)
						int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(283)
						tempPoint->x = tmp39;
						HX_STACK_LINE(284)
						int tmp40 = (i * FrameWidth);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(284)
						tempRect->x = tmp40;
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(286)
							int _g1 = numVerticalFrames;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(286)
							while((true)){
								HX_STACK_LINE(286)
								bool tmp41 = (_g2 < _g1);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(286)
								bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(286)
								if ((tmp42)){
									HX_STACK_LINE(286)
									break;
								}
								HX_STACK_LINE(286)
								int tmp43 = (_g2)++;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(286)
								int j = tmp43;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(288)
								int tmp44 = j;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(288)
								int tmp45 = (FrameHeight + SpacingY);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(288)
								int tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(288)
								tempPoint->y = tmp46;
								HX_STACK_LINE(289)
								int tmp47 = (j * FrameHeight);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(289)
								tempRect->y = tmp47;
								HX_STACK_LINE(290)
								::openfl::_legacy::display::BitmapData tmp48 = bd;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(290)
								::openfl::_legacy::geom::Rectangle tmp49 = tempRect;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(290)
								::openfl::_legacy::geom::Point tmp50 = tempPoint;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(290)
								tempBitmap->copyPixels(tmp48,tmp49,tmp50,null(),null(),null());
							}
						}
					}
				}
				HX_STACK_LINE(293)
				tempBitmap->unlock(null());
				HX_STACK_LINE(294)
				bd = tempBitmap;
			}
			HX_STACK_LINE(297)
			bool tmp17 = Unique;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(297)
			if ((tmp17)){
				HX_STACK_LINE(299)
				::openfl::_legacy::display::BitmapData tmp18 = bd->clone();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(299)
				bd = tmp18;
			}
			HX_STACK_LINE(302)
			::flixel::util::loaders::CachedGraphics tmp18 = ::flixel::util::loaders::CachedGraphics_obj::__new(key,bd,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(302)
			::flixel::util::loaders::CachedGraphics co = tmp18;		HX_STACK_VAR(co,"co");
			HX_STACK_LINE(304)
			bool tmp19 = isClass;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(304)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(304)
			if ((tmp19)){
				HX_STACK_LINE(304)
				bool tmp21 = Unique;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(304)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(304)
				tmp20 = !(tmp22);
			}
			else{
				HX_STACK_LINE(304)
				tmp20 = false;
			}
			HX_STACK_LINE(304)
			if ((tmp20)){
				HX_STACK_LINE(306)
				co->assetsClass = ((::hx::Class)(Graphic));
			}
			else{
				HX_STACK_LINE(308)
				bool tmp21 = isClass;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(308)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(308)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(308)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(308)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(308)
				if ((tmp24)){
					HX_STACK_LINE(308)
					bool tmp26 = isBitmap;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(308)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(308)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(308)
					tmp25 = !(tmp28);
				}
				else{
					HX_STACK_LINE(308)
					tmp25 = false;
				}
				HX_STACK_LINE(308)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(308)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(308)
				if ((tmp26)){
					HX_STACK_LINE(308)
					bool tmp28 = isRegion;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(308)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(308)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(308)
					tmp27 = !(tmp30);
				}
				else{
					HX_STACK_LINE(308)
					tmp27 = false;
				}
				HX_STACK_LINE(308)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(308)
				if ((tmp27)){
					HX_STACK_LINE(308)
					bool tmp29 = Unique;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(308)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(308)
					tmp28 = !(tmp30);
				}
				else{
					HX_STACK_LINE(308)
					tmp28 = false;
				}
				HX_STACK_LINE(308)
				if ((tmp28)){
					HX_STACK_LINE(310)
					co->assetsKey = ((::String)(Graphic));
				}
			}
			HX_STACK_LINE(313)
			::haxe::ds::StringMap tmp21 = this->_cache;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(313)
			::String tmp22 = key;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(313)
			::flixel::util::loaders::CachedGraphics tmp23 = co;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(313)
			tmp21->set(tmp22,tmp23);
		}
		HX_STACK_LINE(316)
		::haxe::ds::StringMap tmp13 = this->_cache;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(316)
		::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(316)
		::flixel::util::loaders::CachedGraphics tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(316)
		::flixel::util::loaders::CachedGraphics tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(316)
		return tmp16;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapFrontEnd_obj,addWithSpaces,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",325,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(326)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	::flixel::util::loaders::CachedGraphics tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	::flixel::util::loaders::CachedGraphics tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::getCacheKeyFor( ::openfl::_legacy::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getCacheKeyFor",0xfaa1a129,"flixel.system.frontEnds.BitmapFrontEnd.getCacheKeyFor","flixel/system/frontEnds/BitmapFrontEnd.hx",336,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(337)
	::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(339)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(340)
			bool tmp6 = (data == bmd);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(340)
			if ((tmp6)){
				HX_STACK_LINE(342)
				::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(342)
				return tmp7;
			}
		}
;
	}
	HX_STACK_LINE(345)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getCacheKeyFor,return )

::String BitmapFrontEnd_obj::getUniqueKey( ::String __o_baseKey){
::String baseKey = __o_baseKey.Default(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",355,0x91a05ae2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseKey,"baseKey")
{
		HX_STACK_LINE(356)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		::String tmp1 = baseKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		::String tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		bool tmp3 = tmp->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		if ((tmp3)){
			HX_STACK_LINE(356)
			::haxe::ds::StringMap tmp5 = this->_cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			::String tmp7 = baseKey;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(356)
			::flixel::util::loaders::CachedGraphics tmp9 = tmp6->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(356)
			::flixel::util::loaders::CachedGraphics tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(356)
			::flixel::util::loaders::CachedGraphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(356)
			tmp4 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(356)
			tmp4 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp4)){
			HX_STACK_LINE(358)
			int inc = (int)0;		HX_STACK_VAR(inc,"inc");
			HX_STACK_LINE(359)
			::String ukey;		HX_STACK_VAR(ukey,"ukey");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(362)
				::String tmp5 = baseKey;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(362)
				int tmp6 = (inc)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(362)
				::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(362)
				ukey = tmp7;
				HX_STACK_LINE(363)
				::haxe::ds::StringMap tmp8 = this->_cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(363)
				::String tmp9 = ukey;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(363)
				::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(363)
				bool tmp11 = tmp8->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(363)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(363)
				if ((tmp11)){
					HX_STACK_LINE(363)
					::haxe::ds::StringMap tmp13 = this->_cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(363)
					::haxe::ds::StringMap tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(363)
					::String tmp15 = ukey;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(363)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(363)
					::flixel::util::loaders::CachedGraphics tmp17 = tmp14->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(363)
					::flixel::util::loaders::CachedGraphics tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(363)
					::flixel::util::loaders::CachedGraphics tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(363)
					tmp12 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(363)
					tmp12 = false;
				}
				HX_STACK_LINE(363)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(360)
				if ((tmp13)){
					HX_STACK_LINE(360)
					break;
				}
			}
			HX_STACK_LINE(364)
			baseKey = ukey;
		}
		HX_STACK_LINE(366)
		::String tmp5 = baseKey;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(366)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

Void BitmapFrontEnd_obj::remove( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",370,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(371)
		bool tmp = (key != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		if ((tmp)){
			HX_STACK_LINE(371)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(371)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(371)
			tmp1 = false;
		}
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(373)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			::flixel::util::loaders::CachedGraphics tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			::flixel::util::loaders::CachedGraphics obj = tmp4;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(374)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			this->removeFromOpenFLCache(tmp5);
			HX_STACK_LINE(375)
			::haxe::ds::StringMap tmp6 = this->_cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			tmp6->remove(tmp7);
			HX_STACK_LINE(376)
			obj->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

Void BitmapFrontEnd_obj::removeFromOpenFLCache( ::String key){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeFromOpenFLCache",0x35197031,"flixel.system.frontEnds.BitmapFrontEnd.removeFromOpenFLCache","flixel/system/frontEnds/BitmapFrontEnd.hx",381,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(389)
		::openfl::_legacy::IAssetCache tmp = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		tmp->removeBitmapData(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeFromOpenFLCache,(void))

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",397,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(400)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		if ((tmp1)){
			HX_STACK_LINE(402)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			{
				HX_STACK_LINE(402)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(402)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(402)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(402)
			this->_cache = tmp2;
		}
		HX_STACK_LINE(405)
		::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(407)
				::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(407)
				::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(407)
				::flixel::util::loaders::CachedGraphics tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(407)
				obj = tmp6;
				HX_STACK_LINE(408)
				bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				if ((tmp7)){
					HX_STACK_LINE(408)
					bool tmp9 = obj->persist;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(408)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(408)
					tmp8 = !(tmp10);
				}
				else{
					HX_STACK_LINE(408)
					tmp8 = false;
				}
				HX_STACK_LINE(408)
				if ((tmp8)){
					HX_STACK_LINE(410)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(410)
					this->removeFromOpenFLCache(tmp9);
					HX_STACK_LINE(411)
					::haxe::ds::StringMap tmp10 = this->_cache;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					tmp10->remove(tmp11);
					HX_STACK_LINE(412)
					obj->destroy();
					HX_STACK_LINE(413)
					obj = null();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

Void BitmapFrontEnd_obj::clearUnused( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",423,0x91a05ae2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(426)
		::haxe::ds::StringMap tmp = this->_cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		if ((tmp1)){
			HX_STACK_LINE(428)
			::haxe::ds::StringMap tmp2 = this->_cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(430)
					::haxe::ds::StringMap tmp4 = this->_cache;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(430)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(430)
					::flixel::util::loaders::CachedGraphics tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(430)
					obj = tmp6;
					HX_STACK_LINE(431)
					bool tmp7 = (obj != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(431)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(431)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(431)
					if ((tmp8)){
						HX_STACK_LINE(431)
						tmp9 = (obj->useCount <= (int)0);
					}
					else{
						HX_STACK_LINE(431)
						tmp9 = false;
					}
					HX_STACK_LINE(431)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(431)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(431)
					if ((tmp10)){
						HX_STACK_LINE(431)
						bool tmp12 = obj->persist;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(431)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(431)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(431)
						tmp11 = !(tmp14);
					}
					else{
						HX_STACK_LINE(431)
						tmp11 = false;
					}
					HX_STACK_LINE(431)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(431)
					if ((tmp11)){
						HX_STACK_LINE(431)
						tmp12 = obj->destroyOnNoUse;
					}
					else{
						HX_STACK_LINE(431)
						tmp12 = false;
					}
					HX_STACK_LINE(431)
					if ((tmp12)){
						HX_STACK_LINE(433)
						::String tmp13 = obj->key;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(433)
						this->remove(tmp13);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(whitePixel,"whitePixel");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(whitePixel,"whitePixel");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { return inCallProp == hx::paccAlways ? get_whitePixel() : whitePixel; }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return clearUnused_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addWithSpaces") ) { return addWithSpaces_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
		if (HX_FIELD_EQ(inName,"getCacheKeyFor") ) { return getCacheKeyFor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeFromOpenFLCache") ) { return removeFromOpenFLCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"));
	outFields->push(HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"));
	outFields->push(HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(BitmapFrontEnd_obj,whitePixel),HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"),
	HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"),
	HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"),
	HX_HCSTRING("get_whitePixel","\x66","\x2f","\xed","\x8f"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("dumpCache","\x6e","\x30","\x39","\xdb"),
	HX_HCSTRING("checkCache","\x5a","\x9c","\x04","\x51"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addWithSpaces","\x14","\x1d","\x68","\x0e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getCacheKeyFor","\x96","\x01","\x18","\xe6"),
	HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeFromOpenFLCache","\x64","\xa7","\xa9","\x89"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("clearUnused","\x83","\xa6","\x6f","\xff"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapFrontEnd","\x7b","\xb7","\xf6","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BitmapFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFrontEnd_obj >;
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
} // end namespace frontEnds
