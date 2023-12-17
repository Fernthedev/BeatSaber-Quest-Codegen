#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int64Enum)
// Forward declare root types
namespace System {
struct Int64Enum;
}
// Write type traits
MARK_VAL_T(::System::Int64Enum);
// Type: System::Int64Enum
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2596))
// CS Name: ::System::Int64Enum
struct CORDL_TYPE Int64Enum : public ::bs_hook::EnumTypeWrapper<0x8> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __Int64Enum_Unwrapped
enum struct __Int64Enum_Unwrapped : int64_t {
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int64_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Int64Enum_Unwrapped () const noexcept {
return std::bit_cast<__Int64Enum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x8>::instance);
}

constexpr void __set_value__(int64_t  value) ;

constexpr int64_t& __get_value__() ;

constexpr int64_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Int64Enum(int64_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Int64Enum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Int64Enum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int64Enum, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Int64Enum, "System", "Int64Enum");
