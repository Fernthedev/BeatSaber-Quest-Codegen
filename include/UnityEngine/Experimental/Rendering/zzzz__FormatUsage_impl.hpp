#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__FormatUsage_def.hpp"
constexpr void UnityEngine::Experimental::Rendering::FormatUsage::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::FormatUsage::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::FormatUsage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage::FormatUsage(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::Sample{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::Linear{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::Sparse{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::Render{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::Blend{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::GetPixels{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::SetPixels{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::SetPixels32{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::ReadPixels{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::LoadStore{static_cast<int32_t>(0xa)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::MSAA2x{static_cast<int32_t>(0xb)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::MSAA4x{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::MSAA8x{static_cast<int32_t>(0xd)};
constexpr ::UnityEngine::Experimental::Rendering::FormatUsage  UnityEngine::Experimental::Rendering::FormatUsage::StencilSampling{static_cast<int32_t>(0x10)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
