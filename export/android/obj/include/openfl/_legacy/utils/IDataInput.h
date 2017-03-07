#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#define INCLUDED_openfl__legacy_utils_IDataInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IDataInput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataInput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_bytesAvailable( )=0;
		virtual Dynamic get_bytesAvailable_dyn()=0;
		virtual ::String get_endian( )=0;
		virtual Dynamic get_endian_dyn()=0;
		virtual ::String set_endian( ::String value)=0;
		virtual Dynamic set_endian_dyn()=0;
		virtual bool readBoolean( )=0;
		virtual Dynamic readBoolean_dyn()=0;
		virtual int readByte( )=0;
		virtual Dynamic readByte_dyn()=0;
		virtual Void readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  offset,hx::Null< int >  length)=0;
		virtual Dynamic readBytes_dyn()=0;
		virtual Float readDouble( )=0;
		virtual Dynamic readDouble_dyn()=0;
		virtual Float readFloat( )=0;
		virtual Dynamic readFloat_dyn()=0;
		virtual int readInt( )=0;
		virtual Dynamic readInt_dyn()=0;
		virtual int readShort( )=0;
		virtual Dynamic readShort_dyn()=0;
		virtual int readUnsignedByte( )=0;
		virtual Dynamic readUnsignedByte_dyn()=0;
		virtual int readUnsignedInt( )=0;
		virtual Dynamic readUnsignedInt_dyn()=0;
		virtual int readUnsignedShort( )=0;
		virtual Dynamic readUnsignedShort_dyn()=0;
		virtual ::String readUTF( )=0;
		virtual Dynamic readUTF_dyn()=0;
		virtual ::String readUTFBytes( int length)=0;
		virtual Dynamic readUTFBytes_dyn()=0;
};

#define DELEGATE_openfl__legacy_utils_IDataInput \
virtual int get_bytesAvailable( ) { return mDelegate->get_bytesAvailable();}  \
virtual Dynamic get_bytesAvailable_dyn() { return mDelegate->get_bytesAvailable_dyn();}  \
virtual ::String get_endian( ) { return mDelegate->get_endian();}  \
virtual Dynamic get_endian_dyn() { return mDelegate->get_endian_dyn();}  \
virtual ::String set_endian( ::String value) { return mDelegate->set_endian(value);}  \
virtual Dynamic set_endian_dyn() { return mDelegate->set_endian_dyn();}  \
virtual bool readBoolean( ) { return mDelegate->readBoolean();}  \
virtual Dynamic readBoolean_dyn() { return mDelegate->readBoolean_dyn();}  \
virtual int readByte( ) { return mDelegate->readByte();}  \
virtual Dynamic readByte_dyn() { return mDelegate->readByte_dyn();}  \
virtual Void readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  offset,hx::Null< int >  length) { return mDelegate->readBytes(data,offset,length);}  \
virtual Dynamic readBytes_dyn() { return mDelegate->readBytes_dyn();}  \
virtual Float readDouble( ) { return mDelegate->readDouble();}  \
virtual Dynamic readDouble_dyn() { return mDelegate->readDouble_dyn();}  \
virtual Float readFloat( ) { return mDelegate->readFloat();}  \
virtual Dynamic readFloat_dyn() { return mDelegate->readFloat_dyn();}  \
virtual int readInt( ) { return mDelegate->readInt();}  \
virtual Dynamic readInt_dyn() { return mDelegate->readInt_dyn();}  \
virtual int readShort( ) { return mDelegate->readShort();}  \
virtual Dynamic readShort_dyn() { return mDelegate->readShort_dyn();}  \
virtual int readUnsignedByte( ) { return mDelegate->readUnsignedByte();}  \
virtual Dynamic readUnsignedByte_dyn() { return mDelegate->readUnsignedByte_dyn();}  \
virtual int readUnsignedInt( ) { return mDelegate->readUnsignedInt();}  \
virtual Dynamic readUnsignedInt_dyn() { return mDelegate->readUnsignedInt_dyn();}  \
virtual int readUnsignedShort( ) { return mDelegate->readUnsignedShort();}  \
virtual Dynamic readUnsignedShort_dyn() { return mDelegate->readUnsignedShort_dyn();}  \
virtual ::String readUTF( ) { return mDelegate->readUTF();}  \
virtual Dynamic readUTF_dyn() { return mDelegate->readUTF_dyn();}  \
virtual ::String readUTFBytes( int length) { return mDelegate->readUTFBytes(length);}  \
virtual Dynamic readUTFBytes_dyn() { return mDelegate->readUTFBytes_dyn();}  \


template<typename IMPL>
class IDataInput_delegate_ : public IDataInput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataInput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl__legacy_utils_IDataInput
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_IDataInput */ 
