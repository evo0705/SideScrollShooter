#ifndef INCLUDED_flixel_system_debug_Console
#define INCLUDED_flixel_system_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,debug,Console)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.Console")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"); }

		static void __boot();
		::haxe::ds::StringMap registeredObjects;
		::haxe::ds::StringMap registeredFunctions;
		Array< ::Dynamic > objectStack;
		Array< ::String > cmdHistory;
		cpp::ArrayBase commands;
		int _historyIndex;
		::openfl::_legacy::text::TextField _input;
		virtual Void onFocus( ::openfl::events::FocusEvent e);
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( ::openfl::events::FocusEvent e);
		Dynamic onFocusLost_dyn();

		virtual Void onKeyPress( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyPress_dyn();

		virtual Void processCommand( );
		Dynamic processCommand_dyn();

		virtual Void overrideDefaultSelection( ::openfl::_legacy::events::Event e);
		Dynamic overrideDefaultSelection_dyn();

		virtual ::String getPreviousCommand( );
		Dynamic getPreviousCommand_dyn();

		virtual ::String getNextCommand( );
		Dynamic getNextCommand_dyn();

		virtual Void registerObject( ::String ObjectAlias,Dynamic AnyObject);
		Dynamic registerObject_dyn();

		virtual Void registerFunction( ::String FunctionAlias,Dynamic Function);
		Dynamic registerFunction_dyn();

		virtual Void addCommand( Array< ::String > Aliases,Dynamic ProcessFunction,::String Help,::String ParamHelp,hx::Null< int >  NumParams,hx::Null< int >  ParamCutoff);
		Dynamic addCommand_dyn();

		virtual Void destroy( );

		virtual Void updateSize( );

		static ::String _DEFAULT_TEXT;
		static int _HISTORY_MAX;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Console */ 
