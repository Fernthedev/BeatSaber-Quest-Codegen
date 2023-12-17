#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorWriteMask)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ColorWriteMask);
// Type: UnityEngine.Rendering::ColorWriteMask
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10335))
// CS Name: ::UnityEngine.Rendering::ColorWriteMask
struct CORDL_TYPE ColorWriteMask : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorWriteMask_Unwrapped
enum struct __ColorWriteMask_Unwrapped : int32_t {
__E_Alpha = static_cast<int32_t>(0x1),
__E_Blue = static_cast<int32_t>(0x2),
__E_Green = static_cast<int32_t>(0x4),
__E_Red = static_cast<int32_t>(0x8),
__E_All = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Alpha value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::ColorWriteMask const Alpha;

/// @brief Field Blue value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::ColorWriteMask const Blue;

/// @brief Field Green value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::ColorWriteMask const Green;

/// @brief Field Red value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::ColorWriteMask const Red;

/// @brief Field All value: static_cast<int32_t>(0xf)
static ::UnityEngine::Rendering::ColorWriteMask const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorWriteMask_Unwrapped () const noexcept {
return std::bit_cast<__ColorWriteMask_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorWriteMask(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorWriteMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorWriteMask()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ColorWriteMask, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorWriteMask, "UnityEngine.Rendering", "ColorWriteMask");
