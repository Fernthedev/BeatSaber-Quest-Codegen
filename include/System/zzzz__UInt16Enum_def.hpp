#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16Enum)
// Forward declare root types
namespace System {
struct UInt16Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt16Enum);
// Type: System::UInt16Enum
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2598))
// CS Name: ::System::UInt16Enum
struct CORDL_TYPE UInt16Enum : public ::bs_hook::EnumTypeWrapper<0x2> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __UInt16Enum_Unwrapped
enum struct __UInt16Enum_Unwrapped : uint16_t {
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint16_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UInt16Enum_Unwrapped () const noexcept {
return std::bit_cast<__UInt16Enum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x2>::instance);
}

constexpr void __set_value__(uint16_t  value) ;

constexpr uint16_t& __get_value__() ;

constexpr uint16_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr UInt16Enum(uint16_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UInt16Enum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UInt16Enum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt16Enum, 0x2>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt16Enum, "System", "UInt16Enum");
