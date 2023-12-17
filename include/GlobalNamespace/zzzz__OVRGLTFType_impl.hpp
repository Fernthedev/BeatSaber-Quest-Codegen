#pragma once
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
constexpr void GlobalNamespace::OVRGLTFType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRGLTFType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRGLTFType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFType::OVRGLTFType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::SCALAR{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC2{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC3{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::VEC4{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRGLTFType  GlobalNamespace::OVRGLTFType::MAT4{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
