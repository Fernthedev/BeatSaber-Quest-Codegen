#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
constexpr void UnityEngine::TextCore::LowLevel::FontReference::__set_familyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::TextCore::LowLevel::FontReference::__get_familyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::TextCore::LowLevel::FontReference::__get_familyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::LowLevel::FontReference::__set_styleName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::TextCore::LowLevel::FontReference::__get_styleName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::TextCore::LowLevel::FontReference::__get_styleName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::LowLevel::FontReference::__set_faceIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::LowLevel::FontReference::__get_faceIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::LowLevel::FontReference::__get_faceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::LowLevel::FontReference::__set_filePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::TextCore::LowLevel::FontReference::__get_filePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::TextCore::LowLevel::FontReference::__get_filePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontReference::FontReference(::StringW  familyName, ::StringW  styleName, int32_t  faceIndex, ::StringW  filePath) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->familyName = familyName;
this->styleName = styleName;
this->faceIndex = faceIndex;
this->filePath = filePath;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
