#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionDetectionMode)
// Forward declare root types
namespace UnityEngine {
struct CollisionDetectionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionDetectionMode);
// Type: UnityEngine::CollisionDetectionMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15504))
// CS Name: ::UnityEngine::CollisionDetectionMode
struct CORDL_TYPE CollisionDetectionMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionDetectionMode_Unwrapped
enum struct __CollisionDetectionMode_Unwrapped : int32_t {
__E_Discrete = static_cast<int32_t>(0x0),
__E_Continuous = static_cast<int32_t>(0x1),
__E_ContinuousDynamic = static_cast<int32_t>(0x2),
__E_ContinuousSpeculative = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Discrete value: static_cast<int32_t>(0x0)
static ::UnityEngine::CollisionDetectionMode const Discrete;

/// @brief Field Continuous value: static_cast<int32_t>(0x1)
static ::UnityEngine::CollisionDetectionMode const Continuous;

/// @brief Field ContinuousDynamic value: static_cast<int32_t>(0x2)
static ::UnityEngine::CollisionDetectionMode const ContinuousDynamic;

/// @brief Field ContinuousSpeculative value: static_cast<int32_t>(0x3)
static ::UnityEngine::CollisionDetectionMode const ContinuousSpeculative;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionDetectionMode_Unwrapped () const noexcept {
return std::bit_cast<__CollisionDetectionMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionDetectionMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CollisionDetectionMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CollisionDetectionMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionDetectionMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionDetectionMode, "UnityEngine", "CollisionDetectionMode");
