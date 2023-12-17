#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_PipelineType_def.hpp"
constexpr void HoudiniEngineUnity::HEU_PipelineType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PipelineType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PipelineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_PipelineType::HEU_PipelineType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::BiRP{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::URP{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::HEU_PipelineType  HoudiniEngineUnity::HEU_PipelineType::HDRP{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
