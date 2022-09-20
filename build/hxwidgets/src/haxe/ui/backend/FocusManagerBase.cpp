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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32dcb548273fa279_5_new,"haxe.ui.backend.FocusManagerBase","new",0xcdab58e4,"haxe.ui.backend.FocusManagerBase.new","haxe/ui/backend/FocusManagerBase.hx",5,0x9516c10b)
HX_LOCAL_STACK_FRAME(_hx_pos_32dcb548273fa279_8_applyFocus,"haxe.ui.backend.FocusManagerBase","applyFocus",0x96072b86,"haxe.ui.backend.FocusManagerBase.applyFocus","haxe/ui/backend/FocusManagerBase.hx",8,0x9516c10b)
HX_LOCAL_STACK_FRAME(_hx_pos_32dcb548273fa279_12_unapplyFocus,"haxe.ui.backend.FocusManagerBase","unapplyFocus",0x21c7521f,"haxe.ui.backend.FocusManagerBase.unapplyFocus","haxe/ui/backend/FocusManagerBase.hx",12,0x9516c10b)
namespace haxe{
namespace ui{
namespace backend{

void FocusManagerBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_32dcb548273fa279_5_new)
            	}

Dynamic FocusManagerBase_obj::__CreateEmpty() { return new FocusManagerBase_obj; }

void *FocusManagerBase_obj::_hx_vtable = 0;

Dynamic FocusManagerBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusManagerBase_obj > _hx_result = new FocusManagerBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusManagerBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fcb91bc;
}

void FocusManagerBase_obj::applyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_32dcb548273fa279_8_applyFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManagerBase_obj,applyFocus,(void))

void FocusManagerBase_obj::unapplyFocus( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_32dcb548273fa279_12_unapplyFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FocusManagerBase_obj,unapplyFocus,(void))


::hx::ObjectPtr< FocusManagerBase_obj > FocusManagerBase_obj::__new() {
	::hx::ObjectPtr< FocusManagerBase_obj > __this = new FocusManagerBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FocusManagerBase_obj > FocusManagerBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FocusManagerBase_obj *__this = (FocusManagerBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusManagerBase_obj), false, "haxe.ui.backend.FocusManagerBase"));
	*(void **)__this = FocusManagerBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FocusManagerBase_obj::FocusManagerBase_obj()
{
}

::hx::Val FocusManagerBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyFocus") ) { return ::hx::Val( applyFocus_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unapplyFocus") ) { return ::hx::Val( unapplyFocus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FocusManagerBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FocusManagerBase_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusManagerBase_obj_sMemberFields[] = {
	HX_("applyFocus",8a,db,da,af),
	HX_("unapplyFocus",23,0b,ea,1b),
	::String(null()) };

::hx::Class FocusManagerBase_obj::__mClass;

void FocusManagerBase_obj::__register()
{
	FocusManagerBase_obj _hx_dummy;
	FocusManagerBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.FocusManagerBase",f2,56,14,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusManagerBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusManagerBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusManagerBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusManagerBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
