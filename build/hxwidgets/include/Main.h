#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)



class HXCPP_CLASS_ATTRIBUTES Main_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x07825a7d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Main")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Main"); }

		inline static ::hx::ObjectPtr< Main_obj > __new() {
			::hx::ObjectPtr< Main_obj > __this = new Main_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Main_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), false, "Main"));
			*(void **)__this = Main_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Main",59,64,2f,33); }

		static void main();
		static ::Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
