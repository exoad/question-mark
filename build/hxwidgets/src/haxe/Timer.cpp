#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread__EventLoop_RegularEvent
#include <sys/thread/_EventLoop/RegularEvent.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4189ef764fd57f58_76_new,"haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","/usr/share/haxe/std/haxe/Timer.hx",76,0x4b93f3e7)
HX_DEFINE_STACK_FRAME(_hx_pos_4189ef764fd57f58_65_new,"haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","/usr/share/haxe/std/haxe/Timer.hx",65,0x4b93f3e7)
HX_LOCAL_STACK_FRAME(_hx_pos_4189ef764fd57f58_106_stop,"haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","/usr/share/haxe/std/haxe/Timer.hx",106,0x4b93f3e7)
HX_LOCAL_STACK_FRAME(_hx_pos_4189ef764fd57f58_129___default_run,"haxe.Timer","__default_run",0xdc2b9b9c,"haxe.Timer.__default_run","/usr/share/haxe/std/haxe/Timer.hx",129,0x4b93f3e7)
HX_LOCAL_STACK_FRAME(_hx_pos_4189ef764fd57f58_142_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","/usr/share/haxe/std/haxe/Timer.hx",142,0x4b93f3e7)
HX_LOCAL_STACK_FRAME(_hx_pos_4189ef764fd57f58_140_delay,"haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","/usr/share/haxe/std/haxe/Timer.hx",140,0x4b93f3e7)
namespace haxe{

void Timer_obj::__construct(int time_ms){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::Timer,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_4189ef764fd57f58_76_new)
HXLINE(  76)			_gthis->run();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_4189ef764fd57f58_65_new)
HXDLIN(  65)		 ::haxe::Timer _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  75)		this->thread = ::sys::thread::_Thread::HaxeThread_obj::current();
HXLINE(  76)		this->eventHandler = ::sys::thread::_Thread::Thread_Impl__obj::get_events(this->thread)->repeat( ::Dynamic(new _hx_Closure_0(_gthis)),time_ms);
            	}

Dynamic Timer_obj::__CreateEmpty() { return new Timer_obj; }

void *Timer_obj::_hx_vtable = 0;

Dynamic Timer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Timer_obj > _hx_result = new Timer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Timer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04eaa0bb;
}

void Timer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4189ef764fd57f58_106_stop)
HXDLIN( 106)		::sys::thread::_Thread::Thread_Impl__obj::get_events(this->thread)->cancel(this->eventHandler);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_4189ef764fd57f58_129___default_run)
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

 ::haxe::Timer Timer_obj::delay( ::Dynamic f,int time_ms){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::haxe::Timer,t) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_4189ef764fd57f58_142_delay)
HXLINE( 143)			t->stop();
HXLINE( 144)			f();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_4189ef764fd57f58_140_delay)
HXLINE( 141)		 ::haxe::Timer t =  ::haxe::Timer_obj::__alloc( HX_CTX ,time_ms);
HXLINE( 142)		t->run =  ::Dynamic(new _hx_Closure_0(f,t));
HXLINE( 146)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )


void Timer_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,Timer_obj *_hx_obj) {
	if (!_hx_obj->run.mPtr) _hx_obj->run = new __default_run(_hx_obj);
}
::hx::ObjectPtr< Timer_obj > Timer_obj::__new(int time_ms) {
	::hx::ObjectPtr< Timer_obj > __this = new Timer_obj();
	__this->__construct(time_ms);
	return __this;
}

::hx::ObjectPtr< Timer_obj > Timer_obj::__alloc(::hx::Ctx *_hx_ctx,int time_ms) {
	Timer_obj *__this = (Timer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Timer_obj), true, "haxe.Timer"));
	*(void **)__this = Timer_obj::_hx_vtable;
	haxe::Timer_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(time_ms);
	return __this;
}

Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(thread,"thread");
	HX_MARK_MEMBER_NAME(eventHandler,"eventHandler");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thread,"thread");
	HX_VISIT_MEMBER_NAME(eventHandler,"eventHandler");
	HX_VISIT_MEMBER_NAME(run,"run");
}

::hx::Val Timer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thread") ) { return ::hx::Val( thread ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"eventHandler") ) { return ::hx::Val( eventHandler ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true; }
	}
	return false;
}

::hx::Val Timer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thread") ) { thread=inValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"eventHandler") ) { eventHandler=inValue.Cast<  ::sys::thread::_EventLoop::RegularEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("thread",ca,7a,b9,8e));
	outFields->push(HX_("eventHandler",d0,a6,2a,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Timer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(Timer_obj,thread),HX_("thread",ca,7a,b9,8e)},
	{::hx::fsObject /*  ::sys::thread::_EventLoop::RegularEvent */ ,(int)offsetof(Timer_obj,eventHandler),HX_("eventHandler",d0,a6,2a,d6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Timer_obj,run),HX_("run",4b,e7,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Timer_obj_sStaticStorageInfo = 0;
#endif

static ::String Timer_obj_sMemberFields[] = {
	HX_("thread",ca,7a,b9,8e),
	HX_("eventHandler",d0,a6,2a,d6),
	HX_("stop",02,f0,5b,4c),
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class Timer_obj::__mClass;

static ::String Timer_obj_sStaticFields[] = {
	HX_("delay",83,d7,26,d7),
	::String(null())
};

void Timer_obj::__register()
{
	Timer_obj _hx_dummy;
	Timer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Timer",5d,9d,24,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Timer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Timer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Timer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Timer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Timer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
