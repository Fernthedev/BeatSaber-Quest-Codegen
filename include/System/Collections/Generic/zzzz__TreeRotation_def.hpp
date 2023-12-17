#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeRotation)
// Forward declare root types
namespace System::Collections::Generic {
struct TreeRotation;
}
// Write type traits
MARK_VAL_T(::System::Collections::Generic::TreeRotation);
// Type: System.Collections.Generic::TreeRotation
namespace System::Collections::Generic {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9544))
// CS Name: ::System.Collections.Generic::TreeRotation
struct CORDL_TYPE TreeRotation : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TreeRotation_Unwrapped
enum struct __TreeRotation_Unwrapped : uint8_t {
__E_Left = static_cast<uint8_t>(0x0u),
__E_LeftRight = static_cast<uint8_t>(0x1u),
__E_Right = static_cast<uint8_t>(0x2u),
__E_RightLeft = static_cast<uint8_t>(0x3u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Left value: static_cast<uint8_t>(0x0u)
static ::System::Collections::Generic::TreeRotation const Left;

/// @brief Field LeftRight value: static_cast<uint8_t>(0x1u)
static ::System::Collections::Generic::TreeRotation const LeftRight;

/// @brief Field Right value: static_cast<uint8_t>(0x2u)
static ::System::Collections::Generic::TreeRotation const Right;

/// @brief Field RightLeft value: static_cast<uint8_t>(0x3u)
static ::System::Collections::Generic::TreeRotation const RightLeft;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TreeRotation_Unwrapped () const noexcept {
return std::bit_cast<__TreeRotation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TreeRotation(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TreeRotation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TreeRotation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::TreeRotation, 0x1>, "Size mismatch!");

} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::TreeRotation, "System.Collections.Generic", "TreeRotation");
