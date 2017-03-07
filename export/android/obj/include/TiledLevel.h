#ifndef INCLUDED_TiledLevel
#define INCLUDED_TiledLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
HX_DECLARE_CLASS0(TiledLevel)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)


class HXCPP_CLASS_ATTRIBUTES  TiledLevel_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledLevel_obj OBJ_;
		TiledLevel_obj();
		Void __construct(Dynamic Data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TiledLevel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledLevel_obj > __new(Dynamic Data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLevel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledLevel","\x4e","\x00","\xf4","\x27"); }

		static void __boot();
		::flixel::group::FlxGroup frontgroundTiles;
		::flixel::group::FlxGroup foregroundTiles;
		::flixel::group::FlxGroup backgroundTiles;
		::flixel::group::FlxGroup floors;
		::flixel::group::FlxGroup walls;
		::flixel::group::FlxGroup deaths;
		Array< ::Dynamic > platformLayers;
		Array< ::Dynamic > solidLayers;
		virtual bool collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback);
		Dynamic collideWithLevel_dyn();

		static int NO_DROP;
};


#endif /* INCLUDED_TiledLevel */ 
