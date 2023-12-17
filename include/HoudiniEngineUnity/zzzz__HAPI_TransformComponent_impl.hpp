#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_TransformComponent_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_TransformComponent::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_TransformComponent::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_TransformComponent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TransformComponent(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TX{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TY{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_TZ{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RX{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RY{static_cast<int32_t>(0x4)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_RZ{static_cast<int32_t>(0x5)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QX{static_cast<int32_t>(0x6)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QY{static_cast<int32_t>(0x7)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QZ{static_cast<int32_t>(0x8)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_QW{static_cast<int32_t>(0x9)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SX{static_cast<int32_t>(0xa)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SY{static_cast<int32_t>(0xb)};
constexpr ::HoudiniEngineUnity::HAPI_TransformComponent  HoudiniEngineUnity::HAPI_TransformComponent::HAPI_TRANSFORM_SZ{static_cast<int32_t>(0xc)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
