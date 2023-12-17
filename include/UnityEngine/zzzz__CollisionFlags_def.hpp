#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionFlags)
// Forward declare root types
namespace UnityEngine {
struct CollisionFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionFlags);
// Type: UnityEngine::CollisionFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15502))
// CS Name: ::UnityEngine::CollisionFlags
struct CORDL_TYPE CollisionFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionFlags_Unwrapped
enum struct __CollisionFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Sides = static_cast<int32_t>(0x1),
__E_Above = static_cast<int32_t>(0x2),
__E_Below = static_cast<int32_t>(0x4),
__E_CollidedSides = static_cast<int32_t>(0x1),
__E_CollidedAbove = static_cast<int32_t>(0x2),
__E_CollidedBelow = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::CollisionFlags const None;

/// @brief Field Sides value: static_cast<int32_t>(0x1)
static ::UnityEngine::CollisionFlags const Sides;

/// @brief Field Above value: static_cast<int32_t>(0x2)
static ::UnityEngine::CollisionFlags const Above;

/// @brief Field Below value: static_cast<int32_t>(0x4)
static ::UnityEngine::CollisionFlags const Below;

/// @brief Field CollidedSides value: static_cast<int32_t>(0x1)
static ::UnityEngine::CollisionFlags const CollidedSides;

/// @brief Field CollidedAbove value: static_cast<int32_t>(0x2)
static ::UnityEngine::CollisionFlags const CollidedAbove;

/// @brief Field CollidedBelow value: static_cast<int32_t>(0x4)
static ::UnityEngine::CollisionFlags const CollidedBelow;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionFlags_Unwrapped () const noexcept {
return std::bit_cast<__CollisionFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CollisionFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CollisionFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionFlags, "UnityEngine", "CollisionFlags");
