#include <hxcpp.h>

#ifndef INCLUDED_36d9070d552a2c05
#define INCLUDED_36d9070d552a2c05
#include "wx/bitmap.h"
#endif
#ifndef INCLUDED_eecd086399cd85c0
#define INCLUDED_eecd086399cd85c0
#include "wx/bmpbndl.h"
#endif
#ifndef INCLUDED_hx_widgets_Bitmap
#include <hx/widgets/Bitmap.h>
#endif
#ifndef INCLUDED_hx_widgets_BitmapBundle
#include <hx/widgets/BitmapBundle.h>
#endif
#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f726fc4425534a3_13_new,"hx.widgets.BitmapBundle","new",0x529786a0,"hx.widgets.BitmapBundle.new","hx/widgets/BitmapBundle.hx",13,0x5281360e)
HX_LOCAL_STACK_FRAME(_hx_pos_6f726fc4425534a3_20_destroy,"hx.widgets.BitmapBundle","destroy",0x1b82033a,"hx.widgets.BitmapBundle.destroy","hx/widgets/BitmapBundle.hx",20,0x5281360e)
HX_LOCAL_STACK_FRAME(_hx_pos_6f726fc4425534a3_33_get_bitmapBundleRef,"hx.widgets.BitmapBundle","get_bitmapBundleRef",0x2a0b1a59,"hx.widgets.BitmapBundle.get_bitmapBundleRef","hx/widgets/BitmapBundle.hx",33,0x5281360e)
namespace hx{
namespace widgets{

void BitmapBundle_obj::__construct( ::hx::widgets::Bitmap bitmap){
            	HX_STACKFRAME(&_hx_pos_6f726fc4425534a3_13_new)
HXDLIN(  13)		if (::hx::IsNull( bitmap )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxBitmapBundle()))->reinterpret();
            		}
            		else {
HXLINE(  16)			::cpp::Pointer<  wxBitmapBundle > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxBitmapBundle(bitmap->get_bitmapRef()->get_ref())));
HXDLIN(  16)			this->_ref = _hx_tmp->reinterpret();
            		}
            	}

Dynamic BitmapBundle_obj::__CreateEmpty() { return new BitmapBundle_obj; }

void *BitmapBundle_obj::_hx_vtable = 0;

Dynamic BitmapBundle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BitmapBundle_obj > _hx_result = new BitmapBundle_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BitmapBundle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21e1bfac;
}

bool BitmapBundle_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_6f726fc4425534a3_20_destroy)
HXLINE(  21)		if (::hx::IsNotNull( this->_ref )) {
HXLINE(  22)			this->_ref->destroy();
HXLINE(  23)			this->_ref = null();
            		}
HXLINE(  25)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapBundle_obj,destroy,return )

::cpp::Pointer<  wxBitmapBundle > BitmapBundle_obj::get_bitmapBundleRef(){
            	HX_STACKFRAME(&_hx_pos_6f726fc4425534a3_33_get_bitmapBundleRef)
HXDLIN(  33)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapBundle_obj,get_bitmapBundleRef,return )


::hx::ObjectPtr< BitmapBundle_obj > BitmapBundle_obj::__new( ::hx::widgets::Bitmap bitmap) {
	::hx::ObjectPtr< BitmapBundle_obj > __this = new BitmapBundle_obj();
	__this->__construct(bitmap);
	return __this;
}

::hx::ObjectPtr< BitmapBundle_obj > BitmapBundle_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Bitmap bitmap) {
	BitmapBundle_obj *__this = (BitmapBundle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BitmapBundle_obj), true, "hx.widgets.BitmapBundle"));
	*(void **)__this = BitmapBundle_obj::_hx_vtable;
	__this->__construct(bitmap);
	return __this;
}

BitmapBundle_obj::BitmapBundle_obj()
{
}

void BitmapBundle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapBundle);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(bitmapBundleRef,"bitmapBundleRef");
	HX_MARK_END_CLASS();
}

void BitmapBundle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(bitmapBundleRef,"bitmapBundleRef");
}

::hx::Val BitmapBundle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bitmapBundleRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bitmapBundleRef() : bitmapBundleRef ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_bitmapBundleRef") ) { return ::hx::Val( get_bitmapBundleRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BitmapBundle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxBitmapBundle > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bitmapBundleRef") ) { bitmapBundleRef=inValue.Cast< ::cpp::Pointer<  wxBitmapBundle > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapBundle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	outFields->push(HX_("bitmapBundleRef",02,15,7c,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BitmapBundle_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxBitmapBundle > */ ,(int)offsetof(BitmapBundle_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxBitmapBundle > */ ,(int)offsetof(BitmapBundle_obj,bitmapBundleRef),HX_("bitmapBundleRef",02,15,7c,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BitmapBundle_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapBundle_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("destroy",fa,2c,86,24),
	HX_("bitmapBundleRef",02,15,7c,42),
	HX_("get_bitmapBundleRef",19,e4,86,cd),
	::String(null()) };

::hx::Class BitmapBundle_obj::__mClass;

void BitmapBundle_obj::__register()
{
	BitmapBundle_obj _hx_dummy;
	BitmapBundle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.BitmapBundle",ae,f6,ef,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BitmapBundle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BitmapBundle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapBundle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapBundle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
