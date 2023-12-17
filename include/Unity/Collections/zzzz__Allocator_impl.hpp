#pragma once
#include "Unity/Collections/zzzz__Allocator_def.hpp"
constexpr void Unity::Collections::Allocator::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::Collections::Allocator::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::Collections::Allocator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::Allocator::Allocator(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::None{static_cast<int32_t>(0x1)};
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::Temp{static_cast<int32_t>(0x2)};
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::TempJob{static_cast<int32_t>(0x3)};
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::Persistent{static_cast<int32_t>(0x4)};
constexpr ::Unity::Collections::Allocator  Unity::Collections::Allocator::AudioKernel{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
