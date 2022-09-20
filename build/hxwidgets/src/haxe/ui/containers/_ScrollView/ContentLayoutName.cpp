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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ContentLayoutName
#include <haxe/ui/containers/_ScrollView/ContentLayoutName.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <haxe/ui/layouts/LayoutFactory.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_795983c9646d67c0_202_new,"haxe.ui.containers._ScrollView.ContentLayoutName","new",0x12e66359,"haxe.ui.containers._ScrollView.ContentLayoutName.new","haxe/ui/containers/ScrollView.hx",202,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_795983c9646d67c0_203_set,"haxe.ui.containers._ScrollView.ContentLayoutName","set",0x12ea2e9b,"haxe.ui.containers._ScrollView.ContentLayoutName.set","haxe/ui/containers/ScrollView.hx",203,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void ContentLayoutName_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_795983c9646d67c0_202_new)
HXDLIN( 202)		super::__construct(component);
            	}

Dynamic ContentLayoutName_obj::__CreateEmpty() { return new ContentLayoutName_obj; }

void *ContentLayoutName_obj::_hx_vtable = 0;

Dynamic ContentLayoutName_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ContentLayoutName_obj > _hx_result = new ContentLayoutName_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ContentLayoutName_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x20a559a9) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x20a559a9;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void ContentLayoutName_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_795983c9646d67c0_203_set)
HXLINE( 204)		this->super::set(value);
HXLINE( 205)		 ::haxe::ui::containers::ScrollViewBuilder builder = ::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_component->_compositeBuilder);
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if (::hx::IsNotNull( builder )) {
HXLINE( 206)			_hx_tmp = ::hx::IsPointerNotEq( ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(builder->_contentsLayoutName),value );
            		}
            		else {
HXLINE( 206)			_hx_tmp = false;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 207)			builder->_contentsLayoutName = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value);
HXLINE( 208)			 ::haxe::ui::containers::Box builder1 = builder->_contents;
HXDLIN( 208)			builder1->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(value)));
            		}
            	}



::hx::ObjectPtr< ContentLayoutName_obj > ContentLayoutName_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ContentLayoutName_obj > __this = new ContentLayoutName_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ContentLayoutName_obj > ContentLayoutName_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ContentLayoutName_obj *__this = (ContentLayoutName_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ContentLayoutName_obj), true, "haxe.ui.containers._ScrollView.ContentLayoutName"));
	*(void **)__this = ContentLayoutName_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ContentLayoutName_obj::ContentLayoutName_obj()
{
}

::hx::Val ContentLayoutName_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ContentLayoutName_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ContentLayoutName_obj_sStaticStorageInfo = 0;
#endif

static ::String ContentLayoutName_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ContentLayoutName_obj::__mClass;

void ContentLayoutName_obj::__register()
{
	ContentLayoutName_obj _hx_dummy;
	ContentLayoutName_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.ContentLayoutName",e7,c2,91,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ContentLayoutName_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ContentLayoutName_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ContentLayoutName_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ContentLayoutName_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
