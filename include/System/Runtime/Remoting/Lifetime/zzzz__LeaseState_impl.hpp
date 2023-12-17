#pragma once
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
constexpr void System::Runtime::Remoting::Lifetime::LeaseState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Remoting::Lifetime::LeaseState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::Remoting::Lifetime::LeaseState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState::LeaseState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Null{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Initial{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Active{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Renewing{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Expired{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
