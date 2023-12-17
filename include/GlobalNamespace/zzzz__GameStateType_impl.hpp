#pragma once
#include "GlobalNamespace/zzzz__GameStateType_def.hpp"
constexpr void GlobalNamespace::GameStateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::GameStateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::GameStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameStateType::GameStateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::GameStateType  GlobalNamespace::GameStateType::EmptyServer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GameStateType  GlobalNamespace::GameStateType::SelectingLevel{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GameStateType  GlobalNamespace::GameStateType::StartingLevel{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GameStateType  GlobalNamespace::GameStateType::RunningLevel{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
