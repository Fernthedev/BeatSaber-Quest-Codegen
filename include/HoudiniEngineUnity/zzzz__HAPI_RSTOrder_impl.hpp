#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_RSTOrder::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_RSTOrder::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_RSTOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTOrder(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TRS{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TSR{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RTS{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RST{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_STR{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_SRT{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder  HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTORDER_DEFAULT{static_cast<int32_t>(0x5)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
