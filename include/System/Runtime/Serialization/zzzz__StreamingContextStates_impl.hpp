#pragma once
#include "System/Runtime/Serialization/zzzz__StreamingContextStates_def.hpp"
constexpr void System::Runtime::Serialization::StreamingContextStates::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::StreamingContextStates::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::Serialization::StreamingContextStates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::StreamingContextStates::StreamingContextStates(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossProcess{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossMachine{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::File{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Persistence{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Remoting{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Other{static_cast<int32_t>(0x20)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::Clone{static_cast<int32_t>(0x40)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::CrossAppDomain{static_cast<int32_t>(0x80)};
constexpr ::System::Runtime::Serialization::StreamingContextStates  System::Runtime::Serialization::StreamingContextStates::All{static_cast<int32_t>(0xff)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
