#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace _system{
namespace layer{
namespace frames{

Void FlxFrame_obj::__construct(::flixel::_system::layer::TileSheetData tileSheet)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","new",0x842bb9ab,"flixel.system.layer.frames.FlxFrame.new","flixel/system/layer/frames/FlxFrame.hx",14,0x455cb825)
HX_STACK_THIS(this)
HX_STACK_ARG(tileSheet,"tileSheet")
{
	HX_STACK_LINE(26)
	this->additionalAngle = ((Float)0);
	HX_STACK_LINE(25)
	this->tileID = (int)-1;
	HX_STACK_LINE(23)
	this->trimmed = false;
	HX_STACK_LINE(42)
	this->_tileSheet = tileSheet;
	HX_STACK_LINE(43)
	this->additionalAngle = (int)0;
	HX_STACK_LINE(45)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(45)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(45)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(45)
		point->_inPool = false;
		HX_STACK_LINE(45)
		tmp = point;
	}
	HX_STACK_LINE(45)
	this->sourceSize = tmp;
	HX_STACK_LINE(46)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(46)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(46)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(46)
		point->_inPool = false;
		HX_STACK_LINE(46)
		tmp1 = point;
	}
	HX_STACK_LINE(46)
	this->offset = tmp1;
	HX_STACK_LINE(47)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(47)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(47)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(47)
		point->_inPool = false;
		HX_STACK_LINE(47)
		tmp2 = point;
	}
	HX_STACK_LINE(47)
	this->center = tmp2;
	HX_STACK_LINE(49)
	this->type = ::flixel::_system::layer::frames::FrameType_obj::REGULAR;
}
;
	return null();
}

//FlxFrame_obj::~FlxFrame_obj() { }

Dynamic FlxFrame_obj::__CreateEmpty() { return  new FlxFrame_obj; }
hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new(::flixel::_system::layer::TileSheetData tileSheet)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(tileSheet);
	return _result_;}

Dynamic FlxFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::display::BitmapData FlxFrame_obj::paintOnBitmap( ::openfl::_legacy::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","paintOnBitmap",0xb025dd37,"flixel.system.layer.frames.FlxFrame.paintOnBitmap","flixel/system/layer/frames/FlxFrame.hx",53,0x455cb825)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(54)
	::openfl::_legacy::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(56)
	bool tmp = (bmd != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(56)
		int tmp2 = bmd->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::flixel::util::FlxPoint tmp4 = this->sourceSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		::flixel::util::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		if ((tmp9)){
			HX_STACK_LINE(56)
			int tmp10 = bmd->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp13 = this->sourceSize;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(56)
			tmp1 = (tmp12 == tmp16);
		}
		else{
			HX_STACK_LINE(56)
			tmp1 = false;
		}
	}
	else{
		HX_STACK_LINE(56)
		tmp1 = false;
	}
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(58)
		result = bmd;
		HX_STACK_LINE(60)
		int tmp2 = bmd->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		int w = tmp2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(61)
		int tmp3 = bmd->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		int h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(63)
		int tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::openfl::_legacy::geom::Rectangle tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		if ((tmp8)){
			HX_STACK_LINE(63)
			int tmp10 = h;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			::openfl::_legacy::geom::Rectangle tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			::openfl::_legacy::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			Float tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			tmp9 = (tmp10 > tmp13);
		}
		else{
			HX_STACK_LINE(63)
			tmp9 = true;
		}
		HX_STACK_LINE(63)
		if ((tmp9)){
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Rectangle tmp10 = ::flixel::_system::layer::frames::FlxFrame_obj::RECT;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			Float tmp11 = tmp10->y = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Rectangle tmp12 = ::flixel::_system::layer::frames::FlxFrame_obj::RECT;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			tmp12->x = tmp11;
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Rectangle tmp13 = ::flixel::_system::layer::frames::FlxFrame_obj::RECT;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			tmp13->width = w;
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Rectangle tmp14 = ::flixel::_system::layer::frames::FlxFrame_obj::RECT;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			tmp14->height = h;
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Rectangle tmp15 = ::flixel::_system::layer::frames::FlxFrame_obj::RECT;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			bmd->fillRect(tmp15,(int)0);
		}
	}
	else{
		HX_STACK_LINE(71)
		bool tmp2 = (bmd != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(76)
	bool tmp2 = (result == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	if ((tmp2)){
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint tmp6 = this->sourceSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp8,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		result = tmp9;
	}
	HX_STACK_LINE(81)
	::flixel::util::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	::openfl::_legacy::geom::Point tmp4 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	tmp4->x = tmp3->x;
	HX_STACK_LINE(82)
	::flixel::util::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	::openfl::_legacy::geom::Point tmp6 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	tmp6->y = tmp5->y;
	HX_STACK_LINE(83)
	::flixel::_system::layer::TileSheetData tmp7 = this->_tileSheet;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	::openfl::_legacy::display::BitmapData tmp8 = tmp7->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Rectangle tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Point tmp10 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	result->copyPixels(tmp8,tmp9,tmp10,null(),null(),null());
	HX_STACK_LINE(85)
	::openfl::_legacy::display::BitmapData tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(85)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,paintOnBitmap,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::getBitmap( ){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","getBitmap",0x24590cb0,"flixel.system.layer.frames.FlxFrame.getBitmap","flixel/system/layer/frames/FlxFrame.hx",89,0x455cb825)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::openfl::_legacy::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(92)
		::openfl::_legacy::display::BitmapData tmp2 = this->_bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		return tmp2;
	}
	HX_STACK_LINE(95)
	::openfl::_legacy::display::BitmapData tmp2 = this->paintOnBitmap(null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	this->_bitmapData = tmp2;
	HX_STACK_LINE(97)
	::openfl::_legacy::display::BitmapData tmp3 = this->_bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getBitmap,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::getHReversedBitmap( ){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","getHReversedBitmap",0x2e895438,"flixel.system.layer.frames.FlxFrame.getHReversedBitmap","flixel/system/layer/frames/FlxFrame.hx",101,0x455cb825)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::openfl::_legacy::display::BitmapData tmp = this->_hReversedBitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	if ((tmp1)){
		HX_STACK_LINE(104)
		::openfl::_legacy::display::BitmapData tmp2 = this->_hReversedBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		return tmp2;
	}
	HX_STACK_LINE(107)
	::openfl::_legacy::display::BitmapData tmp2 = this->getBitmap();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	::openfl::_legacy::display::BitmapData normalFrame = tmp2;		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(108)
	::openfl::_legacy::geom::Matrix tmp3 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	tmp3->identity();
	HX_STACK_LINE(109)
	::openfl::_legacy::geom::Matrix tmp4 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	tmp4->scale((int)-1,(int)1);
	HX_STACK_LINE(110)
	::openfl::_legacy::geom::Matrix tmp5 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	::flixel::util::FlxPoint tmp6 = this->sourceSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(110)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(110)
	tmp5->translate(tmp8,(int)0);
	HX_STACK_LINE(111)
	::flixel::util::FlxPoint tmp9 = this->sourceSize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(111)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(111)
	::flixel::util::FlxPoint tmp12 = this->sourceSize;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(111)
	Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(111)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(111)
	::openfl::_legacy::display::BitmapData tmp15 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp14,true,(int)0,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(111)
	this->_hReversedBitmapData = tmp15;
	HX_STACK_LINE(112)
	::openfl::_legacy::display::BitmapData tmp16 = this->_hReversedBitmapData;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(112)
	::openfl::_legacy::display::BitmapData tmp17 = normalFrame;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(112)
	::openfl::_legacy::geom::Matrix tmp18 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(112)
	tmp16->draw(tmp17,tmp18,null(),null(),null(),null());
	HX_STACK_LINE(114)
	::openfl::_legacy::display::BitmapData tmp19 = this->_hReversedBitmapData;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(114)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getHReversedBitmap,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::getVReversedBitmap( ){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","getVReversedBitmap",0x544c10c6,"flixel.system.layer.frames.FlxFrame.getVReversedBitmap","flixel/system/layer/frames/FlxFrame.hx",118,0x455cb825)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::openfl::_legacy::display::BitmapData tmp = this->_vReversedBitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp1)){
		HX_STACK_LINE(121)
		::openfl::_legacy::display::BitmapData tmp2 = this->_vReversedBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		return tmp2;
	}
	HX_STACK_LINE(124)
	::openfl::_legacy::display::BitmapData tmp2 = this->getBitmap();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	::openfl::_legacy::display::BitmapData normalFrame = tmp2;		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(125)
	::openfl::_legacy::geom::Matrix tmp3 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	tmp3->identity();
	HX_STACK_LINE(126)
	::openfl::_legacy::geom::Matrix tmp4 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	tmp4->scale((int)1,(int)-1);
	HX_STACK_LINE(127)
	::openfl::_legacy::geom::Matrix tmp5 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	::flixel::util::FlxPoint tmp6 = this->sourceSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	tmp5->translate((int)0,tmp8);
	HX_STACK_LINE(128)
	::flixel::util::FlxPoint tmp9 = this->sourceSize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(128)
	Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(128)
	::flixel::util::FlxPoint tmp12 = this->sourceSize;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(128)
	Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(128)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(128)
	::openfl::_legacy::display::BitmapData tmp15 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp14,true,(int)0,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(128)
	this->_vReversedBitmapData = tmp15;
	HX_STACK_LINE(129)
	::openfl::_legacy::display::BitmapData tmp16 = this->_vReversedBitmapData;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(129)
	::openfl::_legacy::display::BitmapData tmp17 = normalFrame;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(129)
	::openfl::_legacy::geom::Matrix tmp18 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(129)
	tmp16->draw(tmp17,tmp18,null(),null(),null(),null());
	HX_STACK_LINE(131)
	::openfl::_legacy::display::BitmapData tmp19 = this->_vReversedBitmapData;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(131)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getVReversedBitmap,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::getHVReversedBitmap( ){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","getHVReversedBitmap",0x3a9fc220,"flixel.system.layer.frames.FlxFrame.getHVReversedBitmap","flixel/system/layer/frames/FlxFrame.hx",135,0x455cb825)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	::openfl::_legacy::display::BitmapData tmp = this->_hvReversedBitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	if ((tmp1)){
		HX_STACK_LINE(138)
		::openfl::_legacy::display::BitmapData tmp2 = this->_hvReversedBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		return tmp2;
	}
	HX_STACK_LINE(141)
	::openfl::_legacy::display::BitmapData tmp2 = this->getBitmap();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::openfl::_legacy::display::BitmapData normalFrame = tmp2;		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(142)
	::openfl::_legacy::geom::Matrix tmp3 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	tmp3->identity();
	HX_STACK_LINE(143)
	::openfl::_legacy::geom::Matrix tmp4 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	tmp4->scale((int)-1,(int)-1);
	HX_STACK_LINE(144)
	::openfl::_legacy::geom::Matrix tmp5 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(144)
	::flixel::util::FlxPoint tmp6 = this->sourceSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(144)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(144)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(144)
	::flixel::util::FlxPoint tmp9 = this->sourceSize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(144)
	Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(144)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(144)
	tmp5->translate(tmp8,tmp11);
	HX_STACK_LINE(145)
	::flixel::util::FlxPoint tmp12 = this->sourceSize;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(145)
	Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(145)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(145)
	::flixel::util::FlxPoint tmp15 = this->sourceSize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(145)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(145)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(145)
	::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp14,tmp17,true,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(145)
	this->_hvReversedBitmapData = tmp18;
	HX_STACK_LINE(146)
	::openfl::_legacy::display::BitmapData tmp19 = this->_hvReversedBitmapData;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(146)
	::openfl::_legacy::display::BitmapData tmp20 = normalFrame;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(146)
	::openfl::_legacy::geom::Matrix tmp21 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(146)
	tmp19->draw(tmp20,tmp21,null(),null(),null(),null());
	HX_STACK_LINE(148)
	::openfl::_legacy::display::BitmapData tmp22 = this->_hvReversedBitmapData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(148)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getHVReversedBitmap,return )

Void FlxFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","destroy",0x6c1417c5,"flixel.system.layer.frames.FlxFrame.destroy","flixel/system/layer/frames/FlxFrame.hx",152,0x455cb825)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->name = null();
		HX_STACK_LINE(154)
		this->frame = null();
		HX_STACK_LINE(155)
		this->_tileSheet = null();
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		this->sourceSize = tmp1;
		HX_STACK_LINE(158)
		::flixel::util::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		this->offset = tmp3;
		HX_STACK_LINE(159)
		::flixel::util::FlxPoint tmp4 = this->center;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		this->center = tmp5;
		HX_STACK_LINE(161)
		this->destroyBitmapDatas();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

Void FlxFrame_obj::destroyBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.system.layer.frames.FlxFrame","destroyBitmapDatas",0x68a588d5,"flixel.system.layer.frames.FlxFrame.destroyBitmapDatas","flixel/system/layer/frames/FlxFrame.hx",165,0x455cb825)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData tmp1 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		this->_bitmapData = tmp1;
		HX_STACK_LINE(167)
		::openfl::_legacy::display::BitmapData tmp2 = this->_hReversedBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		::openfl::_legacy::display::BitmapData tmp3 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		this->_hReversedBitmapData = tmp3;
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp4 = this->_vReversedBitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		this->_vReversedBitmapData = tmp5;
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp6 = this->_hvReversedBitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp7 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		this->_hvReversedBitmapData = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroyBitmapDatas,(void))

::openfl::_legacy::geom::Point FlxFrame_obj::POINT;

::openfl::_legacy::geom::Matrix FlxFrame_obj::MATRIX;

::openfl::_legacy::geom::Rectangle FlxFrame_obj::RECT;


FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(trimmed,"trimmed");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_hReversedBitmapData,"_hReversedBitmapData");
	HX_MARK_MEMBER_NAME(_vReversedBitmapData,"_vReversedBitmapData");
	HX_MARK_MEMBER_NAME(_hvReversedBitmapData,"_hvReversedBitmapData");
	HX_MARK_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(trimmed,"trimmed");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(additionalAngle,"additionalAngle");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_hReversedBitmapData,"_hReversedBitmapData");
	HX_VISIT_MEMBER_NAME(_vReversedBitmapData,"_vReversedBitmapData");
	HX_VISIT_MEMBER_NAME(_hvReversedBitmapData,"_hvReversedBitmapData");
	HX_VISIT_MEMBER_NAME(_tileSheet,"_tileSheet");
}

Dynamic FlxFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trimmed") ) { return trimmed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { return _tileSheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { return additionalAngle; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getHReversedBitmap") ) { return getHReversedBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getVReversedBitmap") ) { return getVReversedBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyBitmapDatas") ) { return destroyBitmapDatas_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getHVReversedBitmap") ) { return getHVReversedBitmap_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hReversedBitmapData") ) { return _hReversedBitmapData; }
		if (HX_FIELD_EQ(inName,"_vReversedBitmapData") ) { return _vReversedBitmapData; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_hvReversedBitmapData") ) { return _hvReversedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RECT") ) { outValue = RECT; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { outValue = POINT; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MATRIX") ) { outValue = MATRIX; return true;  }
	}
	return false;
}

Dynamic FlxFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::_system::layer::frames::FrameType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trimmed") ) { trimmed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { _tileSheet=inValue.Cast< ::flixel::_system::layer::TileSheetData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"additionalAngle") ) { additionalAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hReversedBitmapData") ) { _hReversedBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vReversedBitmapData") ) { _vReversedBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_hvReversedBitmapData") ) { _hvReversedBitmapData=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RECT") ) { RECT=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POINT") ) { POINT=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MATRIX") ) { MATRIX=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
	}
	return false;
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29"));
	outFields->push(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"));
	outFields->push(HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9"));
	outFields->push(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"));
	outFields->push(HX_HCSTRING("_hReversedBitmapData","\xe4","\x0a","\xd8","\xaa"));
	outFields->push(HX_HCSTRING("_vReversedBitmapData","\x72","\x26","\x8f","\xf1"));
	outFields->push(HX_HCSTRING("_hvReversedBitmapData","\xe8","\xf9","\xb3","\xf9"));
	outFields->push(HX_HCSTRING("_tileSheet","\x52","\xbc","\x1d","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsBool,(int)offsetof(FlxFrame_obj,trimmed),HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,tileID),HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")},
	{hx::fsFloat,(int)offsetof(FlxFrame_obj,additionalAngle),HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{hx::fsObject /*::flixel::_system::layer::frames::FrameType*/ ,(int)offsetof(FlxFrame_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_bitmapData),HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_hReversedBitmapData),HX_HCSTRING("_hReversedBitmapData","\xe4","\x0a","\xd8","\xaa")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_vReversedBitmapData),HX_HCSTRING("_vReversedBitmapData","\x72","\x26","\x8f","\xf1")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_hvReversedBitmapData),HX_HCSTRING("_hvReversedBitmapData","\xe8","\xf9","\xb3","\xf9")},
	{hx::fsObject /*::flixel::_system::layer::TileSheetData*/ ,(int)offsetof(FlxFrame_obj,_tileSheet),HX_HCSTRING("_tileSheet","\x52","\xbc","\x1d","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxFrame_obj::POINT,HX_HCSTRING("POINT","\x30","\xec","\x7d","\x44")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxFrame_obj::MATRIX,HX_HCSTRING("MATRIX","\x41","\xe2","\x4a","\x6e")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxFrame_obj::RECT,HX_HCSTRING("RECT","\x24","\x15","\x68","\x36")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("trimmed","\x6a","\x2a","\xdb","\x29"),
	HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"),
	HX_HCSTRING("additionalAngle","\x6c","\x15","\xab","\xa9"),
	HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"),
	HX_HCSTRING("_hReversedBitmapData","\xe4","\x0a","\xd8","\xaa"),
	HX_HCSTRING("_vReversedBitmapData","\x72","\x26","\x8f","\xf1"),
	HX_HCSTRING("_hvReversedBitmapData","\xe8","\xf9","\xb3","\xf9"),
	HX_HCSTRING("_tileSheet","\x52","\xbc","\x1d","\x63"),
	HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"),
	HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"),
	HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("destroyBitmapDatas","\xc0","\x45","\x13","\xd2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::POINT,"POINT");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::MATRIX,"MATRIX");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::RECT,"RECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::POINT,"POINT");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::MATRIX,"MATRIX");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::RECT,"RECT");
};

#endif

hx::Class FlxFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("POINT","\x30","\xec","\x7d","\x44"),
	HX_HCSTRING("MATRIX","\x41","\xe2","\x4a","\x6e"),
	HX_HCSTRING("RECT","\x24","\x15","\x68","\x36"),
	::String(null()) };

void FlxFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.frames.FlxFrame","\x39","\x08","\x75","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFrame_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFrame_obj >;
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

void FlxFrame_obj::__boot()
{
	POINT= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	MATRIX= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	RECT= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
