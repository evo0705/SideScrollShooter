#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#define INCLUDED_flixel_interfaces_IFlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxSprite_obj : public ::flixel::interfaces::IFlxBasic_obj{
	public:
		typedef ::flixel::interfaces::IFlxBasic_obj super;
		typedef IFlxSprite_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float set_x( Float value)=0;
		virtual Dynamic set_x_dyn()=0;
		virtual Float set_y( Float value)=0;
		virtual Dynamic set_y_dyn()=0;
		virtual Float set_alpha( Float value)=0;
		virtual Dynamic set_alpha_dyn()=0;
		virtual Float set_angle( Float value)=0;
		virtual Dynamic set_angle_dyn()=0;
		virtual int set_facing( int value)=0;
		virtual Dynamic set_facing_dyn()=0;
		virtual bool set_moves( bool value)=0;
		virtual Dynamic set_moves_dyn()=0;
		virtual bool set_immovable( bool value)=0;
		virtual Dynamic set_immovable_dyn()=0;
		virtual Void reset( Float X,Float Y)=0;
		virtual Dynamic reset_dyn()=0;
		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y)=0;
		virtual Dynamic setPosition_dyn()=0;
};

#define DELEGATE_flixel_interfaces_IFlxSprite \
virtual Float set_x( Float value) { return mDelegate->set_x(value);}  \
virtual Dynamic set_x_dyn() { return mDelegate->set_x_dyn();}  \
virtual Float set_y( Float value) { return mDelegate->set_y(value);}  \
virtual Dynamic set_y_dyn() { return mDelegate->set_y_dyn();}  \
virtual Float set_alpha( Float value) { return mDelegate->set_alpha(value);}  \
virtual Dynamic set_alpha_dyn() { return mDelegate->set_alpha_dyn();}  \
virtual Float set_angle( Float value) { return mDelegate->set_angle(value);}  \
virtual Dynamic set_angle_dyn() { return mDelegate->set_angle_dyn();}  \
virtual int set_facing( int value) { return mDelegate->set_facing(value);}  \
virtual Dynamic set_facing_dyn() { return mDelegate->set_facing_dyn();}  \
virtual bool set_moves( bool value) { return mDelegate->set_moves(value);}  \
virtual Dynamic set_moves_dyn() { return mDelegate->set_moves_dyn();}  \
virtual bool set_immovable( bool value) { return mDelegate->set_immovable(value);}  \
virtual Dynamic set_immovable_dyn() { return mDelegate->set_immovable_dyn();}  \
virtual Void reset( Float X,Float Y) { return mDelegate->reset(X,Y);}  \
virtual Dynamic reset_dyn() { return mDelegate->reset_dyn();}  \
virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y) { return mDelegate->setPosition(X,Y);}  \
virtual Dynamic setPosition_dyn() { return mDelegate->setPosition_dyn();}  \


template<typename IMPL>
class IFlxSprite_delegate_ : public IFlxSprite_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxSprite_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxSprite
		DELEGATE_flixel_interfaces_IFlxBasic
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxSprite */ 
