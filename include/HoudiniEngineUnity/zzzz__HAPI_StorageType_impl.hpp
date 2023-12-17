#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_StorageType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_StorageType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_StorageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StorageType::HAPI_StorageType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INVALID{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT64{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT64{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_STRING{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_UINT8{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT8{static_cast<int32_t>(0x6)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT16{static_cast<int32_t>(0x7)};
constexpr ::HoudiniEngineUnity::HAPI_StorageType  HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_MAX{static_cast<int32_t>(0x8)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
