#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphPairKey)
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphPairKey;
}
// Write type traits
MARK_VAL_T(::TMPro::GlyphPairKey);
// Type: TMPro::GlyphPairKey
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12375))
// CS Name: ::TMPro::GlyphPairKey
struct CORDL_TYPE GlyphPairKey : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field firstGlyphIndex offset 0x0
 __declspec(property(get=__get_firstGlyphIndex, put=__set_firstGlyphIndex)) uint32_t  firstGlyphIndex;

/// @brief Field secondGlyphIndex offset 0x4
 __declspec(property(get=__get_secondGlyphIndex, put=__set_secondGlyphIndex)) uint32_t  secondGlyphIndex;

/// @brief Field key offset 0x8
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

constexpr void __set_firstGlyphIndex(uint32_t  value) ;

constexpr uint32_t& __get_firstGlyphIndex() ;

constexpr uint32_t const& __get_firstGlyphIndex() const;

constexpr void __set_secondGlyphIndex(uint32_t  value) ;

constexpr uint32_t& __get_secondGlyphIndex() ;

constexpr uint32_t const& __get_secondGlyphIndex() const;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

/// @brief Method .ctor addr 0x2c122a0 size 0x10 virtual false final false
inline void _ctor(uint32_t  firstGlyphIndex, uint32_t  secondGlyphIndex) ;

/// @brief Method .ctor addr 0x2c09c24 size 0x28 virtual false final false
inline void _ctor(::TMPro::TMP_GlyphPairAdjustmentRecord*  record) ;

// Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlyphPairKey(uint32_t  firstGlyphIndex, uint32_t  secondGlyphIndex, uint32_t  key) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphPairKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphPairKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::GlyphPairKey, 0xc>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
