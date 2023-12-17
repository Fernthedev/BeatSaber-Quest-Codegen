#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
constexpr void UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__TimeFieldAttribute__UseEditMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::ApplyEditMode{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(&::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6e760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                            "get_useEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode)>(&::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c6e768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::TimeFieldAttribute::__set__useEditMode_k__BackingField(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, 0x10>(this, std::forward<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode>(value));
}
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode& UnityEngine::Timeline::TimeFieldAttribute::__get__useEditMode_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, 0x10>(this);
}
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const& UnityEngine::Timeline::TimeFieldAttribute::__get__useEditMode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, 0x10>(this);
}
inline ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                            "get_useEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, false>(*this, ___internal_method);
}
/// @param useEditMode: ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (default: static_cast<int32_t>(0x1))
inline ::UnityEngine::Timeline::TimeFieldAttribute* UnityEngine::Timeline::TimeFieldAttribute::New_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  useEditMode)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TimeFieldAttribute*>(useEditMode));
}
/// @param useEditMode: ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (default: static_cast<int32_t>(0x1))
inline void UnityEngine::Timeline::TimeFieldAttribute::_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode  useEditMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, useEditMode);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
