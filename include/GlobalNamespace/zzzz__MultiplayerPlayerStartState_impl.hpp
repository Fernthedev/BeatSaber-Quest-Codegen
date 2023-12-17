#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
constexpr void GlobalNamespace::MultiplayerPlayerStartState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerPlayerStartState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::MultiplayerPlayerStartState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerPlayerStartState::MultiplayerPlayerStartState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState  GlobalNamespace::MultiplayerPlayerStartState::InSync{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MultiplayerPlayerStartState  GlobalNamespace::MultiplayerPlayerStartState::Late{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
