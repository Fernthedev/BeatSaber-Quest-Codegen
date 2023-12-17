#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
constexpr void BeatSaber::AvatarCore::AvatarDisplayContext::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::AvatarCore::AvatarDisplayContext::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatSaber::AvatarCore::AvatarDisplayContext::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext::AvatarDisplayContext(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::Unknown{static_cast<int32_t>(0x0)};
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::UI{static_cast<int32_t>(0x1)};
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerLobby{static_cast<int32_t>(0x2)};
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerGameplay{static_cast<int32_t>(0x3)};
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerResults{static_cast<int32_t>(0x4)};
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext  BeatSaber::AvatarCore::AvatarDisplayContext::MultiplayerBigAvatar{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
