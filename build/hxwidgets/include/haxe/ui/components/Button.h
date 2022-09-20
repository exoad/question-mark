#ifndef INCLUDED_haxe_ui_components_Button
#define INCLUDED_haxe_ui_components_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
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
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::haxe::ui::core::InteractiveComponent_obj
{
	public:
		typedef  ::haxe::ui::core::InteractiveComponent_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x142c98ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.Button")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.Button"); }
		static ::hx::ObjectPtr< Button_obj > __new();
		static ::hx::ObjectPtr< Button_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Button",12,d6,74,0e); }

		virtual void registerBehaviours();

		bool get_repeater();
		::Dynamic get_repeater_dyn();

		bool set_repeater(bool value);
		::Dynamic set_repeater_dyn();

		int get_repeatInterval();
		::Dynamic get_repeatInterval_dyn();

		int set_repeatInterval(int value);
		::Dynamic set_repeatInterval_dyn();

		bool get_easeInRepeater();
		::Dynamic get_easeInRepeater_dyn();

		bool set_easeInRepeater(bool value);
		::Dynamic set_easeInRepeater_dyn();

		bool get_remainPressed();
		::Dynamic get_remainPressed_dyn();

		bool set_remainPressed(bool value);
		::Dynamic set_remainPressed_dyn();

		bool get_toggle();
		::Dynamic get_toggle_dyn();

		bool set_toggle(bool value);
		::Dynamic set_toggle_dyn();

		bool get_selected();
		::Dynamic get_selected_dyn();

		bool set_selected(bool value);
		::Dynamic set_selected_dyn();

		 ::haxe::ui::util::VariantType get_icon();
		::Dynamic get_icon_dyn();

		 ::haxe::ui::util::VariantType set_icon( ::haxe::ui::util::VariantType value);
		::Dynamic set_icon_dyn();

		::String get_componentGroup();
		::Dynamic get_componentGroup_dyn();

		::String set_componentGroup(::String value);
		::Dynamic set_componentGroup_dyn();

		virtual  ::Dynamic get_value();

		virtual  ::Dynamic set_value( ::Dynamic value);

		::String get_iconPosition();
		::Dynamic get_iconPosition_dyn();

		::String set_iconPosition(::String value);
		::Dynamic set_iconPosition_dyn();

		 ::Dynamic get_fontSize();
		::Dynamic get_fontSize_dyn();

		 ::Dynamic set_fontSize( ::Dynamic value);
		::Dynamic set_fontSize_dyn();

		::String get_textAlign();
		::Dynamic get_textAlign_dyn();

		::String set_textAlign(::String value);
		::Dynamic set_textAlign_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

		virtual void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_Button */ 
