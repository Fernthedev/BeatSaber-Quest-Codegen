#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__ReflectionProbeBakingOverride__ActiveStateHandling(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::LeaveAsIs{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::Enable{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::Disable{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeBakingOverride.UpdateForProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReflectionProbeBakingOverride::*)()>(&::GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22f82f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                            "UpdateForProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeBakingOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReflectionProbeBakingOverride::*)()>(&::GlobalNamespace::ReflectionProbeBakingOverride::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22f83e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__stateHandling(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, 0x18>(this, std::forward<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling>(value));
}
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling& GlobalNamespace::ReflectionProbeBakingOverride::__get__stateHandling()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, 0x18>(this);
}
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const& GlobalNamespace::ReflectionProbeBakingOverride::__get__stateHandling() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling, 0x18>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setPosition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__get__setPosition()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__get__setPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__get__localPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__get__localPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setRotation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__get__setRotation()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__get__setRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localRotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x30>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__get__localRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__get__localRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x30>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setScale(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__get__setScale()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__get__setScale() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localScale(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__get__localScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__get__localScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
inline void GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                            "UpdateForProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ReflectionProbeBakingOverride* GlobalNamespace::ReflectionProbeBakingOverride::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ReflectionProbeBakingOverride*>());
}
inline void GlobalNamespace::ReflectionProbeBakingOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
