#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.touch.FlxTouch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTouch_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxTouch","\x0d","\x22","\x0d","\xd1"); }

		int screenX;
		int screenY;
		int touchPointID;
		int _current;
		int _last;
		::flixel::util::FlxPoint _point;
		::flixel::util::FlxPoint _globalScreenPosition;
		::openfl::_legacy::geom::Point _flashPoint;
		::flixel::util::FlxPoint _justPressedPosition;
		Float _justPressedTimeInTicks;
		virtual Void destroy( );

		virtual ::flixel::util::FlxPoint getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual ::flixel::util::FlxPoint getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual Void reset( Float X,Float Y,int PointID);
		Dynamic reset_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void updatePosition( Float X,Float Y);
		Dynamic updatePosition_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_isActive( );
		Dynamic get_isActive_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
