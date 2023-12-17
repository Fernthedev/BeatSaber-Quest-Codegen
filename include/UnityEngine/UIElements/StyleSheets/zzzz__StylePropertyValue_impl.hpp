#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyValue::__set_sheet(::UnityEngine::UIElements::StyleSheet*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheet*>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_sheet()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StylePropertyValue::__set_handle(::UnityEngine::UIElements::StyleValueHandle  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleValueHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleValueHandle>(value));
}
constexpr ::UnityEngine::UIElements::StyleValueHandle& UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_handle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleValueHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::StyleValueHandle const& UnityEngine::UIElements::StyleSheets::StylePropertyValue::__get_handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleValueHandle, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "handle", ty: "::UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValue::StylePropertyValue(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleValueHandle  handle) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->sheet = sheet;
this->handle = handle;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
