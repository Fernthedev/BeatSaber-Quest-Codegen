#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenOrientation)
// Forward declare root types
namespace UnityEngine {
struct ScreenOrientation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ScreenOrientation);
// Type: UnityEngine::ScreenOrientation
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10112))
// CS Name: ::UnityEngine::ScreenOrientation
struct CORDL_TYPE ScreenOrientation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenOrientation_Unwrapped
enum struct __ScreenOrientation_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Landscape = static_cast<int32_t>(0x3),
__E_Portrait = static_cast<int32_t>(0x1),
__E_PortraitUpsideDown = static_cast<int32_t>(0x2),
__E_LandscapeLeft = static_cast<int32_t>(0x3),
__E_LandscapeRight = static_cast<int32_t>(0x4),
__E_AutoRotation = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::UnityEngine::ScreenOrientation const Unknown;

/// @brief Field Landscape value: static_cast<int32_t>(0x3)
static ::UnityEngine::ScreenOrientation const Landscape;

/// @brief Field Portrait value: static_cast<int32_t>(0x1)
static ::UnityEngine::ScreenOrientation const Portrait;

/// @brief Field PortraitUpsideDown value: static_cast<int32_t>(0x2)
static ::UnityEngine::ScreenOrientation const PortraitUpsideDown;

/// @brief Field LandscapeLeft value: static_cast<int32_t>(0x3)
static ::UnityEngine::ScreenOrientation const LandscapeLeft;

/// @brief Field LandscapeRight value: static_cast<int32_t>(0x4)
static ::UnityEngine::ScreenOrientation const LandscapeRight;

/// @brief Field AutoRotation value: static_cast<int32_t>(0x5)
static ::UnityEngine::ScreenOrientation const AutoRotation;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenOrientation_Unwrapped () const noexcept {
return std::bit_cast<__ScreenOrientation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScreenOrientation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScreenOrientation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScreenOrientation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScreenOrientation, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScreenOrientation, "UnityEngine", "ScreenOrientation");
