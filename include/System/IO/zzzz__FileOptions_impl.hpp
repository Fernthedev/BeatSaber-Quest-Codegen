#pragma once
#include "System/IO/zzzz__FileOptions_def.hpp"
constexpr void System::IO::FileOptions::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::FileOptions::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::FileOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileOptions::FileOptions(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::IO::FileOptions  System::IO::FileOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::WriteThrough{static_cast<int32_t>(0x80000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::Asynchronous{static_cast<int32_t>(0x40000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::RandomAccess{static_cast<int32_t>(0x10000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::DeleteOnClose{static_cast<int32_t>(0x4000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::SequentialScan{static_cast<int32_t>(0x8000000)};
constexpr ::System::IO::FileOptions  System::IO::FileOptions::Encrypted{static_cast<int32_t>(0x4000)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
