#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace plugin{

Void TimerManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.TimerManager","new",0x5fed9243,"flixel.plugin.TimerManager.new","flixel/plugin/TimerManager.hx",18,0x1b0b986d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->set_visible(false);
}
;
	return null();
}

//TimerManager_obj::~TimerManager_obj() { }

Dynamic TimerManager_obj::__CreateEmpty() { return  new TimerManager_obj; }
hx::ObjectPtr< TimerManager_obj > TimerManager_obj::__new()
{  hx::ObjectPtr< TimerManager_obj > _result_ = new TimerManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerManager_obj > _result_ = new TimerManager_obj();
	_result_->__construct();
	return _result_;}

Void TimerManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","destroy",0xce8a1c5d,"flixel.plugin.TimerManager.destroy","flixel/plugin/TimerManager.hx",31,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
		HX_STACK_LINE(33)
		this->_timers = null();
		HX_STACK_LINE(34)
		this->super::destroy();
	}
return null();
}


Void TimerManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","update",0x5545d406,"flixel.plugin.TimerManager.update","flixel/plugin/TimerManager.hx",43,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp1)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::flixel::util::FlxTimer tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			::flixel::util::FlxTimer timer = tmp2;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(45)
			bool tmp3 = timer->active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			if ((tmp4)){
				HX_STACK_LINE(45)
				bool tmp6 = timer->finished;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				tmp5 = !(tmp8);
			}
			else{
				HX_STACK_LINE(45)
				tmp5 = false;
			}
			HX_STACK_LINE(45)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			if ((tmp5)){
				HX_STACK_LINE(45)
				tmp6 = (timer->time >= (int)0);
			}
			else{
				HX_STACK_LINE(45)
				tmp6 = false;
			}
			HX_STACK_LINE(45)
			if ((tmp6)){
				HX_STACK_LINE(47)
				timer->update();
			}
		}
	}
return null();
}


Void TimerManager_obj::add( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","add",0x5fe3b404,"flixel.plugin.TimerManager.add","flixel/plugin/TimerManager.hx",60,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(61)
		::flixel::util::FlxTimer tmp = Timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		this->_timers->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,add,(void))

Void TimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","remove",0xd2c8ea41,"flixel.plugin.TimerManager.remove","flixel/plugin/TimerManager.hx",74,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(74)
		Array< ::Dynamic > array = this->_timers;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(74)
		::flixel::util::FlxTimer tmp = Timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(74)
		bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(74)
			int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			::flixel::util::FlxTimer tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			array[index] = tmp4;
			HX_STACK_LINE(74)
			array->pop().StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(74)
			array;
		}
		else{
			HX_STACK_LINE(74)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,remove,(void))

Void TimerManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","clear",0x1353b230,"flixel.plugin.TimerManager.clear","flixel/plugin/TimerManager.hx",82,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerManager_obj,clear,(void))

Void TimerManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.TimerManager","onStateSwitch",0xcfdacfa9,"flixel.plugin.TimerManager.onStateSwitch","flixel/plugin/TimerManager.hx",87,0x1b0b986d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
	}
return null();
}



TimerManager_obj::TimerManager_obj()
{
}

void TimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	HX_MARK_END_CLASS();
}

void TimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
}

Dynamic TimerManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimerManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TimerManager_obj,_timers),HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

#endif

hx::Class TimerManager_obj::__mClass;

void TimerManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.plugin.TimerManager","\xd1","\xb4","\x08","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TimerManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimerManager_obj >;
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
} // end namespace plugin
