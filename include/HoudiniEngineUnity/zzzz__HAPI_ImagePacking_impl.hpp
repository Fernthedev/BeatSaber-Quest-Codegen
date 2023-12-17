#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_ImagePacking::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_ImagePacking::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_ImagePacking::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking::HAPI_ImagePacking(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_UNKNOWN{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_SINGLE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DUAL{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGB{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_BGR{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_RGBA{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_ABGR{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_MAX{static_cast<int32_t>(0x6)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT3{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_ImagePacking  HoudiniEngineUnity::HAPI_ImagePacking::HAPI_IMAGE_PACKING_DEFAULT4{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
