#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTile_obj::__construct(int OriginalId)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","new",0xadac562d,"flixel.addons.editors.tiled.TiledTile.new","flixel/addons/editors/tiled/TiledTile.hx",7,0x237a79c5)
HX_STACK_THIS(this)
HX_STACK_ARG(OriginalId,"OriginalId")
{
	HX_STACK_LINE(34)
	this->isFlipVertically = false;
	HX_STACK_LINE(30)
	this->isFlipHorizontally = false;
	HX_STACK_LINE(42)
	this->tileID = OriginalId;
	HX_STACK_LINE(43)
	int tmp = this->tileID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = (int)-1073741824;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	int tmp2 = (int(tmp1) | int((int)536870912));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	int tmp3 = ~(int)(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	int tmp4 = (int(tmp) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	this->tilesetID = tmp4;
	HX_STACK_LINE(44)
	this->rotate = (int)0;
	HX_STACK_LINE(45)
	this->resolveFlipAndRotation();
}
;
	return null();
}

//TiledTile_obj::~TiledTile_obj() { }

Dynamic TiledTile_obj::__CreateEmpty() { return  new TiledTile_obj; }
hx::ObjectPtr< TiledTile_obj > TiledTile_obj::__new(int OriginalId)
{  hx::ObjectPtr< TiledTile_obj > _result_ = new TiledTile_obj();
	_result_->__construct(OriginalId);
	return _result_;}

Dynamic TiledTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTile_obj > _result_ = new TiledTile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TiledTile_obj::resolveFlipAndRotation( ){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","resolveFlipAndRotation",0x184e8a4f,"flixel.addons.editors.tiled.TiledTile.resolveFlipAndRotation","flixel/addons/editors/tiled/TiledTile.hx",48,0x237a79c5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		bool flipHorizontal = false;		HX_STACK_VAR(flipHorizontal,"flipHorizontal");
		HX_STACK_LINE(50)
		bool flipVertical = false;		HX_STACK_VAR(flipVertical,"flipVertical");
		HX_STACK_LINE(51)
		int tmp = this->tileID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		int tmp1 = (int(tmp) & int((int)-2147483648));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		if ((tmp2)){
			HX_STACK_LINE(52)
			flipHorizontal = true;
		}
		HX_STACK_LINE(54)
		int tmp3 = this->tileID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		int tmp4 = (int(tmp3) & int((int)1073741824));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		if ((tmp5)){
			HX_STACK_LINE(55)
			flipVertical = true;
		}
		HX_STACK_LINE(58)
		int tmp6 = this->tileID;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		int tmp7 = (int(tmp6) & int((int)536870912));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		if ((tmp8)){
			HX_STACK_LINE(59)
			bool tmp9 = flipHorizontal;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			if ((tmp9)){
				HX_STACK_LINE(59)
				tmp10 = flipVertical;
			}
			else{
				HX_STACK_LINE(59)
				tmp10 = false;
			}
			HX_STACK_LINE(59)
			if ((tmp10)){
				HX_STACK_LINE(60)
				this->isFlipHorizontally = true;
				HX_STACK_LINE(61)
				this->rotate = (int)2;
			}
			else{
				HX_STACK_LINE(62)
				bool tmp11 = flipHorizontal;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				if ((tmp11)){
					HX_STACK_LINE(63)
					this->rotate = (int)1;
				}
				else{
					HX_STACK_LINE(64)
					bool tmp12 = flipVertical;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(64)
					if ((tmp12)){
						HX_STACK_LINE(65)
						this->rotate = (int)2;
					}
					else{
						HX_STACK_LINE(67)
						this->isFlipVertically = true;
						HX_STACK_LINE(68)
						this->rotate = (int)2;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(71)
			this->isFlipHorizontally = flipHorizontal;
			HX_STACK_LINE(72)
			this->isFlipVertically = flipVertical;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveFlipAndRotation,(void))

int TiledTile_obj::resolveTilesetID( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","resolveTilesetID",0x0ea8a396,"flixel.addons.editors.tiled.TiledTile.resolveTilesetID","flixel/addons/editors/tiled/TiledTile.hx",77,0x237a79c5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	int tmp = this->tileID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = (int)-1073741824;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	int tmp2 = (int(tmp1) | int((int)536870912));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	int tmp3 = ~(int)(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	int tmp4 = (int(tmp) & int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveTilesetID,return )

int TiledTile_obj::FLIPPED_HORIZONTAL;

int TiledTile_obj::FLIPPED_VERTICAL;

int TiledTile_obj::FLIPPED_DIAGONAL;

int TiledTile_obj::ROTATE_0;

int TiledTile_obj::ROTATE_90;

int TiledTile_obj::ROTATE_270;


TiledTile_obj::TiledTile_obj()
{
}

Dynamic TiledTile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { return tilesetID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { return isFlipVertically; }
		if (HX_FIELD_EQ(inName,"resolveTilesetID") ) { return resolveTilesetID_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { return isFlipHorizontally; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resolveFlipAndRotation") ) { return resolveFlipAndRotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { tilesetID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { isFlipVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { isFlipHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TiledTile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TiledTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"));
	outFields->push(HX_HCSTRING("tilesetID","\x0f","\x76","\x5d","\x72"));
	outFields->push(HX_HCSTRING("isFlipHorizontally","\xc8","\xb6","\x9f","\xe1"));
	outFields->push(HX_HCSTRING("isFlipVertically","\x1a","\xeb","\x3d","\x00"));
	outFields->push(HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTile_obj,tileID),HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,tilesetID),HX_HCSTRING("tilesetID","\x0f","\x76","\x5d","\x72")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,isFlipHorizontally),HX_HCSTRING("isFlipHorizontally","\xc8","\xb6","\x9f","\xe1")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,isFlipVertically),HX_HCSTRING("isFlipVertically","\x1a","\xeb","\x3d","\x00")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,rotate),HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TiledTile_obj::FLIPPED_HORIZONTAL,HX_HCSTRING("FLIPPED_HORIZONTAL","\x21","\x8d","\x4f","\x37")},
	{hx::fsInt,(void *) &TiledTile_obj::FLIPPED_VERTICAL,HX_HCSTRING("FLIPPED_VERTICAL","\x73","\xef","\x30","\x68")},
	{hx::fsInt,(void *) &TiledTile_obj::FLIPPED_DIAGONAL,HX_HCSTRING("FLIPPED_DIAGONAL","\xf2","\xb7","\xb3","\xc4")},
	{hx::fsInt,(void *) &TiledTile_obj::ROTATE_0,HX_HCSTRING("ROTATE_0","\x0c","\xd2","\x08","\x62")},
	{hx::fsInt,(void *) &TiledTile_obj::ROTATE_90,HX_HCSTRING("ROTATE_90","\x7b","\x00","\xaf","\x65")},
	{hx::fsInt,(void *) &TiledTile_obj::ROTATE_270,HX_HCSTRING("ROTATE_270","\xa7","\x21","\x6c","\x93")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"),
	HX_HCSTRING("tilesetID","\x0f","\x76","\x5d","\x72"),
	HX_HCSTRING("isFlipHorizontally","\xc8","\xb6","\x9f","\xe1"),
	HX_HCSTRING("isFlipVertically","\x1a","\xeb","\x3d","\x00"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("resolveFlipAndRotation","\xfc","\x1b","\x88","\xc6"),
	HX_HCSTRING("resolveTilesetID","\x83","\x85","\xe4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#endif

hx::Class TiledTile_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FLIPPED_HORIZONTAL","\x21","\x8d","\x4f","\x37"),
	HX_HCSTRING("FLIPPED_VERTICAL","\x73","\xef","\x30","\x68"),
	HX_HCSTRING("FLIPPED_DIAGONAL","\xf2","\xb7","\xb3","\xc4"),
	HX_HCSTRING("ROTATE_0","\x0c","\xd2","\x08","\x62"),
	HX_HCSTRING("ROTATE_90","\x7b","\x00","\xaf","\x65"),
	HX_HCSTRING("ROTATE_270","\xa7","\x21","\x6c","\x93"),
	::String(null()) };

void TiledTile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.editors.tiled.TiledTile","\xbb","\xbb","\x88","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TiledTile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TiledTile_obj >;
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

void TiledTile_obj::__boot()
{
	FLIPPED_HORIZONTAL= (int)-2147483648;
	FLIPPED_VERTICAL= (int)1073741824;
	FLIPPED_DIAGONAL= (int)536870912;
	ROTATE_0= (int)0;
	ROTATE_90= (int)1;
	ROTATE_270= (int)2;
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
