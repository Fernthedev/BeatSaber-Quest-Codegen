#pragma once
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
constexpr void UnityEngine::XR::XRNode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::XR::XRNode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::XR::XRNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRNode::XRNode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftEye{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightEye{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::CenterEye{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::Head{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::LeftHand{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::RightHand{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::GameController{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::TrackingReference{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::XR::XRNode  UnityEngine::XR::XRNode::HardwareTracker{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
