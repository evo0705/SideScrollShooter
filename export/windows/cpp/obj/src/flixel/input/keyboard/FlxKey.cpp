#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKey_obj::__construct(::String Name)
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKey","new",0xc41f9950,"flixel.input.keyboard.FlxKey.new","flixel/input/keyboard/FlxKey.hx",6,0x46a3c741)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
{
	HX_STACK_LINE(121)
	this->last = (int)0;
	HX_STACK_LINE(117)
	this->current = (int)0;
	HX_STACK_LINE(125)
	this->name = Name;
}
;
	return null();
}

//FlxKey_obj::~FlxKey_obj() { }

Dynamic FlxKey_obj::__CreateEmpty() { return  new FlxKey_obj; }
hx::ObjectPtr< FlxKey_obj > FlxKey_obj::__new(::String Name)
{  hx::ObjectPtr< FlxKey_obj > _result_ = new FlxKey_obj();
	_result_->__construct(Name);
	return _result_;}

Dynamic FlxKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKey_obj > _result_ = new FlxKey_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int FlxKey_obj::JUST_RELEASED;

int FlxKey_obj::RELEASED;

int FlxKey_obj::PRESSED;

int FlxKey_obj::JUST_PRESSED;

int FlxKey_obj::A;

int FlxKey_obj::B;

int FlxKey_obj::C;

int FlxKey_obj::D;

int FlxKey_obj::E;

int FlxKey_obj::F;

int FlxKey_obj::G;

int FlxKey_obj::H;

int FlxKey_obj::I;

int FlxKey_obj::J;

int FlxKey_obj::K;

int FlxKey_obj::L;

int FlxKey_obj::M;

int FlxKey_obj::N;

int FlxKey_obj::O;

int FlxKey_obj::P;

int FlxKey_obj::Q;

int FlxKey_obj::R;

int FlxKey_obj::S;

int FlxKey_obj::T;

int FlxKey_obj::U;

int FlxKey_obj::V;

int FlxKey_obj::W;

int FlxKey_obj::X;

int FlxKey_obj::Y;

int FlxKey_obj::Z;

int FlxKey_obj::ZERO;

int FlxKey_obj::ONE;

int FlxKey_obj::TWO;

int FlxKey_obj::THREE;

int FlxKey_obj::FOUR;

int FlxKey_obj::FIVE;

int FlxKey_obj::SIX;

int FlxKey_obj::SEVEN;

int FlxKey_obj::EIGHT;

int FlxKey_obj::NINE;

int FlxKey_obj::PAGEUP;

int FlxKey_obj::PAGEDOWN;

int FlxKey_obj::HOME;

int FlxKey_obj::END;

int FlxKey_obj::INSERT;

int FlxKey_obj::ESCAPE;

int FlxKey_obj::MINUS;

int FlxKey_obj::PLUS;

int FlxKey_obj::DELETE;

int FlxKey_obj::BACKSPACE;

int FlxKey_obj::LBRACKET;

int FlxKey_obj::RBRACKET;

int FlxKey_obj::BACKSLASH;

int FlxKey_obj::CAPSLOCK;

int FlxKey_obj::SEMICOLON;

int FlxKey_obj::QUOTE;

int FlxKey_obj::ENTER;

int FlxKey_obj::SHIFT;

int FlxKey_obj::COMMA;

int FlxKey_obj::PERIOD;

int FlxKey_obj::SLASH;

int FlxKey_obj::NUMPADSLASH;

int FlxKey_obj::GRAVEACCENT;

int FlxKey_obj::CONTROL;

int FlxKey_obj::ALT;

int FlxKey_obj::SPACE;

int FlxKey_obj::UP;

int FlxKey_obj::DOWN;

int FlxKey_obj::LEFT;

int FlxKey_obj::RIGHT;

int FlxKey_obj::TAB;

int FlxKey_obj::PRINTSCREEN;

int FlxKey_obj::F1;

int FlxKey_obj::F2;

int FlxKey_obj::F3;

int FlxKey_obj::F4;

int FlxKey_obj::F5;

int FlxKey_obj::F6;

int FlxKey_obj::F7;

int FlxKey_obj::F8;

int FlxKey_obj::F9;

int FlxKey_obj::F10;

int FlxKey_obj::F11;

int FlxKey_obj::F12;

int FlxKey_obj::NUMPADZERO;

int FlxKey_obj::NUMPADONE;

int FlxKey_obj::NUMPADTWO;

int FlxKey_obj::NUMPADTHREE;

int FlxKey_obj::NUMPADFOUR;

int FlxKey_obj::NUMPADFIVE;

int FlxKey_obj::NUMPADSIX;

int FlxKey_obj::NUMPADSEVEN;

int FlxKey_obj::NUMPADEIGHT;

int FlxKey_obj::NUMPADNINE;

int FlxKey_obj::NUMPADMINUS;

int FlxKey_obj::NUMPADPLUS;

int FlxKey_obj::NUMPADPERIOD;

int FlxKey_obj::NUMPADMULTIPLY;


FlxKey_obj::FlxKey_obj()
{
}

void FlxKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKey);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void FlxKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
}

Dynamic FlxKey_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxKey_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxKey_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FlxKey_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(FlxKey_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxKey_obj::JUST_RELEASED,HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6")},
	{hx::fsInt,(void *) &FlxKey_obj::RELEASED,HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0")},
	{hx::fsInt,(void *) &FlxKey_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{hx::fsInt,(void *) &FlxKey_obj::JUST_PRESSED,HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d")},
	{hx::fsInt,(void *) &FlxKey_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(void *) &FlxKey_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::TWO,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::THREE,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")},
	{hx::fsInt,(void *) &FlxKey_obj::FOUR,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")},
	{hx::fsInt,(void *) &FlxKey_obj::FIVE,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")},
	{hx::fsInt,(void *) &FlxKey_obj::SIX,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::SEVEN,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")},
	{hx::fsInt,(void *) &FlxKey_obj::EIGHT,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")},
	{hx::fsInt,(void *) &FlxKey_obj::NINE,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")},
	{hx::fsInt,(void *) &FlxKey_obj::PAGEUP,HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98")},
	{hx::fsInt,(void *) &FlxKey_obj::PAGEDOWN,HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9")},
	{hx::fsInt,(void *) &FlxKey_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &FlxKey_obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::INSERT,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50")},
	{hx::fsInt,(void *) &FlxKey_obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &FlxKey_obj::MINUS,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")},
	{hx::fsInt,(void *) &FlxKey_obj::PLUS,HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")},
	{hx::fsInt,(void *) &FlxKey_obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsInt,(void *) &FlxKey_obj::BACKSPACE,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")},
	{hx::fsInt,(void *) &FlxKey_obj::LBRACKET,HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16")},
	{hx::fsInt,(void *) &FlxKey_obj::RBRACKET,HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d")},
	{hx::fsInt,(void *) &FlxKey_obj::BACKSLASH,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")},
	{hx::fsInt,(void *) &FlxKey_obj::CAPSLOCK,HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80")},
	{hx::fsInt,(void *) &FlxKey_obj::SEMICOLON,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")},
	{hx::fsInt,(void *) &FlxKey_obj::QUOTE,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")},
	{hx::fsInt,(void *) &FlxKey_obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &FlxKey_obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &FlxKey_obj::COMMA,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")},
	{hx::fsInt,(void *) &FlxKey_obj::PERIOD,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")},
	{hx::fsInt,(void *) &FlxKey_obj::SLASH,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADSLASH,HX_HCSTRING("NUMPADSLASH","\x30","\x62","\xc6","\x2a")},
	{hx::fsInt,(void *) &FlxKey_obj::GRAVEACCENT,HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e")},
	{hx::fsInt,(void *) &FlxKey_obj::CONTROL,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")},
	{hx::fsInt,(void *) &FlxKey_obj::ALT,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::SPACE,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")},
	{hx::fsInt,(void *) &FlxKey_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxKey_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxKey_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxKey_obj::TAB,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::PRINTSCREEN,HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10")},
	{hx::fsInt,(void *) &FlxKey_obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADZERO,HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADONE,HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADTWO,HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADTHREE,HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADFOUR,HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADFIVE,HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADSIX,HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADSEVEN,HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADEIGHT,HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADNINE,HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADMINUS,HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADPLUS,HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADPERIOD,HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13")},
	{hx::fsInt,(void *) &FlxKey_obj::NUMPADMULTIPLY,HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKey_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::JUST_PRESSED,"JUST_PRESSED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxKey_obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxKey_obj::C,"C");
	HX_MARK_MEMBER_NAME(FlxKey_obj::D,"D");
	HX_MARK_MEMBER_NAME(FlxKey_obj::E,"E");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F,"F");
	HX_MARK_MEMBER_NAME(FlxKey_obj::G,"G");
	HX_MARK_MEMBER_NAME(FlxKey_obj::H,"H");
	HX_MARK_MEMBER_NAME(FlxKey_obj::I,"I");
	HX_MARK_MEMBER_NAME(FlxKey_obj::J,"J");
	HX_MARK_MEMBER_NAME(FlxKey_obj::K,"K");
	HX_MARK_MEMBER_NAME(FlxKey_obj::L,"L");
	HX_MARK_MEMBER_NAME(FlxKey_obj::M,"M");
	HX_MARK_MEMBER_NAME(FlxKey_obj::N,"N");
	HX_MARK_MEMBER_NAME(FlxKey_obj::O,"O");
	HX_MARK_MEMBER_NAME(FlxKey_obj::P,"P");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(FlxKey_obj::R,"R");
	HX_MARK_MEMBER_NAME(FlxKey_obj::S,"S");
	HX_MARK_MEMBER_NAME(FlxKey_obj::T,"T");
	HX_MARK_MEMBER_NAME(FlxKey_obj::U,"U");
	HX_MARK_MEMBER_NAME(FlxKey_obj::V,"V");
	HX_MARK_MEMBER_NAME(FlxKey_obj::W,"W");
	HX_MARK_MEMBER_NAME(FlxKey_obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(FlxKey_obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(FlxKey_obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxKey_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(FlxKey_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADSLASH,"NUMPADSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::GRAVEACCENT,"GRAVEACCENT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxKey_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PRINTSCREEN,"PRINTSCREEN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADZERO,"NUMPADZERO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADONE,"NUMPADONE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADTWO,"NUMPADTWO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADTHREE,"NUMPADTHREE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADFOUR,"NUMPADFOUR");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADFIVE,"NUMPADFIVE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADSIX,"NUMPADSIX");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADNINE,"NUMPADNINE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADMINUS,"NUMPADMINUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADPLUS,"NUMPADPLUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::JUST_PRESSED,"JUST_PRESSED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::C,"C");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::D,"D");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::E,"E");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F,"F");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::G,"G");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::H,"H");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::I,"I");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::J,"J");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::K,"K");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::L,"L");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::M,"M");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::N,"N");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::O,"O");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::P,"P");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::R,"R");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::S,"S");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::T,"T");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::U,"U");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::V,"V");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::W,"W");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADSLASH,"NUMPADSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::GRAVEACCENT,"GRAVEACCENT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PRINTSCREEN,"PRINTSCREEN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADZERO,"NUMPADZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADONE,"NUMPADONE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADTWO,"NUMPADTWO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADTHREE,"NUMPADTHREE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADFOUR,"NUMPADFOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADFIVE,"NUMPADFIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADSIX,"NUMPADSIX");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADNINE,"NUMPADNINE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADMINUS,"NUMPADMINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADPLUS,"NUMPADPLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#endif

hx::Class FlxKey_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("JUST_RELEASED","\x70","\xd8","\xc2","\xf6"),
	HX_HCSTRING("RELEASED","\xbd","\x18","\x6d","\xd0"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	HX_HCSTRING("JUST_PRESSED","\x2f","\x9e","\xfd","\x4d"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),
	HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),
	HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),
	HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),
	HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),
	HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),
	HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),
	HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),
	HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),
	HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),
	HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),
	HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),
	HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),
	HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),
	HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),
	HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),
	HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),
	HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),
	HX_HCSTRING("NUMPADSLASH","\x30","\x62","\xc6","\x2a"),
	HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"),
	HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"),
	HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"),
	HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"),
	HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"),
	HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"),
	HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"),
	HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"),
	HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"),
	HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"),
	HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"),
	HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"),
	HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"),
	HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"),
	::String(null()) };

void FlxKey_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard.FlxKey","\x5e","\xf1","\xec","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxKey_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKey_obj >;
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

void FlxKey_obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ZERO= (int)48;
	ONE= (int)49;
	TWO= (int)50;
	THREE= (int)51;
	FOUR= (int)52;
	FIVE= (int)53;
	SIX= (int)54;
	SEVEN= (int)55;
	EIGHT= (int)56;
	NINE= (int)57;
	PAGEUP= (int)33;
	PAGEDOWN= (int)34;
	HOME= (int)36;
	END= (int)35;
	INSERT= (int)45;
	ESCAPE= (int)27;
	MINUS= (int)189;
	PLUS= (int)187;
	DELETE= (int)46;
	BACKSPACE= (int)8;
	LBRACKET= (int)219;
	RBRACKET= (int)221;
	BACKSLASH= (int)220;
	CAPSLOCK= (int)20;
	SEMICOLON= (int)186;
	QUOTE= (int)222;
	ENTER= (int)13;
	SHIFT= (int)16;
	COMMA= (int)188;
	PERIOD= (int)190;
	SLASH= (int)191;
	NUMPADSLASH= (int)191;
	GRAVEACCENT= (int)192;
	CONTROL= (int)17;
	ALT= (int)18;
	SPACE= (int)32;
	UP= (int)38;
	DOWN= (int)40;
	LEFT= (int)37;
	RIGHT= (int)39;
	TAB= (int)9;
	PRINTSCREEN= (int)301;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	NUMPADZERO= (int)96;
	NUMPADONE= (int)97;
	NUMPADTWO= (int)98;
	NUMPADTHREE= (int)99;
	NUMPADFOUR= (int)100;
	NUMPADFIVE= (int)101;
	NUMPADSIX= (int)102;
	NUMPADSEVEN= (int)103;
	NUMPADEIGHT= (int)104;
	NUMPADNINE= (int)105;
	NUMPADMINUS= (int)109;
	NUMPADPLUS= (int)107;
	NUMPADPERIOD= (int)110;
	NUMPADMULTIPLY= (int)106;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
