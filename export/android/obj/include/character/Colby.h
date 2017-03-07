#ifndef INCLUDED_character_Colby
#define INCLUDED_character_Colby

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Player
#include <Player.h>
#endif
HX_DECLARE_CLASS0(Environment)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(character,Colby)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace character{


class HXCPP_CLASS_ATTRIBUTES  Colby_obj : public ::Player_obj{
	public:
		typedef ::Player_obj super;
		typedef Colby_obj OBJ_;
		Colby_obj();
		Void __construct(::Environment ENV,::flixel::FlxState State);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="character.Colby")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Colby_obj > __new(::Environment ENV,::flixel::FlxState State);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Colby_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Colby","\xf7","\xd5","\x89","\xdd"); }

};

} // end namespace character

#endif /* INCLUDED_character_Colby */ 
