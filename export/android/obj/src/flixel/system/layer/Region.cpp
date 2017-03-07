#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
namespace flixel{
namespace _system{
namespace layer{

Void Region_obj::__construct(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("flixel.system.layer.Region","new",0x38fbf7d0,"flixel.system.layer.Region.new","flixel/system/layer/Region.hx",20,0xdb295b5f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_startX,"startX")
HX_STACK_ARG(__o_startY,"startY")
HX_STACK_ARG(__o_tileWidth,"tileWidth")
HX_STACK_ARG(__o_tileHeight,"tileHeight")
HX_STACK_ARG(__o_spacingX,"spacingX")
HX_STACK_ARG(__o_spacingY,"spacingY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int tileWidth = __o_tileWidth.Default(0);
int tileHeight = __o_tileHeight.Default(0);
int spacingX = __o_spacingX.Default(0);
int spacingY = __o_spacingY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(21)
	this->startX = startX;
	HX_STACK_LINE(22)
	this->startY = startY;
	HX_STACK_LINE(24)
	this->tileWidth = tileWidth;
	HX_STACK_LINE(25)
	this->tileHeight = tileHeight;
	HX_STACK_LINE(27)
	this->spacingX = spacingX;
	HX_STACK_LINE(28)
	this->spacingY = spacingY;
	HX_STACK_LINE(30)
	this->width = width;
	HX_STACK_LINE(31)
	this->height = height;
}
;
	return null();
}

//Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< Region_obj > _result_ = new Region_obj();
	_result_->__construct(__o_startX,__o_startY,__o_tileWidth,__o_tileHeight,__o_spacingX,__o_spacingY,__o_width,__o_height);
	return _result_;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > _result_ = new Region_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

int Region_obj::get_numTiles( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numTiles",0x6d8e2ff8,"flixel.system.layer.Region.get_numTiles","flixel/system/layer/Region.hx",37,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	int tmp = this->get_numRows();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = this->get_numCols();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numTiles,return )

int Region_obj::get_numRows( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numRows",0x566f1206,"flixel.system.layer.Region.get_numRows","flixel/system/layer/Region.hx",44,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(47)
	int tmp = this->tileHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(49)
		int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = this->spacingY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		int tmp5 = this->tileHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		int tmp6 = this->spacingY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		Float tmp8 = (Float(tmp4) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(49)
		num = tmp9;
	}
	HX_STACK_LINE(52)
	int tmp2 = num;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numRows,return )

int Region_obj::get_numCols( ){
	HX_STACK_FRAME("flixel.system.layer.Region","get_numCols",0x4c84d520,"flixel.system.layer.Region.get_numCols","flixel/system/layer/Region.hx",58,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(61)
	int tmp = this->tileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(63)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		int tmp3 = this->spacingX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		int tmp5 = this->tileWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		int tmp6 = this->spacingX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		Float tmp8 = (Float(tmp4) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		num = tmp9;
	}
	HX_STACK_LINE(66)
	int tmp2 = num;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numCols,return )

::flixel::_system::layer::Region Region_obj::clone( ){
	HX_STACK_FRAME("flixel.system.layer.Region","clone",0x18f7f6cd,"flixel.system.layer.Region.clone","flixel/system/layer/Region.hx",70,0xdb295b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	int tmp = this->startX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = this->startY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	int tmp2 = this->tileWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	int tmp3 = this->tileHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	int tmp4 = this->spacingX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	int tmp5 = this->spacingY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	::flixel::_system::layer::Region tmp8 = ::flixel::_system::layer::Region_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,clone,return )


Region_obj::Region_obj()
{
}

Dynamic Region_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return inCallProp == hx::paccAlways ? get_numRows() : numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return inCallProp == hx::paccAlways ? get_numCols() : numCols; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spacingX") ) { return spacingX; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return spacingY; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return inCallProp == hx::paccAlways ? get_numTiles() : numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numRows") ) { return get_numRows_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numCols") ) { return get_numCols_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return get_numTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spacingX") ) { spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Region_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"));
	outFields->push(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Region_obj,startX),HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05")},
	{hx::fsInt,(int)offsetof(Region_obj,startY),HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05")},
	{hx::fsInt,(int)offsetof(Region_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Region_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Region_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(Region_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(Region_obj,spacingX),HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2")},
	{hx::fsInt,(int)offsetof(Region_obj,spacingY),HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2")},
	{hx::fsInt,(int)offsetof(Region_obj,numTiles),HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd")},
	{hx::fsInt,(int)offsetof(Region_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(Region_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"),
	HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"),
	HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"),
	HX_HCSTRING("numTiles","\x5f","\x11","\x45","\xcd"),
	HX_HCSTRING("get_numTiles","\x68","\xc5","\x5e","\x82"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("get_numRows","\x96","\xfa","\x29","\x25"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("get_numCols","\xb0","\xbd","\x3f","\x1b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#endif

hx::Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.layer.Region","\xde","\x0f","\x98","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Region_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Region_obj >;
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
} // end namespace layer
