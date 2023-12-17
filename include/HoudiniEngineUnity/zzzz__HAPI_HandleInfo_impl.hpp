#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
constexpr void HoudiniEngineUnity::HAPI_HandleInfo::__set_nameSH(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_HandleInfo::__get_nameSH()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_HandleInfo::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_HandleInfo::__set_typeNameSH(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_HandleInfo::__get_typeNameSH()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_HandleInfo::__get_typeNameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HAPI_HandleInfo::__set_bindingsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HAPI_HandleInfo::__get_bindingsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::HAPI_HandleInfo::__get_bindingsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "typeNameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindingsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_HandleInfo::HAPI_HandleInfo(int32_t  nameSH, int32_t  typeNameSH, int32_t  bindingsCount) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->nameSH = nameSH;
this->typeNameSH = typeNameSH;
this->bindingsCount = bindingsCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
