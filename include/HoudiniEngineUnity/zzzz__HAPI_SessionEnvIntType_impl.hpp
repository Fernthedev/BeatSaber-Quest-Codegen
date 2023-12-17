#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionEnvIntType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_SessionEnvIntType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_SessionEnvIntType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_SessionEnvIntType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SessionEnvIntType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType  HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_INVALID{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType  HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_LICENSE{static_cast<int32_t>(0x64)};
constexpr ::HoudiniEngineUnity::HAPI_SessionEnvIntType  HoudiniEngineUnity::HAPI_SessionEnvIntType::HAPI_SESSIONENVINT_MAX{static_cast<int32_t>(0x65)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
