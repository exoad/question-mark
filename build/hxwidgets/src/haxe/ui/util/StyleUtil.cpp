#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StyleUtil
#include <haxe/ui/util/StyleUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_12_styleProperty2ComponentProperty,"haxe.ui.util.StyleUtil","styleProperty2ComponentProperty",0x70b6ce31,"haxe.ui.util.StyleUtil.styleProperty2ComponentProperty","haxe/ui/util/StyleUtil.hx",12,0x90368666)
HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_11_styleProperty2ComponentProperty,"haxe.ui.util.StyleUtil","styleProperty2ComponentProperty",0x70b6ce31,"haxe.ui.util.StyleUtil.styleProperty2ComponentProperty","haxe/ui/util/StyleUtil.hx",11,0x90368666)
HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_21_componentProperty2StyleProperty,"haxe.ui.util.StyleUtil","componentProperty2StyleProperty",0x70aa1131,"haxe.ui.util.StyleUtil.componentProperty2StyleProperty","haxe/ui/util/StyleUtil.hx",21,0x90368666)
HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_20_componentProperty2StyleProperty,"haxe.ui.util.StyleUtil","componentProperty2StyleProperty",0x70aa1131,"haxe.ui.util.StyleUtil.componentProperty2StyleProperty","haxe/ui/util/StyleUtil.hx",20,0x90368666)
HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_4_boot,"haxe.ui.util.StyleUtil","boot",0x7020a3e7,"haxe.ui.util.StyleUtil.boot","haxe/ui/util/StyleUtil.hx",4,0x90368666)
HX_LOCAL_STACK_FRAME(_hx_pos_40fdcd83c070b6e2_5_boot,"haxe.ui.util.StyleUtil","boot",0x7020a3e7,"haxe.ui.util.StyleUtil.boot","haxe/ui/util/StyleUtil.hx",5,0x90368666)
namespace haxe{
namespace ui{
namespace util{

void StyleUtil_obj::__construct() { }

Dynamic StyleUtil_obj::__CreateEmpty() { return new StyleUtil_obj; }

void *StyleUtil_obj::_hx_vtable = 0;

Dynamic StyleUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleUtil_obj > _hx_result = new StyleUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x562ea953;
}

 ::EReg StyleUtil_obj::style2ComponentEReg;

 ::EReg StyleUtil_obj::component2StyleEReg;

::String StyleUtil_obj::styleProperty2ComponentProperty(::String property){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::EReg re){
            			HX_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_12_styleProperty2ComponentProperty)
HXLINE(  12)			return re->matched(1).toUpperCase();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_11_styleProperty2ComponentProperty)
HXDLIN(  11)		return ::haxe::ui::util::StyleUtil_obj::style2ComponentEReg->map(property, ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleUtil_obj,styleProperty2ComponentProperty,return )

::String StyleUtil_obj::componentProperty2StyleProperty(::String property){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::EReg re){
            			HX_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_21_componentProperty2StyleProperty)
HXLINE(  21)			return (HX_("-",2d,00,00,00) + re->matched(1).toLowerCase());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_20_componentProperty2StyleProperty)
HXDLIN(  20)		return ::haxe::ui::util::StyleUtil_obj::component2StyleEReg->map(property, ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleUtil_obj,componentProperty2StyleProperty,return )


StyleUtil_obj::StyleUtil_obj()
{
}

bool StyleUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"style2ComponentEReg") ) { outValue = ( style2ComponentEReg ); return true; }
		if (HX_FIELD_EQ(inName,"component2StyleEReg") ) { outValue = ( component2StyleEReg ); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"styleProperty2ComponentProperty") ) { outValue = styleProperty2ComponentProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"componentProperty2StyleProperty") ) { outValue = componentProperty2StyleProperty_dyn(); return true; }
	}
	return false;
}

bool StyleUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"style2ComponentEReg") ) { style2ComponentEReg=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"component2StyleEReg") ) { component2StyleEReg=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StyleUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StyleUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &StyleUtil_obj::style2ComponentEReg,HX_("style2ComponentEReg",ab,6e,6a,7d)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &StyleUtil_obj::component2StyleEReg,HX_("component2StyleEReg",2b,44,04,47)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StyleUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleUtil_obj::style2ComponentEReg,"style2ComponentEReg");
	HX_MARK_MEMBER_NAME(StyleUtil_obj::component2StyleEReg,"component2StyleEReg");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyleUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleUtil_obj::style2ComponentEReg,"style2ComponentEReg");
	HX_VISIT_MEMBER_NAME(StyleUtil_obj::component2StyleEReg,"component2StyleEReg");
};

#endif

::hx::Class StyleUtil_obj::__mClass;

static ::String StyleUtil_obj_sStaticFields[] = {
	HX_("style2ComponentEReg",ab,6e,6a,7d),
	HX_("component2StyleEReg",2b,44,04,47),
	HX_("styleProperty2ComponentProperty",c6,45,f0,2d),
	HX_("componentProperty2StyleProperty",c6,88,e3,2d),
	::String(null())
};

void StyleUtil_obj::__register()
{
	StyleUtil_obj _hx_dummy;
	StyleUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.StyleUtil",d9,5c,ed,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleUtil_obj::__SetStatic;
	__mClass->mMarkFunc = StyleUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StyleUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyleUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StyleUtil_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_4_boot)
HXDLIN(   4)		style2ComponentEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("-(\\w)",b3,da,be,03),HX_("g",67,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_40fdcd83c070b6e2_5_boot)
HXDLIN(   5)		component2StyleEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("([A-Z])",a7,4e,e3,6c),HX_("g",67,00,00,00));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
