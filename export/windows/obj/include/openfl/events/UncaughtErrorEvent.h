// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#define INCLUDED_openfl_events_UncaughtErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES UncaughtErrorEvent_obj : public  ::openfl::events::ErrorEvent_obj
{
	public:
		typedef  ::openfl::events::ErrorEvent_obj super;
		typedef UncaughtErrorEvent_obj OBJ_;
		UncaughtErrorEvent_obj();

	public:
		enum { _hx_ClassId = 0x4a20c7b0 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.UncaughtErrorEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.UncaughtErrorEvent"); }
		static ::hx::ObjectPtr< UncaughtErrorEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error);
		static ::hx::ObjectPtr< UncaughtErrorEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UncaughtErrorEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UncaughtErrorEvent",47,72,9a,e0); }

		static void __boot();
		static ::String UNCAUGHT_ERROR;
		 ::Dynamic error;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_UncaughtErrorEvent */ 