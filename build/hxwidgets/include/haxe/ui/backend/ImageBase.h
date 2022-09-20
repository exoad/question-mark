#ifndef INCLUDED_haxe_ui_backend_ImageBase
#define INCLUDED_haxe_ui_backend_ImageBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageBase_obj : public  ::haxe::ui::backend::ImageSurface_obj
{
	public:
		typedef  ::haxe::ui::backend::ImageSurface_obj super;
		typedef ImageBase_obj OBJ_;
		ImageBase_obj();

	public:
		enum { _hx_ClassId = 0x1ffc6b7e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ImageBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ImageBase"); }
		static ::hx::ObjectPtr< ImageBase_obj > __new();
		static ::hx::ObjectPtr< ImageBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageBase",ec,5c,18,c5); }

		 ::haxe::ui::core::Component parentComponent;
		Float aspectRatio;
		Float _left;
		Float _top;
		Float _imageWidth;
		Float _imageHeight;
		 ::Dynamic _imageInfo;
		 ::haxe::ui::geom::Rectangle _imageClipRect;
		void dispose();
		::Dynamic dispose_dyn();

		void validateData();
		::Dynamic validateData_dyn();

		void validatePosition();
		::Dynamic validatePosition_dyn();

		void validateDisplay();
		::Dynamic validateDisplay_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageBase */ 
