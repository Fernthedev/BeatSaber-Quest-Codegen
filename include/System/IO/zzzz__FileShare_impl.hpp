#pragma once
#include "System/IO/zzzz__FileShare_def.hpp"
constexpr void System::IO::FileShare::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileShare::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::FileShare::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileShare::FileShare(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::IO::FileShare  System::IO::FileShare::None{static_cast<int32_t>(0x0)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Read{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Write{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileShare  System::IO::FileShare::ReadWrite{static_cast<int32_t>(0x3)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Delete{static_cast<int32_t>(0x4)};
constexpr ::System::IO::FileShare  System::IO::FileShare::Inheritable{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
