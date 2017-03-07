#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadButton_obj::__construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","new",0xa97275d6,"flixel.input.gamepad.FlxGamepadButton.new","flixel/input/gamepad/FlxGamepadButton.hx",14,0xa176f377)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(__o_Current,"Current")
HX_STACK_ARG(__o_Last,"Last")
int Current = __o_Current.Default(0);
int Last = __o_Last.Default(0);
{
	HX_STACK_LINE(15)
	this->id = ID;
	HX_STACK_LINE(16)
	this->current = Current;
	HX_STACK_LINE(17)
	this->last = Last;
}
;
	return null();
}

//FlxGamepadButton_obj::~FlxGamepadButton_obj() { }

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return  new FlxGamepadButton_obj; }
hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{  hx::ObjectPtr< FlxGamepadButton_obj > _result_ = new FlxGamepadButton_obj();
	_result_->__construct(ID,__o_Current,__o_Last);
	return _result_;}

Dynamic FlxGamepadButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButton_obj > _result_ = new FlxGamepadButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxGamepadButton_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","reset",0x10f3b8c5,"flixel.input.gamepad.FlxGamepadButton.reset","flixel/input/gamepad/FlxGamepadButton.hx",21,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->current = (int)0;
		HX_STACK_LINE(23)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,reset,(void))

Void FlxGamepadButton_obj::release( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","release",0xf80b1e3d,"flixel.input.gamepad.FlxGamepadButton.release","flixel/input/gamepad/FlxGamepadButton.hx",27,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		this->last = tmp;
		HX_STACK_LINE(38)
		int tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(40)
			this->current = (int)-1;
		}
		else{
			HX_STACK_LINE(44)
			this->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,release,(void))

Void FlxGamepadButton_obj::press( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","press",0xf2b3c279,"flixel.input.gamepad.FlxGamepadButton.press","flixel/input/gamepad/FlxGamepadButton.hx",49,0xa176f377)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		int tmp = this->current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->last = tmp;
		HX_STACK_LINE(60)
		int tmp1 = this->current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		if ((tmp2)){
			HX_STACK_LINE(62)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(66)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,press,(void))


FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

Dynamic FlxGamepadButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"press") ) { return press_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGamepadButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxGamepadButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsInt,(int)offsetof(FlxGamepadButton_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("press","\x83","\x53","\x88","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadButton","\xe4","\x92","\x29","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxGamepadButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadButton_obj >;
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

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
