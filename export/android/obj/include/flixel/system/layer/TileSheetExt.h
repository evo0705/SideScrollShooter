#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#define INCLUDED_flixel_system_layer_TileSheetExt

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,layer,TileSheetExt)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  TileSheetExt_obj : public ::openfl::_legacy::display::Tilesheet_obj{
	public:
		typedef ::openfl::_legacy::display::Tilesheet_obj super;
		typedef TileSheetExt_obj OBJ_;
		TileSheetExt_obj();
		Void __construct(::openfl::_legacy::display::BitmapData bitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.TileSheetExt")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileSheetExt_obj > __new(::openfl::_legacy::display::BitmapData bitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileSheetExt_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("TileSheetExt","\xb0","\xc0","\x2b","\x0d"); }

		static void __boot();
		int numTiles;
		::haxe::ds::StringMap tileIDs;
		Array< ::String > tileOrder;
		virtual Void rebuildFromOld( ::flixel::_system::layer::TileSheetExt old);
		Dynamic rebuildFromOld_dyn();

		virtual ::String getKey( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);
		Dynamic getKey_dyn();

		virtual int addTileRectID( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);
		Dynamic addTileRectID_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		static int _DRAWCALLS;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_TileSheetExt */ 
