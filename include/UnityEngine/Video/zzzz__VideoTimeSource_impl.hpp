#pragma once
#include "UnityEngine/Video/zzzz__VideoTimeSource_def.hpp"
constexpr void UnityEngine::Video::VideoTimeSource::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Video::VideoTimeSource::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Video::VideoTimeSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoTimeSource::VideoTimeSource(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Video::VideoTimeSource  UnityEngine::Video::VideoTimeSource::AudioDSPTimeSource{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Video::VideoTimeSource  UnityEngine::Video::VideoTimeSource::GameTimeSource{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
