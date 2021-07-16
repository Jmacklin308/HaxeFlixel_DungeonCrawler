// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_lime_utils__Int8Array_Int8Array_Impl_
#define INCLUDED_lime_utils__Int8Array_Int8Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS3(lime,utils,_Int8Array,Int8Array_Impl_)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)

namespace lime{
namespace utils{
namespace _Int8Array{


class HXCPP_CLASS_ATTRIBUTES Int8Array_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Int8Array_Impl__obj OBJ_;
		Int8Array_Impl__obj();

	public:
		enum { _hx_ClassId = 0x475b774b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._Int8Array.Int8Array_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils._Int8Array.Int8Array_Impl_"); }

		inline static ::hx::ObjectPtr< Int8Array_Impl__obj > __new() {
			::hx::ObjectPtr< Int8Array_Impl__obj > __this = new Int8Array_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Int8Array_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Int8Array_Impl__obj *__this = (Int8Array_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Int8Array_Impl__obj), false, "lime.utils._Int8Array.Int8Array_Impl_"));
			*(void **)__this = Int8Array_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Int8Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Int8Array_Impl_",f0,34,c2,08); }

		static void __boot();
		static int BYTES_PER_ELEMENT;
		static  ::lime::utils::ArrayBufferView _new( ::Dynamic elements, ::haxe::io::Bytes buffer,::cpp::VirtualArray array, ::openfl::_Vector::IntVector vector, ::lime::utils::ArrayBufferView view, ::Dynamic byteoffset, ::Dynamic len);
		static ::Dynamic _new_dyn();

		static  ::lime::utils::ArrayBufferView subarray( ::lime::utils::ArrayBufferView this1,int begin, ::Dynamic end);
		static ::Dynamic subarray_dyn();

		static  ::lime::utils::ArrayBufferView fromBytes( ::haxe::io::Bytes bytes, ::Dynamic byteOffset, ::Dynamic len);
		static ::Dynamic fromBytes_dyn();

		static  ::haxe::io::Bytes toBytes( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic toBytes_dyn();

		static int get_length( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_length_dyn();

		static ::String toString( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _Int8Array

#endif /* INCLUDED_lime_utils__Int8Array_Int8Array_Impl_ */ 