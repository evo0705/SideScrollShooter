#ifndef INCLUDED_flixel_input_gamepad_PS4ButtonID
#define INCLUDED_flixel_input_gamepad_PS4ButtonID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,PS4ButtonID)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  PS4ButtonID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PS4ButtonID_obj OBJ_;
		PS4ButtonID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.PS4ButtonID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PS4ButtonID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PS4ButtonID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PS4ButtonID","\x3e","\xf4","\x93","\xac"); }

		static void __boot();
		static int TRIANGLE_BUTTON;
		static int CIRCLE_BUTTON;
		static int X_BUTTON;
		static int SQUARE_BUTTON;
		static int L1_BUTTON;
		static int R1_BUTTON;
		static int L2_BUTTON;
		static int R2_BUTTON;
		static int SHARE_BUTTON;
		static int START_BUTTON;
		static int PS_BUTTON;
		static int TOUCHPAD;
		static int LEFT_ANALOGUE_BUTTON;
		static int RIGHT_ANALOGUE_BUTTON;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int L2_BUTTON_Y;
		static int R2_BUTTON_Y;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_PS4ButtonID */ 
