#ifndef INCLUDED_hx_widgets_BitmapBundle
#define INCLUDED_hx_widgets_BitmapBundle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_eecd086399cd85c0
#define INCLUDED_eecd086399cd85c0
#include "wx/bmpbndl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,BitmapBundle)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BitmapBundle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapBundle_obj OBJ_;
		BitmapBundle_obj();

	public:
		enum { _hx_ClassId = 0x21e1bfac };

		void __construct( ::hx::widgets::Bitmap bitmap);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BitmapBundle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.BitmapBundle"); }
		static ::hx::ObjectPtr< BitmapBundle_obj > __new( ::hx::widgets::Bitmap bitmap);
		static ::hx::ObjectPtr< BitmapBundle_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Bitmap bitmap);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapBundle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapBundle",f1,e0,0e,a9); }

		::cpp::Pointer<  wxBitmapBundle > _ref;
		bool destroy();
		::Dynamic destroy_dyn();

		::cpp::Pointer<  wxBitmapBundle > bitmapBundleRef;
		::cpp::Pointer<  wxBitmapBundle > get_bitmapBundleRef();
		::Dynamic get_bitmapBundleRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BitmapBundle */ 
