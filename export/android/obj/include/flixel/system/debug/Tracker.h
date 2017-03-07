#ifndef INCLUDED_flixel_system_debug_Tracker
#define INCLUDED_flixel_system_debug_Tracker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,debug,Tracker)
HX_DECLARE_CLASS3(flixel,_system,debug,TrackerProfile)
HX_DECLARE_CLASS3(flixel,_system,debug,Watch)
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


class HXCPP_CLASS_ATTRIBUTES  Tracker_obj : public ::flixel::_system::debug::Watch_obj{
	public:
		typedef ::flixel::_system::debug::Watch_obj super;
		typedef Tracker_obj OBJ_;
		Tracker_obj();
		Void __construct(::flixel::_system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.Tracker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tracker_obj > __new(::flixel::_system::debug::TrackerProfile Profile,Dynamic Object,::String WindowTitle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tracker_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tracker","\x98","\x07","\x5a","\x55"); }

		static void __boot();
		Dynamic _object;
		virtual Void destroy( );

		virtual ::flixel::_system::debug::TrackerProfile findProfileByClass( ::hx::Class ObjectClass);
		Dynamic findProfileByClass_dyn();

		virtual Void initWatchEntries( ::flixel::_system::debug::TrackerProfile Profile);
		Dynamic initWatchEntries_dyn();

		virtual Void addExtensions( ::flixel::_system::debug::TrackerProfile Profile);
		Dynamic addExtensions_dyn();

		virtual Void addVariables( Array< ::String > Variables);
		Dynamic addVariables_dyn();

		static Array< ::Dynamic > profiles;
		static cpp::ArrayBase objectsBeingTracked;
		static int _numTrackerWindows;
		static Void addProfile( ::flixel::_system::debug::TrackerProfile Profile);
		static Dynamic addProfile_dyn();

		static ::flixel::_system::debug::TrackerProfile findProfile( Dynamic Object);
		static Dynamic findProfile_dyn();

		static Void onStateSwitch( );
		static Dynamic onStateSwitch_dyn();

		static Void initProfiles( );
		static Dynamic initProfiles_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_Tracker */ 
