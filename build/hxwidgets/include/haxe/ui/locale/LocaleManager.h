#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#define INCLUDED_haxe_ui_locale_LocaleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,locale,LocaleManager)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocaleManager_obj OBJ_;
		LocaleManager_obj();

	public:
		enum { _hx_ClassId = 0x4926143f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.locale.LocaleManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.locale.LocaleManager"); }
		static ::hx::ObjectPtr< LocaleManager_obj > __new();
		static ::hx::ObjectPtr< LocaleManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleManager",d3,bc,32,59); }

		static void __boot();
		static  ::haxe::ui::locale::LocaleManager _instance;
		static  ::haxe::ui::locale::LocaleManager get_instance();
		static ::Dynamic get_instance_dyn();

		static  ::haxe::ds::ObjectMap _registeredComponents;
		 ::haxe::ui::util::EventMap _eventMap;
		void registerComponent( ::haxe::ui::core::Component component,::String prop, ::Dynamic callback,::String expr,::hx::Null< bool >  fix);
		::Dynamic registerComponent_dyn();

		void unregisterComponent( ::haxe::ui::core::Component component);
		::Dynamic unregisterComponent_dyn();

		::String findBindingExpr( ::haxe::ui::core::Component component,::String prop);
		::Dynamic findBindingExpr_dyn();

		void cloneForComponent( ::haxe::ui::core::Component from, ::haxe::ui::core::Component to);
		::Dynamic cloneForComponent_dyn();

		void onComponentReady( ::haxe::ui::events::UIEvent e);
		::Dynamic onComponentReady_dyn();

		void refreshFor( ::haxe::ui::core::Component component);
		::Dynamic refreshFor_dyn();

		void refreshAll();
		::Dynamic refreshAll_dyn();

		::String _language;
		::String get_language();
		::Dynamic get_language_dyn();

		::String set_language(::String value);
		::Dynamic set_language_dyn();

		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		bool hasEvent(::String type, ::Dynamic listener);
		::Dynamic hasEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void parseResource(::String localeId,::String resourceId);
		::Dynamic parseResource_dyn();

		 ::haxe::ds::StringMap _localeMap;
		void addStrings(::String localeId, ::haxe::ds::StringMap map,::String filename);
		::Dynamic addStrings_dyn();

		 ::haxe::ds::StringMap getStrings(::String localeId);
		::Dynamic getStrings_dyn();

		bool hasString(::String id);
		::Dynamic hasString_dyn();

		::String lookupString(::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3);
		::Dynamic lookupString_dyn();

		::String translateTo(::String lang,::String id, ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3);
		::Dynamic translateTo_dyn();

		 ::haxe::ui::core::Component findRoot( ::haxe::ui::core::Component c);
		::Dynamic findRoot_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_LocaleManager */ 
