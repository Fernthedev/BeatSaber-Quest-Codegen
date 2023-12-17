#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnescapeMode)
// Forward declare root types
namespace System {
struct UnescapeMode;
}
// Write type traits
MARK_VAL_T(::System::UnescapeMode);
// Type: System::UnescapeMode
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8882))
// CS Name: ::System::UnescapeMode
struct CORDL_TYPE UnescapeMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnescapeMode_Unwrapped
enum struct __UnescapeMode_Unwrapped : int32_t {
__E_CopyOnly = static_cast<int32_t>(0x0),
__E_Escape = static_cast<int32_t>(0x1),
__E_Unescape = static_cast<int32_t>(0x2),
__E_EscapeUnescape = static_cast<int32_t>(0x3),
__E_V1ToStringFlag = static_cast<int32_t>(0x4),
__E_UnescapeAll = static_cast<int32_t>(0x8),
__E_UnescapeAllOrThrow = static_cast<int32_t>(0x18),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CopyOnly value: static_cast<int32_t>(0x0)
static ::System::UnescapeMode const CopyOnly;

/// @brief Field Escape value: static_cast<int32_t>(0x1)
static ::System::UnescapeMode const Escape;

/// @brief Field Unescape value: static_cast<int32_t>(0x2)
static ::System::UnescapeMode const Unescape;

/// @brief Field EscapeUnescape value: static_cast<int32_t>(0x3)
static ::System::UnescapeMode const EscapeUnescape;

/// @brief Field V1ToStringFlag value: static_cast<int32_t>(0x4)
static ::System::UnescapeMode const V1ToStringFlag;

/// @brief Field UnescapeAll value: static_cast<int32_t>(0x8)
static ::System::UnescapeMode const UnescapeAll;

/// @brief Field UnescapeAllOrThrow value: static_cast<int32_t>(0x18)
static ::System::UnescapeMode const UnescapeAllOrThrow;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UnescapeMode_Unwrapped () const noexcept {
return std::bit_cast<__UnescapeMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnescapeMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UnescapeMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UnescapeMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UnescapeMode, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UnescapeMode, "System", "UnescapeMode");
