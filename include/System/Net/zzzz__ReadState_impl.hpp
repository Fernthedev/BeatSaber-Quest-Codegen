#pragma once
#include "System/Net/zzzz__ReadState_def.hpp"
constexpr void System::Net::ReadState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::ReadState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::ReadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::ReadState::ReadState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::ReadState  System::Net::ReadState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Status{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Headers{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Content{static_cast<int32_t>(0x3)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Aborted{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
