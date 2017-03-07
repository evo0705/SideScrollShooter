#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_WeaponAttribute
#include <WeaponAttribute.h>
#endif
#ifndef INCLUDED_WeaponID
#include <WeaponID.h>
#endif
#ifndef INCLUDED_WeaponType
#include <WeaponType.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void WeaponAttribute_obj::__construct(::WeaponID WID)
{
HX_STACK_FRAME("WeaponAttribute","new",0x95b46672,"WeaponAttribute.new","WeaponAttribute.hx",28,0x5107ad3e)
HX_STACK_THIS(this)
HX_STACK_ARG(WID,"WID")
{
	HX_STACK_LINE(58)
	this->elasticity = ((Float)0);
	HX_STACK_LINE(57)
	this->randomLifeSpan = (int)0;
	HX_STACK_LINE(56)
	this->randomPosition = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	HX_STACK_LINE(55)
	this->randomSpeed = (int)0;
	HX_STACK_LINE(54)
	this->randomAngle = (int)0;
	HX_STACK_LINE(50)
	this->bulletOffsetHeight = ((Float)0);
	HX_STACK_LINE(49)
	this->bulletOffsetWidth = ((Float)0);
	HX_STACK_LINE(38)
	this->bulletCount = (int)10;
	HX_STACK_LINE(62)
	this->weaponID = WID;
	HX_STACK_LINE(63)
	bool tmp = (WID == ::WeaponID_obj::Handgun004);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(67)
			::flixel::_system::frontEnds::SoundFrontEnd tmp1 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			::flixel::_system::FlxSound tmp2 = tmp1->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0001.ogg","\xae","\x10","\x71","\x28"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			::flixel::_system::FlxSound SoundFXFire = tmp2;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
			HX_STACK_LINE(64)
			this->type = ::WeaponType_obj::Handgun;
			HX_STACK_LINE(64)
			this->brand = HX_HCSTRING("Terra","\xb0","\x2b","\xc2","\xa0");
			HX_STACK_LINE(64)
			this->name = HX_HCSTRING("Light Blaster","\x9b","\xac","\x66","\x6d");
			HX_STACK_LINE(64)
			this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
			HX_STACK_LINE(64)
			this->bulletAsset = HX_HCSTRING("assets/images/bullet-0002.png","\x9d","\xc5","\xfa","\x1d");
			HX_STACK_LINE(64)
			this->fireRate = (int)500;
			HX_STACK_LINE(64)
			this->bulletCost = (int)0;
			HX_STACK_LINE(64)
			this->minDamage = (int)1;
			HX_STACK_LINE(64)
			this->maxDamage = (int)3;
			HX_STACK_LINE(64)
			this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
			HX_STACK_LINE(64)
			this->bulletWidth = (int)10;
			HX_STACK_LINE(64)
			this->bulletOffsetWidth = (int)26;
			HX_STACK_LINE(64)
			this->bulletHeight = (int)9;
			HX_STACK_LINE(64)
			this->bulletOffsetHeight = ((Float)10.5);
			HX_STACK_LINE(64)
			this->bulletSpeed = (int)200;
			HX_STACK_LINE(64)
			this->bulletLifeSpan = (int)2;
			HX_STACK_LINE(64)
			this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
			HX_STACK_LINE(64)
			this->soundFXFire = SoundFXFire;
		}
		HX_STACK_LINE(68)
		this->randomAngle = (int)1;
	}
	else{
		HX_STACK_LINE(69)
		bool tmp1 = (WID == ::WeaponID_obj::Handgun001);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(73)
				::flixel::_system::frontEnds::SoundFrontEnd tmp2 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				::flixel::_system::FlxSound tmp3 = tmp2->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				::flixel::_system::FlxSound SoundFXFire = tmp3;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
				HX_STACK_LINE(70)
				this->type = ::WeaponType_obj::Handgun;
				HX_STACK_LINE(70)
				this->brand = HX_HCSTRING("Daisy","\xd2","\x35","\xad","\x67");
				HX_STACK_LINE(70)
				this->name = HX_HCSTRING("9mm Pistol","\xfe","\x8b","\x83","\xec");
				HX_STACK_LINE(70)
				this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
				HX_STACK_LINE(70)
				this->bulletAsset = HX_HCSTRING("assets/images/bullet-0003.png","\x1e","\x5a","\x61","\xb1");
				HX_STACK_LINE(70)
				this->fireRate = (int)500;
				HX_STACK_LINE(70)
				this->bulletCost = (int)1;
				HX_STACK_LINE(70)
				this->minDamage = (int)5;
				HX_STACK_LINE(70)
				this->maxDamage = (int)8;
				HX_STACK_LINE(70)
				this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
				HX_STACK_LINE(70)
				this->bulletWidth = (int)10;
				HX_STACK_LINE(70)
				this->bulletOffsetWidth = (int)26;
				HX_STACK_LINE(70)
				this->bulletHeight = (int)9;
				HX_STACK_LINE(70)
				this->bulletOffsetHeight = ((Float)10.5);
				HX_STACK_LINE(70)
				this->bulletSpeed = (int)180;
				HX_STACK_LINE(70)
				this->bulletLifeSpan = (int)2;
				HX_STACK_LINE(70)
				this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
				HX_STACK_LINE(70)
				this->soundFXFire = SoundFXFire;
			}
			HX_STACK_LINE(74)
			this->randomAngle = (int)1;
		}
		else{
			HX_STACK_LINE(75)
			bool tmp2 = (WID == ::WeaponID_obj::Handgun002);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			if ((tmp2)){
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(79)
					::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					::flixel::_system::FlxSound tmp4 = tmp3->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					::flixel::_system::FlxSound SoundFXFire = tmp4;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
					HX_STACK_LINE(76)
					this->type = ::WeaponType_obj::Handgun;
					HX_STACK_LINE(76)
					this->brand = HX_HCSTRING("Daisy","\xd2","\x35","\xad","\x67");
					HX_STACK_LINE(76)
					this->name = HX_HCSTRING("9mm Powered Pistol","\x1a","\xc4","\x29","\xe8");
					HX_STACK_LINE(76)
					this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
					HX_STACK_LINE(76)
					this->bulletAsset = HX_HCSTRING("assets/images/bullet-0003.png","\x1e","\x5a","\x61","\xb1");
					HX_STACK_LINE(76)
					this->fireRate = (int)500;
					HX_STACK_LINE(76)
					this->bulletCost = (int)1;
					HX_STACK_LINE(76)
					this->minDamage = (int)10;
					HX_STACK_LINE(76)
					this->maxDamage = (int)20;
					HX_STACK_LINE(76)
					this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
					HX_STACK_LINE(76)
					this->bulletWidth = (int)10;
					HX_STACK_LINE(76)
					this->bulletOffsetWidth = (int)26;
					HX_STACK_LINE(76)
					this->bulletHeight = (int)9;
					HX_STACK_LINE(76)
					this->bulletOffsetHeight = ((Float)10.5);
					HX_STACK_LINE(76)
					this->bulletSpeed = (int)190;
					HX_STACK_LINE(76)
					this->bulletLifeSpan = (int)2;
					HX_STACK_LINE(76)
					this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
					HX_STACK_LINE(76)
					this->soundFXFire = SoundFXFire;
				}
				HX_STACK_LINE(80)
				this->randomAngle = (int)1;
			}
			else{
				HX_STACK_LINE(81)
				bool tmp3 = (WID == ::WeaponID_obj::Handgun003);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(81)
				if ((tmp3)){
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(85)
						::flixel::_system::frontEnds::SoundFrontEnd tmp4 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(85)
						::flixel::_system::FlxSound tmp5 = tmp4->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(85)
						::flixel::_system::FlxSound SoundFXFire = tmp5;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
						HX_STACK_LINE(82)
						this->type = ::WeaponType_obj::Handgun;
						HX_STACK_LINE(82)
						this->brand = HX_HCSTRING("Daisy","\xd2","\x35","\xad","\x67");
						HX_STACK_LINE(82)
						this->name = HX_HCSTRING("SA Compact","\xf1","\xfd","\x78","\x5e");
						HX_STACK_LINE(82)
						this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
						HX_STACK_LINE(82)
						this->bulletAsset = HX_HCSTRING("assets/images/bullet-0003.png","\x1e","\x5a","\x61","\xb1");
						HX_STACK_LINE(82)
						this->fireRate = (int)500;
						HX_STACK_LINE(82)
						this->bulletCost = (int)1;
						HX_STACK_LINE(82)
						this->minDamage = (int)25;
						HX_STACK_LINE(82)
						this->maxDamage = (int)40;
						HX_STACK_LINE(82)
						this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
						HX_STACK_LINE(82)
						this->bulletWidth = (int)10;
						HX_STACK_LINE(82)
						this->bulletOffsetWidth = (int)26;
						HX_STACK_LINE(82)
						this->bulletHeight = (int)9;
						HX_STACK_LINE(82)
						this->bulletOffsetHeight = ((Float)10.5);
						HX_STACK_LINE(82)
						this->bulletSpeed = (int)200;
						HX_STACK_LINE(82)
						this->bulletLifeSpan = (int)2;
						HX_STACK_LINE(82)
						this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
						HX_STACK_LINE(82)
						this->soundFXFire = SoundFXFire;
					}
					HX_STACK_LINE(86)
					this->randomAngle = (int)1;
				}
				else{
					HX_STACK_LINE(87)
					bool tmp4 = (WID == ::WeaponID_obj::SMG001);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					if ((tmp4)){
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(91)
							::flixel::_system::frontEnds::SoundFrontEnd tmp5 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(91)
							::flixel::_system::FlxSound tmp6 = tmp5->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(91)
							::flixel::_system::FlxSound SoundFXFire = tmp6;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
							HX_STACK_LINE(88)
							this->type = ::WeaponType_obj::SMG;
							HX_STACK_LINE(88)
							this->brand = HX_HCSTRING("Jupitec","\xae","\x48","\x96","\x8f");
							HX_STACK_LINE(88)
							this->name = HX_HCSTRING("P30","\xed","\xe0","\x3c","\x00");
							HX_STACK_LINE(88)
							this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
							HX_STACK_LINE(88)
							this->bulletAsset = HX_HCSTRING("assets/images/bullet-0002.png","\x9d","\xc5","\xfa","\x1d");
							HX_STACK_LINE(88)
							this->fireRate = (int)150;
							HX_STACK_LINE(88)
							this->bulletCost = (int)1;
							HX_STACK_LINE(88)
							this->minDamage = (int)3;
							HX_STACK_LINE(88)
							this->maxDamage = (int)5;
							HX_STACK_LINE(88)
							this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
							HX_STACK_LINE(88)
							this->bulletWidth = (int)10;
							HX_STACK_LINE(88)
							this->bulletOffsetWidth = (int)26;
							HX_STACK_LINE(88)
							this->bulletHeight = (int)9;
							HX_STACK_LINE(88)
							this->bulletOffsetHeight = ((Float)10.5);
							HX_STACK_LINE(88)
							this->bulletSpeed = (int)200;
							HX_STACK_LINE(88)
							this->bulletLifeSpan = (int)2;
							HX_STACK_LINE(88)
							this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
							HX_STACK_LINE(88)
							this->soundFXFire = SoundFXFire;
						}
						HX_STACK_LINE(92)
						::flixel::util::FlxPoint tmp5 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(92)
						this->randomPosition = tmp5;
						HX_STACK_LINE(93)
						this->randomAngle = (int)5;
					}
					else{
						HX_STACK_LINE(94)
						bool tmp5 = (WID == ::WeaponID_obj::SMG002);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(94)
						if ((tmp5)){
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(98)
								::flixel::_system::frontEnds::SoundFrontEnd tmp6 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(98)
								::flixel::_system::FlxSound tmp7 = tmp6->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(98)
								::flixel::_system::FlxSound SoundFXFire = tmp7;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
								HX_STACK_LINE(95)
								this->type = ::WeaponType_obj::SMG;
								HX_STACK_LINE(95)
								this->brand = HX_HCSTRING("Jupitec","\xae","\x48","\x96","\x8f");
								HX_STACK_LINE(95)
								this->name = HX_HCSTRING("P47","\xd3","\xe1","\x3c","\x00");
								HX_STACK_LINE(95)
								this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
								HX_STACK_LINE(95)
								this->bulletAsset = HX_HCSTRING("assets/images/bullet-0002.png","\x9d","\xc5","\xfa","\x1d");
								HX_STACK_LINE(95)
								this->fireRate = (int)150;
								HX_STACK_LINE(95)
								this->bulletCost = (int)1;
								HX_STACK_LINE(95)
								this->minDamage = (int)5;
								HX_STACK_LINE(95)
								this->maxDamage = (int)12;
								HX_STACK_LINE(95)
								this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
								HX_STACK_LINE(95)
								this->bulletWidth = (int)10;
								HX_STACK_LINE(95)
								this->bulletOffsetWidth = (int)26;
								HX_STACK_LINE(95)
								this->bulletHeight = (int)9;
								HX_STACK_LINE(95)
								this->bulletOffsetHeight = ((Float)10.5);
								HX_STACK_LINE(95)
								this->bulletSpeed = (int)220;
								HX_STACK_LINE(95)
								this->bulletLifeSpan = (int)2;
								HX_STACK_LINE(95)
								this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
								HX_STACK_LINE(95)
								this->soundFXFire = SoundFXFire;
							}
							HX_STACK_LINE(99)
							::flixel::util::FlxPoint tmp6 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(99)
							this->randomPosition = tmp6;
							HX_STACK_LINE(100)
							this->randomAngle = (int)5;
						}
						else{
							HX_STACK_LINE(101)
							bool tmp6 = (WID == ::WeaponID_obj::SMG003);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(101)
							if ((tmp6)){
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(105)
									::flixel::_system::frontEnds::SoundFrontEnd tmp7 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(105)
									::flixel::_system::FlxSound tmp8 = tmp7->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(HX_HCSTRING("assets/sounds/gun-0002.ogg","\x2f","\xa5","\xd7","\xbb"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(105)
									::flixel::_system::FlxSound SoundFXFire = tmp8;		HX_STACK_VAR(SoundFXFire,"SoundFXFire");
									HX_STACK_LINE(102)
									this->type = ::WeaponType_obj::SMG;
									HX_STACK_LINE(102)
									this->brand = HX_HCSTRING("Jupitec","\xae","\x48","\x96","\x8f");
									HX_STACK_LINE(102)
									this->name = HX_HCSTRING("P60","\x8a","\xe3","\x3c","\x00");
									HX_STACK_LINE(102)
									this->asset = HX_HCSTRING("assets/images/gun-0001.png","\x94","\x48","\xc5","\xb8");
									HX_STACK_LINE(102)
									this->bulletAsset = HX_HCSTRING("assets/images/bullet-0003.png","\x1e","\x5a","\x61","\xb1");
									HX_STACK_LINE(102)
									this->fireRate = (int)50;
									HX_STACK_LINE(102)
									this->bulletCost = (int)1;
									HX_STACK_LINE(102)
									this->minDamage = (int)15;
									HX_STACK_LINE(102)
									this->maxDamage = (int)30;
									HX_STACK_LINE(102)
									this->animations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45")).Add(Array_obj< int >::__new().Add((int)2)).Add((int)3).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)3).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2)).Add((int)60).Add(false));
									HX_STACK_LINE(102)
									this->bulletWidth = (int)10;
									HX_STACK_LINE(102)
									this->bulletOffsetWidth = (int)26;
									HX_STACK_LINE(102)
									this->bulletHeight = (int)9;
									HX_STACK_LINE(102)
									this->bulletOffsetHeight = ((Float)10.5);
									HX_STACK_LINE(102)
									this->bulletSpeed = (int)300;
									HX_STACK_LINE(102)
									this->bulletLifeSpan = (int)2;
									HX_STACK_LINE(102)
									this->bulletAnimations = Array_obj< ::Dynamic >::__new().Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43")).Add(Array_obj< int >::__new().Add((int)0)).Add((int)15).Add(true)).Add(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47")).Add(Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3)).Add((int)15).Add(false));
									HX_STACK_LINE(102)
									this->soundFXFire = SoundFXFire;
								}
								HX_STACK_LINE(106)
								::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(106)
								this->randomPosition = tmp7;
								HX_STACK_LINE(107)
								this->randomAngle = (int)5;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(110)
	int tmp1 = this->fireRate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	Float tmp2 = (Float((int)1000) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	Float tmp3 = this->bulletLifeSpan;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	int tmp4 = this->randomLifeSpan;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(110)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(110)
	this->bulletCount = tmp7;
}
;
	return null();
}

//WeaponAttribute_obj::~WeaponAttribute_obj() { }

Dynamic WeaponAttribute_obj::__CreateEmpty() { return  new WeaponAttribute_obj; }
hx::ObjectPtr< WeaponAttribute_obj > WeaponAttribute_obj::__new(::WeaponID WID)
{  hx::ObjectPtr< WeaponAttribute_obj > _result_ = new WeaponAttribute_obj();
	_result_->__construct(WID);
	return _result_;}

Dynamic WeaponAttribute_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeaponAttribute_obj > _result_ = new WeaponAttribute_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void WeaponAttribute_obj::setAttribute( ::WeaponType WType,::String Brand,::String Name,::String Asset,::String BulletAsset,int FireRate,Float BulletLifeSpan,int BulletSpeed,int BulletCost,Float MinDamage,Float MaxDamage,int BulletWidth,int BulletHeight,Float BulletOffsetWidth,Float BulletOffsetHeight,Array< ::Dynamic > Animations,Array< ::Dynamic > BulletAnimations,::flixel::_system::FlxSound SoundFXFire){
{
		HX_STACK_FRAME("WeaponAttribute","setAttribute",0x055947c8,"WeaponAttribute.setAttribute","WeaponAttribute.hx",138,0x5107ad3e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(WType,"WType")
		HX_STACK_ARG(Brand,"Brand")
		HX_STACK_ARG(Name,"Name")
		HX_STACK_ARG(Asset,"Asset")
		HX_STACK_ARG(BulletAsset,"BulletAsset")
		HX_STACK_ARG(FireRate,"FireRate")
		HX_STACK_ARG(BulletLifeSpan,"BulletLifeSpan")
		HX_STACK_ARG(BulletSpeed,"BulletSpeed")
		HX_STACK_ARG(BulletCost,"BulletCost")
		HX_STACK_ARG(MinDamage,"MinDamage")
		HX_STACK_ARG(MaxDamage,"MaxDamage")
		HX_STACK_ARG(BulletWidth,"BulletWidth")
		HX_STACK_ARG(BulletHeight,"BulletHeight")
		HX_STACK_ARG(BulletOffsetWidth,"BulletOffsetWidth")
		HX_STACK_ARG(BulletOffsetHeight,"BulletOffsetHeight")
		HX_STACK_ARG(Animations,"Animations")
		HX_STACK_ARG(BulletAnimations,"BulletAnimations")
		HX_STACK_ARG(SoundFXFire,"SoundFXFire")
		HX_STACK_LINE(139)
		this->type = WType;
		HX_STACK_LINE(139)
		this->brand = Brand;
		HX_STACK_LINE(139)
		this->name = Name;
		HX_STACK_LINE(139)
		this->asset = Asset;
		HX_STACK_LINE(139)
		this->bulletAsset = BulletAsset;
		HX_STACK_LINE(139)
		this->fireRate = FireRate;
		HX_STACK_LINE(140)
		this->bulletCost = BulletCost;
		HX_STACK_LINE(140)
		this->minDamage = MinDamage;
		HX_STACK_LINE(140)
		this->maxDamage = MaxDamage;
		HX_STACK_LINE(140)
		this->animations = Animations;
		HX_STACK_LINE(140)
		this->bulletWidth = BulletWidth;
		HX_STACK_LINE(141)
		this->bulletOffsetWidth = BulletOffsetWidth;
		HX_STACK_LINE(141)
		this->bulletHeight = BulletHeight;
		HX_STACK_LINE(141)
		this->bulletOffsetHeight = BulletOffsetHeight;
		HX_STACK_LINE(142)
		this->bulletSpeed = BulletSpeed;
		HX_STACK_LINE(142)
		this->bulletLifeSpan = BulletLifeSpan;
		HX_STACK_LINE(142)
		this->bulletAnimations = BulletAnimations;
		HX_STACK_LINE(142)
		this->soundFXFire = SoundFXFire;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC18(WeaponAttribute_obj,setAttribute,(void))

Float WeaponAttribute_obj::MAX_BULLET_SPEED;


WeaponAttribute_obj::WeaponAttribute_obj()
{
}

void WeaponAttribute_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeaponAttribute);
	HX_MARK_MEMBER_NAME(weaponID,"weaponID");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(brand,"brand");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(asset,"asset");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(bulletCount,"bulletCount");
	HX_MARK_MEMBER_NAME(bulletCost,"bulletCost");
	HX_MARK_MEMBER_NAME(minDamage,"minDamage");
	HX_MARK_MEMBER_NAME(maxDamage,"maxDamage");
	HX_MARK_MEMBER_NAME(soundFXFire,"soundFXFire");
	HX_MARK_MEMBER_NAME(soundFXHit,"soundFXHit");
	HX_MARK_MEMBER_NAME(soundFXProjecting,"soundFXProjecting");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(bulletAsset,"bulletAsset");
	HX_MARK_MEMBER_NAME(bulletWidth,"bulletWidth");
	HX_MARK_MEMBER_NAME(bulletHeight,"bulletHeight");
	HX_MARK_MEMBER_NAME(bulletOffsetWidth,"bulletOffsetWidth");
	HX_MARK_MEMBER_NAME(bulletOffsetHeight,"bulletOffsetHeight");
	HX_MARK_MEMBER_NAME(bulletAnimations,"bulletAnimations");
	HX_MARK_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_MARK_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_MARK_MEMBER_NAME(randomAngle,"randomAngle");
	HX_MARK_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_MARK_MEMBER_NAME(randomPosition,"randomPosition");
	HX_MARK_MEMBER_NAME(randomLifeSpan,"randomLifeSpan");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_END_CLASS();
}

void WeaponAttribute_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(weaponID,"weaponID");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(brand,"brand");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(asset,"asset");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(bulletCount,"bulletCount");
	HX_VISIT_MEMBER_NAME(bulletCost,"bulletCost");
	HX_VISIT_MEMBER_NAME(minDamage,"minDamage");
	HX_VISIT_MEMBER_NAME(maxDamage,"maxDamage");
	HX_VISIT_MEMBER_NAME(soundFXFire,"soundFXFire");
	HX_VISIT_MEMBER_NAME(soundFXHit,"soundFXHit");
	HX_VISIT_MEMBER_NAME(soundFXProjecting,"soundFXProjecting");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(bulletAsset,"bulletAsset");
	HX_VISIT_MEMBER_NAME(bulletWidth,"bulletWidth");
	HX_VISIT_MEMBER_NAME(bulletHeight,"bulletHeight");
	HX_VISIT_MEMBER_NAME(bulletOffsetWidth,"bulletOffsetWidth");
	HX_VISIT_MEMBER_NAME(bulletOffsetHeight,"bulletOffsetHeight");
	HX_VISIT_MEMBER_NAME(bulletAnimations,"bulletAnimations");
	HX_VISIT_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_VISIT_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_VISIT_MEMBER_NAME(randomAngle,"randomAngle");
	HX_VISIT_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_VISIT_MEMBER_NAME(randomPosition,"randomPosition");
	HX_VISIT_MEMBER_NAME(randomLifeSpan,"randomLifeSpan");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
}

Dynamic WeaponAttribute_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brand") ) { return brand; }
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weaponID") ) { return weaponID; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { return minDamage; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { return maxDamage; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletCost") ) { return bulletCost; }
		if (HX_FIELD_EQ(inName,"soundFXHit") ) { return soundFXHit; }
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletCount") ) { return bulletCount; }
		if (HX_FIELD_EQ(inName,"soundFXFire") ) { return soundFXFire; }
		if (HX_FIELD_EQ(inName,"bulletAsset") ) { return bulletAsset; }
		if (HX_FIELD_EQ(inName,"bulletWidth") ) { return bulletWidth; }
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { return bulletSpeed; }
		if (HX_FIELD_EQ(inName,"randomAngle") ) { return randomAngle; }
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { return randomSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletHeight") ) { return bulletHeight; }
		if (HX_FIELD_EQ(inName,"setAttribute") ) { return setAttribute_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { return bulletLifeSpan; }
		if (HX_FIELD_EQ(inName,"randomPosition") ) { return randomPosition; }
		if (HX_FIELD_EQ(inName,"randomLifeSpan") ) { return randomLifeSpan; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletAnimations") ) { return bulletAnimations; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundFXProjecting") ) { return soundFXProjecting; }
		if (HX_FIELD_EQ(inName,"bulletOffsetWidth") ) { return bulletOffsetWidth; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bulletOffsetHeight") ) { return bulletOffsetHeight; }
	}
	return super::__Field(inName,inCallProp);
}

bool WeaponAttribute_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAX_BULLET_SPEED") ) { outValue = MAX_BULLET_SPEED; return true;  }
	}
	return false;
}

Dynamic WeaponAttribute_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::WeaponType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"brand") ) { brand=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weaponID") ) { weaponID=inValue.Cast< ::WeaponID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { minDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { maxDamage=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletCost") ) { bulletCost=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundFXHit") ) { soundFXHit=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletCount") ) { bulletCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundFXFire") ) { soundFXFire=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletAsset") ) { bulletAsset=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletWidth") ) { bulletWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { bulletSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomAngle") ) { randomAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { randomSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletHeight") ) { bulletHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { bulletLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomPosition") ) { randomPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomLifeSpan") ) { randomLifeSpan=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletAnimations") ) { bulletAnimations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundFXProjecting") ) { soundFXProjecting=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletOffsetWidth") ) { bulletOffsetWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bulletOffsetHeight") ) { bulletOffsetHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeaponAttribute_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MAX_BULLET_SPEED") ) { MAX_BULLET_SPEED=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void WeaponAttribute_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("weaponID","\xb7","\x45","\x9c","\x8d"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("brand","\x07","\x27","\xe9","\xb8"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("bulletCount","\x2d","\xb3","\x3c","\xfd"));
	outFields->push(HX_HCSTRING("bulletCost","\xaf","\xc5","\x51","\x0a"));
	outFields->push(HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"));
	outFields->push(HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"));
	outFields->push(HX_HCSTRING("soundFXFire","\x37","\xe0","\x6b","\x55"));
	outFields->push(HX_HCSTRING("soundFXHit","\xf2","\x04","\x86","\x5e"));
	outFields->push(HX_HCSTRING("soundFXProjecting","\xea","\x6a","\x1d","\x30"));
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("bulletAsset","\x4e","\xd8","\x12","\xd9"));
	outFields->push(HX_HCSTRING("bulletWidth","\x64","\x24","\x3c","\x7d"));
	outFields->push(HX_HCSTRING("bulletHeight","\xc9","\x2b","\xb3","\xcd"));
	outFields->push(HX_HCSTRING("bulletOffsetWidth","\x51","\xc2","\x64","\xbc"));
	outFields->push(HX_HCSTRING("bulletOffsetHeight","\x3c","\xbd","\x14","\xd2"));
	outFields->push(HX_HCSTRING("bulletAnimations","\xd1","\xf1","\xdf","\xb4"));
	outFields->push(HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"));
	outFields->push(HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"));
	outFields->push(HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d"));
	outFields->push(HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb"));
	outFields->push(HX_HCSTRING("randomPosition","\xcc","\xb9","\x01","\x8c"));
	outFields->push(HX_HCSTRING("randomLifeSpan","\x09","\x5f","\xae","\x17"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::WeaponID*/ ,(int)offsetof(WeaponAttribute_obj,weaponID),HX_HCSTRING("weaponID","\xb7","\x45","\x9c","\x8d")},
	{hx::fsObject /*::WeaponType*/ ,(int)offsetof(WeaponAttribute_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(WeaponAttribute_obj,brand),HX_HCSTRING("brand","\x07","\x27","\xe9","\xb8")},
	{hx::fsString,(int)offsetof(WeaponAttribute_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(WeaponAttribute_obj,asset),HX_HCSTRING("asset","\xf0","\x69","\x39","\x26")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,bulletCount),HX_HCSTRING("bulletCount","\x2d","\xb3","\x3c","\xfd")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,bulletCost),HX_HCSTRING("bulletCost","\xaf","\xc5","\x51","\x0a")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,minDamage),HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,maxDamage),HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(WeaponAttribute_obj,soundFXFire),HX_HCSTRING("soundFXFire","\x37","\xe0","\x6b","\x55")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(WeaponAttribute_obj,soundFXHit),HX_HCSTRING("soundFXHit","\xf2","\x04","\x86","\x5e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(WeaponAttribute_obj,soundFXProjecting),HX_HCSTRING("soundFXProjecting","\xea","\x6a","\x1d","\x30")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(WeaponAttribute_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsString,(int)offsetof(WeaponAttribute_obj,bulletAsset),HX_HCSTRING("bulletAsset","\x4e","\xd8","\x12","\xd9")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,bulletWidth),HX_HCSTRING("bulletWidth","\x64","\x24","\x3c","\x7d")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,bulletHeight),HX_HCSTRING("bulletHeight","\xc9","\x2b","\xb3","\xcd")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,bulletOffsetWidth),HX_HCSTRING("bulletOffsetWidth","\x51","\xc2","\x64","\xbc")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,bulletOffsetHeight),HX_HCSTRING("bulletOffsetHeight","\x3c","\xbd","\x14","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(WeaponAttribute_obj,bulletAnimations),HX_HCSTRING("bulletAnimations","\xd1","\xf1","\xdf","\xb4")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,bulletSpeed),HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,bulletLifeSpan),HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,randomAngle),HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,randomSpeed),HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(WeaponAttribute_obj,randomPosition),HX_HCSTRING("randomPosition","\xcc","\xb9","\x01","\x8c")},
	{hx::fsInt,(int)offsetof(WeaponAttribute_obj,randomLifeSpan),HX_HCSTRING("randomLifeSpan","\x09","\x5f","\xae","\x17")},
	{hx::fsFloat,(int)offsetof(WeaponAttribute_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &WeaponAttribute_obj::MAX_BULLET_SPEED,HX_HCSTRING("MAX_BULLET_SPEED","\x45","\x9c","\x40","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("weaponID","\xb7","\x45","\x9c","\x8d"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("brand","\x07","\x27","\xe9","\xb8"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("bulletCount","\x2d","\xb3","\x3c","\xfd"),
	HX_HCSTRING("bulletCost","\xaf","\xc5","\x51","\x0a"),
	HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"),
	HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"),
	HX_HCSTRING("soundFXFire","\x37","\xe0","\x6b","\x55"),
	HX_HCSTRING("soundFXHit","\xf2","\x04","\x86","\x5e"),
	HX_HCSTRING("soundFXProjecting","\xea","\x6a","\x1d","\x30"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("bulletAsset","\x4e","\xd8","\x12","\xd9"),
	HX_HCSTRING("bulletWidth","\x64","\x24","\x3c","\x7d"),
	HX_HCSTRING("bulletHeight","\xc9","\x2b","\xb3","\xcd"),
	HX_HCSTRING("bulletOffsetWidth","\x51","\xc2","\x64","\xbc"),
	HX_HCSTRING("bulletOffsetHeight","\x3c","\xbd","\x14","\xd2"),
	HX_HCSTRING("bulletAnimations","\xd1","\xf1","\xdf","\xb4"),
	HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"),
	HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"),
	HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d"),
	HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb"),
	HX_HCSTRING("randomPosition","\xcc","\xb9","\x01","\x8c"),
	HX_HCSTRING("randomLifeSpan","\x09","\x5f","\xae","\x17"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("setAttribute","\x1a","\x30","\x40","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeaponAttribute_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WeaponAttribute_obj::MAX_BULLET_SPEED,"MAX_BULLET_SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeaponAttribute_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WeaponAttribute_obj::MAX_BULLET_SPEED,"MAX_BULLET_SPEED");
};

#endif

hx::Class WeaponAttribute_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MAX_BULLET_SPEED","\x45","\x9c","\x40","\x09"),
	::String(null()) };

void WeaponAttribute_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("WeaponAttribute","\x80","\x05","\xc8","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeaponAttribute_obj::__GetStatic;
	__mClass->mSetStaticField = &WeaponAttribute_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeaponAttribute_obj >;
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

void WeaponAttribute_obj::__boot()
{
	MAX_BULLET_SPEED= ((Float)800);
}

