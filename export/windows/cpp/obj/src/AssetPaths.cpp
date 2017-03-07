#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::level_0001__oel;

::String AssetPaths_obj::level_0001__tmx;

::String AssetPaths_obj::level_0002__tmx;

::String AssetPaths_obj::map1__oep;

::String AssetPaths_obj::stage__oep;

::String AssetPaths_obj::normal__ttf;

::String AssetPaths_obj::pixelart__ttf;

::String AssetPaths_obj::pixelmix__ttf;

::String AssetPaths_obj::space__ttf;

::String AssetPaths_obj::visitor2__ttf;

::String AssetPaths_obj::bar_32_6__png;

::String AssetPaths_obj::bar_64_8__png;

::String AssetPaths_obj::bar_battery_sheet__png;

::String AssetPaths_obj::bar_battery__png;

::String AssetPaths_obj::bar_exp__png;

::String AssetPaths_obj::bar_health_sheet__png;

::String AssetPaths_obj::bar_health__png;

::String AssetPaths_obj::bar_v_32_8_sheet__png;

::String AssetPaths_obj::bar_v_32_8__png;

::String AssetPaths_obj::bar_v_64_8__png;

::String AssetPaths_obj::bars__png;

::String AssetPaths_obj::batterybar__png;

::String AssetPaths_obj::bricks__png;

::String AssetPaths_obj::bullet_0001__png;

::String AssetPaths_obj::bullet_0002__ase;

::String AssetPaths_obj::bullet_0002__png;

::String AssetPaths_obj::bullet_0003__ase;

::String AssetPaths_obj::bullet_0003__png;

::String AssetPaths_obj::buttonLeft__png;

::String AssetPaths_obj::buttonRight__png;

::String AssetPaths_obj::char_0001__png;

::String AssetPaths_obj::dpad__ase;

::String AssetPaths_obj::dpad__png;

::String AssetPaths_obj::dpadA__ase;

::String AssetPaths_obj::dpadA__png;

::String AssetPaths_obj::dpadB__ase;

::String AssetPaths_obj::dpadB__png;

::String AssetPaths_obj::dpadleft__ase;

::String AssetPaths_obj::dpadleft__png;

::String AssetPaths_obj::dpadright__ase;

::String AssetPaths_obj::dpadright__png;

::String AssetPaths_obj::emptybar__png;

::String AssetPaths_obj::enemy_0001__png;

::String AssetPaths_obj::floor_0001__png;

::String AssetPaths_obj::gibs_0001__png;

::String AssetPaths_obj::gibs__png;

::String AssetPaths_obj::gun_0001__ase;

::String AssetPaths_obj::gun_0001__png;

::String AssetPaths_obj::healthbar__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::level__png;

::String AssetPaths_obj::Sprite_0002__png;

::String AssetPaths_obj::stage1__oep;

::String AssetPaths_obj::tiles_0001__ase;

::String AssetPaths_obj::tiles_0001__png;

::String AssetPaths_obj::tree_0001__png;

::String AssetPaths_obj::bgm_0001__ogg;

::String AssetPaths_obj::bgm_0002__ogg;

::String AssetPaths_obj::chase__ogg;

::String AssetPaths_obj::fairy__ogg;

::String AssetPaths_obj::fairyland__ogg;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::time_break__ogg;

::String AssetPaths_obj::gun_0001__ogg;

::String AssetPaths_obj::gun_0002__ogg;

::String AssetPaths_obj::gun_0003__ogg;

::String AssetPaths_obj::jump_0001__ogg;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::step_0001__ogg;

::String AssetPaths_obj::step_0002__ogg;

::String AssetPaths_obj::walk_0001__ogg;

::String AssetPaths_obj::walk_0002__ogg;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::level_0001__oel,HX_HCSTRING("level_0001__oel","\x1a","\x1a","\xae","\x15")},
	{hx::fsString,(void *) &AssetPaths_obj::level_0001__tmx,HX_HCSTRING("level_0001__tmx","\x63","\xec","\xb1","\x15")},
	{hx::fsString,(void *) &AssetPaths_obj::level_0002__tmx,HX_HCSTRING("level_0002__tmx","\xc2","\x48","\x0d","\x7c")},
	{hx::fsString,(void *) &AssetPaths_obj::map1__oep,HX_HCSTRING("map1__oep","\x45","\x89","\xf8","\x37")},
	{hx::fsString,(void *) &AssetPaths_obj::stage__oep,HX_HCSTRING("stage__oep","\xfc","\xd7","\x53","\xb2")},
	{hx::fsString,(void *) &AssetPaths_obj::normal__ttf,HX_HCSTRING("normal__ttf","\x3f","\x2c","\x39","\xec")},
	{hx::fsString,(void *) &AssetPaths_obj::pixelart__ttf,HX_HCSTRING("pixelart__ttf","\x09","\x83","\x7d","\x43")},
	{hx::fsString,(void *) &AssetPaths_obj::pixelmix__ttf,HX_HCSTRING("pixelmix__ttf","\x30","\x21","\x07","\x15")},
	{hx::fsString,(void *) &AssetPaths_obj::space__ttf,HX_HCSTRING("space__ttf","\x40","\x31","\x3c","\xc0")},
	{hx::fsString,(void *) &AssetPaths_obj::visitor2__ttf,HX_HCSTRING("visitor2__ttf","\x82","\xf0","\x91","\xb7")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_32_6__png,HX_HCSTRING("bar_32_6__png","\xc7","\x53","\xc7","\x85")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_64_8__png,HX_HCSTRING("bar_64_8__png","\xc6","\x2b","\xb7","\x3d")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_battery_sheet__png,HX_HCSTRING("bar_battery_sheet__png","\x28","\x8b","\x2c","\x01")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_battery__png,HX_HCSTRING("bar_battery__png","\xc8","\xc7","\xeb","\x66")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_exp__png,HX_HCSTRING("bar_exp__png","\xf8","\xca","\x6e","\xb1")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_health_sheet__png,HX_HCSTRING("bar_health_sheet__png","\xe1","\xb3","\xb0","\xc3")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_health__png,HX_HCSTRING("bar_health__png","\xc1","\x2f","\x48","\xe7")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_v_32_8_sheet__png,HX_HCSTRING("bar_v_32_8_sheet__png","\x9c","\xc7","\xba","\x54")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_v_32_8__png,HX_HCSTRING("bar_v_32_8__png","\x3c","\x75","\x80","\xfa")},
	{hx::fsString,(void *) &AssetPaths_obj::bar_v_64_8__png,HX_HCSTRING("bar_v_64_8__png","\x7d","\x94","\xb9","\xe5")},
	{hx::fsString,(void *) &AssetPaths_obj::bars__png,HX_HCSTRING("bars__png","\x49","\x8e","\x52","\xde")},
	{hx::fsString,(void *) &AssetPaths_obj::batterybar__png,HX_HCSTRING("batterybar__png","\xa3","\x2b","\xcd","\x8c")},
	{hx::fsString,(void *) &AssetPaths_obj::bricks__png,HX_HCSTRING("bricks__png","\x77","\x82","\x89","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::bullet_0001__png,HX_HCSTRING("bullet_0001__png","\x6b","\xfa","\x22","\x33")},
	{hx::fsString,(void *) &AssetPaths_obj::bullet_0002__ase,HX_HCSTRING("bullet_0002__ase","\x54","\xf9","\x72","\x99")},
	{hx::fsString,(void *) &AssetPaths_obj::bullet_0002__png,HX_HCSTRING("bullet_0002__png","\xca","\x56","\x7e","\x99")},
	{hx::fsString,(void *) &AssetPaths_obj::bullet_0003__ase,HX_HCSTRING("bullet_0003__ase","\xb3","\x55","\xce","\xff")},
	{hx::fsString,(void *) &AssetPaths_obj::bullet_0003__png,HX_HCSTRING("bullet_0003__png","\x29","\xb3","\xd9","\xff")},
	{hx::fsString,(void *) &AssetPaths_obj::buttonLeft__png,HX_HCSTRING("buttonLeft__png","\xd0","\xeb","\xa7","\xfd")},
	{hx::fsString,(void *) &AssetPaths_obj::buttonRight__png,HX_HCSTRING("buttonRight__png","\xbf","\x3c","\x3f","\x63")},
	{hx::fsString,(void *) &AssetPaths_obj::char_0001__png,HX_HCSTRING("char_0001__png","\xff","\xc7","\xde","\xe3")},
	{hx::fsString,(void *) &AssetPaths_obj::dpad__ase,HX_HCSTRING("dpad__ase","\x44","\x66","\xd7","\x1b")},
	{hx::fsString,(void *) &AssetPaths_obj::dpad__png,HX_HCSTRING("dpad__png","\xba","\xc3","\xe2","\x1b")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadA__ase,HX_HCSTRING("dpadA__ase","\xe1","\x38","\x8d","\x40")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadA__png,HX_HCSTRING("dpadA__png","\x57","\x96","\x98","\x40")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadB__ase,HX_HCSTRING("dpadB__ase","\x40","\x95","\xe8","\xa6")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadB__png,HX_HCSTRING("dpadB__png","\xb6","\xf2","\xf3","\xa6")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadleft__ase,HX_HCSTRING("dpadleft__ase","\x5d","\x51","\x27","\x68")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadleft__png,HX_HCSTRING("dpadleft__png","\xd3","\xae","\x32","\x68")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadright__ase,HX_HCSTRING("dpadright__ase","\xe6","\xbe","\x13","\x32")},
	{hx::fsString,(void *) &AssetPaths_obj::dpadright__png,HX_HCSTRING("dpadright__png","\x5c","\x1c","\x1f","\x32")},
	{hx::fsString,(void *) &AssetPaths_obj::emptybar__png,HX_HCSTRING("emptybar__png","\x63","\x9e","\x6d","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::enemy_0001__png,HX_HCSTRING("enemy_0001__png","\xf1","\xfd","\x63","\xd2")},
	{hx::fsString,(void *) &AssetPaths_obj::floor_0001__png,HX_HCSTRING("floor_0001__png","\x75","\xca","\xf3","\x98")},
	{hx::fsString,(void *) &AssetPaths_obj::gibs_0001__png,HX_HCSTRING("gibs_0001__png","\xdc","\x6b","\xf2","\xf6")},
	{hx::fsString,(void *) &AssetPaths_obj::gibs__png,HX_HCSTRING("gibs__png","\x36","\xc0","\x45","\x2d")},
	{hx::fsString,(void *) &AssetPaths_obj::gun_0001__ase,HX_HCSTRING("gun_0001__ase","\xb3","\x92","\x86","\x74")},
	{hx::fsString,(void *) &AssetPaths_obj::gun_0001__png,HX_HCSTRING("gun_0001__png","\x29","\xf0","\x91","\x74")},
	{hx::fsString,(void *) &AssetPaths_obj::healthbar__png,HX_HCSTRING("healthbar__png","\x72","\xb3","\x5c","\xe4")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::level__png,HX_HCSTRING("level__png","\x85","\x29","\x9e","\x3e")},
	{hx::fsString,(void *) &AssetPaths_obj::Sprite_0002__png,HX_HCSTRING("Sprite_0002__png","\x6d","\x6e","\xbf","\x10")},
	{hx::fsString,(void *) &AssetPaths_obj::stage1__oep,HX_HCSTRING("stage1__oep","\xe7","\xae","\x12","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles_0001__ase,HX_HCSTRING("tiles_0001__ase","\xf8","\xd9","\xc5","\x94")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles_0001__png,HX_HCSTRING("tiles_0001__png","\x6e","\x37","\xd1","\x94")},
	{hx::fsString,(void *) &AssetPaths_obj::tree_0001__png,HX_HCSTRING("tree_0001__png","\x87","\x7c","\x98","\x06")},
	{hx::fsString,(void *) &AssetPaths_obj::bgm_0001__ogg,HX_HCSTRING("bgm_0001__ogg","\x57","\x4a","\x78","\xfe")},
	{hx::fsString,(void *) &AssetPaths_obj::bgm_0002__ogg,HX_HCSTRING("bgm_0002__ogg","\xb6","\xa6","\xd3","\x64")},
	{hx::fsString,(void *) &AssetPaths_obj::chase__ogg,HX_HCSTRING("chase__ogg","\xc1","\x00","\x5d","\xbd")},
	{hx::fsString,(void *) &AssetPaths_obj::fairy__ogg,HX_HCSTRING("fairy__ogg","\xfa","\xda","\xc3","\xd8")},
	{hx::fsString,(void *) &AssetPaths_obj::fairyland__ogg,HX_HCSTRING("fairyland__ogg","\xaf","\xc2","\xd0","\xb2")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::time_break__ogg,HX_HCSTRING("time_break__ogg","\x42","\x4e","\x0d","\x6a")},
	{hx::fsString,(void *) &AssetPaths_obj::gun_0001__ogg,HX_HCSTRING("gun_0001__ogg","\xcf","\x27","\x91","\x74")},
	{hx::fsString,(void *) &AssetPaths_obj::gun_0002__ogg,HX_HCSTRING("gun_0002__ogg","\x2e","\x84","\xec","\xda")},
	{hx::fsString,(void *) &AssetPaths_obj::gun_0003__ogg,HX_HCSTRING("gun_0003__ogg","\x8d","\xe0","\x47","\x41")},
	{hx::fsString,(void *) &AssetPaths_obj::jump_0001__ogg,HX_HCSTRING("jump_0001__ogg","\xbd","\xf3","\x9d","\xd4")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{hx::fsString,(void *) &AssetPaths_obj::step_0001__ogg,HX_HCSTRING("step_0001__ogg","\x9b","\xf7","\xf9","\x58")},
	{hx::fsString,(void *) &AssetPaths_obj::step_0002__ogg,HX_HCSTRING("step_0002__ogg","\xfa","\x53","\x55","\xbf")},
	{hx::fsString,(void *) &AssetPaths_obj::walk_0001__ogg,HX_HCSTRING("walk_0001__ogg","\x98","\xdb","\x49","\x7e")},
	{hx::fsString,(void *) &AssetPaths_obj::walk_0002__ogg,HX_HCSTRING("walk_0002__ogg","\xf7","\x37","\xa5","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level_0001__oel,"level_0001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level_0001__tmx,"level_0001__tmx");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level_0002__tmx,"level_0002__tmx");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::map1__oep,"map1__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::stage__oep,"stage__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::normal__ttf,"normal__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pixelart__ttf,"pixelart__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pixelmix__ttf,"pixelmix__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::space__ttf,"space__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::visitor2__ttf,"visitor2__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_32_6__png,"bar_32_6__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_64_8__png,"bar_64_8__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_battery_sheet__png,"bar_battery_sheet__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_battery__png,"bar_battery__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_exp__png,"bar_exp__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_health_sheet__png,"bar_health_sheet__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_health__png,"bar_health__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_v_32_8_sheet__png,"bar_v_32_8_sheet__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_v_32_8__png,"bar_v_32_8__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bar_v_64_8__png,"bar_v_64_8__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bars__png,"bars__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::batterybar__png,"batterybar__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bricks__png,"bricks__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bullet_0001__png,"bullet_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bullet_0002__ase,"bullet_0002__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bullet_0002__png,"bullet_0002__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bullet_0003__ase,"bullet_0003__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bullet_0003__png,"bullet_0003__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::buttonLeft__png,"buttonLeft__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::buttonRight__png,"buttonRight__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::char_0001__png,"char_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpad__ase,"dpad__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpad__png,"dpad__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadA__ase,"dpadA__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadA__png,"dpadA__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadB__ase,"dpadB__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadB__png,"dpadB__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadleft__ase,"dpadleft__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadleft__png,"dpadleft__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadright__ase,"dpadright__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::dpadright__png,"dpadright__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::emptybar__png,"emptybar__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy_0001__png,"enemy_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::floor_0001__png,"floor_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gibs_0001__png,"gibs_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gibs__png,"gibs__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gun_0001__ase,"gun_0001__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gun_0001__png,"gun_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::healthbar__png,"healthbar__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::level__png,"level__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Sprite_0002__png,"Sprite_0002__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::stage1__oep,"stage1__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles_0001__ase,"tiles_0001__ase");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles_0001__png,"tiles_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tree_0001__png,"tree_0001__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bgm_0001__ogg,"bgm_0001__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::bgm_0002__ogg,"bgm_0002__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::chase__ogg,"chase__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fairy__ogg,"fairy__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fairyland__ogg,"fairyland__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::time_break__ogg,"time_break__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gun_0001__ogg,"gun_0001__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gun_0002__ogg,"gun_0002__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::gun_0003__ogg,"gun_0003__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::jump_0001__ogg,"jump_0001__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step_0001__ogg,"step_0001__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step_0002__ogg,"step_0002__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::walk_0001__ogg,"walk_0001__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::walk_0002__ogg,"walk_0002__ogg");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level_0001__oel,"level_0001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level_0001__tmx,"level_0001__tmx");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level_0002__tmx,"level_0002__tmx");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::map1__oep,"map1__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::stage__oep,"stage__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::normal__ttf,"normal__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pixelart__ttf,"pixelart__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pixelmix__ttf,"pixelmix__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::space__ttf,"space__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::visitor2__ttf,"visitor2__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_32_6__png,"bar_32_6__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_64_8__png,"bar_64_8__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_battery_sheet__png,"bar_battery_sheet__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_battery__png,"bar_battery__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_exp__png,"bar_exp__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_health_sheet__png,"bar_health_sheet__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_health__png,"bar_health__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_v_32_8_sheet__png,"bar_v_32_8_sheet__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_v_32_8__png,"bar_v_32_8__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bar_v_64_8__png,"bar_v_64_8__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bars__png,"bars__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::batterybar__png,"batterybar__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bricks__png,"bricks__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bullet_0001__png,"bullet_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bullet_0002__ase,"bullet_0002__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bullet_0002__png,"bullet_0002__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bullet_0003__ase,"bullet_0003__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bullet_0003__png,"bullet_0003__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::buttonLeft__png,"buttonLeft__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::buttonRight__png,"buttonRight__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::char_0001__png,"char_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpad__ase,"dpad__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpad__png,"dpad__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadA__ase,"dpadA__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadA__png,"dpadA__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadB__ase,"dpadB__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadB__png,"dpadB__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadleft__ase,"dpadleft__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadleft__png,"dpadleft__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadright__ase,"dpadright__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::dpadright__png,"dpadright__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::emptybar__png,"emptybar__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy_0001__png,"enemy_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::floor_0001__png,"floor_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gibs_0001__png,"gibs_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gibs__png,"gibs__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gun_0001__ase,"gun_0001__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gun_0001__png,"gun_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::healthbar__png,"healthbar__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::level__png,"level__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Sprite_0002__png,"Sprite_0002__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::stage1__oep,"stage1__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles_0001__ase,"tiles_0001__ase");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles_0001__png,"tiles_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tree_0001__png,"tree_0001__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bgm_0001__ogg,"bgm_0001__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::bgm_0002__ogg,"bgm_0002__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::chase__ogg,"chase__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fairy__ogg,"fairy__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fairyland__ogg,"fairyland__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::time_break__ogg,"time_break__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gun_0001__ogg,"gun_0001__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gun_0002__ogg,"gun_0002__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::gun_0003__ogg,"gun_0003__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::jump_0001__ogg,"jump_0001__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step_0001__ogg,"step_0001__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step_0002__ogg,"step_0002__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::walk_0001__ogg,"walk_0001__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::walk_0002__ogg,"walk_0002__ogg");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("level_0001__oel","\x1a","\x1a","\xae","\x15"),
	HX_HCSTRING("level_0001__tmx","\x63","\xec","\xb1","\x15"),
	HX_HCSTRING("level_0002__tmx","\xc2","\x48","\x0d","\x7c"),
	HX_HCSTRING("map1__oep","\x45","\x89","\xf8","\x37"),
	HX_HCSTRING("stage__oep","\xfc","\xd7","\x53","\xb2"),
	HX_HCSTRING("normal__ttf","\x3f","\x2c","\x39","\xec"),
	HX_HCSTRING("pixelart__ttf","\x09","\x83","\x7d","\x43"),
	HX_HCSTRING("pixelmix__ttf","\x30","\x21","\x07","\x15"),
	HX_HCSTRING("space__ttf","\x40","\x31","\x3c","\xc0"),
	HX_HCSTRING("visitor2__ttf","\x82","\xf0","\x91","\xb7"),
	HX_HCSTRING("bar_32_6__png","\xc7","\x53","\xc7","\x85"),
	HX_HCSTRING("bar_64_8__png","\xc6","\x2b","\xb7","\x3d"),
	HX_HCSTRING("bar_battery_sheet__png","\x28","\x8b","\x2c","\x01"),
	HX_HCSTRING("bar_battery__png","\xc8","\xc7","\xeb","\x66"),
	HX_HCSTRING("bar_exp__png","\xf8","\xca","\x6e","\xb1"),
	HX_HCSTRING("bar_health_sheet__png","\xe1","\xb3","\xb0","\xc3"),
	HX_HCSTRING("bar_health__png","\xc1","\x2f","\x48","\xe7"),
	HX_HCSTRING("bar_v_32_8_sheet__png","\x9c","\xc7","\xba","\x54"),
	HX_HCSTRING("bar_v_32_8__png","\x3c","\x75","\x80","\xfa"),
	HX_HCSTRING("bar_v_64_8__png","\x7d","\x94","\xb9","\xe5"),
	HX_HCSTRING("bars__png","\x49","\x8e","\x52","\xde"),
	HX_HCSTRING("batterybar__png","\xa3","\x2b","\xcd","\x8c"),
	HX_HCSTRING("bricks__png","\x77","\x82","\x89","\xe8"),
	HX_HCSTRING("bullet_0001__png","\x6b","\xfa","\x22","\x33"),
	HX_HCSTRING("bullet_0002__ase","\x54","\xf9","\x72","\x99"),
	HX_HCSTRING("bullet_0002__png","\xca","\x56","\x7e","\x99"),
	HX_HCSTRING("bullet_0003__ase","\xb3","\x55","\xce","\xff"),
	HX_HCSTRING("bullet_0003__png","\x29","\xb3","\xd9","\xff"),
	HX_HCSTRING("buttonLeft__png","\xd0","\xeb","\xa7","\xfd"),
	HX_HCSTRING("buttonRight__png","\xbf","\x3c","\x3f","\x63"),
	HX_HCSTRING("char_0001__png","\xff","\xc7","\xde","\xe3"),
	HX_HCSTRING("dpad__ase","\x44","\x66","\xd7","\x1b"),
	HX_HCSTRING("dpad__png","\xba","\xc3","\xe2","\x1b"),
	HX_HCSTRING("dpadA__ase","\xe1","\x38","\x8d","\x40"),
	HX_HCSTRING("dpadA__png","\x57","\x96","\x98","\x40"),
	HX_HCSTRING("dpadB__ase","\x40","\x95","\xe8","\xa6"),
	HX_HCSTRING("dpadB__png","\xb6","\xf2","\xf3","\xa6"),
	HX_HCSTRING("dpadleft__ase","\x5d","\x51","\x27","\x68"),
	HX_HCSTRING("dpadleft__png","\xd3","\xae","\x32","\x68"),
	HX_HCSTRING("dpadright__ase","\xe6","\xbe","\x13","\x32"),
	HX_HCSTRING("dpadright__png","\x5c","\x1c","\x1f","\x32"),
	HX_HCSTRING("emptybar__png","\x63","\x9e","\x6d","\xe8"),
	HX_HCSTRING("enemy_0001__png","\xf1","\xfd","\x63","\xd2"),
	HX_HCSTRING("floor_0001__png","\x75","\xca","\xf3","\x98"),
	HX_HCSTRING("gibs_0001__png","\xdc","\x6b","\xf2","\xf6"),
	HX_HCSTRING("gibs__png","\x36","\xc0","\x45","\x2d"),
	HX_HCSTRING("gun_0001__ase","\xb3","\x92","\x86","\x74"),
	HX_HCSTRING("gun_0001__png","\x29","\xf0","\x91","\x74"),
	HX_HCSTRING("healthbar__png","\x72","\xb3","\x5c","\xe4"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("level__png","\x85","\x29","\x9e","\x3e"),
	HX_HCSTRING("Sprite_0002__png","\x6d","\x6e","\xbf","\x10"),
	HX_HCSTRING("stage1__oep","\xe7","\xae","\x12","\xe8"),
	HX_HCSTRING("tiles_0001__ase","\xf8","\xd9","\xc5","\x94"),
	HX_HCSTRING("tiles_0001__png","\x6e","\x37","\xd1","\x94"),
	HX_HCSTRING("tree_0001__png","\x87","\x7c","\x98","\x06"),
	HX_HCSTRING("bgm_0001__ogg","\x57","\x4a","\x78","\xfe"),
	HX_HCSTRING("bgm_0002__ogg","\xb6","\xa6","\xd3","\x64"),
	HX_HCSTRING("chase__ogg","\xc1","\x00","\x5d","\xbd"),
	HX_HCSTRING("fairy__ogg","\xfa","\xda","\xc3","\xd8"),
	HX_HCSTRING("fairyland__ogg","\xaf","\xc2","\xd0","\xb2"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("time_break__ogg","\x42","\x4e","\x0d","\x6a"),
	HX_HCSTRING("gun_0001__ogg","\xcf","\x27","\x91","\x74"),
	HX_HCSTRING("gun_0002__ogg","\x2e","\x84","\xec","\xda"),
	HX_HCSTRING("gun_0003__ogg","\x8d","\xe0","\x47","\x41"),
	HX_HCSTRING("jump_0001__ogg","\xbd","\xf3","\x9d","\xd4"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	HX_HCSTRING("step_0001__ogg","\x9b","\xf7","\xf9","\x58"),
	HX_HCSTRING("step_0002__ogg","\xfa","\x53","\x55","\xbf"),
	HX_HCSTRING("walk_0001__ogg","\x98","\xdb","\x49","\x7e"),
	HX_HCSTRING("walk_0002__ogg","\xf7","\x37","\xa5","\xe4"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_HCSTRING("assets/data/data-goes-here.txt","\x5f","\x4b","\xb2","\x8e");
	level_0001__oel= HX_HCSTRING("assets/data/level-0001.oel","\x8b","\xcd","\x50","\x12");
	level_0001__tmx= HX_HCSTRING("assets/data/level-0001.tmx","\xd4","\x9f","\x54","\x12");
	level_0002__tmx= HX_HCSTRING("assets/data/level-0002.tmx","\x55","\x34","\xbb","\xa5");
	map1__oep= HX_HCSTRING("assets/data/map1.oep","\xba","\x01","\x46","\x48");
	stage__oep= HX_HCSTRING("assets/data/stage.oep","\xd1","\x8c","\x00","\xcd");
	normal__ttf= HX_HCSTRING("assets/fonts/normal.ttf","\x16","\x17","\xef","\x53");
	pixelart__ttf= HX_HCSTRING("assets/fonts/pixelart.ttf","\x4c","\xd3","\x78","\x95");
	pixelmix__ttf= HX_HCSTRING("assets/fonts/pixelmix.ttf","\x05","\x77","\xde","\x3c");
	space__ttf= HX_HCSTRING("assets/fonts/space.ttf","\x27","\x85","\xd5","\x09");
	visitor2__ttf= HX_HCSTRING("assets/fonts/visitor2.ttf","\xf3","\x77","\x94","\xb9");
	bar_32_6__png= HX_HCSTRING("assets/images/bar-32-6.png","\x28","\xb8","\x82","\x0c");
	bar_64_8__png= HX_HCSTRING("assets/images/bar-64-8.png","\x09","\x25","\x12","\x32");
	bar_battery_sheet__png= HX_HCSTRING("assets/images/bar-battery-sheet.png","\xd5","\x2d","\x1d","\x24");
	bar_battery__png= HX_HCSTRING("assets/images/bar-battery.png","\x83","\x17","\x02","\x28");
	bar_exp__png= HX_HCSTRING("assets/images/bar-exp.png","\xd3","\xea","\x7e","\xdd");
	bar_health_sheet__png= HX_HCSTRING("assets/images/bar-health-sheet.png","\x4e","\x1b","\x23","\xf8");
	bar_health__png= HX_HCSTRING("assets/images/bar-health.png","\x3c","\x34","\x88","\xad");
	bar_v_32_8_sheet__png= HX_HCSTRING("assets/images/bar-v-32-8-sheet.png","\x33","\x7b","\x2d","\x17");
	bar_v_32_8__png= HX_HCSTRING("assets/images/bar-v-32-8.png","\x61","\xea","\x4b","\x53");
	bar_v_64_8__png= HX_HCSTRING("assets/images/bar-v-64-8.png","\x40","\x2e","\x0e","\x52");
	bars__png= HX_HCSTRING("assets/images/bars.png","\x26","\x1f","\x9e","\x4f");
	batterybar__png= HX_HCSTRING("assets/images/batterybar.png","\x4c","\xbd","\x37","\x4a");
	bricks__png= HX_HCSTRING("assets/images/bricks.png","\x78","\x8b","\x5d","\x64");
	bullet_0001__png= HX_HCSTRING("assets/images/bullet-0001.png","\x1c","\x31","\x94","\x8a");
	bullet_0002__ase= HX_HCSTRING("assets/images/bullet-0002.ase","\x27","\x68","\xef","\x1d");
	bullet_0002__png= HX_HCSTRING("assets/images/bullet-0002.png","\x9d","\xc5","\xfa","\x1d");
	bullet_0003__ase= HX_HCSTRING("assets/images/bullet-0003.ase","\xa8","\xfc","\x55","\xb1");
	bullet_0003__png= HX_HCSTRING("assets/images/bullet-0003.png","\x1e","\x5a","\x61","\xb1");
	buttonLeft__png= HX_HCSTRING("assets/images/buttonLeft.png","\xbf","\xe1","\xdc","\x89");
	buttonRight__png= HX_HCSTRING("assets/images/buttonRight.png","\x7a","\x17","\x96","\x6d");
	char_0001__png= HX_HCSTRING("assets/images/char-0001.png","\xc8","\x2a","\x4c","\x7e");
	dpad__ase= HX_HCSTRING("assets/images/dpad.ase","\x5f","\xc5","\xa5","\xc2");
	dpad__png= HX_HCSTRING("assets/images/dpad.png","\xd5","\x22","\xb1","\xc2");
	dpadA__ase= HX_HCSTRING("assets/images/dpadA.ase","\xac","\x75","\x40","\x5d");
	dpadA__png= HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d");
	dpadB__ase= HX_HCSTRING("assets/images/dpadB.ase","\x2d","\x0a","\xa7","\xf0");
	dpadB__png= HX_HCSTRING("assets/images/dpadB.png","\xa3","\x67","\xb2","\xf0");
	dpadleft__ase= HX_HCSTRING("assets/images/dpadleft.ase","\xe6","\xb1","\x1b","\x2c");
	dpadleft__png= HX_HCSTRING("assets/images/dpadleft.png","\x5c","\x0f","\x27","\x2c");
	dpadright__ase= HX_HCSTRING("assets/images/dpadright.ase","\xc7","\x75","\x28","\xcc");
	dpadright__png= HX_HCSTRING("assets/images/dpadright.png","\x3d","\xd3","\x33","\xcc");
	emptybar__png= HX_HCSTRING("assets/images/emptybar.png","\xcc","\x41","\xf8","\xa2");
	enemy_0001__png= HX_HCSTRING("assets/images/enemy-0001.png","\x8c","\xac","\x5d","\x74");
	floor_0001__png= HX_HCSTRING("assets/images/floor-0001.png","\x88","\xdc","\xb7","\xfc");
	gibs_0001__png= HX_HCSTRING("assets/images/gibs-0001.png","\x8b","\x71","\x36","\x18");
	gibs__png= HX_HCSTRING("assets/images/gibs.png","\xd9","\x49","\x90","\x54");
	gun_0001__ase= HX_HCSTRING("assets/images/gun-0001.ase","\x1e","\xeb","\xb9","\xb8");
	gun_0001__png= HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
	healthbar__png= HX_HCSTRING("assets/images/healthbar.png","\xe7","\x30","\xc8","\xbb");
	images_go_here__txt= HX_HCSTRING("assets/images/images-go-here.txt","\x0d","\x1d","\x45","\xa6");
	level__png= HX_HCSTRING("assets/images/level.png","\xb4","\x3f","\x85","\x11");
	Sprite_0002__png= HX_HCSTRING("assets/images/Sprite-0002.png","\x5a","\xb3","\xc9","\xbb");
	stage1__oep= HX_HCSTRING("assets/images/stage1.oep","\xca","\x5f","\x5d","\x45");
	tiles_0001__ase= HX_HCSTRING("assets/images/tiles-0001.ase","\x39","\x94","\x41","\xc3");
	tiles_0001__png= HX_HCSTRING("assets/images/tiles-0001.png","\xaf","\xf1","\x4c","\xc3");
	tree_0001__png= HX_HCSTRING("assets/images/tree-0001.png","\x40","\x5f","\x40","\xf1");
	bgm_0001__ogg= HX_HCSTRING("assets/music/bgm-0001.ogg","\xbd","\x0e","\x27","\x23");
	bgm_0002__ogg= HX_HCSTRING("assets/music/bgm-0002.ogg","\x3e","\xa3","\x8d","\xb6");
	chase__ogg= HX_HCSTRING("assets/music/chase.ogg","\x99","\xaf","\x70","\x95");
	fairy__ogg= HX_HCSTRING("assets/music/fairy.ogg","\x80","\xbf","\x37","\xe8");
	fairyland__ogg= HX_HCSTRING("assets/music/fairyland.ogg","\x6b","\xd2","\xe0","\xd0");
	music_goes_here__txt= HX_HCSTRING("assets/music/music-goes-here.txt","\x6b","\x32","\x60","\x47");
	time_break__ogg= HX_HCSTRING("assets/music/time-break.ogg","\x56","\x43","\x05","\x07");
	gun_0001__ogg= HX_HCSTRING("assets/sounds/gun-0001.ogg","\xae","\x10","\x71","\x28");
	gun_0002__ogg= HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb");
	gun_0003__ogg= HX_HCSTRING("assets/sounds/gun-0003.ogg","\xb0","\x39","\x3e","\x4f");
	jump_0001__ogg= HX_HCSTRING("assets/sounds/jump-0001.ogg","\x62","\x4e","\x71","\x8e");
	sounds_go_here__txt= HX_HCSTRING("assets/sounds/sounds-go-here.txt","\x8d","\xb6","\x3d","\xa7");
	step_0001__ogg= HX_HCSTRING("assets/sounds/step-0001.ogg","\x44","\xf0","\x82","\xb9");
	step_0002__ogg= HX_HCSTRING("assets/sounds/step-0002.ogg","\xc5","\x84","\xe9","\x4c");
	walk_0001__ogg= HX_HCSTRING("assets/sounds/walk-0001.ogg","\xe7","\x5a","\xf0","\xb3");
	walk_0002__ogg= HX_HCSTRING("assets/sounds/walk-0002.ogg","\x68","\xef","\x56","\x47");
}

