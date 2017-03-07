#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#define INCLUDED_flixel_system_scaleModes_BaseScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace _system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  BaseScaleMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseScaleMode_obj OBJ_;
		BaseScaleMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.BaseScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseScaleMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseScaleMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseScaleMode","\x9c","\x18","\x1b","\x74"); }

		static void __boot();
		::flixel::util::FlxPoint deviceSize;
		::flixel::util::FlxPoint gameSize;
		::flixel::util::FlxPoint scale;
		::flixel::util::FlxPoint offset;
		virtual Void onMeasure( int Width,int Height);
		Dynamic onMeasure_dyn();

		virtual Void updateGameSize( int Width,int Height);
		Dynamic updateGameSize_dyn();

		virtual Void updateDeviceSize( int Width,int Height);
		Dynamic updateDeviceSize_dyn();

		virtual Void updateScaleOffset( );
		Dynamic updateScaleOffset_dyn();

		virtual Void updateGameScale( );
		Dynamic updateGameScale_dyn();

		virtual Void updateGamePosition( );
		Dynamic updateGamePosition_dyn();

		static ::flixel::util::FlxPoint zoom;
};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_BaseScaleMode */ 
