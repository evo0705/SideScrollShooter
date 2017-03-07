#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapUtil
#include <flixel/util/FlxBitmapUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxBitmapUtil_obj::__construct()
{
	return null();
}

//FlxBitmapUtil_obj::~FlxBitmapUtil_obj() { }

Dynamic FlxBitmapUtil_obj::__CreateEmpty() { return  new FlxBitmapUtil_obj; }
hx::ObjectPtr< FlxBitmapUtil_obj > FlxBitmapUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapUtil_obj > _result_ = new FlxBitmapUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBitmapUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapUtil_obj > _result_ = new FlxBitmapUtil_obj();
	_result_->__construct();
	return _result_;}

Void FlxBitmapUtil_obj::merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::display::BitmapData destBitmapData,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapUtil","merge",0xc3f58073,"flixel.util.FlxBitmapUtil.merge","flixel/util/FlxBitmapUtil.hx",10,0x286986d5)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(14)
		Float tmp = destPoint->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		int tmp1 = destBitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(14)
		if ((tmp4)){
			HX_STACK_LINE(15)
			Float tmp6 = destPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(15)
			int tmp7 = destBitmapData->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(15)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(15)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(15)
			tmp5 = (tmp6 >= tmp9);
		}
		else{
			HX_STACK_LINE(14)
			tmp5 = true;
		}
		HX_STACK_LINE(14)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(14)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(14)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(14)
		if ((tmp7)){
			HX_STACK_LINE(16)
			Float tmp9 = sourceRect->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16)
			int tmp10 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(16)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(16)
			tmp8 = (tmp9 >= tmp12);
		}
		else{
			HX_STACK_LINE(14)
			tmp8 = true;
		}
		HX_STACK_LINE(14)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(14)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(14)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(14)
		if ((tmp10)){
			HX_STACK_LINE(17)
			Float tmp12 = sourceRect->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(17)
			int tmp13 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(17)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(17)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(17)
			tmp11 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(14)
			tmp11 = true;
		}
		HX_STACK_LINE(14)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(14)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(14)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(14)
		if ((tmp13)){
			HX_STACK_LINE(18)
			Float tmp15 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(18)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(18)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(18)
			tmp14 = (tmp17 <= (int)0);
		}
		else{
			HX_STACK_LINE(14)
			tmp14 = true;
		}
		HX_STACK_LINE(14)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(14)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(14)
		if ((tmp15)){
			HX_STACK_LINE(19)
			Float tmp17 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(19)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(19)
			tmp16 = (tmp18 <= (int)0);
		}
		else{
			HX_STACK_LINE(14)
			tmp16 = true;
		}
		HX_STACK_LINE(14)
		if ((tmp16)){
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			Float tmp17 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(25)
			int tmp18 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(25)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(25)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(25)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(25)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(25)
			if ((tmp21)){
				HX_STACK_LINE(26)
				Float tmp23 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(26)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(26)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(26)
				int tmp26 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(26)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(26)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(26)
				tmp22 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(25)
				tmp22 = true;
			}
			HX_STACK_LINE(25)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(25)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(25)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(25)
			if ((tmp24)){
				HX_STACK_LINE(27)
				tmp25 = (sourceRect->x < (int)0);
			}
			else{
				HX_STACK_LINE(25)
				tmp25 = true;
			}
			HX_STACK_LINE(25)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(25)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(25)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(25)
			if ((tmp27)){
				HX_STACK_LINE(28)
				tmp28 = (sourceRect->y < (int)0);
			}
			else{
				HX_STACK_LINE(25)
				tmp28 = true;
			}
			HX_STACK_LINE(25)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(25)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(25)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(25)
			if ((tmp30)){
				HX_STACK_LINE(29)
				tmp31 = (destPoint->x < (int)0);
			}
			else{
				HX_STACK_LINE(25)
				tmp31 = true;
			}
			HX_STACK_LINE(25)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(25)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(25)
			if ((tmp32)){
				HX_STACK_LINE(30)
				tmp33 = (destPoint->y < (int)0);
			}
			else{
				HX_STACK_LINE(25)
				tmp33 = true;
			}
			HX_STACK_LINE(25)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(25)
			if ((tmp34)){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(32)
			Float tmp35 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(32)
			int tmp36 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(32)
			bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(32)
			if ((tmp37)){
				HX_STACK_LINE(32)
				int tmp38 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(32)
				Float tmp39 = sourceRect->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(32)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(32)
				sourceRect->width = tmp40;
			}
			HX_STACK_LINE(33)
			Float tmp38 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(33)
			int tmp39 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(33)
			bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(33)
			if ((tmp40)){
				HX_STACK_LINE(33)
				int tmp41 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(33)
				Float tmp42 = sourceRect->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(33)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(33)
				sourceRect->height = tmp43;
			}
			HX_STACK_LINE(35)
			bool tmp41 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(35)
			if ((tmp41)){
				HX_STACK_LINE(37)
				Float tmp42 = (destPoint->x - sourceRect->x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(37)
				destPoint->x = tmp42;
				HX_STACK_LINE(38)
				Float tmp43 = (sourceRect->width + sourceRect->x);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(38)
				sourceRect->width = tmp43;
				HX_STACK_LINE(39)
				sourceRect->x = (int)0;
			}
			HX_STACK_LINE(42)
			bool tmp42 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(42)
			if ((tmp42)){
				HX_STACK_LINE(44)
				Float tmp43 = (destPoint->y - sourceRect->y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(44)
				destPoint->y = tmp43;
				HX_STACK_LINE(45)
				Float tmp44 = (sourceRect->height + sourceRect->y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(45)
				sourceRect->height = tmp44;
				HX_STACK_LINE(46)
				sourceRect->y = (int)0;
			}
			HX_STACK_LINE(49)
			Float tmp43 = destPoint->x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(49)
			int tmp44 = destBitmapData->get_width();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(49)
			bool tmp45 = (tmp43 >= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(49)
			bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(49)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(49)
			if ((tmp46)){
				HX_STACK_LINE(49)
				Float tmp48 = destPoint->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(49)
				int tmp49 = destBitmapData->get_height();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(49)
				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(49)
				tmp47 = (tmp48 >= tmp50);
			}
			else{
				HX_STACK_LINE(49)
				tmp47 = true;
			}
			HX_STACK_LINE(49)
			if ((tmp47)){
				HX_STACK_LINE(49)
				return null();
			}
			HX_STACK_LINE(51)
			bool tmp48 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(51)
			if ((tmp48)){
				HX_STACK_LINE(53)
				Float tmp49 = (sourceRect->x - destPoint->x);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(53)
				sourceRect->x = tmp49;
				HX_STACK_LINE(54)
				Float tmp50 = (sourceRect->width + destPoint->x);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(54)
				sourceRect->width = tmp50;
				HX_STACK_LINE(55)
				destPoint->x = (int)0;
			}
			HX_STACK_LINE(58)
			bool tmp49 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(58)
			if ((tmp49)){
				HX_STACK_LINE(60)
				Float tmp50 = (sourceRect->y - destPoint->y);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(60)
				sourceRect->y = tmp50;
				HX_STACK_LINE(61)
				Float tmp51 = (sourceRect->height + destPoint->y);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(61)
				sourceRect->height = tmp51;
				HX_STACK_LINE(62)
				destPoint->y = (int)0;
			}
		}
		HX_STACK_LINE(66)
		bool tmp17 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(66)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(66)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(66)
		if ((tmp18)){
			HX_STACK_LINE(66)
			tmp19 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(66)
			tmp19 = true;
		}
		HX_STACK_LINE(66)
		if ((tmp19)){
			HX_STACK_LINE(66)
			return null();
		}
		HX_STACK_LINE(68)
		Float tmp20 = sourceRect->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(68)
		int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(68)
		int startSourceX = tmp21;		HX_STACK_VAR(startSourceX,"startSourceX");
		HX_STACK_LINE(69)
		Float tmp22 = sourceRect->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(69)
		int startSourceY = tmp23;		HX_STACK_VAR(startSourceY,"startSourceY");
		HX_STACK_LINE(71)
		Float tmp24 = sourceRect->width;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(71)
		int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(71)
		int width = tmp25;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(72)
		Float tmp26 = sourceRect->height;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(72)
		int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(72)
		int height = tmp27;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(74)
		int sourceX = startSourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(75)
		int sourceY = startSourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(77)
		Float tmp28 = destPoint->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(77)
		int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(77)
		int destX = tmp29;		HX_STACK_VAR(destX,"destX");
		HX_STACK_LINE(78)
		Float tmp30 = destPoint->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(78)
		int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(78)
		int destY = tmp31;		HX_STACK_VAR(destY,"destY");
		HX_STACK_LINE(80)
		int currX = destX;		HX_STACK_VAR(currX,"currX");
		HX_STACK_LINE(81)
		int currY = destY;		HX_STACK_VAR(currY,"currY");
		HX_STACK_LINE(83)
		int sourceColor;		HX_STACK_VAR(sourceColor,"sourceColor");
		HX_STACK_LINE(84)
		int destColor;		HX_STACK_VAR(destColor,"destColor");
		HX_STACK_LINE(86)
		int sourceRed;		HX_STACK_VAR(sourceRed,"sourceRed");
		HX_STACK_LINE(87)
		int sourceGreen;		HX_STACK_VAR(sourceGreen,"sourceGreen");
		HX_STACK_LINE(88)
		int sourceBlue;		HX_STACK_VAR(sourceBlue,"sourceBlue");
		HX_STACK_LINE(89)
		int sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
		HX_STACK_LINE(91)
		int destRed;		HX_STACK_VAR(destRed,"destRed");
		HX_STACK_LINE(92)
		int destGreen;		HX_STACK_VAR(destGreen,"destGreen");
		HX_STACK_LINE(93)
		int destBlue;		HX_STACK_VAR(destBlue,"destBlue");
		HX_STACK_LINE(94)
		int destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
		HX_STACK_LINE(96)
		int resultRed;		HX_STACK_VAR(resultRed,"resultRed");
		HX_STACK_LINE(97)
		int resultGreen;		HX_STACK_VAR(resultGreen,"resultGreen");
		HX_STACK_LINE(98)
		int resultBlue;		HX_STACK_VAR(resultBlue,"resultBlue");
		HX_STACK_LINE(99)
		int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
		HX_STACK_LINE(101)
		int resultColor = (int)0;		HX_STACK_VAR(resultColor,"resultColor");
		HX_STACK_LINE(102)
		destBitmapData->lock();
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp32 = (_g < width);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(105)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(105)
				if ((tmp33)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp34 = (_g)++;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(105)
				int i = tmp34;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(107)
					while((true)){
						HX_STACK_LINE(107)
						bool tmp35 = (_g1 < height);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(107)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(107)
						if ((tmp36)){
							HX_STACK_LINE(107)
							break;
						}
						HX_STACK_LINE(107)
						int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(107)
						int j = tmp37;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(109)
						int tmp38 = (startSourceX + i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(109)
						sourceX = tmp38;
						HX_STACK_LINE(110)
						int tmp39 = (startSourceY + j);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(110)
						sourceY = tmp39;
						HX_STACK_LINE(112)
						int tmp40 = (destX + i);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(112)
						currX = tmp40;
						HX_STACK_LINE(113)
						int tmp41 = (destY + j);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(113)
						currY = tmp41;
						HX_STACK_LINE(115)
						int tmp42 = sourceX;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(115)
						int tmp43 = sourceY;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(115)
						int tmp44 = sourceBitmapData->getPixel32(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(115)
						sourceColor = tmp44;
						HX_STACK_LINE(116)
						int tmp45 = currX;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(116)
						int tmp46 = currY;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(116)
						int tmp47 = destBitmapData->getPixel32(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(116)
						destColor = tmp47;
						HX_STACK_LINE(119)
						int tmp48 = (int(sourceColor) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(119)
						int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(119)
						sourceRed = tmp49;
						HX_STACK_LINE(120)
						int tmp50 = (int(sourceColor) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(120)
						int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(120)
						sourceGreen = tmp51;
						HX_STACK_LINE(121)
						int tmp52 = (int(sourceColor) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(121)
						sourceBlue = tmp52;
						HX_STACK_LINE(122)
						int tmp53 = (int(sourceColor) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(122)
						int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(122)
						sourceAlpha = tmp54;
						HX_STACK_LINE(124)
						int tmp55 = (int(destColor) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(124)
						int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(124)
						destRed = tmp56;
						HX_STACK_LINE(125)
						int tmp57 = (int(destColor) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(125)
						int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(125)
						destGreen = tmp58;
						HX_STACK_LINE(126)
						int tmp59 = (int(destColor) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(126)
						destBlue = tmp59;
						HX_STACK_LINE(127)
						int tmp60 = (int(destColor) >> int((int)24));		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(127)
						int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(127)
						destAlpha = tmp61;
						HX_STACK_LINE(130)
						int tmp62 = (sourceRed * redMultiplier);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(130)
						int tmp63 = destRed;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(130)
						int tmp64 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(130)
						int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(130)
						int tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(130)
						Float tmp67 = (Float(tmp66) / Float((int)256));		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(130)
						int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(130)
						resultRed = tmp68;
						HX_STACK_LINE(131)
						int tmp69 = (sourceGreen * greenMultiplier);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(131)
						int tmp70 = destGreen;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(131)
						int tmp71 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(131)
						int tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(131)
						int tmp73 = (tmp69 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(131)
						Float tmp74 = (Float(tmp73) / Float((int)256));		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(131)
						int tmp75 = ::Std_obj::_int(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(131)
						resultGreen = tmp75;
						HX_STACK_LINE(132)
						int tmp76 = (sourceBlue * blueMultiplier);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(132)
						int tmp77 = destBlue;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(132)
						int tmp78 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(132)
						int tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(132)
						int tmp80 = (tmp76 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(132)
						Float tmp81 = (Float(tmp80) / Float((int)256));		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(132)
						int tmp82 = ::Std_obj::_int(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(132)
						resultBlue = tmp82;
						HX_STACK_LINE(133)
						int tmp83 = (sourceAlpha * alphaMultiplier);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(133)
						int tmp84 = destAlpha;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(133)
						int tmp85 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(133)
						int tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(133)
						int tmp87 = (tmp83 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(133)
						Float tmp88 = (Float(tmp87) / Float((int)256));		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(133)
						int tmp89 = ::Std_obj::_int(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(133)
						resultAlpha = tmp89;
						HX_STACK_LINE(136)
						int tmp90 = (int(resultAlpha) << int((int)24));		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(136)
						int tmp91 = (int(resultRed) << int((int)16));		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(136)
						int tmp92 = (int(tmp90) | int(tmp91));		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(136)
						int tmp93 = (int(resultGreen) << int((int)8));		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(136)
						int tmp94 = (int(tmp92) | int(tmp93));		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(136)
						int tmp95 = resultBlue;		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(136)
						int tmp96 = (int(tmp94) | int(tmp95));		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(136)
						resultColor = tmp96;
						HX_STACK_LINE(139)
						int tmp97 = currX;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(139)
						int tmp98 = currY;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(139)
						int tmp99 = resultColor;		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(139)
						destBitmapData->setPixel32(tmp97,tmp98,tmp99);
					}
				}
			}
		}
		HX_STACK_LINE(142)
		destBitmapData->unlock(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapUtil_obj,merge,(void))

int FlxBitmapUtil_obj::mergeColorComponent( int source,int dest,int multiplier){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","mergeColorComponent",0xc4f472ad,"flixel.util.FlxBitmapUtil.mergeColorComponent","flixel/util/FlxBitmapUtil.hx",147,0x286986d5)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(multiplier,"multiplier")
	HX_STACK_LINE(148)
	int tmp = (source * multiplier);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = dest;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	int tmp2 = ((int)256 - multiplier);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	Float tmp5 = (Float(tmp4) / Float((int)256));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(148)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapUtil_obj,mergeColorComponent,return )

Dynamic FlxBitmapUtil_obj::compare( ::openfl::_legacy::display::BitmapData Bitmap1,::openfl::_legacy::display::BitmapData Bitmap2){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","compare",0x51571b20,"flixel.util.FlxBitmapUtil.compare","flixel/util/FlxBitmapUtil.hx",152,0x286986d5)
	HX_STACK_ARG(Bitmap1,"Bitmap1")
	HX_STACK_ARG(Bitmap2,"Bitmap2")
	HX_STACK_LINE(156)
	bool tmp = (Bitmap1 == Bitmap2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	if ((tmp)){
		HX_STACK_LINE(158)
		return (int)0;
	}
	HX_STACK_LINE(160)
	int tmp1 = Bitmap1->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	int tmp2 = Bitmap2->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	if ((tmp3)){
		HX_STACK_LINE(162)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(164)
		int tmp4 = Bitmap1->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		int tmp5 = Bitmap2->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		if ((tmp6)){
			HX_STACK_LINE(166)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(170)
			int tmp7 = Bitmap1->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			int width = tmp7;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(171)
			int tmp8 = Bitmap1->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			int height = tmp8;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(172)
			::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			::openfl::_legacy::display::BitmapData result = tmp9;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(173)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(175)
			int pixel1;		HX_STACK_VAR(pixel1,"pixel1");
			HX_STACK_LINE(175)
			int pixel2;		HX_STACK_VAR(pixel2,"pixel2");
			HX_STACK_LINE(176)
			int rgb1;		HX_STACK_VAR(rgb1,"rgb1");
			HX_STACK_LINE(176)
			int rgb2;		HX_STACK_VAR(rgb2,"rgb2");
			HX_STACK_LINE(177)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(177)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(177)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(178)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(178)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(178)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(179)
			int alpha1;		HX_STACK_VAR(alpha1,"alpha1");
			HX_STACK_LINE(179)
			int alpha2;		HX_STACK_VAR(alpha2,"alpha2");
			HX_STACK_LINE(180)
			int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
			HX_STACK_LINE(180)
			int resultColor;		HX_STACK_VAR(resultColor,"resultColor");
			HX_STACK_LINE(181)
			int resultR;		HX_STACK_VAR(resultR,"resultR");
			HX_STACK_LINE(181)
			int resultG;		HX_STACK_VAR(resultG,"resultG");
			HX_STACK_LINE(181)
			int resultB;		HX_STACK_VAR(resultB,"resultB");
			HX_STACK_LINE(182)
			int diffR;		HX_STACK_VAR(diffR,"diffR");
			HX_STACK_LINE(182)
			int diffG;		HX_STACK_VAR(diffG,"diffG");
			HX_STACK_LINE(182)
			int diffB;		HX_STACK_VAR(diffB,"diffB");
			HX_STACK_LINE(182)
			int diffA;		HX_STACK_VAR(diffA,"diffA");
			HX_STACK_LINE(183)
			bool checkAlpha = true;		HX_STACK_VAR(checkAlpha,"checkAlpha");
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(185)
				while((true)){
					HX_STACK_LINE(185)
					bool tmp10 = (_g < width);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(185)
					if ((tmp11)){
						HX_STACK_LINE(185)
						break;
					}
					HX_STACK_LINE(185)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(185)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(187)
					{
						HX_STACK_LINE(187)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(187)
						while((true)){
							HX_STACK_LINE(187)
							bool tmp13 = (_g1 < height);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(187)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(187)
							if ((tmp14)){
								HX_STACK_LINE(187)
								break;
							}
							HX_STACK_LINE(187)
							int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(187)
							int j = tmp15;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(189)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(189)
							int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(189)
							int tmp18 = Bitmap1->getPixel32(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(189)
							pixel1 = tmp18;
							HX_STACK_LINE(190)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(190)
							int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(190)
							int tmp21 = Bitmap2->getPixel32(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(190)
							pixel2 = tmp21;
							HX_STACK_LINE(192)
							bool tmp22 = (pixel1 != pixel2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(192)
							if ((tmp22)){
								HX_STACK_LINE(194)
								identical = false;
								HX_STACK_LINE(195)
								checkAlpha = true;
								HX_STACK_LINE(197)
								int tmp23 = (int(pixel1) & int((int)16777215));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(197)
								rgb1 = tmp23;
								HX_STACK_LINE(198)
								int tmp24 = (int(pixel2) & int((int)16777215));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(198)
								rgb2 = tmp24;
								HX_STACK_LINE(200)
								bool tmp25 = (rgb1 != rgb2);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(200)
								if ((tmp25)){
									HX_STACK_LINE(202)
									int tmp26 = (int(pixel1) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(202)
									int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(202)
									r1 = tmp27;
									HX_STACK_LINE(203)
									int tmp28 = (int(pixel1) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(203)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(203)
									g1 = tmp29;
									HX_STACK_LINE(204)
									int tmp30 = (int(pixel1) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(204)
									b1 = tmp30;
									HX_STACK_LINE(206)
									int tmp31 = (int(pixel2) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(206)
									int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(206)
									r2 = tmp32;
									HX_STACK_LINE(207)
									int tmp33 = (int(pixel2) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(207)
									int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(207)
									g2 = tmp34;
									HX_STACK_LINE(208)
									int tmp35 = (int(pixel2) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(208)
									b2 = tmp35;
									HX_STACK_LINE(210)
									int tmp36 = (r1 - r2);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(210)
									diffR = tmp36;
									HX_STACK_LINE(211)
									int tmp37 = (g1 - g2);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(211)
									diffG = tmp37;
									HX_STACK_LINE(212)
									int tmp38 = (b1 - b2);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(212)
									diffB = tmp38;
									HX_STACK_LINE(214)
									bool tmp39 = (diffR >= (int)0);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(214)
									int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(214)
									if ((tmp39)){
										HX_STACK_LINE(214)
										tmp40 = diffR;
									}
									else{
										HX_STACK_LINE(214)
										tmp40 = ((int)256 + diffR);
									}
									HX_STACK_LINE(214)
									resultR = tmp40;
									HX_STACK_LINE(215)
									bool tmp41 = (diffG >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(215)
									int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(215)
									if ((tmp41)){
										HX_STACK_LINE(215)
										tmp42 = diffG;
									}
									else{
										HX_STACK_LINE(215)
										tmp42 = ((int)256 + diffG);
									}
									HX_STACK_LINE(215)
									resultG = tmp42;
									HX_STACK_LINE(216)
									bool tmp43 = (diffB >= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(216)
									int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(216)
									if ((tmp43)){
										HX_STACK_LINE(216)
										tmp44 = diffB;
									}
									else{
										HX_STACK_LINE(216)
										tmp44 = ((int)256 + diffB);
									}
									HX_STACK_LINE(216)
									resultB = tmp44;
									HX_STACK_LINE(218)
									int tmp45 = (int)-16777216;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(218)
									int tmp46 = (int(resultR) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(218)
									int tmp47 = (int(tmp45) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(218)
									int tmp48 = (int(resultG) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(218)
									int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(218)
									int tmp50 = resultB;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(218)
									int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(218)
									resultColor = tmp51;
									HX_STACK_LINE(219)
									int tmp52 = i;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(219)
									int tmp53 = j;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(219)
									int tmp54 = resultColor;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(219)
									result->setPixel32(tmp52,tmp53,tmp54);
									HX_STACK_LINE(221)
									checkAlpha = false;
								}
								HX_STACK_LINE(224)
								bool tmp26 = checkAlpha;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(224)
								if ((tmp26)){
									HX_STACK_LINE(226)
									int tmp27 = (int(pixel1) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(226)
									int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(226)
									alpha1 = tmp28;
									HX_STACK_LINE(227)
									int tmp29 = (int(pixel2) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(227)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(227)
									alpha2 = tmp30;
									HX_STACK_LINE(228)
									int tmp31 = (alpha1 - alpha2);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(228)
									diffA = tmp31;
									HX_STACK_LINE(229)
									bool tmp32 = (diffA >= (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(229)
									int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(229)
									if ((tmp32)){
										HX_STACK_LINE(229)
										tmp33 = diffA;
									}
									else{
										HX_STACK_LINE(229)
										tmp33 = ((int)256 + diffA);
									}
									HX_STACK_LINE(229)
									resultAlpha = tmp33;
									HX_STACK_LINE(230)
									int tmp34 = resultAlpha;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(230)
									int tmp35 = (int)16711680;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(230)
									int tmp36 = (int(tmp34) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(230)
									int tmp37 = (int)65280;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(230)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(230)
									int tmp39 = (int(tmp38) | int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(230)
									resultColor = tmp39;
									HX_STACK_LINE(232)
									bool tmp40 = (alpha1 != alpha2);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(232)
									if ((tmp40)){
										HX_STACK_LINE(234)
										int tmp41 = i;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(234)
										int tmp42 = j;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(234)
										int tmp43 = resultColor;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(234)
										result->setPixel32(tmp41,tmp42,tmp43);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(241)
			bool tmp10 = identical;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(241)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(241)
			if ((tmp11)){
				HX_STACK_LINE(243)
				::openfl::_legacy::display::BitmapData tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(243)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(247)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapUtil_obj,compare,return )

Float FlxBitmapUtil_obj::getMemorySize( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxBitmapUtil","getMemorySize",0x69329953,"flixel.util.FlxBitmapUtil.getMemorySize","flixel/util/FlxBitmapUtil.hx",255,0x286986d5)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(256)
	int tmp = bitmapData->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	int tmp1 = bitmapData->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapUtil_obj,getMemorySize,return )


FlxBitmapUtil_obj::FlxBitmapUtil_obj()
{
}

bool FlxBitmapUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { outValue = getMemorySize_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { outValue = mergeColorComponent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBitmapUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("mergeColorComponent","\xb2","\x23","\x8f","\xc5"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("getMemorySize","\x98","\x08","\x07","\x4f"),
	::String(null()) };

void FlxBitmapUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxBitmapUtil","\xe9","\xef","\x1d","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapUtil_obj >;
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
} // end namespace util
