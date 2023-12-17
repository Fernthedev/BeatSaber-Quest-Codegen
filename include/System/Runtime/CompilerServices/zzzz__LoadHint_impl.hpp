#pragma once
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
constexpr void System::Runtime::CompilerServices::LoadHint::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::CompilerServices::LoadHint::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::CompilerServices::LoadHint::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::LoadHint::LoadHint(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Always{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Sometimes{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
