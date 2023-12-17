#pragma once
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
constexpr void System::Security::AccessControl::AccessControlSections::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::AccessControl::AccessControlSections::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::AccessControl::AccessControlSections::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::AccessControl::AccessControlSections::AccessControlSections(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::None{static_cast<int32_t>(0x0)};
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Audit{static_cast<int32_t>(0x1)};
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Access{static_cast<int32_t>(0x2)};
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Owner{static_cast<int32_t>(0x4)};
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::Group{static_cast<int32_t>(0x8)};
constexpr ::System::Security::AccessControl::AccessControlSections  System::Security::AccessControl::AccessControlSections::All{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
