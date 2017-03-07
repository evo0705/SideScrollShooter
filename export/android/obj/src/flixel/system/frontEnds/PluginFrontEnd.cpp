#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void PluginFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",13,0xbff70e9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(114)
	::flixel::plugin::PathManager tmp = ::flixel::plugin::PathManager_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::flixel::plugin::PathManager tmp1 = ::flixel::util::FlxPath_obj::manager = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	this->add_flixel_plugin_PathManager(tmp1);
	HX_STACK_LINE(115)
	::flixel::plugin::TimerManager tmp2 = ::flixel::plugin::TimerManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	::flixel::plugin::TimerManager tmp3 = ::flixel::util::FlxTimer_obj::manager = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	this->add_flixel_plugin_TimerManager(tmp3);
	HX_STACK_LINE(116)
	::flixel::plugin::TweenManager tmp4 = ::flixel::plugin::TweenManager_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	::flixel::plugin::TweenManager tmp5 = ::flixel::tweens::FlxTween_obj::manager = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	this->add_flixel_plugin_TweenManager(tmp5);
}
;
	return null();
}

//PluginFrontEnd_obj::~PluginFrontEnd_obj() { }

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return  new PluginFrontEnd_obj; }
hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new()
{  hx::ObjectPtr< PluginFrontEnd_obj > _result_ = new PluginFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic PluginFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PluginFrontEnd_obj > _result_ = new PluginFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::plugin::TweenManager PluginFrontEnd_obj::add_flixel_plugin_TweenManager( ::flixel::plugin::TweenManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_TweenManager",0xcad736f8,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_TweenManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::TweenManager tmp5 = Plugin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(Plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::TweenManager tmp7 = Plugin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						cl = tmp8;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					if ((tmp9)){
						HX_STACK_LINE(32)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(32)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						s = tmp11;
						HX_STACK_LINE(32)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						if ((tmp12)){
							HX_STACK_LINE(32)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							s = tmp15;
						}
					}
					HX_STACK_LINE(32)
					tmp4 = s;
				}
				HX_STACK_LINE(32)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::FlxPlugin tmp6 = plugin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					if ((tmp7)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::FlxPlugin tmp8 = plugin;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(32)
						cl = tmp9;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					if ((tmp10)){
						HX_STACK_LINE(32)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						s = tmp12;
						HX_STACK_LINE(32)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						if ((tmp13)){
							HX_STACK_LINE(32)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(32)
							s = tmp16;
						}
					}
					HX_STACK_LINE(32)
					tmp5 = s;
				}
				HX_STACK_LINE(32)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::plugin::TweenManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::plugin::TweenManager tmp = Plugin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::plugin::TweenManager tmp1 = Plugin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_TweenManager,return )

::flixel::plugin::TimerManager PluginFrontEnd_obj::add_flixel_plugin_TimerManager( ::flixel::plugin::TimerManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_TimerManager",0xa5cae0de,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_TimerManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::TimerManager tmp5 = Plugin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(Plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::TimerManager tmp7 = Plugin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						cl = tmp8;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					if ((tmp9)){
						HX_STACK_LINE(32)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(32)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						s = tmp11;
						HX_STACK_LINE(32)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						if ((tmp12)){
							HX_STACK_LINE(32)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							s = tmp15;
						}
					}
					HX_STACK_LINE(32)
					tmp4 = s;
				}
				HX_STACK_LINE(32)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::FlxPlugin tmp6 = plugin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					if ((tmp7)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::FlxPlugin tmp8 = plugin;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(32)
						cl = tmp9;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					if ((tmp10)){
						HX_STACK_LINE(32)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						s = tmp12;
						HX_STACK_LINE(32)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						if ((tmp13)){
							HX_STACK_LINE(32)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(32)
							s = tmp16;
						}
					}
					HX_STACK_LINE(32)
					tmp5 = s;
				}
				HX_STACK_LINE(32)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::plugin::TimerManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::plugin::TimerManager tmp = Plugin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::plugin::TimerManager tmp1 = Plugin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_TimerManager,return )

::flixel::plugin::PathManager PluginFrontEnd_obj::add_flixel_plugin_PathManager( ::flixel::plugin::PathManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_plugin_PathManager",0x40533852,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_plugin_PathManager","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(30)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			if ((tmp1)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(32)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(32)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::PathManager tmp5 = Plugin;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(32)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					if ((tmp6)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(Plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::PathManager tmp7 = Plugin;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						cl = tmp8;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					if ((tmp9)){
						HX_STACK_LINE(32)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(32)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						s = tmp11;
						HX_STACK_LINE(32)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						if ((tmp12)){
							HX_STACK_LINE(32)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(32)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							s = tmp15;
						}
					}
					HX_STACK_LINE(32)
					tmp4 = s;
				}
				HX_STACK_LINE(32)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(32)
					::flixel::plugin::FlxPlugin tmp6 = plugin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(32)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(32)
					if ((tmp7)){
						HX_STACK_LINE(32)
						cl = ((::hx::Class)(plugin));
					}
					else{
						HX_STACK_LINE(32)
						::flixel::plugin::FlxPlugin tmp8 = plugin;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(32)
						cl = tmp9;
					}
					HX_STACK_LINE(32)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(32)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					if ((tmp10)){
						HX_STACK_LINE(32)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						s = tmp12;
						HX_STACK_LINE(32)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(32)
						if ((tmp13)){
							HX_STACK_LINE(32)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(32)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(32)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(32)
							s = tmp16;
						}
					}
					HX_STACK_LINE(32)
					tmp5 = s;
				}
				HX_STACK_LINE(32)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(34)
				::flixel::plugin::PathManager tmp4 = Plugin;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::plugin::PathManager tmp = Plugin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::plugin::PathManager tmp1 = Plugin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_plugin_PathManager,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::get( ::hx::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",50,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			if ((tmp1)){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(51)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(51)
			++(_g);
			HX_STACK_LINE(53)
			::flixel::plugin::FlxPlugin tmp3 = plugin;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::hx::Class tmp4 = ClassType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			if ((tmp5)){
				HX_STACK_LINE(55)
				::flixel::plugin::FlxPlugin tmp6 = plugin;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(59)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

::flixel::plugin::FlxPlugin PluginFrontEnd_obj::remove( ::flixel::plugin::FlxPlugin Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",69,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(71)
	int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(73)
	while((true)){
		HX_STACK_LINE(73)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		if ((tmp3)){
			HX_STACK_LINE(73)
			break;
		}
		HX_STACK_LINE(75)
		::flixel::plugin::FlxPlugin tmp4 = this->list->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::flixel::plugin::FlxPlugin tmp5 = Plugin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		if ((tmp6)){
			HX_STACK_LINE(77)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
			HX_STACK_LINE(78)
			::flixel::plugin::FlxPlugin tmp8 = Plugin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			return tmp8;
		}
		HX_STACK_LINE(80)
		(i)--;
	}
	HX_STACK_LINE(83)
	::flixel::plugin::FlxPlugin tmp2 = Plugin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType( ::hx::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",93,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(95)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(96)
	int tmp = this->list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(98)
	while((true)){
		HX_STACK_LINE(98)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		if ((tmp3)){
			HX_STACK_LINE(98)
			break;
		}
		HX_STACK_LINE(100)
		::flixel::plugin::FlxPlugin tmp4 = this->list->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::hx::Class tmp5 = ClassType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		bool tmp6 = ::Std_obj::is(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		if ((tmp6)){
			HX_STACK_LINE(102)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			this->list->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
			HX_STACK_LINE(103)
			results = true;
		}
		HX_STACK_LINE(105)
		(i)--;
	}
	HX_STACK_LINE(108)
	bool tmp2 = results;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

Void PluginFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",124,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			if ((tmp1)){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				tmp4 = plugin->active;
			}
			else{
				HX_STACK_LINE(126)
				tmp4 = false;
			}
			HX_STACK_LINE(126)
			if ((tmp4)){
				HX_STACK_LINE(128)
				plugin->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,update,(void))

Void PluginFrontEnd_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",138,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(138)
		while((true)){
			HX_STACK_LINE(138)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(138)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			if ((tmp1)){
				HX_STACK_LINE(138)
				break;
			}
			HX_STACK_LINE(138)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(138)
			++(_g);
			HX_STACK_LINE(140)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				tmp4 = plugin->visible;
			}
			else{
				HX_STACK_LINE(140)
				tmp4 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(142)
				plugin->draw();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))

Void PluginFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","onStateSwitch",0xb3451597,"flixel.system.frontEnds.PluginFrontEnd.onStateSwitch","flixel/system/frontEnds/PluginFrontEnd.hx",152,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		while((true)){
			HX_STACK_LINE(152)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(152)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			if ((tmp1)){
				HX_STACK_LINE(152)
				break;
			}
			HX_STACK_LINE(152)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(152)
			++(_g);
			HX_STACK_LINE(154)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			if ((tmp3)){
				HX_STACK_LINE(156)
				plugin->onStateSwitch();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,onStateSwitch,(void))

Void PluginFrontEnd_obj::onResize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","onResize",0x67ed5882,"flixel.system.frontEnds.PluginFrontEnd.onResize","flixel/system/frontEnds/PluginFrontEnd.hx",168,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			if ((tmp1)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::flixel::plugin::FlxPlugin tmp2 = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			::flixel::plugin::FlxPlugin plugin = tmp2;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(170)
			bool tmp3 = plugin->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(172)
				int tmp4 = Width;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				int tmp5 = Height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				plugin->onResize(tmp4,tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PluginFrontEnd_obj,onResize,(void))


PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic PluginFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_PathManager") ) { return add_flixel_plugin_PathManager_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_TweenManager") ) { return add_flixel_plugin_TweenManager_dyn(); }
		if (HX_FIELD_EQ(inName,"add_flixel_plugin_TimerManager") ) { return add_flixel_plugin_TimerManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PluginFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PluginFrontEnd_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PluginFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("add_flixel_plugin_TweenManager","\xa9","\x6b","\x12","\x76"),
	HX_HCSTRING("add_flixel_plugin_TimerManager","\x8f","\x15","\x06","\x51"),
	HX_HCSTRING("add_flixel_plugin_PathManager","\xc1","\xe4","\x4e","\x71"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeType","\x1e","\x2d","\x28","\xca"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.PluginFrontEnd","\x3f","\x96","\xac","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PluginFrontEnd_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PluginFrontEnd_obj >;
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
} // end namespace frontEnds
