#include <hxcpp.h>

#ifndef INCLUDED_Environment
#include <Environment.h>
#endif
#ifndef INCLUDED_FPS
#include <FPS.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
#endif
#ifndef INCLUDED_WeaponAttribute
#include <WeaponAttribute.h>
#endif
#ifndef INCLUDED_WeaponID
#include <WeaponID.h>
#endif
#ifndef INCLUDED_character_Colby
#include <character/Colby.h>
#endif
#ifndef INCLUDED_enemy_Bandit
#include <enemy/Bandit.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
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
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_menus_PauseMenu
#include <menus/PauseMenu.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",27,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(41)
	this->_pause = false;
	HX_STACK_LINE(35)
	this->_allSprites = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(27)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",49,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::create();
		HX_STACK_LINE(52)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		tmp->bgColor = (int)-7829368;
		HX_STACK_LINE(53)
		::flixel::_system::frontEnds::SoundFrontEnd tmp1 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::flixel::_system::FlxSound tmp2 = tmp1->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/music/fairyland.ogg","\x6b","\xd2","\xe0","\xd0"),((Float).3),true,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		this->_bgm = tmp2;
		HX_STACK_LINE(54)
		::flixel::_system::FlxSound tmp3 = this->_bgm;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		tmp3->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		HX_STACK_LINE(57)
		::TiledLevel tmp4 = ::TiledLevel_obj::__new(HX_HCSTRING("assets/data/level-0002.tmx","\x55","\x34","\xbb","\xa5"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		this->_level = tmp4;
		HX_STACK_LINE(58)
		::TiledLevel tmp5 = this->_level;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		::flixel::group::FlxGroup tmp6 = tmp5->backgroundTiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		this->add(tmp6);
		HX_STACK_LINE(59)
		::TiledLevel tmp7 = this->_level;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		::flixel::group::FlxGroup tmp8 = tmp7->foregroundTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		this->add(tmp8);
		HX_STACK_LINE(60)
		::TiledLevel tmp9 = this->_level;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		::flixel::group::FlxGroup tmp10 = tmp9->floors;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		this->add(tmp10);
		HX_STACK_LINE(61)
		::TiledLevel tmp11 = this->_level;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::flixel::group::FlxGroup tmp12 = tmp11->deaths;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		this->add(tmp12);
		HX_STACK_LINE(63)
		::flixel::effects::particles::FlxEmitter tmp13 = ::flixel::effects::particles::FlxEmitter_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(63)
		this->_littleGibs = tmp13;
		HX_STACK_LINE(64)
		::flixel::effects::particles::FlxEmitter tmp14 = this->_littleGibs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		tmp14->setXSpeed((int)-150,(int)150);
		HX_STACK_LINE(65)
		::flixel::effects::particles::FlxEmitter tmp15 = this->_littleGibs;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		tmp15->setYSpeed((int)-200,(int)0);
		HX_STACK_LINE(66)
		::flixel::effects::particles::FlxEmitter tmp16 = this->_littleGibs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(66)
		tmp16->setRotation((int)-720,(int)-720);
		HX_STACK_LINE(67)
		::flixel::effects::particles::FlxEmitter tmp17 = this->_littleGibs;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		tmp17->set_gravity((int)350);
		HX_STACK_LINE(68)
		::flixel::effects::particles::FlxEmitter tmp18 = this->_littleGibs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(68)
		tmp18->bounce = ((Float)0.5);
		HX_STACK_LINE(69)
		::flixel::effects::particles::FlxEmitter tmp19 = this->_littleGibs;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(69)
		tmp19->makeParticles(HX_HCSTRING("assets/images/gibs.png","\xd9","\x49","\x90","\x54"),(int)100,(int)10,true,((Float)0.5),null());
		HX_STACK_LINE(71)
		::Environment tmp20 = ::Environment_obj::__new(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(71)
		this->_environment = tmp20;
		HX_STACK_LINE(72)
		::Environment tmp21 = this->_environment;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(72)
		::character::Colby tmp22 = ::character::Colby_obj::__new(tmp21,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(72)
		this->_player = tmp22;
		HX_STACK_LINE(73)
		::Player tmp23 = this->_player;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(73)
		::Environment tmp24 = this->_environment;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(73)
		tmp24->player = tmp23;
		HX_STACK_LINE(74)
		::Player tmp25 = this->_player;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(74)
		::TiledLevel tmp26 = this->_level;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(74)
		int tmp27 = tmp26->fullWidth;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(74)
		::TiledLevel tmp28 = this->_level;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(74)
		int tmp29 = tmp28->fullHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(74)
		::flixel::util::FlxRect tmp30 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(74)
		::WeaponAttribute tmp31 = ::WeaponAttribute_obj::__new(::WeaponID_obj::Handgun001);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(74)
		tmp25->setWeapon(tmp30,tmp31);
		HX_STACK_LINE(76)
		::flixel::FlxCamera tmp32 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(76)
		::TiledLevel tmp33 = this->_level;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(76)
		int tmp34 = tmp33->fullWidth;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(76)
		::TiledLevel tmp35 = this->_level;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(76)
		int tmp36 = tmp35->fullHeight;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(76)
		tmp32->setBounds((int)0,(int)0,tmp34,tmp36,true);
		HX_STACK_LINE(77)
		::flixel::FlxCamera tmp37 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(77)
		::Player tmp38 = this->_player;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(77)
		tmp37->follow(tmp38,(int)1,null(),null());
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			::flixel::effects::particles::FlxEmitter tmp39 = this->_littleGibs;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(79)
			Array< ::Dynamic > _g1 = tmp39->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			while((true)){
				HX_STACK_LINE(79)
				bool tmp40 = (_g < _g1->length);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(79)
				bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(79)
				if ((tmp41)){
					HX_STACK_LINE(79)
					break;
				}
				HX_STACK_LINE(79)
				::flixel::effects::particles::FlxParticle tmp42 = _g1->__get(_g).StaticCast< ::flixel::effects::particles::FlxParticle >();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(79)
				::flixel::effects::particles::FlxParticle gibs = tmp42;		HX_STACK_VAR(gibs,"gibs");
				HX_STACK_LINE(79)
				++(_g);
				HX_STACK_LINE(80)
				::flixel::group::FlxTypedGroup tmp43 = this->_allSprites;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(80)
				::flixel::effects::particles::FlxParticle tmp44 = gibs;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(80)
				tmp43->add(tmp44);
			}
		}
		HX_STACK_LINE(82)
		::flixel::group::FlxTypedGroup tmp39 = this->_allSprites;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(82)
		::Player tmp40 = this->_player;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(82)
		tmp39->add(tmp40);
		HX_STACK_LINE(83)
		::flixel::group::FlxTypedGroup tmp41 = this->_allSprites;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(83)
		this->add(tmp41);
		HX_STACK_LINE(84)
		::TiledLevel tmp42 = this->_level;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(84)
		::flixel::group::FlxGroup tmp43 = tmp42->frontgroundTiles;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(84)
		this->add(tmp43);
		HX_STACK_LINE(85)
		::flixel::effects::particles::FlxEmitter tmp44 = this->_littleGibs;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(85)
		this->add(tmp44);
		HX_STACK_LINE(86)
		::Player tmp45 = this->_player;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(86)
		::flixel::ui::FlxVirtualPad tmp46 = tmp45->vPad;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(86)
		this->add(tmp46);
		HX_STACK_LINE(87)
		::Player tmp47 = this->_player;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(87)
		::flixel::group::FlxGroup tmp48 = tmp47->hud;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(87)
		this->add(tmp48);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			::TiledLevel tmp49 = this->_level;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(89)
			Array< ::Dynamic > _g1 = tmp49->objectGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				bool tmp50 = (_g < _g1->length);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(89)
				bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(89)
				if ((tmp51)){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				::flixel::addons::editors::tiled::TiledObjectGroup tmp52 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(89)
				::flixel::addons::editors::tiled::TiledObjectGroup group = tmp52;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(89)
				++(_g);
				HX_STACK_LINE(91)
				{
					HX_STACK_LINE(91)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(91)
					Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(91)
					while((true)){
						HX_STACK_LINE(91)
						bool tmp53 = (_g2 < _g3->length);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(91)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(91)
						if ((tmp54)){
							HX_STACK_LINE(91)
							break;
						}
						HX_STACK_LINE(91)
						::flixel::addons::editors::tiled::TiledObject tmp55 = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(91)
						::flixel::addons::editors::tiled::TiledObject o = tmp55;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(91)
						++(_g2);
						HX_STACK_LINE(93)
						::String tmp56 = o->type.toLowerCase();		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(93)
						bool tmp57 = (tmp56 == HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(93)
						if ((tmp57)){
							HX_STACK_LINE(94)
							::Player tmp58 = this->_player;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(94)
							int tmp59 = o->x;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(94)
							tmp58->set_x(tmp59);
							HX_STACK_LINE(95)
							::Player tmp60 = this->_player;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(95)
							int tmp61 = o->y;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(95)
							tmp60->set_y(tmp61);
							HX_STACK_LINE(96)
							::flixel::util::FlxPoint tmp62 = ::flixel::util::FlxPoint_obj::__new(o->x,o->y);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(96)
							this->_checkpoint = tmp62;
						}
					}
				}
			}
		}
		HX_STACK_LINE(101)
		::flixel::group::FlxGroup tmp49 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(101)
		this->_enemies = tmp49;
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(102)
			::TiledLevel tmp50 = this->_level;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(102)
			Array< ::Dynamic > _g1 = tmp50->objectGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp51 = (_g < _g1->length);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(102)
				bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(102)
				if ((tmp52)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(102)
				::flixel::addons::editors::tiled::TiledObjectGroup tmp53 = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(102)
				::flixel::addons::editors::tiled::TiledObjectGroup group = tmp53;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(102)
				++(_g);
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(104)
					Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(104)
					while((true)){
						HX_STACK_LINE(104)
						bool tmp54 = (_g2 < _g3->length);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(104)
						bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(104)
						if ((tmp55)){
							HX_STACK_LINE(104)
							break;
						}
						HX_STACK_LINE(104)
						::flixel::addons::editors::tiled::TiledObject tmp56 = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(104)
						::flixel::addons::editors::tiled::TiledObject o = tmp56;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(104)
						++(_g2);
						HX_STACK_LINE(106)
						::String tmp57 = o->type.toLowerCase();		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(106)
						bool tmp58 = (tmp57 == HX_HCSTRING("enemy","\x48","\x12","\x7b","\x70"));		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(106)
						if ((tmp58)){
							HX_STACK_LINE(107)
							int tmp59 = o->x;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(107)
							int tmp60 = o->y;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(107)
							::Environment tmp61 = this->_environment;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(107)
							::enemy::Bandit tmp62 = ::enemy::Bandit_obj::__new(tmp59,tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(107)
							::enemy::Bandit enemy1 = tmp62;		HX_STACK_VAR(enemy1,"enemy1");
							HX_STACK_LINE(108)
							enemy1->resetMaxHealth((int)100);
							HX_STACK_LINE(109)
							enemy1->acceleration->set_y((int)300);
							HX_STACK_LINE(110)
							enemy1->drag->set_x((int)1000);
							HX_STACK_LINE(111)
							enemy1->setSize((int)16,(int)28);
							HX_STACK_LINE(112)
							enemy1->centerOffsets(null());
							HX_STACK_LINE(113)
							enemy1->offset->set_y((int)4);
							HX_STACK_LINE(114)
							enemy1->set_solid(true);
							HX_STACK_LINE(115)
							::flixel::group::FlxGroup tmp63 = this->_enemies;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(115)
							::enemy::Bandit tmp64 = enemy1;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(115)
							tmp63->add(tmp64);
						}
					}
				}
			}
		}
		HX_STACK_LINE(119)
		::flixel::group::FlxGroup tmp50 = this->_enemies;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(119)
		this->add(tmp50);
		HX_STACK_LINE(120)
		::Player tmp51 = this->_player;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(120)
		::flixel::addons::weapon::FlxWeapon tmp52 = tmp51->weapon;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(120)
		bool tmp53 = (tmp52 != null());		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(120)
		if ((tmp53)){
			HX_STACK_LINE(121)
			::Player tmp54 = this->_player;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(121)
			::flixel::group::FlxTypedGroup tmp55 = tmp54->weapon->group;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(121)
			this->add(tmp55);
		}
		HX_STACK_LINE(124)
		bool tmp54 = ::Reg_obj::debug;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(124)
		if ((tmp54)){
			HX_STACK_LINE(126)
			::FPS tmp55 = ::FPS_obj::__new((int)4,(int)50,null());		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(126)
			this->_fps = tmp55;
			HX_STACK_LINE(127)
			::FPS tmp56 = this->_fps;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(127)
			tmp56->set_alpha(((Float).7));
			HX_STACK_LINE(128)
			::FPS tmp57 = this->_fps;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(128)
			::FPS tmp58 = this->_fps;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(128)
			Float tmp59 = tmp58->scrollFactor->set_y((int)0);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(128)
			tmp57->scrollFactor->set_x(tmp59);
			HX_STACK_LINE(129)
			::FPS tmp60 = this->_fps;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(129)
			this->add(tmp60);
		}
		HX_STACK_LINE(141)
		::menus::PauseMenu tmp55 = ::menus::PauseMenu_obj::__new();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(141)
		this->_pauseMenu = tmp55;
		HX_STACK_LINE(142)
		::menus::PauseMenu tmp56 = this->_pauseMenu;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(142)
		this->add(tmp56);
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",151,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",158,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::Player tmp = this->_player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::menus::PauseMenu tmp1 = this->_pauseMenu;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2 = tmp1->isShowing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		tmp->vPad->set_visible(tmp3);
		HX_STACK_LINE(160)
		::menus::PauseMenu tmp4 = this->_pauseMenu;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		bool tmp5 = tmp4->isShowing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		if ((tmp5)){
			HX_STACK_LINE(161)
			::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			int tmp8 = tmp7->justPressed->checkStatus;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			bool tmp9 = tmp6->checkStatus((int)27,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			if ((tmp9)){
				HX_STACK_LINE(161)
				::menus::PauseMenu tmp10 = this->_pauseMenu;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp11 = tmp10->resumeButton->onDown;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(161)
				::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(161)
				bool tmp12 = (_this->callback != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(161)
				if ((tmp12)){
					HX_STACK_LINE(161)
					_this->callback();
				}
				HX_STACK_LINE(161)
				bool tmp13 = (_this->sound != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(161)
				if ((tmp13)){
					HX_STACK_LINE(161)
					_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
				}
			}
			HX_STACK_LINE(162)
			::menus::PauseMenu tmp10 = this->_pauseMenu;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			tmp10->update();
			HX_STACK_LINE(163)
			::flixel::_system::FlxSound tmp11 = this->_bgm;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(163)
			tmp11->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
			HX_STACK_LINE(164)
			return null();
		}
		else{
			HX_STACK_LINE(166)
			::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			int tmp8 = tmp7->justPressed->checkStatus;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			bool tmp9 = tmp6->checkStatus((int)27,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			if ((tmp9)){
				HX_STACK_LINE(166)
				::menus::PauseMenu tmp10 = this->_pauseMenu;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp11 = tmp10->pauseButton->onDown;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(166)
				bool tmp12 = (_this->callback != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				if ((tmp12)){
					HX_STACK_LINE(166)
					_this->callback();
				}
				HX_STACK_LINE(166)
				bool tmp13 = (_this->sound != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				if ((tmp13)){
					HX_STACK_LINE(166)
					_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
				}
			}
			HX_STACK_LINE(167)
			::flixel::_system::FlxSound tmp10 = this->_bgm;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(167)
			tmp10->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic )();
		}
		HX_STACK_LINE(170)
		this->super::update();
		HX_STACK_LINE(172)
		this->collisions();
		HX_STACK_LINE(175)
		::Player tmp6 = this->_player;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		bool tmp7 = tmp6->alive;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		if ((tmp8)){
			HX_STACK_LINE(176)
			::Player tmp9 = this->_player;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			tmp9->revive();
			HX_STACK_LINE(177)
			::Player tmp10 = this->_player;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			::flixel::util::FlxPoint tmp11 = this->_checkpoint;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			::flixel::util::FlxPoint tmp13 = this->_checkpoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(177)
			tmp10->setPosition(tmp12,tmp14);
		}
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::flixel::group::FlxTypedGroup tmp9 = this->_allSprites;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(180)
			Dynamic tmp10 = this->sortByY_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(180)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				Dynamic f = tmp10;		HX_STACK_VAR(f,"f");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,f)
				int __ArgCount() const { return 2; }
				int run(::flixel::FlxSprite a2,::flixel::FlxSprite a3){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","PlayState.hx",180,0xb30d7781)
					HX_STACK_ARG(a2,"a2")
					HX_STACK_ARG(a3,"a3")
					{
						HX_STACK_LINE(180)
						int tmp12 = (int)1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(180)
						::flixel::FlxSprite tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(180)
						::flixel::FlxSprite tmp14 = a3;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(180)
						int tmp15 = f(tmp12,tmp13,tmp14).Cast< int >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(180)
						return tmp15;
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				HX_STACK_LINE(180)
				tmp11 =  Dynamic(new _Function_3_1(f));
			}
			HX_STACK_LINE(180)
			tmp9->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp11);
		}
		HX_STACK_LINE(182)
		::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(182)
		::flixel::input::keyboard::FlxKeyboard tmp10 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(182)
		int tmp11 = tmp10->justPressed->checkStatus;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(182)
		bool tmp12 = tmp9->checkStatus((int)49,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(182)
		if ((tmp12)){
			HX_STACK_LINE(183)
			::Player tmp13 = this->_player;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(183)
			::TiledLevel tmp14 = this->_level;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(183)
			int tmp15 = tmp14->fullWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(183)
			::TiledLevel tmp16 = this->_level;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			int tmp17 = tmp16->fullHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			::flixel::util::FlxRect tmp18 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(183)
			::WeaponAttribute tmp19 = ::WeaponAttribute_obj::__new(::WeaponID_obj::Handgun001);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(183)
			tmp13->setWeapon(tmp18,tmp19);
		}
		else{
			HX_STACK_LINE(184)
			::flixel::input::keyboard::FlxKeyboard tmp13 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(184)
			int tmp15 = tmp14->justPressed->checkStatus;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(184)
			bool tmp16 = tmp13->checkStatus((int)50,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			if ((tmp16)){
				HX_STACK_LINE(185)
				::Player tmp17 = this->_player;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(185)
				::TiledLevel tmp18 = this->_level;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(185)
				int tmp19 = tmp18->fullWidth;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(185)
				::TiledLevel tmp20 = this->_level;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(185)
				int tmp21 = tmp20->fullHeight;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(185)
				::flixel::util::FlxRect tmp22 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(185)
				::WeaponAttribute tmp23 = ::WeaponAttribute_obj::__new(::WeaponID_obj::Handgun002);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(185)
				tmp17->setWeapon(tmp22,tmp23);
			}
			else{
				HX_STACK_LINE(186)
				::flixel::input::keyboard::FlxKeyboard tmp17 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(186)
				::flixel::input::keyboard::FlxKeyboard tmp18 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(186)
				int tmp19 = tmp18->justPressed->checkStatus;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(186)
				bool tmp20 = tmp17->checkStatus((int)51,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(186)
				if ((tmp20)){
					HX_STACK_LINE(187)
					::Player tmp21 = this->_player;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(187)
					::TiledLevel tmp22 = this->_level;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(187)
					int tmp23 = tmp22->fullWidth;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(187)
					::TiledLevel tmp24 = this->_level;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(187)
					int tmp25 = tmp24->fullHeight;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(187)
					::flixel::util::FlxRect tmp26 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp23,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(187)
					::WeaponAttribute tmp27 = ::WeaponAttribute_obj::__new(::WeaponID_obj::Handgun003);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(187)
					tmp21->setWeapon(tmp26,tmp27);
				}
				else{
					HX_STACK_LINE(188)
					::flixel::input::keyboard::FlxKeyboard tmp21 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(188)
					::flixel::input::keyboard::FlxKeyboard tmp22 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(188)
					int tmp23 = tmp22->justPressed->checkStatus;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(188)
					bool tmp24 = tmp21->checkStatus((int)52,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(188)
					if ((tmp24)){
						HX_STACK_LINE(189)
						::Player tmp25 = this->_player;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(189)
						::TiledLevel tmp26 = this->_level;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(189)
						int tmp27 = tmp26->fullWidth;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(189)
						::TiledLevel tmp28 = this->_level;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(189)
						int tmp29 = tmp28->fullHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(189)
						::flixel::util::FlxRect tmp30 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(189)
						::WeaponAttribute tmp31 = ::WeaponAttribute_obj::__new(::WeaponID_obj::SMG001);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(189)
						tmp25->setWeapon(tmp30,tmp31);
					}
					else{
						HX_STACK_LINE(190)
						::flixel::input::keyboard::FlxKeyboard tmp25 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(190)
						::flixel::input::keyboard::FlxKeyboard tmp26 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(190)
						int tmp27 = tmp26->justPressed->checkStatus;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(190)
						bool tmp28 = tmp25->checkStatus((int)53,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(190)
						if ((tmp28)){
							HX_STACK_LINE(191)
							::Player tmp29 = this->_player;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(191)
							::TiledLevel tmp30 = this->_level;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(191)
							int tmp31 = tmp30->fullWidth;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(191)
							::TiledLevel tmp32 = this->_level;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(191)
							int tmp33 = tmp32->fullHeight;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(191)
							::flixel::util::FlxRect tmp34 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(191)
							::WeaponAttribute tmp35 = ::WeaponAttribute_obj::__new(::WeaponID_obj::SMG002);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(191)
							tmp29->setWeapon(tmp34,tmp35);
						}
						else{
							HX_STACK_LINE(192)
							::flixel::input::keyboard::FlxKeyboard tmp29 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(192)
							::flixel::input::keyboard::FlxKeyboard tmp30 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(192)
							int tmp31 = tmp30->justPressed->checkStatus;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(192)
							bool tmp32 = tmp29->checkStatus((int)54,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(192)
							if ((tmp32)){
								HX_STACK_LINE(193)
								::Player tmp33 = this->_player;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(193)
								::TiledLevel tmp34 = this->_level;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(193)
								int tmp35 = tmp34->fullWidth;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(193)
								::TiledLevel tmp36 = this->_level;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(193)
								int tmp37 = tmp36->fullHeight;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(193)
								::flixel::util::FlxRect tmp38 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(193)
								::WeaponAttribute tmp39 = ::WeaponAttribute_obj::__new(::WeaponID_obj::SMG003);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(193)
								tmp33->setWeapon(tmp38,tmp39);
							}
							else{
								HX_STACK_LINE(194)
								::flixel::input::keyboard::FlxKeyboard tmp33 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(194)
								::flixel::input::keyboard::FlxKeyboard tmp34 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(194)
								int tmp35 = tmp34->justPressed->checkStatus;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(194)
								bool tmp36 = tmp33->checkStatus((int)55,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(194)
								if ((tmp36)){
									HX_STACK_LINE(195)
									::Player tmp37 = this->_player;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(195)
									::TiledLevel tmp38 = this->_level;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(195)
									int tmp39 = tmp38->fullWidth;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(195)
									::TiledLevel tmp40 = this->_level;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(195)
									int tmp41 = tmp40->fullHeight;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(195)
									::flixel::util::FlxRect tmp42 = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,tmp39,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(195)
									::WeaponAttribute tmp43 = ::WeaponAttribute_obj::__new(::WeaponID_obj::Handgun004);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(195)
									tmp37->setWeapon(tmp42,tmp43);
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


int PlayState_obj::sortByY( int order,::flixel::FlxObject o1,::flixel::FlxObject o2){
	HX_STACK_FRAME("PlayState","sortByY",0x4a8fefd3,"PlayState.sortByY","PlayState.hx",200,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(order,"order")
	HX_STACK_ARG(o1,"o1")
	HX_STACK_ARG(o2,"o2")
	HX_STACK_LINE(201)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		Float tmp1 = o1->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		Float tmp2 = o1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		Float Value1 = tmp3;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(201)
		Float tmp4 = o2->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		Float tmp5 = o2->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(201)
		Float Value2 = tmp6;		HX_STACK_VAR(Value2,"Value2");
		HX_STACK_LINE(201)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(201)
		bool tmp7 = (Value1 < Value2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		if ((tmp7)){
			HX_STACK_LINE(201)
			result = order;
		}
		else{
			HX_STACK_LINE(201)
			bool tmp8 = (Value1 > Value2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(201)
			if ((tmp8)){
				HX_STACK_LINE(201)
				int tmp9 = order;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(201)
				int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				result = tmp10;
			}
		}
		HX_STACK_LINE(201)
		tmp = result;
	}
	HX_STACK_LINE(201)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,sortByY,return )

Void PlayState_obj::collisions( ){
{
		HX_STACK_FRAME("PlayState","collisions",0x84313132,"PlayState.collisions","PlayState.hx",204,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		::PlayState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::TiledLevel tmp = this->_level;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::flixel::group::FlxGroup tmp1 = tmp->walls;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		::flixel::effects::particles::FlxEmitter tmp2 = this->_littleGibs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		Dynamic tmp3 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		::flixel::FlxG_obj::overlap(tmp1,tmp2,null(),tmp3);
		HX_STACK_LINE(207)
		::TiledLevel tmp4 = this->_level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		::flixel::group::FlxGroup tmp5 = tmp4->floors;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		::flixel::effects::particles::FlxEmitter tmp6 = this->_littleGibs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Dynamic tmp7 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		::flixel::FlxG_obj::overlap(tmp5,tmp6,null(),tmp7);
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			::flixel::group::FlxGroup tmp8 = this->_enemies;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(209)
			Array< ::Dynamic > _g11 = tmp8->members;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				bool tmp9 = (_g1 < _g11->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				if ((tmp10)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::flixel::FlxBasic tmp11 = _g11->__get(_g1).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(209)
				::flixel::FlxBasic enemy = tmp11;		HX_STACK_VAR(enemy,"enemy");
				HX_STACK_LINE(209)
				++(_g1);
				HX_STACK_LINE(210)
				::TiledLevel tmp12 = this->_level;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				::flixel::FlxSprite tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				tmp13 = hx::TCast< ::flixel::FlxSprite >::cast(enemy);
				HX_STACK_LINE(210)
				tmp12->collideWithLevel(tmp13,null(),null());
			}
		}
		HX_STACK_LINE(214)
		::TiledLevel tmp8 = this->_level;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(214)
		::Player tmp9 = this->_player;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(214)
		tmp8->collideWithLevel(tmp9,null(),null());
		HX_STACK_LINE(217)
		::Player tmp10 = this->_player;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		::flixel::group::FlxGroup tmp11 = this->_enemies;		HX_STACK_VAR(tmp11,"tmp11");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		Void run(::flixel::FlxObject p,Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","PlayState.hx",217,0xb30d7781)
			HX_STACK_ARG(p,"p")
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(218)
				::flixel::FlxObject tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(218)
				bool tmp13 = ::flixel::effects::FlxFlicker_obj::isFlickering(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(218)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(218)
				if ((tmp14)){
					HX_STACK_LINE(219)
					::flixel::FlxCamera tmp15 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(219)
					tmp15->shake(((Float).005),((Float)0.3),null(),null(),null());
					HX_STACK_LINE(220)
					::flixel::FlxObject tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					::flixel::effects::FlxFlicker_obj::flicker(tmp16,((Float).7),((Float)0.06),true,true,null(),null());
					HX_STACK_LINE(221)
					p->hurt((int)1);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(217)
		::flixel::FlxG_obj::overlap(tmp10,tmp11, Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(226)
		::Player tmp12 = this->_player;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		::flixel::addons::weapon::FlxWeapon tmp13 = tmp12->weapon;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		if ((tmp14)){
			HX_STACK_LINE(228)
			::TiledLevel tmp15 = this->_level;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(228)
			::flixel::group::FlxGroup tmp16 = tmp15->walls;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(228)
			::Player tmp17 = this->_player;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			::flixel::group::FlxTypedGroup tmp18 = tmp17->weapon->group;		HX_STACK_VAR(tmp18,"tmp18");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			Void run(Dynamic o1,Dynamic o2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","PlayState.hx",228,0xb30d7781)
				HX_STACK_ARG(o1,"o1")
				HX_STACK_ARG(o2,"o2")
				{
					HX_STACK_LINE(229)
					Dynamic tmp19 = o1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(229)
					o2->__Field(HX_HCSTRING("hitWall","\xfd","\xf4","\x77","\xe4"), hx::paccDynamic )(tmp19);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(228)
			::flixel::FlxG_obj::overlap(tmp16,tmp18, Dynamic(new _Function_2_1()),null());
			HX_STACK_LINE(233)
			::flixel::group::FlxGroup tmp19 = this->_enemies;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(233)
			::Player tmp20 = this->_player;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(233)
			::flixel::group::FlxTypedGroup tmp21 = tmp20->weapon->group;		HX_STACK_VAR(tmp21,"tmp21");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::PlayState,_g)
			int __ArgCount() const { return 2; }
			Void run(Dynamic obj1,Dynamic obj2){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","PlayState.hx",233,0xb30d7781)
				HX_STACK_ARG(obj1,"obj1")
				HX_STACK_ARG(obj2,"obj2")
				{
					HX_STACK_LINE(234)
					Dynamic tmp22 = obj1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(234)
					obj2->__Field(HX_HCSTRING("hitTarget","\x04","\xae","\xfe","\xba"), hx::paccDynamic )(tmp22,true);
					HX_STACK_LINE(235)
					bool tmp23 = obj1->__Field(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(235)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(235)
					if ((tmp24)){
						HX_STACK_LINE(236)
						::flixel::FlxSprite tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(236)
						tmp25 = hx::TCast< ::flixel::FlxSprite >::cast(obj1);
						HX_STACK_LINE(236)
						_g->_littleGibs->at(tmp25);
						HX_STACK_LINE(237)
						_g->_littleGibs->start(true,(int)3,(int)0,(int)20,null());
					}
					HX_STACK_LINE(239)
					bool tmp25 = (obj1->__Field(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"), hx::paccDynamic ) <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(239)
					if ((tmp25)){
						HX_STACK_LINE(240)
						Float tmp26 = (Float(obj1->__Field(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"), hx::paccDynamic )) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(240)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(240)
						hx::AddEq(_g->_player->exp,tmp27);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))


			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
			int __ArgCount() const { return 2; }
			bool run(::flixel::FlxSprite obj1,::flixel::FlxSprite obj2){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","PlayState.hx",242,0xb30d7781)
				HX_STACK_ARG(obj1,"obj1")
				HX_STACK_ARG(obj2,"obj2")
				{
					HX_STACK_LINE(242)
					::flixel::FlxSprite tmp22 = obj1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(242)
					::flixel::FlxSprite tmp23 = obj2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(242)
					bool tmp24 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp22,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(242)
					return tmp24;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(233)
			::flixel::FlxG_obj::overlap(tmp19,tmp21, Dynamic(new _Function_2_2(_g)), Dynamic(new _Function_2_3()));
		}
		HX_STACK_LINE(245)
		::Player tmp15 = this->_player;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(245)
		::flixel::addons::weapon::FlxWeapon tmp16 = tmp15->weaponToRemove;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(245)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(245)
		if ((tmp17)){
			HX_STACK_LINE(247)
			::TiledLevel tmp18 = this->_level;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(247)
			::flixel::group::FlxGroup tmp19 = tmp18->walls;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(247)
			::Player tmp20 = this->_player;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(247)
			::flixel::group::FlxTypedGroup tmp21 = tmp20->weaponToRemove->group;		HX_STACK_VAR(tmp21,"tmp21");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			Void run(Dynamic o1,Dynamic o2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","PlayState.hx",247,0xb30d7781)
				HX_STACK_ARG(o1,"o1")
				HX_STACK_ARG(o2,"o2")
				{
					HX_STACK_LINE(248)
					Dynamic tmp22 = o1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(248)
					o2->__Field(HX_HCSTRING("hitWall","\xfd","\xf4","\x77","\xe4"), hx::paccDynamic )(tmp22);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(247)
			::flixel::FlxG_obj::overlap(tmp19,tmp21, Dynamic(new _Function_2_1()),null());
			HX_STACK_LINE(252)
			::flixel::group::FlxGroup tmp22 = this->_enemies;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(252)
			::Player tmp23 = this->_player;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(252)
			::flixel::group::FlxTypedGroup tmp24 = tmp23->weaponToRemove->group;		HX_STACK_VAR(tmp24,"tmp24");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::PlayState,_g)
			int __ArgCount() const { return 2; }
			Void run(Dynamic obj1,Dynamic obj2){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","PlayState.hx",252,0xb30d7781)
				HX_STACK_ARG(obj1,"obj1")
				HX_STACK_ARG(obj2,"obj2")
				{
					HX_STACK_LINE(253)
					Dynamic tmp25 = obj1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(253)
					obj2->__Field(HX_HCSTRING("hitTarget","\x04","\xae","\xfe","\xba"), hx::paccDynamic )(tmp25,true);
					HX_STACK_LINE(254)
					bool tmp26 = obj1->__Field(HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(254)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(254)
					if ((tmp27)){
						HX_STACK_LINE(255)
						::flixel::FlxSprite tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(255)
						tmp28 = hx::TCast< ::flixel::FlxSprite >::cast(obj1);
						HX_STACK_LINE(255)
						_g->_littleGibs->at(tmp28);
						HX_STACK_LINE(256)
						_g->_littleGibs->start(true,(int)3,(int)0,(int)20,null());
					}
					HX_STACK_LINE(258)
					bool tmp28 = (obj1->__Field(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"), hx::paccDynamic ) <= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(258)
					if ((tmp28)){
						HX_STACK_LINE(259)
						Float tmp29 = (Float(obj1->__Field(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"), hx::paccDynamic )) / Float((int)2));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(259)
						int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(259)
						hx::AddEq(_g->_player->exp,tmp30);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))


			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
			int __ArgCount() const { return 2; }
			bool run(::flixel::FlxSprite obj1,::flixel::FlxSprite obj2){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","PlayState.hx",261,0xb30d7781)
				HX_STACK_ARG(obj1,"obj1")
				HX_STACK_ARG(obj2,"obj2")
				{
					HX_STACK_LINE(261)
					::flixel::FlxSprite tmp25 = obj1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(261)
					::flixel::FlxSprite tmp26 = obj2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(261)
					bool tmp27 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp25,tmp26,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(261)
					return tmp27;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(252)
			::flixel::FlxG_obj::overlap(tmp22,tmp24, Dynamic(new _Function_2_2(_g)), Dynamic(new _Function_2_3()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,collisions,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_checkpoint,"_checkpoint");
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_allSprites,"_allSprites");
	HX_MARK_MEMBER_NAME(_littleGibs,"_littleGibs");
	HX_MARK_MEMBER_NAME(_fps,"_fps");
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_level,"_level");
	HX_MARK_MEMBER_NAME(_environment,"_environment");
	HX_MARK_MEMBER_NAME(_bgm,"_bgm");
	HX_MARK_MEMBER_NAME(_pauseMenu,"_pauseMenu");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_checkpoint,"_checkpoint");
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_allSprites,"_allSprites");
	HX_VISIT_MEMBER_NAME(_littleGibs,"_littleGibs");
	HX_VISIT_MEMBER_NAME(_fps,"_fps");
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_level,"_level");
	HX_VISIT_MEMBER_NAME(_environment,"_environment");
	HX_VISIT_MEMBER_NAME(_bgm,"_bgm");
	HX_VISIT_MEMBER_NAME(_pauseMenu,"_pauseMenu");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_fps") ) { return _fps; }
		if (HX_FIELD_EQ(inName,"_bgm") ) { return _bgm; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { return _pause; }
		if (HX_FIELD_EQ(inName,"_level") ) { return _level; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"sortByY") ) { return sortByY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { return _enemies; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_pauseMenu") ) { return _pauseMenu; }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_checkpoint") ) { return _checkpoint; }
		if (HX_FIELD_EQ(inName,"_allSprites") ) { return _allSprites; }
		if (HX_FIELD_EQ(inName,"_littleGibs") ) { return _littleGibs; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_environment") ) { return _environment; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_fps") ) { _fps=inValue.Cast< ::FPS >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bgm") ) { _bgm=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_level") ) { _level=inValue.Cast< ::TiledLevel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_pauseMenu") ) { _pauseMenu=inValue.Cast< ::menus::PauseMenu >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_checkpoint") ) { _checkpoint=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allSprites") ) { _allSprites=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_littleGibs") ) { _littleGibs=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_environment") ) { _environment=inValue.Cast< ::Environment >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_checkpoint","\xa7","\x13","\xdc","\x15"));
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	outFields->push(HX_HCSTRING("_allSprites","\xcc","\x7a","\xbd","\xfa"));
	outFields->push(HX_HCSTRING("_littleGibs","\xa8","\xad","\xcf","\xbe"));
	outFields->push(HX_HCSTRING("_fps","\xea","\x0c","\x19","\x3f"));
	outFields->push(HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c"));
	outFields->push(HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9"));
	outFields->push(HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"));
	outFields->push(HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13"));
	outFields->push(HX_HCSTRING("_bgm","\x09","\xfc","\x15","\x3f"));
	outFields->push(HX_HCSTRING("_pauseMenu","\x76","\x77","\x62","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(PlayState_obj,_checkpoint),HX_HCSTRING("_checkpoint","\xa7","\x13","\xdc","\x15")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_allSprites),HX_HCSTRING("_allSprites","\xcc","\x7a","\xbd","\xfa")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(PlayState_obj,_littleGibs),HX_HCSTRING("_littleGibs","\xa8","\xad","\xcf","\xbe")},
	{hx::fsObject /*::FPS*/ ,(int)offsetof(PlayState_obj,_fps),HX_HCSTRING("_fps","\xea","\x0c","\x19","\x3f")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,_enemies),HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_pause),HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9")},
	{hx::fsObject /*::TiledLevel*/ ,(int)offsetof(PlayState_obj,_level),HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e")},
	{hx::fsObject /*::Environment*/ ,(int)offsetof(PlayState_obj,_environment),HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(PlayState_obj,_bgm),HX_HCSTRING("_bgm","\x09","\xfc","\x15","\x3f")},
	{hx::fsObject /*::menus::PauseMenu*/ ,(int)offsetof(PlayState_obj,_pauseMenu),HX_HCSTRING("_pauseMenu","\x76","\x77","\x62","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_checkpoint","\xa7","\x13","\xdc","\x15"),
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("_allSprites","\xcc","\x7a","\xbd","\xfa"),
	HX_HCSTRING("_littleGibs","\xa8","\xad","\xcf","\xbe"),
	HX_HCSTRING("_fps","\xea","\x0c","\x19","\x3f"),
	HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c"),
	HX_HCSTRING("_pause","\x37","\x1e","\x3f","\xb9"),
	HX_HCSTRING("_level","\xc5","\x5c","\x4a","\x6e"),
	HX_HCSTRING("_environment","\xd4","\xb9","\x59","\x13"),
	HX_HCSTRING("_bgm","\x09","\xfc","\x15","\x3f"),
	HX_HCSTRING("_pauseMenu","\x76","\x77","\x62","\xa8"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("sortByY","\xe4","\xc5","\x4e","\x00"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PlayState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

