#pragma once
#include "System/Reflection/zzzz__PInfo_def.hpp"
constexpr void System::Reflection::PInfo::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::PInfo::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::PInfo::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PInfo::PInfo(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::Attributes{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::GetMethod{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::SetMethod{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::ReflectedType{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::DeclaringType{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::PInfo  System::Reflection::PInfo::Name{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
