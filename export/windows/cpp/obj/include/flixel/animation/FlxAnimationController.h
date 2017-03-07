#ifndef INCLUDED_flixel_animation_FlxAnimationController
#define INCLUDED_flixel_animation_FlxAnimationController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxPrerotatedAnimation)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,_system,layer,frames,FlxFrame)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  FlxAnimationController_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAnimationController_obj OBJ_;
		FlxAnimationController_obj();
		Void __construct(::flixel::FlxSprite Sprite);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxAnimationController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxAnimationController_obj > __new(::flixel::FlxSprite Sprite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAnimationController_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxAnimationController","\x8e","\x2f","\x81","\x78"); }

		static void __boot();
		int frameIndex;
		int frames;
		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		::flixel::FlxSprite _sprite;
		::flixel::animation::FlxAnimation _curAnim;
		::haxe::ds::StringMap _animations;
		::flixel::animation::FlxPrerotatedAnimation _prerotated;
		virtual Void update( );
		Dynamic update_dyn();

		virtual ::flixel::animation::FlxAnimationController copyFrom( ::flixel::animation::FlxAnimationController controller);
		Dynamic copyFrom_dyn();

		virtual Void createPrerotated( ::flixel::animation::FlxAnimationController Controller);
		Dynamic createPrerotated_dyn();

		virtual Void destroyAnimations( );
		Dynamic destroyAnimations_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void clearPrerotated( );
		Dynamic clearPrerotated_dyn();

		virtual Void clearAnimations( );
		Dynamic clearAnimations_dyn();

		virtual ::flixel::animation::FlxAnimation get( ::String Name);
		Dynamic get_dyn();

		virtual Void add( ::String Name,Array< int > Frames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic add_dyn();

		virtual Void append( ::String Name,Array< int > Frames);
		Dynamic append_dyn();

		virtual Void addByNames( ::String Name,Array< ::String > FrameNames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByNames_dyn();

		virtual Void appendByNames( ::String Name,Array< ::String > FrameNames);
		Dynamic appendByNames_dyn();

		virtual Void addByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByStringIndices_dyn();

		virtual Void appendByStringIndices( ::String Name,::String Prefix,Array< ::String > Indices,::String Postfix);
		Dynamic appendByStringIndices_dyn();

		virtual Void addByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByIndices_dyn();

		virtual Void appendByIndices( ::String Name,::String Prefix,Array< int > Indices,::String Postfix);
		Dynamic appendByIndices_dyn();

		virtual int findSpriteFrame( ::String Prefix,int Index,::String Postfix);
		Dynamic findSpriteFrame_dyn();

		virtual Void addByPrefix( ::String Name,::String Prefix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByPrefix_dyn();

		virtual Void appendByPrefix( ::String Name,::String Prefix);
		Dynamic appendByPrefix_dyn();

		virtual Void play( ::String AnimName,hx::Null< bool >  Force,hx::Null< int >  Frame);
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual ::flixel::animation::FlxAnimation getByName( ::String Name);
		Dynamic getByName_dyn();

		virtual Void randomFrame( );
		Dynamic randomFrame_dyn();

		virtual Void fireCallback( );
		Dynamic fireCallback_dyn();

		virtual Void byNamesHelper( Array< int > AddTo,Array< ::String > FrameNames);
		Dynamic byNamesHelper_dyn();

		virtual Void byStringIndicesHelper( Array< int > AddTo,::String Prefix,Array< ::String > Indices,::String Postfix);
		Dynamic byStringIndicesHelper_dyn();

		virtual Void byIndicesHelper( Array< int > AddTo,::String Prefix,Array< int > Indices,::String Postfix);
		Dynamic byIndicesHelper_dyn();

		virtual Void byPrefixHelper( Array< int > AddTo,Array< ::Dynamic > AnimFrames,::String Prefix);
		Dynamic byPrefixHelper_dyn();

		virtual Void findByPrefix( Array< ::Dynamic > AnimFrames,::String Prefix);
		Dynamic findByPrefix_dyn();

		virtual int set_frameIndex( int Frame);
		Dynamic set_frameIndex_dyn();

		virtual ::String get_frameName( );
		Dynamic get_frameName_dyn();

		virtual ::String set_frameName( ::String Value);
		Dynamic set_frameName_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String AnimName);
		Dynamic set_name_dyn();

		virtual ::flixel::animation::FlxAnimation get_curAnim( );
		Dynamic get_curAnim_dyn();

		virtual ::flixel::animation::FlxAnimation set_curAnim( ::flixel::animation::FlxAnimation Anim);
		Dynamic set_curAnim_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual bool set_paused( bool Value);
		Dynamic set_paused_dyn();

		virtual bool get_finished( );
		Dynamic get_finished_dyn();

		virtual bool set_finished( bool Value);
		Dynamic set_finished_dyn();

		virtual int get_frames( );
		Dynamic get_frames_dyn();

		virtual int getFrameIndex( ::flixel::_system::layer::frames::FlxFrame Frame);
		Dynamic getFrameIndex_dyn();

		static int prefixLength;
		static int postfixLength;
		static int frameSortFunction( ::flixel::_system::layer::frames::FlxFrame frame1,::flixel::_system::layer::frames::FlxFrame frame2);
		static Dynamic frameSortFunction_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxAnimationController */ 
