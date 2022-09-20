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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f10aa61761c00fbd_10_new,"haxe.ui.events.ScrollEvent","new",0x7183695c,"haxe.ui.events.ScrollEvent.new","haxe/ui/events/ScrollEvent.hx",10,0xf9c91ab5)
HX_LOCAL_STACK_FRAME(_hx_pos_f10aa61761c00fbd_13_clone,"haxe.ui.events.ScrollEvent","clone",0x1767e359,"haxe.ui.events.ScrollEvent.clone","haxe/ui/events/ScrollEvent.hx",13,0xf9c91ab5)
HX_LOCAL_STACK_FRAME(_hx_pos_f10aa61761c00fbd_4_boot,"haxe.ui.events.ScrollEvent","boot",0xd991c7b6,"haxe.ui.events.ScrollEvent.boot","haxe/ui/events/ScrollEvent.hx",4,0xf9c91ab5)
HX_LOCAL_STACK_FRAME(_hx_pos_f10aa61761c00fbd_5_boot,"haxe.ui.events.ScrollEvent","boot",0xd991c7b6,"haxe.ui.events.ScrollEvent.boot","haxe/ui/events/ScrollEvent.hx",5,0xf9c91ab5)
HX_LOCAL_STACK_FRAME(_hx_pos_f10aa61761c00fbd_6_boot,"haxe.ui.events.ScrollEvent","boot",0xd991c7b6,"haxe.ui.events.ScrollEvent.boot","haxe/ui/events/ScrollEvent.hx",6,0xf9c91ab5)
HX_LOCAL_STACK_FRAME(_hx_pos_f10aa61761c00fbd_7_boot,"haxe.ui.events.ScrollEvent","boot",0xd991c7b6,"haxe.ui.events.ScrollEvent.boot","haxe/ui/events/ScrollEvent.hx",7,0xf9c91ab5)
namespace haxe{
namespace ui{
namespace events{

void ScrollEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_f10aa61761c00fbd_10_new)
HXDLIN(  10)		super::__construct(type,null(),null());
            	}

Dynamic ScrollEvent_obj::__CreateEmpty() { return new ScrollEvent_obj; }

void *ScrollEvent_obj::_hx_vtable = 0;

Dynamic ScrollEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollEvent_obj > _hx_result = new ScrollEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x77c19191) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x77c19191;
		}
	} else {
		return inClassId==(int)0x7c6b2860 || inClassId==(int)0x7e9b324a;
	}
}

 ::haxe::ui::events::UIEvent ScrollEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f10aa61761c00fbd_13_clone)
HXLINE(  14)		 ::haxe::ui::events::ScrollEvent c =  ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  15)		c->type = this->type;
HXLINE(  16)		c->target = this->target;
HXLINE(  17)		this->postClone(c);
HXLINE(  18)		return c;
            	}


::String ScrollEvent_obj::CHANGE;

::String ScrollEvent_obj::START;

::String ScrollEvent_obj::STOP;

::String ScrollEvent_obj::SCROLL;


::hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__new(::String type) {
	::hx::ObjectPtr< ScrollEvent_obj > __this = new ScrollEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	ScrollEvent_obj *__this = (ScrollEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollEvent_obj), true, "haxe.ui.events.ScrollEvent"));
	*(void **)__this = ScrollEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

ScrollEvent_obj::ScrollEvent_obj()
{
}

::hx::Val ScrollEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ScrollEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ScrollEvent_obj::CHANGE,HX_("CHANGE",70,3d,f5,69)},
	{::hx::fsString,(void *) &ScrollEvent_obj::START,HX_("START",42,ac,f9,01)},
	{::hx::fsString,(void *) &ScrollEvent_obj::STOP,HX_("STOP",02,b8,1c,37)},
	{::hx::fsString,(void *) &ScrollEvent_obj::SCROLL,HX_("SCROLL",0d,84,e7,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ScrollEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::STOP,"STOP");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::SCROLL,"SCROLL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::STOP,"STOP");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::SCROLL,"SCROLL");
};

#endif

::hx::Class ScrollEvent_obj::__mClass;

static ::String ScrollEvent_obj_sStaticFields[] = {
	HX_("CHANGE",70,3d,f5,69),
	HX_("START",42,ac,f9,01),
	HX_("STOP",02,b8,1c,37),
	HX_("SCROLL",0d,84,e7,f9),
	::String(null())
};

void ScrollEvent_obj::__register()
{
	ScrollEvent_obj _hx_dummy;
	ScrollEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ScrollEvent",6a,cb,8c,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScrollEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f10aa61761c00fbd_4_boot)
HXDLIN(   4)		CHANGE = HX_("scrollchange",3d,71,a0,da);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f10aa61761c00fbd_5_boot)
HXDLIN(   5)		START = HX_("scrollstart",35,4d,bb,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f10aa61761c00fbd_6_boot)
HXDLIN(   6)		STOP = HX_("scrollstop",8f,52,42,1f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f10aa61761c00fbd_7_boot)
HXDLIN(   7)		SCROLL = HX_("scrollscroll",da,b7,92,6a);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
