#pragma once
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
constexpr void UnityEngine::Android::AndroidAssetPackError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Android::AndroidAssetPackError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Android::AndroidAssetPackError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidAssetPackError::AndroidAssetPackError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NoError{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AppUnavailable{static_cast<int32_t>(0xffffffff)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::PackUnavailable{static_cast<int32_t>(0xfffffffe)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InvalidRequest{static_cast<int32_t>(0xfffffffd)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::DownloadNotFound{static_cast<int32_t>(0xfffffffc)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::ApiNotAvailable{static_cast<int32_t>(0xfffffffb)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NetworkError{static_cast<int32_t>(0xfffffffa)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AccessDenied{static_cast<int32_t>(0xfffffff9)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InsufficientStorage{static_cast<int32_t>(0xfffffff6)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::PlayStoreNotFound{static_cast<int32_t>(0xfffffff5)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::NetworkUnrestricted{static_cast<int32_t>(0xfffffff4)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::AppNotOwned{static_cast<int32_t>(0xfffffff3)};
constexpr ::UnityEngine::Android::AndroidAssetPackError  UnityEngine::Android::AndroidAssetPackError::InternalError{static_cast<int32_t>(0xffffff9c)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
