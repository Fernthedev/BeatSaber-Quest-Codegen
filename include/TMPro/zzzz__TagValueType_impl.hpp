#pragma once
#include "TMPro/zzzz__TagValueType_def.hpp"
constexpr void TMPro::TagValueType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TagValueType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TagValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TagValueType::TagValueType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::TagValueType  TMPro::TagValueType::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::NumericalValue{static_cast<int32_t>(0x1)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::StringValue{static_cast<int32_t>(0x2)};
constexpr ::TMPro::TagValueType  TMPro::TagValueType::ColorValue{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
