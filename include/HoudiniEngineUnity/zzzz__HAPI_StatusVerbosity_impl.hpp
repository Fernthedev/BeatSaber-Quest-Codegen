#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StatusVerbosity_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_StatusVerbosity::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_StatusVerbosity::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_StatusVerbosity::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_StatusVerbosity(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_0{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_1{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_2{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ALL{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_ERRORS{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_WARNINGS{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_StatusVerbosity  HoudiniEngineUnity::HAPI_StatusVerbosity::HAPI_STATUSVERBOSITY_MESSAGES{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
