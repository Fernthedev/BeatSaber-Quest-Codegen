#pragma once
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
constexpr void System::ComponentModel::DesignerSerializationVisibility::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::DesignerSerializationVisibility::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ComponentModel::DesignerSerializationVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::DesignerSerializationVisibility::DesignerSerializationVisibility(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Hidden{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Visible{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  System::ComponentModel::DesignerSerializationVisibility::Content{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
