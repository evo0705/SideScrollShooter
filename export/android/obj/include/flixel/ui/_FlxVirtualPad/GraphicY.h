#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicY
#define INCLUDED_flixel_ui__FlxVirtualPad_GraphicY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS3(flixel,ui,_FlxVirtualPad,GraphicY)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace ui{
namespace _FlxVirtualPad{


class HXCPP_CLASS_ATTRIBUTES  GraphicY_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicY_obj OBJ_;
		GraphicY_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.ui._FlxVirtualPad.GraphicY")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicY_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicY_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicY","\xd1","\xb4","\x19","\xec"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxVirtualPad

#endif /* INCLUDED_flixel_ui__FlxVirtualPad_GraphicY */ 
