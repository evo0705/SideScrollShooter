#ifndef INCLUDED_flixel_text_FlxTextFormat
#define INCLUDED_flixel_text_FlxTextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxTextFormat_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTextFormat_obj OBJ_;
		FlxTextFormat_obj();
		Void __construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxTextFormat")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTextFormat_obj > __new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor,Dynamic __o_Start,Dynamic __o_End);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTextFormat_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxTextFormat","\xb6","\xea","\xd6","\x62"); }

		int borderColor;
		int start;
		int end;
		::openfl::_legacy::text::TextFormat format;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextFormat */ 
