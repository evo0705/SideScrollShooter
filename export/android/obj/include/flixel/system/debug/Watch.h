#ifndef INCLUDED_flixel_system_debug_Watch
#define INCLUDED_flixel_system_debug_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,_system,debug,Watch)
HX_DECLARE_CLASS3(flixel,_system,debug,WatchEntry)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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


class HXCPP_CLASS_ATTRIBUTES  Watch_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(hx::Null< bool >  __o_Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.Watch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Watch_obj > __new(hx::Null< bool >  __o_Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Watch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Watch","\x2f","\x86","\x52","\x58"); }

		static void __boot();
		bool editing;
		::openfl::_legacy::display::Sprite _names;
		::openfl::_legacy::display::Sprite _values;
		Array< ::Dynamic > _watching;
		::haxe::ds::StringMap _quickWatchList;
		virtual Void destroy( );

		virtual Void add( Dynamic AnyObject,::String VariableName,::String DisplayName);
		Dynamic add_dyn();

		virtual Void updateQuickWatch( ::String Name,Dynamic NewValue);
		Dynamic updateQuickWatch_dyn();

		virtual Void remove( Dynamic AnyObject,::String VariableName,::String QuickWatchName);
		Dynamic remove_dyn();

		virtual Void removeEntry( ::flixel::_system::debug::WatchEntry Entry,int Index);
		Dynamic removeEntry_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void update( );

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void updateSize( );

		static int MAX_LOG_LINES;
		static int LINE_HEIGHT;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Watch */ 
