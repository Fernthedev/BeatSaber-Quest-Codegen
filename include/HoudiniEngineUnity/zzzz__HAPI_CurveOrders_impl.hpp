#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CurveOrders_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_CurveOrders::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_CurveOrders::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_CurveOrders::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CurveOrders(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_VARYING{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_INVALID{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_LINEAR{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_QUADRATIC{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_CurveOrders  HoudiniEngineUnity::HAPI_CurveOrders::HAPI_CURVE_ORDER_CUBIC{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
