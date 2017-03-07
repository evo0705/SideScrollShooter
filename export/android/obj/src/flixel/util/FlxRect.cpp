#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.util.FlxRect","new",0xa3a9426e,"flixel.util.FlxRect.new","flixel/util/FlxRect.hx",11,0x4d61f922)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(54)
	this->_inPool = false;
	HX_STACK_LINE(58)
	this->x = X;
	HX_STACK_LINE(58)
	this->y = Y;
	HX_STACK_LINE(58)
	this->width = Width;
	HX_STACK_LINE(58)
	this->height = Height;
	HX_STACK_LINE(58)
	hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > _result_ = new FlxRect_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > _result_ = new FlxRect_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxRect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxPooled_obj)) return operator ::flixel::interfaces::IFlxPooled_obj *();
	return super::__ToInterface(inType);
}

FlxRect_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxRect_obj >(this); }
FlxRect_obj::operator ::flixel::interfaces::IFlxPooled_obj *()
	{ return new ::flixel::interfaces::IFlxPooled_delegate_< FlxRect_obj >(this); }
Void FlxRect_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxRect","put",0xa3aad4dd,"flixel.util.FlxRect.put","flixel/util/FlxRect.hx",65,0x4d61f922)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		bool tmp = this->_inPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(68)
			this->_inPool = true;
			HX_STACK_LINE(69)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			tmp2->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,put,(void))

::flixel::util::FlxRect FlxRect_obj::setSize( Float Width,Float Height){
	HX_STACK_FRAME("flixel.util.FlxRect","setSize",0x416a7291,"flixel.util.FlxRect.setSize","flixel/util/FlxRect.hx",80,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(81)
	this->width = Width;
	HX_STACK_LINE(82)
	this->height = Height;
	HX_STACK_LINE(83)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,return )

::flixel::util::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRect","set",0xa3ad0db0,"flixel.util.FlxRect.set","flixel/util/FlxRect.hx",96,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(97)
		this->x = X;
		HX_STACK_LINE(98)
		this->y = Y;
		HX_STACK_LINE(99)
		this->width = Width;
		HX_STACK_LINE(100)
		this->height = Height;
		HX_STACK_LINE(101)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

::flixel::util::FlxRect FlxRect_obj::copyFrom( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyFrom",0x390d66f1,"flixel.util.FlxRect.copyFrom","flixel/util/FlxRect.hx",111,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(112)
	this->x = Rect->x;
	HX_STACK_LINE(113)
	this->y = Rect->y;
	HX_STACK_LINE(114)
	this->width = Rect->width;
	HX_STACK_LINE(115)
	this->height = Rect->height;
	HX_STACK_LINE(116)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::util::FlxRect FlxRect_obj::copyTo( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyTo",0x8c91e742,"flixel.util.FlxRect.copyTo","flixel/util/FlxRect.hx",126,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(127)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Rect->x = tmp;
	HX_STACK_LINE(128)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	Rect->y = tmp1;
	HX_STACK_LINE(129)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	Rect->width = tmp2;
	HX_STACK_LINE(130)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	Rect->height = tmp3;
	HX_STACK_LINE(131)
	::flixel::util::FlxRect tmp4 = Rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::util::FlxRect FlxRect_obj::copyFromFlash( ::openfl::_legacy::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyFromFlash",0x305c74ff,"flixel.util.FlxRect.copyFromFlash","flixel/util/FlxRect.hx",141,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(142)
	this->x = FlashRect->x;
	HX_STACK_LINE(143)
	this->y = FlashRect->y;
	HX_STACK_LINE(144)
	this->width = FlashRect->width;
	HX_STACK_LINE(145)
	this->height = FlashRect->height;
	HX_STACK_LINE(146)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::openfl::_legacy::geom::Rectangle FlxRect_obj::copyToFlash( ::openfl::_legacy::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.util.FlxRect","copyToFlash",0xaf702f0e,"flixel.util.FlxRect.copyToFlash","flixel/util/FlxRect.hx",156,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(157)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	FlashRect->x = tmp;
	HX_STACK_LINE(158)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	FlashRect->y = tmp1;
	HX_STACK_LINE(159)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	FlashRect->width = tmp2;
	HX_STACK_LINE(160)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	FlashRect->height = tmp3;
	HX_STACK_LINE(161)
	::openfl::_legacy::geom::Rectangle tmp4 = FlashRect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

bool FlxRect_obj::overlaps( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","overlaps",0xb5d72e3e,"flixel.util.FlxRect.overlaps","flixel/util/FlxRect.hx",171,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(172)
	Float tmp = (Rect->x + Rect->width);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	if ((tmp3)){
		HX_STACK_LINE(172)
		Float tmp5 = Rect->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(172)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(172)
		tmp4 = (tmp5 < tmp14);
	}
	else{
		HX_STACK_LINE(172)
		tmp4 = false;
	}
	HX_STACK_LINE(172)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(172)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(172)
	if ((tmp5)){
		HX_STACK_LINE(172)
		Float tmp7 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		tmp6 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(172)
		tmp6 = false;
	}
	HX_STACK_LINE(172)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(172)
	if ((tmp6)){
		HX_STACK_LINE(172)
		Float tmp8 = Rect->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(172)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		Float tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(172)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(172)
		tmp7 = (tmp8 < tmp14);
	}
	else{
		HX_STACK_LINE(172)
		tmp7 = false;
	}
	HX_STACK_LINE(172)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

bool FlxRect_obj::containsFlxPoint( ::flixel::util::FlxPoint Point){
	HX_STACK_FRAME("flixel.util.FlxRect","containsFlxPoint",0x8d30acef,"flixel.util.FlxRect.containsFlxPoint","flixel/util/FlxRect.hx",182,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_LINE(183)
	Float tmp = Point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Float tmp1 = Point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	bool tmp2 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp,tmp1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsFlxPoint,return )

::flixel::util::FlxRect FlxRect_obj::_union( ::flixel::util::FlxRect Rect){
	HX_STACK_FRAME("flixel.util.FlxRect","union",0xe007f69d,"flixel.util.FlxRect.union","flixel/util/FlxRect.hx",194,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(195)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	Float tmp1 = Rect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	Float minX = tmp2;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(196)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	Float tmp4 = Rect->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(196)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(196)
	Float minY = tmp5;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(197)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(197)
	Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	Float tmp9 = (Rect->x + Rect->width);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	Float maxX = tmp10;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(198)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(198)
	Float tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(198)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(198)
	Float tmp14 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(198)
	Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(198)
	Float maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(200)
	::flixel::util::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		this->x = minX;
		HX_STACK_LINE(200)
		this->y = minY;
		HX_STACK_LINE(200)
		Float tmp17 = (maxX - minX);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(200)
		this->width = tmp17;
		HX_STACK_LINE(200)
		Float tmp18 = (maxY - minY);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(200)
		this->height = tmp18;
		HX_STACK_LINE(200)
		tmp16 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(200)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

Void FlxRect_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxRect","destroy",0x5418be08,"flixel.util.FlxRect.destroy","flixel/util/FlxRect.hx",206,0x4d61f922)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,destroy,(void))

::String FlxRect_obj::toString( ){
	HX_STACK_FRAME("flixel.util.FlxRect","toString",0xa91b2bde,"flixel.util.FlxRect.toString","flixel/util/FlxRect.hx",212,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::flixel::util::FlxPool tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(214)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(214)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		_this->value = tmp3;
		HX_STACK_LINE(214)
		tmp = _this;
	}
	HX_STACK_LINE(215)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::flixel::util::FlxPool tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(215)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(215)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		_this->value = tmp4;
		HX_STACK_LINE(215)
		tmp1 = _this;
	}
	HX_STACK_LINE(216)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		::flixel::util::FlxPool tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(216)
		_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
		HX_STACK_LINE(216)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		_this->value = tmp5;
		HX_STACK_LINE(216)
		tmp2 = _this;
	}
	HX_STACK_LINE(217)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		::flixel::util::FlxPool tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(217)
		_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
		HX_STACK_LINE(217)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		_this->value = tmp6;
		HX_STACK_LINE(217)
		tmp3 = _this;
	}
	HX_STACK_LINE(213)
	::String tmp4 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(213)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_left",0x38171ec2,"flixel.util.FlxRect.get_left","flixel/util/FlxRect.hx",221,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Float FlxRect_obj::set_left( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_left",0xe6747836,"flixel.util.FlxRect.set_left","flixel/util/FlxRect.hx",226,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(227)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	hx::SubEq(this->width,tmp2);
	HX_STACK_LINE(228)
	Float tmp3 = this->x = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_right",0x5330d8c1,"flixel.util.FlxRect.get_right","flixel/util/FlxRect.hx",232,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_right( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_right",0x3681c4cd,"flixel.util.FlxRect.set_right","flixel/util/FlxRect.hx",237,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(238)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	this->width = tmp2;
	HX_STACK_LINE(239)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_top",0x565fc03a,"flixel.util.FlxRect.get_top","flixel/util/FlxRect.hx",243,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_top( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_top",0x49615146,"flixel.util.FlxRect.set_top","flixel/util/FlxRect.hx",248,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(249)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	hx::SubEq(this->height,tmp2);
	HX_STACK_LINE(250)
	Float tmp3 = this->y = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_FRAME("flixel.util.FlxRect","get_bottom",0x8edf6266,"flixel.util.FlxRect.get_bottom","flixel/util/FlxRect.hx",254,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_bottom( Float Value){
	HX_STACK_FRAME("flixel.util.FlxRect","set_bottom",0x925d00da,"flixel.util.FlxRect.set_bottom","flixel/util/FlxRect.hx",259,0x4d61f922)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(260)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	this->height = tmp2;
	HX_STACK_LINE(261)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

::flixel::util::FlxPool FlxRect_obj::_pool;

::flixel::util::FlxRect FlxRect_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.util.FlxRect","get",0xa3a3f2a4,"flixel.util.FlxRect.get","flixel/util/FlxRect.hx",23,0x4d61f922)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(24)
		::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(24)
			_this->x = X;
			HX_STACK_LINE(24)
			_this->y = Y;
			HX_STACK_LINE(24)
			_this->width = Width;
			HX_STACK_LINE(24)
			_this->height = Height;
			HX_STACK_LINE(24)
			tmp = _this;
		}
		HX_STACK_LINE(24)
		::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(25)
		rect->_inPool = false;
		HX_STACK_LINE(26)
		::flixel::util::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,get,return )


FlxRect_obj::FlxRect_obj()
{
}

Dynamic FlxRect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsFlxPoint") ) { return containsFlxPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
	}
	return false;
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool >(); return true; }
	}
	return false;
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxRect_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_inPool),HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool*/ ,(void *) &FlxRect_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("copyFromFlash","\x71","\xa5","\xda","\x18"),
	HX_HCSTRING("copyToFlash","\x00","\xff","\x24","\x25"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("containsFlxPoint","\xbd","\xcf","\x0a","\x8d"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#endif

hx::Class FlxRect_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxRect","\x7c","\x33","\xa8","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRect_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRect_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRect_obj >;
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

void FlxRect_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_obj::__new(hx::ClassOf< ::flixel::util::FlxRect >());
}

} // end namespace flixel
} // end namespace util
