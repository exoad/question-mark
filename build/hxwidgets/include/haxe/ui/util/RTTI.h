#ifndef INCLUDED_haxe_ui_util_RTTI
#define INCLUDED_haxe_ui_util_RTTI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,RTTI)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES RTTI_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RTTI_obj OBJ_;
		RTTI_obj();

	public:
		enum { _hx_ClassId = 0x59dc0ab3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.RTTI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.RTTI"); }

		inline static ::hx::ObjectPtr< RTTI_obj > __new() {
			::hx::ObjectPtr< RTTI_obj > __this = new RTTI_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RTTI_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RTTI_obj *__this = (RTTI_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RTTI_obj), false, "haxe.ui.util.RTTI"));
			*(void **)__this = RTTI_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RTTI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RTTI",b7,85,73,36); }

		static void __boot();
		static  ::haxe::ds::StringMap classInfo;
		static void addClassProperty(::String className,::String propertyName,::String propertyType);
		static ::Dynamic addClassProperty_dyn();

		static void setSuperClass(::String className,::String superClassName);
		static ::Dynamic setSuperClass_dyn();

		static bool hasSuperClass(::String className,::String superClassName);
		static ::Dynamic hasSuperClass_dyn();

		static bool hasClassProperty(::String className,::String propertyName);
		static ::Dynamic hasClassProperty_dyn();

		static void load();
		static ::Dynamic load_dyn();

		static  ::Dynamic getClassInfo(::String className);
		static ::Dynamic getClassInfo_dyn();

		static  ::Dynamic getClassProperty(::String className,::String propertyName);
		static ::Dynamic getClassProperty_dyn();

		static void save();
		static ::Dynamic save_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_RTTI */ 
