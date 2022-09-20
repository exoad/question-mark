#ifndef INCLUDED_haxe_ui_tooltips_ToolTip
#define INCLUDED_haxe_ui_tooltips_ToolTip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,tooltips,ToolTip)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace tooltips{


class HXCPP_CLASS_ATTRIBUTES ToolTip_obj : public  ::haxe::ui::containers::Box_obj
{
	public:
		typedef  ::haxe::ui::containers::Box_obj super;
		typedef ToolTip_obj OBJ_;
		ToolTip_obj();

	public:
		enum { _hx_ClassId = 0x1cc91ce9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.tooltips.ToolTip")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.tooltips.ToolTip"); }
		static ::hx::ObjectPtr< ToolTip_obj > __new();
		static ::hx::ObjectPtr< ToolTip_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToolTip_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ToolTip",c3,8c,c5,37); }

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace tooltips

#endif /* INCLUDED_haxe_ui_tooltips_ToolTip */ 