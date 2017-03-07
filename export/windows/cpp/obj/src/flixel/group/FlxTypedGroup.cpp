#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_FRAME("flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxTypedGroup.hx",14,0x8fe2385a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_MaxSize,"MaxSize")
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(32)
	this->_marker = (int)0;
	HX_STACK_LINE(28)
	this->length = (int)0;
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(41)
	this->members = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(43)
	int tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->set_maxSize(tmp2);
	HX_STACK_LINE(45)
	this->collisionType = (int)2;
}
;
	return null();
}

//FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(__o_MaxSize);
	return _result_;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > _result_ = new FlxTypedGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxTypedGroup.hx",55,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::destroy();
		HX_STACK_LINE(58)
		bool tmp = (this->members != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(60)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(61)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(63)
			while((true)){
				HX_STACK_LINE(63)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(63)
				int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				if ((tmp4)){
					HX_STACK_LINE(63)
					break;
				}
				HX_STACK_LINE(65)
				int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				basic = tmp6;
				HX_STACK_LINE(67)
				bool tmp7 = (basic != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				if ((tmp7)){
					HX_STACK_LINE(68)
					basic->destroy();
				}
			}
			HX_STACK_LINE(71)
			this->members = null();
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxTypedGroup.hx",79,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(81)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			if ((tmp3)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(85)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			basic = tmp5;
			HX_STACK_LINE(87)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			if ((tmp7)){
				HX_STACK_LINE(87)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(87)
				tmp8 = false;
			}
			HX_STACK_LINE(87)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			if ((tmp8)){
				HX_STACK_LINE(87)
				tmp9 = basic->active;
			}
			else{
				HX_STACK_LINE(87)
				tmp9 = false;
			}
			HX_STACK_LINE(87)
			if ((tmp9)){
				HX_STACK_LINE(89)
				basic->update();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxTypedGroup.hx",98,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(100)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(102)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			if ((tmp3)){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(104)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			basic = tmp5;
			HX_STACK_LINE(106)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			if ((tmp7)){
				HX_STACK_LINE(106)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(106)
				tmp8 = false;
			}
			HX_STACK_LINE(106)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			if ((tmp8)){
				HX_STACK_LINE(106)
				tmp9 = basic->visible;
			}
			else{
				HX_STACK_LINE(106)
				tmp9 = false;
			}
			HX_STACK_LINE(106)
			if ((tmp9)){
				HX_STACK_LINE(108)
				basic->draw();
			}
		}
	}
return null();
}


Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxTypedGroup.hx",125,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(126)
	bool tmp = (Object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	if ((tmp)){
		HX_STACK_LINE(129)
		return null();
	}
	HX_STACK_LINE(133)
	Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	if ((tmp3)){
		HX_STACK_LINE(135)
		Dynamic tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		return tmp4;
	}
	HX_STACK_LINE(139)
	int tmp4 = this->getFirstNull();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(140)
	bool tmp5 = (index != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	if ((tmp5)){
		HX_STACK_LINE(142)
		Dynamic tmp6 = Object;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		hx::IndexRef((this->members).mPtr,index) = tmp6;
		HX_STACK_LINE(144)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		if ((tmp9)){
			HX_STACK_LINE(146)
			int tmp10 = (index + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(146)
			this->length = tmp10;
		}
		HX_STACK_LINE(149)
		Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		return tmp10;
	}
	HX_STACK_LINE(153)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(153)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(153)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(153)
	if ((tmp7)){
		HX_STACK_LINE(153)
		int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(153)
		int tmp11 = this->maxSize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(153)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(153)
		tmp8 = (tmp10 >= tmp12);
	}
	else{
		HX_STACK_LINE(153)
		tmp8 = false;
	}
	HX_STACK_LINE(153)
	if ((tmp8)){
		HX_STACK_LINE(155)
		Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		return tmp9;
	}
	HX_STACK_LINE(159)
	Dynamic tmp9 = Object;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(159)
	this->members->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	HX_STACK_LINE(160)
	(this->length)++;
	HX_STACK_LINE(162)
	Dynamic tmp10 = Object;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(162)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Dynamic FlxTypedGroup_obj::recycle( ::hx::Class ObjectClass,cpp::ArrayBase ContructorArgs,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxTypedGroup.hx",187,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(ContructorArgs,"ContructorArgs")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Revive,"Revive")
{
		HX_STACK_LINE(188)
		bool tmp = (ContructorArgs == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		if ((tmp)){
			HX_STACK_LINE(190)
			ContructorArgs = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(193)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(196)
		int tmp1 = this->maxSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(199)
			int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			int tmp4 = this->maxSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			if ((tmp5)){
				HX_STACK_LINE(201)
				bool tmp6 = (ObjectClass == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				if ((tmp6)){
					HX_STACK_LINE(203)
					return null();
				}
				HX_STACK_LINE(206)
				::hx::Class tmp7 = ObjectClass;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				Dynamic tmp8 = ::Type_obj::createInstance(tmp7,ContructorArgs);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(206)
				Dynamic tmp9 = this->add(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(206)
				return tmp9;
			}
			else{
				HX_STACK_LINE(211)
				int tmp6 = (this->_marker)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(211)
				Dynamic tmp7 = this->members->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				basic = tmp7;
				HX_STACK_LINE(213)
				int tmp8 = this->_marker;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				int tmp9 = this->maxSize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				if ((tmp10)){
					HX_STACK_LINE(215)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(218)
				bool tmp11 = Revive;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(218)
				if ((tmp11)){
					HX_STACK_LINE(220)
					basic->revive();
				}
				HX_STACK_LINE(223)
				Dynamic tmp12 = ((Dynamic)(basic));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				return tmp12;
			}
		}
		else{
			HX_STACK_LINE(229)
			::hx::Class tmp3 = ObjectClass;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			bool tmp4 = Force;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			Dynamic tmp5 = this->getFirstAvailable(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			basic = tmp5;
			HX_STACK_LINE(231)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			if ((tmp6)){
				HX_STACK_LINE(233)
				bool tmp7 = Revive;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				if ((tmp7)){
					HX_STACK_LINE(235)
					basic->revive();
				}
				HX_STACK_LINE(237)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				return tmp8;
			}
			HX_STACK_LINE(239)
			bool tmp7 = (ObjectClass == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			if ((tmp7)){
				HX_STACK_LINE(241)
				return null();
			}
			HX_STACK_LINE(244)
			::hx::Class tmp8 = ObjectClass;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			Dynamic tmp9 = ::Type_obj::createInstance(tmp8,ContructorArgs);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			Dynamic tmp10 = this->add(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(244)
			return tmp10;
		}
		HX_STACK_LINE(196)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxTypedGroup.hx",256,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(257)
		bool tmp = (this->members == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		if ((tmp)){
			HX_STACK_LINE(258)
			return null();
		}
		HX_STACK_LINE(260)
		Dynamic tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		int tmp2 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		int index = tmp2;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(262)
		bool tmp3 = (index < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		if ((tmp3)){
			HX_STACK_LINE(263)
			return null();
		}
		HX_STACK_LINE(265)
		bool tmp4 = Splice;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		if ((tmp4)){
			HX_STACK_LINE(266)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			this->members->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp5,(int)1);
		}
		else{
			HX_STACK_LINE(268)
			hx::IndexRef((this->members).mPtr,index) = null();
		}
		HX_STACK_LINE(270)
		Dynamic tmp5 = Object;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(270)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxTypedGroup.hx",282,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OldObject,"OldObject")
	HX_STACK_ARG(NewObject,"NewObject")
	HX_STACK_LINE(283)
	Dynamic tmp = OldObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	int tmp1 = this->members->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	int index = tmp1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(285)
	bool tmp2 = (index < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	if ((tmp2)){
		HX_STACK_LINE(286)
		return null();
	}
	HX_STACK_LINE(288)
	Dynamic tmp3 = NewObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(288)
	hx::IndexRef((this->members).mPtr,index) = tmp3;
	HX_STACK_LINE(290)
	Dynamic tmp4 = NewObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(290)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxTypedGroup.hx",301,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Order,"Order")
{
		HX_STACK_LINE(302)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		int tmp1 = Order;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(302)
			int a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,int,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/group/FlxTypedGroup.hx",302,0x8fe2385a)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(302)
					int tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(302)
					Dynamic tmp4 = a2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(302)
					Dynamic tmp5 = a3;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(302)
					int tmp6 = f(tmp3,tmp4,tmp5).Cast< int >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(302)
					return tmp6;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(302)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(302)
		this->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Void FlxTypedGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","setAll",0x3664ad27,"flixel.group.FlxTypedGroup.setAll","flixel/group/FlxTypedGroup.hx",313,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(VariableName,"VariableName")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(314)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(315)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(317)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(317)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			if ((tmp3)){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(319)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			basic = tmp5;
			HX_STACK_LINE(321)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			if ((tmp6)){
				HX_STACK_LINE(323)
				bool tmp7 = Recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(323)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(323)
				if ((tmp7)){
					HX_STACK_LINE(323)
					tmp8 = (basic->collisionType == (int)2);
				}
				else{
					HX_STACK_LINE(323)
					tmp8 = false;
				}
				HX_STACK_LINE(323)
				if ((tmp8)){
					HX_STACK_LINE(325)
					::String tmp9 = VariableName;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(325)
					Dynamic tmp10 = Value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(325)
					bool tmp11 = Recurse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(325)
					((Dynamic)(basic))->__Field(HX_HCSTRING("setAll","\x9f","\x86","\x61","\x6f"), hx::paccDynamic )(tmp9,tmp10,tmp11);
				}
				else{
					HX_STACK_LINE(329)
					::flixel::FlxBasic tmp9 = basic;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(329)
					::String tmp10 = VariableName;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(329)
					Dynamic tmp11 = Value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(329)
					::Reflect_obj::setProperty(tmp9,tmp10,tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,setAll,(void))

Void FlxTypedGroup_obj::callAll( ::String FunctionName,cpp::ArrayBase Args,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","callAll",0xb004df9b,"flixel.group.FlxTypedGroup.callAll","flixel/group/FlxTypedGroup.hx",343,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FunctionName,"FunctionName")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_ARG(Recurse,"Recurse")
{
		HX_STACK_LINE(344)
		bool tmp = (Args == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		if ((tmp)){
			HX_STACK_LINE(345)
			Args = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(347)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(348)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			if ((tmp4)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(352)
			int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			Dynamic tmp6 = this->members->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			basic = tmp6;
			HX_STACK_LINE(354)
			bool tmp7 = (basic != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			if ((tmp7)){
				HX_STACK_LINE(356)
				bool tmp8 = Recurse;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(356)
				if ((tmp8)){
					HX_STACK_LINE(356)
					tmp9 = (basic->collisionType == (int)2);
				}
				else{
					HX_STACK_LINE(356)
					tmp9 = false;
				}
				HX_STACK_LINE(356)
				if ((tmp9)){
					HX_STACK_LINE(358)
					::flixel::group::FlxTypedGroup tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(358)
					tmp10 = hx::TCast< ::flixel::group::FlxTypedGroup >::cast(basic);
					HX_STACK_LINE(358)
					::String tmp11 = FunctionName;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(358)
					bool tmp12 = Recurse;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(358)
					tmp10->callAll(tmp11,Args,tmp12);
				}
				else{
					HX_STACK_LINE(362)
					::flixel::FlxBasic tmp10 = basic;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(362)
					::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(362)
					::String tmp12 = FunctionName;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(362)
					Dynamic tmp13 = ::Reflect_obj::getProperty(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(362)
					::Reflect_obj::callMethod(tmp10,tmp13,Args);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,callAll,(void))

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::hx::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxTypedGroup.hx",377,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectClass,"ObjectClass")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(378)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(379)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(381)
		while((true)){
			HX_STACK_LINE(381)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(381)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			if ((tmp3)){
				HX_STACK_LINE(381)
				break;
			}
			HX_STACK_LINE(383)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			basic = tmp5;
			HX_STACK_LINE(385)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(385)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			if ((tmp7)){
				HX_STACK_LINE(385)
				bool tmp9 = basic->exists;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(385)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(385)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				tmp8 = !(tmp11);
			}
			else{
				HX_STACK_LINE(385)
				tmp8 = false;
			}
			HX_STACK_LINE(385)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			if ((tmp8)){
				HX_STACK_LINE(385)
				bool tmp10 = (ObjectClass == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(385)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(385)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(385)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(385)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(385)
				if ((tmp15)){
					HX_STACK_LINE(385)
					::flixel::FlxBasic tmp16 = basic;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(385)
					::hx::Class tmp17 = ObjectClass;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(385)
					::flixel::FlxBasic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(385)
					::hx::Class tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(385)
					::flixel::FlxBasic tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(385)
					::hx::Class tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(385)
					tmp9 = ::Std_obj::is(tmp20,tmp21);
				}
				else{
					HX_STACK_LINE(385)
					tmp9 = true;
				}
			}
			else{
				HX_STACK_LINE(385)
				tmp9 = false;
			}
			HX_STACK_LINE(385)
			if ((tmp9)){
				HX_STACK_LINE(387)
				bool tmp10 = Force;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(387)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(387)
				if ((tmp10)){
					HX_STACK_LINE(387)
					::flixel::FlxBasic tmp12 = basic;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(387)
					::flixel::FlxBasic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(387)
					::hx::Class tmp14 = ::Type_obj::getClass(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(387)
					::hx::Class tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(387)
					::hx::Class tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(387)
					::String tmp17 = ::Type_obj::getClassName(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(387)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(387)
					::hx::Class tmp19 = ObjectClass;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(387)
					::hx::Class tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(387)
					::String tmp21 = ::Type_obj::getClassName(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(387)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(387)
					tmp11 = (tmp18 != tmp22);
				}
				else{
					HX_STACK_LINE(387)
					tmp11 = false;
				}
				HX_STACK_LINE(387)
				if ((tmp11)){
					HX_STACK_LINE(389)
					continue;
				}
				HX_STACK_LINE(391)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(391)
				Dynamic tmp13 = this->members->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(391)
				return tmp13;
			}
		}
		HX_STACK_LINE(395)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxTypedGroup.hx",405,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(408)
	while((true)){
		HX_STACK_LINE(408)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		if ((tmp3)){
			HX_STACK_LINE(408)
			break;
		}
		HX_STACK_LINE(410)
		Dynamic tmp4 = this->members->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(410)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(410)
		if ((tmp5)){
			HX_STACK_LINE(412)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(412)
			return tmp6;
		}
		HX_STACK_LINE(414)
		(i)++;
	}
	HX_STACK_LINE(417)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxTypedGroup.hx",427,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(429)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(431)
	while((true)){
		HX_STACK_LINE(431)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		if ((tmp3)){
			HX_STACK_LINE(431)
			break;
		}
		HX_STACK_LINE(433)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(433)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(433)
		basic = tmp5;
		HX_STACK_LINE(435)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		if ((tmp6)){
			HX_STACK_LINE(435)
			tmp7 = basic->exists;
		}
		else{
			HX_STACK_LINE(435)
			tmp7 = false;
		}
		HX_STACK_LINE(435)
		if ((tmp7)){
			HX_STACK_LINE(437)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(437)
			return tmp8;
		}
	}
	HX_STACK_LINE(441)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxTypedGroup.hx",451,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(453)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(455)
	while((true)){
		HX_STACK_LINE(455)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(455)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		if ((tmp3)){
			HX_STACK_LINE(455)
			break;
		}
		HX_STACK_LINE(457)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		basic = tmp5;
		HX_STACK_LINE(459)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(459)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(459)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(459)
		if ((tmp7)){
			HX_STACK_LINE(459)
			tmp8 = basic->exists;
		}
		else{
			HX_STACK_LINE(459)
			tmp8 = false;
		}
		HX_STACK_LINE(459)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(459)
		if ((tmp8)){
			HX_STACK_LINE(459)
			tmp9 = basic->alive;
		}
		else{
			HX_STACK_LINE(459)
			tmp9 = false;
		}
		HX_STACK_LINE(459)
		if ((tmp9)){
			HX_STACK_LINE(461)
			Dynamic tmp10 = ((Dynamic)(basic));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(461)
			return tmp10;
		}
	}
	HX_STACK_LINE(465)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxTypedGroup.hx",475,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(477)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(479)
	while((true)){
		HX_STACK_LINE(479)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(479)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(479)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(479)
		if ((tmp3)){
			HX_STACK_LINE(479)
			break;
		}
		HX_STACK_LINE(481)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(481)
		basic = tmp5;
		HX_STACK_LINE(483)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(483)
		if ((tmp6)){
			HX_STACK_LINE(483)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(483)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(483)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(483)
			tmp7 = false;
		}
		HX_STACK_LINE(483)
		if ((tmp7)){
			HX_STACK_LINE(485)
			Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(485)
			return tmp8;
		}
	}
	HX_STACK_LINE(489)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxTypedGroup.hx",498,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(499)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(500)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(501)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(503)
	while((true)){
		HX_STACK_LINE(503)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(503)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(503)
		if ((tmp3)){
			HX_STACK_LINE(503)
			break;
		}
		HX_STACK_LINE(505)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		basic = tmp5;
		HX_STACK_LINE(507)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		if ((tmp6)){
			HX_STACK_LINE(509)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			if ((tmp7)){
				HX_STACK_LINE(511)
				count = (int)0;
			}
			HX_STACK_LINE(513)
			bool tmp8 = basic->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			if ((tmp8)){
				HX_STACK_LINE(513)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(513)
				tmp9 = false;
			}
			HX_STACK_LINE(513)
			if ((tmp9)){
				HX_STACK_LINE(515)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(520)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(520)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxTypedGroup.hx",529,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(531)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(532)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(534)
	while((true)){
		HX_STACK_LINE(534)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(534)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		if ((tmp3)){
			HX_STACK_LINE(534)
			break;
		}
		HX_STACK_LINE(536)
		int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(536)
		Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		basic = tmp5;
		HX_STACK_LINE(538)
		bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(538)
		if ((tmp6)){
			HX_STACK_LINE(540)
			bool tmp7 = (count < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(540)
			if ((tmp7)){
				HX_STACK_LINE(542)
				count = (int)0;
			}
			HX_STACK_LINE(544)
			bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			if ((tmp9)){
				HX_STACK_LINE(546)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(551)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxTypedGroup.hx",562,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(Length,"Length")
{
		HX_STACK_LINE(563)
		bool tmp = (StartIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		if ((tmp)){
			HX_STACK_LINE(565)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(567)
		bool tmp1 = (Length <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		if ((tmp1)){
			HX_STACK_LINE(569)
			int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			Length = tmp2;
		}
		HX_STACK_LINE(572)
		int tmp2 = StartIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		int tmp3 = Length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(572)
		Dynamic tmp4 = ::flixel::util::FlxRandom_obj::getObject_getRandom_T(this->members,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(572)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(572)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxTypedGroup.hx",580,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(581)
		this->length = (int)0;
		HX_STACK_LINE(582)
		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxTypedGroup.hx",590,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(591)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(592)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(594)
		while((true)){
			HX_STACK_LINE(594)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(594)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(594)
			if ((tmp3)){
				HX_STACK_LINE(594)
				break;
			}
			HX_STACK_LINE(596)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(596)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(596)
			basic = tmp5;
			HX_STACK_LINE(598)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(598)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(598)
			if ((tmp6)){
				HX_STACK_LINE(598)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(598)
				tmp7 = false;
			}
			HX_STACK_LINE(598)
			if ((tmp7)){
				HX_STACK_LINE(600)
				basic->kill();
			}
		}
		HX_STACK_LINE(604)
		this->super::kill();
	}
return null();
}


::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxTypedGroup.hx",613,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(614)
	::flixel::group::FlxTypedGroupIterator tmp = ::flixel::group::FlxTypedGroupIterator_obj::__new(this->members,filter);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::forEach( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxTypedGroup.hx",623,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(624)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(625)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(627)
		while((true)){
			HX_STACK_LINE(627)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(627)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(627)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(627)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(627)
			if ((tmp3)){
				HX_STACK_LINE(627)
				break;
			}
			HX_STACK_LINE(629)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(629)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(629)
			basic = tmp5;
			HX_STACK_LINE(631)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(631)
			if ((tmp6)){
				HX_STACK_LINE(632)
				Dynamic tmp7 = ((Dynamic)(basic));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(632)
				Function(tmp7).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEach,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxTypedGroup.hx",642,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(643)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(644)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(646)
		while((true)){
			HX_STACK_LINE(646)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(646)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(646)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(646)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(646)
			if ((tmp3)){
				HX_STACK_LINE(646)
				break;
			}
			HX_STACK_LINE(648)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(648)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(648)
			basic = tmp5;
			HX_STACK_LINE(650)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(650)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			if ((tmp7)){
				HX_STACK_LINE(650)
				tmp8 = basic->exists;
			}
			else{
				HX_STACK_LINE(650)
				tmp8 = false;
			}
			HX_STACK_LINE(650)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(650)
			if ((tmp8)){
				HX_STACK_LINE(650)
				tmp9 = basic->alive;
			}
			else{
				HX_STACK_LINE(650)
				tmp9 = false;
			}
			HX_STACK_LINE(650)
			if ((tmp9)){
				HX_STACK_LINE(651)
				Dynamic tmp10 = ((Dynamic)(basic));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(651)
				Function(tmp10).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxTypedGroup.hx",661,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(662)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(663)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(665)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(665)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(665)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(665)
			if ((tmp3)){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(667)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(667)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(667)
			basic = tmp5;
			HX_STACK_LINE(669)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(669)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			if ((tmp6)){
				HX_STACK_LINE(669)
				bool tmp8 = basic->alive;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(669)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(669)
				tmp7 = !(tmp9);
			}
			else{
				HX_STACK_LINE(669)
				tmp7 = false;
			}
			HX_STACK_LINE(669)
			if ((tmp7)){
				HX_STACK_LINE(670)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(670)
				Function(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachExists( Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxTypedGroup.hx",680,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(681)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(682)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(684)
		while((true)){
			HX_STACK_LINE(684)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(684)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(684)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(684)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(684)
			if ((tmp3)){
				HX_STACK_LINE(684)
				break;
			}
			HX_STACK_LINE(686)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(686)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(686)
			basic = tmp5;
			HX_STACK_LINE(688)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(688)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(688)
			if ((tmp6)){
				HX_STACK_LINE(688)
				tmp7 = basic->exists;
			}
			else{
				HX_STACK_LINE(688)
				tmp7 = false;
			}
			HX_STACK_LINE(688)
			if ((tmp7)){
				HX_STACK_LINE(689)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(689)
				Function(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachOfType( ::hx::Class ObjectClass,Dynamic Function){
{
		HX_STACK_FRAME("flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxTypedGroup.hx",700,0x8fe2385a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectClass,"ObjectClass")
		HX_STACK_ARG(Function,"Function")
		HX_STACK_LINE(701)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(702)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(704)
		while((true)){
			HX_STACK_LINE(704)
			int tmp = i;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(704)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(704)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(704)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			if ((tmp3)){
				HX_STACK_LINE(704)
				break;
			}
			HX_STACK_LINE(706)
			int tmp4 = (i)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			Dynamic tmp5 = this->members->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			basic = tmp5;
			HX_STACK_LINE(708)
			bool tmp6 = (basic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(708)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(708)
			if ((tmp6)){
				HX_STACK_LINE(708)
				::flixel::FlxBasic tmp8 = basic;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(708)
				::hx::Class tmp9 = ObjectClass;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(708)
				::flixel::FlxBasic tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(708)
				::hx::Class tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(708)
				tmp7 = ::Std_obj::is(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(708)
				tmp7 = false;
			}
			HX_STACK_LINE(708)
			if ((tmp7)){
				HX_STACK_LINE(709)
				Dynamic tmp8 = ((Dynamic)(basic));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(709)
				Function(tmp8).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_FRAME("flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxTypedGroup.hx",714,0x8fe2385a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(715)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(715)
	this->maxSize = tmp2;
	HX_STACK_LINE(717)
	int tmp3 = this->_marker;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(717)
	int tmp4 = this->maxSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(717)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(717)
	if ((tmp5)){
		HX_STACK_LINE(719)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(721)
	int tmp6 = this->maxSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(721)
	bool tmp7 = (tmp6 == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(721)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(721)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(721)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(721)
	if ((tmp9)){
		HX_STACK_LINE(721)
		tmp10 = (this->members == null());
	}
	else{
		HX_STACK_LINE(721)
		tmp10 = true;
	}
	HX_STACK_LINE(721)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(721)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(721)
	if ((tmp11)){
		HX_STACK_LINE(721)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(721)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(721)
		int tmp15 = this->length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(721)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(721)
		tmp12 = (tmp14 >= tmp16);
	}
	else{
		HX_STACK_LINE(721)
		tmp12 = true;
	}
	HX_STACK_LINE(721)
	if ((tmp12)){
		HX_STACK_LINE(723)
		int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(723)
		return tmp13;
	}
	HX_STACK_LINE(727)
	int tmp13 = this->maxSize;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(727)
	int i = tmp13;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(728)
	int tmp14 = this->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(728)
	int l = tmp14;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(729)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(731)
	while((true)){
		HX_STACK_LINE(731)
		bool tmp15 = (i < l);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(731)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(731)
		if ((tmp16)){
			HX_STACK_LINE(731)
			break;
		}
		HX_STACK_LINE(733)
		int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(733)
		Dynamic tmp18 = this->members->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(733)
		basic = tmp18;
		HX_STACK_LINE(735)
		bool tmp19 = (basic != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(735)
		if ((tmp19)){
			HX_STACK_LINE(736)
			basic->destroy();
		}
	}
	HX_STACK_LINE(739)
	int tmp15 = this->maxSize;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(739)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,tmp15);
	HX_STACK_LINE(740)
	int tmp16 = this->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(740)
	this->length = tmp16;
	HX_STACK_LINE(742)
	int tmp17 = this->maxSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(742)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )


FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return forEachOfType_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == hx::paccAlways) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTypedGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxTypedGroup_obj,members),HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("members","\xd9","\x2c","\x70","\x1a"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("_marker","\x59","\x87","\xe7","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("setAll","\x9f","\x86","\x61","\x6f"),
	HX_HCSTRING("callAll","\x23","\x4f","\x46","\x54"),
	HX_HCSTRING("getFirstAvailable","\xaf","\xea","\xb3","\x05"),
	HX_HCSTRING("getFirstNull","\x61","\xb7","\x33","\x0f"),
	HX_HCSTRING("getFirstExisting","\x65","\xa4","\x6c","\xee"),
	HX_HCSTRING("getFirstAlive","\xb3","\x09","\xe2","\xbb"),
	HX_HCSTRING("getFirstDead","\x7e","\x67","\x8b","\x08"),
	HX_HCSTRING("countLiving","\x58","\xd9","\x8a","\x30"),
	HX_HCSTRING("countDead","\x13","\xd3","\x86","\x54"),
	HX_HCSTRING("getRandom","\x39","\xab","\xe5","\x33"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("forEach","\xaa","\x29","\xbe","\xc4"),
	HX_HCSTRING("forEachAlive","\xc3","\x61","\xb7","\x99"),
	HX_HCSTRING("forEachDead","\x6e","\xc1","\xe4","\x78"),
	HX_HCSTRING("forEachExists","\x26","\x57","\xf8","\x68"),
	HX_HCSTRING("forEachOfType","\xbb","\x90","\x76","\xfd"),
	HX_HCSTRING("set_maxSize","\xa8","\x60","\xeb","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.group.FlxTypedGroup","\xe6","\xb8","\x51","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTypedGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedGroup_obj >;
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
} // end namespace group
