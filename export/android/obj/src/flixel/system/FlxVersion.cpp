#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
namespace flixel{
namespace _system{

Void FlxVersion_obj::__construct(int Major,int Minor,int Patch,::String __o_PatchVersion)
{
HX_STACK_FRAME("flixel.system.FlxVersion","new",0xf87933e5,"flixel.system.FlxVersion.new","flixel/system/FlxVersion.hx",15,0x2361490b)
HX_STACK_THIS(this)
HX_STACK_ARG(Major,"Major")
HX_STACK_ARG(Minor,"Minor")
HX_STACK_ARG(Patch,"Patch")
HX_STACK_ARG(__o_PatchVersion,"PatchVersion")
::String PatchVersion = __o_PatchVersion.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(16)
	this->major = Major;
	HX_STACK_LINE(17)
	this->minor = Minor;
	HX_STACK_LINE(18)
	this->patch = Patch;
	HX_STACK_LINE(19)
	this->patchVersion = PatchVersion;
}
;
	return null();
}

//FlxVersion_obj::~FlxVersion_obj() { }

Dynamic FlxVersion_obj::__CreateEmpty() { return  new FlxVersion_obj; }
hx::ObjectPtr< FlxVersion_obj > FlxVersion_obj::__new(int Major,int Minor,int Patch,::String __o_PatchVersion)
{  hx::ObjectPtr< FlxVersion_obj > _result_ = new FlxVersion_obj();
	_result_->__construct(Major,Minor,Patch,__o_PatchVersion);
	return _result_;}

Dynamic FlxVersion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVersion_obj > _result_ = new FlxVersion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String FlxVersion_obj::toString( ){
	HX_STACK_FRAME("flixel.system.FlxVersion","toString",0x1c598b07,"flixel.system.FlxVersion.toString","flixel/system/FlxVersion.hx",27,0x2361490b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String patchVer = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(patchVer,"patchVer");
	HX_STACK_LINE(29)
	::String tmp = this->patchVersion;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(29)
		::String tmp3 = this->patchVersion;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		tmp2 = (tmp4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(29)
		tmp2 = false;
	}
	HX_STACK_LINE(29)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::String tmp3 = this->patchVersion;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		::String tmp4 = (HX_HCSTRING("-","\x2d","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		patchVer = tmp4;
	}
	HX_STACK_LINE(33)
	int tmp3 = this->major;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::String tmp4 = (HX_HCSTRING("HaxeFlixel ","\x9e","\xca","\xf0","\xde") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	::String tmp5 = (tmp4 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	int tmp6 = this->minor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	::String tmp8 = (tmp7 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	int tmp9 = this->patch;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(33)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	::String tmp11 = patchVer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(33)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(33)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVersion_obj,toString,return )


FlxVersion_obj::FlxVersion_obj()
{
}

void FlxVersion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVersion);
	HX_MARK_MEMBER_NAME(major,"major");
	HX_MARK_MEMBER_NAME(minor,"minor");
	HX_MARK_MEMBER_NAME(patch,"patch");
	HX_MARK_MEMBER_NAME(patchVersion,"patchVersion");
	HX_MARK_END_CLASS();
}

void FlxVersion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(major,"major");
	HX_VISIT_MEMBER_NAME(minor,"minor");
	HX_VISIT_MEMBER_NAME(patch,"patch");
	HX_VISIT_MEMBER_NAME(patchVersion,"patchVersion");
}

Dynamic FlxVersion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { return major; }
		if (HX_FIELD_EQ(inName,"minor") ) { return minor; }
		if (HX_FIELD_EQ(inName,"patch") ) { return patch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"patchVersion") ) { return patchVersion; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVersion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"patchVersion") ) { patchVersion=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVersion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxVersion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"));
	outFields->push(HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"));
	outFields->push(HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"));
	outFields->push(HX_HCSTRING("patchVersion","\x30","\xf1","\xe1","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxVersion_obj,major),HX_HCSTRING("major","\x39","\xbd","\x1b","\x03")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,minor),HX_HCSTRING("minor","\x35","\x7b","\x68","\x08")},
	{hx::fsInt,(int)offsetof(FlxVersion_obj,patch),HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd")},
	{hx::fsString,(int)offsetof(FlxVersion_obj,patchVersion),HX_HCSTRING("patchVersion","\x30","\xf1","\xe1","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("major","\x39","\xbd","\x1b","\x03"),
	HX_HCSTRING("minor","\x35","\x7b","\x68","\x08"),
	HX_HCSTRING("patch","\xc8","\x06","\x57","\xbd"),
	HX_HCSTRING("patchVersion","\x30","\xf1","\xe1","\xd3"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVersion_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVersion_obj::__mClass;

void FlxVersion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxVersion","\x73","\x5d","\xb6","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxVersion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVersion_obj >;
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
