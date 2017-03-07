#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#define INCLUDED_flixel_util__FlxSignal_FlxSignalBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalBase)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalHandler)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxSignalBase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSignalBase_obj OBJ_;
		FlxSignalBase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxSignalBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSignalBase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSignalBase_obj();

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
		operator ::flixel::interfaces::IFlxSignal_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxSignalBase","\x8b","\x71","\x23","\x1a"); }

		Dynamic dispatch;
		Array< ::Dynamic > _handlers;
		virtual Void add( Dynamic listener);
		Dynamic add_dyn();

		virtual Void addOnce( Dynamic listener);
		Dynamic addOnce_dyn();

		virtual Void remove( Dynamic listener);
		Dynamic remove_dyn();

		virtual bool has( Dynamic listener);
		Dynamic has_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::_FlxSignal::FlxSignalHandler registerListener( Dynamic listener,bool dispatchOnce);
		Dynamic registerListener_dyn();

		virtual ::flixel::util::_FlxSignal::FlxSignalHandler getHandler( Dynamic listener);
		Dynamic getHandler_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignalBase */ 
