#pragma once
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
constexpr void UnityEngine::AudioSpeakerMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioSpeakerMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioSpeakerMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioSpeakerMode::AudioSpeakerMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Raw{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mono{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Stereo{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Quad{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Surround{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mode5point1{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Mode7point1{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::AudioSpeakerMode  UnityEngine::AudioSpeakerMode::Prologic{static_cast<int32_t>(0x7)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
