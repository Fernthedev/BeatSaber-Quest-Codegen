#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeTileInfo_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_VolumeTileInfo::__set_minX(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minX()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeTileInfo::__set_minY(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minY()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minY() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeTileInfo::__set_minZ(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minZ()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_minZ() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_VolumeTileInfo::__set_isValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_isValid()  {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HAPI_VolumeTileInfo::__get_isValid() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeTileInfo::HAPI_VolumeTileInfo(int32_t  minX, int32_t  minY, int32_t  minZ, bool  isValid) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->minX = minX;
this->minY = minY;
this->minZ = minZ;
this->isValid = isValid;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
