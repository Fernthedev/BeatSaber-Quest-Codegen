#pragma once
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_mTrackingToComponentRenderModel(::OVR::OpenVR::HmdMatrix34_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix34_t& OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentRenderModel()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdMatrix34_t const& OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentRenderModel() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_mTrackingToComponentLocal(::OVR::OpenVR::HmdMatrix34_t  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::HmdMatrix34_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix34_t& OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentLocal()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::OVR::OpenVR::HmdMatrix34_t const& OVR::OpenVR::RenderModel_ComponentState_t::__get_mTrackingToComponentLocal() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix34_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_ComponentState_t::__set_uProperties(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& OVR::OpenVR::RenderModel_ComponentState_t::__get_uProperties()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& OVR::OpenVR::RenderModel_ComponentState_t::__get_uProperties() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mTrackingToComponentLocal", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_ComponentState_t::RenderModel_ComponentState_t(::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentRenderModel, ::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentLocal, uint32_t  uProperties) noexcept : ::bs_hook::ValueTypeWrapper<0x64>() {this->mTrackingToComponentRenderModel = mTrackingToComponentRenderModel;
this->mTrackingToComponentLocal = mTrackingToComponentLocal;
this->uProperties = uProperties;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
