#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#define INCLUDED_flixel_input_touch_FlxTouchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,TouchEvent)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouchManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTouchManager_obj OBJ_;
		FlxTouchManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.touch.FlxTouchManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTouchManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouchManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxInput_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxTouchManager","\xe0","\xa3","\x5d","\x96"); }

		static void __boot();
		Array< ::Dynamic > list;
		Array< ::Dynamic > _inactiveTouches;
		::haxe::ds::IntMap _touchesCache;
		virtual ::flixel::input::touch::FlxTouch getByID( int TouchPointID);
		Dynamic getByID_dyn();

		virtual ::flixel::input::touch::FlxTouch getFirst( );
		Dynamic getFirst_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Array< ::Dynamic > justStarted( Array< ::Dynamic > TouchArray);
		Dynamic justStarted_dyn();

		virtual Array< ::Dynamic > justReleased( Array< ::Dynamic > TouchArray);
		Dynamic justReleased_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void handleTouchBegin( ::openfl::_legacy::events::TouchEvent FlashEvent);
		Dynamic handleTouchBegin_dyn();

		virtual Void handleTouchEnd( ::openfl::_legacy::events::TouchEvent FlashEvent);
		Dynamic handleTouchEnd_dyn();

		virtual Void handleTouchMove( ::openfl::_legacy::events::TouchEvent FlashEvent);
		Dynamic handleTouchMove_dyn();

		virtual ::flixel::input::touch::FlxTouch add( ::flixel::input::touch::FlxTouch Touch);
		Dynamic add_dyn();

		virtual ::flixel::input::touch::FlxTouch recycle( Float X,Float Y,int PointID);
		Dynamic recycle_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		static int maxTouchPoints;
};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouchManager */ 
