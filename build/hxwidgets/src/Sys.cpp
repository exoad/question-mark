#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7ec14b5404d30118_56_args,"Sys","args",0xeaeddc7e,"Sys.args","/usr/share/haxe/std/cpp/_std/Sys.hx",56,0x4e14a6b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec14b5404d30118_87_systemName,"Sys","systemName",0xbea5b6bb,"Sys.systemName","/usr/share/haxe/std/cpp/_std/Sys.hx",87,0x4e14a6b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec14b5404d30118_113_time,"Sys","time",0xf7761b2e,"Sys.time","/usr/share/haxe/std/cpp/_std/Sys.hx",113,0x4e14a6b5)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec14b5404d30118_125_programPath,"Sys","programPath",0x38d53548,"Sys.programPath","/usr/share/haxe/std/cpp/_std/Sys.hx",125,0x4e14a6b5)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee3a981;
}

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_7ec14b5404d30118_56_args)
HXDLIN(  56)		return  ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::systemName(){
            	HX_STACKFRAME(&_hx_pos_7ec14b5404d30118_87_systemName)
HXDLIN(  87)		return _hx_std_sys_string();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

Float Sys_obj::time(){
            	HX_STACKFRAME(&_hx_pos_7ec14b5404d30118_113_time)
HXDLIN( 113)		return _hx_std_sys_time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,time,return )

::String Sys_obj::programPath(){
            	HX_STACKFRAME(&_hx_pos_7ec14b5404d30118_125_programPath)
HXDLIN( 125)		return _hx_std_sys_exe_path();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,programPath,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programPath") ) { outValue = programPath_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_("args",5d,8d,74,40),
	HX_("systemName",da,d8,82,f7),
	HX_("time",0d,cc,fc,4c),
	HX_("programPath",49,ee,75,c1),
	::String(null())
};

void Sys_obj::__register()
{
	Sys_obj _hx_dummy;
	Sys_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Sys",ed,64,3f,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sys_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

