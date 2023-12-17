#pragma once
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
constexpr void GlobalNamespace::OVRTextureData::__set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& GlobalNamespace::OVRTextureData::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& GlobalNamespace::OVRTextureData::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRTextureData::__set_width(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRTextureData::__get_width()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRTextureData::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRTextureData::__set_height(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OVRTextureData::__get_height()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::OVRTextureData::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRTextureData::__set_format(::GlobalNamespace::OVRTextureFormat  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRTextureFormat, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OVRTextureFormat>(value));
}
constexpr ::GlobalNamespace::OVRTextureFormat& GlobalNamespace::OVRTextureData::__get_format()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureFormat, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::OVRTextureFormat const& GlobalNamespace::OVRTextureData::__get_format() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRTextureFormat, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRTextureData::__set_transcodedFormat(::UnityEngine::TextureFormat  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextureFormat, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextureFormat>(value));
}
constexpr ::UnityEngine::TextureFormat& GlobalNamespace::OVRTextureData::__get_transcodedFormat()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextureFormat, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::TextureFormat const& GlobalNamespace::OVRTextureData::__get_transcodedFormat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextureFormat, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRTextureData::__set_uri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::OVRTextureData::__get_uri()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::OVRTextureData::__get_uri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::OVRTextureData::OVRTextureData(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  width, int32_t  height, ::GlobalNamespace::OVRTextureFormat  format, ::UnityEngine::TextureFormat  transcodedFormat, ::StringW  uri) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->data = data;
this->width = width;
this->height = height;
this->format = format;
this->transcodedFormat = transcodedFormat;
this->uri = uri;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
