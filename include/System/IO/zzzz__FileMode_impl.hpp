#pragma once
#include "System/IO/zzzz__FileMode_def.hpp"
constexpr void System::IO::FileMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::FileMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileMode::FileMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::IO::FileMode  System::IO::FileMode::CreateNew{static_cast<int32_t>(0x1)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Create{static_cast<int32_t>(0x2)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Open{static_cast<int32_t>(0x3)};
constexpr ::System::IO::FileMode  System::IO::FileMode::OpenOrCreate{static_cast<int32_t>(0x4)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Truncate{static_cast<int32_t>(0x5)};
constexpr ::System::IO::FileMode  System::IO::FileMode::Append{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
