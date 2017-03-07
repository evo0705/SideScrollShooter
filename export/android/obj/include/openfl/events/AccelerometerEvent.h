#ifndef INCLUDED_openfl_events_AccelerometerEvent
#define INCLUDED_openfl_events_AccelerometerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  AccelerometerEvent_obj : public ::openfl::_legacy::events::Event_obj{
	public:
		typedef ::openfl::_legacy::events::Event_obj super;
		typedef AccelerometerEvent_obj OBJ_;
		AccelerometerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.AccelerometerEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AccelerometerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AccelerometerEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AccelerometerEvent","\xeb","\x2e","\xb8","\xf5"); }

		Float accelerationX;
		Float accelerationY;
		Float accelerationZ;
		Float timestamp;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

		static ::String UPDATE;
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_AccelerometerEvent */ 
