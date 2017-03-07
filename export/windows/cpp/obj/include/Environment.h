#ifndef INCLUDED_Environment
#define INCLUDED_Environment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Environment)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Environment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Environment_obj OBJ_;
		Environment_obj();
		Void __construct(Dynamic __o_Gravity,::Player ThisPlayer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Environment")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Environment_obj > __new(Dynamic __o_Gravity,::Player ThisPlayer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Environment_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Environment","\xb3","\xa3","\x82","\x91"); }

		Float gravity;
		::Player player;
};


#endif /* INCLUDED_Environment */ 
