#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_parentParmId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_parentParmId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_parentParmId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_labelSH(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_labelSH()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_labelSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_ParmChoiceInfo::__set_valueSH(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_valueSH()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_ParmChoiceInfo::__get_valueSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_ParmChoiceInfo::HAPI_ParmChoiceInfo(int32_t  parentParmId, int32_t  labelSH, int32_t  valueSH) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->parentParmId = parentParmId;
this->labelSH = labelSH;
this->valueSH = valueSH;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
