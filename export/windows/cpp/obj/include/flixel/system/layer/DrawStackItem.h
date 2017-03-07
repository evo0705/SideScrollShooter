#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#define INCLUDED_flixel_system_layer_DrawStackItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,layer,DrawStackItem)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{
namespace _system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  DrawStackItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawStackItem_obj OBJ_;
		DrawStackItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.DrawStackItem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DrawStackItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawStackItem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DrawStackItem","\xb7","\xff","\xd4","\x77"); }

		::flixel::util::loaders::CachedGraphics graphics;
		Array< Float > drawData;
		int position;
		::flixel::_system::layer::DrawStackItem next;
		bool colored;
		int blending;
		bool initialized;
		bool antialiasing;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_DrawStackItem */ 
