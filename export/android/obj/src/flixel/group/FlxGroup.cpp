#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace flixel{
namespace group{

Void FlxGroup_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxGroup","new",0x4f47f260,"flixel.group.FlxGroup.new","flixel/group/FlxGroup.hx",14,0x1e89d58e)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//FlxGroup_obj::~FlxGroup_obj() { }

Dynamic FlxGroup_obj::__CreateEmpty() { return  new FlxGroup_obj; }
hx::ObjectPtr< FlxGroup_obj > FlxGroup_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxGroup_obj > _result_ = new FlxGroup_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic FlxGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGroup_obj > _result_ = new FlxGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool FlxGroup_obj::overlaps( Dynamic Callback,::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.group.FlxGroup","overlaps",0x63fb710c,"flixel.group.FlxGroup.overlaps","flixel/group/FlxGroup.hx",23,0x1e89d58e)
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(Group,"Group")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(24)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(25)
	bool tmp = (Group != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(27)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(28)
		int l = Group->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(29)
		::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp1 = (i < l);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(33)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			::flixel::FlxBasic tmp4 = Group->members->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			basic = tmp4;
			HX_STACK_LINE(35)
			bool tmp5 = (basic != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			if ((tmp5)){
				HX_STACK_LINE(35)
				::flixel::FlxBasic tmp7 = basic;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(35)
				bool tmp10 = InScreenSpace;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(35)
				::flixel::FlxCamera tmp11 = Camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				::flixel::FlxBasic tmp12 = tmp7;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				Float tmp13 = tmp8;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				Float tmp14 = tmp9;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				bool tmp15 = tmp10;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				::flixel::FlxCamera tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp6 = Callback(tmp12,tmp13,tmp14,tmp15,tmp16).Cast< bool >();
			}
			else{
				HX_STACK_LINE(35)
				tmp6 = false;
			}
			HX_STACK_LINE(35)
			if ((tmp6)){
				HX_STACK_LINE(37)
				result = true;
				HX_STACK_LINE(38)
				break;
			}
		}
	}
	HX_STACK_LINE(42)
	bool tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGroup_obj,overlaps,return )

::flixel::group::FlxTypedGroup FlxGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
	HX_STACK_FRAME("flixel.group.FlxGroup","resolveGroup",0xe8f196b3,"flixel.group.FlxGroup.resolveGroup","flixel/group/FlxGroup.hx",49,0x1e89d58e)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_LINE(50)
	::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(51)
	bool tmp = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(52)
		tmp2 = (ObjectOrGroup->collisionType == (int)2);
	}
	else{
		HX_STACK_LINE(51)
		tmp2 = true;
	}
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(54)
		bool tmp3 = (ObjectOrGroup->collisionType == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(56)
			group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
		}
		else{
			HX_STACK_LINE(58)
			bool tmp4 = (ObjectOrGroup->collisionType == (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			if ((tmp4)){
				HX_STACK_LINE(60)
				::flixel::group::FlxSpriteGroup tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(60)
				tmp5 = hx::TCast< ::flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup);
				HX_STACK_LINE(60)
				group = tmp5->group;
			}
		}
	}
	HX_STACK_LINE(63)
	::flixel::group::FlxTypedGroup tmp3 = group;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,resolveGroup,return )


FlxGroup_obj::FlxGroup_obj()
{
}

bool FlxGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { outValue = overlaps_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("resolveGroup","\xb3","\xf8","\x79","\xd2"),
	::String(null()) };

void FlxGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxGroup","\x6e","\x82","\x8f","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGroup_obj >;
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
} // end namespace group
