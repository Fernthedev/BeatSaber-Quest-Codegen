#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageDirection)
// Forward declare root types
namespace Polyglot {
struct LanguageDirection;
}
// Write type traits
MARK_VAL_T(::Polyglot::LanguageDirection);
// Type: Polyglot::LanguageDirection
namespace Polyglot {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15556))
// CS Name: ::Polyglot::LanguageDirection
struct CORDL_TYPE LanguageDirection : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LanguageDirection_Unwrapped
enum struct __LanguageDirection_Unwrapped : int32_t {
__E_LeftToRight = static_cast<int32_t>(0x0),
__E_RightToLeft = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LeftToRight value: static_cast<int32_t>(0x0)
static ::Polyglot::LanguageDirection const LeftToRight;

/// @brief Field RightToLeft value: static_cast<int32_t>(0x1)
static ::Polyglot::LanguageDirection const RightToLeft;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LanguageDirection_Unwrapped () const noexcept {
return std::bit_cast<__LanguageDirection_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LanguageDirection(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LanguageDirection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LanguageDirection()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LanguageDirection, 0x4>, "Size mismatch!");

} // namespace end def Polyglot
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageDirection, "Polyglot", "LanguageDirection");
