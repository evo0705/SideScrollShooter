#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_CompressionAlgorithm
#include <openfl/_legacy/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","new",0xe3818e62,"openfl._legacy.utils.ByteArray.new","openfl/_legacy/utils/ByteArray.hx",41,0x6d362251)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(43)
	this->bigEndian = true;
	HX_STACK_LINE(44)
	this->position = (int)0;
	HX_STACK_LINE(46)
	bool tmp = (size >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	if ((tmp)){
		HX_STACK_LINE(60)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(62)
		bool tmp1 = (size > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(64)
			int tmp2 = (size - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			data[tmp2] = (int)0;
		}
		HX_STACK_LINE(68)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		super::__construct(tmp2,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(__o_size);
	return _result_;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::utils::IDataOutput_obj)) return operator ::openfl::_legacy::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IMemoryRange_obj)) return operator ::openfl::_legacy::utils::IMemoryRange_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IDataInput_obj)) return operator ::openfl::_legacy::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArray_obj::operator ::openfl::_legacy::utils::IDataOutput_obj *()
	{ return new ::openfl::_legacy::utils::IDataOutput_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::openfl::_legacy::utils::IMemoryRange_obj *()
	{ return new ::openfl::_legacy::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::openfl::_legacy::utils::IDataInput_obj *()
	{ return new ::openfl::_legacy::utils::IDataInput_delegate_< ByteArray_obj >(this); }
void ByteArray_obj::__init__() {
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__init__",0x5474180e,"openfl._legacy.utils.ByteArray.__init__","openfl/_legacy/utils/ByteArray.hx",740,0x6d362251)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::openfl::_legacy::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/utils/ByteArray.hx",742,0x6d362251)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(742)
			::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new(length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(742)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(742)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 2; }
	Void run(::openfl::_legacy::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_legacy/utils/ByteArray.hx",743,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(745)
			bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(745)
			if ((tmp)){
				HX_STACK_LINE(747)
				int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(747)
				bytes->__Field(HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"), hx::paccDynamic )(tmp1,true);
			}
			HX_STACK_LINE(751)
			bytes->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(743)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 1; }
	Array< unsigned char > run(::openfl::_legacy::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/_legacy/utils/ByteArray.hx",755,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(755)
			bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(755)
			if ((tmp)){
				HX_STACK_LINE(755)
				return null();
			}
			else{
				HX_STACK_LINE(755)
				return bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(755)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(755)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int __ArgCount() const { return 1; }
	int run(::openfl::_legacy::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","openfl/_legacy/utils/ByteArray.hx",756,0x6d362251)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(756)
			bool tmp = (bytes1 == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(756)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(756)
			if ((tmp)){
				HX_STACK_LINE(756)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(756)
				tmp1 = bytes1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
			}
			HX_STACK_LINE(756)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(756)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(758)
	Dynamic tmp = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_byte_array_init","\xc1","\xc3","\xd7","\xb7"),(int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	Dynamic init = tmp;		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(759)
	Dynamic tmp1 = factory;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	Dynamic tmp2 = slen;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	Dynamic tmp3 = resize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	Dynamic tmp4 = bytes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	init(tmp1,tmp2,tmp3,tmp4);
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","asString",0xb4fe6e21,"openfl._legacy.utils.ByteArray.asString","openfl/_legacy/utils/ByteArray.hx",77,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","checkData",0xda7e4a94,"openfl._legacy.utils.ByteArray.checkData","openfl/_legacy/utils/ByteArray.hx",84,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(86)
		int tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(88)
			this->__throwEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","clear",0xa0f6340f,"openfl._legacy.utils.ByteArray.clear","openfl/_legacy/utils/ByteArray.hx",95,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->position = (int)0;
		HX_STACK_LINE(98)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","compress",0x98b78260,"openfl._legacy.utils.ByteArray.compress","openfl/_legacy/utils/ByteArray.hx",103,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(108)
		::openfl::_legacy::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(111)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(113)
			algorithm = ::openfl::_legacy::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(117)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(119)
		bool tmp1 = (algorithm == ::openfl::_legacy::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(121)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::openfl::_legacy::utils::ByteArray_obj::lime_lzma_encode(src->b));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			result = tmp2;
		}
		else{
			HX_STACK_LINE(125)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			if ((tmp2)){
				HX_STACK_LINE(125)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(127)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(128)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(129)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(129)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(125)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(136)
			::openfl::_legacy::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Compress_obj::run(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(136)
			result = tmp5;
		}
		HX_STACK_LINE(141)
		this->b = result->b;
		HX_STACK_LINE(142)
		this->length = result->length;
		HX_STACK_LINE(143)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		this->position = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","deflate",0x69abf26d,"openfl._legacy.utils.ByteArray.deflate","openfl/_legacy/utils/ByteArray.hx",153,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->compress(::openfl::_legacy::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","ensureElem",0x8db597ab,"openfl._legacy.utils.ByteArray.ensureElem","openfl/_legacy/utils/ByteArray.hx",158,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(159)
		int tmp = (size + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(171)
		int tmp1 = this->b->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(173)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			this->b->__SetSize(tmp4);
		}
		HX_STACK_LINE(178)
		bool tmp4 = updateLength;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		if ((tmp4)){
			HX_STACK_LINE(178)
			int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			tmp5 = (tmp7 < tmp8);
		}
		else{
			HX_STACK_LINE(178)
			tmp5 = false;
		}
		HX_STACK_LINE(178)
		if ((tmp5)){
			HX_STACK_LINE(180)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

::openfl::_legacy::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getByteBuffer",0x97cfb6e0,"openfl._legacy.utils.ByteArray.getByteBuffer","openfl/_legacy/utils/ByteArray.hx",198,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getLength",0x5f99499e,"openfl._legacy.utils.ByteArray.getLength","openfl/_legacy/utils/ByteArray.hx",203,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

Dynamic ByteArray_obj::getNativePointer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getNativePointer",0x8841622e,"openfl._legacy.utils.ByteArray.getNativePointer","openfl/_legacy/utils/ByteArray.hx",210,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	Dynamic tmp = ::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_get_native_pointer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getNativePointer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","getStart",0xf8dabeaa,"openfl._legacy.utils.ByteArray.getStart","openfl/_legacy/utils/ByteArray.hx",219,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","inflate",0xd2cd8389,"openfl._legacy.utils.ByteArray.inflate","openfl/_legacy/utils/ByteArray.hx",226,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->uncompress(::openfl::_legacy::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readBoolean",0xfae90df4,"openfl._legacy.utils.ByteArray.readBoolean","openfl/_legacy/utils/ByteArray.hx",231,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	if ((tmp2)){
		HX_STACK_LINE(233)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int tmp5 = (this->position)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(233)
			tmp4 = this->b->__get(pos);
		}
		HX_STACK_LINE(233)
		tmp3 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(233)
		int tmp4 = this->__throwEOFi();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		tmp3 = (tmp4 != (int)0);
	}
	HX_STACK_LINE(233)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readByte",0x7e13343c,"openfl._legacy.utils.ByteArray.readByte","openfl/_legacy/utils/ByteArray.hx",238,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	if ((tmp2)){
		HX_STACK_LINE(240)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(240)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(240)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(240)
	int value = tmp3;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(241)
	int tmp4 = (int(value) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(241)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(241)
	if ((tmp5)){
		HX_STACK_LINE(241)
		tmp6 = (value - (int)256);
	}
	else{
		HX_STACK_LINE(241)
		tmp6 = value;
	}
	HX_STACK_LINE(241)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::openfl::_legacy::utils::ByteArray data,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readBytes",0xd2ba80b7,"openfl._legacy.utils.ByteArray.readBytes","openfl/_legacy/utils/ByteArray.hx",246,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(248)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		if ((tmp)){
			HX_STACK_LINE(250)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			length = tmp3;
		}
		HX_STACK_LINE(254)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp5)){
			HX_STACK_LINE(256)
			this->__throwEOFi();
		}
		HX_STACK_LINE(260)
		int tmp6 = data->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		if ((tmp8)){
			HX_STACK_LINE(262)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(262)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(262)
			data->ensureElem(tmp10,true);
		}
		HX_STACK_LINE(269)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(270)
		Array< unsigned char > b2 = data->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(271)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(271)
		int p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(272)
		{
			HX_STACK_LINE(272)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			while((true)){
				HX_STACK_LINE(272)
				bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(272)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(272)
				if ((tmp11)){
					HX_STACK_LINE(272)
					break;
				}
				HX_STACK_LINE(272)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(272)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(274)
				int tmp13 = (offset + i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(274)
				int tmp14 = (p + i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(274)
				unsigned char tmp15 = b1->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(274)
				b2[tmp13] = tmp15;
			}
		}
		HX_STACK_LINE(279)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readDouble",0x9bd1f545,"openfl._legacy.utils.ByteArray.readDouble","openfl/_legacy/utils/ByteArray.hx",284,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	if ((tmp3)){
		HX_STACK_LINE(288)
		this->__throwEOFi();
	}
	HX_STACK_LINE(295)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(295)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(295)
	int tmp6 = (tmp5 + (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(295)
	::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::__new((int)8,this->b->slice(tmp4,tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(295)
	::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(304)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(305)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(305)
	Float tmp9 = ::openfl::_legacy::utils::ByteArray_obj::_double_of_bytes(bytes->b,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(305)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readFloat",0x17b93de8,"openfl._legacy.utils.ByteArray.readFloat","openfl/_legacy/utils/ByteArray.hx",321,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(323)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	if ((tmp3)){
		HX_STACK_LINE(325)
		this->__throwEOFi();
	}
	HX_STACK_LINE(332)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(332)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(332)
	int tmp6 = (tmp5 + (int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(332)
	::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::__new((int)4,this->b->slice(tmp4,tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(332)
	::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(341)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(342)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(342)
	Float tmp9 = ::openfl::_legacy::utils::ByteArray_obj::_float_of_bytes(bytes->b,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(342)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readInt",0xc97b9a3b,"openfl._legacy.utils.ByteArray.readInt","openfl/_legacy/utils/ByteArray.hx",347,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(349)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	if ((tmp2)){
		HX_STACK_LINE(349)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(349)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(349)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(349)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(349)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(350)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(350)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(350)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(350)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(350)
	if ((tmp6)){
		HX_STACK_LINE(350)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(350)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(350)
		tmp7 = this->__throwEOFi();
	}
	HX_STACK_LINE(350)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(351)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(351)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(351)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(351)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(351)
	if ((tmp10)){
		HX_STACK_LINE(351)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(351)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(351)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(351)
		tmp11 = this->__throwEOFi();
	}
	HX_STACK_LINE(351)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(352)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(352)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(352)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(352)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(352)
	if ((tmp14)){
		HX_STACK_LINE(352)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(352)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(352)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(352)
		tmp15 = this->__throwEOFi();
	}
	HX_STACK_LINE(352)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(354)
	bool tmp16 = this->bigEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(354)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(354)
	if ((tmp16)){
		HX_STACK_LINE(354)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(354)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(354)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(354)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(354)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(354)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(354)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(354)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(354)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(354)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(354)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(354)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(354)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(354)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(354)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readMultiByte",0xa88d946d,"openfl._legacy.utils.ByteArray.readMultiByte","openfl/_legacy/utils/ByteArray.hx",359,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(361)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

Void ByteArray_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeMultiByte",0xc4f34280,"openfl._legacy.utils.ByteArray.writeMultiByte","openfl/_legacy/utils/ByteArray.hx",365,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(366)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		this->writeUTFBytes(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,writeMultiByte,(void))

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readShort",0x9149fcc8,"openfl._legacy.utils.ByteArray.readShort","openfl/_legacy/utils/ByteArray.hx",369,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(371)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	if ((tmp2)){
		HX_STACK_LINE(371)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(371)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(371)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(371)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(371)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(372)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(372)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(372)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(372)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(372)
	if ((tmp6)){
		HX_STACK_LINE(372)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(372)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(372)
		tmp7 = this->__throwEOFi();
	}
	HX_STACK_LINE(372)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(374)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(374)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(374)
	if ((tmp8)){
		HX_STACK_LINE(374)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(374)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(374)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(374)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(374)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(374)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(374)
	int value = tmp9;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(376)
	int tmp10 = (int(value) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(376)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(376)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(376)
	if ((tmp11)){
		HX_STACK_LINE(376)
		tmp12 = (value - (int)65536);
	}
	else{
		HX_STACK_LINE(376)
		tmp12 = value;
	}
	HX_STACK_LINE(376)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedByte",0xa9bc33d1,"openfl._legacy.utils.ByteArray.readUnsignedByte","openfl/_legacy/utils/ByteArray.hx",381,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(383)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(383)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(383)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(383)
	if ((tmp2)){
		HX_STACK_LINE(383)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(383)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(383)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(383)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(383)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedInt",0xe0a36446,"openfl._legacy.utils.ByteArray.readUnsignedInt","openfl/_legacy/utils/ByteArray.hx",388,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(390)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(390)
	if ((tmp2)){
		HX_STACK_LINE(390)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(390)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(390)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(390)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(391)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(391)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(391)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(391)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(391)
	if ((tmp6)){
		HX_STACK_LINE(391)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(391)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(391)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(391)
		tmp7 = this->__throwEOFi();
	}
	HX_STACK_LINE(391)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(392)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(392)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(392)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(392)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(392)
	if ((tmp10)){
		HX_STACK_LINE(392)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(392)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(392)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(392)
		tmp11 = this->__throwEOFi();
	}
	HX_STACK_LINE(392)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(393)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(393)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(393)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(393)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(393)
	if ((tmp14)){
		HX_STACK_LINE(393)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(393)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(393)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(393)
		tmp15 = this->__throwEOFi();
	}
	HX_STACK_LINE(393)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(395)
	bool tmp16 = this->bigEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(395)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(395)
	if ((tmp16)){
		HX_STACK_LINE(395)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(395)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(395)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(395)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(395)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(395)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(395)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(395)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(395)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(395)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(395)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(395)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(395)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(395)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(395)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUnsignedShort",0x99809f93,"openfl._legacy.utils.ByteArray.readUnsignedShort","openfl/_legacy/utils/ByteArray.hx",400,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(402)
	if ((tmp2)){
		HX_STACK_LINE(402)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(402)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(402)
		tmp3 = this->__throwEOFi();
	}
	HX_STACK_LINE(402)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(403)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(403)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(403)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(403)
	if ((tmp6)){
		HX_STACK_LINE(403)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(403)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(403)
		tmp7 = this->__throwEOFi();
	}
	HX_STACK_LINE(403)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(405)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(405)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(405)
	if ((tmp8)){
		HX_STACK_LINE(405)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(405)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		tmp9 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(405)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUTF",0xc9849e73,"openfl._legacy.utils.ByteArray.readUTF","openfl/_legacy/utils/ByteArray.hx",410,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	int len = tmp;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(413)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(413)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUTFBytes",0xe6ce98f8,"openfl._legacy.utils.ByteArray.readUTFBytes","openfl/_legacy/utils/ByteArray.hx",418,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(420)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(420)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(420)
	if ((tmp4)){
		HX_STACK_LINE(422)
		this->__throwEOFi();
	}
	HX_STACK_LINE(426)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(426)
	int p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(427)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(436)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(437)
	::__hxcpp_string_of_bytes(this->b,result,p,length);
	HX_STACK_LINE(438)
	::String tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(438)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","setLength",0x42ea35aa,"openfl._legacy.utils.ByteArray.setLength","openfl/_legacy/utils/ByteArray.hx",448,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(450)
		bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		if ((tmp)){
			HX_STACK_LINE(452)
			int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(452)
			this->ensureElem(tmp1,false);
		}
		HX_STACK_LINE(456)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::openfl::_legacy::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic end){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","slice",0xd76286d4,"openfl._legacy.utils.ByteArray.slice","openfl/_legacy/utils/ByteArray.hx",461,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(463)
	bool tmp = (begin < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	if ((tmp)){
		HX_STACK_LINE(465)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		hx::AddEq(begin,tmp1);
		HX_STACK_LINE(467)
		bool tmp2 = (begin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		if ((tmp2)){
			HX_STACK_LINE(469)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(475)
	bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(475)
	if ((tmp1)){
		HX_STACK_LINE(477)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		end = tmp2;
	}
	HX_STACK_LINE(481)
	bool tmp2 = (end < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(481)
	if ((tmp2)){
		HX_STACK_LINE(483)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		hx::AddEq(end,tmp3);
		HX_STACK_LINE(485)
		bool tmp4 = (end < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		if ((tmp4)){
			HX_STACK_LINE(487)
			end = (int)0;
		}
	}
	HX_STACK_LINE(493)
	bool tmp3 = (begin >= end);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(493)
	if ((tmp3)){
		HX_STACK_LINE(495)
		::openfl::_legacy::utils::ByteArray tmp4 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		return tmp4;
	}
	HX_STACK_LINE(499)
	int tmp4 = (end - begin);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(499)
	::openfl::_legacy::utils::ByteArray tmp5 = ::openfl::_legacy::utils::ByteArray_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(499)
	::openfl::_legacy::utils::ByteArray result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(501)
	int tmp6 = this->position;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(501)
	int opos = tmp6;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(502)
	int tmp7 = begin;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(502)
	int tmp8 = (end - begin);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(502)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
	HX_STACK_LINE(504)
	::openfl::_legacy::utils::ByteArray tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(504)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

Void ByteArray_obj::uncompress( ::openfl::_legacy::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","uncompress",0x790e1539,"openfl._legacy.utils.ByteArray.uncompress","openfl/_legacy/utils/ByteArray.hx",509,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(511)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		if ((tmp)){
			HX_STACK_LINE(511)
			algorithm = ::openfl::_legacy::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(516)
		::openfl::_legacy::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(519)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(521)
		bool tmp1 = (algorithm == ::openfl::_legacy::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		if ((tmp1)){
			HX_STACK_LINE(523)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::openfl::_legacy::utils::ByteArray_obj::lime_lzma_decode(src->b));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(523)
			result = tmp2;
		}
		else{
			HX_STACK_LINE(527)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			if ((tmp2)){
				HX_STACK_LINE(527)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(529)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(530)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(531)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(531)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(527)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(538)
			::openfl::_legacy::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(538)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Uncompress_obj::run(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(538)
			result = tmp5;
		}
		HX_STACK_LINE(543)
		this->b = result->b;
		HX_STACK_LINE(544)
		this->length = result->length;
		HX_STACK_LINE(545)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","write_uncheck",0xf8b3e1b1,"openfl._legacy.utils.ByteArray.write_uncheck","openfl/_legacy/utils/ByteArray.hx",553,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(556)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		int tmp1 = byte;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		this->b->__unsafe_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeBoolean",0xd7ed0147,"openfl._legacy.utils.ByteArray.writeBoolean","openfl/_legacy/utils/ByteArray.hx",568,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(568)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(568)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		if ((tmp2)){
			HX_STACK_LINE(568)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(568)
			tmp3 = (int)0;
		}
		HX_STACK_LINE(568)
		this->b[tmp1] = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeObject( Dynamic object){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeObject",0xd4376100,"openfl._legacy.utils.ByteArray.writeObject","openfl/_legacy/utils/ByteArray.hx",571,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeObject,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeByte",0x8e123f09,"openfl._legacy.utils.ByteArray.writeByte","openfl/_legacy/utils/ByteArray.hx",576,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(578)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(578)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(583)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		unsigned char tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(583)
		this->b[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeBytes",0xc1e4e94a,"openfl._legacy.utils.ByteArray.writeBytes","openfl/_legacy/utils/ByteArray.hx",591,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(593)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(593)
		if ((tmp)){
			HX_STACK_LINE(593)
			int tmp1 = (bytes->length - offset);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(593)
			length = tmp1;
		}
		HX_STACK_LINE(594)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		this->ensureElem(tmp4,true);
		HX_STACK_LINE(595)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(595)
		int opos = tmp5;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(596)
		hx::AddEq(this->position,length);
		HX_STACK_LINE(597)
		int tmp6 = opos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(597)
		::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(597)
		int tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(597)
		int tmp9 = length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		this->blit(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeDouble",0xf1c30d52,"openfl._legacy.utils.ByteArray.writeDouble","openfl/_legacy/utils/ByteArray.hx",602,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(607)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		bool tmp1 = this->bigEndian;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::openfl::_legacy::utils::ByteArray_obj::_double_bytes(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(607)
		::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(610)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		this->writeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeFile",0x90aaee7d,"openfl._legacy.utils.ByteArray.writeFile","openfl/_legacy/utils/ByteArray.hx",617,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(619)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(619)
		::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_overwrite_file(tmp,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeFloat",0x06e3a67b,"openfl._legacy.utils.ByteArray.writeFloat","openfl/_legacy/utils/ByteArray.hx",626,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(629)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(629)
		bool tmp1 = this->bigEndian;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(629)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::openfl::_legacy::utils::ByteArray_obj::_float_bytes(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(629)
		::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(634)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(634)
		this->writeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeInt",0x38e8a80e,"openfl._legacy.utils.ByteArray.writeInt","openfl/_legacy/utils/ByteArray.hx",639,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(641)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(641)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(643)
		bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		if ((tmp2)){
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(645)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(645)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(646)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(646)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(647)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(647)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(647)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(648)
			{
				HX_STACK_LINE(648)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(648)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(648)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(652)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(652)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(653)
			{
				HX_STACK_LINE(653)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(653)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(653)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(654)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(654)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(654)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(655)
			{
				HX_STACK_LINE(655)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(655)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(655)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeShort",0x8074655b,"openfl._legacy.utils.ByteArray.writeShort","openfl/_legacy/utils/ByteArray.hx",662,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(664)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(666)
		bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(666)
		if ((tmp2)){
			HX_STACK_LINE(668)
			{
				HX_STACK_LINE(668)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(668)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(668)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(669)
			{
				HX_STACK_LINE(669)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(669)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(669)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(673)
			{
				HX_STACK_LINE(673)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(673)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(673)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(674)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(674)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUnsignedInt",0x245efd19,"openfl._legacy.utils.ByteArray.writeUnsignedInt","openfl/_legacy/utils/ByteArray.hx",681,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(683)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(683)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUTF",0x38f1ac46,"openfl._legacy.utils.ByteArray.writeUTF","openfl/_legacy/utils/ByteArray.hx",688,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(693)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(693)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(693)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(696)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		this->writeShort(tmp2);
		HX_STACK_LINE(697)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		this->writeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUTFBytes",0x6d3f8e45,"openfl._legacy.utils.ByteArray.writeUTFBytes","openfl/_legacy/utils/ByteArray.hx",702,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(707)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(707)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(707)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(710)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(710)
		this->writeBytes(tmp2,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__fromBytes",0xca4bcb83,"openfl._legacy.utils.ByteArray.__fromBytes","openfl/_legacy/utils/ByteArray.hx",715,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(717)
		this->b = bytes->b;
		HX_STACK_LINE(718)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__get",0x4ac5a3f8,"openfl._legacy.utils.ByteArray.__get","openfl/_legacy/utils/ByteArray.hx",727,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(730)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__set",0x4acebf04,"openfl._legacy.utils.ByteArray.__set","openfl/_legacy/utils/ByteArray.hx",766,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(769)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

int ByteArray_obj::__throwEOFi( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__throwEOFi",0xc2bfa955,"openfl._legacy.utils.ByteArray.__throwEOFi","openfl/_legacy/utils/ByteArray.hx",777,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(779)
	::openfl::errors::EOFError tmp = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(779)
	HX_STACK_DO_THROW(tmp);
	HX_STACK_LINE(780)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__throwEOFi,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_bytesAvailable",0x3b8f80e5,"openfl._legacy.utils.ByteArray.get_bytesAvailable","openfl/_legacy/utils/ByteArray.hx",792,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(792)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(792)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(792)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(792)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_byteLength",0xc5cf8395,"openfl._legacy.utils.ByteArray.get_byteLength","openfl/_legacy/utils/ByteArray.hx",793,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(793)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(793)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","get_endian",0x5a9aeea2,"openfl._legacy.utils.ByteArray.get_endian","openfl/_legacy/utils/ByteArray.hx",794,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(794)
	bool tmp = this->bigEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(794)
	if ((tmp)){
		HX_STACK_LINE(794)
		tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	}
	else{
		HX_STACK_LINE(794)
		tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
	}
	HX_STACK_LINE(794)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String value){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","set_endian",0x5e188d16,"openfl._legacy.utils.ByteArray.set_endian","openfl/_legacy/utils/ByteArray.hx",795,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(795)
	bool tmp = (value == HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(795)
	this->bigEndian = tmp;
	HX_STACK_LINE(795)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(795)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::openfl::_legacy::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","fromBytes",0xb65c1e23,"openfl._legacy.utils.ByteArray.fromBytes","openfl/_legacy/utils/ByteArray.hx",187,0x6d362251)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(189)
	::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::openfl::_legacy::utils::ByteArray result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		result->b = bytes->b;
		HX_STACK_LINE(190)
		result->length = bytes->length;
	}
	HX_STACK_LINE(191)
	::openfl::_legacy::utils::ByteArray tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::openfl::_legacy::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readFile",0x80abe3b0,"openfl._legacy.utils.ByteArray.readFile","openfl/_legacy/utils/ByteArray.hx",312,0x6d362251)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(314)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	::openfl::_legacy::utils::ByteArray tmp1 = ::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_read_file(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(314)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_byte_array_get_native_pointer;

Dynamic ByteArray_obj::lime_lzma_encode;

Dynamic ByteArray_obj::lime_lzma_decode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp == hx::paccAlways ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return writeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__throwEOFi") ) { return __throwEOFi_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp == hx::paccAlways ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { outValue = _float_bytes; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { outValue = _double_bytes; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { outValue = _float_of_bytes; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { outValue = _double_of_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { outValue = lime_byte_array_read_file; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { outValue = lime_byte_array_overwrite_file; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { outValue = lime_byte_array_get_native_pointer; return true;  }
	}
	return false;
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { lime_byte_array_get_native_pointer=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_double_bytes,HX_HCSTRING("_double_bytes","\x5c","\x30","\xd8","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_double_of_bytes,HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_float_bytes,HX_HCSTRING("_float_bytes","\x49","\xe0","\x15","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_float_of_bytes,HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_overwrite_file,HX_HCSTRING("lime_byte_array_overwrite_file","\x83","\x8f","\x35","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_read_file,HX_HCSTRING("lime_byte_array_read_file","\x12","\xa8","\x42","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_get_native_pointer,HX_HCSTRING("lime_byte_array_get_native_pointer","\x31","\xd1","\xd0","\x83")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_lzma_encode,HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_lzma_decode,HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("asString","\x63","\x33","\x06","\xa0"),
	HX_HCSTRING("checkData","\x12","\x1f","\x43","\x96"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getNativePointer","\x70","\x39","\x53","\x7a"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("writeMultiByte","\x42","\x65","\x25","\xec"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("write_uncheck","\x2f","\xcd","\xef","\x65"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeObject","\xfe","\xd0","\x38","\xaa"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFile","\xfb","\xc2","\x6f","\x4c"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("__throwEOFi","\x53","\x19","\xc1","\x98"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#endif

hx::Class ByteArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("_double_bytes","\x5c","\x30","\xd8","\x56"),
	HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d"),
	HX_HCSTRING("_float_bytes","\x49","\xe0","\x15","\x92"),
	HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f"),
	HX_HCSTRING("lime_byte_array_overwrite_file","\x83","\x8f","\x35","\xd0"),
	HX_HCSTRING("lime_byte_array_read_file","\x12","\xa8","\x42","\x82"),
	HX_HCSTRING("lime_byte_array_get_native_pointer","\x31","\xd1","\xd0","\x83"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	::String(null()) };

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.ByteArray","\x70","\x75","\x06","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArray_obj >;
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

void ByteArray_obj::__boot()
{
	_double_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("double_bytes","\x7d","\x9d","\x69","\x74"),(int)2);
	_double_of_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("double_of_bytes","\x31","\x7e","\x6b","\x42"),(int)2);
	_float_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("float_bytes","\x48","\x32","\x0c","\x2c"),(int)2);
	_float_of_bytes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("float_of_bytes","\x46","\xba","\xcb","\xd5"),(int)2);
	lime_byte_array_overwrite_file= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_byte_array_overwrite_file","\x61","\x27","\xb3","\xcb"),(int)2);
	lime_byte_array_read_file= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_byte_array_read_file","\xf4","\x1c","\x28","\xeb"),(int)1);
	lime_byte_array_get_native_pointer= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_byte_array_get_native_pointer","\x0f","\xb0","\x5a","\xd6"),(int)1);
	lime_lzma_encode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_lzma_encode","\x87","\x96","\xc6","\x16"),(int)1);
	lime_lzma_decode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_lzma_decode","\x9f","\x01","\xd0","\x81"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
