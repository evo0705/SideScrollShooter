#ifndef INCLUDED_menus_PauseMenu
#define INCLUDED_menus_PauseMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS1(menus,PauseMenu)
namespace menus{


class HXCPP_CLASS_ATTRIBUTES  PauseMenu_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef PauseMenu_obj OBJ_;
		PauseMenu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="menus.PauseMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PauseMenu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PauseMenu_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PauseMenu","\x95","\xdb","\x92","\xee"); }

		::flixel::ui::FlxButton pauseButton;
		::flixel::ui::FlxButton resumeButton;
		::flixel::ui::FlxButton mainMenuButton;
		bool isShowing;
		::flixel::FlxSprite _overlay;
		::flixel::group::FlxGroup group;
		virtual Void update( );

		virtual Void pauseOnDown( );
		Dynamic pauseOnDown_dyn();

		virtual Void resumeOnDown( );
		Dynamic resumeOnDown_dyn();

};

} // end namespace menus

#endif /* INCLUDED_menus_PauseMenu */ 
