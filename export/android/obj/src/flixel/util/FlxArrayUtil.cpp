#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_debug_WatchEntry
#include <flixel/system/debug/WatchEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

//FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > _result_ = new FlxArrayUtil_obj();
	_result_->__construct();
	return _result_;}

Void FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_system_replay_FrameRecord",0x79844eb5,"flixel.util.FlxArrayUtil.setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(31)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			diff = tmp4;
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop().StaticCast< ::flixel::_system::replay::FrameRecord >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,(void))

Void FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( cpp::ArrayBase array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(31)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			diff = tmp4;
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,(void))

Void FlxArrayUtil_obj::setLength_flixel_input_keyboard_FlxKey( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_input_keyboard_FlxKey",0xfee37d4f,"flixel.util.FlxArrayUtil.setLength_flixel_input_keyboard_FlxKey","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(31)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			diff = tmp4;
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop().StaticCast< ::flixel::input::keyboard::FlxKey >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_input_keyboard_FlxKey,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_text_FlxTextFormat( Array< ::Dynamic > array,::flixel::text::FlxTextFormat element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_text_FlxTextFormat",0xed3cac0b,"flixel.util.FlxArrayUtil.fastSplice_flixel_text_FlxTextFormat","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::text::FlxTextFormat tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::text::FlxTextFormat tmp4 = array->__get(tmp3).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::text::FlxTextFormat >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_text_FlxTextFormat,return )

Void FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",22,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(23)
		bool tmp = (newLength < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(24)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(25)
		int tmp1 = (newLength - oldLength);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		int diff = tmp1;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(26)
		bool tmp2 = (diff < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(31)
			int tmp3 = diff;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			diff = tmp4;
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					bool tmp5 = (_g < diff);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(34)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::tweens::FlxTween tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::tweens::FlxTween tmp4 = array->__get(tmp3).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::util::FlxTimer tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::util::FlxTimer tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxPath",0xb8c4eb01,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxPath","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::util::FlxPath tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::util::FlxPath tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::util::FlxPath >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxPath,return )

Dynamic FlxArrayUtil_obj::getRandom_flixel_group_FlxTypedGroup_T( cpp::ArrayBase Objects,hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_EndIndex){
int StartIndex = __o_StartIndex.Default(0);
int EndIndex = __o_EndIndex.Default(0);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","getRandom_flixel_group_FlxTypedGroup_T",0x238278ca,"flixel.util.FlxArrayUtil.getRandom_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",65,0xa0dc755b)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(66)
		int tmp = StartIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		int tmp1 = EndIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Dynamic tmp2 = ::flixel::util::FlxRandom_obj::getObject_getRandom_T(Objects,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxArrayUtil_obj,getRandom_flixel_group_FlxTypedGroup_T,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_WatchEntry( Array< ::Dynamic > array,::flixel::_system::debug::WatchEntry element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_WatchEntry",0x10964af8,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_WatchEntry","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::_system::debug::WatchEntry tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::_system::debug::WatchEntry tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::WatchEntry >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::_system::debug::WatchEntry >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_WatchEntry,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_system_debug_Window( Array< ::Dynamic > array,::flixel::_system::debug::Window element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_system_debug_Window",0x3304bcc5,"flixel.util.FlxArrayUtil.fastSplice_flixel_system_debug_Window","flixel/util/FlxArrayUtil.hx",80,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(81)
	::flixel::_system::debug::Window tmp = element;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(82)
	bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::flixel::_system::debug::Window tmp4 = array->__get(tmp3).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		array[index] = tmp4;
		HX_STACK_LINE(84)
		array->pop().StaticCast< ::flixel::_system::debug::Window >();
		HX_STACK_LINE(84)
		return array;
	}
	HX_STACK_LINE(86)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_system_debug_Window,return )

cpp::ArrayBase FlxArrayUtil_obj::swapAndPop_fastSplice_T( cpp::ArrayBase array,int index){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",110,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(111)
	int tmp = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	Dynamic tmp1 = array->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	hx::IndexRef((array).mPtr,index) = tmp1;
	HX_STACK_LINE(112)
	array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
	HX_STACK_LINE(113)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

Void FlxArrayUtil_obj::clearArray( cpp::ArrayBase array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",125,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(126)
		bool tmp = (array != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		if ((tmp)){
			HX_STACK_LINE(128)
			bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			if ((tmp2)){
				HX_STACK_LINE(130)
				while((true)){
					HX_STACK_LINE(130)
					bool tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(130)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(130)
					if ((tmp4)){
						HX_STACK_LINE(130)
						break;
					}
					HX_STACK_LINE(132)
					array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
				}
			}
			else{
				HX_STACK_LINE(137)
				while((true)){
					HX_STACK_LINE(137)
					bool tmp3 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(137)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					if ((tmp4)){
						HX_STACK_LINE(137)
						break;
					}
					HX_STACK_LINE(139)
					Dynamic tmp5 = array->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(139)
					Dynamic thing = tmp5;		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(140)
					Dynamic tmp6 = thing;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					if ((tmp7)){
						HX_STACK_LINE(142)
						bool tmp8 = recursive;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(142)
						::flixel::util::FlxArrayUtil_obj::clearArray(array,tmp8);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,(void))


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

bool FlxArrayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { outValue = setLength_Int_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { outValue = swapAndPop_fastSplice_T_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxPath") ) { outValue = fastSplice_flixel_util_FlxPath_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { outValue = fastSplice_flixel_util_FlxTimer_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { outValue = fastSplice_flixel_tweens_FlxTween_dyn(); return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_text_FlxTextFormat") ) { outValue = fastSplice_flixel_text_FlxTextFormat_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_Window") ) { outValue = fastSplice_flixel_system_debug_Window_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { outValue = setLength_flixel_group_FlxTypedGroup_T_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setLength_flixel_input_keyboard_FlxKey") ) { outValue = setLength_flixel_input_keyboard_FlxKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRandom_flixel_group_FlxTypedGroup_T") ) { outValue = getRandom_flixel_group_FlxTypedGroup_T_dyn(); return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_system_debug_WatchEntry") ) { outValue = fastSplice_flixel_system_debug_WatchEntry_dyn(); return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { outValue = setLength_flixel_system_replay_FrameRecord_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxArrayUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("setLength_flixel_system_replay_FrameRecord","\x0a","\x15","\xae","\x16"),
	HX_HCSTRING("setLength_flixel_group_FlxTypedGroup_T","\x50","\x1a","\xe2","\x41"),
	HX_HCSTRING("setLength_flixel_input_keyboard_FlxKey","\x24","\x35","\x8c","\x2f"),
	HX_HCSTRING("fastSplice_flixel_text_FlxTextFormat","\xa0","\x54","\xba","\x04"),
	HX_HCSTRING("setLength_Int","\xf8","\x47","\x06","\xcb"),
	HX_HCSTRING("fastSplice_flixel_tweens_FlxTween","\xb4","\x8d","\xa9","\xb9"),
	HX_HCSTRING("fastSplice_flixel_util_FlxTimer","\x74","\x8a","\x94","\x6f"),
	HX_HCSTRING("fastSplice_flixel_util_FlxPath","\xd6","\x45","\xa7","\xd5"),
	HX_HCSTRING("getRandom_flixel_group_FlxTypedGroup_T","\x9f","\x30","\x2b","\x54"),
	HX_HCSTRING("fastSplice_flixel_system_debug_WatchEntry","\x43","\x66","\xc4","\x3b"),
	HX_HCSTRING("fastSplice_flixel_system_debug_Window","\x90","\x96","\x7a","\xa9"),
	HX_HCSTRING("swapAndPop_fastSplice_T","\x1f","\x43","\x97","\xd1"),
	HX_HCSTRING("clearArray","\xcc","\xac","\x99","\xfa"),
	::String(null()) };

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxArrayUtil","\xe3","\x4c","\x85","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxArrayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxArrayUtil_obj >;
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
} // end namespace util
