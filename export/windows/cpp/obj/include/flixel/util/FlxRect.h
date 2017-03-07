#ifndef INCLUDED_flixel_util_FlxRect
#define INCLUDED_flixel_util_FlxRect

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
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxRect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxRect_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRect_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxRect","\x96","\x86","\xff","\xdb"); }

		static void __boot();
		Float x;
		Float y;
		Float width;
		Float height;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual ::flixel::util::FlxRect setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		virtual ::flixel::util::FlxRect set( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		Dynamic set_dyn();

		virtual ::flixel::util::FlxRect copyFrom( ::flixel::util::FlxRect Rect);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxRect copyTo( ::flixel::util::FlxRect Rect);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxRect copyFromFlash( ::openfl::_legacy::geom::Rectangle FlashRect);
		Dynamic copyFromFlash_dyn();

		virtual ::openfl::_legacy::geom::Rectangle copyToFlash( ::openfl::_legacy::geom::Rectangle FlashRect);
		Dynamic copyToFlash_dyn();

		virtual bool overlaps( ::flixel::util::FlxRect Rect);
		Dynamic overlaps_dyn();

		virtual bool containsFlxPoint( ::flixel::util::FlxPoint Point);
		Dynamic containsFlxPoint_dyn();

		virtual ::flixel::util::FlxRect _union( ::flixel::util::FlxRect Rect);
		Dynamic _union_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float Value);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float Value);
		Dynamic set_right_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float Value);
		Dynamic set_top_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float Value);
		Dynamic set_bottom_dyn();

		static ::flixel::util::FlxPool _pool;
		static ::flixel::util::FlxRect get( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		static Dynamic get_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxRect */ 
