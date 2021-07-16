// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#define INCLUDED_lime_media_vorbis_VorbisFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisComment)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisFile)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisInfo)

namespace lime{
namespace media{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisFile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VorbisFile_obj OBJ_;
		VorbisFile_obj();

	public:
		enum { _hx_ClassId = 0x05bcd751 };

		void __construct( ::Dynamic handle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.vorbis.VorbisFile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.media.vorbis.VorbisFile"); }
		static ::hx::ObjectPtr< VorbisFile_obj > __new( ::Dynamic handle);
		static ::hx::ObjectPtr< VorbisFile_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VorbisFile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VorbisFile",8f,a7,81,d4); }

		static  ::lime::media::vorbis::VorbisFile fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::media::vorbis::VorbisFile fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		int bitstream;
		 ::Dynamic handle;
		int bitrate(::hx::Null< int >  bitstream);
		::Dynamic bitrate_dyn();

		int bitrateInstant();
		::Dynamic bitrateInstant_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::lime::media::vorbis::VorbisComment comment(::hx::Null< int >  bitstream);
		::Dynamic comment_dyn();

		int crosslap( ::lime::media::vorbis::VorbisFile other);
		::Dynamic crosslap_dyn();

		 ::lime::media::vorbis::VorbisInfo info(::hx::Null< int >  bitstream);
		::Dynamic info_dyn();

		int pcmSeek( cpp::Int64Struct pos);
		::Dynamic pcmSeek_dyn();

		int pcmSeekLap( cpp::Int64Struct pos);
		::Dynamic pcmSeekLap_dyn();

		int pcmSeekPage( cpp::Int64Struct pos);
		::Dynamic pcmSeekPage_dyn();

		int pcmSeekPageLap( cpp::Int64Struct pos);
		::Dynamic pcmSeekPageLap_dyn();

		 cpp::Int64Struct pcmTell();
		::Dynamic pcmTell_dyn();

		 cpp::Int64Struct pcmTotal(::hx::Null< int >  bitstream);
		::Dynamic pcmTotal_dyn();

		int rawSeek( cpp::Int64Struct pos);
		::Dynamic rawSeek_dyn();

		int rawSeekLap( cpp::Int64Struct pos);
		::Dynamic rawSeekLap_dyn();

		 cpp::Int64Struct rawTell();
		::Dynamic rawTell_dyn();

		 cpp::Int64Struct rawTotal(::hx::Null< int >  bitstream);
		::Dynamic rawTotal_dyn();

		int read( ::haxe::io::Bytes buffer,int position,::hx::Null< int >  length,::hx::Null< bool >  bigEndianPacking,::hx::Null< int >  wordSize,::hx::Null< bool >  _hx_signed);
		::Dynamic read_dyn();

		int readFloat( ::haxe::io::Bytes pcmChannels,int samples);
		::Dynamic readFloat_dyn();

		bool seekable();
		::Dynamic seekable_dyn();

		int serialNumber(::hx::Null< int >  bitstream);
		::Dynamic serialNumber_dyn();

		int streams();
		::Dynamic streams_dyn();

		int timeSeek(Float s);
		::Dynamic timeSeek_dyn();

		int timeSeekLap(Float s);
		::Dynamic timeSeekLap_dyn();

		int timeSeekPage(Float s);
		::Dynamic timeSeekPage_dyn();

		int timeSeekPageLap(Float s);
		::Dynamic timeSeekPageLap_dyn();

		Float timeTell();
		::Dynamic timeTell_dyn();

		Float timeTotal(::hx::Null< int >  bitstream);
		::Dynamic timeTotal_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace vorbis

#endif /* INCLUDED_lime_media_vorbis_VorbisFile */ 
