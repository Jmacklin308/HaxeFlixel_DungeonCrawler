// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context
#define INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e453a9408eead012_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_surfaceless_context)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_surfaceless_context_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_surfaceless_context_obj OBJ_;
		OES_surfaceless_context_obj();

	public:
		enum { _hx_ClassId = 0x71571bc2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_surfaceless_context")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_surfaceless_context"); }

		inline static ::hx::ObjectPtr< OES_surfaceless_context_obj > __new() {
			::hx::ObjectPtr< OES_surfaceless_context_obj > __this = new OES_surfaceless_context_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_surfaceless_context_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_surfaceless_context_obj *__this = (OES_surfaceless_context_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_surfaceless_context_obj), false, "lime.graphics.opengl.ext.OES_surfaceless_context"));
			*(void **)__this = OES_surfaceless_context_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e453a9408eead012_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::OES_surfaceless_context)(__this) )->FRAMEBUFFER_UNDEFINED_OES = 33305;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_surfaceless_context_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_surfaceless_context",74,4b,ea,b9); }

		int FRAMEBUFFER_UNDEFINED_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_surfaceless_context */ 
