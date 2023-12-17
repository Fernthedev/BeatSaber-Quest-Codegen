#pragma once
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
constexpr void UnityEngine::XR::InputTrackingState::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::XR::InputTrackingState::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::XR::InputTrackingState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputTrackingState::InputTrackingState(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::None{static_cast<uint32_t>(0x4020100u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Position{static_cast<uint32_t>(0x8040201u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Rotation{static_cast<uint32_t>(0x10080402u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Velocity{static_cast<uint32_t>(0x20100804u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::AngularVelocity{static_cast<uint32_t>(0x3f201008u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::Acceleration{static_cast<uint32_t>(0x3f2010u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::AngularAcceleration{static_cast<uint32_t>(0x3f20u)};
constexpr ::UnityEngine::XR::InputTrackingState  UnityEngine::XR::InputTrackingState::All{static_cast<uint32_t>(0x8000003fu)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
