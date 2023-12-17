#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int16Enum)
// Forward declare root types
namespace System {
struct Int16Enum;
}
// Write type traits
MARK_VAL_T(::System::Int16Enum);
// Type: System::Int16Enum
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2594))
// CS Name: ::System::Int16Enum
struct CORDL_TYPE Int16Enum : public ::bs_hook::EnumTypeWrapper<0x2> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __Int16Enum_Unwrapped
enum struct __Int16Enum_Unwrapped : int16_t {
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int16_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Int16Enum_Unwrapped () const noexcept {
return std::bit_cast<__Int16Enum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x2>::instance);
}

constexpr void __set_value__(int16_t  value) ;

constexpr int16_t& __get_value__() ;

constexpr int16_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Int16Enum(int16_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Int16Enum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Int16Enum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int16Enum, 0x2>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Int16Enum, "System", "Int16Enum");
