#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_SharedObject
#include <openfl/_legacy/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObjectFlushStatus
#include <openfl/net/SharedObjectFlushStatus.h>
#endif
namespace flixel{
namespace util{

Void FlxSave_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",49,0xc43cd0a9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(49)
	this->destroy();
}
;
	return null();
}

//FlxSave_obj::~FlxSave_obj() { }

Dynamic FlxSave_obj::__CreateEmpty() { return  new FlxSave_obj; }
hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new()
{  hx::ObjectPtr< FlxSave_obj > _result_ = new FlxSave_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSave_obj > _result_ = new FlxSave_obj();
	_result_->__construct();
	return _result_;}

Void FlxSave_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",56,0xc43cd0a9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->_sharedObject = null();
		HX_STACK_LINE(58)
		this->name = null();
		HX_STACK_LINE(59)
		this->data = null();
		HX_STACK_LINE(60)
		this->_onComplete = null();
		HX_STACK_LINE(61)
		this->_closeRequested = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind( ::String Name){
	HX_STACK_FRAME("flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",71,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(72)
	this->destroy();
	HX_STACK_LINE(73)
	this->name = Name;
	HX_STACK_LINE(74)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
	{
		HX_STACK_LINE(76)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::openfl::_legacy::net::SharedObject tmp1 = ::openfl::_legacy::net::SharedObject_obj::getLocal(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		this->_sharedObject = tmp1;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::Error e = __e;{
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(80)
					::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(80)
					tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("There was a problem binding to\nthe shared object data from FlxSave.","\x75","\x65","\xd7","\xba"),tmp1,true);
				}
				HX_STACK_LINE(81)
				this->destroy();
				HX_STACK_LINE(82)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(84)
	::openfl::_legacy::net::SharedObject tmp = this->_sharedObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	this->data = tmp->data;
	HX_STACK_LINE(85)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

bool FlxSave_obj::close( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",98,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(99)
		this->_closeRequested = true;
		HX_STACK_LINE(100)
		int tmp = MinFileSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Dynamic tmp1 = OnComplete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		bool tmp2 = this->flush(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",111,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MinFileSize,"MinFileSize")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(112)
		bool tmp = this->checkBinding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		if ((tmp1)){
			HX_STACK_LINE(114)
			return false;
		}
		HX_STACK_LINE(116)
		this->_onComplete = OnComplete;
		HX_STACK_LINE(120)
		::openfl::net::SharedObjectFlushStatus result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(122)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(125)
			::openfl::_legacy::net::SharedObject tmp2 = this->_sharedObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			int tmp3 = MinFileSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::openfl::net::SharedObjectFlushStatus tmp4 = tmp2->flush(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			result = tmp4;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(130)
					int tmp2 = ::flixel::util::FlxSave_obj::ERROR;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(130)
					bool tmp3 = this->onDone(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(130)
					return tmp3;
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(134)
		bool tmp2 = (result == ::openfl::net::SharedObjectFlushStatus_obj::PENDING);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		if ((tmp2)){
		}
		HX_STACK_LINE(144)
		bool tmp3 = (result == ::openfl::net::SharedObjectFlushStatus_obj::FLUSHED);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(144)
			tmp4 = ::flixel::util::FlxSave_obj::SUCCESS;
		}
		else{
			HX_STACK_LINE(144)
			tmp4 = ::flixel::util::FlxSave_obj::PENDING;
		}
		HX_STACK_LINE(144)
		bool tmp5 = this->onDone(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase( ){
	HX_STACK_FRAME("flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",156,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	bool tmp = this->checkBinding();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(159)
		return false;
	}
	HX_STACK_LINE(161)
	::openfl::_legacy::net::SharedObject tmp2 = this->_sharedObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	tmp2->clear();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSave.hx",162,0xc43cd0a9)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(162)
	Dynamic tmp3 = _Function_1_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	this->data = tmp3;
	HX_STACK_LINE(163)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( int Result){
	HX_STACK_FRAME("flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",185,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Result,"Result")
	HX_STACK_LINE(186)
	int tmp = Result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(189)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("FlxSave is requesting extra storage space.","\x65","\xed","\x43","\x59"),tmp2,true);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(191)
			::flixel::_system::frontEnds::LogFrontEnd tmp1 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(191)
			::flixel::_system::debug::LogStyle tmp2 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			tmp1->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("There was a problem flushing\nthe shared object data from FlxSave.","\x0d","\x4e","\xe5","\xad"),tmp2,true);
		}
		;break;
	}
	HX_STACK_LINE(194)
	Dynamic tmp1 = this->_onComplete_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp2)){
		HX_STACK_LINE(196)
		int tmp3 = Result;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int tmp4 = ::flixel::util::FlxSave_obj::SUCCESS;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		this->_onComplete(tmp5);
	}
	HX_STACK_LINE(198)
	bool tmp3 = this->_closeRequested;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	if ((tmp3)){
		HX_STACK_LINE(200)
		this->destroy();
	}
	HX_STACK_LINE(202)
	int tmp4 = Result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	int tmp5 = ::flixel::util::FlxSave_obj::SUCCESS;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding( ){
	HX_STACK_FRAME("flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",211,0xc43cd0a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	::openfl::_legacy::net::SharedObject tmp = this->_sharedObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::flixel::_system::frontEnds::LogFrontEnd tmp2 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(214)
			::flixel::_system::debug::LogStyle tmp3 = ::flixel::_system::debug::LogStyle_obj::WARNING;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			tmp2->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(HX_HCSTRING("You must call FlxSave.bind()\nbefore you can read or write data.","\x7f","\xaf","\xd9","\xea"),tmp3,true);
		}
		HX_STACK_LINE(215)
		return false;
	}
	HX_STACK_LINE(217)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )

int FlxSave_obj::SUCCESS;

int FlxSave_obj::PENDING;

int FlxSave_obj::ERROR;


FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

Dynamic FlxSave_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return checkBinding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return _sharedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return _closeRequested; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSave_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { outValue = ERROR; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { outValue = SUCCESS; return true;  }
		if (HX_FIELD_EQ(inName,"PENDING") ) { outValue = PENDING; return true;  }
	}
	return false;
}

Dynamic FlxSave_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast< ::openfl::_legacy::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSave_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { SUCCESS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PENDING") ) { PENDING=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"));
	outFields->push(HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(FlxSave_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::openfl::_legacy::net::SharedObject*/ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSave_obj,_onComplete),HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30")},
	{hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxSave_obj::SUCCESS,HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38")},
	{hx::fsInt,(void *) &FlxSave_obj::PENDING,HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")},
	{hx::fsInt,(void *) &FlxSave_obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("_sharedObject","\x23","\xee","\x9d","\xaa"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("_closeRequested","\x35","\x43","\xb2","\xfb"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("onDone","\x41","\xf9","\xf7","\xe4"),
	HX_HCSTRING("checkBinding","\x5d","\x43","\xb4","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_MARK_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

#endif

hx::Class FlxSave_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38"),
	HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	::String(null()) };

void FlxSave_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSave","\x95","\x71","\x4e","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSave_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSave_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSave_obj >;
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

void FlxSave_obj::__boot()
{
	SUCCESS= (int)0;
	PENDING= (int)1;
	ERROR= (int)2;
}

} // end namespace flixel
} // end namespace util
