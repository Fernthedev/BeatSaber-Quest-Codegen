#pragma once
#include "UnityEngine/zzzz__AudioType_def.hpp"
constexpr void UnityEngine::AudioType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioType::AudioType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::ACC{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::AIFF{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::IT{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::MOD{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::MPEG{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::OGGVORBIS{static_cast<int32_t>(0xe)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::S3M{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::WAV{static_cast<int32_t>(0x14)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::XM{static_cast<int32_t>(0x15)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::XMA{static_cast<int32_t>(0x16)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::VAG{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::AudioType  UnityEngine::AudioType::AUDIOQUEUE{static_cast<int32_t>(0x18)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
