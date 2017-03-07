#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#define INCLUDED_flixel_system_layer_frames_FlxRotatedFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,layer,TileSheetData)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxRotatedFrame)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxRotatedFrame_obj : public ::flixel::_system::layer::frames::FlxFrame_obj{
	public:
		typedef ::flixel::_system::layer::frames::FlxFrame_obj super;
		typedef FlxRotatedFrame_obj OBJ_;
		FlxRotatedFrame_obj();
		Void __construct(::flixel::_system::layer::TileSheetData tileSheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.frames.FlxRotatedFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxRotatedFrame_obj > __new(::flixel::_system::layer::TileSheetData tileSheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRotatedFrame_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxRotatedFrame","\x36","\xf5","\x54","\x77"); }

		virtual ::openfl::_legacy::display::BitmapData paintOnBitmap( ::openfl::_legacy::display::BitmapData bmd);

};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxRotatedFrame */ 
