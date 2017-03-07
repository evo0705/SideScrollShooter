#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace ui{

Void FlxButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxButton","new",0x776c1d8e,"flixel.ui.FlxButton.new","flixel/ui/FlxButton.hx",39,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(40)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	Dynamic tmp2 = OnClick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		Array< ::Dynamic > _g1 = this->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			if ((tmp4)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			::flixel::util::FlxPoint tmp5 = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(44)
			Float tmp6 = (point->x - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			Float tmp7 = (point->y + (int)3);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			point->set(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp4 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp8 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		::String tmp11 = Text;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp12 = ::flixel::text::FlxText_obj::__new(tmp6,tmp10,(int)80,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		this->set_label(tmp12);
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		tmp13->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
		HX_STACK_LINE(47)
		::flixel::text::FlxText tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(47)
		int tmp15 = this->status;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(47)
		Float tmp16 = this->labelAlphas->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(47)
		tmp14->set_alpha(tmp16);
	}
}
;
	return null();
}

//FlxButton_obj::~FlxButton_obj() { }

Dynamic FlxButton_obj::__CreateEmpty() { return  new FlxButton_obj; }
hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{  hx::ObjectPtr< FlxButton_obj > _result_ = new FlxButton_obj();
	_result_->__construct(__o_X,__o_Y,Text,OnClick);
	return _result_;}

Dynamic FlxButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButton_obj > _result_ = new FlxButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","resetHelpers",0x0b952648,"flixel.ui.FlxButton.resetHelpers","flixel/ui/FlxButton.hx",54,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::resetHelpers();
		HX_STACK_LINE(57)
		::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(59)
			::flixel::text::FlxText tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			::flixel::text::FlxText tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			int tmp6 = tmp5->frameWidth = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			tmp2->set_fieldWidth(tmp6);
			HX_STACK_LINE(60)
			::flixel::text::FlxText tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::flixel::text::FlxText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Float tmp9 = tmp8->get_size();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			tmp7->set_size(tmp9);
		}
	}
return null();
}


Void FlxButton_obj::initLabel( ::String Text){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","initLabel",0xd1ec8c72,"flixel.ui.FlxButton.initLabel","flixel/ui/FlxButton.hx",65,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(66)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint tmp1 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint tmp5 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		::String tmp8 = Text;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		::flixel::text::FlxText tmp9 = ::flixel::text::FlxText_obj::__new(tmp3,tmp7,(int)80,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		this->set_label(tmp9);
		HX_STACK_LINE(67)
		::flixel::text::FlxText tmp10 = this->label;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		tmp10->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
		HX_STACK_LINE(68)
		::flixel::text::FlxText tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(68)
		int tmp12 = this->status;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		Float tmp13 = this->labelAlphas->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(68)
		tmp11->set_alpha(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,initLabel,(void))

::String FlxButton_obj::get_text( ){
	HX_STACK_FRAME("flixel.ui.FlxButton","get_text",0x7dcfb448,"flixel.ui.FlxButton.get_text","flixel/ui/FlxButton.hx",72,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,get_text,return )

::String FlxButton_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.ui.FlxButton","set_text",0x2c2d0dbc,"flixel.ui.FlxButton.set_text","flixel/ui/FlxButton.hx",77,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(78)
	::flixel::text::FlxText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::String tmp1 = Text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	::String tmp2 = tmp->set_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,set_text,return )

int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


FlxButton_obj::FlxButton_obj()
{
}

Dynamic FlxButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLabel") ) { return initLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxButton_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsInt,(void *) &FlxButton_obj::HIGHLIGHT,HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8")},
	{hx::fsInt,(void *) &FlxButton_obj::PRESSED,HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("initLabel","\xc4","\x28","\x41","\x8b"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#endif

hx::Class FlxButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("HIGHLIGHT","\x14","\xc6","\x58","\xe8"),
	HX_HCSTRING("PRESSED","\x82","\xa6","\xba","\xb9"),
	::String(null()) };

void FlxButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxButton","\x9c","\xfe","\xd6","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButton_obj >;
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

void FlxButton_obj::__boot()
{
	NORMAL= (int)0;
	HIGHLIGHT= (int)1;
	PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace ui
