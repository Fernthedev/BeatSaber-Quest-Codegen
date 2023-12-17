#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_PartType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_PartType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_PartType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PartType::HAPI_PartType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INVALID{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MESH{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_CURVE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_VOLUME{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_INSTANCER{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_BOX{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_SPHERE{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_PartType  HoudiniEngineUnity::HAPI_PartType::HAPI_PARTTYPE_MAX{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
