#pragma once
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
constexpr void HoudiniEngineUnity::HFLayerType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HFLayerType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HFLayerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HFLayerType::HFLayerType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::HEIGHT{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::MASK{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HFLayerType  HoudiniEngineUnity::HFLayerType::DETAIL{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
