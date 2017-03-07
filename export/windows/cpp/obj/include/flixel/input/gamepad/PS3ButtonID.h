#ifndef INCLUDED_flixel_input_gamepad_PS3ButtonID
#define INCLUDED_flixel_input_gamepad_PS3ButtonID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,PS3ButtonID)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  PS3ButtonID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PS3ButtonID_obj OBJ_;
		PS3ButtonID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.PS3ButtonID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PS3ButtonID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PS3ButtonID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PS3ButtonID","\x3d","\x8b","\xa2","\xd9"); }

		static void __boot();
		static int TRIANGLE_BUTTON;
		static int CIRCLE_BUTTON;
		static int X_BUTTON;
		static int SQUARE_BUTTON;
		static int L1_BUTTON;
		static int R1_BUTTON;
		static int L2_BUTTON;
		static int R2_BUTTON;
		static int SELECT_BUTTON;
		static int START_BUTTON;
		static int PS_BUTTON;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int TRIANGLE_BUTTON_PRESSURE;
		static int CIRCLE_BUTTON_PRESSURE;
		static int X_BUTTON_PRESSURE;
		static int SQUARE_BUTTON_PRESSURE;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_PS3ButtonID */ 
