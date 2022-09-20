#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonLayout
#include <haxe/ui/components/ButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_GroupBehaviour
#include <haxe/ui/components/_Button/GroupBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_IconBehaviour
#include <haxe/ui/components/_Button/IconBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_SelectedBehaviour
#include <haxe/ui/components/_Button/SelectedBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_TextBehaviour
#include <haxe/ui/components/_Button/TextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_ToggleBehaviour
#include <haxe/ui/components/_Button/ToggleBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_13057cf4e603c2d2_63_new,"haxe.ui.components.Button","new",0x541d2c0a,"haxe.ui.components.Button.new","haxe/ui/components/Button.hx",63,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_441_registerBehaviours,"haxe.ui.components.Button","registerBehaviours",0xef57fb6f,"haxe.ui.components.Button.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_repeater,"haxe.ui.components.Button","get_repeater",0x5a964fa7,"haxe.ui.components.Button.get_repeater","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_repeater,"haxe.ui.components.Button","set_repeater",0x6f8f731b,"haxe.ui.components.Button.set_repeater","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_repeatInterval,"haxe.ui.components.Button","get_repeatInterval",0x9bf4541f,"haxe.ui.components.Button.get_repeatInterval","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_repeatInterval,"haxe.ui.components.Button","set_repeatInterval",0x78a38693,"haxe.ui.components.Button.set_repeatInterval","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_easeInRepeater,"haxe.ui.components.Button","get_easeInRepeater",0x5698fb7a,"haxe.ui.components.Button.get_easeInRepeater","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_easeInRepeater,"haxe.ui.components.Button","set_easeInRepeater",0x33482dee,"haxe.ui.components.Button.set_easeInRepeater","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_remainPressed,"haxe.ui.components.Button","get_remainPressed",0x43ed0b17,"haxe.ui.components.Button.get_remainPressed","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_remainPressed,"haxe.ui.components.Button","set_remainPressed",0x675ae323,"haxe.ui.components.Button.set_remainPressed","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_toggle,"haxe.ui.components.Button","get_toggle",0x1132fcf3,"haxe.ui.components.Button.get_toggle","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_toggle,"haxe.ui.components.Button","set_toggle",0x14b09b67,"haxe.ui.components.Button.set_toggle","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_selected,"haxe.ui.components.Button","get_selected",0xfbadbd7a,"haxe.ui.components.Button.get_selected","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_selected,"haxe.ui.components.Button","set_selected",0x10a6e0ee,"haxe.ui.components.Button.set_selected","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_icon,"haxe.ui.components.Button","get_icon",0x8b85bf18,"haxe.ui.components.Button.get_icon","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_520_set_icon,"haxe.ui.components.Button","set_icon",0x39e3188c,"haxe.ui.components.Button.set_icon","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_475_get_componentGroup,"haxe.ui.components.Button","get_componentGroup",0x3f8599a1,"haxe.ui.components.Button.get_componentGroup","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_506_set_componentGroup,"haxe.ui.components.Button","set_componentGroup",0x1c34cc15,"haxe.ui.components.Button.set_componentGroup","haxe/ui/macros/Macros.hx",506,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_602_get_value,"haxe.ui.components.Button","get_value",0x046252f2,"haxe.ui.components.Button.get_value","haxe/ui/macros/Macros.hx",602,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_605_set_value,"haxe.ui.components.Button","set_value",0xe7b33efe,"haxe.ui.components.Button.set_value","haxe/ui/macros/Macros.hx",605,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_193_get_iconPosition,"haxe.ui.components.Button","get_iconPosition",0xa12af3e1,"haxe.ui.components.Button.get_iconPosition","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_206_set_iconPosition,"haxe.ui.components.Button","set_iconPosition",0xf76ce155,"haxe.ui.components.Button.set_iconPosition","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_193_get_fontSize,"haxe.ui.components.Button","get_fontSize",0x1912514f,"haxe.ui.components.Button.get_fontSize","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_206_set_fontSize,"haxe.ui.components.Button","set_fontSize",0x2e0b74c3,"haxe.ui.components.Button.set_fontSize","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_193_get_textAlign,"haxe.ui.components.Button","get_textAlign",0x68bf0ed9,"haxe.ui.components.Button.get_textAlign","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_206_set_textAlign,"haxe.ui.components.Button","set_textAlign",0xadc4f0e5,"haxe.ui.components.Button.set_textAlign","haxe/ui/macros/Macros.hx",206,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5ed56d518d8ec04e_565_cloneComponent,"haxe.ui.components.Button","cloneComponent",0x7a443a36,"haxe.ui.components.Button.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_423_self,"haxe.ui.components.Button","self",0x48b764a2,"haxe.ui.components.Button.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3a212889e7a03c26_138_registerComposite,"haxe.ui.components.Button","registerComposite",0x60ea964e,"haxe.ui.components.Button.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Button_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_13057cf4e603c2d2_63_new)
HXDLIN(  63)		super::__construct();
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x142c98ce) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x142c98ce;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void Button_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("repeater",88,bc,55,10),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("repeatInterval",c0,1f,6a,45),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(100));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("easeInRepeater",1b,c7,0e,00),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("remainPressed",96,4e,12,db),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 539)		this->behaviours->_hx_register(HX_("toggle",94,bf,43,8f),::hx::ClassOf< ::haxe::ui::components::_Button::ToggleBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selected",5b,2a,6d,b1),::hx::ClassOf< ::haxe::ui::components::_Button::SelectedBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("text",ad,cc,f9,4c),::hx::ClassOf< ::haxe::ui::components::_Button::TextBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),::hx::ClassOf< ::haxe::ui::components::_Button::IconBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("componentGroup",42,65,fb,e8),::hx::ClassOf< ::haxe::ui::components::_Button::GroupBehaviour >(),null());
            	}


bool Button_obj::get_repeater(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_repeater)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("repeater",88,bc,55,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_repeater,return )

bool Button_obj::set_repeater(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_repeater)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("repeater",88,bc,55,10),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("repeater",88,bc,55,10)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_repeater,return )

int Button_obj::get_repeatInterval(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_repeatInterval)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return 0;
            		}
HXLINE( 479)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("repeatInterval",c0,1f,6a,45)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_repeatInterval,return )

int Button_obj::set_repeatInterval(int value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_repeatInterval)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("repeatInterval",c0,1f,6a,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("repeatInterval",c0,1f,6a,45)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_repeatInterval,return )

bool Button_obj::get_easeInRepeater(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_easeInRepeater)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("easeInRepeater",1b,c7,0e,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_easeInRepeater,return )

bool Button_obj::set_easeInRepeater(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_easeInRepeater)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("easeInRepeater",1b,c7,0e,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("easeInRepeater",1b,c7,0e,00)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_easeInRepeater,return )

bool Button_obj::get_remainPressed(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_remainPressed)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("remainPressed",96,4e,12,db)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_remainPressed,return )

bool Button_obj::set_remainPressed(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_remainPressed)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("remainPressed",96,4e,12,db),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("remainPressed",96,4e,12,db)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_remainPressed,return )

bool Button_obj::get_toggle(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_toggle)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("toggle",94,bf,43,8f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_toggle,return )

bool Button_obj::set_toggle(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_toggle)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("toggle",94,bf,43,8f),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("toggle",94,bf,43,8f)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_toggle,return )

bool Button_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_selected)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return false;
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("selected",5b,2a,6d,b1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_selected,return )

bool Button_obj::set_selected(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_selected)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selected",5b,2a,6d,b1),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selected",5b,2a,6d,b1)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_selected,return )

 ::haxe::ui::util::VariantType Button_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_icon)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return this->behaviours->get(HX_("icon",79,e7,b2,45));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icon,return )

 ::haxe::ui::util::VariantType Button_obj::set_icon( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_520_set_icon)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		this->behaviours->set(HX_("icon",79,e7,b2,45),value);
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("icon",79,e7,b2,45)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icon,return )

::String Button_obj::get_componentGroup(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_475_get_componentGroup)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("componentGroup",42,65,fb,e8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_componentGroup,return )

::String Button_obj::set_componentGroup(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_506_set_componentGroup)
HXLINE( 507)		{
HXLINE( 507)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 507)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 508)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 509)					bool _hx_tmp;
HXDLIN( 509)					bool _hx_tmp1;
HXDLIN( 509)					if (::hx::IsNotNull( value )) {
HXLINE( 509)						_hx_tmp1 = (value.indexOf(HX_("{{",a0,6b,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp1 = false;
            					}
HXDLIN( 509)					if (_hx_tmp1) {
HXLINE( 509)						_hx_tmp = (value.indexOf(HX_("}}",60,6d,00,00),null()) != -1);
            					}
            					else {
HXLINE( 509)						_hx_tmp = false;
            					}
HXDLIN( 509)					if (_hx_tmp) {
HXLINE( 510)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("componentGroup",42,65,fb,e8),null(),value,null());
HXLINE( 511)						return value;
            					}
            				}
            			}
            		}
HXLINE( 515)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 515)		_hx_tmp->set(HX_("componentGroup",42,65,fb,e8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 516)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("componentGroup",42,65,fb,e8)));
HXLINE( 517)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_componentGroup,return )

 ::Dynamic Button_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_602_get_value)
HXDLIN( 602)		return this->get_text();
            	}


 ::Dynamic Button_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_605_set_value)
HXLINE( 606)		this->set_text(( (::String)(value) ));
HXLINE( 607)		return value;
            	}


::String Button_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_193_get_iconPosition)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->iconPosition )) {
HXLINE( 195)			return this->get_customStyle()->iconPosition;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->iconPosition );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconPosition,return )

::String Button_obj::set_iconPosition(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_206_set_iconPosition)
HXLINE( 207)		if ((this->get_customStyle()->iconPosition == value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->iconPosition = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->iconPosition = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconPosition,return )

 ::Dynamic Button_obj::get_fontSize(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_193_get_fontSize)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->fontSize )) {
HXLINE( 195)			return this->get_customStyle()->fontSize;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->fontSize );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->fontSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_fontSize,return )

 ::Dynamic Button_obj::set_fontSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_206_set_fontSize)
HXLINE( 207)		if (::hx::IsEq( this->get_customStyle()->fontSize,value )) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->fontSize = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->fontSize = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_fontSize,return )

::String Button_obj::get_textAlign(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_193_get_textAlign)
HXLINE( 194)		if (::hx::IsNotNull( this->get_customStyle()->textAlign )) {
HXLINE( 195)			return this->get_customStyle()->textAlign;
            		}
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( this->get_style() )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNull( this->get_style()->textAlign );
            		}
            		else {
HXLINE( 197)			_hx_tmp = true;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 198)			return null();
            		}
HXLINE( 200)		return this->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_textAlign,return )

::String Button_obj::set_textAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_206_set_textAlign)
HXLINE( 207)		if ((this->get_customStyle()->textAlign == value)) {
HXLINE( 208)			return value;
            		}
HXLINE( 210)		if (::hx::IsNull( this->_style )) {
HXLINE( 211)			this->_style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 213)		if (::hx::IsNull( value )) {
HXLINE( 214)			this->get_customStyle()->textAlign = null();
            		}
            		else {
HXLINE( 216)			this->get_customStyle()->textAlign = value;
            		}
HXLINE( 236)		{
HXLINE( 236)			this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 236)			{
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( this->_layout )) {
HXLINE( 240)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE( 240)				_hx_tmp = true;
            			}
HXDLIN( 240)			if (!(_hx_tmp)) {
HXLINE( 240)				this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 218)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_textAlign,return )

 ::haxe::ui::core::ComponentContainer Button_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_5ed56d518d8ec04e_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Button c = ( ( ::haxe::ui::components::Button)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_repeater(this->get_repeater());
HXDLIN( 382)		c->set_repeatInterval(this->get_repeatInterval());
HXDLIN( 382)		c->set_easeInRepeater(this->get_easeInRepeater());
HXDLIN( 382)		c->set_remainPressed(this->get_remainPressed());
HXDLIN( 382)		c->set_toggle(this->get_toggle());
HXDLIN( 382)		c->set_selected(this->get_selected());
HXLINE( 380)		if (::hx::IsNotNull( this->get_icon() )) {
HXLINE( 380)			c->set_icon(this->get_icon());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_componentGroup() )) {
HXLINE( 380)			c->set_componentGroup(this->get_componentGroup());
            		}
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer Button_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3a212889e7a03c26_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
            	}


void Button_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_3a212889e7a03c26_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::ButtonEvents >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::ButtonBuilder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::ButtonLayout >();
            	}



::hx::ObjectPtr< Button_obj > Button_obj::__new() {
	::hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Button_obj > Button_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Button_obj *__this = (Button_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "haxe.ui.components.Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Button_obj::Button_obj()
{
}

::hx::Val Button_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_toggle() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeater() ); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fontSize() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textAlign() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_toggle") ) { return ::hx::Val( get_toggle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toggle") ) { return ::hx::Val( set_toggle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_repeater") ) { return ::hx::Val( get_repeater_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeater") ) { return ::hx::Val( set_repeater_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_iconPosition() ); }
		if (HX_FIELD_EQ(inName,"get_fontSize") ) { return ::hx::Val( get_fontSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fontSize") ) { return ::hx::Val( set_fontSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remainPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_remainPressed() ); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return ::hx::Val( get_textAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return ::hx::Val( set_textAlign_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_repeatInterval() ); }
		if (HX_FIELD_EQ(inName,"easeInRepeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_easeInRepeater() ); }
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_componentGroup() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return ::hx::Val( get_iconPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return ::hx::Val( set_iconPosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_remainPressed") ) { return ::hx::Val( get_remainPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_remainPressed") ) { return ::hx::Val( set_remainPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_repeatInterval") ) { return ::hx::Val( get_repeatInterval_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_repeatInterval") ) { return ::hx::Val( set_repeatInterval_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_easeInRepeater") ) { return ::hx::Val( get_easeInRepeater_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_easeInRepeater") ) { return ::hx::Val( set_easeInRepeater_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_componentGroup") ) { return ::hx::Val( get_componentGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_componentGroup") ) { return ::hx::Val( set_componentGroup_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Button_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toggle(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeater(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fontSize(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textAlign(inValue.Cast< ::String >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_iconPosition(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"remainPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_remainPressed(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"repeatInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_repeatInterval(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"easeInRepeater") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_easeInRepeater(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"componentGroup") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_componentGroup(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("repeater",88,bc,55,10));
	outFields->push(HX_("repeatInterval",c0,1f,6a,45));
	outFields->push(HX_("easeInRepeater",1b,c7,0e,00));
	outFields->push(HX_("remainPressed",96,4e,12,db));
	outFields->push(HX_("toggle",94,bf,43,8f));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("componentGroup",42,65,fb,e8));
	outFields->push(HX_("iconPosition",42,e5,38,76));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	outFields->push(HX_("textAlign",d8,e6,7e,ba));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Button_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_repeater",91,70,6f,c5),
	HX_("set_repeater",05,94,68,da),
	HX_("get_repeatInterval",89,00,04,e1),
	HX_("set_repeatInterval",fd,32,b3,bd),
	HX_("get_easeInRepeater",e4,a7,a8,9b),
	HX_("set_easeInRepeater",58,da,57,78),
	HX_("get_remainPressed",ed,59,82,e1),
	HX_("set_remainPressed",f9,31,f0,04),
	HX_("get_toggle",5d,2f,cb,7f),
	HX_("set_toggle",d1,cd,48,83),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("get_componentGroup",0b,46,95,84),
	HX_("set_componentGroup",7f,78,44,61),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_iconPosition",cb,d1,d7,7a),
	HX_("set_iconPosition",3f,bf,19,d1),
	HX_("get_fontSize",39,72,eb,83),
	HX_("set_fontSize",ad,95,e4,98),
	HX_("get_textAlign",af,ba,e2,7b),
	HX_("set_textAlign",bb,9c,e8,c0),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

::hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	Button_obj _hx_dummy;
	Button_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Button",18,1f,c8,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Button_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
