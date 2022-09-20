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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_9_new,"haxe.ui.events.UIEvent","new",0x3c904bd5,"haxe.ui.events.UIEvent.new","haxe/ui/events/UIEvent.hx",9,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_54_cancel,"haxe.ui.events.UIEvent","cancel",0x640c4925,"haxe.ui.events.UIEvent.cancel","haxe/ui/events/UIEvent.hx",54,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_59_clone,"haxe.ui.events.UIEvent","clone",0x694d1612,"haxe.ui.events.UIEvent.clone","haxe/ui/events/UIEvent.hx",59,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_73_copyFrom,"haxe.ui.events.UIEvent","copyFrom",0x5fc7e82a,"haxe.ui.events.UIEvent.copyFrom","haxe/ui/events/UIEvent.hx",73,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_10_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",10,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_11_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",11,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_12_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",12,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_13_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",13,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_14_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",14,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_15_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",15,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_16_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",16,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_18_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",18,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_19_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",19,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_21_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",21,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_22_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",22,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_24_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",24,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_25_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",25,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_27_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",27,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_28_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",28,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_30_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",30,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_32_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",32,0xa50e85dc)
HX_LOCAL_STACK_FRAME(_hx_pos_acfcc53ce94b5d2e_33_boot,"haxe.ui.events.UIEvent","boot",0xb9cb0f1d,"haxe.ui.events.UIEvent.boot","haxe/ui/events/UIEvent.hx",33,0xa50e85dc)
namespace haxe{
namespace ui{
namespace events{

void UIEvent_obj::__construct(::String type, ::Dynamic __o_bubble, ::Dynamic data){
            		 ::Dynamic bubble = __o_bubble;
            		if (::hx::IsNull(__o_bubble)) bubble = false;
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_9_new)
HXLINE(  42)		this->relatedEvent = null();
HXLINE(  48)		this->type = type;
HXLINE(  49)		this->bubble = ( (bool)(bubble) );
HXLINE(  50)		this->data = data;
HXLINE(  51)		this->canceled = false;
            	}

Dynamic UIEvent_obj::__CreateEmpty() { return new UIEvent_obj; }

void *UIEvent_obj::_hx_vtable = 0;

Dynamic UIEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UIEvent_obj > _hx_result = new UIEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool UIEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x77c19191) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x77c19191;
		}
	} else {
		return inClassId==(int)0x7c6b2860;
	}
}

void UIEvent_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_54_cancel)
HXLINE(  55)		this->super::cancel();
HXLINE(  56)		this->canceled = true;
            	}


 ::haxe::ui::events::UIEvent UIEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_59_clone)
HXLINE(  60)		 ::haxe::ui::events::UIEvent c =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  61)		c->type = this->type;
HXLINE(  62)		c->bubble = this->bubble;
HXLINE(  63)		c->target = this->target;
HXLINE(  64)		c->data = this->data;
HXLINE(  65)		c->value = this->value;
HXLINE(  66)		c->previousValue = this->previousValue;
HXLINE(  67)		c->canceled = this->canceled;
HXLINE(  68)		c->relatedEvent = this->relatedEvent;
HXLINE(  69)		this->postClone(c);
HXLINE(  70)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UIEvent_obj,clone,return )

void UIEvent_obj::copyFrom( ::haxe::ui::events::UIEvent c){
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_73_copyFrom)
            	}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,copyFrom,(void))

::String UIEvent_obj::READY;

::String UIEvent_obj::DESTROY;

::String UIEvent_obj::RESIZE;

::String UIEvent_obj::CHANGE;

::String UIEvent_obj::BEFORE_CHANGE;

::String UIEvent_obj::MOVE;

::String UIEvent_obj::INITIALIZE;

::String UIEvent_obj::RENDERER_CREATED;

::String UIEvent_obj::RENDERER_DESTROYED;

::String UIEvent_obj::HIDDEN;

::String UIEvent_obj::SHOWN;

::String UIEvent_obj::ENABLED;

::String UIEvent_obj::DISABLED;

::String UIEvent_obj::BEFORE_CLOSE;

::String UIEvent_obj::CLOSE;

::String UIEvent_obj::PROPERTY_CHANGE;

::String UIEvent_obj::COMPONENT_ADDED;

::String UIEvent_obj::COMPONENT_REMOVED;


::hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__new(::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	::hx::ObjectPtr< UIEvent_obj > __this = new UIEvent_obj();
	__this->__construct(type,__o_bubble,data);
	return __this;
}

::hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubble, ::Dynamic data) {
	UIEvent_obj *__this = (UIEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UIEvent_obj), true, "haxe.ui.events.UIEvent"));
	*(void **)__this = UIEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubble,data);
	return __this;
}

UIEvent_obj::UIEvent_obj()
{
}

void UIEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIEvent);
	HX_MARK_MEMBER_NAME(bubble,"bubble");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(relatedEvent,"relatedEvent");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(previousValue,"previousValue");
	 ::haxe::ui::backend::EventImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubble,"bubble");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(relatedEvent,"relatedEvent");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(previousValue,"previousValue");
	 ::haxe::ui::backend::EventImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val UIEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bubble") ) { return ::hx::Val( bubble ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return ::hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"relatedEvent") ) { return ::hx::Val( relatedEvent ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousValue") ) { return ::hx::Val( previousValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UIEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bubble") ) { bubble=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"relatedEvent") ) { relatedEvent=inValue.Cast<  ::haxe::ui::events::UIEvent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousValue") ) { previousValue=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bubble",8c,df,ec,cd));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("canceled",59,18,26,1f));
	outFields->push(HX_("relatedEvent",2f,5a,58,83));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("previousValue",ba,8b,ac,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UIEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(UIEvent_obj,bubble),HX_("bubble",8c,df,ec,cd)},
	{::hx::fsString,(int)offsetof(UIEvent_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(UIEvent_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(UIEvent_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsBool,(int)offsetof(UIEvent_obj,canceled),HX_("canceled",59,18,26,1f)},
	{::hx::fsObject /*  ::haxe::ui::events::UIEvent */ ,(int)offsetof(UIEvent_obj,relatedEvent),HX_("relatedEvent",2f,5a,58,83)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(UIEvent_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(UIEvent_obj,previousValue),HX_("previousValue",ba,8b,ac,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo UIEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &UIEvent_obj::READY,HX_("READY",43,d8,a8,64)},
	{::hx::fsString,(void *) &UIEvent_obj::DESTROY,HX_("DESTROY",da,00,5a,a4)},
	{::hx::fsString,(void *) &UIEvent_obj::RESIZE,HX_("RESIZE",f4,05,fe,ba)},
	{::hx::fsString,(void *) &UIEvent_obj::CHANGE,HX_("CHANGE",70,3d,f5,69)},
	{::hx::fsString,(void *) &UIEvent_obj::BEFORE_CHANGE,HX_("BEFORE_CHANGE",70,ec,5d,1c)},
	{::hx::fsString,(void *) &UIEvent_obj::MOVE,HX_("MOVE",11,ab,21,33)},
	{::hx::fsString,(void *) &UIEvent_obj::INITIALIZE,HX_("INITIALIZE",50,a5,c4,de)},
	{::hx::fsString,(void *) &UIEvent_obj::RENDERER_CREATED,HX_("RENDERER_CREATED",8c,b3,63,fd)},
	{::hx::fsString,(void *) &UIEvent_obj::RENDERER_DESTROYED,HX_("RENDERER_DESTROYED",7d,ca,95,8e)},
	{::hx::fsString,(void *) &UIEvent_obj::HIDDEN,HX_("HIDDEN",6a,ab,18,ff)},
	{::hx::fsString,(void *) &UIEvent_obj::SHOWN,HX_("SHOWN",b1,c0,15,fa)},
	{::hx::fsString,(void *) &UIEvent_obj::ENABLED,HX_("ENABLED",61,d8,04,fe)},
	{::hx::fsString,(void *) &UIEvent_obj::DISABLED,HX_("DISABLED",7c,d1,89,d5)},
	{::hx::fsString,(void *) &UIEvent_obj::BEFORE_CLOSE,HX_("BEFORE_CLOSE",98,80,d3,a5)},
	{::hx::fsString,(void *) &UIEvent_obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{::hx::fsString,(void *) &UIEvent_obj::PROPERTY_CHANGE,HX_("PROPERTY_CHANGE",5a,5b,59,42)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_ADDED,HX_("COMPONENT_ADDED",3e,88,f7,76)},
	{::hx::fsString,(void *) &UIEvent_obj::COMPONENT_REMOVED,HX_("COMPONENT_REMOVED",9e,12,a6,28)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String UIEvent_obj_sMemberFields[] = {
	HX_("bubble",8c,df,ec,cd),
	HX_("type",ba,f2,08,4d),
	HX_("target",51,f3,ec,86),
	HX_("data",2a,56,63,42),
	HX_("canceled",59,18,26,1f),
	HX_("relatedEvent",2f,5a,58,83),
	HX_("value",71,7f,b8,31),
	HX_("previousValue",ba,8b,ac,58),
	HX_("cancel",7a,ed,33,b8),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

static void UIEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DESTROY,"DESTROY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::INITIALIZE,"INITIALIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RENDERER_CREATED,"RENDERER_CREATED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RENDERER_DESTROYED,"RENDERER_DESTROYED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::HIDDEN,"HIDDEN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SHOWN,"SHOWN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ENABLED,"ENABLED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DISABLED,"DISABLED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::BEFORE_CLOSE,"BEFORE_CLOSE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::PROPERTY_CHANGE,"PROPERTY_CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED,"COMPONENT_ADDED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED,"COMPONENT_REMOVED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UIEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DESTROY,"DESTROY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::BEFORE_CHANGE,"BEFORE_CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::INITIALIZE,"INITIALIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RENDERER_CREATED,"RENDERER_CREATED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RENDERER_DESTROYED,"RENDERER_DESTROYED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::HIDDEN,"HIDDEN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SHOWN,"SHOWN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ENABLED,"ENABLED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DISABLED,"DISABLED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::BEFORE_CLOSE,"BEFORE_CLOSE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::PROPERTY_CHANGE,"PROPERTY_CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_ADDED,"COMPONENT_ADDED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_REMOVED,"COMPONENT_REMOVED");
};

#endif

::hx::Class UIEvent_obj::__mClass;

static ::String UIEvent_obj_sStaticFields[] = {
	HX_("READY",43,d8,a8,64),
	HX_("DESTROY",da,00,5a,a4),
	HX_("RESIZE",f4,05,fe,ba),
	HX_("CHANGE",70,3d,f5,69),
	HX_("BEFORE_CHANGE",70,ec,5d,1c),
	HX_("MOVE",11,ab,21,33),
	HX_("INITIALIZE",50,a5,c4,de),
	HX_("RENDERER_CREATED",8c,b3,63,fd),
	HX_("RENDERER_DESTROYED",7d,ca,95,8e),
	HX_("HIDDEN",6a,ab,18,ff),
	HX_("SHOWN",b1,c0,15,fa),
	HX_("ENABLED",61,d8,04,fe),
	HX_("DISABLED",7c,d1,89,d5),
	HX_("BEFORE_CLOSE",98,80,d3,a5),
	HX_("CLOSE",98,4f,51,c6),
	HX_("PROPERTY_CHANGE",5a,5b,59,42),
	HX_("COMPONENT_ADDED",3e,88,f7,76),
	HX_("COMPONENT_REMOVED",9e,12,a6,28),
	::String(null())
};

void UIEvent_obj::__register()
{
	UIEvent_obj _hx_dummy;
	UIEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.UIEvent",63,bd,86,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UIEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(UIEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UIEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UIEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UIEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UIEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UIEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UIEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_10_boot)
HXDLIN(  10)		READY = HX_("ready",63,a0,ba,e6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_11_boot)
HXDLIN(  11)		DESTROY = HX_("destroy",fa,2c,86,24);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_12_boot)
HXDLIN(  12)		RESIZE = HX_("resize",f4,59,7b,08);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_13_boot)
HXDLIN(  13)		CHANGE = HX_("change",70,91,72,b7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_14_boot)
HXDLIN(  14)		BEFORE_CHANGE = HX_("beforechange",2f,cf,41,af);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_15_boot)
HXDLIN(  15)		MOVE = HX_("move",11,e3,60,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_16_boot)
HXDLIN(  16)		INITIALIZE = HX_("initialize",50,31,bb,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_18_boot)
HXDLIN(  18)		RENDERER_CREATED = HX_("renderercreated",05,6f,f5,09);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_19_boot)
HXDLIN(  19)		RENDERER_DESTROYED = HX_("rendererdestroyed",36,32,a8,2f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_21_boot)
HXDLIN(  21)		HIDDEN = HX_("hidden",6a,ff,95,4c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_22_boot)
HXDLIN(  22)		SHOWN = HX_("shown",d1,88,27,7c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_24_boot)
HXDLIN(  24)		ENABLED = HX_("enabled",81,04,31,7e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_25_boot)
HXDLIN(  25)		DISABLED = HX_("disabled",7c,41,04,7c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_27_boot)
HXDLIN(  27)		BEFORE_CLOSE = HX_("beforeclose",d9,16,93,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_28_boot)
HXDLIN(  28)		CLOSE = HX_("close",b8,17,63,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_30_boot)
HXDLIN(  30)		PROPERTY_CHANGE = HX_("propertychange",85,47,b1,35);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_32_boot)
HXDLIN(  32)		COMPONENT_ADDED = HX_("componentadded",e3,16,1d,d8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_acfcc53ce94b5d2e_33_boot)
HXDLIN(  33)		COMPONENT_REMOVED = HX_("componentremoved",83,70,48,49);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
