#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
namespace haxe{
namespace xml{

Void Fast_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",122,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(123)
	int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		tmp3 = (tmp4 != tmp6);
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = false;
	}
	HX_STACK_LINE(123)
	if ((tmp3)){
		HX_STACK_LINE(124)
		::String tmp4 = (HX_HCSTRING("Invalid nodeType ","\x3b","\xe0","\xcb","\xe1") + x->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(125)
	this->x = x;
	HX_STACK_LINE(126)
	::haxe::xml::_Fast::NodeAccess tmp4 = ::haxe::xml::_Fast::NodeAccess_obj::__new(x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	this->node = tmp4;
	HX_STACK_LINE(127)
	::haxe::xml::_Fast::NodeListAccess tmp5 = ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	this->nodes = tmp5;
	HX_STACK_LINE(128)
	::haxe::xml::_Fast::AttribAccess tmp6 = ::haxe::xml::_Fast::AttribAccess_obj::__new(x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	this->att = tmp6;
	HX_STACK_LINE(129)
	::haxe::xml::_Fast::HasAttribAccess tmp7 = ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	this->has = tmp7;
	HX_STACK_LINE(130)
	::haxe::xml::_Fast::HasNodeAccess tmp8 = ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(130)
	this->hasNode = tmp8;
}
;
	return null();
}

//Fast_obj::~Fast_obj() { }

Dynamic Fast_obj::__CreateEmpty() { return  new Fast_obj; }
hx::ObjectPtr< Fast_obj > Fast_obj::__new(::Xml x)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Fast_obj::get_name( ){
	HX_STACK_FRAME("haxe.xml.Fast","get_name",0x9611daa7,"haxe.xml.Fast.get_name","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",133,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::Xml tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	int tmp1 = tmp->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	int tmp2 = ::Xml_obj::Document;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	if ((tmp3)){
		HX_STACK_LINE(134)
		tmp4 = HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74");
	}
	else{
		HX_STACK_LINE(134)
		::Xml tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::Xml _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		int tmp6 = _this->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(134)
		if ((tmp8)){
			HX_STACK_LINE(134)
			::String tmp9 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + _this->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(134)
		tmp4 = _this->nodeName;
	}
	HX_STACK_LINE(134)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_name,return )

::String Fast_obj::get_innerData( ){
	HX_STACK_FRAME("haxe.xml.Fast","get_innerData",0x21ea0104,"haxe.xml.Fast.get_innerData","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",137,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::Xml tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		::Xml _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int tmp2 = _this->nodeType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			int tmp3 = ::Xml_obj::Document;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			if ((tmp4)){
				HX_STACK_LINE(138)
				int tmp6 = _this->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(138)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(138)
				tmp5 = (tmp6 != tmp8);
			}
			else{
				HX_STACK_LINE(138)
				tmp5 = false;
			}
			HX_STACK_LINE(138)
			if ((tmp5)){
				HX_STACK_LINE(138)
				::String tmp6 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + _this->nodeType);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(138)
				HX_STACK_DO_THROW(tmp6);
			}
		}
		HX_STACK_LINE(138)
		tmp = _this->children->iteratorFast< ::Xml >();
	}
	HX_STACK_LINE(138)
	Dynamic it = tmp;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(139)
	bool tmp1 = it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	if ((tmp2)){
		HX_STACK_LINE(140)
		::String tmp3 = this->get_name();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::String tmp4 = (tmp3 + HX_HCSTRING(" does not have data","\x0e","\x54","\x3b","\xf4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(141)
	::Xml tmp3 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	::Xml v = tmp3;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(142)
	::Xml tmp4 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	::Xml n = tmp4;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(143)
	bool tmp5 = (n != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	if ((tmp5)){
		HX_STACK_LINE(145)
		int tmp6 = v->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		int tmp7 = ::Xml_obj::PCData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		if ((tmp9)){
			HX_STACK_LINE(145)
			int tmp11 = n->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(145)
			int tmp12 = ::Xml_obj::CData;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(145)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			tmp10 = (tmp11 == tmp14);
		}
		else{
			HX_STACK_LINE(145)
			tmp10 = false;
		}
		HX_STACK_LINE(145)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		if ((tmp10)){
			HX_STACK_LINE(145)
			::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				int tmp13 = v->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(145)
				int tmp14 = ::Xml_obj::Document;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(145)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(145)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(145)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(145)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(145)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(145)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(145)
				bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(145)
				if ((tmp22)){
					HX_STACK_LINE(145)
					int tmp23 = v->nodeType;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(145)
					int tmp24 = ::Xml_obj::Element;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(145)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(145)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(145)
					bool tmp27 = (tmp23 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(145)
					tmp21 = tmp27;
				}
				else{
					HX_STACK_LINE(145)
					tmp21 = true;
				}
				HX_STACK_LINE(145)
				bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(145)
				if ((tmp23)){
					HX_STACK_LINE(145)
					::String tmp24 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + v->nodeType);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(145)
					::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(145)
					::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(145)
					HX_STACK_DO_THROW(tmp26);
				}
				HX_STACK_LINE(145)
				tmp12 = v->nodeValue;
			}
			HX_STACK_LINE(145)
			::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(145)
			::String tmp14 = ::StringTools_obj::trim(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(145)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(145)
			tmp11 = (tmp15 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(145)
			tmp11 = false;
		}
		HX_STACK_LINE(145)
		if ((tmp11)){
			HX_STACK_LINE(146)
			::Xml tmp12 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(146)
			::Xml n2 = tmp12;		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(147)
			bool tmp13 = (n2 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(147)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(147)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(147)
			if ((tmp14)){
				HX_STACK_LINE(147)
				int tmp16 = n2->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(147)
				int tmp17 = ::Xml_obj::PCData;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(147)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(147)
				bool tmp19 = (tmp16 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(147)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(147)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(147)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(147)
				bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(147)
				if ((tmp23)){
					HX_STACK_LINE(147)
					::String tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						int tmp25 = n2->nodeType;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(147)
						int tmp26 = ::Xml_obj::Document;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(147)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(147)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(147)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(147)
						bool tmp30 = (tmp25 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(147)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(147)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(147)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(147)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(147)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(147)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(147)
						bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(147)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(147)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(147)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(147)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(147)
						bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(147)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(147)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(147)
						if ((tmp44)){
							HX_STACK_LINE(147)
							int tmp45 = n2->nodeType;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(147)
							int tmp46 = ::Xml_obj::Element;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(147)
							int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(147)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(147)
							int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(147)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(147)
							bool tmp51 = (tmp45 == tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(147)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(147)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(147)
							tmp41 = tmp53;
						}
						else{
							HX_STACK_LINE(147)
							tmp41 = true;
						}
						HX_STACK_LINE(147)
						bool tmp45 = tmp41;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(147)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(147)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(147)
						if ((tmp47)){
							HX_STACK_LINE(147)
							::String tmp48 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + n2->nodeType);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(147)
							::String tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(147)
							::String tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(147)
							::String tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(147)
							::String tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(147)
							::String tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(147)
							::String tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(147)
							HX_STACK_DO_THROW(tmp54);
						}
						HX_STACK_LINE(147)
						tmp24 = n2->nodeValue;
					}
					HX_STACK_LINE(147)
					::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(147)
					::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(147)
					::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(147)
					::String tmp28 = ::StringTools_obj::trim(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(147)
					::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(147)
					::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(147)
					::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(147)
					bool tmp32 = (tmp31 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(147)
					tmp22 = tmp32;
				}
				else{
					HX_STACK_LINE(147)
					tmp22 = false;
				}
				HX_STACK_LINE(147)
				bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(147)
				if ((tmp24)){
					HX_STACK_LINE(147)
					::Xml tmp25 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(147)
					::Xml tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(147)
					::Xml tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(147)
					tmp15 = (tmp27 == null());
				}
				else{
					HX_STACK_LINE(147)
					tmp15 = false;
				}
			}
			else{
				HX_STACK_LINE(147)
				tmp15 = true;
			}
			HX_STACK_LINE(147)
			if ((tmp15)){
				HX_STACK_LINE(148)
				::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int tmp17 = n->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(148)
					int tmp18 = ::Xml_obj::Document;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(148)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(148)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(148)
					if ((tmp20)){
						HX_STACK_LINE(148)
						int tmp22 = n->nodeType;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(148)
						int tmp23 = ::Xml_obj::Element;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(148)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(148)
						tmp21 = (tmp22 == tmp24);
					}
					else{
						HX_STACK_LINE(148)
						tmp21 = true;
					}
					HX_STACK_LINE(148)
					if ((tmp21)){
						HX_STACK_LINE(148)
						::String tmp22 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + n->nodeType);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(148)
						HX_STACK_DO_THROW(tmp22);
					}
					HX_STACK_LINE(148)
					tmp16 = n->nodeValue;
				}
				HX_STACK_LINE(148)
				return tmp16;
			}
		}
		HX_STACK_LINE(150)
		::String tmp12 = this->get_name();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(150)
		::String tmp13 = (tmp12 + HX_HCSTRING(" does not only have data","\x82","\xe2","\x30","\xae"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(150)
		HX_STACK_DO_THROW(tmp13);
	}
	HX_STACK_LINE(152)
	int tmp6 = v->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(152)
	int tmp7 = ::Xml_obj::PCData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(152)
	bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(152)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(152)
	if ((tmp8)){
		HX_STACK_LINE(152)
		int tmp10 = v->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(152)
		int tmp11 = ::Xml_obj::CData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(152)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(152)
		tmp9 = (tmp10 != tmp12);
	}
	else{
		HX_STACK_LINE(152)
		tmp9 = false;
	}
	HX_STACK_LINE(152)
	if ((tmp9)){
		HX_STACK_LINE(153)
		::String tmp10 = this->get_name();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(153)
		::String tmp11 = (tmp10 + HX_HCSTRING(" does not have data","\x0e","\x54","\x3b","\xf4"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(153)
		HX_STACK_DO_THROW(tmp11);
	}
	HX_STACK_LINE(154)
	::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int tmp11 = v->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(154)
		int tmp12 = ::Xml_obj::Document;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(154)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(154)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(154)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(154)
		if ((tmp14)){
			HX_STACK_LINE(154)
			int tmp16 = v->nodeType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			int tmp17 = ::Xml_obj::Element;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			tmp15 = (tmp16 == tmp18);
		}
		else{
			HX_STACK_LINE(154)
			tmp15 = true;
		}
		HX_STACK_LINE(154)
		if ((tmp15)){
			HX_STACK_LINE(154)
			::String tmp16 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + v->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			HX_STACK_DO_THROW(tmp16);
		}
		HX_STACK_LINE(154)
		tmp10 = v->nodeValue;
	}
	HX_STACK_LINE(154)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_innerData,return )


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

Dynamic Fast_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_innerData") ) { return get_innerData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fast_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Fast_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("att","\x21","\x00","\x4a","\x00"));
	outFields->push(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_HCSTRING("att","\x21","\x00","\x4a","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("att","\x21","\x00","\x4a","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_innerData","\xb7","\x0a","\x44","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

hx::Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Fast","\xfb","\x99","\x91","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Fast_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fast_obj >;
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

} // end namespace haxe
} // end namespace xml
