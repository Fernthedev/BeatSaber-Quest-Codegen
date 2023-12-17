#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemState_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_PDG_WorkitemState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_PDG_WorkitemState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_PDG_WorkitemState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WorkitemState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNDEFINED{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_UNCOOKED{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_WAITING{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_SCHEDULED{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKING{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_SUCCESS{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CACHE{static_cast<int32_t>(0x6)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_FAIL{static_cast<int32_t>(0x7)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_COOKED_CANCEL{static_cast<int32_t>(0x8)};
constexpr ::HoudiniEngineUnity::HAPI_PDG_WorkitemState  HoudiniEngineUnity::HAPI_PDG_WorkitemState::HAPI_PDG_WORKITEM_DIRTY{static_cast<int32_t>(0x9)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
