#pragma once
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
constexpr void Oculus::Platform::VoipDtxState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::VoipDtxState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::VoipDtxState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipDtxState::VoipDtxState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Enabled{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Disabled{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
