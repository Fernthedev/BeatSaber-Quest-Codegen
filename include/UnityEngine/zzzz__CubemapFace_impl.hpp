#pragma once
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
constexpr void UnityEngine::CubemapFace::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::CubemapFace::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::CubemapFace::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CubemapFace::CubemapFace(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveX{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeX{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveY{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeY{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::PositiveZ{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::CubemapFace  UnityEngine::CubemapFace::NegativeZ{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
