#pragma once
#include "UnityEngine/Video/zzzz__VideoAudioOutputMode_def.hpp"
constexpr void UnityEngine::Video::VideoAudioOutputMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Video::VideoAudioOutputMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Video::VideoAudioOutputMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoAudioOutputMode::VideoAudioOutputMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::AudioSource{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::Direct{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Video::VideoAudioOutputMode  UnityEngine::Video::VideoAudioOutputMode::APIOnly{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
