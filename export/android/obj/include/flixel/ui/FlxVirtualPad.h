#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#define INCLUDED_flixel_ui_FlxVirtualPad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,ActionMode)
HX_DECLARE_CLASS2(flixel,ui,DPadMode)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,ui,FlxVirtualPad)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxVirtualPad_obj : public ::flixel::group::FlxSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxSpriteGroup_obj super;
		typedef FlxVirtualPad_obj OBJ_;
		FlxVirtualPad_obj();
		Void __construct(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxVirtualPad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxVirtualPad_obj > __new(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxVirtualPad_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxVirtualPad","\xfa","\x5e","\x1f","\x8f"); }

		::flixel::ui::FlxButton buttonA;
		::flixel::ui::FlxButton buttonB;
		::flixel::ui::FlxButton buttonC;
		::flixel::ui::FlxButton buttonY;
		::flixel::ui::FlxButton buttonX;
		::flixel::ui::FlxButton buttonLeft;
		::flixel::ui::FlxButton buttonUp;
		::flixel::ui::FlxButton buttonRight;
		::flixel::ui::FlxButton buttonDown;
		::flixel::group::FlxSpriteGroup dPad;
		::flixel::group::FlxSpriteGroup actions;
		virtual Void destroy( );

		virtual ::flixel::ui::FlxButton createButton( Float X,Float Y,int Width,int Height,Dynamic Image,Dynamic OnClick);
		Dynamic createButton_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxVirtualPad */ 
