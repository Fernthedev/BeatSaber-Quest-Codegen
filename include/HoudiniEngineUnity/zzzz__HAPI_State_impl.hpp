#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_State_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_State::HAPI_State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_FATAL_ERRORS{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_READY_WITH_COOK_ERRORS{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_COOK{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_COOKING{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_STARTING_LOAD{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_LOADING{static_cast<int32_t>(0x6)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX{static_cast<int32_t>(0x7)};
constexpr ::HoudiniEngineUnity::HAPI_State  HoudiniEngineUnity::HAPI_State::HAPI_STATE_MAX_READY_STATE{static_cast<int32_t>(0x2)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
