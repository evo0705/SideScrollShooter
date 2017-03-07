#ifndef INCLUDED_flixel_system_debug_ConsoleCommands
#define INCLUDED_flixel_system_debug_ConsoleCommands

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,Console)
HX_DECLARE_CLASS3(flixel,_system,debug,ConsoleCommands)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  ConsoleCommands_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleCommands_obj OBJ_;
		ConsoleCommands_obj();
		Void __construct(::flixel::_system::debug::Console console);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.ConsoleCommands")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleCommands_obj > __new(::flixel::_system::debug::Console console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleCommands_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConsoleCommands","\x1f","\x0f","\xd7","\xb9"); }

		::flixel::_system::debug::Console _console;
		bool _watchingMouse;
		virtual Void help( ::String Alias);
		Dynamic help_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void clearHistory( );
		Dynamic clearHistory_dyn();

		virtual Void resetState( );
		Dynamic resetState_dyn();

		virtual Void switchState( ::String ClassName);
		Dynamic switchState_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void create( ::String ClassName,::String MousePos,Array< ::String > Params);
		Dynamic create_dyn();

		virtual Void set( ::String ObjectAndVariable,Dynamic NewVariableValue,::String WatchName);
		Dynamic set_dyn();

		virtual Void fields( ::String ObjectAndVariable,hx::Null< int >  NumSuperClassesToInclude);
		Dynamic fields_dyn();

		virtual Void call( ::String FunctionAlias,Array< ::String > Params);
		Dynamic call_dyn();

		virtual Void listObjects( );
		Dynamic listObjects_dyn();

		virtual Void listFunctions( );
		Dynamic listFunctions_dyn();

		virtual Void watchMouse( );
		Dynamic watchMouse_dyn();

		virtual Void track( ::String ObjectAndVariable);
		Dynamic track_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_ConsoleCommands */ 
