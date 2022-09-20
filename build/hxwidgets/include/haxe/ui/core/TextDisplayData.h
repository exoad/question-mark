#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#define INCLUDED_haxe_ui_core_TextDisplayData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_68e3108eed25cda6_8_new)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplayData)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TextDisplayData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextDisplayData_obj OBJ_;
		TextDisplayData_obj();

	public:
		enum { _hx_ClassId = 0x1db70446 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.core.TextDisplayData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.core.TextDisplayData"); }

		inline static ::hx::ObjectPtr< TextDisplayData_obj > __new() {
			::hx::ObjectPtr< TextDisplayData_obj > __this = new TextDisplayData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextDisplayData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextDisplayData_obj *__this = (TextDisplayData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplayData_obj), false, "haxe.ui.core.TextDisplayData"));
			*(void **)__this = TextDisplayData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_68e3108eed25cda6_8_new)
HXLINE(  10)		( ( ::haxe::ui::core::TextDisplayData)(__this) )->wordWrap = false;
HXLINE(   9)		( ( ::haxe::ui::core::TextDisplayData)(__this) )->multiline = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextDisplayData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextDisplayData",bf,5d,73,3c); }

		bool multiline;
		bool wordWrap;
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_TextDisplayData */ 
