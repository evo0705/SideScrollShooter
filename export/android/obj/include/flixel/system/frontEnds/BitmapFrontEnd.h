#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#define INCLUDED_flixel_system_frontEnds_BitmapFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  BitmapFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFrontEnd_obj OBJ_;
		BitmapFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.BitmapFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapFrontEnd","\xe1","\x19","\xd6","\xc8"); }

		::haxe::ds::StringMap _cache;
		::flixel::util::loaders::CachedGraphics whitePixel;
		::flixel::util::loaders::CachedGraphics _whitePixel;
		virtual ::flixel::util::loaders::CachedGraphics get_whitePixel( );
		Dynamic get_whitePixel_dyn();

		virtual Void onContext( );
		Dynamic onContext_dyn();

		virtual Void dumpCache( );
		Dynamic dumpCache_dyn();

		virtual bool checkCache( ::String Key);
		Dynamic checkCache_dyn();

		virtual ::flixel::util::loaders::CachedGraphics create( int Width,int Height,int Color,hx::Null< bool >  Unique,::String Key);
		Dynamic create_dyn();

		virtual ::flixel::util::loaders::CachedGraphics add( Dynamic Graphic,hx::Null< bool >  Unique,::String Key);
		Dynamic add_dyn();

		virtual ::flixel::util::loaders::CachedGraphics addWithSpaces( Dynamic Graphic,int FrameWidth,int FrameHeight,hx::Null< int >  SpacingX,hx::Null< int >  SpacingY,hx::Null< bool >  Unique,::String Key);
		Dynamic addWithSpaces_dyn();

		virtual ::flixel::util::loaders::CachedGraphics get( ::String key);
		Dynamic get_dyn();

		virtual ::String getCacheKeyFor( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic getCacheKeyFor_dyn();

		virtual ::String getUniqueKey( ::String baseKey);
		Dynamic getUniqueKey_dyn();

		virtual Void remove( ::String key);
		Dynamic remove_dyn();

		virtual Void removeFromOpenFLCache( ::String key);
		Dynamic removeFromOpenFLCache_dyn();

		virtual Void clearCache( );
		Dynamic clearCache_dyn();

		virtual Void clearUnused( );
		Dynamic clearUnused_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BitmapFrontEnd */ 
