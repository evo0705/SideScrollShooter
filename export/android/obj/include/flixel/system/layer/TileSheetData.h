#ifndef INCLUDED_flixel_system_layer_TileSheetData
#define INCLUDED_flixel_system_layer_TileSheetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,layer,Region)
HX_DECLARE_CLASS3(flixel,_system,layer,TileSheetData)
HX_DECLARE_CLASS3(flixel,_system,layer,TileSheetExt)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureAtlasFrame)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
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


class HXCPP_CLASS_ATTRIBUTES  TileSheetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileSheetData_obj OBJ_;
		TileSheetData_obj();
		Void __construct(::openfl::_legacy::display::BitmapData Bitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.TileSheetData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileSheetData_obj > __new(::openfl::_legacy::display::BitmapData Bitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileSheetData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("TileSheetData","\x3b","\x2f","\x62","\x78"); }

		::flixel::_system::layer::TileSheetExt tileSheet;
		::haxe::ds::StringMap flxSpriteFrames;
		::haxe::ds::StringMap flxFrames;
		Array< ::String > frameNames;
		Array< ::Dynamic > framesArr;
		::openfl::_legacy::display::BitmapData bitmap;
		virtual ::flixel::_system::layer::frames::FlxFrame getFrame( ::String name);
		Dynamic getFrame_dyn();

		virtual ::flixel::_system::layer::frames::FlxSpriteFrames getSpriteSheetFrames( ::flixel::_system::layer::Region region,::openfl::_legacy::geom::Point origin);
		Dynamic getSpriteSheetFrames_dyn();

		virtual ::String getSpriteSheetFrameKey( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);
		Dynamic getSpriteSheetFrameKey_dyn();

		virtual ::String getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic getKeyForSpriteSheetFrames_dyn();

		virtual bool containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY);
		Dynamic containsSpriteSheetFrames_dyn();

		virtual ::flixel::_system::layer::frames::FlxFrame addSpriteSheetFrame( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);
		Dynamic addSpriteSheetFrame_dyn();

		virtual bool containsFrame( ::String key);
		Dynamic containsFrame_dyn();

		virtual int addTileRect( ::openfl::_legacy::geom::Rectangle tileRect,::openfl::_legacy::geom::Point point);
		Dynamic addTileRect_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onContext( ::openfl::_legacy::display::BitmapData bitmap);
		Dynamic onContext_dyn();

		virtual ::flixel::_system::layer::frames::FlxSpriteFrames getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic getTexturePackerFrames_dyn();

		virtual ::flixel::_system::layer::frames::FlxFrame addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  startX,hx::Null< int >  startY);
		Dynamic addTexturePackerFrame_dyn();

		virtual Void destroyFrameBitmapDatas( );
		Dynamic destroyFrameBitmapDatas_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_TileSheetData */ 
