#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#define INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,ActuatorOptions)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ActuatorOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ActuatorOptions_obj OBJ_;
		ActuatorOptions_obj();

	public:
		enum { _hx_ClassId = 0x1cc13abf };

		void __construct( ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.util.ActuatorOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.util.ActuatorOptions"); }
		static ::hx::ObjectPtr< ActuatorOptions_obj > __new( ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate);
		static ::hx::ObjectPtr< ActuatorOptions_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActuatorOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ActuatorOptions",05,6f,18,57); }

		 ::Dynamic delay;
		 ::haxe::ui::styles::EasingFunction easingFunction;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		 ::Dynamic onUpdate;
		Dynamic onUpdate_dyn() { return onUpdate;}
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util

#endif /* INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions */ 
