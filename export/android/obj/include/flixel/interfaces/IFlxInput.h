#ifndef INCLUDED_flixel_interfaces_IFlxInput
#define INCLUDED_flixel_interfaces_IFlxInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxInput)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxInput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxInput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void reset( )=0;
		virtual Dynamic reset_dyn()=0;
		virtual Void update( )=0;
		virtual Dynamic update_dyn()=0;
		virtual Void onFocus( )=0;
		virtual Dynamic onFocus_dyn()=0;
		virtual Void onFocusLost( )=0;
		virtual Dynamic onFocusLost_dyn()=0;
		virtual Void destroy( )=0;
		virtual Dynamic destroy_dyn()=0;
};

#define DELEGATE_flixel_interfaces_IFlxInput \
virtual Void reset( ) { return mDelegate->reset();}  \
virtual Dynamic reset_dyn() { return mDelegate->reset_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual Void onFocus( ) { return mDelegate->onFocus();}  \
virtual Dynamic onFocus_dyn() { return mDelegate->onFocus_dyn();}  \
virtual Void onFocusLost( ) { return mDelegate->onFocusLost();}  \
virtual Dynamic onFocusLost_dyn() { return mDelegate->onFocusLost_dyn();}  \
virtual Void destroy( ) { return mDelegate->destroy();}  \
virtual Dynamic destroy_dyn() { return mDelegate->destroy_dyn();}  \


template<typename IMPL>
class IFlxInput_delegate_ : public IFlxInput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxInput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxInput
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxInput */ 
