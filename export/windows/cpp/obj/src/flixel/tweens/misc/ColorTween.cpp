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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.ColorTween","new",0x82c0df68,"flixel.tweens.misc.ColorTween.new","flixel/tweens/misc/ColorTween.hx",10,0xe14ed287)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(13)
	this->alpha = ((Float)1);
	HX_STACK_LINE(10)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< ColorTween_obj > _result_ = new ColorTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > _result_ = new ColorTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ColorTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","destroy",0x7f5b6002,"flixel.tweens.misc.ColorTween.destroy","flixel/tweens/misc/ColorTween.hx",47,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		this->super::destroy();
		HX_STACK_LINE(49)
		this->sprite = null();
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,::flixel::FlxSprite Sprite){
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_FRAME("flixel.tweens.misc.ColorTween","tween",0xdc858b73,"flixel.tweens.misc.ColorTween.tween","flixel/tweens/misc/ColorTween.hx",64,0xe14ed287)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FromColor,"FromColor")
	HX_STACK_ARG(ToColor,"ToColor")
	HX_STACK_ARG(FromAlpha,"FromAlpha")
	HX_STACK_ARG(ToAlpha,"ToAlpha")
	HX_STACK_ARG(Sprite,"Sprite")
{
		HX_STACK_LINE(65)
		hx::AndEq(FromColor,(int)16777215);
		HX_STACK_LINE(66)
		hx::AndEq(ToColor,(int)16777215);
		HX_STACK_LINE(67)
		this->color = FromColor;
		HX_STACK_LINE(68)
		int tmp = (int(FromColor) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->red = tmp1;
		HX_STACK_LINE(69)
		int tmp2 = (int(FromColor) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		this->green = tmp3;
		HX_STACK_LINE(70)
		int tmp4 = (int(FromColor) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		this->blue = tmp4;
		HX_STACK_LINE(71)
		int tmp5 = this->red;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		this->_startR = tmp6;
		HX_STACK_LINE(72)
		int tmp7 = this->green;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		this->_startG = tmp8;
		HX_STACK_LINE(73)
		int tmp9 = this->blue;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		this->_startB = tmp10;
		HX_STACK_LINE(74)
		int tmp11 = (int(ToColor) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		Float tmp14 = this->_startR;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(74)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(74)
		this->_rangeR = tmp15;
		HX_STACK_LINE(75)
		int tmp16 = (int(ToColor) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(75)
		Float tmp18 = (Float(tmp17) / Float((int)255));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(75)
		Float tmp19 = this->_startG;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(75)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(75)
		this->_rangeG = tmp20;
		HX_STACK_LINE(76)
		int tmp21 = (int(ToColor) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(76)
		Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(76)
		Float tmp23 = this->_startB;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(76)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(76)
		this->_rangeB = tmp24;
		HX_STACK_LINE(77)
		Float tmp25 = this->alpha = FromAlpha;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(77)
		this->_startA = tmp25;
		HX_STACK_LINE(78)
		Float tmp26 = ToAlpha;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(78)
		Float tmp27 = this->alpha;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(78)
		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(78)
		this->_rangeA = tmp28;
		HX_STACK_LINE(79)
		this->duration = Duration;
		HX_STACK_LINE(80)
		this->sprite = Sprite;
		HX_STACK_LINE(81)
		this->start();
		HX_STACK_LINE(82)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(ColorTween_obj,tween,return )

Void ColorTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.ColorTween","update",0x76358c01,"flixel.tweens.misc.ColorTween.update","flixel/tweens/misc/ColorTween.hx",86,0xe14ed287)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::update();
		HX_STACK_LINE(88)
		Float tmp = this->_startA;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Float tmp1 = this->_rangeA;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		this->alpha = tmp4;
		HX_STACK_LINE(89)
		Float tmp5 = this->_startR;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Float tmp6 = this->_rangeR;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		Float tmp10 = (tmp9 * (int)255);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		this->red = tmp11;
		HX_STACK_LINE(90)
		Float tmp12 = this->_startG;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(90)
		Float tmp13 = this->_rangeG;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(90)
		Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(90)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(90)
		Float tmp17 = (tmp16 * (int)255);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(90)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(90)
		this->green = tmp18;
		HX_STACK_LINE(91)
		Float tmp19 = this->_startB;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(91)
		Float tmp20 = this->_rangeB;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(91)
		Float tmp21 = this->scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(91)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(91)
		Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(91)
		Float tmp24 = (tmp23 * (int)255);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(91)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(91)
		this->blue = tmp25;
		HX_STACK_LINE(92)
		int tmp26 = this->red;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(92)
		int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(92)
		int tmp28 = this->green;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(92)
		int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(92)
		int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(92)
		int tmp31 = this->blue;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(92)
		int tmp32 = (int(tmp30) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(92)
		this->color = tmp32;
		HX_STACK_LINE(94)
		::flixel::FlxSprite tmp33 = this->sprite;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(94)
		bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(94)
		if ((tmp34)){
			HX_STACK_LINE(96)
			::flixel::FlxSprite tmp35 = this->sprite;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(96)
			int tmp36 = this->color;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(96)
			tmp35->set_color(tmp36);
			HX_STACK_LINE(97)
			::flixel::FlxSprite tmp37 = this->sprite;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(97)
			Float tmp38 = this->alpha;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(97)
			tmp37->set_alpha(tmp38);
		}
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(_startA,"_startA");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_rangeA,"_rangeA");
	HX_MARK_MEMBER_NAME(_rangeR,"_rangeR");
	HX_MARK_MEMBER_NAME(_rangeG,"_rangeG");
	HX_MARK_MEMBER_NAME(_rangeB,"_rangeB");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(_startA,"_startA");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_rangeA,"_rangeA");
	HX_VISIT_MEMBER_NAME(_rangeR,"_rangeR");
	HX_VISIT_MEMBER_NAME(_rangeG,"_rangeG");
	HX_VISIT_MEMBER_NAME(_rangeB,"_rangeB");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startA") ) { return _startA; }
		if (HX_FIELD_EQ(inName,"_startR") ) { return _startR; }
		if (HX_FIELD_EQ(inName,"_startG") ) { return _startG; }
		if (HX_FIELD_EQ(inName,"_startB") ) { return _startB; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { return _rangeA; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { return _rangeR; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { return _rangeG; }
		if (HX_FIELD_EQ(inName,"_rangeB") ) { return _rangeB; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_startA") ) { _startA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { _rangeA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { _rangeR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { _rangeG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeB") ) { _rangeB=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("red","\x51","\xd9","\x56","\x00"));
	outFields->push(HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"));
	outFields->push(HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"));
	outFields->push(HX_HCSTRING("_startA","\x3e","\x73","\x71","\x74"));
	outFields->push(HX_HCSTRING("_startR","\x4f","\x73","\x71","\x74"));
	outFields->push(HX_HCSTRING("_startG","\x44","\x73","\x71","\x74"));
	outFields->push(HX_HCSTRING("_startB","\x3f","\x73","\x71","\x74"));
	outFields->push(HX_HCSTRING("_rangeA","\x83","\x71","\x08","\x26"));
	outFields->push(HX_HCSTRING("_rangeR","\x94","\x71","\x08","\x26"));
	outFields->push(HX_HCSTRING("_rangeG","\x89","\x71","\x08","\x26"));
	outFields->push(HX_HCSTRING("_rangeB","\x84","\x71","\x08","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ColorTween_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(ColorTween_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,red),HX_HCSTRING("red","\x51","\xd9","\x56","\x00")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,green),HX_HCSTRING("green","\xc3","\x0e","\xed","\x99")},
	{hx::fsInt,(int)offsetof(ColorTween_obj,blue),HX_HCSTRING("blue","\x9a","\x42","\x19","\x41")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startA),HX_HCSTRING("_startA","\x3e","\x73","\x71","\x74")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startR),HX_HCSTRING("_startR","\x4f","\x73","\x71","\x74")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startG),HX_HCSTRING("_startG","\x44","\x73","\x71","\x74")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_startB),HX_HCSTRING("_startB","\x3f","\x73","\x71","\x74")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeA),HX_HCSTRING("_rangeA","\x83","\x71","\x08","\x26")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeR),HX_HCSTRING("_rangeR","\x94","\x71","\x08","\x26")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeG),HX_HCSTRING("_rangeG","\x89","\x71","\x08","\x26")},
	{hx::fsFloat,(int)offsetof(ColorTween_obj,_rangeB),HX_HCSTRING("_rangeB","\x84","\x71","\x08","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("red","\x51","\xd9","\x56","\x00"),
	HX_HCSTRING("green","\xc3","\x0e","\xed","\x99"),
	HX_HCSTRING("blue","\x9a","\x42","\x19","\x41"),
	HX_HCSTRING("_startA","\x3e","\x73","\x71","\x74"),
	HX_HCSTRING("_startR","\x4f","\x73","\x71","\x74"),
	HX_HCSTRING("_startG","\x44","\x73","\x71","\x74"),
	HX_HCSTRING("_startB","\x3f","\x73","\x71","\x74"),
	HX_HCSTRING("_rangeA","\x83","\x71","\x08","\x26"),
	HX_HCSTRING("_rangeR","\x94","\x71","\x08","\x26"),
	HX_HCSTRING("_rangeG","\x89","\x71","\x08","\x26"),
	HX_HCSTRING("_rangeB","\x84","\x71","\x08","\x26"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.ColorTween","\x76","\x4b","\xbb","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColorTween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTween_obj >;
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
} // end namespace tweens
} // end namespace misc
