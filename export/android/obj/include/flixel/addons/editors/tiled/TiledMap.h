#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#define INCLUDED_flixel_addons_editors_tiled_TiledMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileSet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledMap_obj OBJ_;
		TiledMap_obj();
		Void __construct(Dynamic Data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledMap_obj > __new(Dynamic Data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledMap","\xe6","\xce","\x32","\x6b"); }

		::String version;
		::String orientation;
		int width;
		int height;
		int tileWidth;
		int tileHeight;
		int fullWidth;
		int fullHeight;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		::haxe::ds::StringMap noLoadHash;
		::haxe::ds::StringMap tilesets;
		Array< ::Dynamic > layers;
		Array< ::Dynamic > objectGroups;
		virtual ::flixel::addons::editors::tiled::TiledTileSet getTileSet( ::String Name);
		Dynamic getTileSet_dyn();

		virtual ::flixel::addons::editors::tiled::TiledLayer getLayer( ::String Name);
		Dynamic getLayer_dyn();

		virtual ::flixel::addons::editors::tiled::TiledObjectGroup getObjectGroup( ::String Name);
		Dynamic getObjectGroup_dyn();

		virtual ::flixel::addons::editors::tiled::TiledTileSet getGidOwner( int Gid);
		Dynamic getGidOwner_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledMap */ 
