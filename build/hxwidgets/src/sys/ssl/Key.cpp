#include <hxcpp.h>

#ifndef INCLUDED_sys_ssl_Key
#include <sys/ssl/Key.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_711a0d9398c8bc73_34_new,"sys.ssl.Key","new",0xfc27226e,"sys.ssl.Key.new","/usr/share/haxe/std/cpp/_std/sys/ssl/Key.hx",34,0x63f28188)
HX_LOCAL_STACK_FRAME(_hx_pos_bd8045eb576ca49a_55___init__,"::sys::ssl::Key_obj","__init__",0x25088cc6,"::sys::ssl::Key_obj.__init__","/usr/share/haxe/std/cpp/_std/sys/ssl/Key.hx",55,0x63f28188)
namespace sys{
namespace ssl{

void Key_obj::__construct( ::Dynamic k){
            	HX_STACKFRAME(&_hx_pos_711a0d9398c8bc73_34_new)
HXDLIN(  34)		this->_hx___k = k;
            	}

Dynamic Key_obj::__CreateEmpty() { return new Key_obj; }

void *Key_obj::_hx_vtable = 0;

Dynamic Key_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Key_obj > _hx_result = new Key_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Key_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6dab52dc;
}

void Key_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_bd8045eb576ca49a_55___init__)
HXDLIN(  55)		_hx_ssl_init();
            	}



Key_obj::Key_obj()
{
}

void Key_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Key);
	HX_MARK_MEMBER_NAME(_hx___k,"__k");
	HX_MARK_END_CLASS();
}

void Key_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___k,"__k");
}

::hx::Val Key_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__k") ) { return ::hx::Val( _hx___k ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Key_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__k") ) { _hx___k=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Key_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__k",4b,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Key_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Key_obj,_hx___k),HX_("__k",4b,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Key_obj_sStaticStorageInfo = 0;
#endif

static ::String Key_obj_sMemberFields[] = {
	HX_("__k",4b,69,48,00),
	::String(null()) };

::hx::Class Key_obj::__mClass;

void Key_obj::__register()
{
	Key_obj _hx_dummy;
	Key_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.ssl.Key",7c,13,b6,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Key_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Key_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Key_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Key_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Key_obj::__boot()
{
}

} // end namespace sys
} // end namespace ssl
