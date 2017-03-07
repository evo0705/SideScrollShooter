#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#define INCLUDED_flixel_system_layer_frames_FlxFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,_system,layer,TileSheetData)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FrameType)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFrame_obj OBJ_;
		FlxFrame_obj();
		Void __construct(::flixel::_system::layer::TileSheetData tileSheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.frames.FlxFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxFrame_obj > __new(::flixel::_system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFrame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxFrame","\x7b","\x82","\x5d","\xc3"); }

		static void __boot();
		::String name;
		::openfl::_legacy::geom::Rectangle frame;
		bool trimmed;
		int tileID;
		Float additionalAngle;
		::flixel::util::FlxPoint sourceSize;
		::flixel::util::FlxPoint offset;
		::flixel::util::FlxPoint center;
		::flixel::_system::layer::frames::FrameType type;
		::openfl::_legacy::display::BitmapData _bitmapData;
		::openfl::_legacy::display::BitmapData _hReversedBitmapData;
		::openfl::_legacy::display::BitmapData _vReversedBitmapData;
		::openfl::_legacy::display::BitmapData _hvReversedBitmapData;
		::flixel::_system::layer::TileSheetData _tileSheet;
		virtual ::openfl::_legacy::display::BitmapData paintOnBitmap( ::openfl::_legacy::display::BitmapData bmd);
		Dynamic paintOnBitmap_dyn();

		virtual ::openfl::_legacy::display::BitmapData getBitmap( );
		Dynamic getBitmap_dyn();

		virtual ::openfl::_legacy::display::BitmapData getHReversedBitmap( );
		Dynamic getHReversedBitmap_dyn();

		virtual ::openfl::_legacy::display::BitmapData getVReversedBitmap( );
		Dynamic getVReversedBitmap_dyn();

		virtual ::openfl::_legacy::display::BitmapData getHVReversedBitmap( );
		Dynamic getHVReversedBitmap_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void destroyBitmapDatas( );
		Dynamic destroyBitmapDatas_dyn();

		static ::openfl::_legacy::geom::Point POINT;
		static ::openfl::_legacy::geom::Matrix MATRIX;
		static ::openfl::_legacy::geom::Rectangle RECT;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxFrame */ 
