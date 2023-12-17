#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeType)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ShapeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ShapeType);
// Type: UnityEngine.ProBuilder::ShapeType
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12197))
// CS Name: ::UnityEngine.ProBuilder::ShapeType
struct CORDL_TYPE ShapeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShapeType_Unwrapped
enum struct __ShapeType_Unwrapped : int32_t {
__E_Cube = static_cast<int32_t>(0x0),
__E_Stair = static_cast<int32_t>(0x1),
__E_CurvedStair = static_cast<int32_t>(0x2),
__E_Prism = static_cast<int32_t>(0x3),
__E_Cylinder = static_cast<int32_t>(0x4),
__E_Plane = static_cast<int32_t>(0x5),
__E_Door = static_cast<int32_t>(0x6),
__E_Pipe = static_cast<int32_t>(0x7),
__E_Cone = static_cast<int32_t>(0x8),
__E_Sprite = static_cast<int32_t>(0x9),
__E_Arch = static_cast<int32_t>(0xa),
__E_Sphere = static_cast<int32_t>(0xb),
__E_Torus = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Cube value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::ShapeType const Cube;

/// @brief Field Stair value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::ShapeType const Stair;

/// @brief Field CurvedStair value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::ShapeType const CurvedStair;

/// @brief Field Prism value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::ShapeType const Prism;

/// @brief Field Cylinder value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::ShapeType const Cylinder;

/// @brief Field Plane value: static_cast<int32_t>(0x5)
static ::UnityEngine::ProBuilder::ShapeType const Plane;

/// @brief Field Door value: static_cast<int32_t>(0x6)
static ::UnityEngine::ProBuilder::ShapeType const Door;

/// @brief Field Pipe value: static_cast<int32_t>(0x7)
static ::UnityEngine::ProBuilder::ShapeType const Pipe;

/// @brief Field Cone value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::ShapeType const Cone;

/// @brief Field Sprite value: static_cast<int32_t>(0x9)
static ::UnityEngine::ProBuilder::ShapeType const Sprite;

/// @brief Field Arch value: static_cast<int32_t>(0xa)
static ::UnityEngine::ProBuilder::ShapeType const Arch;

/// @brief Field Sphere value: static_cast<int32_t>(0xb)
static ::UnityEngine::ProBuilder::ShapeType const Sphere;

/// @brief Field Torus value: static_cast<int32_t>(0xc)
static ::UnityEngine::ProBuilder::ShapeType const Torus;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ShapeType_Unwrapped () const noexcept {
return std::bit_cast<__ShapeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShapeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ShapeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ShapeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ShapeType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeType, "UnityEngine.ProBuilder", "ShapeType");
