#ifndef INCLUDED_flixel_system_FlxList
#define INCLUDED_flixel_system_FlxList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,_system,FlxList)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxList_obj OBJ_;
		FlxList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxList","\xd0","\x55","\x0b","\xd8"); }

		static void __boot();
		::flixel::FlxObject object;
		::flixel::_system::FlxList next;
		bool exists;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		static int _NUM_CACHED_FLX_LIST;
		static ::flixel::_system::FlxList _cachedListsHead;
		static ::flixel::_system::FlxList recycle( );
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxList */ 
