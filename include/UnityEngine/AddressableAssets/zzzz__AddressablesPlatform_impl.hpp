#pragma once
#include "UnityEngine/AddressableAssets/zzzz__AddressablesPlatform_def.hpp"
constexpr void UnityEngine::AddressableAssets::AddressablesPlatform::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::AddressableAssets::AddressablesPlatform::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::AddressableAssets::AddressablesPlatform::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform::AddressablesPlatform(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Unknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Windows{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::OSX{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Linux{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::PS4{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Switch{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::XboxOne{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::WebGL{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::iOS{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Android{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::WindowsUniversal{static_cast<int32_t>(0xa)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
