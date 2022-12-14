#ifndef INCLUDED_haxe_ui_backend_AppImpl
#define INCLUDED_haxe_ui_backend_AppImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,AppImpl)
HX_DECLARE_CLASS2(hx,widgets,App)
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AppImpl_obj : public  ::haxe::ui::backend::AppBase_obj
{
	public:
		typedef  ::haxe::ui::backend::AppBase_obj super;
		typedef AppImpl_obj OBJ_;
		AppImpl_obj();

	public:
		enum { _hx_ClassId = 0x0e9feee7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.AppImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.AppImpl"); }
		static ::hx::ObjectPtr< AppImpl_obj > __new();
		static ::hx::ObjectPtr< AppImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppImpl",01,34,60,04); }

		 ::hx::widgets::App _app;
		 ::hx::widgets::Frame _frame;
		 ::Dynamic _onEnd;
		Dynamic _onEnd_dyn() { return _onEnd;}
		void build();

		virtual void init( ::Dynamic onReady, ::Dynamic onEnd);

		 ::Dynamic getToolkitInit();

		void start();

		void exit();

		 ::haxe::ds::ObjectMap _cachedIcon;
		::String set_icon(::String value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AppImpl */ 
