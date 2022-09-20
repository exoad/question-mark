#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#define INCLUDED_haxe_ui_core_ComponentLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentLayout_obj : public  ::haxe::ui::core::ComponentValidation_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentValidation_obj super;
		typedef ComponentLayout_obj OBJ_;
		ComponentLayout_obj();

	public:
		enum { _hx_ClassId = 0x715d6dae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentLayout"); }
		static ::hx::ObjectPtr< ComponentLayout_obj > __new();
		static ::hx::ObjectPtr< ComponentLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentLayout",27,c7,19,90); }

		 ::haxe::ui::styles::Style get_style();
		::Dynamic get_style_dyn();

		 ::haxe::ui::styles::Style set_style( ::haxe::ui::styles::Style value);
		::Dynamic set_style_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentLayout */ 
