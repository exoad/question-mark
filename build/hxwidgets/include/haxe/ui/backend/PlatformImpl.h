#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#define INCLUDED_haxe_ui_backend_PlatformImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,PlatformBase)
HX_DECLARE_CLASS3(haxe,ui,backend,PlatformImpl)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES PlatformImpl_obj : public  ::haxe::ui::backend::PlatformBase_obj
{
	public:
		typedef  ::haxe::ui::backend::PlatformBase_obj super;
		typedef PlatformImpl_obj OBJ_;
		PlatformImpl_obj();

	public:
		enum { _hx_ClassId = 0x7dad82ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.PlatformImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.PlatformImpl"); }
		static ::hx::ObjectPtr< PlatformImpl_obj > __new();
		static ::hx::ObjectPtr< PlatformImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlatformImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlatformImpl",53,7f,1a,b5); }

		virtual Float getMetric(::String id);

		 ::Dynamic getColor(::String id);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_PlatformImpl */ 
