#pragma once
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
constexpr void Mono::Math::Prime::ConfidenceFactor::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Math::Prime::ConfidenceFactor::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Math::Prime::ConfidenceFactor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Math::Prime::ConfidenceFactor::ConfidenceFactor(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraLow{static_cast<int32_t>(0x0)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Low{static_cast<int32_t>(0x1)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Medium{static_cast<int32_t>(0x2)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::High{static_cast<int32_t>(0x3)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraHigh{static_cast<int32_t>(0x4)};
constexpr ::Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Provable{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
