// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DSimpleButton
#include <openfl/display/_internal/Context3DSimpleButton.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_11fef1fbd1a45aea_11_renderDrawable,"openfl.display._internal.Context3DSimpleButton","renderDrawable",0x62dbb2fa,"openfl.display._internal.Context3DSimpleButton.renderDrawable","openfl/display/_internal/Context3DSimpleButton.hx",11,0xea7aa479)
HX_LOCAL_STACK_FRAME(_hx_pos_11fef1fbd1a45aea_22_renderDrawableMask,"openfl.display._internal.Context3DSimpleButton","renderDrawableMask",0xe4f92506,"openfl.display._internal.Context3DSimpleButton.renderDrawableMask","openfl/display/_internal/Context3DSimpleButton.hx",22,0xea7aa479)
namespace openfl{
namespace display{
namespace _internal{

void Context3DSimpleButton_obj::__construct() { }

Dynamic Context3DSimpleButton_obj::__CreateEmpty() { return new Context3DSimpleButton_obj; }

void *Context3DSimpleButton_obj::_hx_vtable = 0;

Dynamic Context3DSimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DSimpleButton_obj > _hx_result = new Context3DSimpleButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DSimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66cc04f2;
}

void Context3DSimpleButton_obj::renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_11fef1fbd1a45aea_11_renderDrawable)
HXLINE(  12)		bool _hx_tmp;
HXDLIN(  12)		bool _hx_tmp1;
HXDLIN(  12)		if (simpleButton->_hx___renderable) {
HXLINE(  12)			_hx_tmp1 = (simpleButton->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  12)			_hx_tmp1 = true;
            		}
HXDLIN(  12)		if (!(_hx_tmp1)) {
HXLINE(  12)			_hx_tmp = ::hx::IsNull( simpleButton->_hx___currentState );
            		}
            		else {
HXLINE(  12)			_hx_tmp = true;
            		}
HXDLIN(  12)		if (_hx_tmp) {
HXLINE(  12)			return;
            		}
HXLINE(  14)		renderer->_hx___pushMaskObject(simpleButton,null());
HXLINE(  15)		renderer->_hx___renderDrawable(simpleButton->_hx___currentState);
HXLINE(  16)		renderer->_hx___popMaskObject(simpleButton,null());
HXLINE(  18)		renderer->_hx___renderEvent(simpleButton);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DSimpleButton_obj,renderDrawable,(void))

void Context3DSimpleButton_obj::renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_11fef1fbd1a45aea_22_renderDrawableMask)
HXLINE(  23)		if (::hx::IsNull( simpleButton->_hx___currentState )) {
HXLINE(  23)			return;
            		}
HXLINE(  25)		renderer->_hx___renderDrawableMask(simpleButton->_hx___currentState);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DSimpleButton_obj,renderDrawableMask,(void))


Context3DSimpleButton_obj::Context3DSimpleButton_obj()
{
}

bool Context3DSimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DSimpleButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DSimpleButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DSimpleButton_obj::__mClass;

static ::String Context3DSimpleButton_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void Context3DSimpleButton_obj::__register()
{
	Context3DSimpleButton_obj _hx_dummy;
	Context3DSimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DSimpleButton",c8,db,19,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DSimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DSimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DSimpleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DSimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DSimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
