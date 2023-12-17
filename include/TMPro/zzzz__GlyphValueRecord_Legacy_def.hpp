#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GlyphValueRecord_Legacy)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
// Write type traits
MARK_VAL_T(::TMPro::GlyphValueRecord_Legacy);
// Type: TMPro::GlyphValueRecord_Legacy
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12362))
// CS Name: ::TMPro::GlyphValueRecord_Legacy
struct CORDL_TYPE GlyphValueRecord_Legacy : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field xPlacement offset 0x0
 __declspec(property(get=__get_xPlacement, put=__set_xPlacement)) float_t  xPlacement;

/// @brief Field yPlacement offset 0x4
 __declspec(property(get=__get_yPlacement, put=__set_yPlacement)) float_t  yPlacement;

/// @brief Field xAdvance offset 0x8
 __declspec(property(get=__get_xAdvance, put=__set_xAdvance)) float_t  xAdvance;

/// @brief Field yAdvance offset 0xc
 __declspec(property(get=__get_yAdvance, put=__set_yAdvance)) float_t  yAdvance;

constexpr void __set_xPlacement(float_t  value) ;

constexpr float_t& __get_xPlacement() ;

constexpr float_t const& __get_xPlacement() const;

constexpr void __set_yPlacement(float_t  value) ;

constexpr float_t& __get_yPlacement() ;

constexpr float_t const& __get_yPlacement() const;

constexpr void __set_xAdvance(float_t  value) ;

constexpr float_t& __get_xAdvance() ;

constexpr float_t const& __get_xAdvance() const;

constexpr void __set_yAdvance(float_t  value) ;

constexpr float_t& __get_yAdvance() ;

constexpr float_t const& __get_yAdvance() const;

/// @brief Method .ctor addr 0x2c102f8 size 0x60 virtual false final false
inline void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord  valueRecord) ;

/// @brief Method op_Addition addr 0x2c10358 size 0x14 virtual false final false
static inline ::TMPro::GlyphValueRecord_Legacy op_Addition(::TMPro::GlyphValueRecord_Legacy  a, ::TMPro::GlyphValueRecord_Legacy  b) ;

// Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphValueRecord_Legacy(float_t  xPlacement, float_t  yPlacement, float_t  xAdvance, float_t  yAdvance) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphValueRecord_Legacy(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphValueRecord_Legacy()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::GlyphValueRecord_Legacy, 0x10>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
