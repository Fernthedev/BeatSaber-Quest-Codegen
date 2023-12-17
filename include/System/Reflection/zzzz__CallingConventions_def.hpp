#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallingConventions)
// Forward declare root types
namespace System::Reflection {
struct CallingConventions;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CallingConventions);
// Type: System.Reflection::CallingConventions
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3460))
// CS Name: ::System.Reflection::CallingConventions
struct CORDL_TYPE CallingConventions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CallingConventions_Unwrapped
enum struct __CallingConventions_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x1),
__E_VarArgs = static_cast<int32_t>(0x2),
__E_Any = static_cast<int32_t>(0x3),
__E_HasThis = static_cast<int32_t>(0x20),
__E_ExplicitThis = static_cast<int32_t>(0x40),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Standard value: static_cast<int32_t>(0x1)
static ::System::Reflection::CallingConventions const Standard;

/// @brief Field VarArgs value: static_cast<int32_t>(0x2)
static ::System::Reflection::CallingConventions const VarArgs;

/// @brief Field Any value: static_cast<int32_t>(0x3)
static ::System::Reflection::CallingConventions const Any;

/// @brief Field HasThis value: static_cast<int32_t>(0x20)
static ::System::Reflection::CallingConventions const HasThis;

/// @brief Field ExplicitThis value: static_cast<int32_t>(0x40)
static ::System::Reflection::CallingConventions const ExplicitThis;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CallingConventions_Unwrapped () const noexcept {
return std::bit_cast<__CallingConventions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallingConventions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CallingConventions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CallingConventions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CallingConventions, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CallingConventions, "System.Reflection", "CallingConventions");
