#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons
#include <haxe/ui/backend/hxwidgets/TreeViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#include <haxe/ui/backend/hxwidgets/custom/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTreeCtrl
#include <hx/widgets/DataViewTreeCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_10_new,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","new",0x39a45d2f,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.new","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",10,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_19_onInitialize,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","onInitialize",0x1773b4a0,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.onInitialize","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",19,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_27_dataViewItemToNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","dataViewItemToNode",0xe74e1930,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.dataViewItemToNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",27,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_34_dataViewItemChildren,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","dataViewItemChildren",0x0bf42812,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.dataViewItemChildren","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",34,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_57_createNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","createNode",0xc27b062f,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.createNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",57,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_87_removeNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","removeNode",0x2d0c7f77,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.removeNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",87,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_93_clearNodes,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","clearNodes",0xdbac3275,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.clearNodes","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",93,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_103_deleteDataViewItem,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","deleteDataViewItem",0x42565b3e,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.deleteDataViewItem","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",103,0x2d9f6ac0)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void TreeViewBuilder_obj::__construct( ::haxe::ui::containers::TreeView treeview){
            	HX_GC_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_10_new)
HXLINE(  56)		this->_dataViewItemToNodeMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  12)		this->nodesToCreate = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  11)		this->_treeview = null();
HXLINE(  15)		super::__construct(treeview);
HXLINE(  16)		this->_treeview = treeview;
            	}

Dynamic TreeViewBuilder_obj::__CreateEmpty() { return new TreeViewBuilder_obj; }

void *TreeViewBuilder_obj::_hx_vtable = 0;

Dynamic TreeViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewBuilder_obj > _hx_result = new TreeViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x0d6b3e23;
	}
}

void TreeViewBuilder_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_19_onInitialize)
HXLINE(  20)		this->super::onInitialize();
HXLINE(  21)		{
HXLINE(  21)			int _g = 0;
HXDLIN(  21)			::Array< ::Dynamic> _g1 = this->nodesToCreate;
HXDLIN(  21)			while((_g < _g1->length)){
HXLINE(  21)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = _g1->__get(_g).StaticCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >();
HXDLIN(  21)				_g = (_g + 1);
HXLINE(  22)				this->createNode(node);
            			}
            		}
HXLINE(  24)		this->nodesToCreate = null();
            	}


 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode TreeViewBuilder_obj::dataViewItemToNode( ::hx::widgets::DataViewItem dataViewItem){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_27_dataViewItemToNode)
HXLINE(  28)		if (::hx::IsNull( dataViewItem )) {
HXLINE(  29)			return null();
            		}
HXLINE(  31)		::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  31)		return ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(( ( ::haxe::ds::IntMap)(this1) )->get(dataViewItem->get_id())) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,dataViewItemToNode,return )

::Array< ::Dynamic> TreeViewBuilder_obj::dataViewItemChildren( ::hx::widgets::DataViewItem dataViewItem){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_34_dataViewItemChildren)
HXLINE(  35)		::Array< ::Dynamic> children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		if (::hx::IsNull( dataViewItem )) {
HXLINE(  37)			 ::Dynamic k = this->_dataViewItemToNodeMap->keys();
HXDLIN(  37)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  37)				int k1 = ( (int)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  38)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode v = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(this->_dataViewItemToNodeMap->get(k1)) );
HXLINE(  39)				if (::hx::IsNull( v->parentNode )) {
HXLINE(  40)					children->push(v);
            				}
            			}
            		}
            		else {
HXLINE(  44)			 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  45)			int childCount = treeCtrl->getChildCount(dataViewItem);
HXLINE(  46)			{
HXLINE(  46)				int _g = 0;
HXDLIN(  46)				int _g1 = childCount;
HXDLIN(  46)				while((_g < _g1)){
HXLINE(  46)					_g = (_g + 1);
HXDLIN(  46)					int n = (_g - 1);
HXLINE(  47)					 ::hx::widgets::DataViewItem childDataItem = treeCtrl->getNthChild(dataViewItem,n);
HXLINE(  48)					::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  48)					if (( ( ::haxe::ds::IntMap)(this1) )->exists(childDataItem->get_id())) {
HXLINE(  49)						::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  49)						children->push(( ( ::haxe::ds::IntMap)(this1) )->get(childDataItem->get_id()));
            					}
            				}
            			}
            		}
HXLINE(  53)		return children;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,dataViewItemChildren,return )

void TreeViewBuilder_obj::createNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_57_createNode)
HXLINE(  58)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  59)		::String text = ( (::String)(node->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  60)		::String icon = ( (::String)(node->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) );
HXLINE(  61)		if (::hx::IsNull( node->parentNode )) {
HXLINE(  62)			node->dataViewItem = treeCtrl->appendItem(null(),text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon));
HXLINE(  63)			{
HXLINE(  63)				::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  63)				( ( ::haxe::ds::IntMap)(this1) )->set(node->dataViewItem->get_id(),node);
            			}
            		}
            		else {
HXLINE(  65)			 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode parentNode = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(node->parentNode);
HXLINE(  66)			bool _hx_tmp;
HXDLIN(  66)			if (::hx::IsNotNull( parentNode->dataViewItem )) {
HXLINE(  66)				_hx_tmp = !(treeCtrl->isContainer(parentNode->dataViewItem));
            			}
            			else {
HXLINE(  66)				_hx_tmp = false;
            			}
HXDLIN(  66)			if (_hx_tmp) {
HXLINE(  67)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode selectedNode = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_treeview->get_selectedNode());
HXLINE(  68)				this->deleteDataViewItem(parentNode->dataViewItem,false);
HXLINE(  69)				if (::hx::IsNull( parentNode->parentNode )) {
HXLINE(  70)					 ::Dynamic _hx_tmp =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN(  70)					 ::haxe::ui::containers::TreeView _hx_tmp1 = this->_treeview;
HXDLIN(  70)					parentNode->dataViewItem = treeCtrl->appendContainer(null(),( (::String)(_hx_tmp) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp1,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
HXLINE(  71)					{
HXLINE(  71)						::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  71)						( ( ::haxe::ds::IntMap)(this1) )->set(parentNode->dataViewItem->get_id(),parentNode);
            					}
            				}
            				else {
HXLINE(  73)					 ::hx::widgets::DataViewItem _hx_tmp = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(parentNode->parentNode)->dataViewItem;
HXDLIN(  73)					 ::Dynamic _hx_tmp1 =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN(  73)					 ::haxe::ui::containers::TreeView _hx_tmp2 = this->_treeview;
HXDLIN(  73)					parentNode->dataViewItem = treeCtrl->appendContainer(_hx_tmp,( (::String)(_hx_tmp1) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp2,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
HXLINE(  74)					{
HXLINE(  74)						::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  74)						( ( ::haxe::ds::IntMap)(this1) )->set(parentNode->dataViewItem->get_id(),parentNode);
            					}
            				}
HXLINE(  76)				if (::hx::IsNotNull( selectedNode )) {
HXLINE(  77)					treeCtrl->pauseEvent(::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED);
HXLINE(  78)					treeCtrl->set_selection(selectedNode->dataViewItem);
HXLINE(  79)					treeCtrl->unpauseEvent(::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED);
            				}
            			}
HXLINE(  82)			 ::hx::widgets::DataViewItem parentNode1 = parentNode->dataViewItem;
HXDLIN(  82)			node->dataViewItem = treeCtrl->appendItem(parentNode1,text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon));
HXLINE(  83)			{
HXLINE(  83)				::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  83)				( ( ::haxe::ds::IntMap)(this1) )->set(node->dataViewItem->get_id(),node);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,createNode,(void))

void TreeViewBuilder_obj::removeNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_87_removeNode)
HXLINE(  88)		this->deleteDataViewItem(node->dataViewItem,true);
HXLINE(  89)		node->treeView = null();
HXLINE(  90)		node->dataViewItem = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,removeNode,(void))

void TreeViewBuilder_obj::clearNodes( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_93_clearNodes)
HXLINE(  94)		if (::hx::IsNull( node )) {
HXLINE(  95)			return;
            		}
HXLINE(  97)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  98)		while((treeCtrl->getChildCount(node->dataViewItem) > 0)){
HXLINE(  99)			this->deleteDataViewItem(treeCtrl->getNthChild(node->dataViewItem,0),true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,clearNodes,(void))

void TreeViewBuilder_obj::deleteDataViewItem( ::hx::widgets::DataViewItem dataViewItem,bool clearObjects){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_103_deleteDataViewItem)
HXLINE( 104)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE( 105)		while((treeCtrl->getChildCount(dataViewItem) > 0)){
HXLINE( 106)			this->deleteDataViewItem(treeCtrl->getNthChild(dataViewItem,0),clearObjects);
            		}
HXLINE( 108)		treeCtrl->deleteItem(dataViewItem);
HXLINE( 109)		::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN( 109)		if (( ( ::haxe::ds::IntMap)(this1) )->exists(dataViewItem->get_id())) {
HXLINE( 110)			::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN( 110)			 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(( ( ::haxe::ds::IntMap)(this1) )->get(dataViewItem->get_id())) );
HXLINE( 111)			{
HXLINE( 111)				::Dynamic this2 = this->_dataViewItemToNodeMap;
HXDLIN( 111)				( ( ::haxe::ds::IntMap)(this2) )->remove(dataViewItem->get_id());
            			}
HXLINE( 112)			if (clearObjects) {
HXLINE( 113)				node->treeView = null();
HXLINE( 114)				node->dataViewItem = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TreeViewBuilder_obj,deleteDataViewItem,(void))


::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__new( ::haxe::ui::containers::TreeView treeview) {
	::hx::ObjectPtr< TreeViewBuilder_obj > __this = new TreeViewBuilder_obj();
	__this->__construct(treeview);
	return __this;
}

::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview) {
	TreeViewBuilder_obj *__this = (TreeViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.TreeViewBuilder"));
	*(void **)__this = TreeViewBuilder_obj::_hx_vtable;
	__this->__construct(treeview);
	return __this;
}

TreeViewBuilder_obj::TreeViewBuilder_obj()
{
}

void TreeViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewBuilder);
	HX_MARK_MEMBER_NAME(_treeview,"_treeview");
	HX_MARK_MEMBER_NAME(nodesToCreate,"nodesToCreate");
	HX_MARK_MEMBER_NAME(_dataViewItemToNodeMap,"_dataViewItemToNodeMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_treeview,"_treeview");
	HX_VISIT_MEMBER_NAME(nodesToCreate,"nodesToCreate");
	HX_VISIT_MEMBER_NAME(_dataViewItemToNodeMap,"_dataViewItemToNodeMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { return ::hx::Val( _treeview ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createNode") ) { return ::hx::Val( createNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearNodes") ) { return ::hx::Val( clearNodes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nodesToCreate") ) { return ::hx::Val( nodesToCreate ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataViewItemToNode") ) { return ::hx::Val( dataViewItemToNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteDataViewItem") ) { return ::hx::Val( deleteDataViewItem_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dataViewItemChildren") ) { return ::hx::Val( dataViewItemChildren_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dataViewItemToNodeMap") ) { return ::hx::Val( _dataViewItemToNodeMap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { _treeview=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nodesToCreate") ) { nodesToCreate=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dataViewItemToNodeMap") ) { _dataViewItemToNodeMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_treeview",22,ca,d3,8e));
	outFields->push(HX_("nodesToCreate",28,9c,6b,ee));
	outFields->push(HX_("_dataViewItemToNodeMap",fe,33,d3,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewBuilder_obj,_treeview),HX_("_treeview",22,ca,d3,8e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TreeViewBuilder_obj,nodesToCreate),HX_("nodesToCreate",28,9c,6b,ee)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(TreeViewBuilder_obj,_dataViewItemToNodeMap),HX_("_dataViewItemToNodeMap",fe,33,d3,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewBuilder_obj_sMemberFields[] = {
	HX_("_treeview",22,ca,d3,8e),
	HX_("nodesToCreate",28,9c,6b,ee),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("dataViewItemToNode",1f,e5,2f,c0),
	HX_("dataViewItemChildren",c1,0d,d4,39),
	HX_("_dataViewItemToNodeMap",fe,33,d3,12),
	HX_("createNode",1e,cb,97,5b),
	HX_("removeNode",66,44,29,c6),
	HX_("clearNodes",64,f7,c8,74),
	HX_("deleteDataViewItem",2d,27,38,1b),
	::String(null()) };

::hx::Class TreeViewBuilder_obj::__mClass;

void TreeViewBuilder_obj::__register()
{
	TreeViewBuilder_obj _hx_dummy;
	TreeViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.TreeViewBuilder",bd,99,6c,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
