#pragma once
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
constexpr void Internal::Runtime::Augments::AsyncStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Internal::Runtime::Augments::AsyncStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Internal::Runtime::Augments::AsyncStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Internal::Runtime::Augments::AsyncStatus::AsyncStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Started{static_cast<int32_t>(0x0)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Completed{static_cast<int32_t>(0x1)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Canceled{static_cast<int32_t>(0x2)};
constexpr ::Internal::Runtime::Augments::AsyncStatus  Internal::Runtime::Augments::AsyncStatus::Error{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
