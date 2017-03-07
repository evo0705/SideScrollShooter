#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#define INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,text,pxText,_PxBitmapFont,HelperSymbol)
namespace flixel{
namespace text{
namespace pxText{
namespace _PxBitmapFont{


class HXCPP_CLASS_ATTRIBUTES  HelperSymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HelperSymbol_obj OBJ_;
		HelperSymbol_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.text.pxText._PxBitmapFont.HelperSymbol")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HelperSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HelperSymbol_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HelperSymbol","\x86","\xb3","\x87","\xf7"); }

		int x;
		int y;
		int width;
		int height;
		int xoffset;
		int yoffset;
		int xadvance;
		int charCode;
};

} // end namespace flixel
} // end namespace text
} // end namespace pxText
} // end namespace _PxBitmapFont

#endif /* INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol */ 
