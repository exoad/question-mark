#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#define INCLUDED_haxe_ui_core_ComponentCommon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentCommon_obj : public  ::haxe::ui::backend::ComponentSurface_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentSurface_obj super;
		typedef ComponentCommon_obj OBJ_;
		ComponentCommon_obj();

	public:
		enum { _hx_ClassId = 0x01557b4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.core.ComponentCommon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.core.ComponentCommon"); }
		static ::hx::ObjectPtr< ComponentCommon_obj > __new();
		static ::hx::ObjectPtr< ComponentCommon_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentCommon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentCommon",a8,8d,8f,fe); }

		virtual  ::haxe::ui::core::TextDisplay getTextDisplay();
		::Dynamic getTextDisplay_dyn();

		virtual bool hasTextDisplay();
		::Dynamic hasTextDisplay_dyn();

		virtual  ::haxe::ui::core::TextInput getTextInput();
		::Dynamic getTextInput_dyn();

		virtual bool hasTextInput();
		::Dynamic hasTextInput_dyn();

		virtual  ::haxe::ui::core::ImageDisplay getImageDisplay();
		::Dynamic getImageDisplay_dyn();

		virtual bool hasImageDisplay();
		::Dynamic hasImageDisplay_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentCommon */ 
