#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshMask)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct RefreshMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::RefreshMask);
// Type: UnityEngine.ProBuilder::RefreshMask
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12168))
// CS Name: ::UnityEngine.ProBuilder::RefreshMask
struct CORDL_TYPE RefreshMask : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RefreshMask_Unwrapped
enum struct __RefreshMask_Unwrapped : int32_t {
__E_UV = static_cast<int32_t>(0x1),
__E_Colors = static_cast<int32_t>(0x2),
__E_Normals = static_cast<int32_t>(0x4),
__E_Tangents = static_cast<int32_t>(0x8),
__E_Collisions = static_cast<int32_t>(0x10),
__E_Bounds = static_cast<int32_t>(0x16),
__E_All = static_cast<int32_t>(0x1f),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UV value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::RefreshMask const UV;

/// @brief Field Colors value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::RefreshMask const Colors;

/// @brief Field Normals value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::RefreshMask const Normals;

/// @brief Field Tangents value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::RefreshMask const Tangents;

/// @brief Field Collisions value: static_cast<int32_t>(0x10)
static ::UnityEngine::ProBuilder::RefreshMask const Collisions;

/// @brief Field Bounds value: static_cast<int32_t>(0x16)
static ::UnityEngine::ProBuilder::RefreshMask const Bounds;

/// @brief Field All value: static_cast<int32_t>(0x1f)
static ::UnityEngine::ProBuilder::RefreshMask const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RefreshMask_Unwrapped () const noexcept {
return std::bit_cast<__RefreshMask_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RefreshMask(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RefreshMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RefreshMask()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::RefreshMask, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RefreshMask, "UnityEngine.ProBuilder", "RefreshMask");
