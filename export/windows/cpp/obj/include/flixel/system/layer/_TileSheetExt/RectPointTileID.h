#ifndef INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID
#define INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,_system,layer,_TileSheetExt,RectPointTileID)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace layer{
namespace _TileSheetExt{


class HXCPP_CLASS_ATTRIBUTES  RectPointTileID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RectPointTileID_obj OBJ_;
		RectPointTileID_obj();
		Void __construct(int id,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer._TileSheetExt.RectPointTileID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RectPointTileID_obj > __new(int id,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point point);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RectPointTileID_obj();

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
		::String __ToString() const { return HX_HCSTRING("RectPointTileID","\x15","\xd4","\x1c","\x34"); }

		::openfl::_legacy::geom::Rectangle rect;
		::openfl::_legacy::geom::Point point;
		int id;
		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace _TileSheetExt

#endif /* INCLUDED_flixel_system_layer__TileSheetExt_RectPointTileID */ 
