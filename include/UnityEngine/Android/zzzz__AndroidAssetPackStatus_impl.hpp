#pragma once
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
constexpr void UnityEngine::Android::AndroidAssetPackStatus::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Android::AndroidAssetPackStatus::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Android::AndroidAssetPackStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidAssetPackStatus::AndroidAssetPackStatus(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Pending{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Downloading{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Transferring{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Completed{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Failed{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::Canceled{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::WaitingForWifi{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Android::AndroidAssetPackStatus  UnityEngine::Android::AndroidAssetPackStatus::NotInstalled{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
