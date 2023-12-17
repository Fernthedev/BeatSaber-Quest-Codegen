#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteInfo)
// Forward declare root types
namespace TMPro {
struct TMP_SpriteInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_SpriteInfo);
// Type: TMPro::TMP_SpriteInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12321))
// CS Name: ::TMPro::TMP_SpriteInfo
struct CORDL_TYPE TMP_SpriteInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field spriteIndex offset 0x0
 __declspec(property(get=__get_spriteIndex, put=__set_spriteIndex)) int32_t  spriteIndex;

/// @brief Field characterIndex offset 0x4
 __declspec(property(get=__get_characterIndex, put=__set_characterIndex)) int32_t  characterIndex;

/// @brief Field vertexIndex offset 0x8
 __declspec(property(get=__get_vertexIndex, put=__set_vertexIndex)) int32_t  vertexIndex;

constexpr void __set_spriteIndex(int32_t  value) ;

constexpr int32_t& __get_spriteIndex() ;

constexpr int32_t const& __get_spriteIndex() const;

constexpr void __set_characterIndex(int32_t  value) ;

constexpr int32_t& __get_characterIndex() ;

constexpr int32_t const& __get_characterIndex() const;

constexpr void __set_vertexIndex(int32_t  value) ;

constexpr int32_t& __get_vertexIndex() ;

constexpr int32_t const& __get_vertexIndex() const;

// Ctor Parameters [CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_SpriteInfo(int32_t  spriteIndex, int32_t  characterIndex, int32_t  vertexIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_SpriteInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_SpriteInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteInfo, 0xc>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteInfo, "TMPro", "TMP_SpriteInfo");
