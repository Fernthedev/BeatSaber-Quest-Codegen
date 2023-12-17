#pragma once
#include "HMUI/zzzz__UISelectionState_def.hpp"
constexpr void HMUI::UISelectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::UISelectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::UISelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::UISelectionState::UISelectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::UISelectionState  HMUI::UISelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::HMUI::UISelectionState  HMUI::UISelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::HMUI::UISelectionState  HMUI::UISelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::HMUI::UISelectionState  HMUI::UISelectionState::Selected{static_cast<int32_t>(0x3)};
constexpr ::HMUI::UISelectionState  HMUI::UISelectionState::Disabled{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
