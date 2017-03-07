#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxParticle_obj::__construct()
{
HX_STACK_FRAME("flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",16,0xdb578328)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	this->useColoring = false;
	HX_STACK_LINE(39)
	this->useScaling = false;
	HX_STACK_LINE(33)
	this->useFading = false;
	HX_STACK_LINE(28)
	this->friction = ((Float)500);
	HX_STACK_LINE(23)
	this->lifespan = ((Float)0);
	HX_STACK_LINE(96)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(98)
	this->set_exists(false);
}
;
	return null();
}

//FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > _result_ = new FlxParticle_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > _result_ = new FlxParticle_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxParticle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxParticle_obj)) return operator ::flixel::interfaces::IFlxParticle_obj *();
	return super::__ToInterface(inType);
}

FlxParticle_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxParticle_obj >(this); }
FlxParticle_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxParticle_obj >(this); }
FlxParticle_obj::operator ::flixel::interfaces::IFlxParticle_obj *()
	{ return new ::flixel::interfaces::IFlxParticle_delegate_< FlxParticle_obj >(this); }
Void FlxParticle_obj::update( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",106,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		Float tmp = this->lifespan;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		if ((tmp1)){
			HX_STACK_LINE(110)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			hx::SubEq(this->lifespan,tmp2);
			HX_STACK_LINE(111)
			Float tmp3 = this->lifespan;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			if ((tmp4)){
				HX_STACK_LINE(113)
				this->kill();
			}
			HX_STACK_LINE(116)
			Float tmp5 = this->lifespan;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			Float tmp6 = this->maxLifespan;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			Float lifespanRatio = tmp8;		HX_STACK_VAR(lifespanRatio,"lifespanRatio");
			HX_STACK_LINE(119)
			bool tmp9 = this->useFading;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			if ((tmp9)){
				HX_STACK_LINE(121)
				Float tmp10 = this->startAlpha;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				Float tmp11 = lifespanRatio;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				Float tmp12 = this->rangeAlpha;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				this->set_alpha(tmp14);
			}
			HX_STACK_LINE(125)
			bool tmp10 = this->useScaling;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			if ((tmp10)){
				HX_STACK_LINE(127)
				::flixel::util::FlxPoint tmp11 = this->scale;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				::flixel::util::FlxPoint tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(127)
				Float tmp13 = this->startScale;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(127)
				Float tmp14 = lifespanRatio;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(127)
				Float tmp15 = this->rangeScale;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(127)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(127)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				Float tmp18 = tmp12->set_y(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(127)
				tmp11->set_x(tmp18);
			}
			HX_STACK_LINE(131)
			bool tmp11 = this->useColoring;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			if ((tmp11)){
				HX_STACK_LINE(133)
				Float tmp12 = this->startRed;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(133)
				Float tmp13 = lifespanRatio;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				Float tmp14 = this->rangeRed;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(133)
				Float redComp = tmp16;		HX_STACK_VAR(redComp,"redComp");
				HX_STACK_LINE(134)
				Float tmp17 = this->startGreen;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(134)
				Float tmp18 = lifespanRatio;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				Float tmp19 = this->rangeGreen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(134)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(134)
				Float greenComp = tmp21;		HX_STACK_VAR(greenComp,"greenComp");
				HX_STACK_LINE(135)
				Float tmp22 = this->startBlue;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(135)
				Float tmp23 = lifespanRatio;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(135)
				Float tmp24 = this->rangeBlue;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(135)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(135)
				Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(135)
				Float blueComp = tmp26;		HX_STACK_VAR(blueComp,"blueComp");
				HX_STACK_LINE(137)
				Float tmp27 = ((int)255 * redComp);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(137)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(137)
				int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(137)
				Float tmp30 = ((int)255 * greenComp);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(137)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(137)
				int tmp32 = (int(tmp31) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(137)
				int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(137)
				Float tmp34 = ((int)255 * blueComp);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(137)
				int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(137)
				int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(137)
				this->set_color(tmp36);
			}
			HX_STACK_LINE(141)
			int tmp12 = this->touching;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(141)
			if ((tmp13)){
				HX_STACK_LINE(143)
				Float tmp14 = this->angularVelocity;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(143)
				bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(143)
				if ((tmp15)){
					HX_STACK_LINE(145)
					Float tmp16 = this->angularVelocity;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(145)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(145)
					this->angularVelocity = tmp17;
				}
			}
			HX_STACK_LINE(149)
			::flixel::util::FlxPoint tmp14 = this->acceleration;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(149)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(149)
			bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(149)
			if ((tmp16)){
				HX_STACK_LINE(151)
				int tmp17 = this->touching;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(151)
				int tmp18 = (int(tmp17) & int((int)4096));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(151)
				bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(151)
				if ((tmp19)){
					HX_STACK_LINE(153)
					::flixel::util::FlxPoint tmp20 = this->drag;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(153)
					Float tmp21 = this->friction;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(153)
					tmp20->set_x(tmp21);
					HX_STACK_LINE(155)
					int tmp22 = this->wasTouching;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(155)
					int tmp23 = (int(tmp22) & int((int)4096));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(155)
					bool tmp24 = (tmp23 == (int)0);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(155)
					if ((tmp24)){
						HX_STACK_LINE(157)
						::flixel::util::FlxPoint tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(157)
						Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(157)
						Float tmp27 = this->elasticity;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(157)
						Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(157)
						Float tmp29 = (tmp28 * (int)10);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(157)
						bool tmp30 = (tmp26 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(157)
						if ((tmp30)){
							HX_STACK_LINE(159)
							Float tmp31 = this->angularVelocity;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(159)
							bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(159)
							if ((tmp32)){
								HX_STACK_LINE(161)
								Float tmp33 = this->elasticity;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(161)
								Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(161)
								hx::MultEq(this->angularVelocity,tmp34);
							}
						}
						else{
							HX_STACK_LINE(166)
							::flixel::util::FlxPoint tmp31 = this->velocity;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(166)
							tmp31->set_y((int)0);
							HX_STACK_LINE(167)
							this->angularVelocity = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(173)
					::flixel::util::FlxPoint tmp20 = this->drag;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(173)
					tmp20->set_x((int)0);
				}
			}
		}
		HX_STACK_LINE(178)
		bool tmp2 = this->exists;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(178)
			tmp3 = this->alive;
		}
		else{
			HX_STACK_LINE(178)
			tmp3 = false;
		}
		HX_STACK_LINE(178)
		if ((tmp3)){
			HX_STACK_LINE(180)
			this->super::update();
		}
	}
return null();
}


Void FlxParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",185,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(186)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		this->super::reset(tmp,tmp1);
		HX_STACK_LINE(188)
		this->set_alpha(((Float)1.0));
		HX_STACK_LINE(189)
		::flixel::util::FlxPoint tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		::flixel::util::FlxPoint tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		Float tmp4 = tmp3->set_y(((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		tmp2->set_x(tmp4);
		HX_STACK_LINE(190)
		this->set_color((int)16777215);
	}
return null();
}


Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",197,0xdb578328)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


FlxParticle_obj::FlxParticle_obj()
{
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"rangeRed") ) { return rangeRed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"useFading") ) { return useFading; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { return rangeBlue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaling") ) { return useScaling; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { return rangeAlpha; }
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { return rangeScale; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { return rangeGreen; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useColoring") ) { return useColoring; }
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { return maxLifespan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeRed") ) { rangeRed=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"useFading") ) { useFading=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { rangeBlue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaling") ) { useScaling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { rangeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { rangeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { rangeGreen=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useColoring") ) { useColoring=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { maxLifespan=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxParticle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"));
	outFields->push(HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b"));
	outFields->push(HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67"));
	outFields->push(HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4"));
	outFields->push(HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1"));
	outFields->push(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"));
	outFields->push(HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4"));
	outFields->push(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"));
	outFields->push(HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b"));
	outFields->push(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42"));
	outFields->push(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6"));
	outFields->push(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa"));
	outFields->push(HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6"));
	outFields->push(HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c"));
	outFields->push(HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,friction),HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useFading),HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useScaling),HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useColoring),HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,maxLifespan),HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startAlpha),HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeAlpha),HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startScale),HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeScale),HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startRed),HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startGreen),HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startBlue),HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeRed),HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeGreen),HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeBlue),HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("friction","\xfa","\x78","\xc9","\x97"),
	HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b"),
	HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67"),
	HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4"),
	HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1"),
	HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"),
	HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4"),
	HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"),
	HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b"),
	HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42"),
	HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6"),
	HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa"),
	HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6"),
	HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c"),
	HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxParticle","\xf9","\xbf","\xf1","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxParticle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxParticle_obj >;
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
} // end namespace effects
} // end namespace particles
