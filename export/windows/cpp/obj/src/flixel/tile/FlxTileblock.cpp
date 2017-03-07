#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
namespace flixel{
namespace tile{

Void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_FRAME("flixel.tile.FlxTileblock","new",0x8f1d69cd,"flixel.tile.FlxTileblock.new","flixel/tile/FlxTileblock.hx",26,0xecdf1de3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(27)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(28)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	this->makeGraphic(tmp2,tmp3,(int)0,true,null());
	HX_STACK_LINE(29)
	this->set_active(false);
	HX_STACK_LINE(30)
	this->set_immovable(true);
	HX_STACK_LINE(31)
	this->set_moves(false);
}
;
	return null();
}

//FlxTileblock_obj::~FlxTileblock_obj() { }

Dynamic FlxTileblock_obj::__CreateEmpty() { return  new FlxTileblock_obj; }
hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< FlxTileblock_obj > _result_ = new FlxTileblock_obj();
	_result_->__construct(X,Y,Width,Height);
	return _result_;}

Dynamic FlxTileblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileblock_obj > _result_ = new FlxTileblock_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::flixel::tile::FlxTileblock FlxTileblock_obj::loadTiles( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_Empties){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int Empties = __o_Empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadTiles",0x7f9232ac,"flixel.tile.FlxTileblock.loadTiles","flixel/tile/FlxTileblock.hx",43,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(Empties,"Empties")
{
		HX_STACK_LINE(44)
		bool tmp = (TileGraphic == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		if ((tmp)){
			HX_STACK_LINE(46)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(50)
		::flixel::FlxSprite tmp1 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Dynamic tmp2 = TileGraphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		int tmp3 = TileWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		int tmp4 = TileHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::flixel::FlxSprite tmp5 = tmp1->loadGraphic(tmp2,true,tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		::flixel::FlxSprite sprite = tmp5;		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(51)
		Float tmp6 = sprite->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		int spriteWidth = tmp7;		HX_STACK_VAR(spriteWidth,"spriteWidth");
		HX_STACK_LINE(52)
		Float tmp8 = sprite->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		int spriteHeight = tmp9;		HX_STACK_VAR(spriteHeight,"spriteHeight");
		HX_STACK_LINE(53)
		int tmp10 = (sprite->frames + Empties);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		int total = tmp10;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(56)
		bool regen = false;		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(58)
		Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		Float tmp12 = sprite->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		Float tmp13 = hx::Mod(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		if ((tmp14)){
			HX_STACK_LINE(60)
			Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			int tmp16 = spriteWidth;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			Float tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(60)
			int tmp20 = spriteWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(60)
			int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(60)
			this->set_width(tmp21);
			HX_STACK_LINE(61)
			regen = true;
		}
		HX_STACK_LINE(64)
		Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		Float tmp16 = sprite->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		Float tmp17 = hx::Mod(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(64)
		bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		if ((tmp18)){
			HX_STACK_LINE(66)
			Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			int tmp20 = spriteHeight;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			Float tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			int tmp24 = spriteHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(66)
			int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(66)
			this->set_height(tmp25);
			HX_STACK_LINE(67)
			regen = true;
		}
		HX_STACK_LINE(70)
		bool tmp19 = regen;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		if ((tmp19)){
			HX_STACK_LINE(72)
			Float tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(72)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(72)
			Float tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(72)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(72)
			this->makeGraphic(tmp21,tmp23,(int)0,true,null());
		}
		else{
			HX_STACK_LINE(76)
			::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)0);
		}
		HX_STACK_LINE(80)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(81)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(82)
		int destinationX;		HX_STACK_VAR(destinationX,"destinationX");
		HX_STACK_LINE(83)
		int destinationY = (int)0;		HX_STACK_VAR(destinationY,"destinationY");
		HX_STACK_LINE(84)
		Float tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(84)
		int tmp21 = spriteWidth;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(84)
		Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(84)
		int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(84)
		int widthInTiles = tmp23;		HX_STACK_VAR(widthInTiles,"widthInTiles");
		HX_STACK_LINE(85)
		Float tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(85)
		int tmp25 = spriteHeight;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(85)
		Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(85)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(85)
		int heightInTiles = tmp27;		HX_STACK_VAR(heightInTiles,"heightInTiles");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp28 = (row < heightInTiles);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(87)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(87)
			if ((tmp29)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(89)
			destinationX = (int)0;
			HX_STACK_LINE(90)
			column = (int)0;
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				bool tmp30 = (column < widthInTiles);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(92)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(92)
				if ((tmp31)){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(94)
				int tmp32 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(94)
				int tmp33 = (tmp32 * (int)48271);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(94)
				int tmp34 = hx::Mod(tmp33,(int)2147483647);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(94)
				int tmp35 = (int(tmp34) & int((int)2147483647));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(94)
				int tmp36 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(94)
				Float tmp37 = (Float(tmp36) / Float((int)2147483647));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(94)
				int tmp38 = total;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(94)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(94)
				int tmp40 = Empties;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(94)
				bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(94)
				if ((tmp41)){
					HX_STACK_LINE(96)
					sprite->animation->randomFrame();
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						bool Force = false;		HX_STACK_VAR(Force,"Force");
						HX_STACK_LINE(97)
						sprite->calcFrame(true);
					}
					HX_STACK_LINE(98)
					::flixel::FlxSprite tmp42 = sprite;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(98)
					int tmp43 = destinationX;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(98)
					int tmp44 = destinationY;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(98)
					this->stamp(tmp42,tmp43,tmp44);
				}
				HX_STACK_LINE(101)
				hx::AddEq(destinationX,spriteWidth);
				HX_STACK_LINE(102)
				(column)++;
			}
			HX_STACK_LINE(105)
			hx::AddEq(destinationY,spriteHeight);
			HX_STACK_LINE(106)
			(row)++;
		}
		HX_STACK_LINE(109)
		sprite->destroy();
		HX_STACK_LINE(110)
		this->dirty = true;
		HX_STACK_LINE(111)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )


FlxTileblock_obj::FlxTileblock_obj()
{
}

Dynamic FlxTileblock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return loadTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loadTiles","\x7f","\x49","\x6c","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTileblock","\x5b","\x7f","\xbf","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTileblock_obj >;
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
} // end namespace tile
