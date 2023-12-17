#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessWindowStyle)
// Forward declare root types
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::ProcessWindowStyle);
// Type: System.Diagnostics::ProcessWindowStyle
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8960))
// CS Name: ::System.Diagnostics::ProcessWindowStyle
struct CORDL_TYPE ProcessWindowStyle : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProcessWindowStyle_Unwrapped
enum struct __ProcessWindowStyle_Unwrapped : int32_t {
__E_Hidden = static_cast<int32_t>(0x1),
__E_Maximized = static_cast<int32_t>(0x3),
__E_Minimized = static_cast<int32_t>(0x2),
__E_Normal = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Hidden value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::ProcessWindowStyle const Hidden;

/// @brief Field Maximized value: static_cast<int32_t>(0x3)
static ::System::Diagnostics::ProcessWindowStyle const Maximized;

/// @brief Field Minimized value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::ProcessWindowStyle const Minimized;

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::System::Diagnostics::ProcessWindowStyle const Normal;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessWindowStyle_Unwrapped () const noexcept {
return std::bit_cast<__ProcessWindowStyle_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessWindowStyle(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProcessWindowStyle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProcessWindowStyle()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessWindowStyle, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessWindowStyle, "System.Diagnostics", "ProcessWindowStyle");
