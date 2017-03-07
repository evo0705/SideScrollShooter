#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#define INCLUDED_flixel_util_FlxBitmapUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxBitmapUtil)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapUtil_obj OBJ_;
		FlxBitmapUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxBitmapUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBitmapUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxBitmapUtil","\x83","\x92","\x63","\x6d"); }

		static Void merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::display::BitmapData destBitmapData,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic merge_dyn();

		static int mergeColorComponent( int source,int dest,int multiplier);
		static Dynamic mergeColorComponent_dyn();

		static Dynamic compare( ::openfl::_legacy::display::BitmapData Bitmap1,::openfl::_legacy::display::BitmapData Bitmap2);
		static Dynamic compare_dyn();

		static Float getMemorySize( ::openfl::_legacy::display::BitmapData bitmapData);
		static Dynamic getMemorySize_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapUtil */ 
