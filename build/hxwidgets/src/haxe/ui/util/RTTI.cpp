#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_RTTI
#include <haxe/ui/util/RTTI.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_16_addClassProperty,"haxe.ui.util.RTTI","addClassProperty",0x90ac3289,"haxe.ui.util.RTTI.addClassProperty","haxe/ui/util/RTTI.hx",16,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_45_setSuperClass,"haxe.ui.util.RTTI","setSuperClass",0x4062de22,"haxe.ui.util.RTTI.setSuperClass","haxe/ui/util/RTTI.hx",45,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_65_hasSuperClass,"haxe.ui.util.RTTI","hasSuperClass",0xb94157da,"haxe.ui.util.RTTI.hasSuperClass","haxe/ui/util/RTTI.hx",65,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_98_hasClassProperty,"haxe.ui.util.RTTI","hasClassProperty",0xac3255b0,"haxe.ui.util.RTTI.hasClassProperty","haxe/ui/util/RTTI.hx",98,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_101_load,"haxe.ui.util.RTTI","load",0x94bc1363,"haxe.ui.util.RTTI.load","haxe/ui/util/RTTI.hx",101,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_115_getClassInfo,"haxe.ui.util.RTTI","getClassInfo",0x377b738d,"haxe.ui.util.RTTI.getClassInfo","haxe/ui/util/RTTI.hx",115,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_128_getClassProperty,"haxe.ui.util.RTTI","getClassProperty",0xfb9dfef4,"haxe.ui.util.RTTI.getClassProperty","haxe/ui/util/RTTI.hx",128,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_151_save,"haxe.ui.util.RTTI","save",0x9952047a,"haxe.ui.util.RTTI.save","haxe/ui/util/RTTI.hx",151,0x5ffa33cc)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fd1c90cd47e83e_14_boot,"haxe.ui.util.RTTI","boot",0x8e1ffd6f,"haxe.ui.util.RTTI.boot","haxe/ui/util/RTTI.hx",14,0x5ffa33cc)
namespace haxe{
namespace ui{
namespace util{

void RTTI_obj::__construct() { }

Dynamic RTTI_obj::__CreateEmpty() { return new RTTI_obj; }

void *RTTI_obj::_hx_vtable = 0;

Dynamic RTTI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RTTI_obj > _hx_result = new RTTI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RTTI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59dc0ab3;
}

 ::haxe::ds::StringMap RTTI_obj::classInfo;

void RTTI_obj::addClassProperty(::String className,::String propertyName,::String propertyType){
            	HX_GC_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_16_addClassProperty)
HXLINE(  17)		className = className.toLowerCase();
HXLINE(  18)		propertyName = propertyName.toLowerCase();
HXLINE(  19)		propertyType = propertyType.toLowerCase();
HXLINE(  21)		if ((propertyType == HX_("null<bool>",df,84,0c,69))) {
HXLINE(  21)			propertyType = HX_("bool",2a,84,1b,41);
            		}
HXLINE(  22)		if ((propertyType == HX_("null<int>",c4,6a,28,53))) {
HXLINE(  22)			propertyType = HX_("int",ef,0c,50,00);
            		}
HXLINE(  23)		if ((propertyType == HX_("null<float>",b7,48,19,61))) {
HXLINE(  23)			propertyType = HX_("float",9c,c5,96,02);
            		}
HXLINE(  25)		if (::hx::IsNull( ::haxe::ui::util::RTTI_obj::classInfo )) {
HXLINE(  26)			::haxe::ui::util::RTTI_obj::classInfo =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  29)		 ::Dynamic entry = ::haxe::ui::util::RTTI_obj::classInfo->get(className);
HXLINE(  30)		if (::hx::IsNull( entry )) {
HXLINE(  31)			entry =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  32)			::haxe::ui::util::RTTI_obj::classInfo->set(className,entry);
            		}
HXLINE(  35)		if (::hx::IsNull( entry->__Field(HX_("properties",f3,fb,0e,61),::hx::paccDynamic) )) {
HXLINE(  36)			entry->__SetField(HX_("properties",f3,fb,0e,61), ::haxe::ds::StringMap_obj::__alloc( HX_CTX ),::hx::paccDynamic);
            		}
HXLINE(  39)		( ( ::haxe::ds::StringMap)( ::Dynamic(entry->__Field(HX_("properties",f3,fb,0e,61),::hx::paccDynamic))) )->set(propertyName, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("propertyName",40,35,e4,26),propertyName)
            			->setFixed(1,HX_("propertyType",af,b5,ed,2a),propertyType)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(RTTI_obj,addClassProperty,(void))

void RTTI_obj::setSuperClass(::String className,::String superClassName){
            	HX_GC_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_45_setSuperClass)
HXLINE(  46)		if (::hx::IsNull( ::haxe::ui::util::RTTI_obj::classInfo )) {
HXLINE(  47)			::haxe::ui::util::RTTI_obj::classInfo =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  50)		className = className.toLowerCase();
HXLINE(  51)		superClassName = superClassName.toLowerCase();
HXLINE(  52)		if (::StringTools_obj::startsWith(superClassName,HX_(".",2e,00,00,00))) {
HXLINE(  53)			superClassName = superClassName.substr(1,null());
            		}
HXLINE(  55)		 ::Dynamic entry = ::haxe::ui::util::RTTI_obj::classInfo->get(className);
HXLINE(  56)		if (::hx::IsNull( entry )) {
HXLINE(  57)			entry =  ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("properties",f3,fb,0e,61), ::haxe::ds::StringMap_obj::__alloc( HX_CTX )));
HXLINE(  60)			::haxe::ui::util::RTTI_obj::classInfo->set(className,entry);
            		}
HXLINE(  62)		entry->__SetField(HX_("superClass",bd,a8,07,a8),superClassName,::hx::paccDynamic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RTTI_obj,setSuperClass,(void))

bool RTTI_obj::hasSuperClass(::String className,::String superClassName){
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_65_hasSuperClass)
HXLINE(  66)		::haxe::ui::util::RTTI_obj::load();
HXLINE(  67)		className = className.toLowerCase();
HXLINE(  68)		superClassName = superClassName.toLowerCase();
HXLINE(  69)		if (::StringTools_obj::startsWith(superClassName,HX_(".",2e,00,00,00))) {
HXLINE(  70)			superClassName = superClassName.substr(1,null());
            		}
HXLINE(  73)		 ::Dynamic entry = ::haxe::ui::util::RTTI_obj::classInfo->get(className);
HXLINE(  74)		if (::hx::IsNull( entry )) {
HXLINE(  75)			return false;
            		}
HXLINE(  78)		if ((className == superClassName)) {
HXLINE(  79)			return true;
            		}
HXLINE(  82)		::String testSuper = ( (::String)(entry->__Field(HX_("superClass",bd,a8,07,a8),::hx::paccDynamic)) );
HXLINE(  83)		while(::hx::IsNotNull( testSuper )){
HXLINE(  84)			if ((testSuper == superClassName)) {
HXLINE(  85)				return true;
            			}
HXLINE(  87)			entry = ::haxe::ui::util::RTTI_obj::classInfo->get(testSuper);
HXLINE(  88)			if (::hx::IsNull( entry )) {
HXLINE(  89)				return false;
            			}
HXLINE(  91)			testSuper = ( (::String)(entry->__Field(HX_("superClass",bd,a8,07,a8),::hx::paccDynamic)) );
            		}
HXLINE(  94)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RTTI_obj,hasSuperClass,return )

bool RTTI_obj::hasClassProperty(::String className,::String propertyName){
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_98_hasClassProperty)
HXDLIN(  98)		return ::hx::IsNotNull( ::haxe::ui::util::RTTI_obj::getClassProperty(className,propertyName) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RTTI_obj,hasClassProperty,return )

void RTTI_obj::load(){
            	HX_GC_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_101_load)
HXLINE( 102)		if (::hx::IsNotNull( ::haxe::ui::util::RTTI_obj::classInfo )) {
HXLINE( 103)			return;
            		}
HXLINE( 106)		::String s = ::haxe::Resource_obj::getString(HX_("haxeui_rtti",5c,3f,2f,a4));
HXLINE( 107)		if (::hx::IsNull( s )) {
HXLINE( 108)			return;
            		}
HXLINE( 111)		 ::haxe::Unserializer unserializer =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,s);
HXLINE( 112)		::haxe::ui::util::RTTI_obj::classInfo = ( ( ::haxe::ds::StringMap)(unserializer->unserialize()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RTTI_obj,load,(void))

 ::Dynamic RTTI_obj::getClassInfo(::String className){
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_115_getClassInfo)
HXLINE( 116)		::haxe::ui::util::RTTI_obj::load();
HXLINE( 118)		if (::hx::IsNull( ::haxe::ui::util::RTTI_obj::classInfo )) {
HXLINE( 119)			return null();
            		}
HXLINE( 122)		className = className.toLowerCase();
HXLINE( 124)		 ::Dynamic entry = ::haxe::ui::util::RTTI_obj::classInfo->get(className);
HXLINE( 125)		return entry;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RTTI_obj,getClassInfo,return )

 ::Dynamic RTTI_obj::getClassProperty(::String className,::String propertyName){
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_128_getClassProperty)
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		if (::hx::IsNotNull( className )) {
HXLINE( 129)			_hx_tmp = ::hx::IsNull( propertyName );
            		}
            		else {
HXLINE( 129)			_hx_tmp = true;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 130)			return null();
            		}
HXLINE( 132)		className = className.toLowerCase();
HXLINE( 133)		propertyName = propertyName.toLowerCase();
HXLINE( 134)		 ::Dynamic entry = ::haxe::ui::util::RTTI_obj::getClassInfo(className);
HXLINE( 135)		if (::hx::IsNull( entry )) {
HXLINE( 136)			return null();
            		}
HXLINE( 139)		 ::Dynamic propInfo = null();
HXLINE( 140)		bool _hx_tmp1;
HXDLIN( 140)		if (::hx::IsNotNull( entry->__Field(HX_("properties",f3,fb,0e,61),::hx::paccDynamic) )) {
HXLINE( 140)			_hx_tmp1 = ( ( ::haxe::ds::StringMap)( ::Dynamic(entry->__Field(HX_("properties",f3,fb,0e,61),::hx::paccDynamic))) )->exists(propertyName);
            		}
            		else {
HXLINE( 140)			_hx_tmp1 = false;
            		}
HXDLIN( 140)		if (_hx_tmp1) {
HXLINE( 141)			propInfo = ( ( ::haxe::ds::StringMap)( ::Dynamic(entry->__Field(HX_("properties",f3,fb,0e,61),::hx::paccDynamic))) )->get(propertyName);
            		}
HXLINE( 144)		bool _hx_tmp2;
HXDLIN( 144)		if (::hx::IsNull( propInfo )) {
HXLINE( 144)			_hx_tmp2 = ::hx::IsNotNull( entry->__Field(HX_("superClass",bd,a8,07,a8),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 144)			_hx_tmp2 = false;
            		}
HXDLIN( 144)		if (_hx_tmp2) {
HXLINE( 145)			propInfo = ::haxe::ui::util::RTTI_obj::getClassProperty(( (::String)(entry->__Field(HX_("superClass",bd,a8,07,a8),::hx::paccDynamic)) ),propertyName);
            		}
HXLINE( 148)		return propInfo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RTTI_obj,getClassProperty,return )

void RTTI_obj::save(){
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_151_save)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RTTI_obj,save,(void))


RTTI_obj::RTTI_obj()
{
}

bool RTTI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classInfo") ) { outValue = ( classInfo ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassInfo") ) { outValue = getClassInfo_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSuperClass") ) { outValue = setSuperClass_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasSuperClass") ) { outValue = hasSuperClass_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addClassProperty") ) { outValue = addClassProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasClassProperty") ) { outValue = hasClassProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassProperty") ) { outValue = getClassProperty_dyn(); return true; }
	}
	return false;
}

bool RTTI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"classInfo") ) { classInfo=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *RTTI_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo RTTI_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &RTTI_obj::classInfo,HX_("classInfo",c6,58,f9,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void RTTI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTTI_obj::classInfo,"classInfo");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RTTI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTTI_obj::classInfo,"classInfo");
};

#endif

::hx::Class RTTI_obj::__mClass;

static ::String RTTI_obj_sStaticFields[] = {
	HX_("classInfo",c6,58,f9,d8),
	HX_("addClassProperty",cc,51,78,33),
	HX_("setSuperClass",ff,e6,7f,49),
	HX_("hasSuperClass",b7,60,5e,c2),
	HX_("hasClassProperty",f3,74,fe,4e),
	HX_("load",26,9a,b7,47),
	HX_("getClassInfo",50,f5,4f,e8),
	HX_("getClassProperty",37,1e,6a,9e),
	HX_("save",3d,8b,4d,4c),
	::String(null())
};

void RTTI_obj::__register()
{
	RTTI_obj _hx_dummy;
	RTTI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.RTTI",51,70,3c,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RTTI_obj::__GetStatic;
	__mClass->mSetStaticField = &RTTI_obj::__SetStatic;
	__mClass->mMarkFunc = RTTI_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RTTI_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< RTTI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RTTI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RTTI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RTTI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RTTI_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a4fd1c90cd47e83e_14_boot)
HXDLIN(  14)		classInfo = null();
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
