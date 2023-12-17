#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
constexpr void HoudiniEngineUnity::HEU_GenerateOptions::__set__generateUVs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateUVs()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateUVs() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateOptions::__set__generateTangents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateTangents()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateTangents() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateOptions::__set__generateNormals(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateNormals()  {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateOptions::__get__generateNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateOptions::__set__useLODGroups(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateOptions::__get__useLODGroups()  {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateOptions::__get__useLODGroups() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void HoudiniEngineUnity::HEU_GenerateOptions::__set__splitPoints(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateOptions::__get__splitPoints()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateOptions::__get__splitPoints() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_generateNormals", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_splitPoints", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions::HEU_GenerateOptions(bool  _generateUVs, bool  _generateTangents, bool  _generateNormals, bool  _useLODGroups, bool  _splitPoints) noexcept : ::bs_hook::ValueTypeWrapper<0x5>() {this->_generateUVs = _generateUVs;
this->_generateTangents = _generateTangents;
this->_generateNormals = _generateNormals;
this->_useLODGroups = _useLODGroups;
this->_splitPoints = _splitPoints;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
