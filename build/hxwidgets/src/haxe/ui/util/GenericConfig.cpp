#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GenericConfig
#include <haxe/ui/util/GenericConfig.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_9_new,"haxe.ui.util.GenericConfig","new",0x01eed6b1,"haxe.ui.util.GenericConfig.new","haxe/ui/util/GenericConfig.hx",9,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_14_addSection,"haxe.ui.util.GenericConfig","addSection",0x44ca0793,"haxe.ui.util.GenericConfig.addSection","haxe/ui/util/GenericConfig.hx",14,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_25_findBy,"haxe.ui.util.GenericConfig","findBy",0x64924cbf,"haxe.ui.util.GenericConfig.findBy","haxe/ui/util/GenericConfig.hx",25,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_50_queryBool,"haxe.ui.util.GenericConfig","queryBool",0x65a37863,"haxe.ui.util.GenericConfig.queryBool","haxe/ui/util/GenericConfig.hx",50,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_58_query,"haxe.ui.util.GenericConfig","query",0x41108799,"haxe.ui.util.GenericConfig.query","haxe/ui/util/GenericConfig.hx",58,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_105_queryValues,"haxe.ui.util.GenericConfig","queryValues",0x9d4f385b,"haxe.ui.util.GenericConfig.queryValues","haxe/ui/util/GenericConfig.hx",105,0x31dfa140)
HX_LOCAL_STACK_FRAME(_hx_pos_2ff73cf4c06b7793_7_boot,"haxe.ui.util.GenericConfig","boot",0xa72604c1,"haxe.ui.util.GenericConfig.boot","haxe/ui/util/GenericConfig.hx",7,0x31dfa140)
namespace haxe{
namespace ui{
namespace util{

void GenericConfig_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_9_new)
HXLINE(  10)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  11)		this->sections =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic GenericConfig_obj::__CreateEmpty() { return new GenericConfig_obj; }

void *GenericConfig_obj::_hx_vtable = 0;

Dynamic GenericConfig_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericConfig_obj > _hx_result = new GenericConfig_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenericConfig_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eeecad5;
}

 ::haxe::ui::util::GenericConfig GenericConfig_obj::addSection(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_14_addSection)
HXLINE(  15)		 ::haxe::ui::util::GenericConfig config =  ::haxe::ui::util::GenericConfig_obj::__alloc( HX_CTX );
HXLINE(  16)		::Array< ::Dynamic> array = ( (::Array< ::Dynamic>)(this->sections->get(name)) );
HXLINE(  17)		if (::hx::IsNull( array )) {
HXLINE(  18)			array = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)			this->sections->set(name,array);
            		}
HXLINE(  21)		array->push(config);
HXLINE(  22)		return config;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericConfig_obj,addSection,return )

 ::haxe::ui::util::GenericConfig GenericConfig_obj::findBy(::String section,::String field,::String value){
            	HX_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_25_findBy)
HXLINE(  26)		::Array< ::Dynamic> array = ( (::Array< ::Dynamic>)(this->sections->get(section)) );
HXLINE(  27)		if (::hx::IsNull( array )) {
HXLINE(  28)			return null();
            		}
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		if (::hx::IsNull( field )) {
HXLINE(  31)			_hx_tmp = ::hx::IsNull( value );
            		}
            		else {
HXLINE(  31)			_hx_tmp = false;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  32)			return array->__get(0).StaticCast<  ::haxe::ui::util::GenericConfig >();
            		}
HXLINE(  35)		 ::haxe::ui::util::GenericConfig r = null();
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			while((_g < array->length)){
HXLINE(  36)				 ::haxe::ui::util::GenericConfig item = array->__get(_g).StaticCast<  ::haxe::ui::util::GenericConfig >();
HXDLIN(  36)				_g = (_g + 1);
HXLINE(  37)				{
HXLINE(  37)					 ::Dynamic key = item->values->keys();
HXDLIN(  37)					while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  37)						::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  38)						bool _hx_tmp;
HXDLIN(  38)						if ((key1 == field)) {
HXLINE(  38)							_hx_tmp = ::hx::IsEq( item->values->get(key1),value );
            						}
            						else {
HXLINE(  38)							_hx_tmp = false;
            						}
HXDLIN(  38)						if (_hx_tmp) {
HXLINE(  39)							r = item;
HXLINE(  40)							goto _hx_goto_3;
            						}
            					}
            					_hx_goto_3:;
            				}
HXLINE(  43)				if (::hx::IsNotNull( r )) {
HXLINE(  44)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE(  47)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,findBy,return )

bool GenericConfig_obj::queryBool(::String q,::hx::Null< bool >  __o_defaultValue, ::Dynamic conditionRef){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_50_queryBool)
HXLINE(  51)		::String r = this->query(q,null(),conditionRef);
HXLINE(  52)		if (::hx::IsNull( r )) {
HXLINE(  53)			return defaultValue;
            		}
HXLINE(  55)		return (r == HX_("true",4e,a7,03,4d));
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,queryBool,return )

::String GenericConfig_obj::query(::String q,::String defaultValue, ::Dynamic conditionRef){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_58_query)
HXLINE(  59)		if (::haxe::ui::util::GenericConfig_obj::cache->exists(q)) {
HXLINE(  60)			bool _hx_tmp;
HXDLIN(  60)			if (::hx::IsNotNull( defaultValue )) {
HXLINE(  60)				_hx_tmp = ::hx::IsNull( ::haxe::ui::util::GenericConfig_obj::cache->get(q) );
            			}
            			else {
HXLINE(  60)				_hx_tmp = false;
            			}
HXDLIN(  60)			if (_hx_tmp) {
HXLINE(  61)				return defaultValue;
            			}
HXLINE(  63)			return ::haxe::ui::util::GenericConfig_obj::cache->get_string(q);
            		}
HXLINE(  66)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\.(?![^\\[]*\\])",41,44,f3,3d),HX_("g",67,00,00,00));
HXLINE(  67)		::Array< ::String > finalArray = regexp->split(q);
HXLINE(  68)		 ::haxe::ui::util::GenericConfig ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  70)		::String value = null();
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			while((_g < finalArray->length)){
HXLINE(  71)				::String f = finalArray->__get(_g);
HXDLIN(  71)				_g = (_g + 1);
HXLINE(  72)				bool _hx_tmp;
HXDLIN(  72)				if ((f.indexOf(HX_("[",5b,00,00,00),null()) == -1)) {
HXLINE(  72)					_hx_tmp = (f.indexOf(HX_("@",40,00,00,00),null()) == -1);
            				}
            				else {
HXLINE(  72)					_hx_tmp = false;
            				}
HXDLIN(  72)				if (_hx_tmp) {
HXLINE(  73)					ref = ref->findBy(f,null(),null());
            				}
            				else {
HXLINE(  74)					if ((f.indexOf(HX_("[",5b,00,00,00),null()) != -1)) {
HXLINE(  75)						::Array< ::String > p = f.split(HX_("[",5b,00,00,00));
HXLINE(  76)						::String p1 = p->__get(0);
HXLINE(  77)						::String p2 = p->__get(1).split(HX_("=",3d,00,00,00))->__get(0);
HXLINE(  78)						::String p3 = p->__get(1).split(HX_("=",3d,00,00,00))->__get(1);
HXLINE(  79)						p3 = p3.substr(0,(p3.length - 1));
HXLINE(  81)						ref = ref->findBy(p1,p2,p3);
            					}
            					else {
HXLINE(  82)						if ((f.indexOf(HX_("@",40,00,00,00),null()) != -1)) {
HXLINE(  83)							::String v = f.substr(1,f.length);
HXLINE(  84)							value = ref->values->get_string(v);
HXLINE(  85)							goto _hx_goto_6;
            						}
            					}
            				}
HXLINE(  88)				if (::hx::IsNull( ref )) {
HXLINE(  89)					::haxe::ui::util::GenericConfig_obj::cache->set(q,defaultValue);
HXLINE(  90)					return defaultValue;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE(  94)		if (::hx::IsNull( value )) {
HXLINE(  95)			value = defaultValue;
            		}
HXLINE(  98)		if (::hx::IsNotNull( value )) {
HXLINE(  99)			::haxe::ui::util::GenericConfig_obj::cache->set(q,value);
            		}
HXLINE( 101)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC3(GenericConfig_obj,query,return )

 ::haxe::ds::StringMap GenericConfig_obj::queryValues(::String q, ::Dynamic conditionRef){
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_105_queryValues)
HXLINE( 106)		 ::EReg regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\.(?![^\\[]*\\])",41,44,f3,3d),HX_("g",67,00,00,00));
HXLINE( 107)		::Array< ::String > finalArray = regexp->split(q);
HXLINE( 108)		 ::haxe::ui::util::GenericConfig ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			while((_g < finalArray->length)){
HXLINE( 110)				::String f = finalArray->__get(_g);
HXDLIN( 110)				_g = (_g + 1);
HXLINE( 111)				bool _hx_tmp;
HXDLIN( 111)				if ((f.indexOf(HX_("[",5b,00,00,00),null()) == -1)) {
HXLINE( 111)					_hx_tmp = (f.indexOf(HX_("@",40,00,00,00),null()) == -1);
            				}
            				else {
HXLINE( 111)					_hx_tmp = false;
            				}
HXDLIN( 111)				if (_hx_tmp) {
HXLINE( 112)					ref = ref->findBy(f,null(),null());
            				}
            				else {
HXLINE( 113)					if ((f.indexOf(HX_("[",5b,00,00,00),null()) != -1)) {
HXLINE( 114)						::Array< ::String > p = f.split(HX_("[",5b,00,00,00));
HXLINE( 115)						::String p1 = p->__get(0);
HXLINE( 116)						::String p2 = p->__get(1).split(HX_("=",3d,00,00,00))->__get(0);
HXLINE( 117)						::String p3 = p->__get(1).split(HX_("=",3d,00,00,00))->__get(1);
HXLINE( 118)						p3 = p3.substr(0,(p3.length - 1));
HXLINE( 120)						ref = ref->findBy(p1,p2,p3);
            					}
            				}
HXLINE( 123)				if (::hx::IsNull( ref )) {
HXLINE( 124)					return null();
            				}
            			}
            		}
HXLINE( 128)		return ref->values;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GenericConfig_obj,queryValues,return )

 ::haxe::ds::StringMap GenericConfig_obj::cache;


::hx::ObjectPtr< GenericConfig_obj > GenericConfig_obj::__new() {
	::hx::ObjectPtr< GenericConfig_obj > __this = new GenericConfig_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GenericConfig_obj > GenericConfig_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GenericConfig_obj *__this = (GenericConfig_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericConfig_obj), true, "haxe.ui.util.GenericConfig"));
	*(void **)__this = GenericConfig_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenericConfig_obj::GenericConfig_obj()
{
}

void GenericConfig_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericConfig);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(sections,"sections");
	HX_MARK_END_CLASS();
}

void GenericConfig_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(sections,"sections");
}

::hx::Val GenericConfig_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"query") ) { return ::hx::Val( query_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"findBy") ) { return ::hx::Val( findBy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sections") ) { return ::hx::Val( sections ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queryBool") ) { return ::hx::Val( queryBool_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addSection") ) { return ::hx::Val( addSection_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"queryValues") ) { return ::hx::Val( queryValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GenericConfig_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
	}
	return false;
}

::hx::Val GenericConfig_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sections") ) { sections=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GenericConfig_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void GenericConfig_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("sections",ee,22,2d,bf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericConfig_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(GenericConfig_obj,values),HX_("values",e2,03,b7,4f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(GenericConfig_obj,sections),HX_("sections",ee,22,2d,bf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo GenericConfig_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &GenericConfig_obj::cache,HX_("cache",42,9a,14,41)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GenericConfig_obj_sMemberFields[] = {
	HX_("values",e2,03,b7,4f),
	HX_("sections",ee,22,2d,bf),
	HX_("addSection",c4,31,62,c5),
	HX_("findBy",70,4a,7b,86),
	HX_("queryBool",52,5f,b5,14),
	HX_("query",08,8b,ea,5d),
	HX_("queryValues",0a,f9,db,a1),
	::String(null()) };

static void GenericConfig_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericConfig_obj::cache,"cache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenericConfig_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericConfig_obj::cache,"cache");
};

#endif

::hx::Class GenericConfig_obj::__mClass;

static ::String GenericConfig_obj_sStaticFields[] = {
	HX_("cache",42,9a,14,41),
	::String(null())
};

void GenericConfig_obj::__register()
{
	GenericConfig_obj _hx_dummy;
	GenericConfig_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.GenericConfig",3f,aa,d7,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GenericConfig_obj::__GetStatic;
	__mClass->mSetStaticField = &GenericConfig_obj::__SetStatic;
	__mClass->mMarkFunc = GenericConfig_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GenericConfig_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericConfig_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericConfig_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenericConfig_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericConfig_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericConfig_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GenericConfig_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_2ff73cf4c06b7793_7_boot)
HXDLIN(   7)		cache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
