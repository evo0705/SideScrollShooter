#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#define INCLUDED_flixel_input_gamepad_FlxGamepadButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadButton_obj OBJ_;
		FlxGamepadButton_obj();
		Void __construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.FlxGamepadButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadButton_obj > __new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGamepadButton","\xc1","\x6d","\x24","\xd3"); }

		int id;
		int current;
		int last;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void press( );
		Dynamic press_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadButton */ 
