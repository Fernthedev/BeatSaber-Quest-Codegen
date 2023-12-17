#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalMemberValueE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalMemberValueE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3252))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalMemberValueE
struct CORDL_TYPE InternalMemberValueE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InternalMemberValueE_Unwrapped
enum struct __InternalMemberValueE_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_InlineValue = static_cast<int32_t>(0x1),
__E_Nested = static_cast<int32_t>(0x2),
__E_Reference = static_cast<int32_t>(0x3),
__E_Null = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Empty value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Empty;

/// @brief Field InlineValue value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const InlineValue;

/// @brief Field Nested value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Nested;

/// @brief Field Reference value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Reference;

/// @brief Field Null value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Null;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalMemberValueE_Unwrapped () const noexcept {
return std::bit_cast<__InternalMemberValueE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalMemberValueE(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalMemberValueE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalMemberValueE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
