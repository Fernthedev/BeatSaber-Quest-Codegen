#pragma once
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
constexpr void System::Reflection::MemberTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::MemberTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::MemberTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MemberTypes::MemberTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Constructor{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Event{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Field{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Method{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Property{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::TypeInfo{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::Custom{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::NestedType{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::MemberTypes  System::Reflection::MemberTypes::All{static_cast<int32_t>(0xbf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
