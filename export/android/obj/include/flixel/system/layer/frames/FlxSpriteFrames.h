#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#define INCLUDED_flixel_system_layer_frames_FlxSpriteFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace _system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteFrames_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSpriteFrames_obj OBJ_;
		FlxSpriteFrames_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.layer.frames.FlxSpriteFrames")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSpriteFrames_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteFrames_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxSpriteFrames","\xfd","\x4c","\xa2","\x9c"); }

		Array< ::Dynamic > frames;
		::haxe::ds::StringMap framesHash;
		::String name;
		virtual Void addFrame( ::flixel::_system::layer::frames::FlxFrame frame);
		Dynamic addFrame_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxSpriteFrames */ 
