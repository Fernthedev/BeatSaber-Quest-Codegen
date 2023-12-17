#pragma once
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
constexpr void System::__Enum__ParseFailureKind::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::__Enum__ParseFailureKind::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::__Enum__ParseFailureKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Enum__ParseFailureKind::__Enum__ParseFailureKind(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::__Enum__ParseFailureKind  System::__Enum__ParseFailureKind::None{static_cast<int32_t>(0x0)};
constexpr ::System::__Enum__ParseFailureKind  System::__Enum__ParseFailureKind::Argument{static_cast<int32_t>(0x1)};
constexpr ::System::__Enum__ParseFailureKind  System::__Enum__ParseFailureKind::ArgumentNull{static_cast<int32_t>(0x2)};
constexpr ::System::__Enum__ParseFailureKind  System::__Enum__ParseFailureKind::ArgumentWithParameter{static_cast<int32_t>(0x3)};
constexpr ::System::__Enum__ParseFailureKind  System::__Enum__ParseFailureKind::UnhandledException{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
