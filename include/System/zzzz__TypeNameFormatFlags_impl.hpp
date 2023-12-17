#pragma once
#include "System/zzzz__TypeNameFormatFlags_def.hpp"
constexpr void System::TypeNameFormatFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::TypeNameFormatFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::TypeNameFormatFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeNameFormatFlags::TypeNameFormatFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatBasic{static_cast<int32_t>(0x0)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatNamespace{static_cast<int32_t>(0x1)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatFullInst{static_cast<int32_t>(0x2)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatAssembly{static_cast<int32_t>(0x4)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatSignature{static_cast<int32_t>(0x8)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatNoVersion{static_cast<int32_t>(0x10)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatAngleBrackets{static_cast<int32_t>(0x40)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatStubInfo{static_cast<int32_t>(0x80)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatGenericParam{static_cast<int32_t>(0x100)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatSerialization{static_cast<int32_t>(0x103)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
