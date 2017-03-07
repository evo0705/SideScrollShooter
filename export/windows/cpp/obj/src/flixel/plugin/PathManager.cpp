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
#ifndef INCLUDED_flixel_plugin_PathManager
#include <flixel/plugin/PathManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
namespace flixel{
namespace plugin{

Void PathManager_obj::__construct()
{
HX_STACK_FRAME("flixel.plugin.PathManager","new",0xc86d5031,"flixel.plugin.PathManager.new","flixel/plugin/PathManager.hx",8,0xf3716a7f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->_paths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//PathManager_obj::~PathManager_obj() { }

Dynamic PathManager_obj::__CreateEmpty() { return  new PathManager_obj; }
hx::ObjectPtr< PathManager_obj > PathManager_obj::__new()
{  hx::ObjectPtr< PathManager_obj > _result_ = new PathManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathManager_obj > _result_ = new PathManager_obj();
	_result_->__construct();
	return _result_;}

Void PathManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","destroy",0xa78a694b,"flixel.plugin.PathManager.destroy","flixel/plugin/PathManager.hx",24,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_paths,null());
		HX_STACK_LINE(26)
		this->_paths = null();
		HX_STACK_LINE(28)
		this->super::destroy();
	}
return null();
}


Void PathManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","update",0x90cafed8,"flixel.plugin.PathManager.update","flixel/plugin/PathManager.hx",33,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		Array< ::Dynamic > _g1 = this->_paths;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(33)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			if ((tmp1)){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			::flixel::util::FlxPath tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			::flixel::util::FlxPath path = tmp2;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(33)
			++(_g);
			HX_STACK_LINE(35)
			bool tmp3 = path->active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			if ((tmp3)){
				HX_STACK_LINE(37)
				path->update();
			}
		}
	}
return null();
}


Void PathManager_obj::add( ::flixel::util::FlxPath Path){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","add",0xc86371f2,"flixel.plugin.PathManager.add","flixel/plugin/PathManager.hx",70,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Path,"Path")
		HX_STACK_LINE(71)
		::flixel::util::FlxPath tmp = Path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		this->_paths->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PathManager_obj,add,(void))

Void PathManager_obj::remove( ::flixel::util::FlxPath Path,hx::Null< bool >  __o_ReturnInPool){
bool ReturnInPool = __o_ReturnInPool.Default(true);
	HX_STACK_FRAME("flixel.plugin.PathManager","remove",0x0e4e1513,"flixel.plugin.PathManager.remove","flixel/plugin/PathManager.hx",82,0xf3716a7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Path,"Path")
	HX_STACK_ARG(ReturnInPool,"ReturnInPool")
{
		HX_STACK_LINE(82)
		Array< ::Dynamic > array = this->_paths;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(82)
		::flixel::util::FlxPath tmp = Path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		int tmp1 = array->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(82)
		bool tmp2 = (index != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		if ((tmp2)){
			HX_STACK_LINE(82)
			int tmp3 = (array->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			::flixel::util::FlxPath tmp4 = array->__get(tmp3).StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			array[index] = tmp4;
			HX_STACK_LINE(82)
			array->pop().StaticCast< ::flixel::util::FlxPath >();
			HX_STACK_LINE(82)
			array;
		}
		else{
			HX_STACK_LINE(82)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PathManager_obj,remove,(void))

Void PathManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","clear",0x69b1479e,"flixel.plugin.PathManager.clear","flixel/plugin/PathManager.hx",90,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_paths,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PathManager_obj,clear,(void))

Void PathManager_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.plugin.PathManager","onStateSwitch",0x71108317,"flixel.plugin.PathManager.onStateSwitch","flixel/plugin/PathManager.hx",95,0xf3716a7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->_paths,null());
	}
return null();
}



PathManager_obj::PathManager_obj()
{
}

void PathManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathManager);
	HX_MARK_MEMBER_NAME(_paths,"_paths");
	HX_MARK_END_CLASS();
}

void PathManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paths,"_paths");
}

Dynamic PathManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { return _paths; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_paths") ) { _paths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PathManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PathManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_paths","\x6f","\x52","\x3e","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PathManager_obj,_paths),HX_HCSTRING("_paths","\x6f","\x52","\x3e","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_paths","\x6f","\x52","\x3e","\xb9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathManager_obj::__mClass,"__mClass");
};

#endif

hx::Class PathManager_obj::__mClass;

void PathManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.plugin.PathManager","\xbf","\x63","\x3b","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PathManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PathManager_obj >;
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
