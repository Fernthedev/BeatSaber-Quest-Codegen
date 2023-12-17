#pragma once
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
constexpr void UnityEngine::InputSystem::Users::InputUserChange::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Users::InputUserChange::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Users::InputUserChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUserChange::InputUserChange(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::Added{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::Removed{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DevicePaired{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceUnpaired{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceLost{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceRegained{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountChanged{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountNameChanged{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionInProgress{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionCanceled{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionComplete{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::ControlSchemeChanged{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::ControlsChanged{static_cast<int32_t>(0xc)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
