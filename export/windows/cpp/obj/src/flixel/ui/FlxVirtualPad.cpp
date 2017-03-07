#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_ui_ActionMode
#include <flixel/ui/ActionMode.h>
#endif
#ifndef INCLUDED_flixel_ui_DPadMode
#include <flixel/ui/DPadMode.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxVirtualPad
#include <flixel/ui/FlxVirtualPad.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicA
#include <flixel/ui/_FlxVirtualPad/GraphicA.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicB
#include <flixel/ui/_FlxVirtualPad/GraphicB.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicC
#include <flixel/ui/_FlxVirtualPad/GraphicC.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicDown
#include <flixel/ui/_FlxVirtualPad/GraphicDown.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicLeft
#include <flixel/ui/_FlxVirtualPad/GraphicLeft.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicRight
#include <flixel/ui/_FlxVirtualPad/GraphicRight.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicUp
#include <flixel/ui/_FlxVirtualPad/GraphicUp.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicX
#include <flixel/ui/_FlxVirtualPad/GraphicX.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxVirtualPad_GraphicY
#include <flixel/ui/_FlxVirtualPad/GraphicY.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace ui{

Void FlxVirtualPad_obj::__construct(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action)
{
HX_STACK_FRAME("flixel.ui.FlxVirtualPad","new",0xc70c1fa4,"flixel.ui.FlxVirtualPad.new","flixel/ui/FlxVirtualPad.hx",69,0x865d16ec)
HX_STACK_THIS(this)
HX_STACK_ARG(DPad,"DPad")
HX_STACK_ARG(Action,"Action")
{
	HX_STACK_LINE(70)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(71)
	::flixel::util::FlxPoint tmp = this->scrollFactor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	tmp->set(null(),null());
	HX_STACK_LINE(73)
	bool tmp1 = (DPad == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(75)
		DPad = ::flixel::ui::DPadMode_obj::FULL;
	}
	HX_STACK_LINE(77)
	bool tmp2 = (Action == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(79)
		Action = ::flixel::ui::ActionMode_obj::A_B_C;
	}
	HX_STACK_LINE(82)
	::flixel::group::FlxSpriteGroup tmp3 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	this->dPad = tmp3;
	HX_STACK_LINE(83)
	::flixel::group::FlxSpriteGroup tmp4 = this->dPad;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	tmp4->scrollFactor->set(null(),null());
	HX_STACK_LINE(85)
	::flixel::group::FlxSpriteGroup tmp5 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	this->actions = tmp5;
	HX_STACK_LINE(86)
	::flixel::group::FlxSpriteGroup tmp6 = this->actions;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	tmp6->scrollFactor->set(null(),null());
	HX_STACK_LINE(88)
	bool tmp7 = (DPad != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	if ((tmp7)){
		HX_STACK_LINE(88)
		switch( (int)(DPad->__Index())){
			case (int)1: {
				HX_STACK_LINE(91)
				::flixel::group::FlxSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(91)
				int tmp10 = (tmp9 - (int)85);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(91)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)0,tmp10,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(91)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(91)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				tmp8->add(tmp13);
				HX_STACK_LINE(92)
				::flixel::group::FlxSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(92)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(92)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(92)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				::flixel::ui::FlxButton tmp18 = this->buttonDown = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(92)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(92)
				tmp14->add(tmp19);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(94)
				::flixel::group::FlxSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				int tmp10 = (tmp9 - (int)45);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)0,tmp10,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicLeft >(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				::flixel::ui::FlxButton tmp12 = this->buttonLeft = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				tmp8->add(tmp13);
				HX_STACK_LINE(95)
				::flixel::group::FlxSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(95)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(95)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(95)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)42,tmp16,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				::flixel::ui::FlxButton tmp18 = this->buttonRight = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				tmp14->add(tmp19);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(97)
				::flixel::group::FlxSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				int tmp10 = (tmp9 - (int)81);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(97)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)35,tmp10,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(97)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(97)
				tmp8->add(tmp13);
				HX_STACK_LINE(98)
				::flixel::group::FlxSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(98)
				int tmp16 = (tmp15 - (int)45);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(98)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(98)
				::flixel::ui::FlxButton tmp18 = this->buttonLeft = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(98)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(98)
				tmp14->add(tmp19);
				HX_STACK_LINE(99)
				::flixel::group::FlxSpriteGroup tmp20 = this->dPad;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(99)
				int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(99)
				int tmp22 = (tmp21 - (int)45);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(99)
				::flixel::ui::FlxButton tmp23 = this->createButton((int)69,tmp22,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				::flixel::ui::FlxButton tmp24 = this->buttonRight = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(99)
				::flixel::FlxSprite tmp25 = this->add(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(99)
				tmp20->add(tmp25);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(101)
				::flixel::group::FlxSpriteGroup tmp8 = this->dPad;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				int tmp9 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				int tmp10 = (tmp9 - (int)116);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				::flixel::ui::FlxButton tmp11 = this->createButton((int)35,tmp10,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicUp >(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				::flixel::ui::FlxButton tmp12 = this->buttonUp = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				::flixel::FlxSprite tmp13 = this->add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(101)
				tmp8->add(tmp13);
				HX_STACK_LINE(102)
				::flixel::group::FlxSpriteGroup tmp14 = this->dPad;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				int tmp15 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int tmp16 = (tmp15 - (int)81);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				::flixel::ui::FlxButton tmp17 = this->createButton((int)0,tmp16,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicLeft >(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				::flixel::ui::FlxButton tmp18 = this->buttonLeft = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				::flixel::FlxSprite tmp19 = this->add(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(102)
				tmp14->add(tmp19);
				HX_STACK_LINE(103)
				::flixel::group::FlxSpriteGroup tmp20 = this->dPad;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(103)
				int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(103)
				int tmp22 = (tmp21 - (int)81);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(103)
				::flixel::ui::FlxButton tmp23 = this->createButton((int)69,tmp22,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicRight >(),null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(103)
				::flixel::ui::FlxButton tmp24 = this->buttonRight = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(103)
				::flixel::FlxSprite tmp25 = this->add(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(103)
				tmp20->add(tmp25);
				HX_STACK_LINE(104)
				::flixel::group::FlxSpriteGroup tmp26 = this->dPad;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(104)
				int tmp27 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(104)
				int tmp28 = (tmp27 - (int)45);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(104)
				::flixel::ui::FlxButton tmp29 = this->createButton((int)35,tmp28,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicDown >(),null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(104)
				::flixel::ui::FlxButton tmp30 = this->buttonDown = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(104)
				::flixel::FlxSprite tmp31 = this->add(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(104)
				tmp26->add(tmp31);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
	HX_STACK_LINE(108)
	bool tmp8 = (Action != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(108)
	if ((tmp8)){
		HX_STACK_LINE(108)
		switch( (int)(Action->__Index())){
			case (int)1: {
				HX_STACK_LINE(111)
				::flixel::group::FlxSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(111)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(111)
				int tmp11 = (tmp10 - (int)44);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(111)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(111)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(111)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(111)
				tmp9->add(tmp16);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(113)
				::flixel::group::FlxSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				int tmp11 = (tmp10 - (int)44);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(113)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(113)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(113)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(113)
				tmp9->add(tmp16);
				HX_STACK_LINE(114)
				::flixel::group::FlxSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(114)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(114)
				int tmp19 = (tmp18 - (int)86);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(114)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(114)
				int tmp21 = (tmp20 - (int)45);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(114)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(114)
				::flixel::ui::FlxButton tmp23 = this->buttonB = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(114)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(114)
				tmp17->add(tmp24);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(116)
				::flixel::group::FlxSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(116)
				int tmp11 = (tmp10 - (int)128);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(116)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(116)
				int tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(116)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(116)
				::flixel::ui::FlxButton tmp15 = this->buttonA = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(116)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(116)
				tmp9->add(tmp16);
				HX_STACK_LINE(117)
				::flixel::group::FlxSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(117)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(117)
				int tmp19 = (tmp18 - (int)86);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(117)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(117)
				int tmp21 = (tmp20 - (int)45);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(117)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(117)
				::flixel::ui::FlxButton tmp23 = this->buttonB = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(117)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(117)
				tmp17->add(tmp24);
				HX_STACK_LINE(118)
				::flixel::group::FlxSpriteGroup tmp25 = this->actions;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(118)
				int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(118)
				int tmp27 = (tmp26 - (int)44);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(118)
				int tmp28 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(118)
				int tmp29 = (tmp28 - (int)45);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(118)
				::flixel::ui::FlxButton tmp30 = this->createButton(tmp27,tmp29,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicC >(),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(118)
				::flixel::ui::FlxButton tmp31 = this->buttonC = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(118)
				::flixel::FlxSprite tmp32 = this->add(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(118)
				tmp25->add(tmp32);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(120)
				::flixel::group::FlxSpriteGroup tmp9 = this->actions;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(120)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(120)
				int tmp11 = (tmp10 - (int)86);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(120)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(120)
				int tmp13 = (tmp12 - (int)85);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(120)
				::flixel::ui::FlxButton tmp14 = this->createButton(tmp11,tmp13,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicY >(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(120)
				::flixel::ui::FlxButton tmp15 = this->buttonY = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(120)
				::flixel::FlxSprite tmp16 = this->add(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(120)
				tmp9->add(tmp16);
				HX_STACK_LINE(121)
				::flixel::group::FlxSpriteGroup tmp17 = this->actions;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(121)
				int tmp18 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				int tmp19 = (tmp18 - (int)44);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				int tmp20 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				int tmp21 = (tmp20 - (int)85);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(121)
				::flixel::ui::FlxButton tmp22 = this->createButton(tmp19,tmp21,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicX >(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(121)
				::flixel::ui::FlxButton tmp23 = this->buttonX = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(121)
				::flixel::FlxSprite tmp24 = this->add(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(121)
				tmp17->add(tmp24);
				HX_STACK_LINE(122)
				::flixel::group::FlxSpriteGroup tmp25 = this->actions;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(122)
				int tmp26 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(122)
				int tmp27 = (tmp26 - (int)86);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(122)
				int tmp28 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(122)
				int tmp29 = (tmp28 - (int)45);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(122)
				::flixel::ui::FlxButton tmp30 = this->createButton(tmp27,tmp29,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicB >(),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(122)
				::flixel::ui::FlxButton tmp31 = this->buttonB = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(122)
				::flixel::FlxSprite tmp32 = this->add(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(122)
				tmp25->add(tmp32);
				HX_STACK_LINE(123)
				::flixel::group::FlxSpriteGroup tmp33 = this->actions;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(123)
				int tmp34 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(123)
				int tmp35 = (tmp34 - (int)44);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(123)
				int tmp36 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(123)
				int tmp37 = (tmp36 - (int)45);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(123)
				::flixel::ui::FlxButton tmp38 = this->createButton(tmp35,tmp37,(int)44,(int)45,hx::ClassOf< ::flixel::ui::_FlxVirtualPad::GraphicA >(),null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(123)
				::flixel::ui::FlxButton tmp39 = this->buttonA = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(123)
				::flixel::FlxSprite tmp40 = this->add(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(123)
				tmp33->add(tmp40);
			}
			;break;
			case (int)0: {
			}
			;break;
		}
	}
}
;
	return null();
}

//FlxVirtualPad_obj::~FlxVirtualPad_obj() { }

Dynamic FlxVirtualPad_obj::__CreateEmpty() { return  new FlxVirtualPad_obj; }
hx::ObjectPtr< FlxVirtualPad_obj > FlxVirtualPad_obj::__new(::flixel::ui::DPadMode DPad,::flixel::ui::ActionMode Action)
{  hx::ObjectPtr< FlxVirtualPad_obj > _result_ = new FlxVirtualPad_obj();
	_result_->__construct(DPad,Action);
	return _result_;}

Dynamic FlxVirtualPad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVirtualPad_obj > _result_ = new FlxVirtualPad_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxVirtualPad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxVirtualPad","destroy",0x76516e3e,"flixel.ui.FlxVirtualPad.destroy","flixel/ui/FlxVirtualPad.hx",129,0x865d16ec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->super::destroy();
		HX_STACK_LINE(132)
		::flixel::group::FlxSpriteGroup tmp = this->dPad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		::flixel::group::FlxSpriteGroup tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		this->dPad = tmp1;
		HX_STACK_LINE(133)
		::flixel::group::FlxSpriteGroup tmp2 = this->actions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::flixel::group::FlxSpriteGroup tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		this->actions = tmp3;
		HX_STACK_LINE(135)
		this->dPad = null();
		HX_STACK_LINE(136)
		this->actions = null();
		HX_STACK_LINE(137)
		this->buttonA = null();
		HX_STACK_LINE(138)
		this->buttonB = null();
		HX_STACK_LINE(139)
		this->buttonC = null();
		HX_STACK_LINE(140)
		this->buttonY = null();
		HX_STACK_LINE(141)
		this->buttonX = null();
		HX_STACK_LINE(142)
		this->buttonLeft = null();
		HX_STACK_LINE(143)
		this->buttonUp = null();
		HX_STACK_LINE(144)
		this->buttonDown = null();
		HX_STACK_LINE(145)
		this->buttonRight = null();
	}
return null();
}


::flixel::ui::FlxButton FlxVirtualPad_obj::createButton( Float X,Float Y,int Width,int Height,Dynamic Image,Dynamic OnClick){
	HX_STACK_FRAME("flixel.ui.FlxVirtualPad","createButton",0xad434a4a,"flixel.ui.FlxVirtualPad.createButton","flixel/ui/FlxVirtualPad.hx",158,0x865d16ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(OnClick,"OnClick")
	HX_STACK_LINE(159)
	::flixel::ui::FlxButton tmp = ::flixel::ui::FlxButton_obj::__new(X,Y,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::flixel::ui::FlxButton button = tmp;		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(160)
	Dynamic tmp1 = Image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	button->loadGraphic(tmp1,true,tmp2,tmp3,null(),null());
	HX_STACK_LINE(161)
	button->set_solid(false);
	HX_STACK_LINE(162)
	button->set_immovable(true);
	HX_STACK_LINE(163)
	button->scrollFactor->set(null(),null());
	HX_STACK_LINE(169)
	bool tmp4 = (OnClick != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	if ((tmp4)){
		HX_STACK_LINE(171)
		button->onDown->callback = OnClick;
	}
	HX_STACK_LINE(174)
	::flixel::ui::FlxButton tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(174)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC6(FlxVirtualPad_obj,createButton,return )


FlxVirtualPad_obj::FlxVirtualPad_obj()
{
}

void FlxVirtualPad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVirtualPad);
	HX_MARK_MEMBER_NAME(buttonA,"buttonA");
	HX_MARK_MEMBER_NAME(buttonB,"buttonB");
	HX_MARK_MEMBER_NAME(buttonC,"buttonC");
	HX_MARK_MEMBER_NAME(buttonY,"buttonY");
	HX_MARK_MEMBER_NAME(buttonX,"buttonX");
	HX_MARK_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_MARK_MEMBER_NAME(buttonUp,"buttonUp");
	HX_MARK_MEMBER_NAME(buttonRight,"buttonRight");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(dPad,"dPad");
	HX_MARK_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxVirtualPad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonA,"buttonA");
	HX_VISIT_MEMBER_NAME(buttonB,"buttonB");
	HX_VISIT_MEMBER_NAME(buttonC,"buttonC");
	HX_VISIT_MEMBER_NAME(buttonY,"buttonY");
	HX_VISIT_MEMBER_NAME(buttonX,"buttonX");
	HX_VISIT_MEMBER_NAME(buttonLeft,"buttonLeft");
	HX_VISIT_MEMBER_NAME(buttonUp,"buttonUp");
	HX_VISIT_MEMBER_NAME(buttonRight,"buttonRight");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(dPad,"dPad");
	HX_VISIT_MEMBER_NAME(actions,"actions");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxVirtualPad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { return dPad; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { return buttonA; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { return buttonB; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { return buttonC; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { return buttonY; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { return buttonX; }
		if (HX_FIELD_EQ(inName,"actions") ) { return actions; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { return buttonUp; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { return buttonLeft; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { return buttonRight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVirtualPad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dPad") ) { dPad=inValue.Cast< ::flixel::group::FlxSpriteGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttonA") ) { buttonA=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonB") ) { buttonB=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonC") ) { buttonC=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonY") ) { buttonY=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonX") ) { buttonX=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actions") ) { actions=inValue.Cast< ::flixel::group::FlxSpriteGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonUp") ) { buttonUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonLeft") ) { buttonLeft=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonRight") ) { buttonRight=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVirtualPad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxVirtualPad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1"));
	outFields->push(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"));
	outFields->push(HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42"));
	outFields->push(HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonA),HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonB),HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonC),HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonY),HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonX),HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonLeft),HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonUp),HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonRight),HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(FlxVirtualPad_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsObject /*::flixel::group::FlxSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,dPad),HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42")},
	{hx::fsObject /*::flixel::group::FlxSpriteGroup*/ ,(int)offsetof(FlxVirtualPad_obj,actions),HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonA","\x0f","\x52","\x75","\xca"),
	HX_HCSTRING("buttonB","\x10","\x52","\x75","\xca"),
	HX_HCSTRING("buttonC","\x11","\x52","\x75","\xca"),
	HX_HCSTRING("buttonY","\x27","\x52","\x75","\xca"),
	HX_HCSTRING("buttonX","\x26","\x52","\x75","\xca"),
	HX_HCSTRING("buttonLeft","\x19","\x77","\xa6","\xb1"),
	HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),
	HX_HCSTRING("buttonRight","\x8a","\xcc","\x0e","\x37"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("dPad","\x4f","\x5f","\x56","\x42"),
	HX_HCSTRING("actions","\xfd","\x03","\x2e","\x67"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("createButton","\x0e","\xa2","\x35","\xfc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVirtualPad_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVirtualPad_obj::__mClass;

void FlxVirtualPad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxVirtualPad","\xb2","\xbd","\x5a","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxVirtualPad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVirtualPad_obj >;
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
} // end namespace ui
