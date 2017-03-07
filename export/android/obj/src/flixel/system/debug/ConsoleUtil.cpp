#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void ConsoleUtil_obj::__construct()
{
	return null();
}

//ConsoleUtil_obj::~ConsoleUtil_obj() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return  new ConsoleUtil_obj; }
hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{  hx::ObjectPtr< ConsoleUtil_obj > _result_ = new ConsoleUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleUtil_obj > _result_ = new ConsoleUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxObject( ::String ClassName,::hx::Class type,Array< ::String > Params){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","attemptToCreateInstance_flixel_FlxObject",0xd1869411,"flixel.system.debug.ConsoleUtil.attemptToCreateInstance_flixel_FlxObject","flixel/system/debug/ConsoleUtil.hx",91,0x3784f9ee)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(Params,"Params")
	HX_STACK_LINE(92)
	bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(93)
		Params = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(95)
	::String tmp1 = ClassName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::hx::Class tmp2 = ::Type_obj::resolveClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Dynamic obj = tmp2;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(96)
	Dynamic tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	bool tmp4 = ::Reflect_obj::isObject(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	if ((tmp5)){
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			::String tmp7 = (ClassName + HX_HCSTRING("' is not a valid class name. Try passing the full class path. Also make sure the class is being compiled.","\x14","\xfc","\x5d","\xb2"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			::flixel::_system::debug::LogStyle tmp8 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp7,tmp8,true);
		}
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	Dynamic tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	Dynamic tmp7 = ::Type_obj::createInstance(tmp6,Params);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	Dynamic instance = tmp7;		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(104)
	Dynamic tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	::hx::Class tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	bool tmp10 = ::Std_obj::is(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(104)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(104)
	if ((tmp11)){
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::String tmp12 = (ClassName + HX_HCSTRING("' is not a ","\xc9","\xf1","\x0e","\x46"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			::hx::Class tmp13 = type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Dynamic Data = tmp15;		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(106)
			::flixel::_system::frontEnds::LogFrontEnd tmp16 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			Dynamic tmp17 = Data;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			::flixel::_system::debug::LogStyle tmp18 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			tmp16->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp17,tmp18,true);
		}
		HX_STACK_LINE(107)
		return null();
	}
	HX_STACK_LINE(110)
	Dynamic tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(110)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ConsoleUtil_obj,attemptToCreateInstance_flixel_FlxObject,return )

Dynamic ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxState( ::String ClassName,::hx::Class type,Array< ::String > Params){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","attemptToCreateInstance_flixel_FlxState",0xf7aff0ff,"flixel.system.debug.ConsoleUtil.attemptToCreateInstance_flixel_FlxState","flixel/system/debug/ConsoleUtil.hx",91,0x3784f9ee)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(Params,"Params")
	HX_STACK_LINE(92)
	bool tmp = (Params == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(93)
		Params = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(95)
	::String tmp1 = ClassName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::hx::Class tmp2 = ::Type_obj::resolveClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Dynamic obj = tmp2;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(96)
	Dynamic tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	bool tmp4 = ::Reflect_obj::isObject(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	if ((tmp5)){
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			::String tmp7 = (ClassName + HX_HCSTRING("' is not a valid class name. Try passing the full class path. Also make sure the class is being compiled.","\x14","\xfc","\x5d","\xb2"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			::flixel::_system::debug::LogStyle tmp8 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp7,tmp8,true);
		}
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	Dynamic tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	Dynamic tmp7 = ::Type_obj::createInstance(tmp6,Params);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	Dynamic instance = tmp7;		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(104)
	Dynamic tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	::hx::Class tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	bool tmp10 = ::Std_obj::is(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(104)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(104)
	if ((tmp11)){
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::String tmp12 = (ClassName + HX_HCSTRING("' is not a ","\xc9","\xf1","\x0e","\x46"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			::hx::Class tmp13 = type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Dynamic Data = tmp15;		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(106)
			::flixel::_system::frontEnds::LogFrontEnd tmp16 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			Dynamic tmp17 = Data;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			::flixel::_system::debug::LogStyle tmp18 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			tmp16->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp17,tmp18,true);
		}
		HX_STACK_LINE(107)
		return null();
	}
	HX_STACK_LINE(110)
	Dynamic tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(110)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ConsoleUtil_obj,attemptToCreateInstance_flixel_FlxState,return )

bool ConsoleUtil_obj::callFunction( Dynamic Function,cpp::ArrayBase Args){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","callFunction",0x976d0913,"flixel.system.debug.ConsoleUtil.callFunction","flixel/system/debug/ConsoleUtil.hx",25,0x3784f9ee)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_LINE(25)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::ArgumentError, 0);
	{
		HX_STACK_LINE(27)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::Reflect_obj::callMethod(null(),tmp,Args);
		HX_STACK_LINE(28)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::ArgumentError e = __e;{
				HX_STACK_LINE(32)
				bool tmp = (e->errorID == (int)1063);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(32)
				if ((tmp)){
					HX_STACK_LINE(37)
					::String tmp1 = e->message;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(37)
					::String tmp2 = ::flixel::util::FlxStringUtil_obj::filterDigits(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(37)
					::String tmp3 = tmp2.charAt((int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(37)
					Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(37)
					int expected = tmp4;		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(40)
					bool tmp5 = (expected < Args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(40)
					if ((tmp5)){
						HX_STACK_LINE(43)
						int tmp6 = expected;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(43)
						cpp::ArrayBase shortenedArgs = Args->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )((int)0,tmp6);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(45)
						Dynamic tmp7 = Function;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(45)
						::Reflect_obj::callMethod(null(),tmp7,shortenedArgs);
					}
					else{
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::flixel::_system::frontEnds::LogFrontEnd tmp6 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(50)
							::String tmp7 = (HX_HCSTRING("Invalid number or parameters: ","\xbf","\xa1","\xa0","\xde") + expected);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(50)
							::String tmp8 = (tmp7 + HX_HCSTRING(" expected, ","\x0c","\x4b","\x40","\xeb"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(50)
							int tmp9 = Args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(50)
							::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(50)
							::String tmp11 = (tmp10 + HX_HCSTRING(" passed","\x90","\xab","\xe0","\x20"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(50)
							::flixel::_system::debug::LogStyle tmp12 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(50)
							tmp6->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp11,tmp12,true);
						}
						HX_STACK_LINE(51)
						return false;
					}
					HX_STACK_LINE(54)
					return true;
				}
				HX_STACK_LINE(57)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,callFunction,return )

Dynamic ConsoleUtil_obj::findCommand( ::String Alias,cpp::ArrayBase Commands){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","findCommand",0x57346d75,"flixel.system.debug.ConsoleUtil.findCommand","flixel/system/debug/ConsoleUtil.hx",69,0x3784f9ee)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_ARG(Commands,"Commands")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int _g = Commands->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			if ((tmp1)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			Dynamic tmp3 = Commands->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			::String tmp4 = Alias;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = tmp3->__Field(HX_HCSTRING("aliases","\xfe","\x2d","\xb5","\xa5"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			bool tmp6 = (tmp5 != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			if ((tmp6)){
				HX_STACK_LINE(74)
				Dynamic tmp7 = Commands->__GetItem(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(77)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,findCommand,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariable( ::String ObjectAndVariable,Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariable",0x216061e5,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariable","flixel/system/debug/ConsoleUtil.hx",122,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(123)
	Array< ::String > searchArr = ObjectAndVariable.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(searchArr,"searchArr");
	HX_STACK_LINE(125)
	bool tmp = (searchArr->length == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &ObjectAndVariable,Dynamic &Object){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",127,0x3784f9ee)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15") , Object,false);
					__result->Add(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69") , ObjectAndVariable,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		Dynamic tmp1 = _Function_2_1::Block(ObjectAndVariable,Object);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		return tmp1;
	}
	HX_STACK_LINE(130)
	::String tmp1 = searchArr->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	::String variableName = tmp1;		HX_STACK_VAR(variableName,"variableName");
	HX_STACK_LINE(132)
	Dynamic tmp2 = Object;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	bool tmp3 = ::Reflect_obj::isObject(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	if ((tmp4)){
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::hx::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(134)
				Dynamic tmp6 = Object;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(134)
				if ((tmp7)){
					HX_STACK_LINE(134)
					cl = ((::hx::Class)(Object));
				}
				else{
					HX_STACK_LINE(134)
					Dynamic tmp8 = Object;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(134)
					::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					cl = tmp9;
				}
				HX_STACK_LINE(134)
				::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(134)
				::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				::String s = tmp9;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(134)
				bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				if ((tmp10)){
					HX_STACK_LINE(134)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(134)
					::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(134)
					s = tmp12;
					HX_STACK_LINE(134)
					int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(134)
					int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(134)
					::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					s = tmp15;
				}
				HX_STACK_LINE(134)
				tmp5 = s;
			}
			HX_STACK_LINE(134)
			::String tmp6 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			::String tmp7 = (tmp6 + HX_HCSTRING("' is not a valid Object","\xcc","\x28","\x80","\xb8"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			Dynamic Data = tmp7;		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(134)
			::flixel::_system::frontEnds::LogFrontEnd tmp8 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			Dynamic tmp9 = Data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			::flixel::_system::debug::LogStyle tmp10 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			tmp8->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp9,tmp10,true);
		}
		HX_STACK_LINE(135)
		return null();
	}
	HX_STACK_LINE(139)
	int l = searchArr->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(140)
	Dynamic tempObj = Object;		HX_STACK_VAR(tempObj,"tempObj");
	HX_STACK_LINE(141)
	::String tempVarName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tempVarName,"tempVarName");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			bool tmp5 = (_g < l);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			if ((tmp6)){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(142)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(144)
			::String tmp8 = searchArr->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			tempVarName = tmp8;
			HX_STACK_LINE(146)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(148)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				int tmp10 = (l - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(148)
				if ((tmp11)){
					HX_STACK_LINE(150)
					Dynamic tmp12 = tempObj;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(150)
					::String tmp13 = tempVarName;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(150)
					Dynamic tmp14 = ::Reflect_obj::getProperty(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(150)
					tempObj = tmp14;
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(155)
							{
								HX_STACK_LINE(155)
								::hx::Class cl;		HX_STACK_VAR(cl,"cl");
								HX_STACK_LINE(155)
								Dynamic tmp10 = tempObj;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(155)
								bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(155)
								if ((tmp11)){
									HX_STACK_LINE(155)
									cl = ((::hx::Class)(tempObj));
								}
								else{
									HX_STACK_LINE(155)
									Dynamic tmp12 = tempObj;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(155)
									::hx::Class tmp13 = ::Type_obj::getClass(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(155)
									cl = tmp13;
								}
								HX_STACK_LINE(155)
								::hx::Class tmp12 = cl;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(155)
								::String tmp13 = ::Type_obj::getClassName(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(155)
								::String s = tmp13;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(155)
								bool tmp14 = (s != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(155)
								if ((tmp14)){
									HX_STACK_LINE(155)
									::String tmp15 = s;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(155)
									::String tmp16 = ::StringTools_obj::replace(tmp15,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(155)
									s = tmp16;
									HX_STACK_LINE(155)
									int tmp17 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(155)
									int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(155)
									::String tmp19 = s.substr(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(155)
									s = tmp19;
								}
								HX_STACK_LINE(155)
								tmp9 = s;
							}
							HX_STACK_LINE(155)
							::String tmp10 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(155)
							::String tmp11 = (tmp10 + HX_HCSTRING("' does not have a field '","\x45","\x05","\x80","\x26"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(155)
							::String tmp12 = tempVarName;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(155)
							::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(155)
							::String tmp14 = (tmp13 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(155)
							Dynamic Data = tmp14;		HX_STACK_VAR(Data,"Data");
							HX_STACK_LINE(155)
							::flixel::_system::frontEnds::LogFrontEnd tmp15 = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(155)
							Dynamic tmp16 = Data;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(155)
							::flixel::_system::debug::LogStyle tmp17 = ::flixel::_system::debug::LogStyle_obj::ERROR;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(155)
							tmp15->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(tmp16,tmp17,true);
						}
						HX_STACK_LINE(156)
						return null();
					}
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tempVarName,Dynamic &tempObj){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",160,0x3784f9ee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15") , tempObj,false);
				__result->Add(HX_HCSTRING("variableName","\xa7","\x7e","\xe1","\x69") , tempVarName,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(160)
	Dynamic tmp5 = _Function_1_1::Block(tempVarName,tempObj);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariable,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariableFromMap( ::String ObjectAndVariable,::haxe::ds::StringMap ObjectMap){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariableFromMap",0x374cd7ed,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariableFromMap","flixel/system/debug/ConsoleUtil.hx",172,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(ObjectMap,"ObjectMap")
	HX_STACK_LINE(173)
	Array< ::String > splitString = ObjectAndVariable.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(splitString,"splitString");
	HX_STACK_LINE(174)
	::String tmp = splitString->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	Dynamic tmp1 = ObjectMap->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	Dynamic object = tmp1;		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(175)
	splitString->shift();
	HX_STACK_LINE(176)
	::String tmp2 = splitString->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	ObjectAndVariable = tmp2;
	HX_STACK_LINE(177)
	::String tmp3 = ObjectAndVariable;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	Dynamic tmp5 = ::flixel::_system::debug::ConsoleUtil_obj::resolveObjectAndVariable(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariableFromMap,return )

Array< ::String > ConsoleUtil_obj::getInstanceFieldsAdvanced( ::hx::Class cl,hx::Null< int >  __o_numSuperClassesToInclude){
int numSuperClassesToInclude = __o_numSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","getInstanceFieldsAdvanced",0x67fa5b89,"flixel.system.debug.ConsoleUtil.getInstanceFieldsAdvanced","flixel/system/debug/ConsoleUtil.hx",191,0x3784f9ee)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(numSuperClassesToInclude,"numSuperClassesToInclude")
{
		HX_STACK_LINE(192)
		::hx::Class tmp = cl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		Array< ::String > fields = ::Type_obj::getInstanceFields(tmp);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(193)
		bool tmp1 = (numSuperClassesToInclude >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		if ((tmp1)){
			HX_STACK_LINE(195)
			::hx::Class tmp2 = cl;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			::hx::Class tmp3 = ::Type_obj::getSuperClass(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(195)
			::hx::Class curClass = tmp3;		HX_STACK_VAR(curClass,"curClass");
			HX_STACK_LINE(196)
			Array< ::Dynamic > superClasses = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(superClasses,"superClasses");
			HX_STACK_LINE(197)
			while((true)){
				HX_STACK_LINE(197)
				bool tmp4 = (curClass != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(197)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(197)
				if ((tmp5)){
					HX_STACK_LINE(197)
					break;
				}
				HX_STACK_LINE(199)
				::hx::Class tmp6 = curClass;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(199)
				superClasses->push(tmp6);
				HX_STACK_LINE(200)
				::hx::Class tmp7 = curClass;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				::hx::Class tmp8 = ::Type_obj::getSuperClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				curClass = tmp8;
			}
			HX_STACK_LINE(203)
			superClasses->reverse();
			HX_STACK_LINE(205)
			bool tmp4 = (numSuperClassesToInclude > superClasses->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(205)
			if ((tmp4)){
				HX_STACK_LINE(206)
				numSuperClassesToInclude = superClasses->length;
			}
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				int tmp5 = (superClasses->length - numSuperClassesToInclude);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(208)
				int _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				while((true)){
					HX_STACK_LINE(208)
					bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(208)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(208)
					if ((tmp7)){
						HX_STACK_LINE(208)
						break;
					}
					HX_STACK_LINE(208)
					int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(208)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(210)
					::hx::Class tmp9 = superClasses->__get(i).StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(210)
					Array< ::String > superFields = ::Type_obj::getInstanceFields(tmp9);		HX_STACK_VAR(superFields,"superFields");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(211)
						while((true)){
							HX_STACK_LINE(211)
							bool tmp10 = (_g2 < superFields->length);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(211)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(211)
							if ((tmp11)){
								HX_STACK_LINE(211)
								break;
							}
							HX_STACK_LINE(211)
							::String tmp12 = superFields->__get(_g2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(211)
							::String superField = tmp12;		HX_STACK_VAR(superField,"superField");
							HX_STACK_LINE(211)
							++(_g2);
							HX_STACK_LINE(213)
							::String tmp13 = superField;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							int tmp14 = fields->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(213)
							bool tmp15 = (tmp14 != (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(213)
							if ((tmp15)){
								HX_STACK_LINE(214)
								::String tmp16 = superField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(214)
								fields->remove(tmp16);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(218)
		return fields;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,getInstanceFieldsAdvanced,return )

Dynamic ConsoleUtil_obj::parseBool( ::String s){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","parseBool",0xb0a762a0,"flixel.system.debug.ConsoleUtil.parseBool","flixel/system/debug/ConsoleUtil.hx",229,0x3784f9ee)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(230)
	bool tmp = (s == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	if ((tmp)){
		HX_STACK_LINE(231)
		return true;
	}
	else{
		HX_STACK_LINE(232)
		bool tmp1 = (s == HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(233)
			return false;
		}
		else{
			HX_STACK_LINE(235)
			return null();
		}
	}
	HX_STACK_LINE(230)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseBool,return )

Void ConsoleUtil_obj::log( Dynamic Text){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","log",0x8132f4e7,"flixel.system.debug.ConsoleUtil.log","flixel/system/debug/ConsoleUtil.hx",244,0x3784f9ee)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(245)
		::flixel::_system::frontEnds::LogFrontEnd tmp = ::flixel::FlxG_obj::log;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		::flixel::_system::debug::LogStyle tmp1 = ::flixel::_system::debug::LogStyle_obj::CONSOLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		tmp->__Field(HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"), hx::paccDynamic )(cpp::ArrayBase_obj::__new().Add(Text),tmp1,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

bool ConsoleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { outValue = parseBool_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findCommand") ) { outValue = findCommand_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callFunction") ) { outValue = callFunction_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariable") ) { outValue = resolveObjectAndVariable_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getInstanceFieldsAdvanced") ) { outValue = getInstanceFieldsAdvanced_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariableFromMap") ) { outValue = resolveObjectAndVariableFromMap_dyn(); return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"attemptToCreateInstance_flixel_FlxState") ) { outValue = attemptToCreateInstance_flixel_FlxState_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"attemptToCreateInstance_flixel_FlxObject") ) { outValue = attemptToCreateInstance_flixel_FlxObject_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ConsoleUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("attemptToCreateInstance_flixel_FlxObject","\x54","\x67","\xbe","\x71"),
	HX_HCSTRING("attemptToCreateInstance_flixel_FlxState","\x1c","\x77","\x4d","\xc1"),
	HX_HCSTRING("callFunction","\xd6","\x4d","\x95","\x4c"),
	HX_HCSTRING("findCommand","\x12","\x32","\x58","\x81"),
	HX_HCSTRING("resolveObjectAndVariable","\x28","\x3f","\x7e","\x35"),
	HX_HCSTRING("resolveObjectAndVariableFromMap","\x0a","\x79","\x88","\x15"),
	HX_HCSTRING("getInstanceFieldsAdvanced","\xe6","\x18","\xfe","\xed"),
	HX_HCSTRING("parseBool","\xfd","\xd5","\xc1","\xc8"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	::String(null()) };

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.ConsoleUtil","\x51","\x53","\xde","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConsoleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ConsoleUtil_obj >;
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
} // end namespace debug
