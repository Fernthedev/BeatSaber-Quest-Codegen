#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FontWeightPair)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::FontWeightPair);
// Type: UnityEngine.TextCore.Text::FontWeightPair
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13678))
// CS Name: ::UnityEngine.TextCore.Text::FontWeightPair
struct CORDL_TYPE FontWeightPair : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field regularTypeface offset 0x0
 __declspec(property(get=__get_regularTypeface, put=__set_regularTypeface)) ::UnityEngine::TextCore::Text::FontAsset*  regularTypeface;

/// @brief Field italicTypeface offset 0x8
 __declspec(property(get=__get_italicTypeface, put=__set_italicTypeface)) ::UnityEngine::TextCore::Text::FontAsset*  italicTypeface;

constexpr void __set_regularTypeface(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_regularTypeface() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_regularTypeface() const;

constexpr void __set_italicTypeface(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_italicTypeface() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_italicTypeface() const;

// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }]
constexpr FontWeightPair(::UnityEngine::TextCore::Text::FontAsset*  regularTypeface, ::UnityEngine::TextCore::Text::FontAsset*  italicTypeface) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontWeightPair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontWeightPair()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontWeightPair, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontWeightPair, "UnityEngine.TextCore.Text", "FontWeightPair");
