// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_half_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_half_float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15fbe66fa7b31d40_5_new,"lime.graphics.opengl.ext.EXT_color_buffer_half_float","new",0x4f3c63e5,"lime.graphics.opengl.ext.EXT_color_buffer_half_float.new","lime/graphics/opengl/ext/EXT_color_buffer_half_float.hx",5,0x98cfc34d)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_color_buffer_half_float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_15fbe66fa7b31d40_5_new)
HXLINE(  14)		this->UNSIGNED_NORMALIZED_EXT = 35863;
HXLINE(  13)		this->FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = 33297;
HXLINE(  11)		this->R16F_EXT = 33325;
HXLINE(  10)		this->RG16F_EXT = 33327;
HXLINE(   8)		this->RGB16F_EXT = 34843;
HXLINE(   7)		this->RGBA16F_EXT = 34842;
            	}

Dynamic EXT_color_buffer_half_float_obj::__CreateEmpty() { return new EXT_color_buffer_half_float_obj; }

void *EXT_color_buffer_half_float_obj::_hx_vtable = 0;

Dynamic EXT_color_buffer_half_float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_color_buffer_half_float_obj > _hx_result = new EXT_color_buffer_half_float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_color_buffer_half_float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6360f823;
}


EXT_color_buffer_half_float_obj::EXT_color_buffer_half_float_obj()
{
}

::hx::Val EXT_color_buffer_half_float_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { return ::hx::Val( R16F_EXT ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { return ::hx::Val( RG16F_EXT ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { return ::hx::Val( RGB16F_EXT ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { return ::hx::Val( RGBA16F_EXT ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED_EXT") ) { return ::hx::Val( UNSIGNED_NORMALIZED_EXT ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT") ) { return ::hx::Val( FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_color_buffer_half_float_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"R16F_EXT") ) { R16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RG16F_EXT") ) { RG16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RGB16F_EXT") ) { RGB16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGBA16F_EXT") ) { RGBA16F_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"UNSIGNED_NORMALIZED_EXT") ) { UNSIGNED_NORMALIZED_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT") ) { FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_color_buffer_half_float_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RGBA16F_EXT",8f,65,df,9d));
	outFields->push(HX_("RGB16F_EXT",76,b0,bd,f1));
	outFields->push(HX_("RG16F_EXT",ae,08,3f,88));
	outFields->push(HX_("R16F_EXT",b1,4d,16,6c));
	outFields->push(HX_("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT",48,84,fe,43));
	outFields->push(HX_("UNSIGNED_NORMALIZED_EXT",83,60,c1,33));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_color_buffer_half_float_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RGBA16F_EXT),HX_("RGBA16F_EXT",8f,65,df,9d)},
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RGB16F_EXT),HX_("RGB16F_EXT",76,b0,bd,f1)},
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,RG16F_EXT),HX_("RG16F_EXT",ae,08,3f,88)},
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,R16F_EXT),HX_("R16F_EXT",b1,4d,16,6c)},
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT),HX_("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT",48,84,fe,43)},
	{::hx::fsInt,(int)offsetof(EXT_color_buffer_half_float_obj,UNSIGNED_NORMALIZED_EXT),HX_("UNSIGNED_NORMALIZED_EXT",83,60,c1,33)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_color_buffer_half_float_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_color_buffer_half_float_obj_sMemberFields[] = {
	HX_("RGBA16F_EXT",8f,65,df,9d),
	HX_("RGB16F_EXT",76,b0,bd,f1),
	HX_("RG16F_EXT",ae,08,3f,88),
	HX_("R16F_EXT",b1,4d,16,6c),
	HX_("FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT",48,84,fe,43),
	HX_("UNSIGNED_NORMALIZED_EXT",83,60,c1,33),
	::String(null()) };

::hx::Class EXT_color_buffer_half_float_obj::__mClass;

void EXT_color_buffer_half_float_obj::__register()
{
	EXT_color_buffer_half_float_obj _hx_dummy;
	EXT_color_buffer_half_float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_color_buffer_half_float",73,8d,21,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_color_buffer_half_float_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_color_buffer_half_float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_color_buffer_half_float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_color_buffer_half_float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
