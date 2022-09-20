#ifndef INCLUDED_haxe_ui_geom_Slice9
#define INCLUDED_haxe_ui_geom_Slice9

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,geom,Slice9)

namespace haxe{
namespace ui{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Slice9_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Slice9_obj OBJ_;
		Slice9_obj();

	public:
		enum { _hx_ClassId = 0x0619247d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.geom.Slice9")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.geom.Slice9"); }

		inline static ::hx::ObjectPtr< Slice9_obj > __new() {
			::hx::ObjectPtr< Slice9_obj > __this = new Slice9_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Slice9_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Slice9_obj *__this = (Slice9_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Slice9_obj), false, "haxe.ui.geom.Slice9"));
			*(void **)__this = Slice9_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Slice9_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Slice9",c7,77,98,a4); }

		static  ::Dynamic buildRects(Float w,Float h,Float bitmapWidth,Float bitmapHeight, ::haxe::ui::geom::Rectangle slice);
		static ::Dynamic buildRects_dyn();

		static ::Array< ::Dynamic> buildSrcRects(Float bitmapWidth,Float bitmapHeight, ::haxe::ui::geom::Rectangle slice);
		static ::Dynamic buildSrcRects_dyn();

		static ::Array< ::Dynamic> buildDstRects(Float w,Float h,::Array< ::Dynamic> srcRects);
		static ::Dynamic buildDstRects_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace geom

#endif /* INCLUDED_haxe_ui_geom_Slice9 */ 
