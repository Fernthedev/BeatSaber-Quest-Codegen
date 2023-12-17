#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_id()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_id() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_keyword(::UnityEngine::UIElements::StyleKeyword  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleKeyword>(value));
}
constexpr ::UnityEngine::UIElements::StyleKeyword& UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_keyword()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UIElements::StyleKeyword const& UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_keyword() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleKeyword, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::StyleValueManaged::__set_value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UIElements::StyleSheets::StyleValueManaged::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::StyleSheets::StyleValueManaged::StyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, ::System::Object*  value) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->id = id;
this->keyword = keyword;
this->value = value;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
