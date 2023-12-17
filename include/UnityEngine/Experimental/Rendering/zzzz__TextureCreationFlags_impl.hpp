#pragma once
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
constexpr void UnityEngine::Experimental::Rendering::TextureCreationFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::TextureCreationFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::TextureCreationFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags::TextureCreationFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::MipChain{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Experimental::Rendering::TextureCreationFlags  UnityEngine::Experimental::Rendering::TextureCreationFlags::Crunch{static_cast<int32_t>(0x40)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
