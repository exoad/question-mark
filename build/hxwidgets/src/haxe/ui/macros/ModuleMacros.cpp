#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_ModuleMacros
#include <haxe/ui/macros/ModuleMacros.h>
#endif

namespace haxe{
namespace ui{
namespace macros{

void ModuleMacros_obj::__construct() { }

Dynamic ModuleMacros_obj::__CreateEmpty() { return new ModuleMacros_obj; }

void *ModuleMacros_obj::_hx_vtable = 0;

Dynamic ModuleMacros_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ModuleMacros_obj > _hx_result = new ModuleMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57bdb720;
}


ModuleMacros_obj::ModuleMacros_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ModuleMacros_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ModuleMacros_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ModuleMacros_obj::__mClass;

void ModuleMacros_obj::__register()
{
	ModuleMacros_obj _hx_dummy;
	ModuleMacros_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.macros.ModuleMacros",e8,86,5b,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ModuleMacros_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleMacros_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
