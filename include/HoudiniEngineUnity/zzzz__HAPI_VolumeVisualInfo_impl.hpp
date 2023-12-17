#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_type(::HoudiniEngineUnity::HAPI_VolumeVisualType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_VolumeVisualType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::HoudiniEngineUnity::HAPI_VolumeVisualType>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_type()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_VolumeVisualType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualType const& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_VolumeVisualType, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_iso(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_iso()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_iso() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeVisualInfo::__set_density(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_density()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& HoudiniEngineUnity::HAPI_VolumeVisualInfo::__get_density() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: Some("{}") }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeVisualInfo::HAPI_VolumeVisualInfo(::HoudiniEngineUnity::HAPI_VolumeVisualType  type, float_t  iso, float_t  density) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->type = type;
this->iso = iso;
this->density = density;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
