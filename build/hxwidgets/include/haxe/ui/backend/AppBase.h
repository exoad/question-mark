#ifndef INCLUDED_haxe_ui_backend_AppBase
#define INCLUDED_haxe_ui_backend_AppBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AppBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AppBase_obj OBJ_;
		AppBase_obj();

	public:
		enum { _hx_ClassId = 0x09f65818 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.AppBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.AppBase"); }
		static ::hx::ObjectPtr< AppBase_obj > __new();
		static ::hx::ObjectPtr< AppBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppBase",32,9d,b6,ff); }

		 ::haxe::ui::util::EventMap _hx___events;
		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		bool hasEvent(::String type, ::Dynamic listener);
		::Dynamic hasEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::events::UIEvent event);
		::Dynamic dispatch_dyn();

		virtual void build();
		::Dynamic build_dyn();

		virtual void init( ::Dynamic onReady, ::Dynamic onEnd);
		::Dynamic init_dyn();

		virtual  ::Dynamic getToolkitInit();
		::Dynamic getToolkitInit_dyn();

		virtual void start();
		::Dynamic start_dyn();

		virtual void exit();
		::Dynamic exit_dyn();

		virtual ::Array< ::Dynamic> buildPreloadList();
		::Dynamic buildPreloadList_dyn();

		::String _icon;
		::String get_icon();
		::Dynamic get_icon_dyn();

		virtual ::String set_icon(::String value);
		::Dynamic set_icon_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AppBase */ 
