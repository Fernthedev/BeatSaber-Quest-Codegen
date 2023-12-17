#pragma once
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
constexpr void TMPro::Compute_DistanceTransform_EventTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::Compute_DistanceTransform_EventTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::Compute_DistanceTransform_EventTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::Compute_DistanceTransform_EventTypes::Compute_DistanceTransform_EventTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Processing{static_cast<int32_t>(0x0)};
constexpr ::TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Completed{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
