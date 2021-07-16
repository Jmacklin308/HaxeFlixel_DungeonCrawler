// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
namespace flixel{

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::LOCKON;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::NO_DEAD_ZONE;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::PLATFORMER;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN_TIGHT;

bool FlxCameraFollowStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LOCKON",ca,b9,49,0c)) { outValue = FlxCameraFollowStyle_obj::LOCKON; return true; }
	if (inName==HX_("NO_DEAD_ZONE",29,d8,53,49)) { outValue = FlxCameraFollowStyle_obj::NO_DEAD_ZONE; return true; }
	if (inName==HX_("PLATFORMER",e0,d1,db,91)) { outValue = FlxCameraFollowStyle_obj::PLATFORMER; return true; }
	if (inName==HX_("SCREEN_BY_SCREEN",41,1a,fc,bf)) { outValue = FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN; return true; }
	if (inName==HX_("TOPDOWN",57,a1,79,78)) { outValue = FlxCameraFollowStyle_obj::TOPDOWN; return true; }
	if (inName==HX_("TOPDOWN_TIGHT",96,70,ba,44)) { outValue = FlxCameraFollowStyle_obj::TOPDOWN_TIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxCameraFollowStyle_obj)

int FlxCameraFollowStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LOCKON",ca,b9,49,0c)) return 0;
	if (inName==HX_("NO_DEAD_ZONE",29,d8,53,49)) return 5;
	if (inName==HX_("PLATFORMER",e0,d1,db,91)) return 1;
	if (inName==HX_("SCREEN_BY_SCREEN",41,1a,fc,bf)) return 4;
	if (inName==HX_("TOPDOWN",57,a1,79,78)) return 2;
	if (inName==HX_("TOPDOWN_TIGHT",96,70,ba,44)) return 3;
	return super::__FindIndex(inName);
}

int FlxCameraFollowStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LOCKON",ca,b9,49,0c)) return 0;
	if (inName==HX_("NO_DEAD_ZONE",29,d8,53,49)) return 0;
	if (inName==HX_("PLATFORMER",e0,d1,db,91)) return 0;
	if (inName==HX_("SCREEN_BY_SCREEN",41,1a,fc,bf)) return 0;
	if (inName==HX_("TOPDOWN",57,a1,79,78)) return 0;
	if (inName==HX_("TOPDOWN_TIGHT",96,70,ba,44)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxCameraFollowStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LOCKON",ca,b9,49,0c)) return LOCKON;
	if (inName==HX_("NO_DEAD_ZONE",29,d8,53,49)) return NO_DEAD_ZONE;
	if (inName==HX_("PLATFORMER",e0,d1,db,91)) return PLATFORMER;
	if (inName==HX_("SCREEN_BY_SCREEN",41,1a,fc,bf)) return SCREEN_BY_SCREEN;
	if (inName==HX_("TOPDOWN",57,a1,79,78)) return TOPDOWN;
	if (inName==HX_("TOPDOWN_TIGHT",96,70,ba,44)) return TOPDOWN_TIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String FlxCameraFollowStyle_obj_sStaticFields[] = {
	HX_("LOCKON",ca,b9,49,0c),
	HX_("PLATFORMER",e0,d1,db,91),
	HX_("TOPDOWN",57,a1,79,78),
	HX_("TOPDOWN_TIGHT",96,70,ba,44),
	HX_("SCREEN_BY_SCREEN",41,1a,fc,bf),
	HX_("NO_DEAD_ZONE",29,d8,53,49),
	::String(null())
};

::hx::Class FlxCameraFollowStyle_obj::__mClass;

Dynamic __Create_FlxCameraFollowStyle_obj() { return new FlxCameraFollowStyle_obj; }

void FlxCameraFollowStyle_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.FlxCameraFollowStyle",fb,4d,2f,fa), ::hx::TCanCast< FlxCameraFollowStyle_obj >,FlxCameraFollowStyle_obj_sStaticFields,0,
	&__Create_FlxCameraFollowStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxCameraFollowStyle_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxCameraFollowStyle_obj::__GetStatic;
}

void FlxCameraFollowStyle_obj::__boot()
{
LOCKON = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("LOCKON",ca,b9,49,0c),0);
NO_DEAD_ZONE = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("NO_DEAD_ZONE",29,d8,53,49),5);
PLATFORMER = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("PLATFORMER",e0,d1,db,91),1);
SCREEN_BY_SCREEN = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("SCREEN_BY_SCREEN",41,1a,fc,bf),4);
TOPDOWN = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("TOPDOWN",57,a1,79,78),2);
TOPDOWN_TIGHT = ::hx::CreateConstEnum< FlxCameraFollowStyle_obj >(HX_("TOPDOWN_TIGHT",96,70,ba,44),3);
}


} // end namespace flixel
