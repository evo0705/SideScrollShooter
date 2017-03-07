#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#define INCLUDED_flixel_addons_editors_tiled_TiledPropertySet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledPropertySet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledPropertySet_obj OBJ_;
		TiledPropertySet_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledPropertySet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledPropertySet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledPropertySet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TiledPropertySet","\x97","\x4c","\x9f","\x46"); }

		virtual ::String get( ::String Key);
		Dynamic get_dyn();

		virtual bool contains( ::String Key);
		Dynamic contains_dyn();

		virtual ::String resolve( ::String Name);
		Dynamic resolve_dyn();

		virtual Dynamic keysIterator( );
		Dynamic keysIterator_dyn();

		virtual Void extend( ::haxe::xml::Fast Source);
		Dynamic extend_dyn();

		::haxe::ds::StringMap keys;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledPropertySet */ 
