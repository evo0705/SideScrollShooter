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
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
namespace flixel{
namespace _system{

Void FlxBGSprite_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",18,0xa9844f6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(20)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1 = tmp->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("bg_graphic_","\xb1","\x39","\x19","\x0d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->makeGraphic((int)1,(int)1,(int)0,true,tmp1);
	HX_STACK_LINE(21)
	::flixel::util::FlxPoint tmp2 = this->scrollFactor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	tmp2->set(null(),null());
}
;
	return null();
}

//FlxBGSprite_obj::~FlxBGSprite_obj() { }

Dynamic FlxBGSprite_obj::__CreateEmpty() { return  new FlxBGSprite_obj; }
hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new()
{  hx::ObjectPtr< FlxBGSprite_obj > _result_ = new FlxBGSprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBGSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBGSprite_obj > _result_ = new FlxBGSprite_obj();
	_result_->__construct();
	return _result_;}

Void FlxBGSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",28,0xa9844f6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::_system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(30)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(31)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			while((true)){
				HX_STACK_LINE(33)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(33)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(33)
				if ((tmp1)){
					HX_STACK_LINE(33)
					break;
				}
				HX_STACK_LINE(33)
				::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(33)
				::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(33)
				++(_g);
				HX_STACK_LINE(35)
				bool tmp3 = camera->visible;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				if ((tmp6)){
					HX_STACK_LINE(35)
					bool tmp8 = camera->exists;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(35)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(35)
					tmp7 = !(tmp9);
				}
				else{
					HX_STACK_LINE(35)
					tmp7 = true;
				}
				HX_STACK_LINE(35)
				if ((tmp7)){
					HX_STACK_LINE(37)
					continue;
				}
				HX_STACK_LINE(40)
				::flixel::util::loaders::CachedGraphics tmp8 = this->cachedGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(40)
				bool tmp9 = this->isColored;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				int tmp10 = this->_blendInt;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(40)
				::flixel::_system::layer::DrawStackItem tmp11 = camera->getDrawStackItem(tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(40)
				drawItem = tmp11;
				HX_STACK_LINE(41)
				currDrawData = drawItem->__Field(HX_HCSTRING("drawData","\x4e","\x00","\xcd","\x56"), hx::paccDynamic );
				HX_STACK_LINE(42)
				currIndex = drawItem->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
				HX_STACK_LINE(44)
				::flixel::util::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				Float tmp13 = (camera->width * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				tmp12->set_x(tmp13);
				HX_STACK_LINE(45)
				::flixel::util::FlxPoint tmp14 = this->_point;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				Float tmp15 = (camera->height * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				tmp14->set_y(tmp15);
				HX_STACK_LINE(47)
				Float csx = camera->width;		HX_STACK_VAR(csx,"csx");
				HX_STACK_LINE(48)
				Float ssy = (int)0;		HX_STACK_VAR(ssy,"ssy");
				HX_STACK_LINE(49)
				Float ssx = (int)0;		HX_STACK_VAR(ssx,"ssx");
				HX_STACK_LINE(50)
				Float csy = camera->height;		HX_STACK_VAR(csy,"csy");
				HX_STACK_LINE(52)
				int tmp16 = (currIndex)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				::flixel::util::FlxPoint tmp17 = this->_point;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(52)
				currDrawData[tmp16] = tmp18;
				HX_STACK_LINE(53)
				int tmp19 = (currIndex)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(53)
				::flixel::util::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(53)
				Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(53)
				currDrawData[tmp19] = tmp21;
				HX_STACK_LINE(55)
				int tmp22 = (currIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(55)
				::flixel::_system::layer::frames::FlxFrame tmp23 = this->frame;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(55)
				int tmp24 = tmp23->__Field(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(55)
				currDrawData[tmp22] = tmp24;
				HX_STACK_LINE(57)
				int tmp25 = (currIndex)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(57)
				Float tmp26 = csx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(57)
				currDrawData[tmp25] = tmp26;
				HX_STACK_LINE(58)
				int tmp27 = (currIndex)++;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(58)
				Float tmp28 = ssx;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(58)
				currDrawData[tmp27] = tmp28;
				HX_STACK_LINE(59)
				int tmp29 = (currIndex)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(59)
				Float tmp30 = ssy;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(59)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(59)
				currDrawData[tmp29] = tmp31;
				HX_STACK_LINE(60)
				int tmp32 = (currIndex)++;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(60)
				Float tmp33 = csy;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(60)
				currDrawData[tmp32] = tmp33;
				HX_STACK_LINE(62)
				bool tmp34 = this->isColored;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(62)
				if ((tmp34)){
					HX_STACK_LINE(64)
					int tmp35 = (currIndex)++;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(64)
					Float tmp36 = this->_red;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(64)
					currDrawData[tmp35] = tmp36;
					HX_STACK_LINE(65)
					int tmp37 = (currIndex)++;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(65)
					Float tmp38 = this->_green;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(65)
					currDrawData[tmp37] = tmp38;
					HX_STACK_LINE(66)
					int tmp39 = (currIndex)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(66)
					Float tmp40 = this->_blue;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(66)
					currDrawData[tmp39] = tmp40;
				}
				HX_STACK_LINE(68)
				int tmp35 = (currIndex)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(68)
				Float tmp36 = this->alpha;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(68)
				currDrawData[tmp35] = tmp36;
				HX_STACK_LINE(69)
				drawItem->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = currIndex;
				HX_STACK_LINE(72)
				(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			}
		}
	}
return null();
}



FlxBGSprite_obj::FlxBGSprite_obj()
{
}

Dynamic FlxBGSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxBGSprite","\xcf","\x08","\x11","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBGSprite_obj >;
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
