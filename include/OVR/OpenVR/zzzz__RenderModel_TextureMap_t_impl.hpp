#pragma once
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_unWidth(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& OVR::OpenVR::RenderModel_TextureMap_t::__get_unWidth()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& OVR::OpenVR::RenderModel_TextureMap_t::__get_unWidth() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_unHeight(uint16_t  value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t& OVR::OpenVR::RenderModel_TextureMap_t::__get_unHeight()  {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint16_t const& OVR::OpenVR::RenderModel_TextureMap_t::__get_unHeight() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_rubTextureMapData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& OVR::OpenVR::RenderModel_TextureMap_t::__get_rubTextureMapData()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& OVR::OpenVR::RenderModel_TextureMap_t::__get_rubTextureMapData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rubTextureMapData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_TextureMap_t::RenderModel_TextureMap_t(uint16_t  unWidth, uint16_t  unHeight, ::cordl_internals::intptr_t  rubTextureMapData) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->unWidth = unWidth;
this->unHeight = unHeight;
this->rubTextureMapData = rubTextureMapData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
