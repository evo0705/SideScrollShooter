#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColor
#include <flixel/util/FlxColor.h>
#endif
namespace flixel{
namespace util{

Void FlxColor_obj::__construct()
{
	return null();
}

//FlxColor_obj::~FlxColor_obj() { }

Dynamic FlxColor_obj::__CreateEmpty() { return  new FlxColor_obj; }
hx::ObjectPtr< FlxColor_obj > FlxColor_obj::__new()
{  hx::ObjectPtr< FlxColor_obj > _result_ = new FlxColor_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_obj > _result_ = new FlxColor_obj();
	_result_->__construct();
	return _result_;}

int FlxColor_obj::RED;

int FlxColor_obj::YELLOW;

int FlxColor_obj::GREEN;

int FlxColor_obj::BLUE;

int FlxColor_obj::PINK;

int FlxColor_obj::PURPLE;

int FlxColor_obj::WHITE;

int FlxColor_obj::BLACK;

int FlxColor_obj::GRAY;

int FlxColor_obj::BROWN;

int FlxColor_obj::TRANSPARENT;

int FlxColor_obj::IVORY;

int FlxColor_obj::BEIGE;

int FlxColor_obj::WHEAT;

int FlxColor_obj::TAN;

int FlxColor_obj::KHAKI;

int FlxColor_obj::SILVER;

int FlxColor_obj::CHARCOAL;

int FlxColor_obj::NAVY_BLUE;

int FlxColor_obj::ROYAL_BLUE;

int FlxColor_obj::MEDIUM_BLUE;

int FlxColor_obj::AZURE;

int FlxColor_obj::CYAN;

int FlxColor_obj::MAGENTA;

int FlxColor_obj::AQUAMARINE;

int FlxColor_obj::TEAL;

int FlxColor_obj::FOREST_GREEN;

int FlxColor_obj::OLIVE;

int FlxColor_obj::CHARTREUSE;

int FlxColor_obj::LIME;

int FlxColor_obj::GOLDEN;

int FlxColor_obj::GOLDENROD;

int FlxColor_obj::CORAL;

int FlxColor_obj::SALMON;

int FlxColor_obj::HOT_PINK;

int FlxColor_obj::FUCHSIA;

int FlxColor_obj::PUCE;

int FlxColor_obj::MAUVE;

int FlxColor_obj::LAVENDER;

int FlxColor_obj::PLUM;

int FlxColor_obj::INDIGO;

int FlxColor_obj::MAROON;

int FlxColor_obj::CRIMSON;


FlxColor_obj::FlxColor_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxColor_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &FlxColor_obj::YELLOW,HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82")},
	{hx::fsInt,(void *) &FlxColor_obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &FlxColor_obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsInt,(void *) &FlxColor_obj::PINK,HX_HCSTRING("PINK","\x76","\xba","\x18","\x35")},
	{hx::fsInt,(void *) &FlxColor_obj::PURPLE,HX_HCSTRING("PURPLE","\x3c","\xa2","\x0c","\x24")},
	{hx::fsInt,(void *) &FlxColor_obj::WHITE,HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47")},
	{hx::fsInt,(void *) &FlxColor_obj::BLACK,HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32")},
	{hx::fsInt,(void *) &FlxColor_obj::GRAY,HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f")},
	{hx::fsInt,(void *) &FlxColor_obj::BROWN,HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36")},
	{hx::fsInt,(void *) &FlxColor_obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{hx::fsInt,(void *) &FlxColor_obj::IVORY,HX_HCSTRING("IVORY","\x09","\xec","\x54","\x41")},
	{hx::fsInt,(void *) &FlxColor_obj::BEIGE,HX_HCSTRING("BEIGE","\xc4","\xa4","\x45","\x2e")},
	{hx::fsInt,(void *) &FlxColor_obj::WHEAT,HX_HCSTRING("WHEAT","\x07","\x69","\xa8","\x47")},
	{hx::fsInt,(void *) &FlxColor_obj::TAN,HX_HCSTRING("TAN","\x41","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &FlxColor_obj::KHAKI,HX_HCSTRING("KHAKI","\xa2","\x72","\xd6","\x5e")},
	{hx::fsInt,(void *) &FlxColor_obj::SILVER,HX_HCSTRING("SILVER","\x0d","\x01","\x5d","\x6a")},
	{hx::fsInt,(void *) &FlxColor_obj::CHARCOAL,HX_HCSTRING("CHARCOAL","\x6d","\xc0","\xd0","\x0a")},
	{hx::fsInt,(void *) &FlxColor_obj::NAVY_BLUE,HX_HCSTRING("NAVY_BLUE","\x83","\x20","\x41","\x38")},
	{hx::fsInt,(void *) &FlxColor_obj::ROYAL_BLUE,HX_HCSTRING("ROYAL_BLUE","\x32","\x33","\xe1","\x63")},
	{hx::fsInt,(void *) &FlxColor_obj::MEDIUM_BLUE,HX_HCSTRING("MEDIUM_BLUE","\xe4","\x5d","\x81","\x65")},
	{hx::fsInt,(void *) &FlxColor_obj::AZURE,HX_HCSTRING("AZURE","\xef","\xaf","\xc9","\xa8")},
	{hx::fsInt,(void *) &FlxColor_obj::CYAN,HX_HCSTRING("CYAN","\x23","\x0d","\x8d","\x2c")},
	{hx::fsInt,(void *) &FlxColor_obj::MAGENTA,HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e")},
	{hx::fsInt,(void *) &FlxColor_obj::AQUAMARINE,HX_HCSTRING("AQUAMARINE","\x3e","\x59","\xef","\x8a")},
	{hx::fsInt,(void *) &FlxColor_obj::TEAL,HX_HCSTRING("TEAL","\x9c","\x80","\xba","\x37")},
	{hx::fsInt,(void *) &FlxColor_obj::FOREST_GREEN,HX_HCSTRING("FOREST_GREEN","\x81","\x4a","\x0f","\x76")},
	{hx::fsInt,(void *) &FlxColor_obj::OLIVE,HX_HCSTRING("OLIVE","\xbb","\xba","\x1b","\xaf")},
	{hx::fsInt,(void *) &FlxColor_obj::CHARTREUSE,HX_HCSTRING("CHARTREUSE","\xd6","\x4c","\xc4","\x79")},
	{hx::fsInt,(void *) &FlxColor_obj::LIME,HX_HCSTRING("LIME","\x15","\xdf","\x73","\x32")},
	{hx::fsInt,(void *) &FlxColor_obj::GOLDEN,HX_HCSTRING("GOLDEN","\x09","\x7f","\x6e","\x12")},
	{hx::fsInt,(void *) &FlxColor_obj::GOLDENROD,HX_HCSTRING("GOLDENROD","\x7e","\x4a","\x9c","\x9e")},
	{hx::fsInt,(void *) &FlxColor_obj::CORAL,HX_HCSTRING("CORAL","\x91","\x2a","\x4f","\xc8")},
	{hx::fsInt,(void *) &FlxColor_obj::SALMON,HX_HCSTRING("SALMON","\x6e","\x91","\x21","\xcf")},
	{hx::fsInt,(void *) &FlxColor_obj::HOT_PINK,HX_HCSTRING("HOT_PINK","\xc8","\xe3","\x73","\x69")},
	{hx::fsInt,(void *) &FlxColor_obj::FUCHSIA,HX_HCSTRING("FUCHSIA","\xb7","\x99","\xe3","\x1e")},
	{hx::fsInt,(void *) &FlxColor_obj::PUCE,HX_HCSTRING("PUCE","\xe7","\xcb","\x21","\x35")},
	{hx::fsInt,(void *) &FlxColor_obj::MAUVE,HX_HCSTRING("MAUVE","\xf0","\x53","\x12","\x81")},
	{hx::fsInt,(void *) &FlxColor_obj::LAVENDER,HX_HCSTRING("LAVENDER","\x07","\x91","\x06","\xdb")},
	{hx::fsInt,(void *) &FlxColor_obj::PLUM,HX_HCSTRING("PLUM","\x54","\x07","\x1b","\x35")},
	{hx::fsInt,(void *) &FlxColor_obj::INDIGO,HX_HCSTRING("INDIGO","\x52","\xbb","\x78","\x46")},
	{hx::fsInt,(void *) &FlxColor_obj::MAROON,HX_HCSTRING("MAROON","\x70","\x33","\xf6","\x6c")},
	{hx::fsInt,(void *) &FlxColor_obj::CRIMSON,HX_HCSTRING("CRIMSON","\xbf","\xb1","\xc6","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxColor_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_obj::IVORY,"IVORY");
	HX_MARK_MEMBER_NAME(FlxColor_obj::BEIGE,"BEIGE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::WHEAT,"WHEAT");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TAN,"TAN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::KHAKI,"KHAKI");
	HX_MARK_MEMBER_NAME(FlxColor_obj::SILVER,"SILVER");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CHARCOAL,"CHARCOAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::NAVY_BLUE,"NAVY_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::ROYAL_BLUE,"ROYAL_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MEDIUM_BLUE,"MEDIUM_BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::AZURE,"AZURE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_obj::AQUAMARINE,"AQUAMARINE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::TEAL,"TEAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::FOREST_GREEN,"FOREST_GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::OLIVE,"OLIVE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CHARTREUSE,"CHARTREUSE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GOLDEN,"GOLDEN");
	HX_MARK_MEMBER_NAME(FlxColor_obj::GOLDENROD,"GOLDENROD");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CORAL,"CORAL");
	HX_MARK_MEMBER_NAME(FlxColor_obj::SALMON,"SALMON");
	HX_MARK_MEMBER_NAME(FlxColor_obj::HOT_PINK,"HOT_PINK");
	HX_MARK_MEMBER_NAME(FlxColor_obj::FUCHSIA,"FUCHSIA");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PUCE,"PUCE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAUVE,"MAUVE");
	HX_MARK_MEMBER_NAME(FlxColor_obj::LAVENDER,"LAVENDER");
	HX_MARK_MEMBER_NAME(FlxColor_obj::PLUM,"PLUM");
	HX_MARK_MEMBER_NAME(FlxColor_obj::INDIGO,"INDIGO");
	HX_MARK_MEMBER_NAME(FlxColor_obj::MAROON,"MAROON");
	HX_MARK_MEMBER_NAME(FlxColor_obj::CRIMSON,"CRIMSON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::IVORY,"IVORY");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::BEIGE,"BEIGE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::WHEAT,"WHEAT");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TAN,"TAN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::KHAKI,"KHAKI");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::SILVER,"SILVER");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CHARCOAL,"CHARCOAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::NAVY_BLUE,"NAVY_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::ROYAL_BLUE,"ROYAL_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MEDIUM_BLUE,"MEDIUM_BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::AZURE,"AZURE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::AQUAMARINE,"AQUAMARINE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::TEAL,"TEAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::FOREST_GREEN,"FOREST_GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::OLIVE,"OLIVE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CHARTREUSE,"CHARTREUSE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GOLDEN,"GOLDEN");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::GOLDENROD,"GOLDENROD");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CORAL,"CORAL");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::SALMON,"SALMON");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::HOT_PINK,"HOT_PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::FUCHSIA,"FUCHSIA");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PUCE,"PUCE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAUVE,"MAUVE");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::LAVENDER,"LAVENDER");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::PLUM,"PLUM");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::INDIGO,"INDIGO");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::MAROON,"MAROON");
	HX_VISIT_MEMBER_NAME(FlxColor_obj::CRIMSON,"CRIMSON");
};

#endif

hx::Class FlxColor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("YELLOW","\x74","\x4b","\xdf","\x82"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("PINK","\x76","\xba","\x18","\x35"),
	HX_HCSTRING("PURPLE","\x3c","\xa2","\x0c","\x24"),
	HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),
	HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),
	HX_HCSTRING("GRAY","\xe3","\x97","\x2c","\x2f"),
	HX_HCSTRING("BROWN","\x56","\x06","\xe2","\x36"),
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	HX_HCSTRING("IVORY","\x09","\xec","\x54","\x41"),
	HX_HCSTRING("BEIGE","\xc4","\xa4","\x45","\x2e"),
	HX_HCSTRING("WHEAT","\x07","\x69","\xa8","\x47"),
	HX_HCSTRING("TAN","\x41","\xf6","\x3f","\x00"),
	HX_HCSTRING("KHAKI","\xa2","\x72","\xd6","\x5e"),
	HX_HCSTRING("SILVER","\x0d","\x01","\x5d","\x6a"),
	HX_HCSTRING("CHARCOAL","\x6d","\xc0","\xd0","\x0a"),
	HX_HCSTRING("NAVY_BLUE","\x83","\x20","\x41","\x38"),
	HX_HCSTRING("ROYAL_BLUE","\x32","\x33","\xe1","\x63"),
	HX_HCSTRING("MEDIUM_BLUE","\xe4","\x5d","\x81","\x65"),
	HX_HCSTRING("AZURE","\xef","\xaf","\xc9","\xa8"),
	HX_HCSTRING("CYAN","\x23","\x0d","\x8d","\x2c"),
	HX_HCSTRING("MAGENTA","\x09","\x8e","\x71","\x8e"),
	HX_HCSTRING("AQUAMARINE","\x3e","\x59","\xef","\x8a"),
	HX_HCSTRING("TEAL","\x9c","\x80","\xba","\x37"),
	HX_HCSTRING("FOREST_GREEN","\x81","\x4a","\x0f","\x76"),
	HX_HCSTRING("OLIVE","\xbb","\xba","\x1b","\xaf"),
	HX_HCSTRING("CHARTREUSE","\xd6","\x4c","\xc4","\x79"),
	HX_HCSTRING("LIME","\x15","\xdf","\x73","\x32"),
	HX_HCSTRING("GOLDEN","\x09","\x7f","\x6e","\x12"),
	HX_HCSTRING("GOLDENROD","\x7e","\x4a","\x9c","\x9e"),
	HX_HCSTRING("CORAL","\x91","\x2a","\x4f","\xc8"),
	HX_HCSTRING("SALMON","\x6e","\x91","\x21","\xcf"),
	HX_HCSTRING("HOT_PINK","\xc8","\xe3","\x73","\x69"),
	HX_HCSTRING("FUCHSIA","\xb7","\x99","\xe3","\x1e"),
	HX_HCSTRING("PUCE","\xe7","\xcb","\x21","\x35"),
	HX_HCSTRING("MAUVE","\xf0","\x53","\x12","\x81"),
	HX_HCSTRING("LAVENDER","\x07","\x91","\x06","\xdb"),
	HX_HCSTRING("PLUM","\x54","\x07","\x1b","\x35"),
	HX_HCSTRING("INDIGO","\x52","\xbb","\x78","\x46"),
	HX_HCSTRING("MAROON","\x70","\x33","\xf6","\x6c"),
	HX_HCSTRING("CRIMSON","\xbf","\xb1","\xc6","\xe6"),
	::String(null()) };

void FlxColor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxColor","\x0b","\x18","\x25","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxColor_obj >;
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

void FlxColor_obj::__boot()
{
	RED= (int)-65536;
	YELLOW= (int)-256;
	GREEN= (int)-16744448;
	BLUE= (int)-16776961;
	PINK= (int)-16181;
	PURPLE= (int)-8388480;
	WHITE= (int)-1;
	BLACK= (int)-16777216;
	GRAY= (int)-8355712;
	BROWN= (int)-6927616;
	TRANSPARENT= (int)0;
	IVORY= (int)-16;
	BEIGE= (int)-657956;
	WHEAT= (int)-663885;
	TAN= (int)-2968436;
	KHAKI= (int)-3952495;
	SILVER= (int)-4144960;
	CHARCOAL= (int)-12171706;
	NAVY_BLUE= (int)-16777088;
	ROYAL_BLUE= (int)-16233314;
	MEDIUM_BLUE= (int)-16777011;
	AZURE= (int)-16744449;
	CYAN= (int)-16711681;
	MAGENTA= (int)-65281;
	AQUAMARINE= (int)-8388652;
	TEAL= (int)-16744320;
	FOREST_GREEN= (int)-14513374;
	OLIVE= (int)-8355840;
	CHARTREUSE= (int)-8388864;
	LIME= (int)-4194560;
	GOLDEN= (int)-10496;
	GOLDENROD= (int)-2448096;
	CORAL= (int)-32944;
	SALMON= (int)-360334;
	HOT_PINK= (int)-258112;
	FUCHSIA= (int)-34817;
	PUCE= (int)-3372903;
	MAUVE= (int)-2051841;
	LAVENDER= (int)-4882724;
	PLUM= (int)-8113799;
	INDIGO= (int)-11861886;
	MAROON= (int)-8388608;
	CRIMSON= (int)-2354116;
}

} // end namespace flixel
} // end namespace util
