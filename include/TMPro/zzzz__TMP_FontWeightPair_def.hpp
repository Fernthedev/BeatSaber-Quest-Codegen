#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TMP_FontWeightPair)
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
struct TMP_FontWeightPair;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_FontWeightPair);
// Type: TMPro::TMP_FontWeightPair
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12360))
// CS Name: ::TMPro::TMP_FontWeightPair
struct CORDL_TYPE TMP_FontWeightPair : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field regularTypeface offset 0x0
 __declspec(property(get=__get_regularTypeface, put=__set_regularTypeface)) ::TMPro::TMP_FontAsset*  regularTypeface;

/// @brief Field italicTypeface offset 0x8
 __declspec(property(get=__get_italicTypeface, put=__set_italicTypeface)) ::TMPro::TMP_FontAsset*  italicTypeface;

constexpr void __set_regularTypeface(::TMPro::TMP_FontAsset*  value) ;

constexpr ::TMPro::TMP_FontAsset* __get_regularTypeface() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> __get_regularTypeface() const;

constexpr void __set_italicTypeface(::TMPro::TMP_FontAsset*  value) ;

constexpr ::TMPro::TMP_FontAsset* __get_italicTypeface() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> __get_italicTypeface() const;

// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: None }, CppParam { name: "italicTypeface", ty: "::TMPro::TMP_FontAsset*", modifiers: "", def_value: None }]
constexpr TMP_FontWeightPair(::TMPro::TMP_FontAsset*  regularTypeface, ::TMPro::TMP_FontAsset*  italicTypeface) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_FontWeightPair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_FontWeightPair()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_FontWeightPair, 0x10>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontWeightPair, "TMPro", "TMP_FontWeightPair");
