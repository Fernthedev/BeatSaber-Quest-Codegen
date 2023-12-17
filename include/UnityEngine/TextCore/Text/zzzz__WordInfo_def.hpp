#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WordInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct WordInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::WordInfo);
// Type: UnityEngine.TextCore.Text::WordInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13712))
// CS Name: ::UnityEngine.TextCore.Text::WordInfo
struct CORDL_TYPE WordInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field firstCharacterIndex offset 0x0
 __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex)) int32_t  firstCharacterIndex;

/// @brief Field lastCharacterIndex offset 0x4
 __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex)) int32_t  lastCharacterIndex;

/// @brief Field characterCount offset 0x8
 __declspec(property(get=__get_characterCount, put=__set_characterCount)) int32_t  characterCount;

constexpr void __set_firstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstCharacterIndex() ;

constexpr int32_t const& __get_firstCharacterIndex() const;

constexpr void __set_lastCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastCharacterIndex() ;

constexpr int32_t const& __get_lastCharacterIndex() const;

constexpr void __set_characterCount(int32_t  value) ;

constexpr int32_t& __get_characterCount() ;

constexpr int32_t const& __get_characterCount() const;

// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WordInfo(int32_t  firstCharacterIndex, int32_t  lastCharacterIndex, int32_t  characterCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WordInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WordInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::WordInfo, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordInfo, "UnityEngine.TextCore.Text", "WordInfo");
