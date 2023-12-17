#pragma once
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightType_def.hpp"
constexpr void UnityEngine::Experimental::GlobalIllumination::LightType::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::Experimental::GlobalIllumination::LightType::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::Experimental::GlobalIllumination::LightType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType::LightType(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Directional{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Point{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Spot{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Rectangle{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::Disc{static_cast<uint8_t>(0x4u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::SpotPyramidShape{static_cast<uint8_t>(0x5u)};
constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType  UnityEngine::Experimental::GlobalIllumination::LightType::SpotBoxShape{static_cast<uint8_t>(0x6u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
