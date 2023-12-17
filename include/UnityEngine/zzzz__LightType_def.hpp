#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightType)
// Forward declare root types
namespace UnityEngine {
struct LightType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightType);
// Type: UnityEngine::LightType
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10103))
// CS Name: ::UnityEngine::LightType
struct CORDL_TYPE LightType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightType_Unwrapped
enum struct __LightType_Unwrapped : int32_t {
__E_Spot = static_cast<int32_t>(0x0),
__E_Directional = static_cast<int32_t>(0x1),
__E_Point = static_cast<int32_t>(0x2),
__E_Area = static_cast<int32_t>(0x3),
__E_Rectangle = static_cast<int32_t>(0x3),
__E_Disc = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Spot value: static_cast<int32_t>(0x0)
static ::UnityEngine::LightType const Spot;

/// @brief Field Directional value: static_cast<int32_t>(0x1)
static ::UnityEngine::LightType const Directional;

/// @brief Field Point value: static_cast<int32_t>(0x2)
static ::UnityEngine::LightType const Point;

/// @brief Field Area value: static_cast<int32_t>(0x3)
static ::UnityEngine::LightType const Area;

/// @brief Field Rectangle value: static_cast<int32_t>(0x3)
static ::UnityEngine::LightType const Rectangle;

/// @brief Field Disc value: static_cast<int32_t>(0x4)
static ::UnityEngine::LightType const Disc;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LightType_Unwrapped () const noexcept {
return std::bit_cast<__LightType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightType, "UnityEngine", "LightType");
