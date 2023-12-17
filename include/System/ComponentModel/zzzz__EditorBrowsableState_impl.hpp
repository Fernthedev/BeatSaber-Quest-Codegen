#pragma once
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
constexpr void System::ComponentModel::EditorBrowsableState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::EditorBrowsableState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ComponentModel::EditorBrowsableState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::EditorBrowsableState::EditorBrowsableState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Always{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Never{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::EditorBrowsableState  System::ComponentModel::EditorBrowsableState::Advanced{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
