#pragma once
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
constexpr void Oculus::Platform::VoipMuteState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::VoipMuteState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::VoipMuteState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipMuteState::VoipMuteState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Muted{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Unmuted{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
