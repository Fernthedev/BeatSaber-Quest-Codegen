#pragma once
#include "OVR/OpenVR/zzzz__RenderModel_Vertex_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
constexpr void OVR::OpenVR::RenderModel_Vertex_t::__set_vPosition(::OVR::OpenVR::HmdVector3_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector3_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdVector3_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector3_t& OVR::OpenVR::RenderModel_Vertex_t::__get_vPosition()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdVector3_t const& OVR::OpenVR::RenderModel_Vertex_t::__get_vPosition() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_Vertex_t::__set_vNormal(::OVR::OpenVR::HmdVector3_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdVector3_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdVector3_t>(value));
}
constexpr ::OVR::OpenVR::HmdVector3_t& OVR::OpenVR::RenderModel_Vertex_t::__get_vNormal()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdVector3_t const& OVR::OpenVR::RenderModel_Vertex_t::__get_vNormal() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdVector3_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_Vertex_t::__set_rfTextureCoord0(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::RenderModel_Vertex_t::__get_rfTextureCoord0()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::RenderModel_Vertex_t::__get_rfTextureCoord0() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_Vertex_t::__set_rfTextureCoord1(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& OVR::OpenVR::RenderModel_Vertex_t::__get_rfTextureCoord1()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& OVR::OpenVR::RenderModel_Vertex_t::__get_rfTextureCoord1() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "vPosition", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfTextureCoord0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfTextureCoord1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_Vertex_t::RenderModel_Vertex_t(::OVR::OpenVR::HmdVector3_t  vPosition, ::OVR::OpenVR::HmdVector3_t  vNormal, float_t  rfTextureCoord0, float_t  rfTextureCoord1) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->vPosition = vPosition;
this->vNormal = vNormal;
this->rfTextureCoord0 = rfTextureCoord0;
this->rfTextureCoord1 = rfTextureCoord1;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
