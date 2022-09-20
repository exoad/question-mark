#ifndef INCLUDED_MainView
#define INCLUDED_MainView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
HX_DECLARE_CLASS0(MainView)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)



class HXCPP_CLASS_ATTRIBUTES MainView_obj : public  ::haxe::ui::containers::VBox_obj
{
	public:
		typedef  ::haxe::ui::containers::VBox_obj super;
		typedef MainView_obj OBJ_;
		MainView_obj();

	public:
		enum { _hx_ClassId = 0x32f63b82 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MainView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MainView"); }
		static ::hx::ObjectPtr< MainView_obj > __new();
		static ::hx::ObjectPtr< MainView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainView",5e,63,83,80); }

		void onMyButton( ::haxe::ui::events::MouseEvent e);
		::Dynamic onMyButton_dyn();

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		 ::haxe::ui::components::Button button2;
		 ::haxe::ui::components::Button button1;
};


#endif /* INCLUDED_MainView */ 
