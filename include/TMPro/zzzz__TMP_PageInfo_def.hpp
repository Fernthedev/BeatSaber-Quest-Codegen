#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_PageInfo)
// Forward declare root types
namespace TMPro {
struct TMP_PageInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_PageInfo);
// Type: TMPro::TMP_PageInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12318))
// CS Name: ::TMPro::TMP_PageInfo
struct CORDL_TYPE TMP_PageInfo : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field firstCharacterIndex offset 0x0
 __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex)) int32_t  firstCharacterIndex;

/// @brief Field lastCharacterIndex offset 0x4
 __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex)) int32_t  lastCharacterIndex;

/// @brief Field ascender offset 0x8
 __declspec(property(get=__get_ascender, put=__set_ascender)) float_t  ascender;

/// @brief Field baseLine offset 0xc
 __declspec(property(get=__get_baseLine, put=__set_baseLine)) float_t  baseLine;

/// @brief Field descender offset 0x10
 __declspec(property(get=__get_descender, put=__set_descender)) float_t  descender;

constexpr void __set_firstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstCharacterIndex() ;

constexpr int32_t const& __get_firstCharacterIndex() const;

constexpr void __set_lastCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastCharacterIndex() ;

constexpr int32_t const& __get_lastCharacterIndex() const;

constexpr void __set_ascender(float_t  value) ;

constexpr float_t& __get_ascender() ;

constexpr float_t const& __get_ascender() const;

constexpr void __set_baseLine(float_t  value) ;

constexpr float_t& __get_baseLine() ;

constexpr float_t const& __get_baseLine() const;

constexpr void __set_descender(float_t  value) ;

constexpr float_t& __get_descender() ;

constexpr float_t const& __get_descender() const;

// Ctor Parameters [CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_PageInfo(int32_t  firstCharacterIndex, int32_t  lastCharacterIndex, float_t  ascender, float_t  baseLine, float_t  descender) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_PageInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_PageInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_PageInfo, 0x14>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_PageInfo, "TMPro", "TMP_PageInfo");
