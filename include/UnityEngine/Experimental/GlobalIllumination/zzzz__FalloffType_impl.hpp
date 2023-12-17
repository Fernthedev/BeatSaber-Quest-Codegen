#pragma once
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
constexpr void UnityEngine::Experimental::GlobalIllumination::FalloffType::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::Experimental::GlobalIllumination::FalloffType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::Experimental::GlobalIllumination::FalloffType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType::FalloffType(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquared{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::InverseSquaredNoRangeAttenuation{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Linear{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Legacy{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType  UnityEngine::Experimental::GlobalIllumination::FalloffType::Undefined{static_cast<uint8_t>(0x4u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
