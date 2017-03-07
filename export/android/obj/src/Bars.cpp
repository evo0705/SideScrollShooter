#include <hxcpp.h>

#ifndef INCLUDED_BarType
#include <BarType.h>
#endif
#ifndef INCLUDED_Bars
#include <Bars.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Bars_obj::__construct(::Player P,::BarType Bar,Float X,Float Y,Float Max)
{
HX_STACK_FRAME("Bars","new",0x6b22e452,"Bars.new","Bars.hx",24,0x70fb8b5e)
HX_STACK_THIS(this)
HX_STACK_ARG(P,"P")
HX_STACK_ARG(Bar,"Bar")
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Max,"Max")
{
	HX_STACK_LINE(31)
	this->_max = ((Float)1);
	HX_STACK_LINE(36)
	super::__construct(null());
	HX_STACK_LINE(37)
	this->_parentRef = P;
	HX_STACK_LINE(38)
	this->_type = Bar;
	HX_STACK_LINE(39)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->_bar = tmp;
	HX_STACK_LINE(40)
	::flixel::FlxSprite tmp1 = this->_bar;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	tmp1->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(41)
	::flixel::FlxSprite tmp2 = this->_bar;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	this->add(tmp2);
	HX_STACK_LINE(43)
	bool tmp3 = (Bar == ::BarType_obj::Health);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	if ((tmp3)){
		HX_STACK_LINE(44)
		::flixel::FlxSprite tmp4 = this->_bar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		tmp4->loadGraphic(HX_HCSTRING("assets/images/bar-v-32-8.png","\x61","\xea","\x4b","\x53"),true,(int)32,(int)8,null(),null());
		HX_STACK_LINE(45)
		Float tmp5 = (X + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		Float tmp6 = (Y + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Float tmp7 = Max;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::flixel::ui::FlxBar tmp8 = ::flixel::ui::FlxBar_obj::__new(tmp5,tmp6,(int)1,(int)28,(int)4,null(),HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		this->_barVal = tmp8;
		HX_STACK_LINE(46)
		::flixel::ui::FlxBar tmp9 = this->_barVal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		tmp9->createImageBar(null(),HX_HCSTRING("assets/images/bar-health.png","\x3c","\x34","\x88","\xad"),(int)0,null());
	}
	else{
		HX_STACK_LINE(47)
		bool tmp4 = (Bar == ::BarType_obj::Battery);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		if ((tmp4)){
			HX_STACK_LINE(48)
			::flixel::FlxSprite tmp5 = this->_bar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			tmp5->loadGraphic(HX_HCSTRING("assets/images/bar-v-32-8.png","\x61","\xea","\x4b","\x53"),true,(int)32,(int)8,null(),null());
			HX_STACK_LINE(49)
			Float tmp6 = (X + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			Float tmp7 = (Y + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			Float tmp8 = Max;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			::flixel::ui::FlxBar tmp9 = ::flixel::ui::FlxBar_obj::__new(tmp6,tmp7,(int)1,(int)28,(int)4,null(),HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			this->_barVal = tmp9;
			HX_STACK_LINE(50)
			::flixel::ui::FlxBar tmp10 = this->_barVal;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			tmp10->createImageBar(null(),HX_HCSTRING("assets/images/bar-battery.png","\x83","\x17","\x02","\x28"),(int)0,null());
		}
		else{
			HX_STACK_LINE(51)
			bool tmp5 = (Bar == ::BarType_obj::EXP);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			if ((tmp5)){
				HX_STACK_LINE(52)
				::flixel::FlxSprite tmp6 = this->_bar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				tmp6->loadGraphic(HX_HCSTRING("assets/images/bar-32-6.png","\x28","\xb8","\x82","\x0c"),true,(int)32,(int)6,null(),null());
				HX_STACK_LINE(53)
				Float tmp7 = (X + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				Float tmp8 = (Y + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				Float tmp9 = Max;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(53)
				::flixel::ui::FlxBar tmp10 = ::flixel::ui::FlxBar_obj::__new(tmp7,tmp8,(int)1,(int)28,(int)4,null(),HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				this->_barVal = tmp10;
				HX_STACK_LINE(54)
				::flixel::ui::FlxBar tmp11 = this->_barVal;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				tmp11->createImageBar(null(),HX_HCSTRING("assets/images/bar-exp.png","\xd3","\xea","\x7e","\xdd"),(int)0,null());
			}
			else{
				HX_STACK_LINE(55)
				bool tmp6 = (Bar == ::BarType_obj::AMMO);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				if ((tmp6)){
					HX_STACK_LINE(56)
					::flixel::FlxSprite tmp7 = this->_bar;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					tmp7->set_visible(false);
					HX_STACK_LINE(57)
					Float tmp8 = (X + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					Float tmp9 = (Y + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					Float tmp10 = Max;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(57)
					::flixel::ui::FlxBar tmp11 = ::flixel::ui::FlxBar_obj::__new(tmp8,tmp9,(int)1,(int)0,(int)4,null(),HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					this->_barVal = tmp11;
					HX_STACK_LINE(58)
					::flixel::ui::FlxBar tmp12 = this->_barVal;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(58)
					tmp12->set_visible(false);
				}
			}
		}
	}
	HX_STACK_LINE(60)
	::flixel::ui::FlxBar tmp4 = this->_barVal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	tmp4->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(61)
	::flixel::ui::FlxBar tmp5 = this->_barVal;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Float tmp6 = Max;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	tmp5->set_currentValue(tmp6);
	HX_STACK_LINE(62)
	::flixel::ui::FlxBar tmp7 = this->_barVal;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	this->add(tmp7);
	HX_STACK_LINE(64)
	::flixel::FlxSprite tmp8 = this->_bar;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	::flixel::FlxSprite tmp10 = this->_bar;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(64)
	Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(64)
	Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(64)
	::flixel::FlxSprite tmp13 = this->_bar;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(64)
	Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(64)
	::flixel::text::FlxText tmp15 = ::flixel::text::FlxText_obj::__new(tmp12,tmp14,(int)600,HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(64)
	this->_text = tmp15;
	HX_STACK_LINE(65)
	::flixel::text::FlxText tmp16 = this->_text;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(65)
	tmp16->setFormat(HX_HCSTRING("assets/fonts/normal.ttf","\x16","\x17","\xef","\x53"),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(66)
	::flixel::text::FlxText tmp17 = this->_text;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(66)
	tmp17->set_alignment(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	HX_STACK_LINE(67)
	::flixel::text::FlxText tmp18 = this->_text;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(67)
	tmp18->set_size((int)40);
	HX_STACK_LINE(68)
	::flixel::text::FlxText tmp19 = this->_text;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(68)
	tmp19->set_borderStyle((int)2);
	HX_STACK_LINE(69)
	::flixel::text::FlxText tmp20 = this->_text;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(69)
	tmp20->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(70)
	::flixel::text::FlxText tmp21 = this->_text;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(70)
	tmp21->scale->set(((Float)0.25),((Float)0.25));
	HX_STACK_LINE(71)
	::flixel::text::FlxText tmp22 = this->_text;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(71)
	tmp22->offset->set((int)220,(int)12);
	HX_STACK_LINE(72)
	bool tmp23 = (Bar == ::BarType_obj::AMMO);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(72)
	if ((tmp23)){
		HX_STACK_LINE(73)
		::flixel::text::FlxText tmp24 = this->_text;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(73)
		tmp24->offset->set((int)222,(int)12);
	}
	HX_STACK_LINE(75)
	::flixel::text::FlxText tmp24 = this->_text;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(75)
	this->add(tmp24);
}
;
	return null();
}

//Bars_obj::~Bars_obj() { }

Dynamic Bars_obj::__CreateEmpty() { return  new Bars_obj; }
hx::ObjectPtr< Bars_obj > Bars_obj::__new(::Player P,::BarType Bar,Float X,Float Y,Float Max)
{  hx::ObjectPtr< Bars_obj > _result_ = new Bars_obj();
	_result_->__construct(P,Bar,X,Y,Max);
	return _result_;}

Dynamic Bars_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bars_obj > _result_ = new Bars_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Bars_obj::update( ){
{
		HX_STACK_FRAME("Bars","update",0xb699f557,"Bars.update","Bars.hx",79,0x70fb8b5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->super::update();
	}
return null();
}


Void Bars_obj::setCurrentValue( Float Value,::String Label){
{
		HX_STACK_FRAME("Bars","setCurrentValue",0xb6106e2c,"Bars.setCurrentValue","Bars.hx",82,0x70fb8b5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_ARG(Label,"Label")
		HX_STACK_LINE(83)
		::flixel::ui::FlxBar tmp = this->_barVal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		tmp->set_currentValue(tmp1);
		HX_STACK_LINE(84)
		::flixel::ui::FlxBar tmp2 = this->_barVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		tmp2->update();
		HX_STACK_LINE(85)
		::flixel::text::FlxText tmp3 = this->_text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		bool tmp4 = (Label != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		if ((tmp4)){
			HX_STACK_LINE(85)
			tmp5 = (Label + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(85)
			tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(85)
		Float tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		::String tmp9 = (tmp8 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		Float tmp10 = this->_max;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		tmp3->set_text(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bars_obj,setCurrentValue,(void))

Void Bars_obj::setMaxValue( Float Value){
{
		HX_STACK_FRAME("Bars","setMaxValue",0xb105f1e1,"Bars.setMaxValue","Bars.hx",88,0x70fb8b5e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(89)
		::flixel::ui::FlxBar tmp = this->_barVal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		tmp->setRange((int)0,tmp1);
		HX_STACK_LINE(90)
		::flixel::ui::FlxBar tmp2 = this->_barVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		tmp2->update();
		HX_STACK_LINE(91)
		this->_max = Value;
		HX_STACK_LINE(92)
		::flixel::text::FlxText tmp3 = this->_text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::flixel::ui::FlxBar tmp4 = this->_barVal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Float tmp5 = tmp4->get_currentValue();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		::BarType tmp6 = this->_type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		bool tmp7 = (tmp6 != ::BarType_obj::AMMO);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		if ((tmp7)){
			HX_STACK_LINE(92)
			Float tmp9 = Value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			tmp8 = (HX_HCSTRING(" / ","\x31","\x71","\x18","\x00") + tmp10);
		}
		else{
			HX_STACK_LINE(92)
			tmp8 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(92)
		::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(92)
		tmp3->set_text(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bars_obj,setMaxValue,(void))


Bars_obj::Bars_obj()
{
}

void Bars_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bars);
	HX_MARK_MEMBER_NAME(_bar,"_bar");
	HX_MARK_MEMBER_NAME(_barVal,"_barVal");
	HX_MARK_MEMBER_NAME(_parentRef,"_parentRef");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_type,"_type");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bars_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bar,"_bar");
	HX_VISIT_MEMBER_NAME(_barVal,"_barVal");
	HX_VISIT_MEMBER_NAME(_parentRef,"_parentRef");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bars_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bar") ) { return _bar; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_barVal") ) { return _barVal; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_parentRef") ) { return _parentRef; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setMaxValue") ) { return setMaxValue_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentValue") ) { return setCurrentValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bars_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bar") ) { _bar=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::BarType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_barVal") ) { _barVal=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_parentRef") ) { _parentRef=inValue.Cast< ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bars_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bars_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_bar","\xd4","\xf6","\x15","\x3f"));
	outFields->push(HX_HCSTRING("_barVal","\x6d","\x9c","\xea","\xc2"));
	outFields->push(HX_HCSTRING("_parentRef","\x0a","\x1e","\xf7","\xda"));
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Bars_obj,_bar),HX_HCSTRING("_bar","\xd4","\xf6","\x15","\x3f")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(Bars_obj,_barVal),HX_HCSTRING("_barVal","\x6d","\x9c","\xea","\xc2")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Bars_obj,_parentRef),HX_HCSTRING("_parentRef","\x0a","\x1e","\xf7","\xda")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Bars_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsFloat,(int)offsetof(Bars_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsObject /*::BarType*/ ,(int)offsetof(Bars_obj,_type),HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_bar","\xd4","\xf6","\x15","\x3f"),
	HX_HCSTRING("_barVal","\x6d","\x9c","\xea","\xc2"),
	HX_HCSTRING("_parentRef","\x0a","\x1e","\xf7","\xda"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setCurrentValue","\x3a","\x37","\x7a","\x97"),
	HX_HCSTRING("setMaxValue","\xef","\x9b","\x36","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bars_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bars_obj::__mClass,"__mClass");
};

#endif

hx::Class Bars_obj::__mClass;

void Bars_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bars","\x60","\x13","\xea","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bars_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bars_obj >;
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

