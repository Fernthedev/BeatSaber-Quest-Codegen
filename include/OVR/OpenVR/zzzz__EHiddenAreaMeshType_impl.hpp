#pragma once
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
constexpr void OVR::OpenVR::EHiddenAreaMeshType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& OVR::OpenVR::EHiddenAreaMeshType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& OVR::OpenVR::EHiddenAreaMeshType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EHiddenAreaMeshType::EHiddenAreaMeshType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Standard{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Inverse{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_LineLoop{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Max{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
