#pragma once
#include "Oculus/Platform/zzzz__MultiplayerErrorErrorKey_def.hpp"
constexpr void Oculus::Platform::MultiplayerErrorErrorKey::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::MultiplayerErrorErrorKey::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::MultiplayerErrorErrorKey::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey::MultiplayerErrorErrorKey(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::DestinationUnavailable{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::DlcRequired{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::General{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::GroupFull{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::InviterNotJoinable{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::LevelNotHighEnough{static_cast<int32_t>(0x6)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::LevelNotUnlocked{static_cast<int32_t>(0x7)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::NetworkTimeout{static_cast<int32_t>(0x8)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::NoLongerAvailable{static_cast<int32_t>(0x9)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::UpdateRequired{static_cast<int32_t>(0xa)};
constexpr ::Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::TutorialRequired{static_cast<int32_t>(0xb)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
