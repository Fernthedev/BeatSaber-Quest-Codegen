#pragma once
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
constexpr void System::ComponentModel::ListChangedType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::ListChangedType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::ComponentModel::ListChangedType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::ListChangedType::ListChangedType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::Reset{static_cast<int32_t>(0x0)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemAdded{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemDeleted{static_cast<int32_t>(0x2)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemMoved{static_cast<int32_t>(0x3)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemChanged{static_cast<int32_t>(0x4)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorAdded{static_cast<int32_t>(0x5)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorDeleted{static_cast<int32_t>(0x6)};
constexpr ::System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorChanged{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
