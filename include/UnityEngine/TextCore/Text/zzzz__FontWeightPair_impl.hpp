#pragma once
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
constexpr void UnityEngine::TextCore::Text::FontWeightPair::__set_regularTypeface(::UnityEngine::TextCore::Text::FontAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::Text::FontAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontWeightPair::__get_regularTypeface()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> UnityEngine::TextCore::Text::FontWeightPair::__get_regularTypeface() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::TextCore::Text::FontWeightPair::__set_italicTypeface(::UnityEngine::TextCore::Text::FontAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::TextCore::Text::FontAsset*>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::FontWeightPair::__get_italicTypeface()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> UnityEngine::TextCore::Text::FontWeightPair::__get_italicTypeface() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "italicTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::TextCore::Text::FontWeightPair::FontWeightPair(::UnityEngine::TextCore::Text::FontAsset*  regularTypeface, ::UnityEngine::TextCore::Text::FontAsset*  italicTypeface) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->regularTypeface = regularTypeface;
this->italicTypeface = italicTypeface;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
