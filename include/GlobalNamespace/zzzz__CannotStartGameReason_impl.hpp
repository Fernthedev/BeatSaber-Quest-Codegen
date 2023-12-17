#pragma once
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
constexpr void GlobalNamespace::CannotStartGameReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::CannotStartGameReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::CannotStartGameReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CannotStartGameReason::CannotStartGameReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::None{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::AllPlayersSpectating{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::NoSongSelected{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::AllPlayersNotInLobby{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::DoNotOwnSong{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
