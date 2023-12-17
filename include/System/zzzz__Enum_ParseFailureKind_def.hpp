#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Enum_ParseFailureKind)
// Forward declare root types
namespace System {
struct __Enum__ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::System::__Enum__ParseFailureKind);
// Type: ::ParseFailureKind
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2556))
// CS Name: ::Enum::ParseFailureKind
struct CORDL_TYPE __Enum__ParseFailureKind : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Enum__ParseFailureKind_Unwrapped
enum struct ____Enum__ParseFailureKind_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Argument = static_cast<int32_t>(0x1),
__E_ArgumentNull = static_cast<int32_t>(0x2),
__E_ArgumentWithParameter = static_cast<int32_t>(0x3),
__E_UnhandledException = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::__Enum__ParseFailureKind const None;

/// @brief Field Argument value: static_cast<int32_t>(0x1)
static ::System::__Enum__ParseFailureKind const Argument;

/// @brief Field ArgumentNull value: static_cast<int32_t>(0x2)
static ::System::__Enum__ParseFailureKind const ArgumentNull;

/// @brief Field ArgumentWithParameter value: static_cast<int32_t>(0x3)
static ::System::__Enum__ParseFailureKind const ArgumentWithParameter;

/// @brief Field UnhandledException value: static_cast<int32_t>(0x4)
static ::System::__Enum__ParseFailureKind const UnhandledException;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Enum__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<____Enum__ParseFailureKind_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Enum__ParseFailureKind(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Enum__ParseFailureKind(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Enum__ParseFailureKind()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Enum__ParseFailureKind, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::__Enum__ParseFailureKind, "System", "Enum/ParseFailureKind");
