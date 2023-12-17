#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InsertionBehavior)
// Forward declare root types
namespace System::Collections::Generic {
struct InsertionBehavior;
}
// Write type traits
MARK_VAL_T(::System::Collections::Generic::InsertionBehavior);
// Type: System.Collections.Generic::InsertionBehavior
namespace System::Collections::Generic {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3817))
// CS Name: ::System.Collections.Generic::InsertionBehavior
struct CORDL_TYPE InsertionBehavior : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __InsertionBehavior_Unwrapped
enum struct __InsertionBehavior_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_OverwriteExisting = static_cast<uint8_t>(0x1u),
__E_ThrowOnExisting = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Collections::Generic::InsertionBehavior const None;

/// @brief Field OverwriteExisting value: static_cast<uint8_t>(0x1u)
static ::System::Collections::Generic::InsertionBehavior const OverwriteExisting;

/// @brief Field ThrowOnExisting value: static_cast<uint8_t>(0x2u)
static ::System::Collections::Generic::InsertionBehavior const ThrowOnExisting;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InsertionBehavior_Unwrapped () const noexcept {
return std::bit_cast<__InsertionBehavior_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InsertionBehavior(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InsertionBehavior(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InsertionBehavior()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::InsertionBehavior, 0x1>, "Size mismatch!");

} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::InsertionBehavior, "System.Collections.Generic", "InsertionBehavior");
