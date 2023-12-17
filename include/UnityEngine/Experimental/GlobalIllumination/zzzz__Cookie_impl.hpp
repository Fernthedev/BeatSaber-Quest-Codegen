#pragma once
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Cookie_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
constexpr void UnityEngine::Experimental::GlobalIllumination::Cookie::__set_instanceID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_instanceID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_instanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::Cookie::__set_scale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_scale()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Experimental::GlobalIllumination::Cookie::__set_sizes(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_sizes()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Experimental::GlobalIllumination::Cookie::__get_sizes() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie(int32_t  instanceID, float_t  scale, ::UnityEngine::Vector2  sizes) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->instanceID = instanceID;
this->scale = scale;
this->sizes = sizes;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
