#ifndef INCLUDED_enemy_Bandit
#define INCLUDED_enemy_Bandit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Environment)
HX_DECLARE_CLASS1(enemy,Bandit)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace enemy{


class HXCPP_CLASS_ATTRIBUTES  Bandit_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Bandit_obj OBJ_;
		Bandit_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::Environment ENV);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="enemy.Bandit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bandit_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::Environment ENV);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bandit_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bandit","\x00","\xcb","\x6d","\x86"); }

		::String name;
		Float moveSpeed;
		Float jumpPower;
		bool allowHurt;
		Float maxHealth;
		cpp::ArrayBase _AIMovementList;
		::Environment _environment;
		virtual Void resetMaxHealth( Float Value);
		Dynamic resetMaxHealth_dyn();

		virtual Void addHealth( Float value);
		Dynamic addHealth_dyn();

		virtual Void update( );

		virtual Void hurt( Float Damage);

		virtual Void destroy( );

		virtual Void AIMovement( );
		Dynamic AIMovement_dyn();

		virtual Void moveLeft( );
		Dynamic moveLeft_dyn();

		virtual Void moveRight( );
		Dynamic moveRight_dyn();

};

} // end namespace enemy

#endif /* INCLUDED_enemy_Bandit */ 
