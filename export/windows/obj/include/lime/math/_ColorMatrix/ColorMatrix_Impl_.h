// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#define INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,math,_ColorMatrix,ColorMatrix_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace math{
namespace _ColorMatrix{


class HXCPP_CLASS_ATTRIBUTES ColorMatrix_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorMatrix_Impl__obj OBJ_;
		ColorMatrix_Impl__obj();

	public:
		enum { _hx_ClassId = 0x42e0099e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math._ColorMatrix.ColorMatrix_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math._ColorMatrix.ColorMatrix_Impl_"); }

		inline static ::hx::ObjectPtr< ColorMatrix_Impl__obj > __new() {
			::hx::ObjectPtr< ColorMatrix_Impl__obj > __this = new ColorMatrix_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ColorMatrix_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ColorMatrix_Impl__obj *__this = (ColorMatrix_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorMatrix_Impl__obj), false, "lime.math._ColorMatrix.ColorMatrix_Impl_"));
			*(void **)__this = ColorMatrix_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorMatrix_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorMatrix_Impl_",84,9f,1b,e3); }

		static void __boot();
		static  ::lime::utils::ArrayBufferView _hx___alphaTable;
		static  ::lime::utils::ArrayBufferView _hx___blueTable;
		static  ::lime::utils::ArrayBufferView _hx___greenTable;
		static ::Array< Float > _hx___identity;
		static  ::lime::utils::ArrayBufferView _hx___redTable;
		static  ::lime::utils::ArrayBufferView _new( ::lime::utils::ArrayBufferView data);
		static ::Dynamic _new_dyn();

		static  ::lime::utils::ArrayBufferView clone( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic clone_dyn();

		static void concat( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView second);
		static ::Dynamic concat_dyn();

		static void copyFrom( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView other);
		static ::Dynamic copyFrom_dyn();

		static void identity( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic identity_dyn();

		static  ::lime::utils::ArrayBufferView getAlphaTable( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic getAlphaTable_dyn();

		static  ::lime::utils::ArrayBufferView getBlueTable( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic getBlueTable_dyn();

		static  ::lime::utils::ArrayBufferView getGreenTable( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic getGreenTable_dyn();

		static  ::lime::utils::ArrayBufferView getRedTable( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic getRedTable_dyn();

		static  ::Dynamic _hx___toFlashColorTransform( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic _hx___toFlashColorTransform_dyn();

		static Float get_alphaMultiplier( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_alphaMultiplier_dyn();

		static Float set_alphaMultiplier( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_alphaMultiplier_dyn();

		static Float get_alphaOffset( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_alphaOffset_dyn();

		static Float set_alphaOffset( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_alphaOffset_dyn();

		static Float get_blueMultiplier( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_blueMultiplier_dyn();

		static Float set_blueMultiplier( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_blueMultiplier_dyn();

		static Float get_blueOffset( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_blueOffset_dyn();

		static Float set_blueOffset( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_blueOffset_dyn();

		static int get_color( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_color_dyn();

		static int set_color( ::lime::utils::ArrayBufferView this1,int value);
		static ::Dynamic set_color_dyn();

		static Float get_greenMultiplier( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_greenMultiplier_dyn();

		static Float set_greenMultiplier( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_greenMultiplier_dyn();

		static Float get_greenOffset( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_greenOffset_dyn();

		static Float set_greenOffset( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_greenOffset_dyn();

		static Float get_redMultiplier( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_redMultiplier_dyn();

		static Float set_redMultiplier( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_redMultiplier_dyn();

		static Float get_redOffset( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_redOffset_dyn();

		static Float set_redOffset( ::lime::utils::ArrayBufferView this1,Float value);
		static ::Dynamic set_redOffset_dyn();

		static Float get( ::lime::utils::ArrayBufferView this1,int index);
		static ::Dynamic get_dyn();

		static Float set( ::lime::utils::ArrayBufferView this1,int index,Float value);
		static ::Dynamic set_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix

#endif /* INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_ */ 