#ifndef INCLUDED_flixel_input_gamepad_OUYAButtonID
#define INCLUDED_flixel_input_gamepad_OUYAButtonID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,OUYAButtonID)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  OUYAButtonID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OUYAButtonID_obj OBJ_;
		OUYAButtonID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.OUYAButtonID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OUYAButtonID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OUYAButtonID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OUYAButtonID","\xdb","\x04","\x00","\xb3"); }

		static void __boot();
		static int O;
		static int U;
		static int Y;
		static int A;
		static int LB;
		static int RB;
		static int LEFT_ANALOGUE;
		static int RIGHT_ANALOGUE;
		static int HOME;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
		static int LEFT_TRIGGER_ANALOG;
		static int RIGHT_TRIGGER_ANALOG;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_OUYAButtonID */ 
