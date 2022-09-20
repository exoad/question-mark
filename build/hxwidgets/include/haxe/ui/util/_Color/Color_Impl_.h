#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#define INCLUDED_haxe_ui_util__Color_Color_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,util,_Color,Color_Impl_)

namespace haxe{
namespace ui{
namespace util{
namespace _Color{


class HXCPP_CLASS_ATTRIBUTES Color_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Color_Impl__obj OBJ_;
		Color_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0dd482e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util._Color.Color_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util._Color.Color_Impl_"); }

		inline static ::hx::ObjectPtr< Color_Impl__obj > __new() {
			::hx::ObjectPtr< Color_Impl__obj > __this = new Color_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Color_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Color_Impl__obj *__this = (Color_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Color_Impl__obj), false, "haxe.ui.util._Color.Color_Impl_"));
			*(void **)__this = Color_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Color_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Color_Impl_",23,f2,4f,b6); }

		static int fromString(::String s);
		static ::Dynamic fromString_dyn();

		static int fromComponents(int r,int g,int b,int a);
		static ::Dynamic fromComponents_dyn();

		static int get_r(int this1);
		static ::Dynamic get_r_dyn();

		static int set_r(int this1,int value);
		static ::Dynamic set_r_dyn();

		static int get_g(int this1);
		static ::Dynamic get_g_dyn();

		static int set_g(int this1,int value);
		static ::Dynamic set_g_dyn();

		static int get_b(int this1);
		static ::Dynamic get_b_dyn();

		static int set_b(int this1,int value);
		static ::Dynamic set_b_dyn();

		static int get_a(int this1);
		static ::Dynamic get_a_dyn();

		static int set_a(int this1,int value);
		static ::Dynamic set_a_dyn();

		static int set(int this1,int r,int g,int b,int a);
		static ::Dynamic set_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static ::String toHex(int this1);
		static ::Dynamic toHex_dyn();

		static int _hx_or(int a,int b);
		static ::Dynamic _hx_or_dyn();

		static int sumColor(int a,int b);
		static ::Dynamic sumColor_dyn();

		static int restColor(int a,int b);
		static ::Dynamic restColor_dyn();

		static int sumFloat(int a,Float b);
		static ::Dynamic sumFloat_dyn();

		static int mulFloat(int a,Float b);
		static ::Dynamic mulFloat_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Color

#endif /* INCLUDED_haxe_ui_util__Color_Color_Impl_ */ 
