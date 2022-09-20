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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollPos
#include <haxe/ui/containers/_ScrollView/VScrollPos.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2dd7f304f28a6472_330_new,"haxe.ui.containers._ScrollView.VScrollPos","new",0xe5f5ddca,"haxe.ui.containers._ScrollView.VScrollPos.new","haxe/ui/containers/ScrollView.hx",330,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_2dd7f304f28a6472_335_get,"haxe.ui.containers._ScrollView.VScrollPos","get",0xe5f08e00,"haxe.ui.containers._ScrollView.VScrollPos.get","haxe/ui/containers/ScrollView.hx",335,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_2dd7f304f28a6472_343_validateData,"haxe.ui.containers._ScrollView.VScrollPos","validateData",0x536d4b36,"haxe.ui.containers._ScrollView.VScrollPos.validateData","haxe/ui/containers/ScrollView.hx",343,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void VScrollPos_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_2dd7f304f28a6472_330_new)
HXLINE( 331)		super::__construct(scrollview);
HXLINE( 332)		this->_scrollview = scrollview;
            	}

Dynamic VScrollPos_obj::__CreateEmpty() { return new VScrollPos_obj; }

void *VScrollPos_obj::_hx_vtable = 0;

Dynamic VScrollPos_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VScrollPos_obj > _hx_result = new VScrollPos_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VScrollPos_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x00931646) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00931646;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType VScrollPos_obj::get(){
            	HX_STACKFRAME(&_hx_pos_2dd7f304f28a6472_335_get)
HXLINE( 336)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 337)		if (::hx::IsNull( vscroll )) {
HXLINE( 338)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0);
            		}
HXLINE( 340)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(vscroll->get_pos());
            	}


void VScrollPos_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_2dd7f304f28a6472_343_validateData)
HXLINE( 344)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 345)		if ((this->_scrollview->get_virtual() == true)) {
HXLINE( 346)			if (::hx::IsNull( vscroll )) {
HXLINE( 347)				vscroll = ::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_scrollview->_compositeBuilder)->createVScroll();
            			}
HXLINE( 349)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 350)				vscroll->set_pos(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
            			}
            		}
            		else {
HXLINE( 353)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 354)				vscroll->set_pos(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
            			}
            		}
            	}



::hx::ObjectPtr< VScrollPos_obj > VScrollPos_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< VScrollPos_obj > __this = new VScrollPos_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< VScrollPos_obj > VScrollPos_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	VScrollPos_obj *__this = (VScrollPos_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VScrollPos_obj), true, "haxe.ui.containers._ScrollView.VScrollPos"));
	*(void **)__this = VScrollPos_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

VScrollPos_obj::VScrollPos_obj()
{
}

void VScrollPos_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VScrollPos);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VScrollPos_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VScrollPos_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val VScrollPos_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VScrollPos_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VScrollPos_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(VScrollPos_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VScrollPos_obj_sStaticStorageInfo = 0;
#endif

static ::String VScrollPos_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class VScrollPos_obj::__mClass;

void VScrollPos_obj::__register()
{
	VScrollPos_obj _hx_dummy;
	VScrollPos_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.VScrollPos",d8,f0,74,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VScrollPos_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VScrollPos_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollPos_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollPos_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
