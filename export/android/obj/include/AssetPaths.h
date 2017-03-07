#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60"); }

		static void __boot();
		static ::String data_goes_here__txt;
		static ::String level_0001__oel;
		static ::String level_0001__tmx;
		static ::String level_0002__tmx;
		static ::String map1__oep;
		static ::String stage__oep;
		static ::String normal__ttf;
		static ::String pixelart__ttf;
		static ::String pixelmix__ttf;
		static ::String space__ttf;
		static ::String visitor2__ttf;
		static ::String bar_32_6__png;
		static ::String bar_64_8__png;
		static ::String bar_battery_sheet__png;
		static ::String bar_battery__png;
		static ::String bar_exp__png;
		static ::String bar_health_sheet__png;
		static ::String bar_health__png;
		static ::String bar_v_32_8_sheet__png;
		static ::String bar_v_32_8__png;
		static ::String bar_v_64_8__png;
		static ::String bars__png;
		static ::String batterybar__png;
		static ::String bricks__png;
		static ::String bullet_0001__png;
		static ::String bullet_0002__ase;
		static ::String bullet_0002__png;
		static ::String bullet_0003__ase;
		static ::String bullet_0003__png;
		static ::String buttonLeft__png;
		static ::String buttonRight__png;
		static ::String char_0001__png;
		static ::String dpad__ase;
		static ::String dpad__png;
		static ::String dpadA__ase;
		static ::String dpadA__png;
		static ::String dpadB__ase;
		static ::String dpadB__png;
		static ::String dpadleft__ase;
		static ::String dpadleft__png;
		static ::String dpadright__ase;
		static ::String dpadright__png;
		static ::String emptybar__png;
		static ::String enemy_0001__png;
		static ::String floor_0001__png;
		static ::String gibs_0001__png;
		static ::String gibs__png;
		static ::String gun_0001__ase;
		static ::String gun_0001__png;
		static ::String healthbar__png;
		static ::String images_go_here__txt;
		static ::String level__png;
		static ::String Sprite_0002__png;
		static ::String stage1__oep;
		static ::String tiles_0001__ase;
		static ::String tiles_0001__png;
		static ::String tree_0001__png;
		static ::String bgm_0001__ogg;
		static ::String bgm_0002__ogg;
		static ::String chase__ogg;
		static ::String fairy__ogg;
		static ::String fairyland__ogg;
		static ::String music_goes_here__txt;
		static ::String time_break__ogg;
		static ::String gun_0001__ogg;
		static ::String gun_0002__ogg;
		static ::String gun_0003__ogg;
		static ::String jump_0001__ogg;
		static ::String sounds_go_here__txt;
		static ::String step_0001__ogg;
		static ::String step_0002__ogg;
		static ::String walk_0001__ogg;
		static ::String walk_0002__ogg;
};


#endif /* INCLUDED_AssetPaths */ 
