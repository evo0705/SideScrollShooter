#ifndef INCLUDED_flixel_util_FlxPath
#define INCLUDED_flixel_util_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,PathManager)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPath_obj OBJ_;
		FlxPath_obj();
		Void __construct(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPath_obj > __new(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPath_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxPath","\x17","\x1f","\xaa","\xda"); }

		static void __boot();
		Array< ::Dynamic > nodes;
		::flixel::FlxObject object;
		Float speed;
		Float angle;
		bool autoCenter;
		bool active;
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		bool finished;
		int _nodeIndex;
		int _mode;
		int _inc;
		bool _autoRotate;
		bool _inManager;
		virtual ::flixel::util::FlxPath reset( );
		Dynamic reset_dyn();

		virtual ::flixel::util::FlxPath start( ::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  Speed,hx::Null< int >  Mode,hx::Null< bool >  AutoRotate);
		Dynamic start_dyn();

		virtual ::flixel::util::FlxPath restart( );
		Dynamic restart_dyn();

		virtual Void setNode( int NodeIndex);
		Dynamic setNode_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::flixel::util::FlxPoint advancePath( hx::Null< bool >  Snap);
		Dynamic advancePath_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::FlxPath add( Float X,Float Y);
		Dynamic add_dyn();

		virtual ::flixel::util::FlxPath addAt( Float X,Float Y,int Index);
		Dynamic addAt_dyn();

		virtual ::flixel::util::FlxPath addPoint( ::flixel::util::FlxPoint Node,hx::Null< bool >  AsReference);
		Dynamic addPoint_dyn();

		virtual ::flixel::util::FlxPath addPointAt( ::flixel::util::FlxPoint Node,int Index,hx::Null< bool >  AsReference);
		Dynamic addPointAt_dyn();

		virtual ::flixel::util::FlxPoint remove( ::flixel::util::FlxPoint Node);
		Dynamic remove_dyn();

		virtual ::flixel::util::FlxPoint removeAt( int Index);
		Dynamic removeAt_dyn();

		virtual ::flixel::util::FlxPoint head( );
		Dynamic head_dyn();

		virtual ::flixel::util::FlxPoint tail( );
		Dynamic tail_dyn();

		static ::flixel::plugin::PathManager manager;
		static int FORWARD;
		static int BACKWARD;
		static int LOOP_FORWARD;
		static int LOOP_BACKWARD;
		static int YOYO;
		static int HORIZONTAL_ONLY;
		static int VERTICAL_ONLY;
		static ::flixel::util::FlxPoint _point;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPath */ 
