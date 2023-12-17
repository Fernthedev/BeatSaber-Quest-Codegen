#pragma once
#include "System/IO/zzzz__MonoFileType_def.hpp"
constexpr void System::IO::MonoFileType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::MonoFileType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::MonoFileType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoFileType::MonoFileType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Disk{static_cast<int32_t>(0x1)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Char{static_cast<int32_t>(0x2)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Pipe{static_cast<int32_t>(0x3)};
constexpr ::System::IO::MonoFileType  System::IO::MonoFileType::Remote{static_cast<int32_t>(0x8000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
