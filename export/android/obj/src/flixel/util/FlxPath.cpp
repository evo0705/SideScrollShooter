#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
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

Void FlxPath_obj::__construct(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate)
{
HX_STACK_FRAME("flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",19,0x22aae741)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(Nodes,"Nodes")
HX_STACK_ARG(__o_Speed,"Speed")
HX_STACK_ARG(__o_Mode,"Mode")
HX_STACK_ARG(__o_AutoRotate,"AutoRotate")
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
{
	HX_STACK_LINE(127)
	this->_inManager = false;
	HX_STACK_LINE(125)
	this->_autoRotate = false;
	HX_STACK_LINE(121)
	this->_inc = (int)1;
	HX_STACK_LINE(113)
	this->_nodeIndex = (int)0;
	HX_STACK_LINE(108)
	this->finished = false;
	HX_STACK_LINE(105)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(100)
	this->debugScrollY = ((Float)1.0);
	HX_STACK_LINE(99)
	this->debugScrollX = ((Float)1.0);
	HX_STACK_LINE(94)
	this->debugColor = (int)16777215;
	HX_STACK_LINE(86)
	this->active = true;
	HX_STACK_LINE(81)
	this->autoCenter = true;
	HX_STACK_LINE(77)
	this->angle = ((Float)0);
	HX_STACK_LINE(73)
	this->speed = ((Float)0);
	HX_STACK_LINE(134)
	bool tmp = (Object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(136)
		::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Float tmp2 = Speed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		int tmp3 = Mode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		bool tmp4 = AutoRotate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		this->start(tmp1,Nodes,tmp2,tmp3,tmp4);
	}
}
;
	return null();
}

//FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new(::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate)
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct(Object,Nodes,__o_Speed,__o_Mode,__o_AutoRotate);
	return _result_;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > _result_ = new FlxPath_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

hx::Object *FlxPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxPath_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxPath_obj >(this); }
::flixel::util::FlxPath FlxPath_obj::reset( ){
	HX_STACK_FRAME("flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",141,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	this->debugScrollX = ((Float)1.0);
	HX_STACK_LINE(144)
	this->debugScrollY = ((Float)1.0);
	HX_STACK_LINE(145)
	this->debugColor = (int)16777215;
	HX_STACK_LINE(146)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(148)
	this->autoCenter = true;
	HX_STACK_LINE(149)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

::flixel::util::FlxPath FlxPath_obj::start( ::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",153,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
{
		HX_STACK_LINE(154)
		this->object = Object;
		HX_STACK_LINE(155)
		this->nodes = Nodes;
		HX_STACK_LINE(156)
		Float tmp = Speed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		this->speed = tmp1;
		HX_STACK_LINE(157)
		this->_mode = Mode;
		HX_STACK_LINE(158)
		this->_autoRotate = AutoRotate;
		HX_STACK_LINE(159)
		this->restart();
		HX_STACK_LINE(160)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

::flixel::util::FlxPath FlxPath_obj::restart( ){
	HX_STACK_FRAME("flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",164,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::flixel::plugin::PathManager tmp = ::flixel::util::FlxPath_obj::manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	if ((tmp1)){
		HX_STACK_LINE(165)
		bool tmp3 = this->_inManager;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		tmp2 = !(tmp5);
	}
	else{
		HX_STACK_LINE(165)
		tmp2 = false;
	}
	HX_STACK_LINE(165)
	if ((tmp2)){
		HX_STACK_LINE(167)
		::flixel::plugin::PathManager tmp3 = ::flixel::util::FlxPath_obj::manager;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		tmp3->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(168)
		this->_inManager = true;
	}
	HX_STACK_LINE(171)
	this->finished = false;
	HX_STACK_LINE(172)
	this->active = true;
	HX_STACK_LINE(173)
	int tmp3 = this->nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	if ((tmp4)){
		HX_STACK_LINE(175)
		this->active = false;
	}
	HX_STACK_LINE(179)
	int tmp5 = this->_mode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	bool tmp6 = (tmp5 == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(179)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(179)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(179)
	if ((tmp7)){
		HX_STACK_LINE(179)
		int tmp9 = this->_mode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		tmp8 = (tmp10 == (int)256);
	}
	else{
		HX_STACK_LINE(179)
		tmp8 = true;
	}
	HX_STACK_LINE(179)
	if ((tmp8)){
		HX_STACK_LINE(181)
		int tmp9 = this->nodes->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		this->_nodeIndex = tmp10;
		HX_STACK_LINE(182)
		this->_inc = (int)-1;
	}
	else{
		HX_STACK_LINE(186)
		this->_nodeIndex = (int)0;
		HX_STACK_LINE(187)
		this->_inc = (int)1;
	}
	HX_STACK_LINE(190)
	::flixel::FlxObject tmp9 = this->object;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(190)
	tmp9->set_immovable(true);
	HX_STACK_LINE(191)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

Void FlxPath_obj::setNode( int NodeIndex){
{
		HX_STACK_FRAME("flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",200,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NodeIndex,"NodeIndex")
		HX_STACK_LINE(201)
		bool tmp = (NodeIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		if ((tmp)){
			HX_STACK_LINE(202)
			NodeIndex = (int)0;
		}
		else{
			HX_STACK_LINE(203)
			int tmp1 = NodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			if ((tmp4)){
				HX_STACK_LINE(204)
				int tmp5 = this->nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(204)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				NodeIndex = tmp6;
			}
		}
		HX_STACK_LINE(206)
		this->_nodeIndex = NodeIndex;
		HX_STACK_LINE(207)
		this->advancePath(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,(void))

Void FlxPath_obj::update( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",217,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		::flixel::util::FlxPoint tmp = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		::flixel::FlxObject tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		tmp->set_x(tmp2);
		HX_STACK_LINE(220)
		::flixel::util::FlxPoint tmp3 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		::flixel::FlxObject tmp4 = this->object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		tmp3->set_y(tmp5);
		HX_STACK_LINE(221)
		bool tmp6 = this->autoCenter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				::flixel::util::FlxPoint _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				Float tmp8 = _g->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				::flixel::FlxObject tmp9 = this->object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				_g->set_x(tmp12);
			}
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				::flixel::util::FlxPoint tmp7 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(224)
				::flixel::util::FlxPoint _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(224)
				Float tmp8 = _g->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(224)
				::flixel::FlxObject tmp9 = this->object;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(224)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(224)
				Float tmp11 = (tmp10 * ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				_g->set_y(tmp12);
			}
		}
		HX_STACK_LINE(226)
		int tmp7 = this->_nodeIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		::flixel::util::FlxPoint tmp8 = this->nodes->__get(tmp7).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		::flixel::util::FlxPoint node = tmp8;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(227)
		Float tmp9 = node->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		::flixel::util::FlxPoint tmp10 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(227)
		Float deltaX = tmp12;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(228)
		Float tmp13 = node->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(228)
		::flixel::util::FlxPoint tmp14 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(228)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(228)
		Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(228)
		Float deltaY = tmp16;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(230)
		int tmp17 = this->_mode;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(230)
		int tmp18 = (int(tmp17) & int((int)65536));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(230)
		bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(230)
		bool horizontalOnly = tmp19;		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(231)
		int tmp20 = this->_mode;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(231)
		int tmp21 = (int(tmp20) & int((int)1048576));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(231)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(231)
		bool verticalOnly = tmp22;		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(233)
		bool tmp23 = horizontalOnly;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		if ((tmp23)){
			HX_STACK_LINE(235)
			bool tmp24 = (deltaX > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(235)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(235)
			if ((tmp24)){
				HX_STACK_LINE(235)
				tmp25 = deltaX;
			}
			else{
				HX_STACK_LINE(235)
				Float tmp26 = deltaX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(235)
				tmp25 = -(tmp26);
			}
			HX_STACK_LINE(235)
			Float tmp26 = this->speed;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(235)
			Float tmp27 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(235)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(235)
			bool tmp29 = (tmp25 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(235)
			if ((tmp29)){
				HX_STACK_LINE(237)
				::flixel::util::FlxPoint tmp30 = this->advancePath(null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(237)
				node = tmp30;
			}
		}
		else{
			HX_STACK_LINE(240)
			bool tmp24 = verticalOnly;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(240)
			if ((tmp24)){
				HX_STACK_LINE(242)
				bool tmp25 = (deltaY > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(242)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(242)
				if ((tmp25)){
					HX_STACK_LINE(242)
					tmp26 = deltaY;
				}
				else{
					HX_STACK_LINE(242)
					Float tmp27 = deltaY;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(242)
					tmp26 = -(tmp27);
				}
				HX_STACK_LINE(242)
				Float tmp27 = this->speed;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(242)
				Float tmp28 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(242)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(242)
				bool tmp30 = (tmp26 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(242)
				if ((tmp30)){
					HX_STACK_LINE(244)
					::flixel::util::FlxPoint tmp31 = this->advancePath(null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(244)
					node = tmp31;
				}
			}
			else{
				HX_STACK_LINE(249)
				Float tmp25 = (deltaX * deltaX);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(249)
				Float tmp26 = (deltaY * deltaY);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(249)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(249)
				Float tmp28 = ::Math_obj::sqrt(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(249)
				Float tmp29 = this->speed;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(249)
				Float tmp30 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(249)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(249)
				bool tmp32 = (tmp28 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(249)
				if ((tmp32)){
					HX_STACK_LINE(251)
					::flixel::util::FlxPoint tmp33 = this->advancePath(null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(251)
					node = tmp33;
				}
			}
		}
		HX_STACK_LINE(256)
		Float tmp24 = this->speed;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(256)
		bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(256)
		if ((tmp25)){
			HX_STACK_LINE(259)
			::flixel::util::FlxPoint tmp26 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(259)
			::flixel::FlxObject tmp27 = this->object;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(259)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(259)
			tmp26->set_x(tmp28);
			HX_STACK_LINE(260)
			::flixel::util::FlxPoint tmp29 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(260)
			::flixel::FlxObject tmp30 = this->object;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(260)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(260)
			tmp29->set_y(tmp31);
			HX_STACK_LINE(262)
			bool tmp32 = this->autoCenter;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(262)
			if ((tmp32)){
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					::flixel::util::FlxPoint tmp33 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(264)
					::flixel::util::FlxPoint _g = tmp33;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					Float tmp34 = _g->x;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(264)
					::flixel::FlxObject tmp35 = this->object;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(264)
					Float tmp36 = tmp35->get_width();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(264)
					Float tmp37 = (tmp36 * ((Float)0.5));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(264)
					Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(264)
					_g->set_x(tmp38);
				}
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					::flixel::util::FlxPoint tmp33 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(265)
					::flixel::util::FlxPoint _g = tmp33;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(265)
					Float tmp34 = _g->y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(265)
					::flixel::FlxObject tmp35 = this->object;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(265)
					Float tmp36 = tmp35->get_height();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(265)
					Float tmp37 = (tmp36 * ((Float)0.5));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(265)
					Float tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(265)
					_g->set_y(tmp38);
				}
			}
			HX_STACK_LINE(268)
			bool tmp33 = horizontalOnly;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(268)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(268)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(268)
			if ((tmp34)){
				HX_STACK_LINE(268)
				::flixel::util::FlxPoint tmp36 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(268)
				::flixel::util::FlxPoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(268)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(268)
				Float tmp39 = node->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(268)
				tmp35 = (tmp38 == tmp39);
			}
			else{
				HX_STACK_LINE(268)
				tmp35 = true;
			}
			HX_STACK_LINE(268)
			if ((tmp35)){
				HX_STACK_LINE(270)
				::flixel::FlxObject tmp36 = this->object;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(270)
				::flixel::util::FlxPoint tmp37 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(270)
				Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(270)
				Float tmp39 = node->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(270)
				bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(270)
				Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(270)
				if ((tmp40)){
					HX_STACK_LINE(270)
					tmp41 = this->speed;
				}
				else{
					HX_STACK_LINE(270)
					Float tmp42 = this->speed;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(270)
					tmp41 = -(tmp42);
				}
				HX_STACK_LINE(270)
				tmp36->velocity->set_x(tmp41);
				HX_STACK_LINE(271)
				::flixel::FlxObject tmp42 = this->object;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(271)
				Float tmp43 = tmp42->velocity->x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(271)
				bool tmp44 = (tmp43 < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(271)
				if ((tmp44)){
					HX_STACK_LINE(273)
					this->angle = (int)-90;
				}
				else{
					HX_STACK_LINE(277)
					this->angle = (int)90;
				}
				HX_STACK_LINE(279)
				bool tmp45 = horizontalOnly;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(279)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(279)
				if ((tmp46)){
					HX_STACK_LINE(281)
					::flixel::FlxObject tmp47 = this->object;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(281)
					tmp47->velocity->set_y((int)0);
				}
			}
			else{
				HX_STACK_LINE(284)
				bool tmp36 = verticalOnly;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(284)
				bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(284)
				bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(284)
				if ((tmp37)){
					HX_STACK_LINE(284)
					::flixel::util::FlxPoint tmp39 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(284)
					::flixel::util::FlxPoint tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(284)
					Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(284)
					Float tmp42 = node->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(284)
					tmp38 = (tmp41 == tmp42);
				}
				else{
					HX_STACK_LINE(284)
					tmp38 = true;
				}
				HX_STACK_LINE(284)
				if ((tmp38)){
					HX_STACK_LINE(286)
					::flixel::FlxObject tmp39 = this->object;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(286)
					::flixel::util::FlxPoint tmp40 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(286)
					Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(286)
					Float tmp42 = node->y;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(286)
					bool tmp43 = (tmp41 < tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(286)
					Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(286)
					if ((tmp43)){
						HX_STACK_LINE(286)
						tmp44 = this->speed;
					}
					else{
						HX_STACK_LINE(286)
						Float tmp45 = this->speed;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(286)
						tmp44 = -(tmp45);
					}
					HX_STACK_LINE(286)
					tmp39->velocity->set_y(tmp44);
					HX_STACK_LINE(287)
					::flixel::FlxObject tmp45 = this->object;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(287)
					Float tmp46 = tmp45->velocity->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(287)
					bool tmp47 = (tmp46 < (int)0);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(287)
					if ((tmp47)){
						HX_STACK_LINE(289)
						this->angle = (int)0;
					}
					else{
						HX_STACK_LINE(293)
						this->angle = (int)180;
					}
					HX_STACK_LINE(295)
					bool tmp48 = verticalOnly;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(295)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(295)
					if ((tmp49)){
						HX_STACK_LINE(297)
						::flixel::FlxObject tmp50 = this->object;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(297)
						tmp50->velocity->set_x((int)0);
					}
				}
				else{
					HX_STACK_LINE(302)
					::flixel::FlxObject tmp39 = this->object;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(302)
					::flixel::util::FlxPoint tmp40 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(302)
					Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(302)
					Float tmp42 = node->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(302)
					bool tmp43 = (tmp41 < tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(302)
					Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(302)
					if ((tmp43)){
						HX_STACK_LINE(302)
						tmp44 = this->speed;
					}
					else{
						HX_STACK_LINE(302)
						Float tmp45 = this->speed;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(302)
						tmp44 = -(tmp45);
					}
					HX_STACK_LINE(302)
					tmp39->velocity->set_x(tmp44);
					HX_STACK_LINE(303)
					::flixel::FlxObject tmp45 = this->object;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(303)
					::flixel::util::FlxPoint tmp46 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(303)
					Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(303)
					Float tmp48 = node->y;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(303)
					bool tmp49 = (tmp47 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(303)
					Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(303)
					if ((tmp49)){
						HX_STACK_LINE(303)
						tmp50 = this->speed;
					}
					else{
						HX_STACK_LINE(303)
						Float tmp51 = this->speed;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(303)
						tmp50 = -(tmp51);
					}
					HX_STACK_LINE(303)
					tmp45->velocity->set_y(tmp50);
					HX_STACK_LINE(304)
					Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(304)
					{
						HX_STACK_LINE(304)
						::flixel::util::FlxPoint tmp52 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(304)
						::flixel::util::FlxPoint Point1 = tmp52;		HX_STACK_VAR(Point1,"Point1");
						HX_STACK_LINE(304)
						Float tmp53 = (node->x - Point1->x);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(304)
						Float x = tmp53;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(304)
						Float tmp54 = (node->y - Point1->y);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(304)
						Float y = tmp54;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(304)
						Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
						HX_STACK_LINE(304)
						bool tmp55 = (x != (int)0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(304)
						bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(304)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(304)
						if ((tmp56)){
							HX_STACK_LINE(304)
							tmp57 = (y != (int)0);
						}
						else{
							HX_STACK_LINE(304)
							tmp57 = true;
						}
						HX_STACK_LINE(304)
						if ((tmp57)){
							HX_STACK_LINE(304)
							Float tmp58 = ::Math_obj::PI;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(304)
							Float tmp59 = (tmp58 * ((Float)0.25));		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(304)
							Float c1 = tmp59;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(304)
							Float tmp60 = ((int)3 * c1);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(304)
							Float c2 = tmp60;		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(304)
							bool tmp61 = (y < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(304)
							Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(304)
							if ((tmp61)){
								HX_STACK_LINE(304)
								Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(304)
								tmp62 = -(tmp63);
							}
							else{
								HX_STACK_LINE(304)
								tmp62 = y;
							}
							HX_STACK_LINE(304)
							Float ay = tmp62;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(304)
							bool tmp63 = (x >= (int)0);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(304)
							if ((tmp63)){
								HX_STACK_LINE(304)
								Float tmp64 = c1;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(304)
								Float tmp65 = c1;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(304)
								Float tmp66 = (x - ay);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(304)
								Float tmp67 = (x + ay);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(304)
								Float tmp68 = (Float(tmp66) / Float(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(304)
								Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(304)
								Float tmp70 = (tmp64 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(304)
								angle = tmp70;
							}
							else{
								HX_STACK_LINE(304)
								Float tmp64 = c2;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(304)
								Float tmp65 = c1;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(304)
								Float tmp66 = (x + ay);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(304)
								Float tmp67 = (ay - x);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(304)
								Float tmp68 = (Float(tmp66) / Float(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(304)
								Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(304)
								Float tmp70 = (tmp64 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(304)
								angle = tmp70;
							}
							HX_STACK_LINE(304)
							bool tmp64 = (y < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(304)
							Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(304)
							if ((tmp64)){
								HX_STACK_LINE(304)
								Float tmp66 = angle;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(304)
								tmp65 = -(tmp66);
							}
							else{
								HX_STACK_LINE(304)
								tmp65 = angle;
							}
							HX_STACK_LINE(304)
							Float tmp66 = ::Math_obj::PI;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(304)
							Float tmp67 = (Float((int)180) / Float(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(304)
							Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(304)
							angle = tmp68;
							HX_STACK_LINE(304)
							bool tmp69 = (angle > (int)90);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(304)
							if ((tmp69)){
								HX_STACK_LINE(304)
								Float tmp70 = (angle - (int)270);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(304)
								angle = tmp70;
							}
							else{
								HX_STACK_LINE(304)
								hx::AddEq(angle,(int)90);
							}
						}
						HX_STACK_LINE(304)
						{
							HX_STACK_LINE(304)
							bool tmp58 = Point1->_weak;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(304)
							if ((tmp58)){
								HX_STACK_LINE(304)
								Point1->put();
							}
						}
						HX_STACK_LINE(304)
						{
							HX_STACK_LINE(304)
							bool tmp58 = node->_weak;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(304)
							if ((tmp58)){
								HX_STACK_LINE(304)
								node->put();
							}
						}
						HX_STACK_LINE(304)
						tmp51 = angle;
					}
					HX_STACK_LINE(304)
					this->angle = tmp51;
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::flixel::FlxObject tmp52 = this->object;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(305)
						::flixel::util::FlxPoint point = tmp52->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(305)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(305)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(305)
						Float tmp53 = this->angle;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(305)
						Float tmp54 = ::Math_obj::PI;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(305)
						Float tmp55 = (Float(tmp54) / Float((int)180));		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(305)
						Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(305)
						Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(305)
						Float radians = tmp57;		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							Float tmp58 = radians;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(305)
							Float tmp59 = ::Math_obj::PI;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(305)
							Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(305)
							bool tmp61 = (tmp58 < tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(305)
							bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(305)
							if ((tmp62)){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							Float tmp63 = ::Math_obj::PI;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(305)
							Float tmp64 = (tmp63 * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(305)
							hx::AddEq(radians,tmp64);
						}
						HX_STACK_LINE(305)
						while((true)){
							HX_STACK_LINE(305)
							Float tmp58 = radians;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(305)
							Float tmp59 = ::Math_obj::PI;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(305)
							bool tmp60 = (tmp58 > tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(305)
							bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(305)
							if ((tmp61)){
								HX_STACK_LINE(305)
								break;
							}
							HX_STACK_LINE(305)
							Float tmp62 = radians;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(305)
							Float tmp63 = ::Math_obj::PI;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(305)
							Float tmp64 = (tmp63 * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(305)
							Float tmp65 = (tmp62 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(305)
							radians = tmp65;
						}
						HX_STACK_LINE(305)
						bool tmp58 = (radians < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(305)
						if ((tmp58)){
							HX_STACK_LINE(305)
							Float tmp59 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(305)
							Float tmp60 = (((Float).405284735) * radians);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(305)
							Float tmp61 = radians;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(305)
							Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(305)
							Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(305)
							sin = tmp63;
							HX_STACK_LINE(305)
							bool tmp64 = (sin < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(305)
							if ((tmp64)){
								HX_STACK_LINE(305)
								Float tmp65 = sin;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(305)
								Float tmp66 = sin;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(305)
								Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(305)
								Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(305)
								Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(305)
								Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(305)
								Float tmp71 = (((Float).225) * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = sin;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								sin = tmp73;
							}
							else{
								HX_STACK_LINE(305)
								Float tmp65 = (sin * sin);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(305)
								Float tmp66 = sin;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(305)
								Float tmp67 = (tmp65 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(305)
								Float tmp68 = (((Float).225) * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(305)
								Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(305)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(305)
								sin = tmp70;
							}
						}
						else{
							HX_STACK_LINE(305)
							Float tmp59 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(305)
							Float tmp60 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(305)
							Float tmp61 = radians;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(305)
							Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(305)
							Float tmp63 = (tmp59 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(305)
							sin = tmp63;
							HX_STACK_LINE(305)
							bool tmp64 = (sin < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(305)
							if ((tmp64)){
								HX_STACK_LINE(305)
								Float tmp65 = sin;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(305)
								Float tmp66 = sin;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(305)
								Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(305)
								Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(305)
								Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(305)
								Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(305)
								Float tmp71 = (((Float).225) * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = sin;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								sin = tmp73;
							}
							else{
								HX_STACK_LINE(305)
								Float tmp65 = (sin * sin);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(305)
								Float tmp66 = sin;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(305)
								Float tmp67 = (tmp65 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(305)
								Float tmp68 = (((Float).225) * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(305)
								Float tmp69 = sin;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(305)
								Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(305)
								sin = tmp70;
							}
						}
						HX_STACK_LINE(305)
						Float tmp59 = ::Math_obj::PI;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(305)
						Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(305)
						hx::AddEq(radians,tmp60);
						HX_STACK_LINE(305)
						Float tmp61 = radians;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(305)
						Float tmp62 = ::Math_obj::PI;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(305)
						bool tmp63 = (tmp61 > tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(305)
						if ((tmp63)){
							HX_STACK_LINE(305)
							Float tmp64 = radians;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(305)
							Float tmp65 = ::Math_obj::PI;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(305)
							Float tmp66 = (tmp65 * (int)2);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(305)
							Float tmp67 = (tmp64 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(305)
							radians = tmp67;
						}
						HX_STACK_LINE(305)
						bool tmp64 = (radians < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(305)
						if ((tmp64)){
							HX_STACK_LINE(305)
							Float tmp65 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(305)
							Float tmp66 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(305)
							Float tmp67 = radians;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(305)
							Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(305)
							Float tmp69 = (tmp65 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(305)
							cos = tmp69;
							HX_STACK_LINE(305)
							bool tmp70 = (cos < (int)0);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(305)
							if ((tmp70)){
								HX_STACK_LINE(305)
								Float tmp71 = cos;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = cos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(305)
								Float tmp75 = cos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(305)
								Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(305)
								Float tmp77 = (((Float).225) * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(305)
								Float tmp78 = cos;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(305)
								Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(305)
								cos = tmp79;
							}
							else{
								HX_STACK_LINE(305)
								Float tmp71 = (cos * cos);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = cos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								Float tmp74 = (((Float).225) * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(305)
								Float tmp75 = cos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(305)
								Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(305)
								cos = tmp76;
							}
						}
						else{
							HX_STACK_LINE(305)
							Float tmp65 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(305)
							Float tmp66 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(305)
							Float tmp67 = radians;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(305)
							Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(305)
							Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(305)
							cos = tmp69;
							HX_STACK_LINE(305)
							bool tmp70 = (cos < (int)0);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(305)
							if ((tmp70)){
								HX_STACK_LINE(305)
								Float tmp71 = cos;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = cos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								Float tmp74 = (tmp71 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(305)
								Float tmp75 = cos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(305)
								Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(305)
								Float tmp77 = (((Float).225) * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(305)
								Float tmp78 = cos;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(305)
								Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(305)
								cos = tmp79;
							}
							else{
								HX_STACK_LINE(305)
								Float tmp71 = (cos * cos);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = cos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								Float tmp74 = (((Float).225) * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(305)
								Float tmp75 = cos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(305)
								Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(305)
								cos = tmp76;
							}
						}
						HX_STACK_LINE(305)
						Float tmp65 = (int)0;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(305)
						Float dx = tmp65;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(305)
						Float tmp66 = this->speed;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(305)
						Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(305)
						Float dy = tmp67;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(305)
						bool tmp68 = (point == null());		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(305)
						if ((tmp68)){
							HX_STACK_LINE(305)
							::flixel::util::FlxPoint tmp69;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								Float X = (int)0;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(305)
								Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(305)
								::flixel::util::FlxPool tmp70 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(305)
								::flixel::util::FlxPoint tmp71 = tmp70->get();		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(305)
								Float tmp72 = X;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(305)
								Float tmp73 = Y;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(305)
								::flixel::util::FlxPoint tmp74 = tmp71->set(tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(305)
								::flixel::util::FlxPoint point1 = tmp74;		HX_STACK_VAR(point1,"point1");
								HX_STACK_LINE(305)
								point1->_inPool = false;
								HX_STACK_LINE(305)
								tmp69 = point1;
							}
							HX_STACK_LINE(305)
							point = tmp69;
						}
						HX_STACK_LINE(305)
						Float tmp69 = (cos * dx);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(305)
						Float tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(305)
						Float tmp71 = (sin * dy);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(305)
						Float tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(305)
						point->set_x(tmp72);
						HX_STACK_LINE(305)
						Float tmp73 = (sin * dx);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(305)
						Float tmp74 = ((int)0 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(305)
						Float tmp75 = (cos * dy);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(305)
						Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(305)
						point->set_y(tmp76);
						HX_STACK_LINE(305)
						point;
					}
				}
			}
			HX_STACK_LINE(309)
			bool tmp36 = this->_autoRotate;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(309)
			if ((tmp36)){
				HX_STACK_LINE(311)
				::flixel::FlxObject tmp37 = this->object;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(311)
				tmp37->angularVelocity = (int)0;
				HX_STACK_LINE(312)
				::flixel::FlxObject tmp38 = this->object;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(312)
				tmp38->angularAcceleration = (int)0;
				HX_STACK_LINE(313)
				::flixel::FlxObject tmp39 = this->object;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(313)
				Float tmp40 = this->angle;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(313)
				tmp39->set_angle(tmp40);
			}
			HX_STACK_LINE(316)
			bool tmp37 = this->finished;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(316)
			if ((tmp37)){
				HX_STACK_LINE(318)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,update,(void))

::flixel::util::FlxPoint FlxPath_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",329,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Snap,"Snap")
{
		HX_STACK_LINE(330)
		bool tmp = Snap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		if ((tmp)){
			HX_STACK_LINE(332)
			int tmp1 = this->_nodeIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(332)
			::flixel::util::FlxPoint tmp2 = this->nodes->__get(tmp1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			::flixel::util::FlxPoint oldNode = tmp2;		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(333)
			bool tmp3 = (oldNode != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			if ((tmp3)){
				HX_STACK_LINE(335)
				int tmp4 = this->_mode;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				int tmp5 = (int(tmp4) & int((int)1048576));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(335)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				if ((tmp6)){
					HX_STACK_LINE(337)
					::flixel::FlxObject tmp7 = this->object;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					Float tmp8 = oldNode->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(337)
					tmp7->set_x(tmp8);
					HX_STACK_LINE(338)
					bool tmp9 = this->autoCenter;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(338)
					if ((tmp9)){
						HX_STACK_LINE(339)
						::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(339)
						::flixel::FlxObject _g = tmp10;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(339)
						Float tmp11 = _g->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(339)
						::flixel::FlxObject tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(339)
						Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(339)
						Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(339)
						Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(339)
						_g->set_x(tmp15);
					}
				}
				HX_STACK_LINE(341)
				int tmp7 = this->_mode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(341)
				int tmp8 = (int(tmp7) & int((int)65536));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(341)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(341)
				if ((tmp9)){
					HX_STACK_LINE(343)
					::flixel::FlxObject tmp10 = this->object;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(343)
					Float tmp11 = oldNode->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(343)
					tmp10->set_y(tmp11);
					HX_STACK_LINE(344)
					bool tmp12 = this->autoCenter;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(344)
					if ((tmp12)){
						HX_STACK_LINE(345)
						::flixel::FlxObject tmp13 = this->object;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(345)
						::flixel::FlxObject _g = tmp13;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(345)
						Float tmp14 = _g->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(345)
						::flixel::FlxObject tmp15 = this->object;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(345)
						Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(345)
						Float tmp17 = (tmp16 * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(345)
						Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(345)
						_g->set_y(tmp18);
					}
				}
			}
		}
		HX_STACK_LINE(350)
		bool callComplete = false;		HX_STACK_VAR(callComplete,"callComplete");
		HX_STACK_LINE(351)
		int tmp1 = this->_inc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		hx::AddEq(this->_nodeIndex,tmp1);
		HX_STACK_LINE(353)
		int tmp2 = this->_mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		int tmp3 = (int(tmp2) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		if ((tmp4)){
			HX_STACK_LINE(355)
			int tmp5 = this->_nodeIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(355)
			if ((tmp6)){
				HX_STACK_LINE(357)
				this->_nodeIndex = (int)0;
				HX_STACK_LINE(358)
				bool tmp7 = callComplete = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				this->finished = tmp7;
			}
		}
		else{
			HX_STACK_LINE(361)
			int tmp5 = this->_mode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(361)
			int tmp6 = (int(tmp5) & int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(361)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(361)
			if ((tmp7)){
				HX_STACK_LINE(363)
				int tmp8 = this->_nodeIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(363)
				int tmp9 = this->nodes->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(363)
				bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(363)
				if ((tmp10)){
					HX_STACK_LINE(365)
					callComplete = true;
					HX_STACK_LINE(366)
					this->_nodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(369)
				int tmp8 = this->_mode;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				int tmp9 = (int(tmp8) & int((int)256));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(369)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				if ((tmp10)){
					HX_STACK_LINE(371)
					int tmp11 = this->_nodeIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(371)
					bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(371)
					if ((tmp12)){
						HX_STACK_LINE(373)
						int tmp13 = this->nodes->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(373)
						int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						this->_nodeIndex = tmp14;
						HX_STACK_LINE(374)
						callComplete = true;
						HX_STACK_LINE(375)
						int tmp15 = this->_nodeIndex;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(375)
						bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(375)
						if ((tmp16)){
							HX_STACK_LINE(377)
							this->_nodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(381)
					int tmp11 = this->_mode;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(381)
					int tmp12 = (int(tmp11) & int((int)4096));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(381)
					bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(381)
					if ((tmp13)){
						HX_STACK_LINE(383)
						int tmp14 = this->_inc;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(383)
						bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(383)
						if ((tmp15)){
							HX_STACK_LINE(385)
							int tmp16 = this->_nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(385)
							int tmp17 = this->nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(385)
							bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(385)
							if ((tmp18)){
								HX_STACK_LINE(387)
								int tmp19 = this->nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(387)
								int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(387)
								this->_nodeIndex = tmp20;
								HX_STACK_LINE(388)
								callComplete = true;
								HX_STACK_LINE(389)
								int tmp21 = this->_nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(389)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(389)
								if ((tmp22)){
									HX_STACK_LINE(391)
									this->_nodeIndex = (int)0;
								}
								HX_STACK_LINE(393)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(393)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(393)
								this->_inc = tmp24;
							}
						}
						else{
							HX_STACK_LINE(396)
							int tmp16 = this->_nodeIndex;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(396)
							bool tmp17 = (tmp16 < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(396)
							if ((tmp17)){
								HX_STACK_LINE(398)
								this->_nodeIndex = (int)1;
								HX_STACK_LINE(399)
								callComplete = true;
								HX_STACK_LINE(400)
								int tmp18 = this->_nodeIndex;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(400)
								int tmp19 = this->nodes->length;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(400)
								bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(400)
								if ((tmp20)){
									HX_STACK_LINE(402)
									int tmp21 = this->nodes->length;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(402)
									int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(402)
									this->_nodeIndex = tmp22;
								}
								HX_STACK_LINE(404)
								int tmp21 = this->_nodeIndex;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(404)
								bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(404)
								if ((tmp22)){
									HX_STACK_LINE(406)
									this->_nodeIndex = (int)0;
								}
								HX_STACK_LINE(408)
								int tmp23 = this->_inc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(408)
								int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(408)
								this->_inc = tmp24;
							}
						}
					}
					else{
						HX_STACK_LINE(413)
						int tmp14 = this->_nodeIndex;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(413)
						int tmp15 = this->nodes->length;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(413)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(413)
						if ((tmp16)){
							HX_STACK_LINE(415)
							int tmp17 = this->nodes->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(415)
							int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(415)
							this->_nodeIndex = tmp18;
							HX_STACK_LINE(416)
							bool tmp19 = callComplete = true;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(416)
							this->finished = tmp19;
						}
					}
				}
			}
		}
		HX_STACK_LINE(420)
		bool tmp5 = callComplete;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(420)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		if ((tmp5)){
			HX_STACK_LINE(420)
			Dynamic tmp7 = this->onComplete_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(420)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(420)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(420)
			tmp6 = false;
		}
		HX_STACK_LINE(420)
		if ((tmp6)){
			HX_STACK_LINE(422)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(425)
		int tmp7 = this->_nodeIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(425)
		::flixel::util::FlxPoint tmp8 = this->nodes->__get(tmp7).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(425)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

Void FlxPath_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",432,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(433)
		this->finished = true;
		HX_STACK_LINE(435)
		::flixel::FlxObject tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		if ((tmp1)){
			HX_STACK_LINE(437)
			::flixel::FlxObject tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(437)
			tmp2->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(440)
		::flixel::plugin::PathManager tmp2 = ::flixel::util::FlxPath_obj::manager;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(440)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(440)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		if ((tmp3)){
			HX_STACK_LINE(440)
			tmp4 = this->_inManager;
		}
		else{
			HX_STACK_LINE(440)
			tmp4 = false;
		}
		HX_STACK_LINE(440)
		if ((tmp4)){
			HX_STACK_LINE(442)
			::flixel::plugin::PathManager tmp5 = ::flixel::util::FlxPath_obj::manager;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(442)
			tmp5->remove(hx::ObjectPtr<OBJ_>(this),null());
			HX_STACK_LINE(443)
			this->_inManager = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",451,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(453)
		{
			HX_STACK_LINE(453)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(453)
			Array< ::Dynamic > _g1 = this->nodes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(453)
			while((true)){
				HX_STACK_LINE(453)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(453)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(453)
				if ((tmp1)){
					HX_STACK_LINE(453)
					break;
				}
				HX_STACK_LINE(453)
				::flixel::util::FlxPoint tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(453)
				::flixel::util::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(453)
				++(_g);
				HX_STACK_LINE(455)
				::flixel::util::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(455)
				::flixel::util::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(455)
				point = tmp4;
			}
		}
		HX_STACK_LINE(457)
		this->nodes = null();
		HX_STACK_LINE(458)
		this->object = null();
		HX_STACK_LINE(459)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::flixel::util::FlxPath FlxPath_obj::add( Float X,Float Y){
	HX_STACK_FRAME("flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",469,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(470)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	{
		HX_STACK_LINE(470)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(470)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(470)
		point->_inPool = false;
		HX_STACK_LINE(470)
		tmp = point;
	}
	HX_STACK_LINE(470)
	this->nodes->push(tmp);
	HX_STACK_LINE(471)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

::flixel::util::FlxPath FlxPath_obj::addAt( Float X,Float Y,int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",482,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(483)
	bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	if ((tmp)){
		HX_STACK_LINE(483)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(484)
	int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	if ((tmp3)){
		HX_STACK_LINE(486)
		int tmp4 = this->nodes->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(486)
		Index = tmp4;
	}
	HX_STACK_LINE(488)
	int tmp4 = Index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(488)
		::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(488)
		Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(488)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(488)
		::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(488)
		point->_inPool = false;
		HX_STACK_LINE(488)
		tmp5 = point;
	}
	HX_STACK_LINE(488)
	this->nodes->insert(tmp4,tmp5);
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::util::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",501,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(502)
		bool tmp = AsReference;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		if ((tmp)){
			HX_STACK_LINE(504)
			::flixel::util::FlxPoint tmp1 = Node;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(504)
			this->nodes->push(tmp1);
		}
		else{
			HX_STACK_LINE(508)
			::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(508)
				::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(508)
				Float tmp4 = Node->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				Float tmp5 = Node->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(508)
				::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(508)
				point->_inPool = false;
				HX_STACK_LINE(508)
				tmp1 = point;
			}
			HX_STACK_LINE(508)
			this->nodes->push(tmp1);
		}
		HX_STACK_LINE(510)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::util::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",523,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(524)
		bool tmp = (Index < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(524)
		if ((tmp)){
			HX_STACK_LINE(524)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(525)
		int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		if ((tmp3)){
			HX_STACK_LINE(527)
			int tmp4 = this->nodes->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			Index = tmp4;
		}
		HX_STACK_LINE(529)
		bool tmp4 = AsReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(529)
		if ((tmp4)){
			HX_STACK_LINE(531)
			int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(531)
			::flixel::util::FlxPoint tmp6 = Node;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			this->nodes->insert(tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(535)
			int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(535)
			::flixel::util::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(535)
				::flixel::util::FlxPool tmp7 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(535)
				::flixel::util::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(535)
				Float tmp9 = Node->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(535)
				Float tmp10 = Node->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(535)
				::flixel::util::FlxPoint tmp11 = tmp8->set(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(535)
				::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(535)
				point->_inPool = false;
				HX_STACK_LINE(535)
				tmp6 = point;
			}
			HX_STACK_LINE(535)
			this->nodes->insert(tmp5,tmp6);
		}
		HX_STACK_LINE(537)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

::flixel::util::FlxPoint FlxPath_obj::remove( ::flixel::util::FlxPoint Node){
	HX_STACK_FRAME("flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",548,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_LINE(549)
	::flixel::util::FlxPoint tmp = Node;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	int tmp1 = this->nodes->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(550)
	bool tmp2 = (index >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(550)
	if ((tmp2)){
		HX_STACK_LINE(552)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		::flixel::util::FlxPoint tmp4 = this->nodes->splice(tmp3,(int)1)->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		return tmp4;
	}
	else{
		HX_STACK_LINE(556)
		return null();
	}
	HX_STACK_LINE(550)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

::flixel::util::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",567,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(568)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(568)
	if ((tmp1)){
		HX_STACK_LINE(570)
		return null();
	}
	HX_STACK_LINE(572)
	int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	int tmp3 = this->nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	if ((tmp4)){
		HX_STACK_LINE(574)
		int tmp5 = this->nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(574)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(574)
		Index = tmp6;
	}
	HX_STACK_LINE(576)
	int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(576)
	::flixel::util::FlxPoint tmp6 = this->nodes->splice(tmp5,(int)1)->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(576)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::flixel::util::FlxPoint FlxPath_obj::head( ){
	HX_STACK_FRAME("flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",585,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(586)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	if ((tmp1)){
		HX_STACK_LINE(588)
		::flixel::util::FlxPoint tmp2 = this->nodes->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(588)
		return tmp2;
	}
	HX_STACK_LINE(590)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::flixel::util::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_FRAME("flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",599,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(600)
	int tmp = this->nodes->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(600)
	if ((tmp1)){
		HX_STACK_LINE(602)
		int tmp2 = this->nodes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(602)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(602)
		::flixel::util::FlxPoint tmp4 = this->nodes->__get(tmp3).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(602)
		return tmp4;
	}
	HX_STACK_LINE(604)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

Void FlxPath_obj::drawDebug( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.util.FlxPath","drawDebug",0x7c3a9bfe,"flixel.util.FlxPath.drawDebug","flixel/util/FlxPath.hx",617,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(618)
		bool tmp = (this->nodes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(618)
			int tmp3 = this->nodes->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(618)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(618)
			tmp2 = (tmp4 <= (int)0);
		}
		else{
			HX_STACK_LINE(618)
			tmp2 = true;
		}
		HX_STACK_LINE(618)
		if ((tmp2)){
			HX_STACK_LINE(620)
			return null();
		}
		HX_STACK_LINE(622)
		bool tmp3 = (Camera == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(622)
		if ((tmp3)){
			HX_STACK_LINE(624)
			::flixel::FlxCamera tmp4 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			Camera = tmp4;
		}
		HX_STACK_LINE(632)
		::openfl::_legacy::display::Graphics tmp4 = Camera->debugLayer->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(632)
		::openfl::_legacy::display::Graphics gfx = tmp4;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(636)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(637)
		::flixel::util::FlxPoint nextNode;		HX_STACK_VAR(nextNode,"nextNode");
		HX_STACK_LINE(638)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(639)
		int tmp5 = this->nodes->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		int l = tmp5;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			bool tmp6 = (i < l);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(640)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(640)
			if ((tmp7)){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(643)
			::flixel::util::FlxPoint tmp8 = this->nodes->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			node = tmp8;
			HX_STACK_LINE(646)
			::flixel::util::FlxPoint tmp9 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(646)
			Float tmp10 = node->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(646)
			Float tmp11 = Camera->scroll->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(646)
			Float tmp12 = this->debugScrollX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(646)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(646)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(646)
			tmp9->set_x(tmp14);
			HX_STACK_LINE(647)
			::flixel::util::FlxPoint tmp15 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(647)
			Float tmp16 = node->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(647)
			Float tmp17 = Camera->scroll->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(647)
			Float tmp18 = this->debugScrollY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(647)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(647)
			Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(647)
			tmp15->set_y(tmp20);
			HX_STACK_LINE(650)
			int nodeSize = (int)2;		HX_STACK_VAR(nodeSize,"nodeSize");
			HX_STACK_LINE(651)
			bool tmp21 = (i == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(651)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(651)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(651)
			if ((tmp22)){
				HX_STACK_LINE(651)
				int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(651)
				int tmp25 = (l - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(651)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(651)
				tmp23 = (tmp24 == tmp26);
			}
			else{
				HX_STACK_LINE(651)
				tmp23 = true;
			}
			HX_STACK_LINE(651)
			if ((tmp23)){
				HX_STACK_LINE(653)
				hx::MultEq(nodeSize,(int)2);
			}
			HX_STACK_LINE(655)
			int tmp24 = this->debugColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(655)
			int nodeColor = tmp24;		HX_STACK_VAR(nodeColor,"nodeColor");
			HX_STACK_LINE(656)
			bool tmp25 = (l > (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(656)
			if ((tmp25)){
				HX_STACK_LINE(658)
				bool tmp26 = (i == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(658)
				if ((tmp26)){
					HX_STACK_LINE(660)
					nodeColor = (int)-16744448;
				}
				else{
					HX_STACK_LINE(662)
					int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(662)
					int tmp28 = (l - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(662)
					bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(662)
					if ((tmp29)){
						HX_STACK_LINE(664)
						nodeColor = (int)-65536;
					}
				}
			}
			HX_STACK_LINE(669)
			int tmp26 = nodeColor;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(669)
			gfx->beginFill(tmp26,((Float)0.5));
			HX_STACK_LINE(670)
			gfx->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(671)
			::flixel::util::FlxPoint tmp27 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(671)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(671)
			Float tmp29 = (nodeSize * ((Float)0.5));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(671)
			Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(671)
			::flixel::util::FlxPoint tmp31 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(671)
			Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(671)
			Float tmp33 = (nodeSize * ((Float)0.5));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(671)
			Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(671)
			int tmp35 = nodeSize;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(671)
			int tmp36 = nodeSize;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(671)
			gfx->drawRect(tmp30,tmp34,tmp35,tmp36);
			HX_STACK_LINE(672)
			gfx->endFill();
			HX_STACK_LINE(675)
			Float linealpha = ((Float)0.3);		HX_STACK_VAR(linealpha,"linealpha");
			HX_STACK_LINE(676)
			int tmp37 = i;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(676)
			int tmp38 = (l - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(676)
			bool tmp39 = (tmp37 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(676)
			if ((tmp39)){
				HX_STACK_LINE(678)
				int tmp40 = (i + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(678)
				::flixel::util::FlxPoint tmp41 = this->nodes->__get(tmp40).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(678)
				nextNode = tmp41;
			}
			else{
				HX_STACK_LINE(682)
				::flixel::util::FlxPoint tmp40 = this->nodes->__get(i).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(682)
				nextNode = tmp40;
			}
			HX_STACK_LINE(686)
			::flixel::util::FlxPoint tmp40 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(686)
			Float tmp41 = tmp40->x;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(686)
			::flixel::util::FlxPoint tmp42 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(686)
			Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(686)
			gfx->moveTo(tmp41,tmp43);
			HX_STACK_LINE(687)
			int tmp44 = this->debugColor;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(687)
			Float tmp45 = linealpha;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(687)
			gfx->lineStyle((int)1,tmp44,tmp45,null(),null(),null(),null(),null());
			HX_STACK_LINE(688)
			::flixel::util::FlxPoint tmp46 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(688)
			Float tmp47 = nextNode->x;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(688)
			Float tmp48 = Camera->scroll->x;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(688)
			Float tmp49 = this->debugScrollX;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(688)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(688)
			Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(688)
			tmp46->set_x(tmp51);
			HX_STACK_LINE(689)
			::flixel::util::FlxPoint tmp52 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(689)
			Float tmp53 = nextNode->y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(689)
			Float tmp54 = Camera->scroll->y;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(689)
			Float tmp55 = this->debugScrollY;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(689)
			Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(689)
			Float tmp57 = (tmp53 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(689)
			tmp52->set_y(tmp57);
			HX_STACK_LINE(690)
			::flixel::util::FlxPoint tmp58 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(690)
			Float tmp59 = tmp58->x;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(690)
			::flixel::util::FlxPoint tmp60 = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(690)
			Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(690)
			gfx->lineTo(tmp59,tmp61);
			HX_STACK_LINE(692)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,drawDebug,(void))

::flixel::plugin::PathManager FlxPath_obj::manager;

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

::flixel::util::FlxPoint FlxPath_obj::_point;


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(debugColor,"debugColor");
	HX_MARK_MEMBER_NAME(debugScrollX,"debugScrollX");
	HX_MARK_MEMBER_NAME(debugScrollY,"debugScrollY");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_nodeIndex,"_nodeIndex");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(debugColor,"debugColor");
	HX_VISIT_MEMBER_NAME(debugScrollX,"debugScrollX");
	HX_VISIT_MEMBER_NAME(debugScrollY,"debugScrollY");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_nodeIndex,"_nodeIndex");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return _inc; }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return autoCenter; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"debugColor") ) { return debugColor; }
		if (HX_FIELD_EQ(inName,"_nodeIndex") ) { return _nodeIndex; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return _inManager; }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return _autoRotate; }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugScrollX") ) { return debugScrollX; }
		if (HX_FIELD_EQ(inName,"debugScrollY") ) { return debugScrollY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = _point; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { outValue = manager; return true;  }
	}
	return false;
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugColor") ) { debugColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nodeIndex") ) { _nodeIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugScrollX") ) { debugScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugScrollY") ) { debugScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast< ::flixel::util::FlxPoint >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=ioValue.Cast< ::flixel::plugin::PathManager >(); return true; }
	}
	return false;
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("debugColor","\x10","\x42","\x40","\x49"));
	outFields->push(HX_HCSTRING("debugScrollX","\x98","\x49","\xd3","\x8c"));
	outFields->push(HX_HCSTRING("debugScrollY","\x99","\x49","\xd3","\x8c"));
	outFields->push(HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("_nodeIndex","\x71","\xf5","\xec","\xbd"));
	outFields->push(HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"));
	outFields->push(HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"));
	outFields->push(HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPath_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxPath_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,debugColor),HX_HCSTRING("debugColor","\x10","\x42","\x40","\x49")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,debugScrollX),HX_HCSTRING("debugScrollX","\x98","\x49","\xd3","\x8c")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,debugScrollY),HX_HCSTRING("debugScrollY","\x99","\x49","\xd3","\x8c")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,ignoreDrawDebug),HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_nodeIndex),HX_HCSTRING("_nodeIndex","\x71","\xf5","\xec","\xbd")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_inManager),HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::plugin::PathManager*/ ,(void *) &FlxPath_obj::manager,HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsInt,(void *) &FlxPath_obj::FORWARD,HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65")},
	{hx::fsInt,(void *) &FlxPath_obj::BACKWARD,HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_FORWARD,HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b")},
	{hx::fsInt,(void *) &FlxPath_obj::LOOP_BACKWARD,HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3")},
	{hx::fsInt,(void *) &FlxPath_obj::YOYO,HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b")},
	{hx::fsInt,(void *) &FlxPath_obj::HORIZONTAL_ONLY,HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a")},
	{hx::fsInt,(void *) &FlxPath_obj::VERTICAL_ONLY,HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(void *) &FlxPath_obj::_point,HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("autoCenter","\xa4","\x36","\xa6","\x71"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("debugColor","\x10","\x42","\x40","\x49"),
	HX_HCSTRING("debugScrollX","\x98","\x49","\xd3","\x8c"),
	HX_HCSTRING("debugScrollY","\x99","\x49","\xd3","\x8c"),
	HX_HCSTRING("ignoreDrawDebug","\x3d","\xfc","\x11","\x6b"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("_nodeIndex","\x71","\xf5","\xec","\xbd"),
	HX_HCSTRING("_mode","\x42","\xef","\x71","\xfb"),
	HX_HCSTRING("_inc","\xdf","\x51","\x1b","\x3f"),
	HX_HCSTRING("_autoRotate","\x49","\x24","\x75","\x09"),
	HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("setNode","\xc4","\x4a","\x8e","\x0e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("advancePath","\x47","\x83","\xf2","\xa8"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addAt","\x74","\xb5","\x43","\x1c"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("addPointAt","\x42","\xcd","\xab","\xb8"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("tail","\x90","\xb6","\xf6","\x4c"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

hx::Class FlxPath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("FORWARD","\xa5","\xb5","\x9e","\x65"),
	HX_HCSTRING("BACKWARD","\xe3","\x6b","\x9e","\x80"),
	HX_HCSTRING("LOOP_FORWARD","\x8a","\x81","\x3a","\x2b"),
	HX_HCSTRING("LOOP_BACKWARD","\x5e","\x08","\x55","\xa3"),
	HX_HCSTRING("YOYO","\x2c","\x3d","\x10","\x3b"),
	HX_HCSTRING("HORIZONTAL_ONLY","\xe7","\x3d","\x5f","\x9a"),
	HX_HCSTRING("VERTICAL_ONLY","\x15","\x31","\x92","\x7f"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	::String(null()) };

void FlxPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxPath","\xfd","\xcb","\x52","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxPath_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPath_obj >;
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

void FlxPath_obj::__boot()
{
	FORWARD= (int)0;
	BACKWARD= (int)1;
	LOOP_FORWARD= (int)16;
	LOOP_BACKWARD= (int)256;
	YOYO= (int)4096;
	HORIZONTAL_ONLY= (int)65536;
	VERTICAL_ONLY= (int)1048576;
struct _Function_0_1{
	inline static ::flixel::util::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",54,0x22aae741)
		{
			HX_STACK_LINE(54)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(54)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(54)
			::flixel::util::FlxPool tmp = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(54)
			point->_inPool = false;
			HX_STACK_LINE(54)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
