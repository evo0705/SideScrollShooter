#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#define INCLUDED_flixel_system_layer_frames_FrameType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,_system,layer,frames,FrameType)
namespace flixel{
namespace _system{
namespace layer{
namespace frames{


class FrameType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FrameType_obj OBJ_;

	public:
		FrameType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.system.layer.frames.FrameType","\xe9","\x11","\xda","\x93"); }
		::String __ToString() const { return HX_HCSTRING("FrameType.","\xe7","\xa8","\xa2","\xf4") + tag; }

		static ::flixel::_system::layer::frames::FrameType REGULAR;
		static inline ::flixel::_system::layer::frames::FrameType REGULAR_dyn() { return REGULAR; }
		static ::flixel::_system::layer::frames::FrameType ROTATED;
		static inline ::flixel::_system::layer::frames::FrameType ROTATED_dyn() { return ROTATED; }
};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FrameType */ 
