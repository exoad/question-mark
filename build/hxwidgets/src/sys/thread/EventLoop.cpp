#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_sys_thread_EventLoop
#include <sys/thread/EventLoop.h>
#endif
#ifndef INCLUDED_sys_thread_Lock
#include <sys/thread/Lock.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif
#ifndef INCLUDED_sys_thread__EventLoop_RegularEvent
#include <sys/thread/_EventLoop/RegularEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dec05f81178ee6ce_24_new,"sys.thread.EventLoop","new",0xafe12fcd,"sys.thread.EventLoop.new","/usr/share/haxe/std/sys/thread/EventLoop.hx",24,0x36352808)
HX_LOCAL_STACK_FRAME(_hx_pos_dec05f81178ee6ce_37_repeat,"sys.thread.EventLoop","repeat",0xe060da0e,"sys.thread.EventLoop.repeat","/usr/share/haxe/std/sys/thread/EventLoop.hx",37,0x36352808)
HX_LOCAL_STACK_FRAME(_hx_pos_dec05f81178ee6ce_81_cancel,"sys.thread.EventLoop","cancel",0x9218302d,"sys.thread.EventLoop.cancel","/usr/share/haxe/std/sys/thread/EventLoop.hx",81,0x36352808)
HX_LOCAL_STACK_FRAME(_hx_pos_dec05f81178ee6ce_173_loop,"sys.thread.EventLoop","loop",0x33ddc657,"sys.thread.EventLoop.loop","/usr/share/haxe/std/sys/thread/EventLoop.hx",173,0x36352808)
namespace sys{
namespace thread{

void EventLoop_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dec05f81178ee6ce_24_new)
HXLINE(  29)		this->promisedEventsCount = 0;
HXLINE(  28)		this->waitLock =  ::sys::thread::Lock_obj::__alloc( HX_CTX );
HXLINE(  27)		this->oneTimeEventsIdx = 0;
HXLINE(  26)		this->oneTimeEvents = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		this->mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}

Dynamic EventLoop_obj::__CreateEmpty() { return new EventLoop_obj; }

void *EventLoop_obj::_hx_vtable = 0;

Dynamic EventLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventLoop_obj > _hx_result = new EventLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a581147;
}

 ::sys::thread::_EventLoop::RegularEvent EventLoop_obj::repeat( ::Dynamic event,int intervalMs){
            	HX_GC_STACKFRAME(&_hx_pos_dec05f81178ee6ce_37_repeat)
HXLINE(  38)		this->mutex->acquire();
HXLINE(  39)		Float interval = (((Float)0.001) * ( (Float)(intervalMs) ));
HXLINE(  40)		 ::sys::thread::_EventLoop::RegularEvent event1 =  ::sys::thread::_EventLoop::RegularEvent_obj::__alloc( HX_CTX ,event,(::Sys_obj::time() + interval),interval);
HXLINE(  41)		{
HXLINE(  41)			 ::sys::thread::_EventLoop::RegularEvent _g = this->regularEvents;
HXDLIN(  41)			if (::hx::IsNull( _g )) {
HXLINE(  41)				this->regularEvents = event1;
            			}
            			else {
HXLINE(  41)				 ::sys::thread::_EventLoop::RegularEvent current = _g;
HXDLIN(  41)				{
HXLINE(  41)					 ::sys::thread::_EventLoop::RegularEvent previous = null();
HXDLIN(  41)					while(true){
HXLINE(  41)						if (::hx::IsNull( current )) {
HXLINE(  41)							previous->next = event1;
HXDLIN(  41)							event1->previous = previous;
HXDLIN(  41)							goto _hx_goto_1;
            						}
            						else {
HXLINE(  41)							if ((event1->nextRunTime < current->nextRunTime)) {
HXLINE(  41)								event1->next = current;
HXDLIN(  41)								current->previous = event1;
HXDLIN(  41)								if (::hx::IsNull( previous )) {
HXLINE(  41)									this->regularEvents = event1;
            								}
            								else {
HXLINE(  41)									event1->previous = previous;
HXDLIN(  41)									previous->next = event1;
HXDLIN(  41)									current->previous = event1;
            								}
HXDLIN(  41)								goto _hx_goto_1;
            							}
            							else {
HXLINE(  41)								previous = current;
HXDLIN(  41)								current = current->next;
            							}
            						}
            					}
            					_hx_goto_1:;
            				}
            			}
            		}
HXLINE(  42)		this->waitLock->release();
HXLINE(  43)		this->mutex->release();
HXLINE(  44)		return event1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventLoop_obj,repeat,return )

void EventLoop_obj::cancel( ::sys::thread::_EventLoop::RegularEvent eventHandler){
            	HX_STACKFRAME(&_hx_pos_dec05f81178ee6ce_81_cancel)
HXLINE(  82)		this->mutex->acquire();
HXLINE(  83)		 ::sys::thread::_EventLoop::RegularEvent event = eventHandler;
HXLINE(  84)		event->cancelled = true;
HXLINE(  85)		if (::hx::IsInstanceEq( this->regularEvents,event )) {
HXLINE(  86)			this->regularEvents = event->next;
            		}
HXLINE(  88)		{
HXLINE(  88)			 ::sys::thread::_EventLoop::RegularEvent _g = event->next;
HXLINE(  89)			if (::hx::IsNotNull( _g )) {
HXLINE(  90)				 ::sys::thread::_EventLoop::RegularEvent e = _g;
HXDLIN(  90)				e->previous = event->previous;
            			}
            		}
HXLINE(  92)		{
HXLINE(  92)			 ::sys::thread::_EventLoop::RegularEvent _g1 = event->previous;
HXLINE(  93)			if (::hx::IsNotNull( _g1 )) {
HXLINE(  94)				 ::sys::thread::_EventLoop::RegularEvent e = _g1;
HXDLIN(  94)				e->next = event->next;
            			}
            		}
HXLINE(  96)		this->mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventLoop_obj,cancel,(void))

void EventLoop_obj::loop(){
            	HX_STACKFRAME(&_hx_pos_dec05f81178ee6ce_173_loop)
HXLINE( 174)		::Array< ::Dynamic> recycleRegular = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 175)		::Array< ::Dynamic> recycleOneTimers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 176)		while(true){
HXLINE( 177)			Float now = ::Sys_obj::time();
HXDLIN( 177)			::Array< ::Dynamic> regularsToRun = recycleRegular;
HXDLIN( 177)			int eventsToRunIdx = 0;
HXDLIN( 177)			Float nextEventAt = ( (Float)(-1) );
HXDLIN( 177)			this->mutex->acquire();
HXDLIN( 177)			while(this->waitLock->wait(((Float)0.0))){
            			}
HXLINE( 177)			 ::sys::thread::_EventLoop::RegularEvent current = this->regularEvents;
HXDLIN( 177)			while(::hx::IsNotNull( current )){
HXLINE( 177)				if ((current->nextRunTime <= now)) {
HXLINE( 177)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 177)					regularsToRun[(eventsToRunIdx - 1)] = current;
HXDLIN( 177)					 ::sys::thread::_EventLoop::RegularEvent current1 = current;
HXDLIN( 177)					current1->nextRunTime = (current1->nextRunTime + current->interval);
HXLINE( 214)					nextEventAt = ( (Float)(-2) );
            				}
            				else {
HXLINE( 177)					bool _hx_tmp;
HXDLIN( 177)					if ((nextEventAt != -1)) {
HXLINE( 177)						_hx_tmp = (current->nextRunTime < nextEventAt);
            					}
            					else {
HXLINE( 177)						_hx_tmp = true;
            					}
HXDLIN( 177)					if (_hx_tmp) {
HXLINE( 216)						nextEventAt = current->nextRunTime;
            					}
            				}
HXLINE( 218)				current = current->next;
            			}
HXLINE( 177)			this->mutex->release();
HXDLIN( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = eventsToRunIdx;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int i = (_g - 1);
HXDLIN( 177)				if (!(regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->cancelled)) {
HXLINE( 177)					regularsToRun->__get(i).StaticCast<  ::sys::thread::_EventLoop::RegularEvent >()->run();
            				}
HXDLIN( 177)				regularsToRun[i] = null();
            			}
HXLINE( 228)			eventsToRunIdx = 0;
HXLINE( 177)			::Array< ::Dynamic> oneTimersToRun = recycleOneTimers;
HXDLIN( 177)			this->mutex->acquire();
HXDLIN( 177)			int _g2_current = 0;
HXDLIN( 177)			::Array< ::Dynamic> _g2_array = this->oneTimeEvents;
HXDLIN( 177)			while((_g2_current < _g2_array->length)){
HXLINE( 177)				 ::Dynamic _g3_value = _g2_array->__get(_g2_current);
HXDLIN( 177)				_g2_current = (_g2_current + 1);
HXDLIN( 177)				int _g3_key = (_g2_current - 1);
HXDLIN( 177)				int i = _g3_key;
HXDLIN( 177)				 ::Dynamic event = _g3_value;
HXDLIN( 177)				if (::hx::IsNull( event )) {
HXLINE( 177)					goto _hx_goto_8;
            				}
            				else {
HXLINE( 177)					eventsToRunIdx = (eventsToRunIdx + 1);
HXDLIN( 177)					oneTimersToRun[(eventsToRunIdx - 1)] = event;
HXDLIN( 177)					this->oneTimeEvents[i] = null();
            				}
            			}
            			_hx_goto_8:;
HXDLIN( 177)			this->oneTimeEventsIdx = 0;
HXDLIN( 177)			bool hasPromisedEvents = (this->promisedEventsCount > 0);
HXDLIN( 177)			this->mutex->release();
HXDLIN( 177)			int _g2 = 0;
HXDLIN( 177)			int _g3 = eventsToRunIdx;
HXDLIN( 177)			while((_g2 < _g3)){
HXLINE( 177)				_g2 = (_g2 + 1);
HXDLIN( 177)				int i = (_g2 - 1);
HXDLIN( 177)				oneTimersToRun->__get(i)();
HXDLIN( 177)				oneTimersToRun[i] = null();
            			}
HXDLIN( 177)			if ((eventsToRunIdx > 0)) {
HXLINE( 254)				nextEventAt = ( (Float)(-2) );
            			}
HXLINE( 177)			Float r_nextEventAt = nextEventAt;
HXDLIN( 177)			bool r_anyTime = hasPromisedEvents;
HXLINE( 178)			{
HXLINE( 178)				bool _g4 = r_anyTime;
HXDLIN( 178)				Float _g5 = r_nextEventAt;
HXDLIN( 178)				Float _hx_switch_0 = _g5;
            				if (  (_hx_switch_0==( (Float)(-2) )) ){
HXLINE( 179)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==( (Float)(-1) )) ){
HXLINE( 178)					if (_g4) {
HXLINE( 183)						this->waitLock->wait(null());
            					}
            					else {
HXLINE( 181)						goto _hx_goto_4;
            					}
HXLINE( 178)					goto _hx_goto_10;
            				}
            				/* default */{
HXLINE( 184)					Float time = _g5;
HXDLIN( 184)					{
HXLINE( 185)						Float timeout = (time - ::Sys_obj::time());
HXLINE( 186)						this->waitLock->wait(::Math_obj::max(( (Float)(0) ),timeout));
            					}
            				}
            				_hx_goto_10:;
            			}
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventLoop_obj,loop,(void))


::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__new() {
	::hx::ObjectPtr< EventLoop_obj > __this = new EventLoop_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EventLoop_obj > EventLoop_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EventLoop_obj *__this = (EventLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventLoop_obj), true, "sys.thread.EventLoop"));
	*(void **)__this = EventLoop_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventLoop_obj::EventLoop_obj()
{
}

void EventLoop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventLoop);
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_MARK_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_MARK_MEMBER_NAME(waitLock,"waitLock");
	HX_MARK_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_MARK_MEMBER_NAME(regularEvents,"regularEvents");
	HX_MARK_END_CLASS();
}

void EventLoop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
	HX_VISIT_MEMBER_NAME(oneTimeEvents,"oneTimeEvents");
	HX_VISIT_MEMBER_NAME(oneTimeEventsIdx,"oneTimeEventsIdx");
	HX_VISIT_MEMBER_NAME(waitLock,"waitLock");
	HX_VISIT_MEMBER_NAME(promisedEventsCount,"promisedEventsCount");
	HX_VISIT_MEMBER_NAME(regularEvents,"regularEvents");
}

::hx::Val EventLoop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return ::hx::Val( loop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return ::hx::Val( mutex ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return ::hx::Val( repeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { return ::hx::Val( waitLock ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { return ::hx::Val( oneTimeEvents ); }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { return ::hx::Val( regularEvents ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { return ::hx::Val( oneTimeEventsIdx ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { return ::hx::Val( promisedEventsCount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventLoop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"waitLock") ) { waitLock=inValue.Cast<  ::sys::thread::Lock >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"oneTimeEvents") ) { oneTimeEvents=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regularEvents") ) { regularEvents=inValue.Cast<  ::sys::thread::_EventLoop::RegularEvent >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oneTimeEventsIdx") ) { oneTimeEventsIdx=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"promisedEventsCount") ) { promisedEventsCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventLoop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mutex",7f,8f,5b,10));
	outFields->push(HX_("oneTimeEvents",0c,71,5c,81));
	outFields->push(HX_("oneTimeEventsIdx",91,7a,66,79));
	outFields->push(HX_("waitLock",00,01,9a,50));
	outFields->push(HX_("promisedEventsCount",0d,bf,c2,9b));
	outFields->push(HX_("regularEvents",95,42,47,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventLoop_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(EventLoop_obj,mutex),HX_("mutex",7f,8f,5b,10)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(EventLoop_obj,oneTimeEvents),HX_("oneTimeEvents",0c,71,5c,81)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,oneTimeEventsIdx),HX_("oneTimeEventsIdx",91,7a,66,79)},
	{::hx::fsObject /*  ::sys::thread::Lock */ ,(int)offsetof(EventLoop_obj,waitLock),HX_("waitLock",00,01,9a,50)},
	{::hx::fsInt,(int)offsetof(EventLoop_obj,promisedEventsCount),HX_("promisedEventsCount",0d,bf,c2,9b)},
	{::hx::fsObject /*  ::sys::thread::_EventLoop::RegularEvent */ ,(int)offsetof(EventLoop_obj,regularEvents),HX_("regularEvents",95,42,47,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventLoop_obj_sStaticStorageInfo = 0;
#endif

static ::String EventLoop_obj_sMemberFields[] = {
	HX_("mutex",7f,8f,5b,10),
	HX_("oneTimeEvents",0c,71,5c,81),
	HX_("oneTimeEventsIdx",91,7a,66,79),
	HX_("waitLock",00,01,9a,50),
	HX_("promisedEventsCount",0d,bf,c2,9b),
	HX_("regularEvents",95,42,47,b5),
	HX_("repeat",5b,97,7c,06),
	HX_("cancel",7a,ed,33,b8),
	HX_("loop",64,a6,b7,47),
	::String(null()) };

::hx::Class EventLoop_obj::__mClass;

void EventLoop_obj::__register()
{
	EventLoop_obj _hx_dummy;
	EventLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.EventLoop",5b,45,a8,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventLoop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventLoop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread
