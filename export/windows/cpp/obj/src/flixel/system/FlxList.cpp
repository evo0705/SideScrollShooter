#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
namespace flixel{
namespace _system{

Void FlxList_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxList","new",0x30fa5d95,"flixel.system.FlxList.new","flixel/system/FlxList.hx",11,0x6c72859b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	this->exists = true;
}
;
	return null();
}

//FlxList_obj::~FlxList_obj() { }

Dynamic FlxList_obj::__CreateEmpty() { return  new FlxList_obj; }
hx::ObjectPtr< FlxList_obj > FlxList_obj::__new()
{  hx::ObjectPtr< FlxList_obj > _result_ = new FlxList_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxList_obj > _result_ = new FlxList_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxList_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxList_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxList_obj >(this); }
Void FlxList_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.FlxList","destroy",0xa433f8af,"flixel.system.FlxList.destroy","flixel/system/FlxList.hx",74,0x6c72859b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		bool tmp = this->exists;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(79)
		this->object = null();
		HX_STACK_LINE(80)
		::flixel::_system::FlxList tmp2 = this->next;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(82)
			::flixel::_system::FlxList tmp4 = this->next;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			tmp4->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		}
		HX_STACK_LINE(84)
		this->exists = false;
		HX_STACK_LINE(87)
		::flixel::_system::FlxList tmp4 = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		this->next = tmp4;
		HX_STACK_LINE(88)
		::flixel::_system::FlxList_obj::_cachedListsHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(89)
		(::flixel::_system::FlxList_obj::_NUM_CACHED_FLX_LIST)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,destroy,(void))

int FlxList_obj::_NUM_CACHED_FLX_LIST;

::flixel::_system::FlxList FlxList_obj::_cachedListsHead;

::flixel::_system::FlxList FlxList_obj::recycle( ){
	HX_STACK_FRAME("flixel.system.FlxList","recycle",0xb739dbc8,"flixel.system.FlxList.recycle","flixel/system/FlxList.hx",23,0x6c72859b)
	HX_STACK_LINE(24)
	::flixel::_system::FlxList tmp = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(26)
		::flixel::_system::FlxList tmp2 = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::flixel::_system::FlxList cachedList = tmp2;		HX_STACK_VAR(cachedList,"cachedList");
		HX_STACK_LINE(27)
		::flixel::_system::FlxList tmp3 = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::flixel::_system::FlxList_obj::_cachedListsHead = tmp3->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
		HX_STACK_LINE(28)
		(::flixel::_system::FlxList_obj::_NUM_CACHED_FLX_LIST)--;
		HX_STACK_LINE(30)
		cachedList->__FieldRef(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")) = true;
		HX_STACK_LINE(31)
		cachedList->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		HX_STACK_LINE(32)
		::flixel::_system::FlxList tmp4 = cachedList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		return tmp4;
	}
	else{
		HX_STACK_LINE(35)
		::flixel::_system::FlxList tmp2 = ::flixel::_system::FlxList_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		return tmp2;
	}
	HX_STACK_LINE(24)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,recycle,return )

Void FlxList_obj::clearCache( ){
{
		HX_STACK_FRAME("flixel.system.FlxList","clearCache",0x86858ce0,"flixel.system.FlxList.clearCache","flixel/system/FlxList.hx",42,0x6c72859b)
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			::flixel::_system::FlxList tmp = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			if ((tmp2)){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(46)
			::flixel::_system::FlxList tmp3 = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			::flixel::_system::FlxList node = tmp3;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(47)
			::flixel::_system::FlxList tmp4 = ::flixel::_system::FlxList_obj::_cachedListsHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			::flixel::_system::FlxList_obj::_cachedListsHead = tmp4->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic );
			HX_STACK_LINE(48)
			node->__FieldRef(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")) = null();
			HX_STACK_LINE(49)
			node->__FieldRef(HX_HCSTRING("next","\xf3","\x84","\x02","\x49")) = null();
		}
		HX_STACK_LINE(51)
		::flixel::_system::FlxList_obj::_NUM_CACHED_FLX_LIST = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxList_obj,clearCache,(void))


FlxList_obj::FlxList_obj()
{
}

void FlxList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxList);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(exists,"exists");
	HX_MARK_END_CLASS();
}

void FlxList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(exists,"exists");
}

Dynamic FlxList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { outValue = recycle_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { outValue = clearCache_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { outValue = _cachedListsHead; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { outValue = _NUM_CACHED_FLX_LIST; return true;  }
	}
	return false;
}

Dynamic FlxList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::_system::FlxList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListsHead") ) { _cachedListsHead=ioValue.Cast< ::flixel::_system::FlxList >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_FLX_LIST") ) { _NUM_CACHED_FLX_LIST=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxList_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsObject /*::flixel::_system::FlxList*/ ,(int)offsetof(FlxList_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsBool,(int)offsetof(FlxList_obj,exists),HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxList_obj::_NUM_CACHED_FLX_LIST,HX_HCSTRING("_NUM_CACHED_FLX_LIST","\x90","\x95","\x35","\x46")},
	{hx::fsObject /*::flixel::_system::FlxList*/ ,(void *) &FlxList_obj::_cachedListsHead,HX_HCSTRING("_cachedListsHead","\x54","\x10","\xc6","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_MARK_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_NUM_CACHED_FLX_LIST,"_NUM_CACHED_FLX_LIST");
	HX_VISIT_MEMBER_NAME(FlxList_obj::_cachedListsHead,"_cachedListsHead");
};

#endif

hx::Class FlxList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_NUM_CACHED_FLX_LIST","\x90","\x95","\x35","\x46"),
	HX_HCSTRING("_cachedListsHead","\x54","\x10","\xc6","\x7b"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	::String(null()) };

void FlxList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.FlxList","\x23","\xef","\x94","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxList_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxList_obj >;
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

void FlxList_obj::__boot()
{
	_NUM_CACHED_FLX_LIST= (int)0;
}

} // end namespace flixel
} // end namespace system
