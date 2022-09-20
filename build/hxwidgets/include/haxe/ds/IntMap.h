#ifndef INCLUDED_haxe_ds_IntMap
#define INCLUDED_haxe_ds_IntMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES IntMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IntMap_obj OBJ_;
		IntMap_obj();

	public:
		enum { _hx_ClassId = 0x269a1502 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.IntMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds.IntMap"); }
		static ::hx::ObjectPtr< IntMap_obj > __new();
		static ::hx::ObjectPtr< IntMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IntMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("IntMap",0d,a9,08,d3); }

		 ::Dynamic h;
		void set(int key, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic get(int key);
		::Dynamic get_dyn();

		bool exists(int key);
		::Dynamic exists_dyn();

		bool remove(int key);
		::Dynamic remove_dyn();

		 ::Dynamic keys();
		::Dynamic keys_dyn();


  inline void set(int key, ::null value) { __int_hash_set(HX_MAP_THIS,key,value); }
  inline void set(int key, bool value) { __int_hash_set(HX_MAP_THIS,key,value); }
  inline void set(int key, char value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, unsigned char value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, signed char value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, short value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, unsigned short value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, int value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, unsigned int value) { __int_hash_set_int(HX_MAP_THIS,key,value); }
  inline void set(int key, float value) { __int_hash_set_float(HX_MAP_THIS,key,value); }
  inline void set(int key, double value) { __int_hash_set_float(HX_MAP_THIS,key,value); }
  inline void set(int key, ::String value) { __int_hash_set_string(HX_MAP_THIS,key,value); }

  template<typename V, typename H>
  inline void set(int key, const ::cpp::Struct<V,H> &value) {__int_hash_set(HX_MAP_THIS,key,value); }
  template<typename F>
  inline void set(int key, const ::cpp::Function<F> &value) {__int_hash_set(HX_MAP_THIS,key,value); }
  template<typename V>
  inline void set(int key, const ::cpp::Pointer<V> &value) {__int_hash_set(HX_MAP_THIS,key,(Dynamic)value ); }

  template<typename VALUE>
  inline void set(Dynamic &key, const VALUE &value) { set( (int)key, value ); }

  inline bool get_bool(int key) { return __int_hash_get_bool(h,key); }
  inline int get_int(int key) { return __int_hash_get_int(h,key); }
  inline Float get_float(int key) { return __int_hash_get_float(h,key); }
  inline String get_string(int key) { return __int_hash_get_string(h,key); }

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_IntMap */ 
