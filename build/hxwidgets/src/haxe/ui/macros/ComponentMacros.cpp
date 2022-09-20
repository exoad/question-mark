#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_ComponentMacros
#include <haxe/ui/macros/ComponentMacros.h>
#endif

namespace haxe{
namespace ui{
namespace macros{

void ComponentMacros_obj::__construct() { }

Dynamic ComponentMacros_obj::__CreateEmpty() { return new ComponentMacros_obj; }

void *ComponentMacros_obj::_hx_vtable = 0;

Dynamic ComponentMacros_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentMacros_obj > _hx_result = new ComponentMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a24f6ff;
}


ComponentMacros_obj::ComponentMacros_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentMacros_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentMacros_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComponentMacros_obj::__mClass;

void ComponentMacros_obj::__register()
{
	ComponentMacros_obj _hx_dummy;
	ComponentMacros_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.macros.ComponentMacros",6f,c0,f3,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentMacros_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentMacros_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
