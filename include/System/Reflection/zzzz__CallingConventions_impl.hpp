#pragma once
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
constexpr void System::Reflection::CallingConventions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::CallingConventions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::CallingConventions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::CallingConventions::CallingConventions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::Standard{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::VarArgs{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::Any{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::HasThis{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::ExplicitThis{static_cast<int32_t>(0x40)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
