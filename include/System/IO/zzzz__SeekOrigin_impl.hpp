#pragma once
#include "System/IO/zzzz__SeekOrigin_def.hpp"
constexpr void System::IO::SeekOrigin::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::SeekOrigin::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::SeekOrigin::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::SeekOrigin::SeekOrigin(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::Begin{static_cast<int32_t>(0x0)};
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::Current{static_cast<int32_t>(0x1)};
constexpr ::System::IO::SeekOrigin  System::IO::SeekOrigin::End{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
