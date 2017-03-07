#ifndef INCLUDED_flixel_input_gamepad_LogitechButtonID
#define INCLUDED_flixel_input_gamepad_LogitechButtonID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,LogitechButtonID)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  LogitechButtonID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogitechButtonID_obj OBJ_;
		LogitechButtonID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.LogitechButtonID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LogitechButtonID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogitechButtonID_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LogitechButtonID","\xc8","\xbd","\x57","\x92"); }

		static void __boot();
		static int ONE;
		static int TWO;
		static int THREE;
		static int FOUR;
		static int FIVE;
		static int SIX;
		static int SEVEN;
		static int EIGHT;
		static int NINE;
		static int TEN;
		static int LEFT_ANALOGUE;
		static int RIGHT_ANALOGUE;
		static int LEFT_ANALOGUE_X;
		static int LEFT_ANALOGUE_Y;
		static int RIGHT_ANALOGUE_X;
		static int RIGHT_ANALOGUE_Y;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_LogitechButtonID */ 
