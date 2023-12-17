#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationAlgorithm)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationAlgorithm
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15339))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationAlgorithm
struct CORDL_TYPE TriangulationAlgorithm : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TriangulationAlgorithm_Unwrapped
enum struct __TriangulationAlgorithm_Unwrapped : int32_t {
__E_DTSweep = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DTSweep value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm const DTSweep;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TriangulationAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__TriangulationAlgorithm_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TriangulationAlgorithm(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TriangulationAlgorithm(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TriangulationAlgorithm()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationAlgorithm");
