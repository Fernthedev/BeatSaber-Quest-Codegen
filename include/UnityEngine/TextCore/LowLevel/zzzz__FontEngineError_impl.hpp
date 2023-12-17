#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
constexpr void UnityEngine::TextCore::LowLevel::FontEngineError::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::TextCore::LowLevel::FontEngineError::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::TextCore::LowLevel::FontEngineError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError::FontEngineError(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Path{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Format{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File_Structure{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_File{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Table{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Glyph_Index{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Character_Code{static_cast<int32_t>(0x11)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Pixel_Size{static_cast<int32_t>(0x17)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library{static_cast<int32_t>(0x21)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Face{static_cast<int32_t>(0x23)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_Library_or_Face{static_cast<int32_t>(0x29)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Atlas_Generation_Cancelled{static_cast<int32_t>(0x64)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::Invalid_SharedTextureData{static_cast<int32_t>(0x65)};
constexpr ::UnityEngine::TextCore::LowLevel::FontEngineError  UnityEngine::TextCore::LowLevel::FontEngineError::OpenTypeLayoutLookup_Mismatch{static_cast<int32_t>(0x74)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
