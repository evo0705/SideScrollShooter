#ifndef INCLUDED_flixel_system_FlxVersion
#define INCLUDED_flixel_system_FlxVersion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,_system,FlxVersion)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxVersion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxVersion_obj OBJ_;
		FlxVersion_obj();
		Void __construct(int Major,int Minor,int Patch,::String __o_PatchVersion);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxVersion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxVersion_obj > __new(int Major,int Minor,int Patch,::String __o_PatchVersion);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxVersion_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxVersion","\xe6","\xa0","\x1d","\xac"); }

		int major;
		int minor;
		int patch;
		::String patchVersion;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxVersion */ 
