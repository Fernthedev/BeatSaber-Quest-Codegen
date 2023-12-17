#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_EnvIntType_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_EnvIntType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_EnvIntType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_EnvIntType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType::HAPI_EnvIntType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_INVALID{static_cast<int32_t>(0xffffffff)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MAJOR{static_cast<int32_t>(0x64)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_MINOR{static_cast<int32_t>(0x6e)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_BUILD{static_cast<int32_t>(0x78)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_PATCH{static_cast<int32_t>(0x82)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR{static_cast<int32_t>(0xc8)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR{static_cast<int32_t>(0xd2)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API{static_cast<int32_t>(0xdc)};
constexpr ::HoudiniEngineUnity::HAPI_EnvIntType  HoudiniEngineUnity::HAPI_EnvIntType::HAPI_ENVINT_MAX{static_cast<int32_t>(0xdd)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
