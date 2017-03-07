#ifndef INCLUDED_openfl__legacy_sensors_Accelerometer
#define INCLUDED_openfl__legacy_sensors_Accelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,sensors,Accelerometer)
namespace openfl{
namespace _legacy{
namespace sensors{


class HXCPP_CLASS_ATTRIBUTES  Accelerometer_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef Accelerometer_obj OBJ_;
		Accelerometer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.sensors.Accelerometer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Accelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Accelerometer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Accelerometer","\xaf","\x6e","\xff","\x50"); }

		static void __boot();
		bool muted;
		::haxe::Timer __timer;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void setRequestedUpdateInterval( Float interval);
		Dynamic setRequestedUpdateInterval_dyn();

		virtual Void __update( );
		Dynamic __update_dyn();

		static bool isSupported;
		static int __defaultInterval;
		static bool get_isSupported( );
		static Dynamic get_isSupported_dyn();

		static Dynamic lime_input_get_acceleration;
		static Dynamic &lime_input_get_acceleration_dyn() { return lime_input_get_acceleration;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace sensors

#endif /* INCLUDED_openfl__legacy_sensors_Accelerometer */ 
