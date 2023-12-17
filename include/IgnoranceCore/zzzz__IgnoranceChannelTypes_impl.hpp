#pragma once
#include "IgnoranceCore/zzzz__IgnoranceChannelTypes_def.hpp"
constexpr void IgnoranceCore::IgnoranceChannelTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceChannelTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::IgnoranceChannelTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceChannelTypes::IgnoranceChannelTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::Reliable{static_cast<int32_t>(0x1)};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::ReliableUnsequenced{static_cast<int32_t>(0x3)};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::Unreliable{static_cast<int32_t>(0x2)};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::UnreliableFragmented{static_cast<int32_t>(0x8)};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::UnreliableSequenced{static_cast<int32_t>(0x0)};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  IgnoranceCore::IgnoranceChannelTypes::Unthrottled{static_cast<int32_t>(0x20)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
