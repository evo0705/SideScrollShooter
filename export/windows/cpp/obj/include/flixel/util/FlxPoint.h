#ifndef INCLUDED_flixel_util_FlxPoint
#define INCLUDED_flixel_util_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxPool)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		operator ::flixel::interfaces::IFlxPooled_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxPoint","\x9e","\xbe","\x69","\x83"); }

		static void __boot();
		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual Void putWeak( );
		Dynamic putWeak_dyn();

		virtual ::flixel::util::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic set_dyn();

		virtual ::flixel::util::FlxPoint add( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic add_dyn();

		virtual ::flixel::util::FlxPoint addPoint( ::flixel::util::FlxPoint point);
		Dynamic addPoint_dyn();

		virtual ::flixel::util::FlxPoint subtract( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic subtract_dyn();

		virtual ::flixel::util::FlxPoint subtractPoint( ::flixel::util::FlxPoint point);
		Dynamic subtractPoint_dyn();

		virtual ::flixel::util::FlxPoint copyFrom( ::flixel::util::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxPoint copyTo( ::flixel::util::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxPoint copyFromFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::openfl::_legacy::geom::Point copyToFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual bool inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight);
		Dynamic inCoords_dyn();

		virtual bool inFlxRect( ::flixel::util::FlxRect Rect);
		Dynamic inFlxRect_dyn();

		virtual Float distanceTo( ::flixel::util::FlxPoint AnotherPoint);
		Dynamic distanceTo_dyn();

		virtual ::flixel::util::FlxPoint floor( );
		Dynamic floor_dyn();

		virtual ::flixel::util::FlxPoint ceil( );
		Dynamic ceil_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float set_x( Float Value);
		Dynamic set_x_dyn();

		virtual Float set_y( Float Value);
		Dynamic set_y_dyn();

		static ::flixel::util::FlxPool _pool;
		static ::flixel::util::FlxPoint get( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic get_dyn();

		static ::flixel::util::FlxPoint weak( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic weak_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPoint */ 
