#pragma once
#include "System/zzzz__DTSubStringType_def.hpp"
constexpr void System::DTSubStringType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::DTSubStringType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::DTSubStringType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubStringType::DTSubStringType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::DTSubStringType  System::DTSubStringType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Invalid{static_cast<int32_t>(0x1)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Number{static_cast<int32_t>(0x2)};
constexpr ::System::DTSubStringType  System::DTSubStringType::End{static_cast<int32_t>(0x3)};
constexpr ::System::DTSubStringType  System::DTSubStringType::Other{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
