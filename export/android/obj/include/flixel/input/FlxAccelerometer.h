#ifndef INCLUDED_flixel_input_FlxAccelerometer
#define INCLUDED_flixel_input_FlxAccelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxAccelerometer)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,sensors,Accelerometer)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  FlxAccelerometer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAccelerometer_obj OBJ_;
		FlxAccelerometer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxAccelerometer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxAccelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAccelerometer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxAccelerometer","\x1d","\x27","\x91","\xe3"); }

		Float x;
		Float y;
		Float z;
		::openfl::_legacy::sensors::Accelerometer _sensor;
		virtual bool get_isSupported( );
		Dynamic get_isSupported_dyn();

		virtual Void updateCallback( ::openfl::events::AccelerometerEvent Event);
		Dynamic updateCallback_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxAccelerometer */ 
