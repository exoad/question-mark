#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataViewListCtrlSelectedRow
#define INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataViewListCtrlSelectedRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,DataViewListCtrlSelectedRow)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,HxWidgetsBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
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
namespace backend{
namespace hxwidgets{
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES DataViewListCtrlSelectedRow_obj : public  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj super;
		typedef DataViewListCtrlSelectedRow_obj OBJ_;
		DataViewListCtrlSelectedRow_obj();

	public:
		enum { _hx_ClassId = 0x16df4968 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.behaviours.DataViewListCtrlSelectedRow"); }
		static ::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< DataViewListCtrlSelectedRow_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewListCtrlSelectedRow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewListCtrlSelectedRow",47,d0,98,29); }

		void set( ::haxe::ui::util::VariantType value);

		 ::haxe::ui::util::VariantType get();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataViewListCtrlSelectedRow */ 
