#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagAttribute)
// Forward declare root types
namespace TMPro {
struct TagAttribute;
}
// Write type traits
MARK_VAL_T(::TMPro::TagAttribute);
// Type: TMPro::TagAttribute
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12325))
// CS Name: ::TMPro::TagAttribute
struct CORDL_TYPE TagAttribute : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field startIndex offset 0x0
 __declspec(property(get=__get_startIndex, put=__set_startIndex)) int32_t  startIndex;

/// @brief Field length offset 0x4
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field hashCode offset 0x8
 __declspec(property(get=__get_hashCode, put=__set_hashCode)) int32_t  hashCode;

constexpr void __set_startIndex(int32_t  value) ;

constexpr int32_t& __get_startIndex() ;

constexpr int32_t const& __get_startIndex() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_hashCode(int32_t  value) ;

constexpr int32_t& __get_hashCode() ;

constexpr int32_t const& __get_hashCode() const;

// Ctor Parameters [CppParam { name: "startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TagAttribute(int32_t  startIndex, int32_t  length, int32_t  hashCode) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TagAttribute(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TagAttribute()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TagAttribute, 0xc>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TagAttribute, "TMPro", "TagAttribute");
