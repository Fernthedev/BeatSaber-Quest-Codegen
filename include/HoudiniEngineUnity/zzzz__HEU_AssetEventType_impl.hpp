#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
constexpr void HoudiniEngineUnity::HEU_AssetEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_AssetEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_AssetEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_AssetEventType::HEU_AssetEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::RELOAD{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::COOK{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::BAKE_NEW{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::HEU_AssetEventType  HoudiniEngineUnity::HEU_AssetEventType::BAKE_UPDATE{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
