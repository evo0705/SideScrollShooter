#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void FlxRotatedFrame_obj::__construct(::flixel::_system::layer::TileSheetData tileSheet)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","new",0x9022602a,"flixel.system.layer.frames.FlxRotatedFrame.new","flixel/system/layer/frames/FlxRotatedFrame.hx",10,0x68b07e86)
HX_STACK_THIS(this)
HX_STACK_ARG(tileSheet,"tileSheet")
{
	HX_STACK_LINE(11)
	::flixel::_system::layer::TileSheetData tmp = tileSheet;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp);
	HX_STACK_LINE(13)
	this->type = ::flixel::_system::layer::frames::FrameType_obj::ROTATED;
}
;
	return null();
}

//FlxRotatedFrame_obj::~FlxRotatedFrame_obj() { }

Dynamic FlxRotatedFrame_obj::__CreateEmpty() { return  new FlxRotatedFrame_obj; }
hx::ObjectPtr< FlxRotatedFrame_obj > FlxRotatedFrame_obj::__new(::flixel::_system::layer::TileSheetData tileSheet)
{  hx::ObjectPtr< FlxRotatedFrame_obj > _result_ = new FlxRotatedFrame_obj();
	_result_->__construct(tileSheet);
	return _result_;}

Dynamic FlxRotatedFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRotatedFrame_obj > _result_ = new FlxRotatedFrame_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::display::BitmapData FlxRotatedFrame_obj::paintOnBitmap( ::openfl::_legacy::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","paintOnBitmap",0xb37f3876,"flixel.system.layer.frames.FlxRotatedFrame.paintOnBitmap","flixel/system/layer/frames/FlxRotatedFrame.hx",17,0x68b07e86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(18)
	::openfl::_legacy::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(20)
	bool tmp = (bmd != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		int tmp2 = bmd->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint tmp4 = this->sourceSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(20)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		if ((tmp9)){
			HX_STACK_LINE(20)
			int tmp10 = bmd->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(20)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(20)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint tmp13 = this->sourceSize;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(20)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(20)
			tmp1 = (tmp12 == tmp16);
		}
		else{
			HX_STACK_LINE(20)
			tmp1 = false;
		}
	}
	else{
		HX_STACK_LINE(20)
		tmp1 = false;
	}
	HX_STACK_LINE(20)
	if ((tmp1)){
		HX_STACK_LINE(22)
		result = bmd;
	}
	else{
		HX_STACK_LINE(24)
		bool tmp2 = (bmd != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(26)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(29)
	bool tmp2 = (result == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::flixel::util::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		::flixel::util::FlxPoint tmp6 = this->sourceSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp8,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		result = tmp9;
	}
	HX_STACK_LINE(34)
	::openfl::_legacy::geom::Rectangle tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	::openfl::_legacy::geom::Rectangle tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp8,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::openfl::_legacy::display::BitmapData temp = tmp9;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(35)
	::openfl::_legacy::geom::Point tmp10 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	Float tmp11 = tmp10->y = (int)0;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(35)
	::openfl::_legacy::geom::Point tmp12 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(35)
	tmp12->x = tmp11;
	HX_STACK_LINE(36)
	::flixel::_system::layer::TileSheetData tmp13 = this->_tileSheet;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(36)
	::openfl::_legacy::display::BitmapData tmp14 = tmp13->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(36)
	::openfl::_legacy::geom::Rectangle tmp15 = this->frame;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(36)
	::openfl::_legacy::geom::Point tmp16 = ::flixel::_system::layer::frames::FlxFrame_obj::POINT;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(36)
	temp->copyPixels(tmp14,tmp15,tmp16,null(),null(),null());
	HX_STACK_LINE(38)
	::openfl::_legacy::geom::Matrix tmp17 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(38)
	tmp17->identity();
	HX_STACK_LINE(39)
	::openfl::_legacy::geom::Matrix tmp18 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(39)
	Float tmp19 = ((Float)-0.5);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(39)
	::openfl::_legacy::geom::Rectangle tmp20 = this->frame;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(39)
	Float tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(39)
	Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(39)
	Float tmp23 = ((Float)-0.5);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(39)
	::openfl::_legacy::geom::Rectangle tmp24 = this->frame;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(39)
	Float tmp25 = tmp24->height;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(39)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(39)
	tmp18->translate(tmp22,tmp26);
	HX_STACK_LINE(40)
	::openfl::_legacy::geom::Matrix tmp27 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(40)
	Float tmp28 = ((Float)-90.);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(40)
	Float tmp29 = ::Math_obj::PI;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(40)
	Float tmp30 = (Float(tmp29) / Float((int)180));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(40)
	Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(40)
	tmp27->rotate(tmp31);
	HX_STACK_LINE(41)
	::openfl::_legacy::geom::Matrix tmp32 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(41)
	::flixel::util::FlxPoint tmp33 = this->offset;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(41)
	Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(41)
	::openfl::_legacy::geom::Rectangle tmp35 = this->frame;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(41)
	Float tmp36 = tmp35->height;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(41)
	Float tmp37 = (((Float)0.5) * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(41)
	Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(41)
	::flixel::util::FlxPoint tmp39 = this->offset;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(41)
	Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(41)
	::openfl::_legacy::geom::Rectangle tmp41 = this->frame;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(41)
	Float tmp42 = tmp41->width;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(41)
	Float tmp43 = (((Float)0.5) * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(41)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(41)
	tmp32->translate(tmp38,tmp44);
	HX_STACK_LINE(43)
	::flixel::util::FlxPoint tmp45 = this->sourceSize;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(43)
	Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(43)
	int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(43)
	::flixel::util::FlxPoint tmp48 = this->sourceSize;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(43)
	Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(43)
	int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(43)
	::openfl::_legacy::display::BitmapData tmp51 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp47,tmp50,true,(int)0,null());		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(43)
	result = tmp51;
	HX_STACK_LINE(44)
	::openfl::_legacy::display::BitmapData tmp52 = temp;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(44)
	::openfl::_legacy::geom::Matrix tmp53 = ::flixel::_system::layer::frames::FlxFrame_obj::MATRIX;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(44)
	result->draw(tmp52,tmp53,null(),null(),null(),null());
	HX_STACK_LINE(45)
	temp->dispose();
	HX_STACK_LINE(47)
	::openfl::_legacy::display::BitmapData tmp54 = result;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(47)
	return tmp54;
}



FlxRotatedFrame_obj::FlxRotatedFrame_obj()
{
}

Dynamic FlxRotatedFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxRotatedFrame_obj::__mClass;

void FlxRotatedFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.frames.FlxRotatedFrame","\x38","\xc3","\xd8","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRotatedFrame_obj >;
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
} // end namespace layer
} // end namespace frames
