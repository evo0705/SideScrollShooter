#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledPropertySet_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","new",0x0ee1ea52,"flixel.addons.editors.tiled.TiledPropertySet.new","flixel/addons/editors/tiled/TiledPropertySet.hx",13,0x279539bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		tmp = tmp2;
	}
	HX_STACK_LINE(14)
	this->keys = tmp;
}
;
	return null();
}

//TiledPropertySet_obj::~TiledPropertySet_obj() { }

Dynamic TiledPropertySet_obj::__CreateEmpty() { return  new TiledPropertySet_obj; }
hx::ObjectPtr< TiledPropertySet_obj > TiledPropertySet_obj::__new()
{  hx::ObjectPtr< TiledPropertySet_obj > _result_ = new TiledPropertySet_obj();
	_result_->__construct();
	return _result_;}

Dynamic TiledPropertySet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPropertySet_obj > _result_ = new TiledPropertySet_obj();
	_result_->__construct();
	return _result_;}

::String TiledPropertySet_obj::get( ::String Key){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","get",0x0edc9a88,"flixel.addons.editors.tiled.TiledPropertySet.get","flixel/addons/editors/tiled/TiledPropertySet.hx",18,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(19)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,get,return )

bool TiledPropertySet_obj::contains( ::String Key){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","contains",0x498ff2ed,"flixel.addons.editors.tiled.TiledPropertySet.contains","flixel/addons/editors/tiled/TiledPropertySet.hx",23,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1 = Key;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,contains,return )

::String TiledPropertySet_obj::resolve( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","resolve",0x30670dde,"flixel.addons.editors.tiled.TiledPropertySet.resolve","flixel/addons/editors/tiled/TiledPropertySet.hx",28,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,resolve,return )

Dynamic TiledPropertySet_obj::keysIterator( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","keysIterator",0x218013d0,"flixel.addons.editors.tiled.TiledPropertySet.keysIterator","flixel/addons/editors/tiled/TiledPropertySet.hx",33,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::haxe::ds::StringMap tmp = this->keys;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledPropertySet_obj,keysIterator,return )

Void TiledPropertySet_obj::extend( ::haxe::xml::Fast Source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","extend",0xeb97fb28,"flixel.addons.editors.tiled.TiledPropertySet.extend","flixel/addons/editors/tiled/TiledPropertySet.hx",38,0x279539bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_LINE(39)
		::haxe::xml::Fast prop;		HX_STACK_VAR(prop,"prop");
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::List tmp1 = Source->nodes->resolve(HX_HCSTRING("property","\x55","\x48","\x38","\xac"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				::List _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				tmp = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(41)
			::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				if ((tmp2)){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					_g->val = tmp4;
					HX_STACK_LINE(41)
					Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(41)
					_g->head = tmp5;
					HX_STACK_LINE(41)
					tmp3 = _g->val;
				}
				HX_STACK_LINE(41)
				::haxe::xml::Fast prop1 = ((::haxe::xml::Fast)(tmp3));		HX_STACK_VAR(prop1,"prop1");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					::String tmp4 = prop1->att->resolve(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(43)
					::String key = tmp4;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(43)
					::String tmp5 = prop1->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					::String value = tmp5;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(43)
					::haxe::ds::StringMap tmp6 = this->keys;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(43)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					tmp6->set(tmp7,tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,extend,(void))


TiledPropertySet_obj::TiledPropertySet_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void TiledPropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPropertySet);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void TiledPropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

Dynamic TiledPropertySet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extend") ) { return extend_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keysIterator") ) { return keysIterator_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPropertySet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool TiledPropertySet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledPropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledPropertySet_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("keysIterator","\x02","\xfc","\xb3","\x65"),
	HX_HCSTRING("extend","\xda","\xd1","\x1a","\xc7"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPropertySet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPropertySet_obj::__mClass,"__mClass");
};

#endif

hx::Class TiledPropertySet_obj::__mClass;

void TiledPropertySet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledPropertySet","\x60","\x19","\x2e","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledPropertySet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledPropertySet_obj >;
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
