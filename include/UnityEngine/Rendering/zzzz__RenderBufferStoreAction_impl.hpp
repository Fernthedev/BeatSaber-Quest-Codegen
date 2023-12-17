#pragma once
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
constexpr void UnityEngine::Rendering::RenderBufferStoreAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Rendering::RenderBufferStoreAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Rendering::RenderBufferStoreAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction::RenderBufferStoreAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::Store{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::Resolve{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::StoreAndResolve{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::DontCare{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
