#pragma once
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AndroidSensorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Accelerometer{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MagneticField{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Orientation{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Gyroscope{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Light{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Pressure{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Temperature{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Proximity{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Gravity{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::LinearAcceleration{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::RotationVector{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::RelativeHumidity{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AmbientTemperature{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MagneticFieldUncalibrated{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GameRotationVector{static_cast<int32_t>(0xf)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GyroscopeUncalibrated{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::SignificantMotion{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StepDetector{static_cast<int32_t>(0x12)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StepCounter{static_cast<int32_t>(0x13)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::GeomagneticRotationVector{static_cast<int32_t>(0x14)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::HeartRate{static_cast<int32_t>(0x15)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::Pose6DOF{static_cast<int32_t>(0x1c)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::StationaryDetect{static_cast<int32_t>(0x1d)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::MotionDetect{static_cast<int32_t>(0x1e)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::HeartBeat{static_cast<int32_t>(0x1f)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::LowLatencyOffBodyDetect{static_cast<int32_t>(0x22)};
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType::AccelerometerUncalibrated{static_cast<int32_t>(0x23)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
