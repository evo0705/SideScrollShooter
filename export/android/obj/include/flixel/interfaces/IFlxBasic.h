#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#define INCLUDED_flixel_interfaces_IFlxBasic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxBasic_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxBasic_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool set_active( bool value)=0;
		virtual Dynamic set_active_dyn()=0;
		virtual bool set_visible( bool value)=0;
		virtual Dynamic set_visible_dyn()=0;
		virtual bool set_alive( bool value)=0;
		virtual Dynamic set_alive_dyn()=0;
		virtual bool set_exists( bool value)=0;
		virtual Dynamic set_exists_dyn()=0;
		virtual Void draw( )=0;
		virtual Dynamic draw_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
		virtual Void kill( )=0;
		virtual Dynamic kill_dyn()=0;
		virtual Void revive( )=0;
		virtual Dynamic revive_dyn()=0;
		virtual ::String toString( )=0;
		virtual Dynamic toString_dyn()=0;
};

#define DELEGATE_flixel_interfaces_IFlxBasic \
virtual bool set_active( bool value) { return mDelegate->set_active(value);}  \
virtual Dynamic set_active_dyn() { return mDelegate->set_active_dyn();}  \
virtual bool set_visible( bool value) { return mDelegate->set_visible(value);}  \
virtual Dynamic set_visible_dyn() { return mDelegate->set_visible_dyn();}  \
virtual bool set_alive( bool value) { return mDelegate->set_alive(value);}  \
virtual Dynamic set_alive_dyn() { return mDelegate->set_alive_dyn();}  \
virtual bool set_exists( bool value) { return mDelegate->set_exists(value);}  \
virtual Dynamic set_exists_dyn() { return mDelegate->set_exists_dyn();}  \
virtual Void draw( ) { return mDelegate->draw();}  \
virtual Dynamic draw_dyn() { return mDelegate->draw_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \
virtual Void kill( ) { return mDelegate->kill();}  \
virtual Dynamic kill_dyn() { return mDelegate->kill_dyn();}  \
virtual Void revive( ) { return mDelegate->revive();}  \
virtual Dynamic revive_dyn() { return mDelegate->revive_dyn();}  \
virtual ::String toString( ) { return mDelegate->toString();}  \
virtual Dynamic toString_dyn() { return mDelegate->toString_dyn();}  \


template<typename IMPL>
class IFlxBasic_delegate_ : public IFlxBasic_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxBasic_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxBasic
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxBasic */ 
