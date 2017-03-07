#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_menus_PauseMenu
#include <menus/PauseMenu.h>
#endif
namespace menus{

Void PauseMenu_obj::__construct()
{
HX_STACK_FRAME("menus.PauseMenu","new",0xe8000f0d,"menus.PauseMenu.new","menus/PauseMenu.hx",12,0x8babce84)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->isShowing = false;
	HX_STACK_LINE(25)
	super::__construct(null());
	HX_STACK_LINE(27)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->_overlay = tmp;
	HX_STACK_LINE(28)
	::flixel::FlxSprite tmp1 = this->_overlay;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	tmp1->makeGraphic(tmp2,tmp3,(int)1426063360,null(),null());
	HX_STACK_LINE(29)
	::flixel::FlxSprite tmp4 = this->_overlay;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	tmp4->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(31)
	int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	int tmp6 = (tmp5 - (int)48);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::flixel::ui::FlxButton tmp7 = ::flixel::ui::FlxButton_obj::__new(tmp6,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	this->pauseButton = tmp7;
	HX_STACK_LINE(32)
	::flixel::ui::FlxButton tmp8 = this->pauseButton;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	tmp8->loadGraphic(HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d"),false,(int)48,(int)48,null(),null());
	HX_STACK_LINE(33)
	::flixel::ui::FlxButton tmp9 = this->pauseButton;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	tmp9->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(34)
	Dynamic tmp10 = this->pauseOnDown_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(34)
	::flixel::ui::FlxButton tmp11 = this->pauseButton;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	tmp11->onDown->callback = tmp10;
	HX_STACK_LINE(36)
	int tmp12 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(36)
	Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(36)
	Float tmp14 = (tmp13 - (int)48);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(36)
	int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(36)
	Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(36)
	Float tmp17 = (tmp16 - (int)24);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(36)
	::flixel::ui::FlxButton tmp18 = ::flixel::ui::FlxButton_obj::__new(tmp14,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(36)
	this->resumeButton = tmp18;
	HX_STACK_LINE(37)
	::flixel::ui::FlxButton tmp19 = this->resumeButton;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(37)
	tmp19->loadGraphic(HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d"),false,(int)48,(int)48,null(),null());
	HX_STACK_LINE(38)
	::flixel::ui::FlxButton tmp20 = this->resumeButton;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(38)
	tmp20->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(39)
	Dynamic tmp21 = this->resumeOnDown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(39)
	::flixel::ui::FlxButton tmp22 = this->resumeButton;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(39)
	tmp22->onDown->callback = tmp21;
	HX_STACK_LINE(41)
	::flixel::ui::FlxButton tmp23 = this->resumeButton;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(41)
	Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(41)
	::flixel::ui::FlxButton tmp25 = this->resumeButton;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(41)
	Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(41)
	Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(41)
	Float tmp28 = (tmp27 + (int)10);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(41)
	int tmp29 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(41)
	Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(41)
	Float tmp31 = (tmp30 - (int)24);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(41)
	::flixel::ui::FlxButton tmp32 = ::flixel::ui::FlxButton_obj::__new(tmp28,tmp31,null(),null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(41)
	this->mainMenuButton = tmp32;
	HX_STACK_LINE(42)
	::flixel::ui::FlxButton tmp33 = this->mainMenuButton;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(42)
	tmp33->loadGraphic(HX_HCSTRING("assets/images/dpadA.png","\x22","\xd3","\x4b","\x5d"),false,(int)48,(int)48,null(),null());
	HX_STACK_LINE(43)
	::flixel::ui::FlxButton tmp34 = this->mainMenuButton;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(43)
	tmp34->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(45)
	::flixel::ui::FlxButton tmp35 = this->pauseButton;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(45)
	this->add(tmp35);
	HX_STACK_LINE(47)
	::flixel::group::FlxGroup tmp36 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(47)
	this->group = tmp36;
	HX_STACK_LINE(48)
	::flixel::group::FlxGroup tmp37 = this->group;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(48)
	::flixel::FlxSprite tmp38 = this->_overlay;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(48)
	tmp37->add(tmp38);
	HX_STACK_LINE(49)
	::flixel::group::FlxGroup tmp39 = this->group;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(49)
	::flixel::ui::FlxButton tmp40 = this->resumeButton;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(49)
	tmp39->add(tmp40);
	HX_STACK_LINE(50)
	::flixel::group::FlxGroup tmp41 = this->group;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(50)
	::flixel::ui::FlxButton tmp42 = this->mainMenuButton;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(50)
	tmp41->add(tmp42);
	HX_STACK_LINE(51)
	::flixel::group::FlxGroup tmp43 = this->group;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(51)
	tmp43->set_visible(false);
	HX_STACK_LINE(52)
	::flixel::group::FlxGroup tmp44 = this->group;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(52)
	this->add(tmp44);
}
;
	return null();
}

//PauseMenu_obj::~PauseMenu_obj() { }

Dynamic PauseMenu_obj::__CreateEmpty() { return  new PauseMenu_obj; }
hx::ObjectPtr< PauseMenu_obj > PauseMenu_obj::__new()
{  hx::ObjectPtr< PauseMenu_obj > _result_ = new PauseMenu_obj();
	_result_->__construct();
	return _result_;}

Dynamic PauseMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PauseMenu_obj > _result_ = new PauseMenu_obj();
	_result_->__construct();
	return _result_;}

Void PauseMenu_obj::update( ){
{
		HX_STACK_FRAME("menus.PauseMenu","update",0x206df17c,"menus.PauseMenu.update","menus/PauseMenu.hx",56,0x8babce84)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}


Void PauseMenu_obj::pauseOnDown( ){
{
		HX_STACK_FRAME("menus.PauseMenu","pauseOnDown",0x51471c64,"menus.PauseMenu.pauseOnDown","menus/PauseMenu.hx",60,0x8babce84)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->isShowing = true;
		HX_STACK_LINE(62)
		::flixel::group::FlxGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		tmp->set_visible(true);
		HX_STACK_LINE(63)
		::flixel::ui::FlxButton tmp1 = this->pauseButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		tmp1->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PauseMenu_obj,pauseOnDown,(void))

Void PauseMenu_obj::resumeOnDown( ){
{
		HX_STACK_FRAME("menus.PauseMenu","resumeOnDown",0x82f5e261,"menus.PauseMenu.resumeOnDown","menus/PauseMenu.hx",66,0x8babce84)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->isShowing = false;
		HX_STACK_LINE(68)
		::flixel::group::FlxGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		tmp->set_visible(false);
		HX_STACK_LINE(69)
		::flixel::ui::FlxButton tmp1 = this->pauseButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		tmp1->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PauseMenu_obj,resumeOnDown,(void))


PauseMenu_obj::PauseMenu_obj()
{
}

void PauseMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseMenu);
	HX_MARK_MEMBER_NAME(pauseButton,"pauseButton");
	HX_MARK_MEMBER_NAME(resumeButton,"resumeButton");
	HX_MARK_MEMBER_NAME(mainMenuButton,"mainMenuButton");
	HX_MARK_MEMBER_NAME(isShowing,"isShowing");
	HX_MARK_MEMBER_NAME(_overlay,"_overlay");
	HX_MARK_MEMBER_NAME(group,"group");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pauseButton,"pauseButton");
	HX_VISIT_MEMBER_NAME(resumeButton,"resumeButton");
	HX_VISIT_MEMBER_NAME(mainMenuButton,"mainMenuButton");
	HX_VISIT_MEMBER_NAME(isShowing,"isShowing");
	HX_VISIT_MEMBER_NAME(_overlay,"_overlay");
	HX_VISIT_MEMBER_NAME(group,"group");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PauseMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { return _overlay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isShowing") ) { return isShowing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pauseButton") ) { return pauseButton; }
		if (HX_FIELD_EQ(inName,"pauseOnDown") ) { return pauseOnDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeButton") ) { return resumeButton; }
		if (HX_FIELD_EQ(inName,"resumeOnDown") ) { return resumeOnDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainMenuButton") ) { return mainMenuButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PauseMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { _overlay=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isShowing") ) { isShowing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pauseButton") ) { pauseButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeButton") ) { resumeButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainMenuButton") ) { mainMenuButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PauseMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pauseButton","\x88","\x49","\xf1","\xcd"));
	outFields->push(HX_HCSTRING("resumeButton","\x7f","\x3f","\xaf","\xb9"));
	outFields->push(HX_HCSTRING("mainMenuButton","\x8a","\xba","\xe7","\x5b"));
	outFields->push(HX_HCSTRING("isShowing","\x3b","\x31","\xb3","\x7f"));
	outFields->push(HX_HCSTRING("_overlay","\x11","\x9d","\xc8","\xe2"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,pauseButton),HX_HCSTRING("pauseButton","\x88","\x49","\xf1","\xcd")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,resumeButton),HX_HCSTRING("resumeButton","\x7f","\x3f","\xaf","\xb9")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(PauseMenu_obj,mainMenuButton),HX_HCSTRING("mainMenuButton","\x8a","\xba","\xe7","\x5b")},
	{hx::fsBool,(int)offsetof(PauseMenu_obj,isShowing),HX_HCSTRING("isShowing","\x3b","\x31","\xb3","\x7f")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PauseMenu_obj,_overlay),HX_HCSTRING("_overlay","\x11","\x9d","\xc8","\xe2")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PauseMenu_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pauseButton","\x88","\x49","\xf1","\xcd"),
	HX_HCSTRING("resumeButton","\x7f","\x3f","\xaf","\xb9"),
	HX_HCSTRING("mainMenuButton","\x8a","\xba","\xe7","\x5b"),
	HX_HCSTRING("isShowing","\x3b","\x31","\xb3","\x7f"),
	HX_HCSTRING("_overlay","\x11","\x9d","\xc8","\xe2"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("pauseOnDown","\xb7","\xe8","\x08","\xd9"),
	HX_HCSTRING("resumeOnDown","\xae","\xde","\xc6","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseMenu_obj::__mClass,"__mClass");
};

#endif

hx::Class PauseMenu_obj::__mClass;

void PauseMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("menus.PauseMenu","\x9b","\x84","\x96","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PauseMenu_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PauseMenu_obj >;
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

} // end namespace menus
