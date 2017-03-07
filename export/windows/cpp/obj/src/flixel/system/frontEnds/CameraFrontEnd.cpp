#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","new",0xc6f5a1a3,"flixel.system.frontEnds.CameraFrontEnd.new","flixel/system/frontEnds/CameraFrontEnd.hx",10,0x7a57d3ec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->useBufferLocking = false;
	HX_STACK_LINE(169)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	this->_cameraRect = tmp;
	HX_STACK_LINE(170)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(171)
	::flixel::FlxCamera_obj::defaultCameras = this->list;
}
;
	return null();
}

//CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > _result_ = new CameraFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::FlxCamera CameraFrontEnd_obj::add_flixel_FlxCamera( ::flixel::FlxCamera NewCamera){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","add_flixel_FlxCamera",0x4d50242f,"flixel.system.frontEnds.CameraFrontEnd.add_flixel_FlxCamera","flixel/system/frontEnds/CameraFrontEnd.hx",42,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewCamera,"NewCamera")
	HX_STACK_LINE(44)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::openfl::_legacy::display::Sprite tmp1 = NewCamera->flashSprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::openfl::_legacy::display::Sprite tmp4 = tmp3->_inputContainer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	int tmp5 = tmp2->getChildIndex(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	tmp->addChildAt(tmp1,tmp5);
	HX_STACK_LINE(46)
	::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	::flixel::FlxCamera tmp7 = NewCamera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	tmp6->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	HX_STACK_LINE(47)
	::flixel::_system::frontEnds::CameraFrontEnd tmp8 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	int tmp9 = tmp8->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(47)
	int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(47)
	NewCamera->ID = tmp10;
	HX_STACK_LINE(48)
	::flixel::FlxCamera tmp11 = NewCamera;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,add_flixel_FlxCamera,return )

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","remove",0xaa68b6e1,"flixel.system.frontEnds.CameraFrontEnd.remove","flixel/system/frontEnds/CameraFrontEnd.hx",58,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Destroy,"Destroy")
{
		HX_STACK_LINE(59)
		::flixel::FlxCamera tmp = Camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		int tmp1 = this->list->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(60)
		bool tmp2 = (Camera != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		if ((tmp2)){
			HX_STACK_LINE(60)
			tmp3 = (index != (int)-1);
		}
		else{
			HX_STACK_LINE(60)
			tmp3 = false;
		}
		HX_STACK_LINE(60)
		if ((tmp3)){
			HX_STACK_LINE(63)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			::openfl::_legacy::display::Sprite tmp5 = Camera->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			tmp4->removeChild(tmp5);
			HX_STACK_LINE(66)
			int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp6,(int)1);
		}
		else{
			HX_STACK_LINE(70)
			Dynamic();
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			int tmp4 = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				if ((tmp6)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				::flixel::FlxCamera tmp8 = this->list->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(76)
				tmp8->ID = i;
			}
		}
		HX_STACK_LINE(80)
		bool tmp4 = Destroy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(82)
			Camera->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","reset",0xf67331d2,"flixel.system.frontEnds.CameraFrontEnd.reset","flixel/system/frontEnds/CameraFrontEnd.hx",93,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NewCamera,"NewCamera")
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(95)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(95)
				if ((tmp1)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(97)
				::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(97)
				::openfl::_legacy::display::Sprite tmp4 = camera->flashSprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(97)
				tmp3->removeChild(tmp4);
				HX_STACK_LINE(98)
				camera->destroy();
			}
		}
		HX_STACK_LINE(102)
		int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		HX_STACK_LINE(104)
		bool tmp1 = (NewCamera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(106)
			int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			::flixel::FlxCamera tmp4 = ::flixel::FlxCamera_obj::__new((int)0,(int)0,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			NewCamera = tmp4;
		}
		HX_STACK_LINE(109)
		::flixel::FlxCamera tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			::openfl::_legacy::display::Sprite tmp4 = NewCamera->flashSprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			::openfl::_legacy::display::Sprite tmp7 = tmp6->_inputContainer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			int tmp8 = tmp5->getChildIndex(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			tmp3->addChildAt(tmp4,tmp8);
			HX_STACK_LINE(109)
			::flixel::_system::frontEnds::CameraFrontEnd tmp9 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			::flixel::FlxCamera tmp10 = NewCamera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			tmp9->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
			HX_STACK_LINE(109)
			::flixel::_system::frontEnds::CameraFrontEnd tmp11 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(109)
			int tmp12 = tmp11->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(109)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(109)
			NewCamera->ID = tmp13;
			HX_STACK_LINE(109)
			tmp2 = NewCamera;
		}
		HX_STACK_LINE(109)
		::flixel::FlxG_obj::camera = tmp2;
		HX_STACK_LINE(110)
		NewCamera->ID = (int)0;
		HX_STACK_LINE(113)
		::flixel::FlxCamera_obj::defaultCameras = this->list;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","flash",0x12371db3,"flixel.system.frontEnds.CameraFrontEnd.flash","flixel/system/frontEnds/CameraFrontEnd.hx",126,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			if ((tmp1)){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(126)
			++(_g);
			HX_STACK_LINE(128)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			camera->flash(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","fade",0x4aaafed9,"flixel.system.frontEnds.CameraFrontEnd.fade","flixel/system/frontEnds/CameraFrontEnd.hx",143,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			if ((tmp1)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(145)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			bool tmp5 = FadeIn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			Dynamic tmp6 = OnComplete;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			bool tmp7 = Force;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			camera->fade(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","shake",0x8bc7c6c9,"flixel.system.frontEnds.CameraFrontEnd.shake","flixel/system/frontEnds/CameraFrontEnd.hx",160,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Direction,"Direction")
{
		HX_STACK_LINE(160)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			if ((tmp1)){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(160)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(160)
			++(_g);
			HX_STACK_LINE(162)
			Float tmp3 = Intensity;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			Float tmp4 = Duration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			Dynamic tmp5 = OnComplete;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			bool tmp6 = Force;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			int tmp7 = Direction;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			camera->shake(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","lock",0x4eace548,"flixel.system.frontEnds.CameraFrontEnd.lock","flixel/system/frontEnds/CameraFrontEnd.hx",179,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(179)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		while((true)){
			HX_STACK_LINE(179)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(179)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			if ((tmp1)){
				HX_STACK_LINE(179)
				break;
			}
			HX_STACK_LINE(179)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(179)
			++(_g);
			HX_STACK_LINE(181)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			if ((tmp5)){
				HX_STACK_LINE(181)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(181)
				tmp6 = true;
			}
			HX_STACK_LINE(181)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			if ((tmp7)){
				HX_STACK_LINE(181)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(181)
				tmp8 = true;
			}
			HX_STACK_LINE(181)
			if ((tmp8)){
				HX_STACK_LINE(183)
				continue;
			}
			HX_STACK_LINE(196)
			camera->clearDrawStack();
			HX_STACK_LINE(197)
			::openfl::_legacy::display::Graphics tmp9 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			tmp9->clear();
			HX_STACK_LINE(208)
			int tmp10 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			bool tmp11 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			int tmp12 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(208)
			Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(208)
			camera->fill(tmp10,tmp11,tmp14,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","render",0xab0985f3,"flixel.system.frontEnds.CameraFrontEnd.render","flixel/system/frontEnds/CameraFrontEnd.hx",216,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(216)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			if ((tmp1)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(216)
			++(_g);
			HX_STACK_LINE(218)
			bool tmp3 = (camera != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			if ((tmp4)){
				HX_STACK_LINE(218)
				tmp5 = camera->exists;
			}
			else{
				HX_STACK_LINE(218)
				tmp5 = false;
			}
			HX_STACK_LINE(218)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			if ((tmp5)){
				HX_STACK_LINE(218)
				tmp6 = camera->visible;
			}
			else{
				HX_STACK_LINE(218)
				tmp6 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp6)){
				HX_STACK_LINE(220)
				camera->render();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","unlock",0x0b6cbd61,"flixel.system.frontEnds.CameraFrontEnd.unlock","flixel/system/frontEnds/CameraFrontEnd.hx",231,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(231)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			if ((tmp1)){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(231)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(231)
			++(_g);
			HX_STACK_LINE(233)
			bool tmp3 = (camera == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			if ((tmp5)){
				HX_STACK_LINE(233)
				bool tmp7 = camera->exists;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(233)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(233)
				tmp6 = !(tmp9);
			}
			else{
				HX_STACK_LINE(233)
				tmp6 = true;
			}
			HX_STACK_LINE(233)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(233)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(233)
			if ((tmp7)){
				HX_STACK_LINE(233)
				bool tmp9 = camera->visible;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(233)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(233)
				tmp8 = !(tmp10);
			}
			else{
				HX_STACK_LINE(233)
				tmp8 = true;
			}
			HX_STACK_LINE(233)
			if ((tmp8)){
				HX_STACK_LINE(235)
				continue;
			}
			HX_STACK_LINE(238)
			camera->drawFX();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","update",0x2ce5a0a6,"flixel.system.frontEnds.CameraFrontEnd.update","flixel/system/frontEnds/CameraFrontEnd.hx",256,0x7a57d3ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(256)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			if ((tmp1)){
				HX_STACK_LINE(256)
				break;
			}
			HX_STACK_LINE(256)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(256)
			++(_g);
			HX_STACK_LINE(258)
			bool tmp3 = (camera != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			if ((tmp3)){
				HX_STACK_LINE(258)
				tmp4 = camera->exists;
			}
			else{
				HX_STACK_LINE(258)
				tmp4 = false;
			}
			HX_STACK_LINE(258)
			if ((tmp4)){
				HX_STACK_LINE(260)
				bool tmp5 = camera->active;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(260)
				if ((tmp5)){
					HX_STACK_LINE(262)
					camera->update();
				}
				HX_STACK_LINE(265)
				Float tmp6 = camera->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(265)
				Float tmp7 = camera->_flashOffset->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(265)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(265)
				camera->flashSprite->set_x(tmp8);
				HX_STACK_LINE(266)
				Float tmp9 = camera->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(266)
				Float tmp10 = camera->_flashOffset->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(266)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				camera->flashSprite->set_y(tmp11);
				HX_STACK_LINE(267)
				bool tmp12 = camera->visible;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(267)
				camera->flashSprite->set_visible(tmp12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,update,(void))

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","get_bgColor",0x99072db8,"flixel.system.frontEnds.CameraFrontEnd.get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",273,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	if ((tmp1)){
		HX_STACK_LINE(274)
		tmp2 = (int)-16777216;
	}
	else{
		HX_STACK_LINE(274)
		::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		tmp2 = tmp3->bgColor;
	}
	HX_STACK_LINE(274)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_FRAME("flixel.system.frontEnds.CameraFrontEnd","set_bgColor",0xa37434c4,"flixel.system.frontEnds.CameraFrontEnd.set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",278,0x7a57d3ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		while((true)){
			HX_STACK_LINE(279)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(279)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(279)
			if ((tmp1)){
				HX_STACK_LINE(279)
				break;
			}
			HX_STACK_LINE(279)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(279)
			++(_g);
			HX_STACK_LINE(281)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(284)
	int tmp = Color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"add_flixel_FlxCamera") ) { return add_flixel_FlxCamera_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { if (inCallProp == hx::paccAlways) return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CameraFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"));
	outFields->push(HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CameraFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(CameraFrontEnd_obj,useBufferLocking),HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(CameraFrontEnd_obj,_cameraRect),HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_FlxCamera","\xd2","\x90","\xe5","\x32"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"),
	HX_HCSTRING("_cameraRect","\x88","\x43","\x4f","\x84"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"),
	HX_HCSTRING("set_bgColor","\x81","\xe8","\xea","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.CameraFrontEnd","\x31","\x94","\x3d","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CameraFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraFrontEnd_obj >;
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
