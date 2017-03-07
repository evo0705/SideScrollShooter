#ifndef INCLUDED_flixel_effects_particles_Bounds
#define INCLUDED_flixel_effects_particles_Bounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,effects,particles,Bounds)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  Bounds_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bounds_obj OBJ_;
		Bounds_obj();
		Void __construct(Dynamic min,Dynamic max);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.effects.particles.Bounds")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bounds_obj > __new(Dynamic min,Dynamic max);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bounds_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bounds","\x95","\xfa","\xb1","\x9a"); }

		Dynamic min;
		Dynamic max;
		virtual ::flixel::effects::particles::Bounds set( Dynamic min,Dynamic max);
		Dynamic set_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_Bounds */ 
