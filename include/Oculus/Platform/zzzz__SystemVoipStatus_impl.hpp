#pragma once
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
constexpr void Oculus::Platform::SystemVoipStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::SystemVoipStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::SystemVoipStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::SystemVoipStatus::SystemVoipStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Unavailable{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Suppressed{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::SystemVoipStatus  Oculus::Platform::SystemVoipStatus::Active{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
