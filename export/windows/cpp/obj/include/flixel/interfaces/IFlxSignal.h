#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#define INCLUDED_flixel_interfaces_IFlxSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSignal)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxSignal_obj : public ::flixel::interfaces::IFlxDestroyable_obj{
	public:
		typedef ::flixel::interfaces::IFlxDestroyable_obj super;
		typedef IFlxSignal_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void add( Dynamic listener)=0;
		virtual Dynamic add_dyn()=0;
		virtual Void addOnce( Dynamic listener)=0;
		virtual Dynamic addOnce_dyn()=0;
		virtual Void remove( Dynamic listener)=0;
		virtual Dynamic remove_dyn()=0;
		virtual Void removeAll( )=0;
		virtual Dynamic removeAll_dyn()=0;
		virtual bool has( Dynamic listener)=0;
		virtual Dynamic has_dyn()=0;
};

#define DELEGATE_flixel_interfaces_IFlxSignal \
virtual Void add( Dynamic listener) { return mDelegate->add(listener);}  \
virtual Dynamic add_dyn() { return mDelegate->add_dyn();}  \
virtual Void addOnce( Dynamic listener) { return mDelegate->addOnce(listener);}  \
virtual Dynamic addOnce_dyn() { return mDelegate->addOnce_dyn();}  \
virtual Void remove( Dynamic listener) { return mDelegate->remove(listener);}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual Void removeAll( ) { return mDelegate->removeAll();}  \
virtual Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}  \
virtual bool has( Dynamic listener) { return mDelegate->has(listener);}  \
virtual Dynamic has_dyn() { return mDelegate->has_dyn();}  \


template<typename IMPL>
class IFlxSignal_delegate_ : public IFlxSignal_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxSignal_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxSignal
		DELEGATE_flixel_interfaces_IFlxDestroyable
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxSignal */ 
