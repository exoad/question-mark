#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_30_hasField,"Reflect","hasField",0xef8c2571,"Reflect.hasField","/usr/share/haxe/std/cpp/_std/Reflect.hx",30,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_35_field,"Reflect","field",0x54b04da9,"Reflect.field","/usr/share/haxe/std/cpp/_std/Reflect.hx",35,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_40_setField,"Reflect","setField",0x71684429,"Reflect.setField","/usr/share/haxe/std/cpp/_std/Reflect.hx",40,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_45_getProperty,"Reflect","getProperty",0x632ca13a,"Reflect.getProperty","/usr/share/haxe/std/cpp/_std/Reflect.hx",45,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_49_setProperty,"Reflect","setProperty",0x6d99a846,"Reflect.setProperty","/usr/share/haxe/std/cpp/_std/Reflect.hx",49,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_54_callMethod,"Reflect","callMethod",0xb49e52d0,"Reflect.callMethod","/usr/share/haxe/std/cpp/_std/Reflect.hx",54,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_67_fields,"Reflect","fields",0xc593a6aa,"Reflect.fields","/usr/share/haxe/std/cpp/_std/Reflect.hx",67,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_77_isFunction,"Reflect","isFunction",0x0f1541d3,"Reflect.isFunction","/usr/share/haxe/std/cpp/_std/Reflect.hx",77,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_84_compareMethods,"Reflect","compareMethods",0x8b8ddd7e,"Reflect.compareMethods","/usr/share/haxe/std/cpp/_std/Reflect.hx",84,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_93_isObject,"Reflect","isObject",0xd04960ba,"Reflect.isObject","/usr/share/haxe/std/cpp/_std/Reflect.hx",93,0x95b6af85)
HX_LOCAL_STACK_FRAME(_hx_pos_f7db3bba25961ad3_112_copy,"Reflect","copy",0x47e2b5a6,"Reflect.copy","/usr/share/haxe/std/cpp/_std/Reflect.hx",112,0x95b6af85)

void Reflect_obj::__construct() { }

Dynamic Reflect_obj::__CreateEmpty() { return new Reflect_obj; }

void *Reflect_obj::_hx_vtable = 0;

Dynamic Reflect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reflect_obj > _hx_result = new Reflect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reflect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x769a515d;
}

bool Reflect_obj::hasField( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_30_hasField)
HXDLIN(  30)		return (::hx::IsNotNull( o ) && ( (bool)(o->__HasField(field)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,hasField,return )

 ::Dynamic Reflect_obj::field( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_35_field)
HXDLIN(  35)		return ::hx::IsNull( o ) ? null() : o->__Field(field,::hx::paccNever);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,field,return )

void Reflect_obj::setField( ::Dynamic o,::String field, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_40_setField)
HXDLIN(  40)		if (::hx::IsNotNull( o )) {
HXLINE(  41)			o->__SetField(field,value,::hx::paccNever);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setField,(void))

 ::Dynamic Reflect_obj::getProperty( ::Dynamic o,::String field){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_45_getProperty)
HXDLIN(  45)		return ::hx::IsNull( o ) ? null() : o->__Field(field,::hx::paccAlways);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,getProperty,return )

void Reflect_obj::setProperty( ::Dynamic o,::String field, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_49_setProperty)
HXDLIN(  49)		if (::hx::IsNotNull( o )) {
HXLINE(  50)			o->__SetField(field,value,::hx::paccAlways);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,setProperty,(void))

 ::Dynamic Reflect_obj::callMethod( ::Dynamic o, ::Dynamic func,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_54_callMethod)
HXLINE(  55)		if ((::hx::IsNotNull( func ) && ::hx::IsEq( func->__GetType(),3 ))) {
HXLINE(  56)			if (::hx::IsNull( o )) {
HXLINE(  57)				HX_STACK_DO_THROW(HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_INVALID_OBJECT)));
            			}
HXLINE(  58)			func = o->__Field(func,::hx::paccDynamic);
            		}
HXLINE(  60)		if (::hx::IsNull( func )) {
HXLINE(  61)			HX_STACK_DO_THROW(HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_NULL_FUNCTION_POINTER)));
            		}
HXLINE(  62)		func->__SetThis(o);
HXLINE(  63)		return func->__Run(args);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reflect_obj,callMethod,return )

::Array< ::String > Reflect_obj::fields( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_67_fields)
HXLINE(  68)		if (::hx::IsNull( o )) {
HXLINE(  69)			return ::Array_obj< ::String >::__new();
            		}
HXLINE(  70)		::Array< ::String > a = ::Array_obj< ::String >::__new(0);
HXLINE(  71)		o->__GetFields(a);
HXLINE(  72)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,fields,return )

bool Reflect_obj::isFunction( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_77_isFunction)
HXDLIN(  77)		return (::hx::IsNotNull( f ) && ::hx::IsEq( f->__GetType(),6 ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isFunction,return )

bool Reflect_obj::compareMethods( ::Dynamic f1, ::Dynamic f2){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_84_compareMethods)
HXLINE(  85)		if (::hx::IsEq( f1,f2 )) {
HXLINE(  86)			return true;
            		}
HXLINE(  87)		if ((!(::Reflect_obj::isFunction(f1)) || !(::Reflect_obj::isFunction(f2)))) {
HXLINE(  88)			return false;
            		}
HXLINE(  89)		return  ::__hxcpp_same_closure(f1,f2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compareMethods,return )

bool Reflect_obj::isObject( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_93_isObject)
HXLINE(  94)		if (::hx::IsNull( v )) {
HXLINE(  95)			return false;
            		}
HXLINE(  96)		int t = ( (int)(v->__GetType()) );
HXLINE(  97)		return ((((t == 4) || (t == 8)) || (t == 3)) || (t == 5));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isObject,return )

 ::Dynamic Reflect_obj::copy( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f7db3bba25961ad3_112_copy)
HXLINE( 113)		if (::hx::IsNull( o )) {
HXLINE( 114)			return null();
            		}
HXLINE( 115)		if (::hx::IsEq( o->__GetType(),3 )) {
HXLINE( 116)			return o;
            		}
HXLINE( 117)		if (::hx::IsEq( o->__GetType(),5 )) {
HXLINE( 118)			return o->__Field(HX_("copy",b5,bb,c4,41),::hx::paccDynamic)();
            		}
HXLINE( 119)		 ::Dynamic o2 =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 120)		{
HXLINE( 120)			int _g = 0;
HXDLIN( 120)			::Array< ::String > _g1 = ::Reflect_obj::fields(o);
HXDLIN( 120)			while((_g < _g1->length)){
HXLINE( 120)				::String f = _g1->__get(_g);
HXDLIN( 120)				++_g;
HXLINE( 121)				::Reflect_obj::setField(o2,f,::Reflect_obj::field(o,f));
            			}
            		}
HXLINE( 122)		return o2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,copy,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { outValue = fields_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasField") ) { outValue = hasField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setField") ) { outValue = setField_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isObject") ) { outValue = isObject_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMethod") ) { outValue = callMethod_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isFunction") ) { outValue = isFunction_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { outValue = getProperty_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setProperty") ) { outValue = setProperty_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compareMethods") ) { outValue = compareMethods_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Reflect_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Reflect_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Reflect_obj::__mClass;

static ::String Reflect_obj_sStaticFields[] = {
	HX_("hasField",00,df,eb,8c),
	HX_("field",ba,94,93,00),
	HX_("setField",b8,fd,c7,0e),
	HX_("getProperty",0b,0b,2c,d2),
	HX_("setProperty",17,12,99,dc),
	HX_("callMethod",1f,ce,8a,34),
	HX_("fields",79,8e,8e,80),
	HX_("isFunction",22,bd,01,8f),
	HX_("compareMethods",4d,ac,7b,37),
	HX_("isObject",49,1a,a9,6d),
	HX_("copy",b5,bb,c4,41),
	::String(null())
};

void Reflect_obj::__register()
{
	Reflect_obj _hx_dummy;
	Reflect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Reflect",1d,ac,7a,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reflect_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Reflect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reflect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reflect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

