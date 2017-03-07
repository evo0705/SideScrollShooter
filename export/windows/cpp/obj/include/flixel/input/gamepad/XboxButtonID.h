#ifndef INCLUDED_flixel_input_gamepad_XboxButtonID
#define INCLUDED_flixel_input_gamepad_XboxButtonID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,XboxButtonID)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  XboxButtonID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XboxButtonID_obj OBJ_;
		XboxButtonID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.XboxButtonID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XboxButtonID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XboxButtonID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XboxButtonID","\x20","\x2e","\x4a","\x66"); }

		static void __boot();
		static int A;
		static int B;
		static int X;
		static int Y;
		static int LB;
		static int RB;
		static int BACK;
		static int START;
		static int LEFT_ANALOGUE;
		static int RIGHT_ANALOGUE;
		static int XBOX;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_XboxButtonID */ 
