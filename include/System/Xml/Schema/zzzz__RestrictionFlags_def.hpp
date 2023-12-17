#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RestrictionFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct RestrictionFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::RestrictionFlags);
// Type: System.Xml.Schema::RestrictionFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11617))
// CS Name: ::System.Xml.Schema::RestrictionFlags
struct CORDL_TYPE RestrictionFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RestrictionFlags_Unwrapped
enum struct __RestrictionFlags_Unwrapped : int32_t {
__E_Length = static_cast<int32_t>(0x1),
__E_MinLength = static_cast<int32_t>(0x2),
__E_MaxLength = static_cast<int32_t>(0x4),
__E_Pattern = static_cast<int32_t>(0x8),
__E_Enumeration = static_cast<int32_t>(0x10),
__E_WhiteSpace = static_cast<int32_t>(0x20),
__E_MaxInclusive = static_cast<int32_t>(0x40),
__E_MaxExclusive = static_cast<int32_t>(0x80),
__E_MinInclusive = static_cast<int32_t>(0x100),
__E_MinExclusive = static_cast<int32_t>(0x200),
__E_TotalDigits = static_cast<int32_t>(0x400),
__E_FractionDigits = static_cast<int32_t>(0x800),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Length value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::RestrictionFlags const Length;

/// @brief Field MinLength value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::RestrictionFlags const MinLength;

/// @brief Field MaxLength value: static_cast<int32_t>(0x4)
static ::System::Xml::Schema::RestrictionFlags const MaxLength;

/// @brief Field Pattern value: static_cast<int32_t>(0x8)
static ::System::Xml::Schema::RestrictionFlags const Pattern;

/// @brief Field Enumeration value: static_cast<int32_t>(0x10)
static ::System::Xml::Schema::RestrictionFlags const Enumeration;

/// @brief Field WhiteSpace value: static_cast<int32_t>(0x20)
static ::System::Xml::Schema::RestrictionFlags const WhiteSpace;

/// @brief Field MaxInclusive value: static_cast<int32_t>(0x40)
static ::System::Xml::Schema::RestrictionFlags const MaxInclusive;

/// @brief Field MaxExclusive value: static_cast<int32_t>(0x80)
static ::System::Xml::Schema::RestrictionFlags const MaxExclusive;

/// @brief Field MinInclusive value: static_cast<int32_t>(0x100)
static ::System::Xml::Schema::RestrictionFlags const MinInclusive;

/// @brief Field MinExclusive value: static_cast<int32_t>(0x200)
static ::System::Xml::Schema::RestrictionFlags const MinExclusive;

/// @brief Field TotalDigits value: static_cast<int32_t>(0x400)
static ::System::Xml::Schema::RestrictionFlags const TotalDigits;

/// @brief Field FractionDigits value: static_cast<int32_t>(0x800)
static ::System::Xml::Schema::RestrictionFlags const FractionDigits;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RestrictionFlags_Unwrapped () const noexcept {
return std::bit_cast<__RestrictionFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RestrictionFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RestrictionFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RestrictionFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::RestrictionFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFlags, "System.Xml.Schema", "RestrictionFlags");
