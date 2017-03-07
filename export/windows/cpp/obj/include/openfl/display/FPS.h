#ifndef INCLUDED_openfl_display_FPS
#define INCLUDED_openfl_display_FPS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS2(openfl,display,FPS)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FPS_obj : public ::openfl::_legacy::text::TextField_obj{
	public:
		typedef ::openfl::_legacy::text::TextField_obj super;
		typedef FPS_obj OBJ_;
		FPS_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.FPS")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FPS_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FPS_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FPS","\xc9","\x63","\x35","\x00"); }

		int currentFPS;
		int cacheCount;
		Array< Float > times;
		virtual Void this_onEnterFrame( ::openfl::_legacy::events::Event event);
		Dynamic this_onEnterFrame_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_FPS */ 
