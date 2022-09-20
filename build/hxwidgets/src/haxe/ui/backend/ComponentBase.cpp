#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_99836deeea93cd49_14_new,"haxe.ui.backend.ComponentBase","new",0xd4652b14,"haxe.ui.backend.ComponentBase.new","haxe/ui/backend/ComponentBase.hx",14,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_18_handleCreate,"haxe.ui.backend.ComponentBase","handleCreate",0xce8b3b90,"haxe.ui.backend.ComponentBase.handleCreate","haxe/ui/backend/ComponentBase.hx",18,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_22_handlePosition,"haxe.ui.backend.ComponentBase","handlePosition",0x9383c23d,"haxe.ui.backend.ComponentBase.handlePosition","haxe/ui/backend/ComponentBase.hx",22,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_26_handleSize,"haxe.ui.backend.ComponentBase","handleSize",0x9e9f6855,"haxe.ui.backend.ComponentBase.handleSize","haxe/ui/backend/ComponentBase.hx",26,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_30_handleReady,"haxe.ui.backend.ComponentBase","handleReady",0x96bd7a4f,"haxe.ui.backend.ComponentBase.handleReady","haxe/ui/backend/ComponentBase.hx",30,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_34_handleClipRect,"haxe.ui.backend.ComponentBase","handleClipRect",0x20f3b1a8,"haxe.ui.backend.ComponentBase.handleClipRect","haxe/ui/backend/ComponentBase.hx",34,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_38_handleVisibility,"haxe.ui.backend.ComponentBase","handleVisibility",0xa9515c66,"haxe.ui.backend.ComponentBase.handleVisibility","haxe/ui/backend/ComponentBase.hx",38,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_43_getComponentOffset,"haxe.ui.backend.ComponentBase","getComponentOffset",0x4d3b1806,"haxe.ui.backend.ComponentBase.getComponentOffset","haxe/ui/backend/ComponentBase.hx",43,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_48_get_isNativeScroller,"haxe.ui.backend.ComponentBase","get_isNativeScroller",0xfd9077d0,"haxe.ui.backend.ComponentBase.get_isNativeScroller","haxe/ui/backend/ComponentBase.hx",48,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_53_get_isScroller,"haxe.ui.backend.ComponentBase","get_isScroller",0xf7aba1d9,"haxe.ui.backend.ComponentBase.get_isScroller","haxe/ui/backend/ComponentBase.hx",53,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_56_handleFrameworkProperty,"haxe.ui.backend.ComponentBase","handleFrameworkProperty",0xa1ec52df,"haxe.ui.backend.ComponentBase.handleFrameworkProperty","haxe/ui/backend/ComponentBase.hx",56,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_64_handleSetComponentIndex,"haxe.ui.backend.ComponentBase","handleSetComponentIndex",0xc5d4e043,"haxe.ui.backend.ComponentBase.handleSetComponentIndex","haxe/ui/backend/ComponentBase.hx",64,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_69_handleAddComponent,"haxe.ui.backend.ComponentBase","handleAddComponent",0xc0238df0,"haxe.ui.backend.ComponentBase.handleAddComponent","haxe/ui/backend/ComponentBase.hx",69,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_73_handleAddComponentAt,"haxe.ui.backend.ComponentBase","handleAddComponentAt",0xba972303,"haxe.ui.backend.ComponentBase.handleAddComponentAt","haxe/ui/backend/ComponentBase.hx",73,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_77_handleRemoveComponent,"haxe.ui.backend.ComponentBase","handleRemoveComponent",0x2ce984c5,"haxe.ui.backend.ComponentBase.handleRemoveComponent","haxe/ui/backend/ComponentBase.hx",77,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_81_handleRemoveComponentAt,"haxe.ui.backend.ComponentBase","handleRemoveComponentAt",0x5de83918,"haxe.ui.backend.ComponentBase.handleRemoveComponentAt","haxe/ui/backend/ComponentBase.hx",81,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_84_applyStyle,"haxe.ui.backend.ComponentBase","applyStyle",0x631544af,"haxe.ui.backend.ComponentBase.applyStyle","haxe/ui/backend/ComponentBase.hx",84,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_90_mapEvent,"haxe.ui.backend.ComponentBase","mapEvent",0xd20c90aa,"haxe.ui.backend.ComponentBase.mapEvent","haxe/ui/backend/ComponentBase.hx",90,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_93_unmapEvent,"haxe.ui.backend.ComponentBase","unmapEvent",0xa6714303,"haxe.ui.backend.ComponentBase.unmapEvent","haxe/ui/backend/ComponentBase.hx",93,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_102_createTextDisplay,"haxe.ui.backend.ComponentBase","createTextDisplay",0x90522d2d,"haxe.ui.backend.ComponentBase.createTextDisplay","haxe/ui/backend/ComponentBase.hx",102,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_115_getTextDisplay,"haxe.ui.backend.ComponentBase","getTextDisplay",0x991a71eb,"haxe.ui.backend.ComponentBase.getTextDisplay","haxe/ui/backend/ComponentBase.hx",115,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_120_hasTextDisplay,"haxe.ui.backend.ComponentBase","hasTextDisplay",0x030661a7,"haxe.ui.backend.ComponentBase.hasTextDisplay","haxe/ui/backend/ComponentBase.hx",120,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_125_createTextInput,"haxe.ui.backend.ComponentBase","createTextInput",0xd908a635,"haxe.ui.backend.ComponentBase.createTextInput","haxe/ui/backend/ComponentBase.hx",125,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_138_getTextInput,"haxe.ui.backend.ComponentBase","getTextInput",0x6ab19f73,"haxe.ui.backend.ComponentBase.getTextInput","haxe/ui/backend/ComponentBase.hx",138,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_143_hasTextInput,"haxe.ui.backend.ComponentBase","hasTextInput",0xe8ace82f,"haxe.ui.backend.ComponentBase.hasTextInput","haxe/ui/backend/ComponentBase.hx",143,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_151_createImageDisplay,"haxe.ui.backend.ComponentBase","createImageDisplay",0x0891b10f,"haxe.ui.backend.ComponentBase.createImageDisplay","haxe/ui/backend/ComponentBase.hx",151,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_161_getImageDisplay,"haxe.ui.backend.ComponentBase","getImageDisplay",0xaf059291,"haxe.ui.backend.ComponentBase.getImageDisplay","haxe/ui/backend/ComponentBase.hx",161,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_166_hasImageDisplay,"haxe.ui.backend.ComponentBase","hasImageDisplay",0xf38b6755,"haxe.ui.backend.ComponentBase.hasImageDisplay","haxe/ui/backend/ComponentBase.hx",166,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_171_removeImageDisplay,"haxe.ui.backend.ComponentBase","removeImageDisplay",0x5aa9b257,"haxe.ui.backend.ComponentBase.removeImageDisplay","haxe/ui/backend/ComponentBase.hx",171,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_182_handlePreReposition,"haxe.ui.backend.ComponentBase","handlePreReposition",0xd9da234b,"haxe.ui.backend.ComponentBase.handlePreReposition","haxe/ui/backend/ComponentBase.hx",182,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_186_handlePostReposition,"haxe.ui.backend.ComponentBase","handlePostReposition",0x9825b870,"haxe.ui.backend.ComponentBase.handlePostReposition","haxe/ui/backend/ComponentBase.hx",186,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_196_getClassProperty,"haxe.ui.backend.ComponentBase","getClassProperty",0xa4e72303,"haxe.ui.backend.ComponentBase.getClassProperty","haxe/ui/backend/ComponentBase.hx",196,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_213_setClassProperty,"haxe.ui.backend.ComponentBase","setClassProperty",0xfb291077,"haxe.ui.backend.ComponentBase.setClassProperty","haxe/ui/backend/ComponentBase.hx",213,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_222_get_hasNativeEntry,"haxe.ui.backend.ComponentBase","get_hasNativeEntry",0xc806eeb6,"haxe.ui.backend.ComponentBase.get_hasNativeEntry","haxe/ui/backend/ComponentBase.hx",222,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_229_getNativeConfigProperty,"haxe.ui.backend.ComponentBase","getNativeConfigProperty",0xa7c5ad98,"haxe.ui.backend.ComponentBase.getNativeConfigProperty","haxe/ui/backend/ComponentBase.hx",229,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_234_getNativeConfigPropertyBool,"haxe.ui.backend.ComponentBase","getNativeConfigPropertyBool",0x717d09e2,"haxe.ui.backend.ComponentBase.getNativeConfigPropertyBool","haxe/ui/backend/ComponentBase.hx",234,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_239_getNativeConfigProperties,"haxe.ui.backend.ComponentBase","getNativeConfigProperties",0x66b277f6,"haxe.ui.backend.ComponentBase.getNativeConfigProperties","haxe/ui/backend/ComponentBase.hx",239,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_246_get_className,"haxe.ui.backend.ComponentBase","get_className",0x5f0aaa2e,"haxe.ui.backend.ComponentBase.get_className","haxe/ui/backend/ComponentBase.hx",246,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_256_get_nodeName,"haxe.ui.backend.ComponentBase","get_nodeName",0xabe63442,"haxe.ui.backend.ComponentBase.get_nodeName","haxe/ui/backend/ComponentBase.hx",256,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_99836deeea93cd49_266_get_nativeClassName,"haxe.ui.backend.ComponentBase","get_nativeClassName",0x38df0fd7,"haxe.ui.backend.ComponentBase.get_nativeClassName","haxe/ui/backend/ComponentBase.hx",266,0xb60bbb7d)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_442_registerBehaviours,"haxe.ui.backend.ComponentBase","registerBehaviours",0x97c877a5,"haxe.ui.backend.ComponentBase.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_e3dc0ef695412051_565_cloneComponent,"haxe.ui.backend.ComponentBase","cloneComponent",0xa108e36c,"haxe.ui.backend.ComponentBase.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_9f66ddde5f9eb820_423_self,"haxe.ui.backend.ComponentBase","self",0x076e8e58,"haxe.ui.backend.ComponentBase.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace backend{

void ComponentBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_14_new)
HXLINE( 264)		this->_nativeClassName = null();
HXLINE( 254)		this->_nodeName = null();
HXLINE( 244)		this->_className = null();
HXLINE(  14)		super::__construct();
            	}

Dynamic ComponentBase_obj::__CreateEmpty() { return new ComponentBase_obj; }

void *ComponentBase_obj::_hx_vtable = 0;

Dynamic ComponentBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentBase_obj > _hx_result = new ComponentBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			return inClassId==(int)0x1395e371 || inClassId==(int)0x241b0321;
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x7ec24579;
		}
	}
}

void ComponentBase_obj::handleCreate(bool native){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_18_handleCreate)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleCreate,(void))

void ComponentBase_obj::handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_22_handlePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,handlePosition,(void))

void ComponentBase_obj::handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_26_handleSize)
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentBase_obj,handleSize,(void))

void ComponentBase_obj::handleReady(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_30_handleReady)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handleReady,(void))

void ComponentBase_obj::handleClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_34_handleClipRect)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleClipRect,(void))

void ComponentBase_obj::handleVisibility(bool show){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_38_handleVisibility)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleVisibility,(void))

 ::haxe::ui::geom::Point ComponentBase_obj::getComponentOffset(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_43_getComponentOffset)
HXDLIN(  43)		return  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,0,0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,getComponentOffset,return )

bool ComponentBase_obj::get_isNativeScroller(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_48_get_isNativeScroller)
HXDLIN(  48)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isNativeScroller,return )

bool ComponentBase_obj::get_isScroller(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_53_get_isScroller)
HXDLIN(  53)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_isScroller,return )

void ComponentBase_obj::handleFrameworkProperty(::String id, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_56_handleFrameworkProperty)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleFrameworkProperty,(void))

void ComponentBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_64_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleSetComponentIndex,(void))

 ::haxe::ui::core::Component ComponentBase_obj::handleAddComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_69_handleAddComponent)
HXDLIN(  69)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,handleAddComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleAddComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_73_handleAddComponentAt)
HXDLIN(  73)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleAddComponentAt,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_77_handleRemoveComponent)
HXDLIN(  77)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleRemoveComponent,return )

 ::haxe::ui::core::Component ComponentBase_obj::handleRemoveComponentAt(int index,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_81_handleRemoveComponentAt)
HXDLIN(  81)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,handleRemoveComponentAt,return )

void ComponentBase_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_84_applyStyle)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,applyStyle,(void))

void ComponentBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_90_mapEvent)
            	}


void ComponentBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_93_unmapEvent)
            	}


 ::haxe::ui::core::TextDisplay ComponentBase_obj::createTextDisplay(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_102_createTextDisplay)
HXLINE( 103)		if (::hx::IsNull( this->_textDisplay )) {
HXLINE( 104)			this->_textDisplay =  ::haxe::ui::core::TextDisplay_obj::__alloc( HX_CTX );
HXLINE( 105)			this->_textDisplay->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 107)		if (::hx::IsNotNull( text )) {
HXLINE( 108)			this->_textDisplay->set_text(text);
            		}
HXLINE( 110)		return this->_textDisplay;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,createTextDisplay,return )

 ::haxe::ui::core::TextDisplay ComponentBase_obj::getTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_115_getTextDisplay)
HXDLIN( 115)		return this->createTextDisplay(null());
            	}


bool ComponentBase_obj::hasTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_120_hasTextDisplay)
HXDLIN( 120)		return ::hx::IsNotNull( this->_textDisplay );
            	}


 ::haxe::ui::core::TextInput ComponentBase_obj::createTextInput(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_125_createTextInput)
HXLINE( 126)		if (::hx::IsNull( this->_textInput )) {
HXLINE( 127)			this->_textInput =  ::haxe::ui::core::TextInput_obj::__alloc( HX_CTX );
HXLINE( 128)			this->_textInput->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 130)		if (::hx::IsNotNull( text )) {
HXLINE( 131)			this->_textInput->set_text(text);
            		}
HXLINE( 133)		return this->_textInput;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,createTextInput,return )

 ::haxe::ui::core::TextInput ComponentBase_obj::getTextInput(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_138_getTextInput)
HXDLIN( 138)		return this->createTextInput(null());
            	}


bool ComponentBase_obj::hasTextInput(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_143_hasTextInput)
HXDLIN( 143)		return ::hx::IsNotNull( this->_textInput );
            	}


 ::haxe::ui::core::ImageDisplay ComponentBase_obj::createImageDisplay(){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_151_createImageDisplay)
HXLINE( 152)		if (::hx::IsNull( this->_imageDisplay )) {
HXLINE( 153)			this->_imageDisplay =  ::haxe::ui::core::ImageDisplay_obj::__alloc( HX_CTX );
HXLINE( 154)			this->_imageDisplay->parentComponent = ::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 156)		return this->_imageDisplay;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,createImageDisplay,return )

 ::haxe::ui::core::ImageDisplay ComponentBase_obj::getImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_161_getImageDisplay)
HXDLIN( 161)		return this->createImageDisplay();
            	}


bool ComponentBase_obj::hasImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_166_hasImageDisplay)
HXDLIN( 166)		return ::hx::IsNotNull( this->_imageDisplay );
            	}


void ComponentBase_obj::removeImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_171_removeImageDisplay)
HXDLIN( 171)		if (::hx::IsNotNull( this->_imageDisplay )) {
HXLINE( 172)			this->_imageDisplay->dispose();
HXLINE( 173)			this->_imageDisplay = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,removeImageDisplay,(void))

void ComponentBase_obj::handlePreReposition(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_182_handlePreReposition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handlePreReposition,(void))

void ComponentBase_obj::handlePostReposition(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_186_handlePostReposition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,handlePostReposition,(void))

::String ComponentBase_obj::getClassProperty(::String name){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_196_getClassProperty)
HXLINE( 197)		::String v = null();
HXLINE( 198)		if (::hx::IsNotNull( this->_classProperties )) {
HXLINE( 199)			v = this->_classProperties->get_string(name);
            		}
HXLINE( 201)		if (::hx::IsNull( v )) {
HXLINE( 202)			::String c = ((::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).toLowerCase() + HX_(".",2e,00,00,00)) + name);
HXLINE( 203)			v = ::haxe::ui::Toolkit_obj::properties->get_string(c);
            		}
HXLINE( 205)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,getClassProperty,return )

void ComponentBase_obj::setClassProperty(::String name,::String value){
            	HX_GC_STACKFRAME(&_hx_pos_99836deeea93cd49_213_setClassProperty)
HXLINE( 214)		if (::hx::IsNull( this->_classProperties )) {
HXLINE( 215)			this->_classProperties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 217)		this->_classProperties->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,setClassProperty,(void))

bool ComponentBase_obj::get_hasNativeEntry(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_222_get_hasNativeEntry)
HXLINE( 223)		if (::hx::IsNull( this->_hasNativeEntry )) {
HXLINE( 224)			this->_hasNativeEntry = ::hx::IsNotNull( this->getNativeConfigProperty(HX_(".@id",ad,bc,98,1e),null()) );
            		}
HXLINE( 226)		return ( (bool)(this->_hasNativeEntry) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_hasNativeEntry,return )

::String ComponentBase_obj::getNativeConfigProperty(::String query,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_229_getNativeConfigProperty)
HXLINE( 230)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE( 231)		return ::haxe::ui::Toolkit_obj::nativeConfig->query(query,defaultValue,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,getNativeConfigProperty,return )

bool ComponentBase_obj::getNativeConfigPropertyBool(::String query,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_234_getNativeConfigPropertyBool)
HXLINE( 235)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE( 236)		return ::haxe::ui::Toolkit_obj::nativeConfig->queryBool(query,defaultValue,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentBase_obj,getNativeConfigPropertyBool,return )

 ::haxe::ds::StringMap ComponentBase_obj::getNativeConfigProperties(::String __o_query){
            		::String query = __o_query;
            		if (::hx::IsNull(__o_query)) query = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_239_getNativeConfigProperties)
HXLINE( 240)		query = (((HX_("component[id=",c4,01,3e,ef) + this->get_nativeClassName()) + HX_("]",5d,00,00,00)) + query);
HXLINE( 241)		return ::haxe::ui::Toolkit_obj::nativeConfig->queryValues(query,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentBase_obj,getNativeConfigProperties,return )

::String ComponentBase_obj::get_className(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_246_get_className)
HXLINE( 247)		if (::hx::IsNotNull( this->_className )) {
HXLINE( 248)			return this->_className;
            		}
HXLINE( 250)		this->_className = ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 251)		return this->_className;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_className,return )

::String ComponentBase_obj::get_nodeName(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_256_get_nodeName)
HXLINE( 257)		if (::hx::IsNotNull( this->_nodeName )) {
HXLINE( 258)			return this->_nodeName;
            		}
HXLINE( 260)		this->_nodeName = ( (::String)(this->get_className().split(HX_(".",2e,00,00,00))->pop()) ).toLowerCase();
HXLINE( 261)		return this->_nodeName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_nodeName,return )

::String ComponentBase_obj::get_nativeClassName(){
            	HX_STACKFRAME(&_hx_pos_99836deeea93cd49_266_get_nativeClassName)
HXLINE( 267)		if (::hx::IsNotNull( this->_nativeClassName )) {
HXLINE( 268)			return this->_nativeClassName;
            		}
HXLINE( 271)		::hx::Class r = ::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 272)		while(::hx::IsNotNull( r )){
HXLINE( 273)			::String c = ::Type_obj::getClassName(r);
HXLINE( 274)			::String t = ::haxe::ui::Toolkit_obj::nativeConfig->query(((HX_("component[id=",c4,01,3e,ef) + c) + HX_("].@class",e9,5b,5e,1f)),null(),::hx::ObjectPtr<OBJ_>(this));
HXLINE( 275)			if (::hx::IsNotNull( t )) {
HXLINE( 276)				this->_nativeClassName = c;
HXLINE( 277)				goto _hx_goto_39;
            			}
HXLINE( 279)			r = ::Type_obj::getSuperClass(r);
HXLINE( 280)			if (::hx::IsPointerEq( r,::hx::ClassOf< ::haxe::ui::core::Component >() )) {
HXLINE( 281)				goto _hx_goto_39;
            			}
            		}
            		_hx_goto_39:;
HXLINE( 285)		if (::hx::IsNull( this->_nativeClassName )) {
HXLINE( 286)			this->_nativeClassName = this->get_className();
            		}
HXLINE( 289)		return this->_nativeClassName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentBase_obj,get_nativeClassName,return )

void ComponentBase_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentBase_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_e3dc0ef695412051_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::backend::ComponentBase c = ( ( ::haxe::ui::backend::ComponentBase)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer ComponentBase_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9f66ddde5f9eb820_423_self)
HXDLIN( 423)		return  ::haxe::ui::backend::ComponentBase_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ComponentBase_obj > ComponentBase_obj::__new() {
	::hx::ObjectPtr< ComponentBase_obj > __this = new ComponentBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentBase_obj > ComponentBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentBase_obj *__this = (ComponentBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentBase_obj), true, "haxe.ui.backend.ComponentBase"));
	*(void **)__this = ComponentBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentBase_obj::ComponentBase_obj()
{
}

void ComponentBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentBase);
	HX_MARK_MEMBER_NAME(isNativeScroller,"isNativeScroller");
	HX_MARK_MEMBER_NAME(isScroller,"isScroller");
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_MARK_MEMBER_NAME(_textInput,"_textInput");
	HX_MARK_MEMBER_NAME(_imageDisplay,"_imageDisplay");
	HX_MARK_MEMBER_NAME(_classProperties,"_classProperties");
	HX_MARK_MEMBER_NAME(_hasNativeEntry,"_hasNativeEntry");
	HX_MARK_MEMBER_NAME(hasNativeEntry,"hasNativeEntry");
	HX_MARK_MEMBER_NAME(_className,"_className");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(_nodeName,"_nodeName");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(_nativeClassName,"_nativeClassName");
	HX_MARK_MEMBER_NAME(nativeClassName,"nativeClassName");
	 ::haxe::ui::core::ComponentBounds_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isNativeScroller,"isNativeScroller");
	HX_VISIT_MEMBER_NAME(isScroller,"isScroller");
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_VISIT_MEMBER_NAME(_textInput,"_textInput");
	HX_VISIT_MEMBER_NAME(_imageDisplay,"_imageDisplay");
	HX_VISIT_MEMBER_NAME(_classProperties,"_classProperties");
	HX_VISIT_MEMBER_NAME(_hasNativeEntry,"_hasNativeEntry");
	HX_VISIT_MEMBER_NAME(hasNativeEntry,"hasNativeEntry");
	HX_VISIT_MEMBER_NAME(_className,"_className");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(_nodeName,"_nodeName");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(_nativeClassName,"_nativeClassName");
	HX_VISIT_MEMBER_NAME(nativeClassName,"nativeClassName");
	 ::haxe::ui::core::ComponentBounds_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"nodeName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_nodeName() : nodeName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_className() : className ); }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { return ::hx::Val( _nodeName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handleSize") ) { return ::hx::Val( handleSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isScroller") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isScroller() : isScroller ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_textInput") ) { return ::hx::Val( _textInput ); }
		if (HX_FIELD_EQ(inName,"_className") ) { return ::hx::Val( _className ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"handleReady") ) { return ::hx::Val( handleReady_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handleCreate") ) { return ::hx::Val( handleCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return ::hx::Val( _textDisplay ); }
		if (HX_FIELD_EQ(inName,"getTextInput") ) { return ::hx::Val( getTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextInput") ) { return ::hx::Val( hasTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nodeName") ) { return ::hx::Val( get_nodeName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_imageDisplay") ) { return ::hx::Val( _imageDisplay ); }
		if (HX_FIELD_EQ(inName,"get_className") ) { return ::hx::Val( get_className_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handlePosition") ) { return ::hx::Val( handlePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleClipRect") ) { return ::hx::Val( handleClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_isScroller") ) { return ::hx::Val( get_isScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextDisplay") ) { return ::hx::Val( getTextDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextDisplay") ) { return ::hx::Val( hasTextDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNativeEntry") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasNativeEntry() : hasNativeEntry ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextInput") ) { return ::hx::Val( createTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImageDisplay") ) { return ::hx::Val( getImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasImageDisplay") ) { return ::hx::Val( hasImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hasNativeEntry") ) { return ::hx::Val( _hasNativeEntry ); }
		if (HX_FIELD_EQ(inName,"nativeClassName") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_nativeClassName() : nativeClassName ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleVisibility") ) { return ::hx::Val( handleVisibility_dyn() ); }
		if (HX_FIELD_EQ(inName,"isNativeScroller") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isNativeScroller() : isNativeScroller ); }
		if (HX_FIELD_EQ(inName,"getClassProperty") ) { return ::hx::Val( getClassProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"_classProperties") ) { return ::hx::Val( _classProperties ); }
		if (HX_FIELD_EQ(inName,"setClassProperty") ) { return ::hx::Val( setClassProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"_nativeClassName") ) { return ::hx::Val( _nativeClassName ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createTextDisplay") ) { return ::hx::Val( createTextDisplay_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getComponentOffset") ) { return ::hx::Val( getComponentOffset_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddComponent") ) { return ::hx::Val( handleAddComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createImageDisplay") ) { return ::hx::Val( createImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeImageDisplay") ) { return ::hx::Val( removeImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hasNativeEntry") ) { return ::hx::Val( get_hasNativeEntry_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handlePreReposition") ) { return ::hx::Val( handlePreReposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nativeClassName") ) { return ::hx::Val( get_nativeClassName_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_isNativeScroller") ) { return ::hx::Val( get_isNativeScroller_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleAddComponentAt") ) { return ::hx::Val( handleAddComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"handlePostReposition") ) { return ::hx::Val( handlePostReposition_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"handleRemoveComponent") ) { return ::hx::Val( handleRemoveComponent_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleFrameworkProperty") ) { return ::hx::Val( handleFrameworkProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return ::hx::Val( handleSetComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleRemoveComponentAt") ) { return ::hx::Val( handleRemoveComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getNativeConfigProperty") ) { return ::hx::Val( getNativeConfigProperty_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getNativeConfigProperties") ) { return ::hx::Val( getNativeConfigProperties_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getNativeConfigPropertyBool") ) { return ::hx::Val( getNativeConfigPropertyBool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nodeName") ) { _nodeName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isScroller") ) { isScroller=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textInput") ) { _textInput=inValue.Cast<  ::haxe::ui::core::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_className") ) { _className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast<  ::haxe::ui::core::TextDisplay >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_imageDisplay") ) { _imageDisplay=inValue.Cast<  ::haxe::ui::core::ImageDisplay >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasNativeEntry") ) { hasNativeEntry=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_hasNativeEntry") ) { _hasNativeEntry=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nativeClassName") ) { nativeClassName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isNativeScroller") ) { isNativeScroller=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classProperties") ) { _classProperties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nativeClassName") ) { _nativeClassName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isNativeScroller",fb,b7,18,46));
	outFields->push(HX_("isScroller",c4,1f,04,07));
	outFields->push(HX_("_textDisplay",16,d3,d3,fc));
	outFields->push(HX_("_textInput",de,cf,ad,b2));
	outFields->push(HX_("_imageDisplay",06,37,81,8d));
	outFields->push(HX_("_classProperties",cc,30,e5,db));
	outFields->push(HX_("_hasNativeEntry",c0,86,6c,12));
	outFields->push(HX_("hasNativeEntry",21,3e,0c,c9));
	outFields->push(HX_("_className",64,0e,e0,37));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("_nodeName",cc,c8,12,3a));
	outFields->push(HX_("nodeName",6d,d1,7c,f2));
	outFields->push(HX_("_nativeClassName",8d,80,5e,07));
	outFields->push(HX_("nativeClassName",0c,3e,7f,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isNativeScroller),HX_("isNativeScroller",fb,b7,18,46)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,isScroller),HX_("isScroller",c4,1f,04,07)},
	{::hx::fsObject /*  ::haxe::ui::core::TextDisplay */ ,(int)offsetof(ComponentBase_obj,_textDisplay),HX_("_textDisplay",16,d3,d3,fc)},
	{::hx::fsObject /*  ::haxe::ui::core::TextInput */ ,(int)offsetof(ComponentBase_obj,_textInput),HX_("_textInput",de,cf,ad,b2)},
	{::hx::fsObject /*  ::haxe::ui::core::ImageDisplay */ ,(int)offsetof(ComponentBase_obj,_imageDisplay),HX_("_imageDisplay",06,37,81,8d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentBase_obj,_classProperties),HX_("_classProperties",cc,30,e5,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ComponentBase_obj,_hasNativeEntry),HX_("_hasNativeEntry",c0,86,6c,12)},
	{::hx::fsBool,(int)offsetof(ComponentBase_obj,hasNativeEntry),HX_("hasNativeEntry",21,3e,0c,c9)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_className),HX_("_className",64,0e,e0,37)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,className),HX_("className",a3,92,3d,dc)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_nodeName),HX_("_nodeName",cc,c8,12,3a)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,nodeName),HX_("nodeName",6d,d1,7c,f2)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,_nativeClassName),HX_("_nativeClassName",8d,80,5e,07)},
	{::hx::fsString,(int)offsetof(ComponentBase_obj,nativeClassName),HX_("nativeClassName",0c,3e,7f,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentBase_obj_sMemberFields[] = {
	HX_("handleCreate",c4,8c,3b,ca),
	HX_("handlePosition",71,c8,d1,18),
	HX_("handleSize",89,44,f9,6a),
	HX_("handleReady",9b,4b,04,99),
	HX_("handleClipRect",dc,b7,41,a6),
	HX_("handleVisibility",9a,57,d4,a2),
	HX_("getComponentOffset",3a,48,da,e9),
	HX_("isNativeScroller",fb,b7,18,46),
	HX_("get_isNativeScroller",04,1d,83,64),
	HX_("isScroller",c4,1f,04,07),
	HX_("get_isScroller",0d,a8,f9,7c),
	HX_("handleFrameworkProperty",2b,e6,cd,d0),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("handleAddComponent",24,be,c2,5c),
	HX_("handleAddComponentAt",37,c8,89,21),
	HX_("handleRemoveComponent",11,6d,47,da),
	HX_("handleRemoveComponentAt",64,cc,c9,8c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("_textDisplay",16,d3,d3,fc),
	HX_("createTextDisplay",79,ff,6a,e9),
	HX_("getTextDisplay",1f,78,68,1e),
	HX_("hasTextDisplay",db,67,54,88),
	HX_("_textInput",de,cf,ad,b2),
	HX_("createTextInput",81,0d,00,f8),
	HX_("getTextInput",a7,f0,61,66),
	HX_("hasTextInput",63,39,5d,e4),
	HX_("_imageDisplay",06,37,81,8d),
	HX_("createImageDisplay",43,e1,30,a5),
	HX_("getImageDisplay",dd,f9,fc,cd),
	HX_("hasImageDisplay",a1,ce,82,12),
	HX_("removeImageDisplay",8b,e2,48,f7),
	HX_("handlePreReposition",97,20,85,48),
	HX_("handlePostReposition",a4,5d,18,ff),
	HX_("getClassProperty",37,1e,6a,9e),
	HX_("_classProperties",cc,30,e5,db),
	HX_("setClassProperty",ab,0b,ac,f4),
	HX_("_hasNativeEntry",c0,86,6c,12),
	HX_("hasNativeEntry",21,3e,0c,c9),
	HX_("get_hasNativeEntry",ea,1e,a6,64),
	HX_("getNativeConfigProperty",e4,40,a7,d6),
	HX_("getNativeConfigPropertyBool",2e,33,98,ce),
	HX_("getNativeConfigProperties",42,76,98,3f),
	HX_("_className",64,0e,e0,37),
	HX_("className",a3,92,3d,dc),
	HX_("get_className",7a,66,a1,9d),
	HX_("_nodeName",cc,c8,12,3a),
	HX_("nodeName",6d,d1,7c,f2),
	HX_("get_nodeName",76,85,96,a7),
	HX_("_nativeClassName",8d,80,5e,07),
	HX_("nativeClassName",0c,3e,7f,1c),
	HX_("get_nativeClassName",23,0d,8a,a7),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentBase_obj::__mClass;

void ComponentBase_obj::__register()
{
	ComponentBase_obj _hx_dummy;
	ComponentBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentBase",22,51,8d,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
