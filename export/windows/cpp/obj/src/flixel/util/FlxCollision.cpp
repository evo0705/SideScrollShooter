#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > _result_ = new FlxCollision_obj();
	_result_->__construct();
	return _result_;}

int FlxCollision_obj::CAMERA_WALL_OUTSIDE;

int FlxCollision_obj::CAMERA_WALL_INSIDE;

::openfl::_legacy::geom::Point FlxCollision_obj::pointA;

::openfl::_legacy::geom::Point FlxCollision_obj::pointB;

::openfl::_legacy::geom::Point FlxCollision_obj::centerA;

::openfl::_legacy::geom::Point FlxCollision_obj::centerB;

::openfl::_legacy::geom::Matrix FlxCollision_obj::matrixA;

::openfl::_legacy::geom::Matrix FlxCollision_obj::matrixB;

::openfl::_legacy::geom::Matrix FlxCollision_obj::testMatrix;

::openfl::_legacy::geom::Rectangle FlxCollision_obj::boundsA;

::openfl::_legacy::geom::Rectangle FlxCollision_obj::boundsB;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",46,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(48)
		bool tmp = (Contact->angle != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(48)
			tmp2 = (Target->angle != (int)0);
		}
		else{
			HX_STACK_LINE(48)
			tmp2 = true;
		}
		HX_STACK_LINE(48)
		bool considerRotation = tmp2;		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(50)
		bool tmp3 = (Camera != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::flixel::FlxCamera tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(50)
			tmp4 = Camera;
		}
		else{
			HX_STACK_LINE(50)
			tmp4 = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(50)
		Camera = tmp4;
		HX_STACK_LINE(52)
		Float tmp5 = Contact->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		Float tmp7 = Contact->scrollFactor->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(52)
		Float tmp11 = Contact->offset->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		::openfl::_legacy::geom::Point tmp13 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(52)
		tmp13->x = tmp12;
		HX_STACK_LINE(53)
		Float tmp14 = Contact->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(53)
		Float tmp15 = Camera->scroll->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(53)
		Float tmp16 = Contact->scrollFactor->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(53)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(53)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(53)
		Float tmp19 = (tmp14 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(53)
		Float tmp20 = Contact->offset->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(53)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(53)
		::openfl::_legacy::geom::Point tmp22 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(53)
		tmp22->y = tmp21;
		HX_STACK_LINE(55)
		Float tmp23 = Target->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(55)
		Float tmp24 = Camera->scroll->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(55)
		Float tmp25 = Target->scrollFactor->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(55)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(55)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(55)
		Float tmp28 = (tmp23 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(55)
		Float tmp29 = Target->offset->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(55)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(55)
		::openfl::_legacy::geom::Point tmp31 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(55)
		tmp31->x = tmp30;
		HX_STACK_LINE(56)
		Float tmp32 = Target->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(56)
		Float tmp33 = Camera->scroll->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(56)
		Float tmp34 = Target->scrollFactor->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(56)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(56)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(56)
		Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(56)
		Float tmp38 = Target->offset->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(56)
		Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(56)
		::openfl::_legacy::geom::Point tmp40 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(56)
		tmp40->y = tmp39;
		HX_STACK_LINE(58)
		bool tmp41 = considerRotation;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(58)
		if ((tmp41)){
			HX_STACK_LINE(61)
			::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(61)
			Float tmp43 = Contact->origin->x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(61)
			Float tmp44 = Contact->origin->y;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(61)
			tmp42->setTo(tmp43,tmp44);
			HX_STACK_LINE(62)
			::openfl::_legacy::geom::Point tmp45 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(62)
			Float tmp46 = Target->origin->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(62)
			Float tmp47 = Target->origin->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(62)
			tmp45->setTo(tmp46,tmp47);
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp48 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(65)
			Float tmp49 = tmp48->x;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp50 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(65)
			Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(65)
			Float tmp52 = (tmp49 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Point tmp53 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(65)
			Float tmp54 = tmp53->get_length();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(65)
			Float tmp55 = (tmp52 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(65)
			::openfl::_legacy::geom::Rectangle tmp56 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(65)
			tmp56->x = tmp55;
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Point tmp57 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(66)
			Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Point tmp59 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(66)
			Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(66)
			Float tmp61 = (tmp58 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Point tmp62 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(66)
			Float tmp63 = tmp62->get_length();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(66)
			Float tmp64 = (tmp61 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(66)
			::openfl::_legacy::geom::Rectangle tmp65 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(66)
			tmp65->y = tmp64;
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Point tmp66 = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(67)
			Float tmp67 = tmp66->get_length();		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(67)
			Float tmp68 = (tmp67 * (int)2);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Rectangle tmp69 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(67)
			tmp69->width = tmp68;
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Rectangle tmp70 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Rectangle tmp71 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(68)
			tmp71->height = tmp70->width;
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp72 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(70)
			Float tmp73 = tmp72->x;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp74 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(70)
			Float tmp75 = tmp74->x;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(70)
			Float tmp76 = (tmp73 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Point tmp77 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(70)
			Float tmp78 = tmp77->get_length();		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(70)
			Float tmp79 = (tmp76 - tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(70)
			::openfl::_legacy::geom::Rectangle tmp80 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(70)
			tmp80->x = tmp79;
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Point tmp81 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(71)
			Float tmp82 = tmp81->y;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Point tmp83 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(71)
			Float tmp84 = tmp83->y;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(71)
			Float tmp85 = (tmp82 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Point tmp86 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(71)
			Float tmp87 = tmp86->get_length();		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(71)
			Float tmp88 = (tmp85 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(71)
			::openfl::_legacy::geom::Rectangle tmp89 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(71)
			tmp89->y = tmp88;
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Point tmp90 = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(72)
			Float tmp91 = tmp90->get_length();		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(72)
			Float tmp92 = (tmp91 * (int)2);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(72)
			::openfl::_legacy::geom::Rectangle tmp93 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(72)
			tmp93->width = tmp92;
			HX_STACK_LINE(73)
			::openfl::_legacy::geom::Rectangle tmp94 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(73)
			::openfl::_legacy::geom::Rectangle tmp95 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(73)
			tmp95->height = tmp94->width;
		}
		else{
			HX_STACK_LINE(77)
			::openfl::_legacy::geom::Point tmp42 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(77)
			::openfl::_legacy::geom::Rectangle tmp43 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(77)
			tmp43->x = tmp42->x;
			HX_STACK_LINE(78)
			::openfl::_legacy::geom::Point tmp44 = ::flixel::util::FlxCollision_obj::pointA;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(78)
			::openfl::_legacy::geom::Rectangle tmp45 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(78)
			tmp45->y = tmp44->y;
			HX_STACK_LINE(79)
			::openfl::_legacy::geom::Rectangle tmp46 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(79)
			tmp46->width = Contact->frameWidth;
			HX_STACK_LINE(80)
			::openfl::_legacy::geom::Rectangle tmp47 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(80)
			tmp47->height = Contact->frameHeight;
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Point tmp48 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Rectangle tmp49 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(82)
			tmp49->x = tmp48->x;
			HX_STACK_LINE(83)
			::openfl::_legacy::geom::Point tmp50 = ::flixel::util::FlxCollision_obj::pointB;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(83)
			::openfl::_legacy::geom::Rectangle tmp51 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(83)
			tmp51->y = tmp50->y;
			HX_STACK_LINE(84)
			::openfl::_legacy::geom::Rectangle tmp52 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(84)
			tmp52->width = Target->frameWidth;
			HX_STACK_LINE(85)
			::openfl::_legacy::geom::Rectangle tmp53 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(85)
			tmp53->height = Target->frameHeight;
		}
		HX_STACK_LINE(88)
		::openfl::_legacy::geom::Rectangle tmp42 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(88)
		::openfl::_legacy::geom::Rectangle tmp43 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(88)
		::openfl::_legacy::geom::Rectangle tmp44 = tmp42->intersection(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(88)
		::openfl::_legacy::geom::Rectangle intersect = tmp44;		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(90)
		bool tmp45 = intersect->isEmpty();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(90)
		bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(90)
		bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(90)
		bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(90)
		if ((tmp47)){
			HX_STACK_LINE(90)
			tmp48 = (intersect->width < (int)1);
		}
		else{
			HX_STACK_LINE(90)
			tmp48 = true;
		}
		HX_STACK_LINE(90)
		bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(90)
		bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(90)
		if ((tmp49)){
			HX_STACK_LINE(90)
			tmp50 = (intersect->height < (int)1);
		}
		else{
			HX_STACK_LINE(90)
			tmp50 = true;
		}
		HX_STACK_LINE(90)
		if ((tmp50)){
			HX_STACK_LINE(92)
			return false;
		}
		HX_STACK_LINE(96)
		::openfl::_legacy::geom::Matrix tmp51 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(96)
		tmp51->identity();
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Matrix tmp52 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(97)
		Float tmp53 = intersect->x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Rectangle tmp54 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(97)
		Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(97)
		Float tmp56 = (tmp53 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(97)
		Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(97)
		Float tmp58 = intersect->y;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Rectangle tmp59 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(97)
		Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(97)
		Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(97)
		Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(97)
		tmp52->translate(tmp57,tmp62);
		HX_STACK_LINE(99)
		::openfl::_legacy::geom::Matrix tmp63 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(99)
		tmp63->identity();
		HX_STACK_LINE(100)
		::openfl::_legacy::geom::Matrix tmp64 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(100)
		Float tmp65 = intersect->x;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(100)
		::openfl::_legacy::geom::Rectangle tmp66 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(100)
		Float tmp67 = tmp66->x;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(100)
		Float tmp68 = (tmp65 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(100)
		Float tmp69 = -(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(100)
		Float tmp70 = intersect->y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(100)
		::openfl::_legacy::geom::Rectangle tmp71 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(100)
		Float tmp72 = tmp71->y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(100)
		Float tmp73 = (tmp70 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(100)
		Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(100)
		tmp64->translate(tmp69,tmp74);
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(103)
			Contact->calcFrame(true);
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(104)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(107)
		::openfl::_legacy::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(108)
		::openfl::_legacy::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(110)
		Float tmp75 = intersect->width;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(110)
		int tmp76 = ::Std_obj::_int(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(110)
		int overlapWidth = tmp76;		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(111)
		Float tmp77 = intersect->height;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(111)
		int tmp78 = ::Std_obj::_int(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(111)
		int overlapHeight = tmp78;		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(114)
		bool tmp79 = considerRotation;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(114)
		if ((tmp79)){
			HX_STACK_LINE(116)
			::openfl::_legacy::geom::Matrix tmp80 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(116)
			tmp80->identity();
			HX_STACK_LINE(119)
			::openfl::_legacy::geom::Matrix tmp81 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(119)
			Float tmp82 = Contact->origin->x;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(119)
			Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(119)
			Float tmp84 = Contact->origin->y;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(119)
			Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(119)
			tmp81->translate(tmp83,tmp85);
			HX_STACK_LINE(122)
			::openfl::_legacy::geom::Matrix tmp86 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(122)
			Float tmp87 = Contact->angle;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(122)
			Float tmp88 = ::Math_obj::PI;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(122)
			Float tmp89 = (Float(tmp88) / Float((int)180));		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(122)
			Float tmp90 = (tmp87 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(122)
			tmp86->rotate(tmp90);
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Matrix tmp91 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Rectangle tmp92 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(125)
			Float tmp93 = tmp92->width;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(125)
			Float tmp94 = (Float(tmp93) / Float((int)2));		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(125)
			::openfl::_legacy::geom::Rectangle tmp95 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(125)
			Float tmp96 = tmp95->height;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(125)
			Float tmp97 = (Float(tmp96) / Float((int)2));		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(125)
			tmp91->translate(tmp94,tmp97);
			HX_STACK_LINE(128)
			::openfl::_legacy::geom::Rectangle tmp98 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(128)
			Float tmp99 = tmp98->width;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(128)
			int tmp100 = ::Math_obj::floor(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(128)
			::openfl::_legacy::geom::Rectangle tmp101 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(128)
			Float tmp102 = tmp101->height;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(128)
			int tmp103 = ::Math_obj::floor(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(128)
			::openfl::_legacy::display::BitmapData tmp104 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp100,tmp103,true,(int)0,false);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(128)
			::openfl::_legacy::display::BitmapData testA2 = tmp104;		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(131)
			::openfl::_legacy::display::BitmapData tmp105 = testA;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(131)
			::openfl::_legacy::geom::Matrix tmp106 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(131)
			testA2->draw(tmp105,tmp106,null(),null(),null(),false);
			HX_STACK_LINE(132)
			testA = testA2;
			HX_STACK_LINE(135)
			::openfl::_legacy::geom::Matrix tmp107 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(135)
			tmp107->identity();
			HX_STACK_LINE(136)
			::openfl::_legacy::geom::Matrix tmp108 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(136)
			Float tmp109 = Target->origin->x;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(136)
			Float tmp110 = -(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(136)
			Float tmp111 = Target->origin->y;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(136)
			Float tmp112 = -(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(136)
			tmp108->translate(tmp110,tmp112);
			HX_STACK_LINE(137)
			::openfl::_legacy::geom::Matrix tmp113 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(137)
			Float tmp114 = Target->angle;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(137)
			Float tmp115 = ::Math_obj::PI;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(137)
			Float tmp116 = (Float(tmp115) / Float((int)180));		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(137)
			Float tmp117 = (tmp114 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(137)
			tmp113->rotate(tmp117);
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Matrix tmp118 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Rectangle tmp119 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(138)
			Float tmp120 = tmp119->width;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(138)
			Float tmp121 = (Float(tmp120) / Float((int)2));		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Rectangle tmp122 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(138)
			Float tmp123 = tmp122->height;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(138)
			Float tmp124 = (Float(tmp123) / Float((int)2));		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(138)
			tmp118->translate(tmp121,tmp124);
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Rectangle tmp125 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(140)
			Float tmp126 = tmp125->width;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(140)
			int tmp127 = ::Math_obj::floor(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Rectangle tmp128 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(140)
			Float tmp129 = tmp128->height;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(140)
			int tmp130 = ::Math_obj::floor(tmp129);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BitmapData tmp131 = ::flixel::util::FlxBitmapDataPool_obj::get(tmp127,tmp130,true,(int)0,false);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BitmapData testB2 = tmp131;		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(141)
			::openfl::_legacy::display::BitmapData tmp132 = testB;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(141)
			::openfl::_legacy::geom::Matrix tmp133 = ::flixel::util::FlxCollision_obj::testMatrix;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(141)
			testB2->draw(tmp132,tmp133,null(),null(),null(),false);
			HX_STACK_LINE(142)
			testB = testB2;
		}
		HX_STACK_LINE(145)
		::openfl::_legacy::geom::Matrix tmp80 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(145)
		Float tmp81 = tmp80->tx;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(145)
		Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(145)
		int tmp83 = ::Std_obj::_int(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(145)
		::openfl::_legacy::geom::Rectangle tmp84 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(145)
		tmp84->x = tmp83;
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Matrix tmp85 = ::flixel::util::FlxCollision_obj::matrixA;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(146)
		Float tmp86 = tmp85->ty;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(146)
		Float tmp87 = -(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(146)
		int tmp88 = ::Std_obj::_int(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp89 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(146)
		tmp89->y = tmp88;
		HX_STACK_LINE(147)
		::openfl::_legacy::geom::Rectangle tmp90 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(147)
		tmp90->width = overlapWidth;
		HX_STACK_LINE(148)
		::openfl::_legacy::geom::Rectangle tmp91 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(148)
		tmp91->height = overlapHeight;
		HX_STACK_LINE(150)
		::openfl::_legacy::geom::Matrix tmp92 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(150)
		Float tmp93 = tmp92->tx;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(150)
		Float tmp94 = -(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(150)
		int tmp95 = ::Std_obj::_int(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(150)
		::openfl::_legacy::geom::Rectangle tmp96 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(150)
		tmp96->x = tmp95;
		HX_STACK_LINE(151)
		::openfl::_legacy::geom::Matrix tmp97 = ::flixel::util::FlxCollision_obj::matrixB;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(151)
		Float tmp98 = tmp97->ty;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(151)
		Float tmp99 = -(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(151)
		int tmp100 = ::Std_obj::_int(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(151)
		::openfl::_legacy::geom::Rectangle tmp101 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(151)
		tmp101->y = tmp100;
		HX_STACK_LINE(152)
		::openfl::_legacy::geom::Rectangle tmp102 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(152)
		tmp102->width = overlapWidth;
		HX_STACK_LINE(153)
		::openfl::_legacy::geom::Rectangle tmp103 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(153)
		tmp103->height = overlapHeight;
		HX_STACK_LINE(155)
		::openfl::_legacy::geom::Rectangle tmp104 = ::flixel::util::FlxCollision_obj::boundsA;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(155)
		::openfl::_legacy::utils::ByteArray tmp105 = testA->getPixels(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(155)
		::openfl::_legacy::utils::ByteArray pixelsA = tmp105;		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(156)
		::openfl::_legacy::geom::Rectangle tmp106 = ::flixel::util::FlxCollision_obj::boundsB;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(156)
		::openfl::_legacy::utils::ByteArray tmp107 = testB->getPixels(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(156)
		::openfl::_legacy::utils::ByteArray pixelsB = tmp107;		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(158)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(161)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(162)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(163)
		int tmp108 = (overlapWidth * overlapHeight);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(163)
		int overlapPixels = tmp108;		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(164)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			Float tmp109 = (Float(overlapPixels) / Float((int)2));		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(167)
			int tmp110 = ::Math_obj::ceil(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(167)
			int _g = tmp110;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp111 = (_g1 < _g);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(167)
				bool tmp112 = !(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(167)
				if ((tmp112)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				int tmp113 = (_g1)++;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(167)
				int i = tmp113;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(169)
				int tmp114 = (int(i) << int((int)3));		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(169)
				alphaIdx = tmp114;
				HX_STACK_LINE(170)
				int tmp115 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(170)
				pixelsA->position = tmp115;
				HX_STACK_LINE(171)
				bool tmp116 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(171)
				int tmp117;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(171)
				if ((tmp116)){
					HX_STACK_LINE(171)
					int tmp118 = (pixelsA->position)++;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(171)
					int pos = tmp118;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(171)
					tmp117 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(171)
					tmp117 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(171)
				alphaA = tmp117;
				HX_STACK_LINE(172)
				bool tmp118 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(172)
				int tmp119;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(172)
				if ((tmp118)){
					HX_STACK_LINE(172)
					int tmp120 = (pixelsB->position)++;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(172)
					int pos = tmp120;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(172)
					tmp119 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(172)
					tmp119 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(172)
				alphaB = tmp119;
				HX_STACK_LINE(174)
				bool tmp120 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(174)
				bool tmp121;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(174)
				if ((tmp120)){
					HX_STACK_LINE(174)
					tmp121 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(174)
					tmp121 = false;
				}
				HX_STACK_LINE(174)
				if ((tmp121)){
					HX_STACK_LINE(176)
					hit = true;
					HX_STACK_LINE(177)
					break;
				}
			}
		}
		HX_STACK_LINE(181)
		bool tmp109 = hit;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(181)
		bool tmp110 = !(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(181)
		if ((tmp110)){
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int tmp111 = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(184)
			int _g = tmp111;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp112 = (_g1 < _g);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(184)
				bool tmp113 = !(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(184)
				if ((tmp113)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				int tmp114 = (_g1)++;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(184)
				int i = tmp114;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(186)
				int tmp115 = (int(i) << int((int)3));		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(186)
				int tmp116 = (tmp115 + (int)4);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(186)
				alphaIdx = tmp116;
				HX_STACK_LINE(187)
				int tmp117 = pixelsB->position = alphaIdx;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(187)
				pixelsA->position = tmp117;
				HX_STACK_LINE(188)
				bool tmp118 = (pixelsA->position < pixelsA->length);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(188)
				int tmp119;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(188)
				if ((tmp118)){
					HX_STACK_LINE(188)
					int tmp120 = (pixelsA->position)++;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(188)
					int pos = tmp120;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(188)
					tmp119 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(188)
					tmp119 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(188)
				alphaA = tmp119;
				HX_STACK_LINE(189)
				bool tmp120 = (pixelsB->position < pixelsB->length);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(189)
				int tmp121;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(189)
				if ((tmp120)){
					HX_STACK_LINE(189)
					int tmp122 = (pixelsB->position)++;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(189)
					int pos = tmp122;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(189)
					tmp121 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(189)
					tmp121 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(189)
				alphaB = tmp121;
				HX_STACK_LINE(191)
				bool tmp122 = (alphaA >= AlphaTolerance);		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(191)
				bool tmp123;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(191)
				if ((tmp122)){
					HX_STACK_LINE(191)
					tmp123 = (alphaB >= AlphaTolerance);
				}
				else{
					HX_STACK_LINE(191)
					tmp123 = false;
				}
				HX_STACK_LINE(191)
				if ((tmp123)){
					HX_STACK_LINE(193)
					hit = true;
					HX_STACK_LINE(194)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		bool tmp111 = considerRotation;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(199)
		if ((tmp111)){
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp112 = testA;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(201)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp112);
			HX_STACK_LINE(202)
			::openfl::_legacy::display::BitmapData tmp113 = testB;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(202)
			::flixel::util::FlxBitmapDataPool_obj::put(tmp113);
		}
		HX_STACK_LINE(205)
		bool tmp112 = hit;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(205)
		return tmp112;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",218,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(220)
		int tmp = PointX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		int tmp1 = PointY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Float tmp2 = Target->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		Float tmp4 = Target->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		Float tmp6 = Target->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(220)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(220)
		Float tmp8 = Target->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		bool tmp10 = ::flixel::util::FlxMath_obj::pointInCoordinates(tmp,tmp1,tmp3,tmp5,tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(220)
		bool tmp11 = (tmp10 == false);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(220)
		if ((tmp11)){
			HX_STACK_LINE(222)
			return false;
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(226)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(230)
		::openfl::_legacy::display::BitmapData test = Target->framePixels;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(232)
		int pixelAlpha = (int)0;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(233)
		int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			Float tmp13 = (PointX - Target->x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(233)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(233)
			Float tmp15 = (PointY - Target->y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(233)
			int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(233)
			int tmp17 = test->getPixel32(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(233)
			int Color = tmp17;		HX_STACK_VAR(Color,"Color");
			HX_STACK_LINE(233)
			int tmp18 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(233)
			tmp12 = (int(tmp18) & int((int)255));
		}
		HX_STACK_LINE(233)
		pixelAlpha = tmp12;
		HX_STACK_LINE(236)
		Float tmp13 = (pixelAlpha * Target->alpha);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(236)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(236)
		pixelAlpha = tmp14;
		HX_STACK_LINE(240)
		bool tmp15 = (pixelAlpha >= AlphaTolerance);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(240)
		if ((tmp15)){
			HX_STACK_LINE(242)
			return true;
		}
		else{
			HX_STACK_LINE(246)
			return false;
		}
		HX_STACK_LINE(240)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",260,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Placement,"Placement")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(263)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(264)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(266)
		int tmp = Placement;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(269)
				Float tmp1 = (Camera->x - Thickness);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(269)
				int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(269)
				Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(269)
				int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(269)
				int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(269)
				int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(269)
				int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(269)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(269)
				::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(269)
				left = tmp9;
				HX_STACK_LINE(270)
				Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(270)
				int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(270)
				Float tmp12 = (Camera->y + Thickness);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(270)
				int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(270)
				int tmp14 = Thickness;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(270)
				int tmp15 = Camera->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				int tmp16 = (Thickness * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(270)
				int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(270)
				::flixel::tile::FlxTileblock tmp18 = ::flixel::tile::FlxTileblock_obj::__new(tmp11,tmp13,tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(270)
				right = tmp18;
				HX_STACK_LINE(271)
				Float tmp19 = (Camera->x - Thickness);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(271)
				int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(271)
				Float tmp21 = (Camera->y - Thickness);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(271)
				int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(271)
				int tmp23 = Camera->width;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(271)
				int tmp24 = (Thickness * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(271)
				int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(271)
				int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(271)
				::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp20,tmp22,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(271)
				top = tmp27;
				HX_STACK_LINE(272)
				Float tmp28 = (Camera->x - Thickness);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(272)
				int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(272)
				int tmp30 = Camera->height;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(272)
				int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(272)
				int tmp32 = (Thickness * (int)2);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(272)
				int tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(272)
				int tmp34 = Thickness;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(272)
				::flixel::tile::FlxTileblock tmp35 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(272)
				bottom = tmp35;
				HX_STACK_LINE(274)
				bool tmp36 = AdjustWorldBounds;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(274)
				if ((tmp36)){
					HX_STACK_LINE(276)
					::flixel::util::FlxRect tmp37 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(276)
					::flixel::util::FlxRect _this = tmp37;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(276)
					Float tmp38 = (Camera->x - Thickness);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(276)
					_this->x = tmp38;
					HX_STACK_LINE(276)
					Float tmp39 = (Camera->y - Thickness);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(276)
					_this->y = tmp39;
					HX_STACK_LINE(276)
					int tmp40 = Camera->width;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(276)
					int tmp41 = (Thickness * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(276)
					int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(276)
					_this->width = tmp42;
					HX_STACK_LINE(276)
					int tmp43 = Camera->height;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(276)
					int tmp44 = (Thickness * (int)2);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(276)
					int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(276)
					_this->height = tmp45;
					HX_STACK_LINE(276)
					_this;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(279)
				Float tmp1 = Camera->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(279)
				int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(279)
				Float tmp3 = (Camera->y + Thickness);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				int tmp5 = Thickness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				int tmp6 = Camera->height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				int tmp7 = (Thickness * (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				::flixel::tile::FlxTileblock tmp9 = ::flixel::tile::FlxTileblock_obj::__new(tmp2,tmp4,tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				left = tmp9;
				HX_STACK_LINE(280)
				Float tmp10 = (Camera->x + Camera->width);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				int tmp11 = Thickness;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(280)
				int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(280)
				Float tmp14 = (Camera->y + Thickness);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(280)
				int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(280)
				int tmp16 = Thickness;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(280)
				int tmp17 = Camera->height;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(280)
				int tmp18 = (Thickness * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(280)
				int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(280)
				::flixel::tile::FlxTileblock tmp20 = ::flixel::tile::FlxTileblock_obj::__new(tmp13,tmp15,tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(280)
				right = tmp20;
				HX_STACK_LINE(281)
				Float tmp21 = Camera->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(281)
				int tmp22 = ::Math_obj::floor(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(281)
				Float tmp23 = Camera->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(281)
				int tmp24 = ::Math_obj::floor(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(281)
				int tmp25 = Camera->width;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(281)
				int tmp26 = Thickness;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(281)
				::flixel::tile::FlxTileblock tmp27 = ::flixel::tile::FlxTileblock_obj::__new(tmp22,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(281)
				top = tmp27;
				HX_STACK_LINE(282)
				Float tmp28 = Camera->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(282)
				int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(282)
				int tmp30 = (Camera->height - Thickness);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(282)
				int tmp31 = Camera->width;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(282)
				int tmp32 = Thickness;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(282)
				::flixel::tile::FlxTileblock tmp33 = ::flixel::tile::FlxTileblock_obj::__new(tmp29,tmp30,tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(282)
				bottom = tmp33;
				HX_STACK_LINE(284)
				bool tmp34 = AdjustWorldBounds;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(284)
				if ((tmp34)){
					HX_STACK_LINE(286)
					::flixel::util::FlxRect tmp35 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(286)
					::flixel::util::FlxRect _this = tmp35;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					_this->x = Camera->x;
					HX_STACK_LINE(286)
					_this->y = Camera->y;
					HX_STACK_LINE(286)
					_this->width = Camera->width;
					HX_STACK_LINE(286)
					_this->height = Camera->height;
					HX_STACK_LINE(286)
					_this;
				}
			}
			;break;
		}
		HX_STACK_LINE(290)
		::flixel::group::FlxGroup tmp1 = ::flixel::group::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		::flixel::group::FlxGroup result = tmp1;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(292)
		::flixel::tile::FlxTileblock tmp2 = left;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		result->add(tmp2);
		HX_STACK_LINE(293)
		::flixel::tile::FlxTileblock tmp3 = right;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		result->add(tmp3);
		HX_STACK_LINE(294)
		::flixel::tile::FlxTileblock tmp4 = top;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(294)
		result->add(tmp4);
		HX_STACK_LINE(295)
		::flixel::tile::FlxTileblock tmp5 = bottom;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		result->add(tmp5);
		HX_STACK_LINE(297)
		::flixel::group::FlxGroup tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

bool FlxCollision_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { outValue = pointA; return true;  }
		if (HX_FIELD_EQ(inName,"pointB") ) { outValue = pointB; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { outValue = centerA; return true;  }
		if (HX_FIELD_EQ(inName,"centerB") ) { outValue = centerB; return true;  }
		if (HX_FIELD_EQ(inName,"matrixA") ) { outValue = matrixA; return true;  }
		if (HX_FIELD_EQ(inName,"matrixB") ) { outValue = matrixB; return true;  }
		if (HX_FIELD_EQ(inName,"boundsA") ) { outValue = boundsA; return true;  }
		if (HX_FIELD_EQ(inName,"boundsB") ) { outValue = boundsB; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { outValue = testMatrix; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { outValue = createCameraWall_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { outValue = pixelPerfectCheck_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { outValue = pixelPerfectPointCheck_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxCollision_obj::CAMERA_WALL_OUTSIDE,HX_HCSTRING("CAMERA_WALL_OUTSIDE","\xaa","\x16","\x60","\x80")},
	{hx::fsInt,(void *) &FlxCollision_obj::CAMERA_WALL_INSIDE,HX_HCSTRING("CAMERA_WALL_INSIDE","\xf7","\x71","\xca","\x90")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::pointA,HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::pointB,HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::centerA,HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxCollision_obj::centerB,HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::matrixA,HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::matrixB,HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxCollision_obj::testMatrix,HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxCollision_obj::boundsA,HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxCollision_obj::boundsB,HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#endif

hx::Class FlxCollision_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CAMERA_WALL_OUTSIDE","\xaa","\x16","\x60","\x80"),
	HX_HCSTRING("CAMERA_WALL_INSIDE","\xf7","\x71","\xca","\x90"),
	HX_HCSTRING("pointA","\xf1","\x11","\x2e","\xf7"),
	HX_HCSTRING("pointB","\xf2","\x11","\x2e","\xf7"),
	HX_HCSTRING("centerA","\xcc","\xf4","\xe5","\x19"),
	HX_HCSTRING("centerB","\xcd","\xf4","\xe5","\x19"),
	HX_HCSTRING("matrixA","\xe0","\x42","\x67","\x93"),
	HX_HCSTRING("matrixB","\xe1","\x42","\x67","\x93"),
	HX_HCSTRING("testMatrix","\x33","\x7c","\xbc","\xd4"),
	HX_HCSTRING("boundsA","\x2c","\x20","\xb8","\xf3"),
	HX_HCSTRING("boundsB","\x2d","\x20","\xb8","\xf3"),
	HX_HCSTRING("pixelPerfectCheck","\x21","\x18","\xe0","\xff"),
	HX_HCSTRING("pixelPerfectPointCheck","\x5f","\xf0","\x41","\xdf"),
	HX_HCSTRING("createCameraWall","\x6b","\x04","\x3e","\xea"),
	::String(null()) };

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxCollision","\x1a","\xc3","\x9f","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCollision_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxCollision_obj >;
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

void FlxCollision_obj::__boot()
{
	CAMERA_WALL_OUTSIDE= (int)0;
	CAMERA_WALL_INSIDE= (int)1;
	pointA= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	pointB= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	centerA= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	centerB= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	matrixA= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	boundsB= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
