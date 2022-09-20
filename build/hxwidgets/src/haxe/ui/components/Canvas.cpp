#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Canvas
#include <haxe/ui/components/Canvas.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Canvas_DataSourceBehaviour
#include <haxe/ui/components/_Canvas/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_ComponentGraphics
#include <haxe/ui/graphics/ComponentGraphics.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_DrawCommand
#include <haxe/ui/graphics/DrawCommand.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_15_new,"haxe.ui.components.Canvas","new",0xdd8989f0,"haxe.ui.components.Canvas.new","haxe/ui/components/Canvas.hx",15,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_20_validateComponentLayout,"haxe.ui.components.Canvas","validateComponentLayout",0xbd69f0e1,"haxe.ui.components.Canvas.validateComponentLayout","haxe/ui/components/Canvas.hx",20,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_26_cloneComponent,"haxe.ui.components.Canvas","cloneComponent",0x6d277a10,"haxe.ui.components.Canvas.cloneComponent","haxe/ui/components/Canvas.hx",26,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_441_registerBehaviours,"haxe.ui.components.Canvas","registerBehaviours",0x53a13049,"haxe.ui.components.Canvas.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_475_get_dataSource,"haxe.ui.components.Canvas","get_dataSource",0xda998f5e,"haxe.ui.components.Canvas.get_dataSource","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_520_set_dataSource,"haxe.ui.components.Canvas","set_dataSource",0xfab977d2,"haxe.ui.components.Canvas.set_dataSource","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_423_self,"haxe.ui.components.Canvas","self",0xfe1d2ffc,"haxe.ui.components.Canvas.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Canvas_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  17)		this->componentGraphics =  ::haxe::ui::graphics::ComponentGraphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Canvas_obj::__CreateEmpty() { return new Canvas_obj; }

void *Canvas_obj::_hx_vtable = 0;

Dynamic Canvas_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Canvas_obj > _hx_result = new Canvas_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Canvas_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
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
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x715d6dae) {
				return inClassId==(int)0x4ba87886 || inClassId==(int)0x715d6dae;
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7d7b3d88 || inClassId==(int)0x7ec24579;
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_components_Canvas__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::components::Canvas_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::components::Canvas_obj::set_dataSource,
};

void *Canvas_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_components_Canvas__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

bool Canvas_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_20_validateComponentLayout)
HXLINE(  21)		bool b = this->super::validateComponentLayout();
HXLINE(  22)		 ::haxe::ui::graphics::ComponentGraphics _hx_tmp = this->componentGraphics;
HXDLIN(  22)		 ::Dynamic _hx_tmp1 = this->get_width();
HXDLIN(  22)		_hx_tmp->resize(_hx_tmp1,this->get_height());
HXLINE(  23)		return b;
            	}


 ::haxe::ui::core::ComponentContainer Canvas_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_26_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Canvas c = ( ( ::haxe::ui::components::Canvas)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_dataSource() )) {
HXLINE( 380)			c->set_dataSource(this->get_dataSource());
            		}
HXLINE(  27)		c->componentGraphics->_drawCommands = this->componentGraphics->_drawCommands->copy();
HXLINE(  28)		c->componentGraphics->replayDrawCommands();
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


void Canvas_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_5790446160793ebf_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::components::_Canvas::DataSourceBehaviour >(),null());
            	}


 ::haxe::ui::data::DataSource Canvas_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_5790446160793ebf_475_get_dataSource)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource Canvas_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_5790446160793ebf_520_set_dataSource)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("dataSource",a5,76,d3,1d)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_dataSource,return )

 ::haxe::ui::core::ComponentContainer Canvas_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_5790446160793ebf_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Canvas_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Canvas_obj > Canvas_obj::__new() {
	::hx::ObjectPtr< Canvas_obj > __this = new Canvas_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Canvas_obj > Canvas_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Canvas_obj *__this = (Canvas_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Canvas_obj), true, "haxe.ui.components.Canvas"));
	*(void **)__this = Canvas_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(componentGraphics,"componentGraphics");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentGraphics,"componentGraphics");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Canvas_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentGraphics") ) { return ::hx::Val( componentGraphics ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Canvas_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentGraphics") ) { componentGraphics=inValue.Cast<  ::haxe::ui::graphics::ComponentGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentGraphics",a8,2a,18,15));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Canvas_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::graphics::ComponentGraphics */ ,(int)offsetof(Canvas_obj,componentGraphics),HX_("componentGraphics",a8,2a,18,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Canvas_obj_sStaticStorageInfo = 0;
#endif

static ::String Canvas_obj_sMemberFields[] = {
	HX_("componentGraphics",a8,2a,18,15),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	Canvas_obj _hx_dummy;
	Canvas_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Canvas",fe,11,2a,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Canvas_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Canvas_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Canvas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Canvas_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
