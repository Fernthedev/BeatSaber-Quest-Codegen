#pragma once
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
constexpr void UnityEngine::AudioConfiguration::__set_speakerMode(::UnityEngine::AudioSpeakerMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSpeakerMode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::AudioSpeakerMode>(value));
}
constexpr ::UnityEngine::AudioSpeakerMode& UnityEngine::AudioConfiguration::__get_speakerMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSpeakerMode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::AudioSpeakerMode const& UnityEngine::AudioConfiguration::__get_speakerMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSpeakerMode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AudioConfiguration::__set_dspBufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioConfiguration::__get_dspBufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioConfiguration::__get_dspBufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AudioConfiguration::__set_sampleRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioConfiguration::__get_sampleRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioConfiguration::__get_sampleRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AudioConfiguration::__set_numRealVoices(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioConfiguration::__get_numRealVoices()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioConfiguration::__get_numRealVoices() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::AudioConfiguration::__set_numVirtualVoices(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AudioConfiguration::__get_numVirtualVoices()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AudioConfiguration::__get_numVirtualVoices() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "dspBufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numRealVoices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "numVirtualVoices", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioConfiguration::AudioConfiguration(::UnityEngine::AudioSpeakerMode  speakerMode, int32_t  dspBufferSize, int32_t  sampleRate, int32_t  numRealVoices, int32_t  numVirtualVoices) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->speakerMode = speakerMode;
this->dspBufferSize = dspBufferSize;
this->sampleRate = sampleRate;
this->numRealVoices = numRealVoices;
this->numVirtualVoices = numVirtualVoices;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
