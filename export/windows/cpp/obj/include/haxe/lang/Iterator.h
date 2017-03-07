#ifndef INCLUDED_haxe_lang_Iterator
#define INCLUDED_haxe_lang_Iterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,lang,Iterator)
namespace haxe{
namespace lang{


class HXCPP_CLASS_ATTRIBUTES  Iterator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Iterator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool hasNext( )=0;
		virtual Dynamic hasNext_dyn()=0;
		virtual Dynamic next( )=0;
		virtual Dynamic next_dyn()=0;
};

#define DELEGATE_haxe_lang_Iterator \
virtual bool hasNext( ) { return mDelegate->hasNext();}  \
virtual Dynamic hasNext_dyn() { return mDelegate->hasNext_dyn();}  \
virtual Dynamic next( ) { return mDelegate->next();}  \
virtual Dynamic next_dyn() { return mDelegate->next_dyn();}  \


template<typename IMPL>
class Iterator_delegate_ : public Iterator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Iterator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_lang_Iterator
};

} // end namespace haxe
} // end namespace lang

#endif /* INCLUDED_haxe_lang_Iterator */ 
