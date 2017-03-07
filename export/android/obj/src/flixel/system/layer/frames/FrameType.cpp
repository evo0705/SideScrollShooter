#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
namespace flixel{
namespace _system{
namespace layer{
namespace frames{

::flixel::_system::layer::frames::FrameType FrameType_obj::REGULAR;

::flixel::_system::layer::frames::FrameType FrameType_obj::ROTATED;

HX_DEFINE_CREATE_ENUM(FrameType_obj)

int FrameType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return 0;
	if (inName==HX_HCSTRING("ROTATED","\x89","\x1d","\xf1","\x70")) return 1;
	return super::__FindIndex(inName);
}

int FrameType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return 0;
	if (inName==HX_HCSTRING("ROTATED","\x89","\x1d","\xf1","\x70")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FrameType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return REGULAR;
	if (inName==HX_HCSTRING("ROTATED","\x89","\x1d","\xf1","\x70")) return ROTATED;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),
	HX_HCSTRING("ROTATED","\x89","\x1d","\xf1","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameType_obj::REGULAR,"REGULAR");
	HX_MARK_MEMBER_NAME(FrameType_obj::ROTATED,"ROTATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameType_obj::REGULAR,"REGULAR");
	HX_VISIT_MEMBER_NAME(FrameType_obj::ROTATED,"ROTATED");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FrameType_obj::__mClass;

Dynamic __Create_FrameType_obj() { return new FrameType_obj; }

void FrameType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.system.layer.frames.FrameType","\xe9","\x11","\xda","\x93"), hx::TCanCast< FrameType_obj >,sStaticFields,sMemberFields,
	&__Create_FrameType_obj, &__Create,
	&super::__SGetClass(), &CreateFrameType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FrameType_obj::__boot()
{
hx::Static(REGULAR) = hx::CreateEnum< FrameType_obj >(HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),0);
hx::Static(ROTATED) = hx::CreateEnum< FrameType_obj >(HX_HCSTRING("ROTATED","\x89","\x1d","\xf1","\x70"),1);
}


} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
