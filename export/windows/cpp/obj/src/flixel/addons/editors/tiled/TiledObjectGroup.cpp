#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObjectGroup_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObjectGroup","new",0x9d90e185,"flixel.addons.editors.tiled.TiledObjectGroup.new","flixel/addons/editors/tiled/TiledObjectGroup.hx",21,0x90b069e9)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(22)
	::flixel::addons::editors::tiled::TiledPropertySet tmp = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->properties = tmp;
	HX_STACK_LINE(23)
	this->objects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(25)
	this->map = Parent;
	HX_STACK_LINE(26)
	::String tmp1 = Source->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->name = tmp1;
	HX_STACK_LINE(27)
	bool tmp2 = Source->has->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(27)
		::String tmp4 = Source->att->resolve(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		tmp3 = (tmp5 == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(27)
		tmp3 = false;
	}
	HX_STACK_LINE(27)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		tmp4 = true;
	}
	else{
		HX_STACK_LINE(27)
		tmp4 = false;
	}
	HX_STACK_LINE(27)
	this->visible = tmp4;
	HX_STACK_LINE(28)
	bool tmp5 = Source->has->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	if ((tmp5)){
		HX_STACK_LINE(28)
		::String tmp7 = Source->att->resolve(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		tmp6 = ::Std_obj::parseFloat(tmp7);
	}
	else{
		HX_STACK_LINE(28)
		tmp6 = (int)0;
	}
	HX_STACK_LINE(28)
	this->opacity = tmp6;
	HX_STACK_LINE(29)
	bool tmp7 = Source->has->resolve(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	if ((tmp7)){
		HX_STACK_LINE(31)
		::String tmp8 = Source->att->resolve(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::String hex = tmp8;		HX_STACK_VAR(hex,"hex");
		HX_STACK_LINE(32)
		int tmp9 = hex.length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(32)
		::String tmp10 = hex.substring((int)1,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		::String tmp11 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		hex = tmp11;
		HX_STACK_LINE(33)
		::String tmp12 = hex;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(33)
		Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(33)
		this->color = tmp13;
	}
	else{
		HX_STACK_LINE(36)
		this->color = (int)0;
	}
	HX_STACK_LINE(39)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::_List::ListIterator tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::List tmp9 = Source->nodes->resolve(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			::List _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(41)
			tmp8 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(41)
		::_List::ListIterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			bool tmp9 = (_g->head != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			if ((tmp10)){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				Dynamic tmp12 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(41)
				_g->val = tmp12;
				HX_STACK_LINE(41)
				Dynamic tmp13 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(41)
				_g->head = tmp13;
				HX_STACK_LINE(41)
				tmp11 = _g->val;
			}
			HX_STACK_LINE(41)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp11));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(43)
			::flixel::addons::editors::tiled::TiledPropertySet tmp12 = this->properties;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			::haxe::xml::Fast tmp13 = node1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			tmp12->extend(tmp13);
		}
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::_List::ListIterator tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::List tmp9 = Source->nodes->resolve(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			::List _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(47)
			tmp8 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(47)
		::_List::ListIterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			bool tmp9 = (_g->head != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(47)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			if ((tmp10)){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				Dynamic tmp12 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				_g->val = tmp12;
				HX_STACK_LINE(47)
				Dynamic tmp13 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				_g->head = tmp13;
				HX_STACK_LINE(47)
				tmp11 = _g->val;
			}
			HX_STACK_LINE(47)
			::haxe::xml::Fast node1 = ((::haxe::xml::Fast)(tmp11));		HX_STACK_VAR(node1,"node1");
			HX_STACK_LINE(49)
			::flixel::addons::editors::tiled::TiledObject tmp12 = ::flixel::addons::editors::tiled::TiledObject_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			this->objects->push(tmp12);
		}
	}
}
;
	return null();
}

//TiledObjectGroup_obj::~TiledObjectGroup_obj() { }

Dynamic TiledObjectGroup_obj::__CreateEmpty() { return  new TiledObjectGroup_obj; }
hx::ObjectPtr< TiledObjectGroup_obj > TiledObjectGroup_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledObjectGroup_obj > _result_ = new TiledObjectGroup_obj();
	_result_->__construct(Source,Parent);
	return _result_;}

Dynamic TiledObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectGroup_obj > _result_ = new TiledObjectGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


TiledObjectGroup_obj::TiledObjectGroup_obj()
{
}

void TiledObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectGroup);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void TiledObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic TiledObjectGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledObjectGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledObjectGroup_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(TiledObjectGroup_obj,opacity),HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb")},
	{hx::fsBool,(int)offsetof(TiledObjectGroup_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObjectGroup_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectGroup_obj,objects),HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledObjectGroup_obj::__mClass;

void TiledObjectGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledObjectGroup","\x13","\xbb","\xbe","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledObjectGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledObjectGroup_obj >;
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
} // end namespace addons
} // end namespace editors
} // end namespace tiled
