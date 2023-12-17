#pragma once
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
constexpr void UnityEngine::XR::AvailableTrackingData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::AvailableTrackingData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::AvailableTrackingData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::AvailableTrackingData::AvailableTrackingData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::PositionAvailable{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::RotationAvailable{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::VelocityAvailable{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AngularVelocityAvailable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AccelerationAvailable{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::XR::AvailableTrackingData  UnityEngine::XR::AvailableTrackingData::AngularAccelerationAvailable{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
