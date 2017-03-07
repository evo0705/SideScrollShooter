#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void SignalFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SignalFrontEnd","new",0xa84da1e6,"flixel.system.frontEnds.SignalFrontEnd.new","flixel/system/frontEnds/SignalFrontEnd.hx",31,0x6eb9cd09)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	::flixel::util::_FlxSignal::FlxSignal0 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::flixel::util::_FlxSignal::FlxSignal0 tmp1 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::flixel::util::_FlxSignal::FlxSignal0 tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp = tmp2;
	}
	HX_STACK_LINE(32)
	this->stateSwitched = tmp;
	HX_STACK_LINE(33)
	::flixel::util::_FlxSignal::FlxSignal2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::flixel::util::_FlxSignal::FlxSignal2 tmp2 = ::flixel::util::_FlxSignal::FlxSignal2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::flixel::util::_FlxSignal::FlxSignal2 tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(33)
	this->gameResized = tmp1;
	HX_STACK_LINE(34)
	::flixel::util::_FlxSignal::FlxSignal0 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::flixel::util::_FlxSignal::FlxSignal0 tmp3 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::flixel::util::_FlxSignal::FlxSignal0 tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(34)
	this->gameReset = tmp2;
	HX_STACK_LINE(35)
	::flixel::util::_FlxSignal::FlxSignal0 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::flixel::util::_FlxSignal::FlxSignal0 tmp4 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::flixel::util::_FlxSignal::FlxSignal0 tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(35)
	this->gameStarted = tmp3;
	HX_STACK_LINE(36)
	::flixel::util::_FlxSignal::FlxSignal0 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::flixel::util::_FlxSignal::FlxSignal0 tmp5 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		::flixel::util::_FlxSignal::FlxSignal0 tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(36)
	this->preUpdate = tmp4;
	HX_STACK_LINE(37)
	::flixel::util::_FlxSignal::FlxSignal0 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::flixel::util::_FlxSignal::FlxSignal0 tmp6 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		::flixel::util::_FlxSignal::FlxSignal0 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(37)
	this->postUpdate = tmp5;
	HX_STACK_LINE(38)
	::flixel::util::_FlxSignal::FlxSignal0 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::flixel::util::_FlxSignal::FlxSignal0 tmp7 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		::flixel::util::_FlxSignal::FlxSignal0 tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(38)
	this->preDraw = tmp6;
	HX_STACK_LINE(39)
	::flixel::util::_FlxSignal::FlxSignal0 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::flixel::util::_FlxSignal::FlxSignal0 tmp8 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		::flixel::util::_FlxSignal::FlxSignal0 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		tmp7 = tmp9;
	}
	HX_STACK_LINE(39)
	this->postDraw = tmp7;
	HX_STACK_LINE(40)
	::flixel::util::_FlxSignal::FlxSignal0 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::flixel::util::_FlxSignal::FlxSignal0 tmp9 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		::flixel::util::_FlxSignal::FlxSignal0 tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(40)
	this->focusGained = tmp8;
	HX_STACK_LINE(41)
	::flixel::util::_FlxSignal::FlxSignal0 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::flixel::util::_FlxSignal::FlxSignal0 tmp10 = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::flixel::util::_FlxSignal::FlxSignal0 tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		tmp9 = tmp11;
	}
	HX_STACK_LINE(41)
	this->focusLost = tmp9;
}
;
	return null();
}

//SignalFrontEnd_obj::~SignalFrontEnd_obj() { }

Dynamic SignalFrontEnd_obj::__CreateEmpty() { return  new SignalFrontEnd_obj; }
hx::ObjectPtr< SignalFrontEnd_obj > SignalFrontEnd_obj::__new()
{  hx::ObjectPtr< SignalFrontEnd_obj > _result_ = new SignalFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic SignalFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SignalFrontEnd_obj > _result_ = new SignalFrontEnd_obj();
	_result_->__construct();
	return _result_;}


SignalFrontEnd_obj::SignalFrontEnd_obj()
{
}

void SignalFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalFrontEnd);
	HX_MARK_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_MARK_MEMBER_NAME(gameResized,"gameResized");
	HX_MARK_MEMBER_NAME(gameReset,"gameReset");
	HX_MARK_MEMBER_NAME(gameStarted,"gameStarted");
	HX_MARK_MEMBER_NAME(preUpdate,"preUpdate");
	HX_MARK_MEMBER_NAME(postUpdate,"postUpdate");
	HX_MARK_MEMBER_NAME(preDraw,"preDraw");
	HX_MARK_MEMBER_NAME(postDraw,"postDraw");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_END_CLASS();
}

void SignalFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_VISIT_MEMBER_NAME(gameResized,"gameResized");
	HX_VISIT_MEMBER_NAME(gameReset,"gameReset");
	HX_VISIT_MEMBER_NAME(gameStarted,"gameStarted");
	HX_VISIT_MEMBER_NAME(preUpdate,"preUpdate");
	HX_VISIT_MEMBER_NAME(postUpdate,"postUpdate");
	HX_VISIT_MEMBER_NAME(preDraw,"preDraw");
	HX_VISIT_MEMBER_NAME(postDraw,"postDraw");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
}

Dynamic SignalFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { return preDraw; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { return postDraw; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameReset") ) { return gameReset; }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { return gameResized; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { return gameStarted; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { return stateSwitched; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SignalFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { preDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { postDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameReset") ) { gameReset=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { preUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { postUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { gameResized=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { gameStarted=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { stateSwitched=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SignalFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SignalFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"));
	outFields->push(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"));
	outFields->push(HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b"));
	outFields->push(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"));
	outFields->push(HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"));
	outFields->push(HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"));
	outFields->push(HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"));
	outFields->push(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"));
	outFields->push(HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"));
	outFields->push(HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,stateSwitched),HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal2*/ ,(int)offsetof(SignalFrontEnd_obj,gameResized),HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,gameReset),HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,gameStarted),HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preUpdate),HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postUpdate),HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preDraw),HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postDraw),HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusGained),HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusLost),HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"),
	HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"),
	HX_HCSTRING("gameReset","\x7d","\x38","\xe3","\x1b"),
	HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"),
	HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"),
	HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"),
	HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"),
	HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"),
	HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"),
	HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SignalFrontEnd_obj::__mClass;

void SignalFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SignalFrontEnd","\xf4","\x76","\xd9","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SignalFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SignalFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
