#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
constexpr void UnityEngine::InputSystem::XR::FeatureType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::XR::FeatureType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::XR::FeatureType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XR::FeatureType::FeatureType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Custom{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Binary{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::DiscreteStates{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis1D{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis2D{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Axis3D{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Rotation{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Hand{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Bone{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::InputSystem::XR::FeatureType  UnityEngine::InputSystem::XR::FeatureType::Eyes{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
