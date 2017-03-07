#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
namespace flixel{
namespace _system{

Void FlxAssets_obj::__construct()
{
	return null();
}

//FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > _result_ = new FlxAssets_obj();
	_result_->__construct();
	return _result_;}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

Void FlxAssets_obj::drawLogo( ::openfl::_legacy::display::Graphics graph){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",93,0xd3ac1356)
		HX_STACK_ARG(graph,"graph")
		HX_STACK_LINE(95)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(96)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(97)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(98)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(99)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(100)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(101)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(102)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(103)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(104)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(105)
		graph->endFill();
		HX_STACK_LINE(108)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(109)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(110)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(111)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(112)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(113)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(114)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(115)
		graph->endFill();
		HX_STACK_LINE(118)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(119)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(120)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(121)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(122)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(123)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(124)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(125)
		graph->endFill();
		HX_STACK_LINE(128)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(129)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(130)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(131)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(132)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(133)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(134)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(135)
		graph->endFill();
		HX_STACK_LINE(138)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(139)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(140)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(141)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(142)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(143)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(144)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(145)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::openfl::_legacy::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getBitmapData",0x17128189,"flixel.system.FlxAssets.getBitmapData","flixel/system/FlxAssets.hx",149,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(150)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::openfl::_legacy::display::BitmapData tmp1 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

::openfl::_legacy::media::Sound FlxAssets_obj::getSound( ::String id){
	HX_STACK_FRAME("flixel.system.FlxAssets","getSound",0x306e52ff,"flixel.system.FlxAssets.getSound","flixel/system/FlxAssets.hx",154,0xd3ac1356)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(155)
	::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(159)
	extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
	HX_STACK_LINE(161)
	::String tmp = (id + extension);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	::openfl::_legacy::media::Sound tmp1 = ::openfl::_legacy::Assets_obj::getSound(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getSound,return )

Void FlxAssets_obj::cacheSounds( ){
{
		HX_STACK_FRAME("flixel.system.FlxAssets","cacheSounds",0x35d449c0,"flixel.system.FlxAssets.cacheSounds","flixel/system/FlxAssets.hx",175,0xd3ac1356)
		HX_STACK_LINE(175)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		Array< ::String > _g1 = ::openfl::_legacy::Assets_obj::list(::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(175)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(175)
			if ((tmp1)){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			::String id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(175)
			++(_g);
			HX_STACK_LINE(177)
			::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			tmp3->__Field(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,cacheSounds,(void))


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheSounds") ) { outValue = cacheSounds_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = FONT_DEFAULT; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = FONT_DEBUGGER; return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2")},
	{hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

hx::Class FlxAssets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FONT_DEFAULT","\xf1","\x12","\x32","\xe2"),
	HX_HCSTRING("FONT_DEBUGGER","\xd1","\xd3","\xef","\xea"),
	HX_HCSTRING("drawLogo","\x8f","\x49","\x21","\x5c"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("cacheSounds","\xa6","\xd4","\xcf","\x50"),
	::String(null()) };

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxAssets","\x88","\x16","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAssets_obj >;
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

void FlxAssets_obj::__boot()
{
	FONT_DEFAULT= HX_HCSTRING("Nokia Cellphone FC Small","\xd6","\x2f","\x44","\xca");
	FONT_DEBUGGER= HX_HCSTRING("Arial","\x23","\x09","\xb6","\xb8");
}

} // end namespace flixel
} // end namespace system
