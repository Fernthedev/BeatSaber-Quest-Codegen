#pragma once
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
constexpr void System::Security::Permissions::SecurityAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Permissions::SecurityAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Permissions::SecurityAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Permissions::SecurityAction::SecurityAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::Demand{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::_cordl_Assert{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::Deny{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::PermitOnly{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::LinkDemand{static_cast<int32_t>(0x6)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::InheritanceDemand{static_cast<int32_t>(0x7)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestMinimum{static_cast<int32_t>(0x8)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestOptional{static_cast<int32_t>(0x9)};
constexpr ::System::Security::Permissions::SecurityAction  System::Security::Permissions::SecurityAction::RequestRefuse{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
