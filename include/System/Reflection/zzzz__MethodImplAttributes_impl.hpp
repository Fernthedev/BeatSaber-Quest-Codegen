#pragma once
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
constexpr void System::Reflection::MethodImplAttributes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::MethodImplAttributes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::MethodImplAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MethodImplAttributes::MethodImplAttributes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::CodeTypeMask{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::IL{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Native{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::OPTIL{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Runtime{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::ManagedMask{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Unmanaged{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Managed{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::ForwardRef{static_cast<int32_t>(0x10)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::PreserveSig{static_cast<int32_t>(0x80)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::InternalCall{static_cast<int32_t>(0x1000)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::Synchronized{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::NoInlining{static_cast<int32_t>(0x8)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::AggressiveInlining{static_cast<int32_t>(0x100)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::NoOptimization{static_cast<int32_t>(0x40)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::MaxMethodImplVal{static_cast<int32_t>(0xffff)};
constexpr ::System::Reflection::MethodImplAttributes  System::Reflection::MethodImplAttributes::SecurityMitigations{static_cast<int32_t>(0x400)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
