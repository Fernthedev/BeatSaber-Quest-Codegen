#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectionAxis)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ProjectionAxis);
// Type: UnityEngine.ProBuilder::ProjectionAxis
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12158))
// CS Name: ::UnityEngine.ProBuilder::ProjectionAxis
struct CORDL_TYPE ProjectionAxis : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectionAxis_Unwrapped
enum struct __ProjectionAxis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
__E_XNegative = static_cast<int32_t>(0x3),
__E_YNegative = static_cast<int32_t>(0x4),
__E_ZNegative = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field X value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::ProjectionAxis const X;

/// @brief Field Y value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::ProjectionAxis const Y;

/// @brief Field Z value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::ProjectionAxis const Z;

/// @brief Field XNegative value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::ProjectionAxis const XNegative;

/// @brief Field YNegative value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::ProjectionAxis const YNegative;

/// @brief Field ZNegative value: static_cast<int32_t>(0x5)
static ::UnityEngine::ProBuilder::ProjectionAxis const ZNegative;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectionAxis_Unwrapped () const noexcept {
return std::bit_cast<__ProjectionAxis_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProjectionAxis(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProjectionAxis(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProjectionAxis()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProjectionAxis, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProjectionAxis, "UnityEngine.ProBuilder", "ProjectionAxis");
