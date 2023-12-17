#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::InternalMemberValueE(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::InlineValue{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::Nested{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::Reference{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE::Null{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
