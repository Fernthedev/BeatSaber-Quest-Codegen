#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32Enum)
// Forward declare root types
namespace System {
struct UInt32Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt32Enum);
// Type: System::UInt32Enum
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2599))
// CS Name: ::System::UInt32Enum
struct CORDL_TYPE UInt32Enum : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __UInt32Enum_Unwrapped
enum struct __UInt32Enum_Unwrapped : uint32_t {
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UInt32Enum_Unwrapped () const noexcept {
return std::bit_cast<__UInt32Enum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UInt32Enum(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UInt32Enum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UInt32Enum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt32Enum, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32Enum, "System", "UInt32Enum");
