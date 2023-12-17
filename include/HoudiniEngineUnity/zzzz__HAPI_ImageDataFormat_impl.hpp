#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_ImageDataFormat::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_ImageDataFormat::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_ImageDataFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_ImageDataFormat(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_UNKNOWN{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT8{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT16{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_INT32{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT16{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_FLOAT32{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_MAX{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat  HoudiniEngineUnity::HAPI_ImageDataFormat::HAPI_IMAGE_DATA_DEFAULT{static_cast<int32_t>(0x0)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
