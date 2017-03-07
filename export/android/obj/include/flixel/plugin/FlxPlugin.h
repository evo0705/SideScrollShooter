#ifndef INCLUDED_flixel_plugin_FlxPlugin
#define INCLUDED_flixel_plugin_FlxPlugin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
namespace flixel{
namespace plugin{


class HXCPP_CLASS_ATTRIBUTES  FlxPlugin_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxPlugin_obj OBJ_;
		FlxPlugin_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.plugin.FlxPlugin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPlugin_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPlugin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxPlugin","\xa5","\x84","\xd2","\xc6"); }

		virtual Void onStateSwitch( );
		Dynamic onStateSwitch_dyn();

		virtual Void onResize( int Width,int Height);
		Dynamic onResize_dyn();

};

} // end namespace flixel
} // end namespace plugin

#endif /* INCLUDED_flixel_plugin_FlxPlugin */ 
