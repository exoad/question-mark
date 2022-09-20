#ifndef INCLUDED_haxe_ui_styles_elements_Selector
#define INCLUDED_haxe_ui_styles_elements_Selector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,styles,elements,Selector)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,SelectorPart)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES Selector_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Selector_obj OBJ_;
		Selector_obj();

	public:
		enum { _hx_ClassId = 0x3e8e305a };

		void __construct(::String s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.Selector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.Selector"); }
		static ::hx::ObjectPtr< Selector_obj > __new(::String s);
		static ::hx::ObjectPtr< Selector_obj > __alloc(::hx::Ctx *_hx_ctx,::String s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Selector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Selector",3f,ef,1e,8b); }

		::Array< ::Dynamic> parts;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_Selector */ 
