#ifndef INCLUDED_haxe_ui_components__Range_AllowInteraction
#define INCLUDED_haxe_ui_components__Range_AllowInteraction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DefaultBehaviour)
HX_DECLARE_CLASS4(haxe,ui,components,_Range,AllowInteraction)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _Range{


class HXCPP_CLASS_ATTRIBUTES AllowInteraction_obj : public  ::haxe::ui::behaviours::DefaultBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DefaultBehaviour_obj super;
		typedef AllowInteraction_obj OBJ_;
		AllowInteraction_obj();

	public:
		enum { _hx_ClassId = 0x0660a997 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._Range.AllowInteraction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._Range.AllowInteraction"); }
		static ::hx::ObjectPtr< AllowInteraction_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< AllowInteraction_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AllowInteraction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AllowInteraction",e9,31,7f,7d); }

		 ::haxe::ui::util::VariantType get();

		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range

#endif /* INCLUDED_haxe_ui_components__Range_AllowInteraction */ 
