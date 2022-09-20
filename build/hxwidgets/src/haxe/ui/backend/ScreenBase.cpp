#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_14_get_options,"haxe.ui.backend.ScreenBase","get_options",0x84d1b2f0,"haxe.ui.backend.ScreenBase.get_options","haxe/ui/backend/ScreenBase.hx",14,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_16_set_options,"haxe.ui.backend.ScreenBase","set_options",0x8f3eb9fc,"haxe.ui.backend.ScreenBase.set_options","haxe/ui/backend/ScreenBase.hx",16,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_23_get_dpi,"haxe.ui.backend.ScreenBase","get_dpi",0x63a011ef,"haxe.ui.backend.ScreenBase.get_dpi","haxe/ui/backend/ScreenBase.hx",23,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_28_get_title,"haxe.ui.backend.ScreenBase","get_title",0xcb0d2caa,"haxe.ui.backend.ScreenBase.get_title","haxe/ui/backend/ScreenBase.hx",28,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_31_set_title,"haxe.ui.backend.ScreenBase","set_title",0xae5e18b6,"haxe.ui.backend.ScreenBase.set_title","haxe/ui/backend/ScreenBase.hx",31,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_36_get_width,"haxe.ui.backend.ScreenBase","get_width",0x8534cd18,"haxe.ui.backend.ScreenBase.get_width","haxe/ui/backend/ScreenBase.hx",36,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_41_get_height,"haxe.ui.backend.ScreenBase","get_height",0xbf4e2095,"haxe.ui.backend.ScreenBase.get_height","haxe/ui/backend/ScreenBase.hx",41,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_46_get_actualWidth,"haxe.ui.backend.ScreenBase","get_actualWidth",0x36c1892a,"haxe.ui.backend.ScreenBase.get_actualWidth","haxe/ui/backend/ScreenBase.hx",46,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_51_get_actualHeight,"haxe.ui.backend.ScreenBase","get_actualHeight",0x68e5f443,"haxe.ui.backend.ScreenBase.get_actualHeight","haxe/ui/backend/ScreenBase.hx",51,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_56_get_isRetina,"haxe.ui.backend.ScreenBase","get_isRetina",0xf5ca41d3,"haxe.ui.backend.ScreenBase.get_isRetina","haxe/ui/backend/ScreenBase.hx",56,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_60_get_topComponent,"haxe.ui.backend.ScreenBase","get_topComponent",0x2e243e96,"haxe.ui.backend.ScreenBase.get_topComponent","haxe/ui/backend/ScreenBase.hx",60,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_84_addComponent,"haxe.ui.backend.ScreenBase","addComponent",0xedca7e81,"haxe.ui.backend.ScreenBase.addComponent","haxe/ui/backend/ScreenBase.hx",84,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_88_removeComponent,"haxe.ui.backend.ScreenBase","removeComponent",0x8e1084d4,"haxe.ui.backend.ScreenBase.removeComponent","haxe/ui/backend/ScreenBase.hx",88,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_91_handleSetComponentIndex,"haxe.ui.backend.ScreenBase","handleSetComponentIndex",0x47be5f8a,"haxe.ui.backend.ScreenBase.handleSetComponentIndex","haxe/ui/backend/ScreenBase.hx",91,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_94_resizeComponent,"haxe.ui.backend.ScreenBase","resizeComponent",0xa9909124,"haxe.ui.backend.ScreenBase.resizeComponent","haxe/ui/backend/ScreenBase.hx",94,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_108_refreshStyleRootComponents,"haxe.ui.backend.ScreenBase","refreshStyleRootComponents",0x33d888b3,"haxe.ui.backend.ScreenBase.refreshStyleRootComponents","haxe/ui/backend/ScreenBase.hx",108,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_114_resizeRootComponents,"haxe.ui.backend.ScreenBase","resizeRootComponents",0x3bfff011,"haxe.ui.backend.ScreenBase.resizeRootComponents","haxe/ui/backend/ScreenBase.hx",114,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_121__refreshStyleComponent,"haxe.ui.backend.ScreenBase","_refreshStyleComponent",0xc823da2d,"haxe.ui.backend.ScreenBase._refreshStyleComponent","haxe/ui/backend/ScreenBase.hx",121,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_130__onRootComponentResize,"haxe.ui.backend.ScreenBase","_onRootComponentResize",0x1590e656,"haxe.ui.backend.ScreenBase._onRootComponentResize","haxe/ui/backend/ScreenBase.hx",130,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_134_invalidateAll,"haxe.ui.backend.ScreenBase","invalidateAll",0x05e6aaa1,"haxe.ui.backend.ScreenBase.invalidateAll","haxe/ui/backend/ScreenBase.hx",134,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_139_invalidateChildren,"haxe.ui.backend.ScreenBase","invalidateChildren",0xedd9f7bf,"haxe.ui.backend.ScreenBase.invalidateChildren","haxe/ui/backend/ScreenBase.hx",139,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_150_supportsEvent,"haxe.ui.backend.ScreenBase","supportsEvent",0x0daeec31,"haxe.ui.backend.ScreenBase.supportsEvent","haxe/ui/backend/ScreenBase.hx",150,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_153_mapEvent,"haxe.ui.backend.ScreenBase","mapEvent",0xf34d6d83,"haxe.ui.backend.ScreenBase.mapEvent","haxe/ui/backend/ScreenBase.hx",153,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_156_unmapEvent,"haxe.ui.backend.ScreenBase","unmapEvent",0x3f45c81c,"haxe.ui.backend.ScreenBase.unmapEvent","haxe/ui/backend/ScreenBase.hx",156,0xded7efb4)
namespace haxe{
namespace ui{
namespace backend{

void ScreenBase_obj::__construct() { }

Dynamic ScreenBase_obj::__CreateEmpty() { return new ScreenBase_obj; }

void *ScreenBase_obj::_hx_vtable = 0;

Dynamic ScreenBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenBase_obj > _hx_result = new ScreenBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f344a3f;
}

 ::Dynamic ScreenBase_obj::get_options(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_14_get_options)
HXDLIN(  14)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_options,return )

 ::Dynamic ScreenBase_obj::set_options( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_16_set_options)
HXLINE(  17)		this->_options = value;
HXLINE(  18)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_options,return )

Float ScreenBase_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_23_get_dpi)
HXDLIN(  23)		return ( (Float)(72) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_dpi,return )

::String ScreenBase_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_28_get_title)
HXDLIN(  28)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_title,return )

::String ScreenBase_obj::set_title(::String s){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_31_set_title)
HXDLIN(  31)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_title,return )

Float ScreenBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_36_get_width)
HXDLIN(  36)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_width,return )

Float ScreenBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_41_get_height)
HXDLIN(  41)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_height,return )

Float ScreenBase_obj::get_actualWidth(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_46_get_actualWidth)
HXDLIN(  46)		Float _hx_tmp = this->get_width();
HXDLIN(  46)		return (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_actualWidth,return )

Float ScreenBase_obj::get_actualHeight(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_51_get_actualHeight)
HXDLIN(  51)		Float _hx_tmp = this->get_height();
HXDLIN(  51)		return (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_actualHeight,return )

bool ScreenBase_obj::get_isRetina(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_56_get_isRetina)
HXDLIN(  56)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_isRetina,return )

 ::haxe::ui::core::Component ScreenBase_obj::get_topComponent(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_60_get_topComponent)
HXLINE(  61)		if ((this->rootComponents->length == 0)) {
HXLINE(  62)			return null();
            		}
HXLINE(  68)		int n = (this->rootComponents->length - 1);
HXLINE(  69)		 ::haxe::ui::core::Component c = null();
HXLINE(  70)		while((n >= 0)){
HXLINE(  71)			c = this->rootComponents->__get(n).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  72)			if (::hx::IsNull( c->get_style() )) {
HXLINE(  73)				goto _hx_goto_10;
            			}
HXLINE(  75)			if ((c->get_style()->pointerEvents != HX_("none",b8,12,0a,49))) {
HXLINE(  76)				goto _hx_goto_10;
            			}
HXLINE(  78)			n = (n - 1);
            		}
            		_hx_goto_10:;
HXLINE(  80)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_topComponent,return )

 ::haxe::ui::core::Component ScreenBase_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_84_addComponent)
HXDLIN(  84)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,addComponent,return )

 ::haxe::ui::core::Component ScreenBase_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_88_removeComponent)
HXDLIN(  88)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,removeComponent,return )

void ScreenBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_91_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,handleSetComponentIndex,(void))

void ScreenBase_obj::resizeComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_94_resizeComponent)
HXLINE(  95)		 ::Dynamic cx = null();
HXLINE(  96)		 ::Dynamic cy = null();
HXLINE(  98)		if (::hx::IsGreater( c->get_percentWidth(),0 )) {
HXLINE(  99)			Float cx1 = this->get_width();
HXDLIN(  99)			cx = ((cx1 * ( (Float)(c->get_percentWidth()) )) / ( (Float)(100) ));
            		}
HXLINE( 101)		if (::hx::IsGreater( c->get_percentHeight(),0 )) {
HXLINE( 102)			Float cy1 = this->get_height();
HXDLIN( 102)			cy = ((cy1 * ( (Float)(c->get_percentHeight()) )) / ( (Float)(100) ));
            		}
HXLINE( 104)		c->resizeComponent(cx,cy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,resizeComponent,(void))

void ScreenBase_obj::refreshStyleRootComponents(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_108_refreshStyleRootComponents)
HXDLIN( 108)		int _g = 0;
HXDLIN( 108)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 108)		while((_g < _g1->length)){
HXDLIN( 108)			 ::haxe::ui::core::Component component = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 108)			_g = (_g + 1);
HXLINE( 109)			this->_refreshStyleComponent(component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,refreshStyleRootComponents,(void))

void ScreenBase_obj::resizeRootComponents(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_114_resizeRootComponents)
HXDLIN( 114)		int _g = 0;
HXDLIN( 114)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 114)		while((_g < _g1->length)){
HXDLIN( 114)			 ::haxe::ui::core::Component component = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 114)			_g = (_g + 1);
HXLINE( 115)			this->resizeComponent(component);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,resizeRootComponents,(void))

void ScreenBase_obj::_refreshStyleComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_121__refreshStyleComponent)
HXDLIN( 121)		int _g = 0;
HXDLIN( 121)		::Array< ::Dynamic> _g1;
HXDLIN( 121)		if (::hx::IsNull( component->_children )) {
HXDLIN( 121)			_g1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXDLIN( 121)			_g1 = component->_children;
            		}
HXDLIN( 121)		while((_g < _g1->length)){
HXDLIN( 121)			 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 121)			_g = (_g + 1);
HXLINE( 123)			{
HXLINE( 123)				child->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 123)				{
            				}
            			}
HXLINE( 124)			child->invalidateComponent(HX_("display",42,2a,4a,bb),false);
HXLINE( 125)			this->_refreshStyleComponent(child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,_refreshStyleComponent,(void))

void ScreenBase_obj::_onRootComponentResize( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_130__onRootComponentResize)
HXDLIN( 130)		this->_refreshStyleComponent(e->target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,_onRootComponentResize,(void))

void ScreenBase_obj::invalidateAll(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_134_invalidateAll)
HXDLIN( 134)		int _g = 0;
HXDLIN( 134)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 134)		while((_g < _g1->length)){
HXDLIN( 134)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 134)			_g = (_g + 1);
HXLINE( 135)			this->invalidateChildren(c,flag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,invalidateAll,(void))

void ScreenBase_obj::invalidateChildren( ::haxe::ui::core::Component c,::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_139_invalidateChildren)
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			::Array< ::Dynamic> _g1;
HXDLIN( 140)			if (::hx::IsNull( c->_children )) {
HXLINE( 140)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 140)				_g1 = c->_children;
            			}
HXDLIN( 140)			while((_g < _g1->length)){
HXLINE( 140)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 140)				_g = (_g + 1);
HXLINE( 141)				this->invalidateChildren(child,flag);
            			}
            		}
HXLINE( 143)		c->invalidateComponent(flag,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,invalidateChildren,(void))

bool ScreenBase_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_150_supportsEvent)
HXDLIN( 150)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,supportsEvent,return )

void ScreenBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_153_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,mapEvent,(void))

void ScreenBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_156_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,unmapEvent,(void))


ScreenBase_obj::ScreenBase_obj()
{
}

void ScreenBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenBase);
	HX_MARK_MEMBER_NAME(rootComponents,"rootComponents");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(actualWidth,"actualWidth");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	HX_MARK_MEMBER_NAME(isRetina,"isRetina");
	HX_MARK_MEMBER_NAME(topComponent,"topComponent");
	HX_MARK_END_CLASS();
}

void ScreenBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rootComponents,"rootComponents");
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(actualWidth,"actualWidth");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	HX_VISIT_MEMBER_NAME(isRetina,"isRetina");
	HX_VISIT_MEMBER_NAME(topComponent,"topComponent");
}

::hx::Val ScreenBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dpi() : dpi ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_height() : height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_options() ); }
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return ::hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		if (HX_FIELD_EQ(inName,"isRetina") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isRetina() : isRetina ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return ::hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return ::hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return ::hx::Val( get_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return ::hx::Val( set_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"actualWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualWidth() : actualWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualHeight() : actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_isRetina") ) { return ::hx::Val( get_isRetina_dyn() ); }
		if (HX_FIELD_EQ(inName,"topComponent") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_topComponent() : topComponent ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidateAll") ) { return ::hx::Val( invalidateAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return ::hx::Val( supportsEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { return ::hx::Val( rootComponents ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_actualWidth") ) { return ::hx::Val( get_actualWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return ::hx::Val( resizeComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_actualHeight") ) { return ::hx::Val( get_actualHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_topComponent") ) { return ::hx::Val( get_topComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidateChildren") ) { return ::hx::Val( invalidateChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"resizeRootComponents") ) { return ::hx::Val( resizeRootComponents_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_refreshStyleComponent") ) { return ::hx::Val( _refreshStyleComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onRootComponentResize") ) { return ::hx::Val( _onRootComponentResize_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"refreshStyleRootComponents") ) { return ::hx::Val( refreshStyleRootComponents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_title(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_options(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRetina") ) { isRetina=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { actualWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topComponent") ) { topComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rootComponents") ) { rootComponents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rootComponents",d8,65,3e,27));
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("dpi",5d,43,4c,00));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("actualWidth",98,d8,41,38));
	outFields->push(HX_("actualHeight",15,25,ab,b7));
	outFields->push(HX_("isRetina",a5,21,8e,61));
	outFields->push(HX_("topComponent",68,6f,e9,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScreenBase_obj,rootComponents),HX_("rootComponents",d8,65,3e,27)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScreenBase_obj,_options),HX_("_options",df,8c,b6,19)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,dpi),HX_("dpi",5d,43,4c,00)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,actualWidth),HX_("actualWidth",98,d8,41,38)},
	{::hx::fsFloat,(int)offsetof(ScreenBase_obj,actualHeight),HX_("actualHeight",15,25,ab,b7)},
	{::hx::fsBool,(int)offsetof(ScreenBase_obj,isRetina),HX_("isRetina",a5,21,8e,61)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ScreenBase_obj,topComponent),HX_("topComponent",68,6f,e9,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenBase_obj_sMemberFields[] = {
	HX_("rootComponents",d8,65,3e,27),
	HX_("_options",df,8c,b6,19),
	HX_("get_options",75,93,f8,65),
	HX_("set_options",81,9a,65,70),
	HX_("dpi",5d,43,4c,00),
	HX_("get_dpi",f4,0b,c1,26),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("actualWidth",98,d8,41,38),
	HX_("get_actualWidth",2f,90,23,f9),
	HX_("actualHeight",15,25,ab,b7),
	HX_("get_actualHeight",9e,11,4a,bc),
	HX_("isRetina",a5,21,8e,61),
	HX_("get_isRetina",ae,d5,a7,16),
	HX_("topComponent",68,6f,e9,7c),
	HX_("get_topComponent",f1,5b,88,81),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("refreshStyleRootComponents",ce,05,73,2d),
	HX_("resizeRootComponents",ec,56,ad,15),
	HX_("_refreshStyleComponent",c8,ed,1c,75),
	HX_("_onRootComponentResize",f1,f9,89,c2),
	HX_("invalidateAll",66,76,ea,a6),
	HX_("invalidateChildren",da,61,84,f8),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	::String(null()) };

::hx::Class ScreenBase_obj::__mClass;

void ScreenBase_obj::__register()
{
	ScreenBase_obj _hx_dummy;
	ScreenBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenBase",69,73,9f,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
