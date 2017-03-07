#ifndef INCLUDED_openfl_utils_Endian
#define INCLUDED_openfl_utils_Endian

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,Endian)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Endian_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Endian_obj OBJ_;
		Endian_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils.Endian")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Endian_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Endian_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Endian","\xbb","\x0c","\x1d","\x2f"); }

		static void __boot();
		static ::String _BIG_ENDIAN;
		static ::String _LITTLE_ENDIAN;
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_Endian */ 
