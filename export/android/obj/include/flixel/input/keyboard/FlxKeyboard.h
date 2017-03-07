#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#define INCLUDED_flixel_input_keyboard_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyList)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS3(flixel,_system,replay,CodeValuePair)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyboard_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.keyboard.FlxKeyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxKeyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKeyboard_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxInput_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxKeyboard","\x19","\x97","\x40","\x7f"); }

		static void __boot();
		bool enabled;
		::flixel::input::keyboard::FlxKeyList pressed;
		::flixel::input::keyboard::FlxKeyList justPressed;
		::flixel::input::keyboard::FlxKeyList justReleased;
		Array< ::Dynamic > _keyList;
		::haxe::ds::StringMap _keyLookup;
		::haxe::ds::StringMap _nativeCorrection;
		virtual bool anyPressed( Array< ::String > KeyArray);
		Dynamic anyPressed_dyn();

		virtual bool anyJustPressed( Array< ::String > KeyArray);
		Dynamic anyJustPressed_dyn();

		virtual bool anyJustReleased( Array< ::String > KeyArray);
		Dynamic anyJustReleased_dyn();

		virtual ::String firstPressed( );
		Dynamic firstPressed_dyn();

		virtual ::String firstJustPressed( );
		Dynamic firstJustPressed_dyn();

		virtual ::String firstJustReleased( );
		Dynamic firstJustReleased_dyn();

		virtual bool checkStatus( int KeyCode,int Status);
		Dynamic checkStatus_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool checkKeyStatus( Array< ::String > KeyArray,int Status);
		Dynamic checkKeyStatus_dyn();

		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual bool inKeyArray( Array< ::String > KeyArray,int KeyCode);
		Dynamic inKeyArray_dyn();

		virtual int resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic resolveKeyCode_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Array< ::Dynamic > record( );
		Dynamic record_dyn();

		virtual Void playback( Array< ::Dynamic > Record);
		Dynamic playback_dyn();

		static int TOTAL;
};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKeyboard */ 
