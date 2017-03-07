#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignalBase_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","new",0x796b8c44,"flixel.util._FlxSignal.FlxSignalBase.new","flixel/util/FlxSignal.hx",122,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(122)
	this->_handlers = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//FlxSignalBase_obj::~FlxSignalBase_obj() { }

Dynamic FlxSignalBase_obj::__CreateEmpty() { return  new FlxSignalBase_obj; }
hx::ObjectPtr< FlxSignalBase_obj > FlxSignalBase_obj::__new()
{  hx::ObjectPtr< FlxSignalBase_obj > _result_ = new FlxSignalBase_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSignalBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignalBase_obj > _result_ = new FlxSignalBase_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxSignalBase_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxSignal_obj)) return operator ::flixel::interfaces::IFlxSignal_obj *();
	return super::__ToInterface(inType);
}

FlxSignalBase_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxSignalBase_obj >(this); }
FlxSignalBase_obj::operator ::flixel::interfaces::IFlxSignal_obj *()
	{ return new ::flixel::interfaces::IFlxSignal_delegate_< FlxSignalBase_obj >(this); }
Void FlxSignalBase_obj::add( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","add",0x7961ae05,"flixel.util._FlxSignal.FlxSignalBase.add","flixel/util/FlxSignal.hx",126,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(127)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		if ((tmp)){
			HX_STACK_LINE(128)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			this->registerListener(tmp1,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignalBase_obj,add,(void))

Void FlxSignalBase_obj::addOnce( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","addOnce",0x0c5d3e26,"flixel.util._FlxSignal.FlxSignalBase.addOnce","flixel/util/FlxSignal.hx",132,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(133)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		if ((tmp)){
			HX_STACK_LINE(134)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			this->registerListener(tmp1,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignalBase_obj,addOnce,(void))

Void FlxSignalBase_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","remove",0x456c66e0,"flixel.util._FlxSignal.FlxSignalBase.remove","flixel/util/FlxSignal.hx",138,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(139)
		bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		if ((tmp)){
			HX_STACK_LINE(141)
			Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = this->getHandler(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(142)
			bool tmp3 = (handler != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			if ((tmp3)){
				HX_STACK_LINE(144)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				this->_handlers->remove(tmp4);
				HX_STACK_LINE(145)
				handler->destroy();
				HX_STACK_LINE(146)
				handler = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignalBase_obj,remove,(void))

bool FlxSignalBase_obj::has( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","has",0x7966fb3e,"flixel.util._FlxSignal.FlxSignalBase.has","flixel/util/FlxSignal.hx",152,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(153)
	bool tmp = (listener == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	if ((tmp)){
		HX_STACK_LINE(154)
		return false;
	}
	HX_STACK_LINE(155)
	Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = this->getHandler(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignalBase_obj,has,return )

Void FlxSignalBase_obj::removeAll( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","removeAll",0xe618d621,"flixel.util._FlxSignal.FlxSignalBase.removeAll","flixel/util/FlxSignal.hx",160,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			int tmp = this->_handlers->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			if ((tmp2)){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(162)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp3 = this->_handlers->pop().StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp3;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(163)
			handler->destroy();
			HX_STACK_LINE(164)
			handler = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignalBase_obj,removeAll,(void))

Void FlxSignalBase_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","destroy",0xaaf3aade,"flixel.util._FlxSignal.FlxSignalBase.destroy","flixel/util/FlxSignal.hx",169,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		while((true)){
			HX_STACK_LINE(170)
			int tmp = this->_handlers->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(170)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(170)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			if ((tmp2)){
				HX_STACK_LINE(170)
				break;
			}
			HX_STACK_LINE(170)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp3 = this->_handlers->pop().StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp3;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(170)
			handler->destroy();
			HX_STACK_LINE(170)
			handler = null();
		}
		HX_STACK_LINE(171)
		this->_handlers = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignalBase_obj,destroy,(void))

::flixel::util::_FlxSignal::FlxSignalHandler FlxSignalBase_obj::registerListener( Dynamic listener,bool dispatchOnce){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","registerListener",0x99c2a393,"flixel.util._FlxSignal.FlxSignalBase.registerListener","flixel/util/FlxSignal.hx",175,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(dispatchOnce,"dispatchOnce")
	HX_STACK_LINE(176)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	::flixel::util::_FlxSignal::FlxSignalHandler tmp1 = this->getHandler(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp1;		HX_STACK_VAR(handler,"handler");
	HX_STACK_LINE(178)
	bool tmp2 = (handler == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	if ((tmp2)){
		HX_STACK_LINE(180)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp3 = ::flixel::util::_FlxSignal::FlxSignalHandler_obj::__new(listener,dispatchOnce);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		handler = tmp3;
		HX_STACK_LINE(181)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		this->_handlers->push(tmp4);
		HX_STACK_LINE(182)
		::flixel::util::_FlxSignal::FlxSignalHandler tmp5 = handler;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		return tmp5;
	}
	else{
		HX_STACK_LINE(188)
		bool tmp3 = (handler->dispatchOnce != dispatchOnce);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		if ((tmp3)){
			HX_STACK_LINE(189)
			HX_STACK_DO_THROW(HX_HCSTRING("You cannot addOnce() then add() the same listener without removing the relationship first.","\x19","\xc7","\x3c","\xa5"));
		}
		else{
			HX_STACK_LINE(191)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			return tmp4;
		}
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSignalBase_obj,registerListener,return )

::flixel::util::_FlxSignal::FlxSignalHandler FlxSignalBase_obj::getHandler( Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalBase","getHandler",0x474a7e70,"flixel.util._FlxSignal.FlxSignalBase.getHandler","flixel/util/FlxSignal.hx",196,0x3c758c5e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Array< ::Dynamic > _g1 = this->_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(197)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			if ((tmp1)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			::flixel::util::_FlxSignal::FlxSignalHandler tmp2 = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = tmp2;		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(203)
			bool tmp3 = (handler->listener == listener);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			if ((tmp3)){
				HX_STACK_LINE(206)
				::flixel::util::_FlxSignal::FlxSignalHandler tmp4 = handler;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(206)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(209)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSignalBase_obj,getHandler,return )


FlxSignalBase_obj::FlxSignalBase_obj()
{
}

void FlxSignalBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSignalBase);
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(_handlers,"_handlers");
	HX_MARK_END_CLASS();
}

void FlxSignalBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(_handlers,"_handlers");
}

Dynamic FlxSignalBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return addOnce_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_handlers") ) { return _handlers; }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHandler") ) { return getHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerListener") ) { return registerListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignalBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_handlers") ) { _handlers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSignalBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxSignalBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"));
	outFields->push(HX_HCSTRING("_handlers","\xc8","\x18","\xba","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSignalBase_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSignalBase_obj,_handlers),HX_HCSTRING("_handlers","\xc8","\x18","\xba","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("_handlers","\xc8","\x18","\xba","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addOnce","\x42","\xc0","\xef","\x85"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("registerListener","\xf7","\xfd","\xf4","\x36"),
	HX_HCSTRING("getHandler","\xd4","\x35","\x37","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignalBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignalBase_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignalBase_obj::__mClass;

void FlxSignalBase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignalBase","\x52","\x5a","\x1f","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxSignalBase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignalBase_obj >;
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
} // end namespace _FlxSignal
