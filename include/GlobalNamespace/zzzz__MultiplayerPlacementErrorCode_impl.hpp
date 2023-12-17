#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
constexpr void GlobalNamespace::MultiplayerPlacementErrorCode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerPlacementErrorCode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::MultiplayerPlacementErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode::MultiplayerPlacementErrorCode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::Unknown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ConnectionCanceled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ServerDoesNotExist{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ServerAtCapacity{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::AuthenticationFailed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::RequestTimeout{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::MatchmakingTimeout{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
