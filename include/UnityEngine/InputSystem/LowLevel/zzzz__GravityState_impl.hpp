#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__GravityState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GravityState.get_kFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::GravityState::get_kFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29562cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GravityState>::get(),
                            "get_kFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::GravityState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::GravityState::*)()>(&::UnityEngine::InputSystem::LowLevel::GravityState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29562fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GravityState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  ::UnityEngine::InputSystem::LowLevel::GravityState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "gravity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::GravityState::GravityState(::UnityEngine::Vector3 gravity) noexcept : ::bs_hook::ValueTypeWrapper() {this->gravity = gravity;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::GravityState::__set_gravity(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::InputSystem::LowLevel::GravityState::__get_gravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::GravityState::get_kFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GravityState>::get(),
                            "get_kFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::GravityState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::GravityState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
