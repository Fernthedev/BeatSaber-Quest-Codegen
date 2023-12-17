#pragma once
#include "TMPro/zzzz__TMP_SpriteInfo_def.hpp"
constexpr void TMPro::TMP_SpriteInfo::__set_spriteIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_SpriteInfo::__get_spriteIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_SpriteInfo::__get_spriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_SpriteInfo::__set_characterIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_SpriteInfo::__get_characterIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_SpriteInfo::__get_characterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_SpriteInfo::__set_vertexIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_SpriteInfo::__get_vertexIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_SpriteInfo::__get_vertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_SpriteInfo::TMP_SpriteInfo(int32_t  spriteIndex, int32_t  characterIndex, int32_t  vertexIndex) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->spriteIndex = spriteIndex;
this->characterIndex = characterIndex;
this->vertexIndex = vertexIndex;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
