#ifndef INCLUDED_hx_widgets_StaticLine
#define INCLUDED_hx_widgets_StaticLine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_311737314af0e063
#define INCLUDED_311737314af0e063
#include "wx/statline.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticLine)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticLine_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef StaticLine_obj OBJ_;
		StaticLine_obj();

	public:
		enum { _hx_ClassId = 0x4b083ddd };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticLine")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticLine"); }
		static ::hx::ObjectPtr< StaticLine_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< StaticLine_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticLine_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticLine",e2,13,10,a0); }

		::cpp::Pointer<  wxStaticLine > staticLineRef;
		::cpp::Pointer<  wxStaticLine > get_staticLineRef();
		::Dynamic get_staticLineRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticLine */ 
