#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_PosFromCoord
#include <haxe/ui/components/_VerticalScroll/PosFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24ddaef5abe37a00_39_new,"haxe.ui.components._VerticalScroll.PosFromCoord","new",0xe19f4ddb,"haxe.ui.components._VerticalScroll.PosFromCoord.new","haxe/ui/components/VerticalScroll.hx",39,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_24ddaef5abe37a00_40_call,"haxe.ui.components._VerticalScroll.PosFromCoord","call",0x827c66c3,"haxe.ui.components._VerticalScroll.PosFromCoord.call","haxe/ui/components/VerticalScroll.hx",40,0x571b9394)
namespace haxe{
namespace ui{
namespace components{
namespace _VerticalScroll{

void PosFromCoord_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_24ddaef5abe37a00_39_new)
HXDLIN(  39)		super::__construct(component);
            	}

Dynamic PosFromCoord_obj::__CreateEmpty() { return new PosFromCoord_obj; }

void *PosFromCoord_obj::_hx_vtable = 0;

Dynamic PosFromCoord_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PosFromCoord_obj > _hx_result = new PosFromCoord_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PosFromCoord_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x4411f4a1;
	}
}

 ::haxe::ui::util::VariantType PosFromCoord_obj::call( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_24ddaef5abe37a00_40_call)
HXLINE(  41)		 ::haxe::ui::geom::Point p = ::hx::TCast<  ::haxe::ui::geom::Point >::cast(pos);
HXLINE(  42)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->_component);
HXLINE(  43)		 ::haxe::ui::components::Button deinc = this->_component->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  44)		 ::haxe::ui::components::Button thumb = this->_component->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  46)		Float ypos = p->y;
HXLINE(  47)		Float minY = ( (Float)(0) );
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if (::hx::IsNotNull( deinc )) {
HXLINE(  48)			_hx_tmp = (deinc->get_hidden() == false);
            		}
            		else {
HXLINE(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  49)			 ::Dynamic minY1 = deinc->get_height();
HXDLIN(  49)			minY = (minY1 + scroll->get_layout()->get_verticalSpacing());
            		}
HXLINE(  52)		Float maxY = scroll->get_layout()->get_usableHeight();
HXDLIN(  52)		Float maxY1 = (maxY - ( (Float)(thumb->get_height()) ));
HXLINE(  53)		bool _hx_tmp1;
HXDLIN(  53)		if (::hx::IsNotNull( deinc )) {
HXLINE(  53)			_hx_tmp1 = (deinc->get_hidden() == false);
            		}
            		else {
HXLINE(  53)			_hx_tmp1 = false;
            		}
HXDLIN(  53)		if (_hx_tmp1) {
HXLINE(  54)			 ::Dynamic maxY = deinc->get_height();
HXDLIN(  54)			maxY1 = (maxY1 + (maxY + scroll->get_layout()->get_verticalSpacing()));
            		}
HXLINE(  57)		if ((ypos < minY)) {
HXLINE(  58)			ypos = minY;
            		}
            		else {
HXLINE(  59)			if ((ypos > maxY1)) {
HXLINE(  60)				ypos = maxY1;
            			}
            		}
HXLINE(  63)		Float ucy = scroll->get_layout()->get_usableHeight();
HXLINE(  64)		ucy = (ucy - ( (Float)(thumb->get_height()) ));
HXLINE(  65)		Float m = scroll->get_max();
HXDLIN(  65)		int m1 = ::Std_obj::_hx_int((m - scroll->get_min()));
HXLINE(  66)		Float v = (ypos - minY);
HXLINE(  67)		Float value = (scroll->get_min() + ((v / ucy) * ( (Float)(m1) )));
HXLINE(  69)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value);
            	}



::hx::ObjectPtr< PosFromCoord_obj > PosFromCoord_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PosFromCoord_obj > __this = new PosFromCoord_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PosFromCoord_obj > PosFromCoord_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PosFromCoord_obj *__this = (PosFromCoord_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PosFromCoord_obj), true, "haxe.ui.components._VerticalScroll.PosFromCoord"));
	*(void **)__this = PosFromCoord_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PosFromCoord_obj::PosFromCoord_obj()
{
}

::hx::Val PosFromCoord_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PosFromCoord_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PosFromCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String PosFromCoord_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class PosFromCoord_obj::__mClass;

void PosFromCoord_obj::__register()
{
	PosFromCoord_obj _hx_dummy;
	PosFromCoord_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._VerticalScroll.PosFromCoord",69,c4,1e,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PosFromCoord_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PosFromCoord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PosFromCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PosFromCoord_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalScroll
