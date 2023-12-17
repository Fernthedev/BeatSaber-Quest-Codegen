#pragma once
#include "TMPro/zzzz__TMP_FontWeightPair_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
constexpr void TMPro::TMP_FontWeightPair::__set_regularTypeface(::TMPro::TMP_FontAsset*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::TMPro::TMP_FontAsset*>(value));
}
constexpr ::TMPro::TMP_FontAsset* TMPro::TMP_FontWeightPair::__get_regularTypeface()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> TMPro::TMP_FontWeightPair::__get_regularTypeface() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_FontWeightPair::__set_italicTypeface(::TMPro::TMP_FontAsset*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::TMPro::TMP_FontAsset*>(value));
}
constexpr ::TMPro::TMP_FontAsset* TMPro::TMP_FontWeightPair::__get_italicTypeface()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> TMPro::TMP_FontWeightPair::__get_italicTypeface() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "italicTypeface", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: Some("csnull") }]
constexpr ::TMPro::TMP_FontWeightPair::TMP_FontWeightPair(::TMPro::TMP_FontAsset*  regularTypeface, ::TMPro::TMP_FontAsset*  italicTypeface) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->regularTypeface = regularTypeface;
this->italicTypeface = italicTypeface;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
