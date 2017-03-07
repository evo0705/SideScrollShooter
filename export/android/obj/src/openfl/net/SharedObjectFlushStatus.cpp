#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_SharedObjectFlushStatus
#include <openfl/net/SharedObjectFlushStatus.h>
#endif
namespace openfl{
namespace net{

::openfl::net::SharedObjectFlushStatus SharedObjectFlushStatus_obj::FLUSHED;

::openfl::net::SharedObjectFlushStatus SharedObjectFlushStatus_obj::PENDING;

HX_DEFINE_CREATE_ENUM(SharedObjectFlushStatus_obj)

int SharedObjectFlushStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea")) return 0;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return 1;
	return super::__FindIndex(inName);
}

int SharedObjectFlushStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea")) return 0;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SharedObjectFlushStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea")) return FLUSHED;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return PENDING;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea"),
	HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_obj::FLUSHED,"FLUSHED");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_obj::PENDING,"PENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::FLUSHED,"FLUSHED");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_obj::PENDING,"PENDING");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SharedObjectFlushStatus_obj::__mClass;

Dynamic __Create_SharedObjectFlushStatus_obj() { return new SharedObjectFlushStatus_obj; }

void SharedObjectFlushStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.net.SharedObjectFlushStatus","\x23","\xe3","\xe6","\x68"), hx::TCanCast< SharedObjectFlushStatus_obj >,sStaticFields,sMemberFields,
	&__Create_SharedObjectFlushStatus_obj, &__Create,
	&super::__SGetClass(), &CreateSharedObjectFlushStatus_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SharedObjectFlushStatus_obj::__boot()
{
hx::Static(FLUSHED) = hx::CreateEnum< SharedObjectFlushStatus_obj >(HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea"),0);
hx::Static(PENDING) = hx::CreateEnum< SharedObjectFlushStatus_obj >(HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),1);
}


} // end namespace openfl
} // end namespace net