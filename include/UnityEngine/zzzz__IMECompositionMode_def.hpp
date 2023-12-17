#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionMode)
// Forward declare root types
namespace UnityEngine {
struct IMECompositionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::IMECompositionMode);
// Type: UnityEngine::IMECompositionMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15951))
// CS Name: ::UnityEngine::IMECompositionMode
struct CORDL_TYPE IMECompositionMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IMECompositionMode_Unwrapped
enum struct __IMECompositionMode_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_On = static_cast<int32_t>(0x1),
__E_Off = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Auto value: static_cast<int32_t>(0x0)
static ::UnityEngine::IMECompositionMode const Auto;

/// @brief Field On value: static_cast<int32_t>(0x1)
static ::UnityEngine::IMECompositionMode const On;

/// @brief Field Off value: static_cast<int32_t>(0x2)
static ::UnityEngine::IMECompositionMode const Off;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __IMECompositionMode_Unwrapped () const noexcept {
return std::bit_cast<__IMECompositionMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IMECompositionMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IMECompositionMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IMECompositionMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IMECompositionMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IMECompositionMode, "UnityEngine", "IMECompositionMode");
