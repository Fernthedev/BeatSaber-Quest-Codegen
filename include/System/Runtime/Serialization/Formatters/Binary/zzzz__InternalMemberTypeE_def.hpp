#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalMemberTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalMemberTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3251))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalMemberTypeE
struct CORDL_TYPE InternalMemberTypeE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InternalMemberTypeE_Unwrapped
enum struct __InternalMemberTypeE_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Header = static_cast<int32_t>(0x1),
__E_Field = static_cast<int32_t>(0x2),
__E_Item = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Empty value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Empty;

/// @brief Field Header value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Header;

/// @brief Field Field value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Field;

/// @brief Field Item value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const Item;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalMemberTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalMemberTypeE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalMemberTypeE(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalMemberTypeE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalMemberTypeE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberTypeE");
