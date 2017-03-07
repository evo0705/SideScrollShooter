#ifndef INCLUDED_Bars
#define INCLUDED_Bars

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
HX_DECLARE_CLASS0(BarType)
HX_DECLARE_CLASS0(Bars)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)


class HXCPP_CLASS_ATTRIBUTES  Bars_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef Bars_obj OBJ_;
		Bars_obj();
		Void __construct(::Player P,::BarType Bar,Float X,Float Y,Float Max);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Bars")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bars_obj > __new(::Player P,::BarType Bar,Float X,Float Y,Float Max);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bars_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bars","\x60","\x13","\xea","\x2b"); }

		::flixel::FlxSprite _bar;
		::flixel::ui::FlxBar _barVal;
		::Player _parentRef;
		::flixel::text::FlxText _text;
		Float _max;
		::BarType _type;
		virtual Void update( );

		virtual Void setCurrentValue( Float Value,::String Label);
		Dynamic setCurrentValue_dyn();

		virtual Void setMaxValue( Float Value);
		Dynamic setMaxValue_dyn();

};


#endif /* INCLUDED_Bars */ 
