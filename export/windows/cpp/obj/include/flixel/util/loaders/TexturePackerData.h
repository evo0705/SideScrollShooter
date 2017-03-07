#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#define INCLUDED_flixel_util_loaders_TexturePackerData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureAtlasFrame)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  TexturePackerData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TexturePackerData_obj OBJ_;
		TexturePackerData_obj();
		Void __construct(::String Description,::String AssetName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.loaders.TexturePackerData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TexturePackerData_obj > __new(::String Description,::String AssetName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TexturePackerData_obj();

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
		::String __ToString() const { return HX_HCSTRING("TexturePackerData","\x6b","\x61","\x25","\x52"); }

		Array< ::Dynamic > frames;
		::String assetName;
		::String description;
		::openfl::_legacy::display::BitmapData asset;
		virtual Void parseData( );
		Dynamic parseData_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_TexturePackerData */ 
