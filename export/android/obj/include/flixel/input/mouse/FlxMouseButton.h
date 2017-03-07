#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#define INCLUDED_flixel_input_mouse_FlxMouseButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMouseButton_obj OBJ_;
		FlxMouseButton_obj();
		Void __construct(int ID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouseButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMouseButton_obj > __new(int ID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouseButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxMouseButton","\xc5","\x4e","\xf0","\x2d"); }

		static void __boot();
		int current;
		int last;
		int _ID;
		::flixel::util::FlxPoint _justPressedPosition;
		Float _justPressedTimeInTicks;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onDown( ::openfl::_legacy::events::MouseEvent FlashEvent);
		Dynamic onDown_dyn();

		virtual Void onUp( ::openfl::_legacy::events::MouseEvent FlashEvent);
		Dynamic onUp_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool pressed( );
		Dynamic pressed_dyn();

		virtual bool justPressed( );
		Dynamic justPressed_dyn();

		virtual bool justReleased( );
		Dynamic justReleased_dyn();

		static int LEFT;
		static int MIDDLE;
		static int RIGHT;
		static int FAST_PRESS_RELEASE;
		static int JUST_RELEASED;
		static int RELEASED;
		static int PRESSED;
		static int JUST_PRESSED;
};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouseButton */ 
