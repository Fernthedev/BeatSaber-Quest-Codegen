#pragma once
#include "TMPro/zzzz__MaskingTypes_def.hpp"
constexpr void TMPro::MaskingTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::MaskingTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::MaskingTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::MaskingTypes::MaskingTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskOff{static_cast<int32_t>(0x0)};
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskHard{static_cast<int32_t>(0x1)};
constexpr ::TMPro::MaskingTypes  TMPro::MaskingTypes::MaskSoft{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
