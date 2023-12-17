#pragma once
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
constexpr void System::Runtime::InteropServices::DllImportSearchPath::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::InteropServices::DllImportSearchPath::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::InteropServices::DllImportSearchPath::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::DllImportSearchPath::DllImportSearchPath(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UseDllDirectoryForDependencies{static_cast<int32_t>(0x100)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::ApplicationDirectory{static_cast<int32_t>(0x200)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UserDirectories{static_cast<int32_t>(0x400)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::System32{static_cast<int32_t>(0x800)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::SafeDirectories{static_cast<int32_t>(0x1000)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::AssemblyDirectory{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::LegacyBehavior{static_cast<int32_t>(0x0)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
