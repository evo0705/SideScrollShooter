#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObject_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","new",0x3a8d437e,"flixel.addons.editors.tiled.TiledObject.new","flixel/addons/editors/tiled/TiledObject.hx",73,0x5c109e14)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(74)
	this->xmlData = Source;
	HX_STACK_LINE(75)
	this->group = Parent;
	HX_STACK_LINE(76)
	bool tmp = Source->has->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	if ((tmp)){
		HX_STACK_LINE(76)
		tmp1 = Source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	}
	else{
		HX_STACK_LINE(76)
		tmp1 = HX_HCSTRING("[object]","\xc3","\xf9","\x3d","\xd7");
	}
	HX_STACK_LINE(76)
	this->name = tmp1;
	HX_STACK_LINE(77)
	bool tmp2 = Source->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(77)
		tmp3 = Source->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	}
	else{
		HX_STACK_LINE(77)
		tmp3 = Parent->name;
	}
	HX_STACK_LINE(77)
	this->type = tmp3;
	HX_STACK_LINE(78)
	::String tmp4 = Source->att->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	this->x = tmp5;
	HX_STACK_LINE(79)
	::String tmp6 = Source->att->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(79)
	this->y = tmp7;
	HX_STACK_LINE(80)
	bool tmp8 = Source->has->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	if ((tmp8)){
		HX_STACK_LINE(80)
		::String tmp10 = Source->att->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		tmp9 = ::Std_obj::parseInt(tmp10);
	}
	else{
		HX_STACK_LINE(80)
		tmp9 = (int)0;
	}
	HX_STACK_LINE(80)
	this->width = tmp9;
	HX_STACK_LINE(81)
	bool tmp10 = Source->has->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(81)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(81)
	if ((tmp10)){
		HX_STACK_LINE(81)
		::String tmp12 = Source->att->resolve(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		tmp11 = ::Std_obj::parseInt(tmp12);
	}
	else{
		HX_STACK_LINE(81)
		tmp11 = (int)0;
	}
	HX_STACK_LINE(81)
	this->height = tmp11;
	HX_STACK_LINE(82)
	bool tmp12 = Source->has->resolve(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(82)
	Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(82)
	if ((tmp12)){
		HX_STACK_LINE(82)
		::String tmp14 = Source->att->resolve(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		tmp13 = ::Std_obj::parseFloat(tmp14);
	}
	else{
		HX_STACK_LINE(82)
		tmp13 = (int)0;
	}
	HX_STACK_LINE(82)
	this->angle = tmp13;
	HX_STACK_LINE(84)
	this->objectType = (int)0;
	HX_STACK_LINE(87)
	this->shared = null();
	HX_STACK_LINE(88)
	this->gid = (int)-1;
	HX_STACK_LINE(91)
	bool tmp14 = Source->has->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(91)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(91)
	if ((tmp14)){
		HX_STACK_LINE(91)
		::String tmp16 = Source->att->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		int tmp18 = tmp17.length;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(91)
		tmp15 = (tmp18 != (int)0);
	}
	else{
		HX_STACK_LINE(91)
		tmp15 = false;
	}
	HX_STACK_LINE(91)
	if ((tmp15)){
		HX_STACK_LINE(93)
		::String tmp16 = Source->att->resolve(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(93)
		Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(93)
		this->gid = tmp17;
		HX_STACK_LINE(94)
		::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(96)
		::flixel::addons::editors::tiled::TiledObjectGroup tmp18 = this->group;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp19 = tmp18->map->tilesets;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(96)
		Dynamic tmp20 = tmp19->iterator();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(96)
		for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(tmp20);  __it->hasNext(); ){
			::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
			{
				HX_STACK_LINE(98)
				int tmp21 = this->gid;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(98)
				::flixel::addons::editors::tiled::TiledPropertySet tmp22 = set1->getPropertiesByGid(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(98)
				this->shared = tmp22;
				HX_STACK_LINE(100)
				::flixel::addons::editors::tiled::TiledPropertySet tmp23 = this->shared;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(100)
				bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(100)
				if ((tmp24)){
					HX_STACK_LINE(102)
					break;
				}
			}
;
		}
		HX_STACK_LINE(106)
		this->objectType = (int)4;
	}
	HX_STACK_LINE(110)
	::Xml node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(111)
	::flixel::addons::editors::tiled::TiledPropertySet tmp16 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(111)
	this->custom = tmp16;
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::_List::ListIterator tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::List tmp18 = Source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(113)
			::List _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			tmp17 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(113)
		::_List::ListIterator _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		while((true)){
			HX_STACK_LINE(113)
			bool tmp18 = (_g->head != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(113)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(113)
			if ((tmp19)){
				HX_STACK_LINE(113)
				break;
			}
			HX_STACK_LINE(113)
			Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				Dynamic tmp21 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(113)
				_g->val = tmp21;
				HX_STACK_LINE(113)
				Dynamic tmp22 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(113)
				_g->head = tmp22;
				HX_STACK_LINE(113)
				tmp20 = _g->val;
			}
			HX_STACK_LINE(113)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp20));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(115)
			::flixel::addons::editors::tiled::TiledPropertySet tmp21 = this->custom;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(115)
			::haxe::xml::Fast tmp22 = node1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(115)
			tmp21->extend(tmp22);
		}
	}
	HX_STACK_LINE(119)
	bool tmp17 = Source->hasNode->resolve(HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(119)
	if ((tmp17)){
		HX_STACK_LINE(120)
		this->objectType = (int)1;
	}
	else{
		HX_STACK_LINE(121)
		bool tmp18 = Source->hasNode->resolve(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(121)
		if ((tmp18)){
			HX_STACK_LINE(122)
			this->objectType = (int)2;
			HX_STACK_LINE(123)
			::haxe::xml::Fast tmp19 = Source->node->resolve(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(123)
			this->getPoints(tmp19);
		}
		else{
			HX_STACK_LINE(124)
			bool tmp19 = Source->hasNode->resolve(HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			if ((tmp19)){
				HX_STACK_LINE(125)
				this->objectType = (int)3;
				HX_STACK_LINE(126)
				::haxe::xml::Fast tmp20 = Source->node->resolve(HX_HCSTRING("polyline","\x40","\xac","\x9a","\x2f"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(126)
				this->getPoints(tmp20);
			}
		}
	}
}
;
	return null();
}

//TiledObject_obj::~TiledObject_obj() { }

Dynamic TiledObject_obj::__CreateEmpty() { return  new TiledObject_obj; }
hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{  hx::ObjectPtr< TiledObject_obj > _result_ = new TiledObject_obj();
	_result_->__construct(Source,Parent);
	return _result_;}

Dynamic TiledObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObject_obj > _result_ = new TiledObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TiledObject_obj::getPoints( ::haxe::xml::Fast Node){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","getPoints",0xa25a38f7,"flixel.addons.editors.tiled.TiledObject.getPoints","flixel/addons/editors/tiled/TiledObject.hx",130,0x5c109e14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Node,"Node")
		HX_STACK_LINE(131)
		this->points = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(133)
		::String tmp = Node->att->resolve(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		Array< ::String > pointsStr = tmp.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(pointsStr,"pointsStr");
		HX_STACK_LINE(134)
		Array< ::String > pair;		HX_STACK_VAR(pair,"pair");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(135)
			while((true)){
				HX_STACK_LINE(135)
				bool tmp1 = (_g < pointsStr->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(135)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(135)
				if ((tmp2)){
					HX_STACK_LINE(135)
					break;
				}
				HX_STACK_LINE(135)
				::String tmp3 = pointsStr->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(135)
				::String p = tmp3;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(135)
				++(_g);
				HX_STACK_LINE(136)
				pair = p.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::String tmp5 = pair->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(137)
					Float tmp6 = ::Std_obj::parseFloat(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(137)
					Float X = tmp6;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(137)
					::String tmp7 = pair->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(137)
					Float tmp8 = ::Std_obj::parseFloat(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(137)
					Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(137)
					::flixel::util::FlxPool tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(137)
					::flixel::util::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					::flixel::util::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(137)
					point->_inPool = false;
					HX_STACK_LINE(137)
					tmp4 = point;
				}
				HX_STACK_LINE(137)
				this->points->push(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,getPoints,(void))

bool TiledObject_obj::get_flippedHorizontally( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","get_flippedHorizontally",0x96c60c88,"flixel.addons.editors.tiled.TiledObject.get_flippedHorizontally","flixel/addons/editors/tiled/TiledObject.hx",145,0x5c109e14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	int tmp = this->gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	int tmp1 = (int(tmp) & int((int)-2147483648));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	bool tmp2 = ((bool)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_flippedHorizontally,return )

bool TiledObject_obj::get_flippedVertically( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","get_flippedVertically",0xd9ef50da,"flixel.addons.editors.tiled.TiledObject.get_flippedVertically","flixel/addons/editors/tiled/TiledObject.hx",150,0x5c109e14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	int tmp = this->gid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	int tmp1 = (int(tmp) & int((int)1073741824));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	bool tmp2 = ((bool)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_flippedVertically,return )

int TiledObject_obj::FLIPPED_VERTICALLY_FLAG;

int TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG;

int TiledObject_obj::RECTANGLE;

int TiledObject_obj::ELLIPSE;

int TiledObject_obj::POLYGON;

int TiledObject_obj::POLYLINE;

int TiledObject_obj::TILE;


TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(objectType,"objectType");
	HX_MARK_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_MARK_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(objectType,"objectType");
	HX_VISIT_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_VISIT_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic TiledObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"shared") ) { return shared; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { return objectType; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { return inCallProp == hx::paccAlways ? get_flippedVertically() : flippedVertically; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { return inCallProp == hx::paccAlways ? get_flippedHorizontally() : flippedHorizontally; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_flippedVertically") ) { return get_flippedVertically_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_flippedHorizontally") ) { return get_flippedHorizontally_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::addons::editors::tiled::TiledObjectGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { objectType=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { flippedVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { flippedHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"));
	outFields->push(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"));
	outFields->push(HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("objectType","\x19","\x69","\x41","\xcf"));
	outFields->push(HX_HCSTRING("flippedHorizontally","\xd3","\x6f","\x95","\xb0"));
	outFields->push(HX_HCSTRING("flippedVertically","\x65","\xbb","\x26","\xa7"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(TiledObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(TiledObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(TiledObject_obj,xmlData),HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f")},
	{hx::fsFloat,(int)offsetof(TiledObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,gid),HX_HCSTRING("gid","\x02","\x84","\x4e","\x00")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObject_obj,custom),HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObject_obj,shared),HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledObjectGroup*/ ,(int)offsetof(TiledObject_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,objectType),HX_HCSTRING("objectType","\x19","\x69","\x41","\xcf")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,flippedHorizontally),HX_HCSTRING("flippedHorizontally","\xd3","\x6f","\x95","\xb0")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,flippedVertically),HX_HCSTRING("flippedVertically","\x65","\xbb","\x26","\xa7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObject_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TiledObject_obj::FLIPPED_VERTICALLY_FLAG,HX_HCSTRING("FLIPPED_VERTICALLY_FLAG","\xcb","\x82","\xb6","\x97")},
	{hx::fsInt,(void *) &TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,HX_HCSTRING("FLIPPED_HORIZONTALLY_FLAG","\xdd","\x16","\x9f","\xd8")},
	{hx::fsInt,(void *) &TiledObject_obj::RECTANGLE,HX_HCSTRING("RECTANGLE","\x0f","\x44","\xd5","\x14")},
	{hx::fsInt,(void *) &TiledObject_obj::ELLIPSE,HX_HCSTRING("ELLIPSE","\xbe","\x14","\x5a","\x8b")},
	{hx::fsInt,(void *) &TiledObject_obj::POLYGON,HX_HCSTRING("POLYGON","\x5a","\xd6","\x64","\x92")},
	{hx::fsInt,(void *) &TiledObject_obj::POLYLINE,HX_HCSTRING("POLYLINE","\x40","\x3c","\x20","\x89")},
	{hx::fsInt,(void *) &TiledObject_obj::TILE,HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("xmlData","\xa1","\x27","\x79","\x6f"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"),
	HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),
	HX_HCSTRING("shared","\xa5","\x5e","\x2b","\x1d"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("objectType","\x19","\x69","\x41","\xcf"),
	HX_HCSTRING("flippedHorizontally","\xd3","\x6f","\x95","\xb0"),
	HX_HCSTRING("flippedVertically","\x65","\xbb","\x26","\xa7"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("getPoints","\x59","\x9b","\x84","\x73"),
	HX_HCSTRING("get_flippedHorizontally","\x6a","\x16","\xeb","\xb8"),
	HX_HCSTRING("get_flippedVertically","\x3c","\xbe","\xd4","\x25"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#endif

hx::Class TiledObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FLIPPED_VERTICALLY_FLAG","\xcb","\x82","\xb6","\x97"),
	HX_HCSTRING("FLIPPED_HORIZONTALLY_FLAG","\xdd","\x16","\x9f","\xd8"),
	HX_HCSTRING("RECTANGLE","\x0f","\x44","\xd5","\x14"),
	HX_HCSTRING("ELLIPSE","\xbe","\x14","\x5a","\x8b"),
	HX_HCSTRING("POLYGON","\x5a","\xd6","\x64","\x92"),
	HX_HCSTRING("POLYLINE","\x40","\x3c","\x20","\x89"),
	HX_HCSTRING("TILE","\x2e","\x93","\xbd","\x37"),
	::String(null()) };

void TiledObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledObject","\x8c","\x6c","\x12","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObject_obj >;
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

void TiledObject_obj::__boot()
{
	FLIPPED_VERTICALLY_FLAG= (int)1073741824;
	FLIPPED_HORIZONTALLY_FLAG= (int)-2147483648;
	RECTANGLE= (int)0;
	ELLIPSE= (int)1;
	POLYGON= (int)2;
	POLYLINE= (int)3;
	TILE= (int)4;
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
