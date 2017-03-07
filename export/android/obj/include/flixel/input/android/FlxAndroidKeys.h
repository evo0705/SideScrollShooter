#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#define INCLUDED_flixel_input_android_FlxAndroidKeys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeys)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKey)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace flixel{
namespace input{
namespace android{


class HXCPP_CLASS_ATTRIBUTES  FlxAndroidKeys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAndroidKeys_obj OBJ_;
		FlxAndroidKeys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.android.FlxAndroidKeys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxAndroidKeys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAndroidKeys_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxAndroidKeys","\x91","\x25","\xcb","\x7a"); }

		static void __boot();
		bool enabled;
		::haxe::ds::StringMap _keyLookup;
		::haxe::ds::IntMap _keyList;
		bool preventDefaultBackAction;
		virtual Void addKey( ::String KeyName,int KeyCode);
		Dynamic addKey_dyn();

		Dynamic pressed;
		virtual bool anyPressed( cpp::ArrayBase KeyArray);
		Dynamic anyPressed_dyn();

		Dynamic justPressed;
		virtual bool anyJustPressed( cpp::ArrayBase KeyArray);
		Dynamic anyJustPressed_dyn();

		Dynamic justReleased;
		virtual bool anyJustReleased( cpp::ArrayBase KeyArray);
		Dynamic anyJustReleased_dyn();

		virtual int getKeyCode( ::String KeyName);
		Dynamic getKeyCode_dyn();

		virtual Array< ::Dynamic > getIsDown( );
		Dynamic getIsDown_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual bool checkKeyStatus( cpp::ArrayBase KeyArray,int Status);
		Dynamic checkKeyStatus_dyn();

		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual bool inKeyArray( Array< ::String > KeyArray,int KeyCode);
		Dynamic inKeyArray_dyn();

		virtual Void updateKeyStates( int KeyCode,bool Down);
		Dynamic updateKeyStates_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		static int TOTAL;
};

} // end namespace flixel
} // end namespace input
} // end namespace android

#endif /* INCLUDED_flixel_input_android_FlxAndroidKeys */ 
