#ifndef INCLUDED_haxe_ui_containers_Header
#define INCLUDED_haxe_ui_containers_Header

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,Header)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES Header_obj : public  ::haxe::ui::containers::HBox_obj
{
	public:
		typedef  ::haxe::ui::containers::HBox_obj super;
		typedef Header_obj OBJ_;
		Header_obj();

	public:
		enum { _hx_ClassId = 0x226ebd39 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.Header")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.Header"); }
		static ::hx::ObjectPtr< Header_obj > __new();
		static ::hx::ObjectPtr< Header_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Header_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Header",ad,7d,94,31); }

		void registerComposite();

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_Header */ 
