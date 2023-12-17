#pragma once
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
constexpr void System::Reflection::BindingFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::BindingFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::BindingFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::BindingFlags::BindingFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::DeclaredOnly{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::Instance{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::Static{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::Public{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::NonPublic{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::FlattenHierarchy{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::InvokeMethod{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::CreateInstance{static_cast<int32_t>(0x200)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::GetField{static_cast<int32_t>(0x400)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::SetField{static_cast<int32_t>(0x800)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::GetProperty{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::SetProperty{static_cast<int32_t>(0x2000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::PutDispProperty{static_cast<int32_t>(0x4000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::PutRefDispProperty{static_cast<int32_t>(0x8000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::ExactBinding{static_cast<int32_t>(0x10000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::SuppressChangeType{static_cast<int32_t>(0x20000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::OptionalParamBinding{static_cast<int32_t>(0x40000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::IgnoreReturn{static_cast<int32_t>(0x1000000)};
constexpr ::System::Reflection::BindingFlags  System::Reflection::BindingFlags::DoNotWrapExceptions{static_cast<int32_t>(0x2000000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
