#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#define INCLUDED_flixel_util_FlxDestroyUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxDestroyUtil)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxDestroyUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxDestroyUtil_obj OBJ_;
		FlxDestroyUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxDestroyUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxDestroyUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDestroyUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxDestroyUtil","\xea","\x6e","\x48","\x0a"); }

		static Dynamic destroy( ::flixel::interfaces::IFlxDestroyable object);
		static Dynamic destroy_dyn();

		static cpp::ArrayBase destroyArray( cpp::ArrayBase array);
		static Dynamic destroyArray_dyn();

		static Dynamic put( ::flixel::interfaces::IFlxPooled object);
		static Dynamic put_dyn();

		static cpp::ArrayBase putArray( cpp::ArrayBase array);
		static Dynamic putArray_dyn();

		static ::openfl::_legacy::display::BitmapData dispose( ::openfl::_legacy::display::BitmapData Bitmap);
		static Dynamic dispose_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxDestroyUtil */ 
