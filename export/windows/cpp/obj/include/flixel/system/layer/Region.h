#ifndef INCLUDED_flixel_system_layer_Region
#define INCLUDED_flixel_system_layer_Region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,layer,Region)
namespace flixel{
namespace _system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Region_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Region_obj OBJ_;
		Region_obj();
		Void __construct(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.layer.Region")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Region_obj > __new(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Region_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Region","\x14","\x35","\x21","\x35"); }

		int startX;
		int startY;
		int width;
		int height;
		int tileWidth;
		int tileHeight;
		int spacingX;
		int spacingY;
		int numTiles;
		virtual int get_numTiles( );
		Dynamic get_numTiles_dyn();

		int numRows;
		virtual int get_numRows( );
		Dynamic get_numRows_dyn();

		int numCols;
		virtual int get_numCols( );
		Dynamic get_numCols_dyn();

		virtual ::flixel::_system::layer::Region clone( );
		Dynamic clone_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_Region */ 
