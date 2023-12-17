#pragma once
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
constexpr void UnityEngine::XR::ConnectionChangeType::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::XR::ConnectionChangeType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::XR::ConnectionChangeType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::ConnectionChangeType::ConnectionChangeType(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Connected{static_cast<uint32_t>(0x20100u)};
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::Disconnected{static_cast<uint32_t>(0x1000201u)};
constexpr ::UnityEngine::XR::ConnectionChangeType  UnityEngine::XR::ConnectionChangeType::ConfigChange{static_cast<uint32_t>(0x2010002u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
