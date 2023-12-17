#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationMode)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationMode
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15343))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationMode
struct CORDL_TYPE TriangulationMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriangulationMode_Unwrapped
enum struct __TriangulationMode_Unwrapped : int32_t {
__E_Unconstrained = static_cast<int32_t>(0x0),
__E_Constrained = static_cast<int32_t>(0x1),
__E_Polygon = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unconstrained value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Unconstrained;

/// @brief Field Constrained value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Constrained;

/// @brief Field Polygon value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Polygon;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TriangulationMode_Unwrapped () const noexcept {
return std::bit_cast<__TriangulationMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriangulationMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TriangulationMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TriangulationMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationMode");
