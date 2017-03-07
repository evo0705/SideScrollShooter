#ifndef INCLUDED_flixel_system_replay_MouseRecord
#define INCLUDED_flixel_system_replay_MouseRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,_system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace _system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  MouseRecord_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef MouseRecord_obj OBJ_;
		MouseRecord_obj();
		Void __construct(int X,int Y,int Button,int Wheel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.replay.MouseRecord")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseRecord_obj > __new(int X,int Y,int Button,int Wheel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseRecord_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MouseRecord","\x76","\x42","\xa7","\xd7"); }

		int button;
		int wheel;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_MouseRecord */ 
