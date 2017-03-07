#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#define INCLUDED_flixel_addons_editors_tiled_TiledTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledTile_obj OBJ_;
		TiledTile_obj();
		Void __construct(int OriginalId);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.addons.editors.tiled.TiledTile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TiledTile_obj > __new(int OriginalId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledTile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TiledTile","\xa4","\xc7","\xe8","\x65"); }

		static void __boot();
		int tileID;
		int tilesetID;
		bool isFlipHorizontally;
		bool isFlipVertically;
		int rotate;
		virtual Void resolveFlipAndRotation( );
		Dynamic resolveFlipAndRotation_dyn();

		virtual int resolveTilesetID( );
		Dynamic resolveTilesetID_dyn();

		static int FLIPPED_HORIZONTAL;
		static int FLIPPED_VERTICAL;
		static int FLIPPED_DIAGONAL;
		static int ROTATE_0;
		static int ROTATE_90;
		static int ROTATE_270;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTile */ 
