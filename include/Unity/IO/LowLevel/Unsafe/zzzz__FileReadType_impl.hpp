#pragma once
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
constexpr void Unity::IO::LowLevel::Unsafe::FileReadType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::IO::LowLevel::Unsafe::FileReadType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::IO::LowLevel::Unsafe::FileReadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType::FileReadType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Sync{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Async{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
