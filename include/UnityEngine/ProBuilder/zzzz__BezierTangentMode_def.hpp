#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierTangentMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::BezierTangentMode);
// Type: UnityEngine.ProBuilder::BezierTangentMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12101))
// CS Name: ::UnityEngine.ProBuilder::BezierTangentMode
struct CORDL_TYPE BezierTangentMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BezierTangentMode_Unwrapped
enum struct __BezierTangentMode_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Aligned = static_cast<int32_t>(0x1),
__E_Mirrored = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Free value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::BezierTangentMode const Free;

/// @brief Field Aligned value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::BezierTangentMode const Aligned;

/// @brief Field Mirrored value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::BezierTangentMode const Mirrored;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierTangentMode_Unwrapped () const noexcept {
return std::bit_cast<__BezierTangentMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BezierTangentMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BezierTangentMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BezierTangentMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierTangentMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierTangentMode, "UnityEngine.ProBuilder", "BezierTangentMode");
