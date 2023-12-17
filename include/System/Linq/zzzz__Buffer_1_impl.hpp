#pragma once
#include "System/Linq/zzzz__Buffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__set_items(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>& System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> const& System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr void System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr int32_t& System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr int32_t const& System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline void System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*> System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_0>
constexpr ::System::Linq::Buffer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>::Buffer_1(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>,::Array<::System::Collections::Generic::KeyValuePair_2<int32_t,TValue_cordlgen_0>>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*)>(&::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*> (::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::*)()>(&::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__set_items(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>>(value));
}
constexpr ::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>& System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*> const& System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::__PoolableManager__PoolableInfo>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*> System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::Zenject::__PoolableManager__PoolableInfo>::Buffer_1(::ArrayW<::Zenject::__PoolableManager__PoolableInfo,::Array<::Zenject::__PoolableManager__PoolableInfo>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*)>(&::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*> (::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::*)()>(&::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__set_items(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>>(value));
}
constexpr ::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>& System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*> const& System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::__DisposableManager__DisposableInfo>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*> System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::Zenject::__DisposableManager__DisposableInfo>::Buffer_1(::ArrayW<::Zenject::__DisposableManager__DisposableInfo,::Array<::Zenject::__DisposableManager__DisposableInfo>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*)>(&::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> (::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_items(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>& System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> const& System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::Buffer_1(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*)>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> (::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__set_items(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>& System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> const& System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*> System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>::Buffer_1(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement,::Array<::UnityEngine::InputSystem::__InputControlScheme__DeviceRequirement>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*)>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> (::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__set_items(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> const& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>::Buffer_1(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*)>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> (::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__set_items(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::InputSystem::Utilities::InternedString>::Buffer_1(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(&::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*> (::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__set_items(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>& System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*> const& System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*> System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::ProBuilder::Edge>::Buffer_1(::ArrayW<::UnityEngine::ProBuilder::Edge,::Array<::UnityEngine::ProBuilder::Edge>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector4>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::Vector4>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*)>(&::System::Linq::Buffer_1<::UnityEngine::Vector4>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector4>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> (::System::Linq::Buffer_1<::UnityEngine::Vector4>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::Vector4>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector4>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector4>::__set_items(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& System::Linq::Buffer_1<::UnityEngine::Vector4>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& System::Linq::Buffer_1<::UnityEngine::Vector4>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector4>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::Vector4>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::Vector4>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::Vector4>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector4>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> System::Linq::Buffer_1<::UnityEngine::Vector4>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector4>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::Vector4>::Buffer_1(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<uint32_t>::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(&::System::Linq::Buffer_1<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<uint32_t>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint32_t,::Array<uint32_t>*> (::System::Linq::Buffer_1<uint32_t>::*)()>(&::System::Linq::Buffer_1<uint32_t>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<uint32_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<uint32_t>::__set_items(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& System::Linq::Buffer_1<uint32_t>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& System::Linq::Buffer_1<uint32_t>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<uint32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<uint32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<uint32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<uint32_t>::_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> System::Linq::Buffer_1<uint32_t>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<uint32_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t,::Array<uint32_t>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<uint32_t>::Buffer_1(::ArrayW<uint32_t,::Array<uint32_t>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::Vector3>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*)>(&::System::Linq::Buffer_1<::UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector3>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> (::System::Linq::Buffer_1<::UnityEngine::Vector3>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::Vector3>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector3>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector3>::__set_items(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& System::Linq::Buffer_1<::UnityEngine::Vector3>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& System::Linq::Buffer_1<::UnityEngine::Vector3>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector3>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::Vector3>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::Vector3>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::Vector3>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> System::Linq::Buffer_1<::UnityEngine::Vector3>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector3>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::Vector3>::Buffer_1(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector2>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::Vector2>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*)>(&::System::Linq::Buffer_1<::UnityEngine::Vector2>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Vector2>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> (::System::Linq::Buffer_1<::UnityEngine::Vector2>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::Vector2>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector2>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector2>::__set_items(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>& System::Linq::Buffer_1<::UnityEngine::Vector2>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> const& System::Linq::Buffer_1<::UnityEngine::Vector2>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::Vector2>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::Vector2>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::Vector2>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::Vector2>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> System::Linq::Buffer_1<::UnityEngine::Vector2>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Vector2>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::Vector2>::Buffer_1(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<float_t>::*)(::System::Collections::Generic::IEnumerable_1<float_t>*)>(&::System::Linq::Buffer_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<float_t>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::System::Linq::Buffer_1<float_t>::*)()>(&::System::Linq::Buffer_1<float_t>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<float_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<float_t>::__set_items(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& System::Linq::Buffer_1<float_t>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& System::Linq::Buffer_1<float_t>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<float_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<float_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<float_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<float_t>::_ctor(::System::Collections::Generic::IEnumerable_1<float_t>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<float_t,::Array<float_t>*> System::Linq::Buffer_1<float_t>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<float_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<float_t>::Buffer_1(::ArrayW<float_t,::Array<float_t>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> (::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_items(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>& System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> const& System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Buffer_1(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,::Array<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Color>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<::UnityEngine::Color>::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*)>(&::System::Linq::Buffer_1<::UnityEngine::Color>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Color>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<::UnityEngine::Color>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> (::System::Linq::Buffer_1<::UnityEngine::Color>::*)()>(&::System::Linq::Buffer_1<::UnityEngine::Color>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Color>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<::UnityEngine::Color>::__set_items(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& System::Linq::Buffer_1<::UnityEngine::Color>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& System::Linq::Buffer_1<::UnityEngine::Color>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<::UnityEngine::Color>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<::UnityEngine::Color>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<::UnityEngine::Color>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<::UnityEngine::Color>::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Color>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> System::Linq::Buffer_1<::UnityEngine::Color>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<::UnityEngine::Color>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<::UnityEngine::Color>::Buffer_1(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<char16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<char16_t>::*)(::System::Collections::Generic::IEnumerable_1<char16_t>*)>(&::System::Linq::Buffer_1<char16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<char16_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<char16_t>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t,::Array<char16_t>*> (::System::Linq::Buffer_1<char16_t>::*)()>(&::System::Linq::Buffer_1<char16_t>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<char16_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<char16_t>::__set_items(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Linq::Buffer_1<char16_t>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Linq::Buffer_1<char16_t>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<char16_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<char16_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<char16_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<char16_t>::_ctor(::System::Collections::Generic::IEnumerable_1<char16_t>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<char16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<char16_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Linq::Buffer_1<char16_t>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<char16_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<char16_t>::Buffer_1(::ArrayW<char16_t,::Array<char16_t>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
//  Writing Method size for method: ::System::Linq::Buffer_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Buffer_1<int32_t>::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Buffer_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Buffer_1<int32_t>.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::System::Linq::Buffer_1<int32_t>::*)()>(&::System::Linq::Buffer_1<int32_t>::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<int32_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Buffer_1<int32_t>::__set_items(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Linq::Buffer_1<int32_t>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Linq::Buffer_1<int32_t>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Linq::Buffer_1<int32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Linq::Buffer_1<int32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Linq::Buffer_1<int32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Linq::Buffer_1<int32_t>::_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Linq::Buffer_1<int32_t>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<int32_t>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Buffer_1<int32_t>::Buffer_1(::ArrayW<int32_t,::Array<int32_t>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Buffer_1<TElement>::__set_items(::ArrayW<TElement,::Array<TElement>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<TElement,::Array<TElement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<TElement,::Array<TElement>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<TElement,::Array<TElement>*>& System::Linq::Buffer_1<TElement>::__get_items()  {
return ::cordl_internals::getInstanceField<::ArrayW<TElement,::Array<TElement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::ArrayW<TElement,::Array<TElement>*> const& System::Linq::Buffer_1<TElement>::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<TElement,::Array<TElement>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr void System::Linq::Buffer_1<TElement>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t& System::Linq::Buffer_1<TElement>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr int32_t const& System::Linq::Buffer_1<TElement>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline void System::Linq::Buffer_1<TElement>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<TElement>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TElement>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source);
}
template<::il2cpp_utils::il2cpp_reference_type TElement>
inline ::ArrayW<TElement,::Array<TElement>*> System::Linq::Buffer_1<TElement>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<TElement>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TElement,::Array<TElement>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<TElement,::Array<TElement>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TElement>
constexpr ::System::Linq::Buffer_1<TElement>::Buffer_1(::ArrayW<TElement,::Array<TElement>*>  items, int32_t  count) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->items = items;
this->count = count;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
