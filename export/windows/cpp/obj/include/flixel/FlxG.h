#ifndef INCLUDED_flixel_FlxG
#define INCLUDED_flixel_FlxG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxG)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxSwipe)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,_system,FlxVersion)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,BitmapFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,BitmapLogFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,CameraFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,ConsoleFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,LogFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,PluginFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,SignalFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,SoundFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,VCRFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,WatchFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxG_obj OBJ_;
		FlxG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.FlxG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxG","\xb5","\x4b","\x97","\x2e"); }

		static void __boot();
		static bool autoPause;
		static bool fixedTimestep;
		static Float timeScale;
		static int worldDivisions;
		static ::flixel::FlxCamera camera;
		static ::flixel::_system::FlxVersion VERSION;
		static ::flixel::FlxGame game;
		static int drawFramerate;
		static Float elapsed;
		static Float maxElapsed;
		static int width;
		static int height;
		static ::flixel::_system::scaleModes::BaseScaleMode scaleMode;
		static bool fullscreen;
		static ::flixel::util::FlxRect worldBounds;
		static ::flixel::util::FlxSave save;
		static ::flixel::input::mouse::FlxMouse mouse;
		static ::flixel::input::touch::FlxTouchManager touches;
		static Array< ::Dynamic > swipes;
		static ::flixel::input::keyboard::FlxKeyboard keys;
		static ::flixel::input::gamepad::FlxGamepadManager gamepads;
		static ::flixel::_system::frontEnds::InputFrontEnd inputs;
		static ::flixel::_system::frontEnds::ConsoleFrontEnd console;
		static ::flixel::_system::frontEnds::LogFrontEnd log;
		static ::flixel::_system::frontEnds::BitmapLogFrontEnd bitmapLog;
		static ::flixel::_system::frontEnds::WatchFrontEnd watch;
		static ::flixel::_system::frontEnds::DebuggerFrontEnd debugger;
		static ::flixel::_system::frontEnds::VCRFrontEnd vcr;
		static ::flixel::_system::frontEnds::BitmapFrontEnd bitmap;
		static ::flixel::_system::frontEnds::CameraFrontEnd cameras;
		static ::flixel::_system::frontEnds::PluginFrontEnd plugins;
		static ::flixel::_system::frontEnds::SoundFrontEnd sound;
		static ::flixel::_system::frontEnds::SignalFrontEnd signals;
		static ::flixel::_system::scaleModes::BaseScaleMode _scaleMode;
		static Void resizeGame( int Width,int Height);
		static Dynamic resizeGame_dyn();

		static Void resetGame( );
		static Dynamic resetGame_dyn();

		static Void switchState( ::flixel::FlxState State);
		static Dynamic switchState_dyn();

		static Void resetState( );
		static Dynamic resetState_dyn();

		static bool overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback);
		static Dynamic overlap_dyn();

		static bool pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  AlphaTolerance,::flixel::FlxCamera Camera);
		static Dynamic pixelPerfectOverlap_dyn();

		static bool collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback);
		static Dynamic collide_dyn();

		static Void openURL( ::String URL,::String Target);
		static Dynamic openURL_dyn();

		static Void init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom);
		static Dynamic init_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static ::flixel::_system::scaleModes::BaseScaleMode set_scaleMode( ::flixel::_system::scaleModes::BaseScaleMode ScaleMode);
		static Dynamic set_scaleMode_dyn();

		static ::flixel::input::mouse::FlxMouse set_mouse( ::flixel::input::mouse::FlxMouse NewMouse);
		static Dynamic set_mouse_dyn();

		static int get_updateFramerate( );
		static Dynamic get_updateFramerate_dyn();

		static int set_updateFramerate( int Framerate);
		static Dynamic set_updateFramerate_dyn();

		static int set_drawFramerate( int Framerate);
		static Dynamic set_drawFramerate_dyn();

		static bool set_fullscreen( bool Value);
		static Dynamic set_fullscreen_dyn();

		static ::openfl::_legacy::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static ::flixel::FlxState get_state( );
		static Dynamic get_state_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxG */ 
