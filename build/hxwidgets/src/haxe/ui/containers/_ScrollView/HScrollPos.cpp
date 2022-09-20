#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPos
#include <haxe/ui/containers/_ScrollView/HScrollPos.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_73e3f42abe9d2281_296_new,"haxe.ui.containers._ScrollView.HScrollPos","new",0x407b4e98,"haxe.ui.containers._ScrollView.HScrollPos.new","haxe/ui/containers/ScrollView.hx",296,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_73e3f42abe9d2281_301_get,"haxe.ui.containers._ScrollView.HScrollPos","get",0x4075fece,"haxe.ui.containers._ScrollView.HScrollPos.get","haxe/ui/containers/ScrollView.hx",301,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_73e3f42abe9d2281_309_validateData,"haxe.ui.containers._ScrollView.HScrollPos","validateData",0x50a650a8,"haxe.ui.containers._ScrollView.HScrollPos.validateData","haxe/ui/containers/ScrollView.hx",309,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void HScrollPos_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_73e3f42abe9d2281_296_new)
HXLINE( 297)		super::__construct(scrollview);
HXLINE( 298)		this->_scrollview = scrollview;
            	}

Dynamic HScrollPos_obj::__CreateEmpty() { return new HScrollPos_obj; }

void *HScrollPos_obj::_hx_vtable = 0;

Dynamic HScrollPos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScrollPos_obj > _hx_result = new HScrollPos_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HScrollPos_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x252887a4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x252887a4;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType HScrollPos_obj::get(){
            	HX_STACKFRAME(&_hx_pos_73e3f42abe9d2281_301_get)
HXLINE( 302)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 303)		if (::hx::IsNull( hscroll )) {
HXLINE( 304)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0);
            		}
HXLINE( 306)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(hscroll->get_pos());
            	}


void HScrollPos_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_73e3f42abe9d2281_309_validateData)
HXLINE( 310)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 311)		if ((this->_scrollview->get_virtual() == true)) {
HXLINE( 312)			if (::hx::IsNull( hscroll )) {
HXLINE( 313)				hscroll = ::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_scrollview->_compositeBuilder)->createHScroll();
            			}
HXLINE( 315)			if (::hx::IsNotNull( hscroll )) {
HXLINE( 316)				hscroll->set_pos(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
            			}
            		}
            		else {
HXLINE( 319)			if (::hx::IsNotNull( hscroll )) {
HXLINE( 320)				hscroll->set_pos(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
            			}
            		}
            	}



::hx::ObjectPtr< HScrollPos_obj > HScrollPos_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< HScrollPos_obj > __this = new HScrollPos_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< HScrollPos_obj > HScrollPos_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	HScrollPos_obj *__this = (HScrollPos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScrollPos_obj), true, "haxe.ui.containers._ScrollView.HScrollPos"));
	*(void **)__this = HScrollPos_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

HScrollPos_obj::HScrollPos_obj()
{
}

void HScrollPos_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScrollPos);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HScrollPos_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HScrollPos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HScrollPos_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HScrollPos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HScrollPos_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(HScrollPos_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HScrollPos_obj_sStaticStorageInfo = 0;
#endif

static ::String HScrollPos_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class HScrollPos_obj::__mClass;

void HScrollPos_obj::__register()
{
	HScrollPos_obj _hx_dummy;
	HScrollPos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.HScrollPos",a6,62,62,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScrollPos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScrollPos_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScrollPos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScrollPos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
