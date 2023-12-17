#pragma once
#include "System/Reflection/zzzz__ProcessorArchitecture_def.hpp"
constexpr void System::Reflection::ProcessorArchitecture::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::ProcessorArchitecture::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Reflection::ProcessorArchitecture::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ProcessorArchitecture::ProcessorArchitecture(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::None{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::MSIL{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::X86{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::IA64{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Amd64{static_cast<int32_t>(0x4)};
constexpr ::System::Reflection::ProcessorArchitecture  System::Reflection::ProcessorArchitecture::Arm{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
