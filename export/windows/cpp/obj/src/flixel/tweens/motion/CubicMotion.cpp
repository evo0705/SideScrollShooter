#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CubicMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","new",0x5990902e,"flixel.tweens.motion.CubicMotion.new","flixel/tweens/motion/CubicMotion.hx",9,0x44d248a3)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(21)
	this->_tt = ((Float)0);
	HX_STACK_LINE(20)
	this->_ttt = ((Float)0);
	HX_STACK_LINE(19)
	this->_bY = ((Float)0);
	HX_STACK_LINE(18)
	this->_bX = ((Float)0);
	HX_STACK_LINE(17)
	this->_aY = ((Float)0);
	HX_STACK_LINE(16)
	this->_aX = ((Float)0);
	HX_STACK_LINE(15)
	this->_toY = ((Float)0);
	HX_STACK_LINE(14)
	this->_toX = ((Float)0);
	HX_STACK_LINE(13)
	this->_fromY = ((Float)0);
	HX_STACK_LINE(12)
	this->_fromX = ((Float)0);
	HX_STACK_LINE(9)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//CubicMotion_obj::~CubicMotion_obj() { }

Dynamic CubicMotion_obj::__CreateEmpty() { return  new CubicMotion_obj; }
hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< CubicMotion_obj > _result_ = new CubicMotion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic CubicMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicMotion_obj > _result_ = new CubicMotion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration){
	HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","setMotion",0x132089c6,"flixel.tweens.motion.CubicMotion.setMotion","flixel/tweens/motion/CubicMotion.hx",37,0x44d248a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(38)
	Float tmp = this->_fromX = fromX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->x = tmp;
	HX_STACK_LINE(39)
	Float tmp1 = this->_fromY = fromY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	this->y = tmp1;
	HX_STACK_LINE(40)
	this->_aX = aX;
	HX_STACK_LINE(41)
	this->_aY = aY;
	HX_STACK_LINE(42)
	this->_bX = bX;
	HX_STACK_LINE(43)
	this->_bY = bY;
	HX_STACK_LINE(44)
	this->_toX = toX;
	HX_STACK_LINE(45)
	this->_toY = toY;
	HX_STACK_LINE(46)
	this->duration = duration;
	HX_STACK_LINE(47)
	this->start();
	HX_STACK_LINE(48)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC9(CubicMotion_obj,setMotion,return )

Void CubicMotion_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","update",0x63341afb,"flixel.tweens.motion.CubicMotion.update","flixel/tweens/motion/CubicMotion.hx",52,0x44d248a3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::update();
		HX_STACK_LINE(54)
		Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Float tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		Float tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		Float tmp5 = this->_toX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		Float tmp6 = this->_aX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		Float tmp7 = this->_bX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		Float tmp9 = ((int)3 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(54)
		Float tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		Float tmp11 = this->_fromX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(54)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		Float tmp13 = (tmp4 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		Float tmp14 = this->scale;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		Float tmp15 = ((int)3 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		Float tmp16 = this->scale;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		Float tmp18 = this->_fromX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(54)
		Float tmp19 = this->_aX;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(54)
		Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(54)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(54)
		Float tmp22 = this->_bX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(54)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(54)
		Float tmp24 = (tmp17 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(54)
		Float tmp25 = (tmp13 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(54)
		Float tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(54)
		Float tmp27 = ((int)3 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(54)
		Float tmp28 = this->_aX;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		Float tmp29 = this->_fromX;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(54)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(54)
		Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(54)
		Float tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(54)
		Float tmp33 = this->_fromX;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(54)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(54)
		this->x = tmp34;
		HX_STACK_LINE(55)
		Float tmp35 = this->scale;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(55)
		Float tmp36 = this->scale;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(55)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(55)
		Float tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(55)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(55)
		Float tmp40 = this->_toY;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(55)
		Float tmp41 = this->_aY;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(55)
		Float tmp42 = this->_bY;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(55)
		Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(55)
		Float tmp44 = ((int)3 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(55)
		Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(55)
		Float tmp46 = this->_fromY;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(55)
		Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(55)
		Float tmp48 = (tmp39 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(55)
		Float tmp49 = this->scale;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(55)
		Float tmp50 = ((int)3 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(55)
		Float tmp51 = this->scale;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(55)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(55)
		Float tmp53 = this->_fromY;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(55)
		Float tmp54 = this->_aY;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(55)
		Float tmp55 = ((int)2 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(55)
		Float tmp56 = (tmp53 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(55)
		Float tmp57 = this->_bY;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(55)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(55)
		Float tmp59 = (tmp52 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(55)
		Float tmp60 = (tmp48 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(55)
		Float tmp61 = this->scale;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(55)
		Float tmp62 = ((int)3 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(55)
		Float tmp63 = this->_aY;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(55)
		Float tmp64 = this->_fromY;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(55)
		Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(55)
		Float tmp66 = (tmp62 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(55)
		Float tmp67 = (tmp60 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(55)
		Float tmp68 = this->_fromY;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(55)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(55)
		this->y = tmp69;
		HX_STACK_LINE(56)
		bool tmp70 = this->finished;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(56)
		if ((tmp70)){
			HX_STACK_LINE(58)
			this->postUpdate();
		}
	}
return null();
}



CubicMotion_obj::CubicMotion_obj()
{
}

Dynamic CubicMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { return _aX; }
		if (HX_FIELD_EQ(inName,"_aY") ) { return _aY; }
		if (HX_FIELD_EQ(inName,"_bX") ) { return _bX; }
		if (HX_FIELD_EQ(inName,"_bY") ) { return _bY; }
		if (HX_FIELD_EQ(inName,"_tt") ) { return _tt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { return _ttt; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubicMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CubicMotion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toX),HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toY),HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aX),HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aY),HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bX),HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bY),HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_ttt),HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_tt),HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"),
	HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"),
	HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"),
	HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"),
	HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"),
	HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"),
	HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"),
	HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.CubicMotion","\x3c","\xa1","\xe5","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CubicMotion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicMotion_obj >;
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
} // end namespace motion
