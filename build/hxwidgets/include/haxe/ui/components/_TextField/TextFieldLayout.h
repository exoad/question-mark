#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldLayout
#define INCLUDED_haxe_ui_components__TextField_TextFieldLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS4(haxe,ui,components,_TextField,TextFieldLayout)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _TextField{


class HXCPP_CLASS_ATTRIBUTES TextFieldLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef TextFieldLayout_obj OBJ_;
		TextFieldLayout_obj();

	public:
		enum { _hx_ClassId = 0x48e751b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TextField.TextFieldLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TextField.TextFieldLayout"); }
		static ::hx::ObjectPtr< TextFieldLayout_obj > __new();
		static ::hx::ObjectPtr< TextFieldLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFieldLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFieldLayout",37,67,7d,6f); }

		::String iconPosition;
		::String get_iconPosition();
		::Dynamic get_iconPosition_dyn();

		void repositionChildren();

		void resizeChildren();

		 ::haxe::ui::geom::Size calcAutoSize(::Array< ::Dynamic> exclusions);

		 ::haxe::ui::geom::Size get_usableSize();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField

#endif /* INCLUDED_haxe_ui_components__TextField_TextFieldLayout */ 
