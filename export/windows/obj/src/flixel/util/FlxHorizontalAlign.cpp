// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::CENTER;

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::LEFT;

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::RIGHT;

bool FlxHorizontalAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = FlxHorizontalAlign_obj::CENTER; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = FlxHorizontalAlign_obj::LEFT; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = FlxHorizontalAlign_obj::RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxHorizontalAlign_obj)

int FlxHorizontalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 1;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 2;
	return super::__FindIndex(inName);
}

int FlxHorizontalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxHorizontalAlign_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String FlxHorizontalAlign_obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("RIGHT",bc,43,52,67),
	::String(null())
};

::hx::Class FlxHorizontalAlign_obj::__mClass;

Dynamic __Create_FlxHorizontalAlign_obj() { return new FlxHorizontalAlign_obj; }

void FlxHorizontalAlign_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.util.FlxHorizontalAlign",e9,17,b2,1a), ::hx::TCanCast< FlxHorizontalAlign_obj >,FlxHorizontalAlign_obj_sStaticFields,0,
	&__Create_FlxHorizontalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateFlxHorizontalAlign_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxHorizontalAlign_obj::__GetStatic;
}

void FlxHorizontalAlign_obj::__boot()
{
CENTER = ::hx::CreateConstEnum< FlxHorizontalAlign_obj >(HX_("CENTER",d5,d1,5d,b8),1);
LEFT = ::hx::CreateConstEnum< FlxHorizontalAlign_obj >(HX_("LEFT",07,d0,70,32),0);
RIGHT = ::hx::CreateConstEnum< FlxHorizontalAlign_obj >(HX_("RIGHT",bc,43,52,67),2);
}


} // end namespace flixel
} // end namespace util
