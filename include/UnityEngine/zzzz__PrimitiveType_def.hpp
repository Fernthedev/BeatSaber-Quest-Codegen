#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveType)
// Forward declare root types
namespace UnityEngine {
struct PrimitiveType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PrimitiveType);
// Type: UnityEngine::PrimitiveType
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10032))
// CS Name: ::UnityEngine::PrimitiveType
struct CORDL_TYPE PrimitiveType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PrimitiveType_Unwrapped
enum struct __PrimitiveType_Unwrapped : int32_t {
__E_Sphere = static_cast<int32_t>(0x0),
__E_Capsule = static_cast<int32_t>(0x1),
__E_Cylinder = static_cast<int32_t>(0x2),
__E_Cube = static_cast<int32_t>(0x3),
__E_Plane = static_cast<int32_t>(0x4),
__E_Quad = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sphere value: static_cast<int32_t>(0x0)
static ::UnityEngine::PrimitiveType const Sphere;

/// @brief Field Capsule value: static_cast<int32_t>(0x1)
static ::UnityEngine::PrimitiveType const Capsule;

/// @brief Field Cylinder value: static_cast<int32_t>(0x2)
static ::UnityEngine::PrimitiveType const Cylinder;

/// @brief Field Cube value: static_cast<int32_t>(0x3)
static ::UnityEngine::PrimitiveType const Cube;

/// @brief Field Plane value: static_cast<int32_t>(0x4)
static ::UnityEngine::PrimitiveType const Plane;

/// @brief Field Quad value: static_cast<int32_t>(0x5)
static ::UnityEngine::PrimitiveType const Quad;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PrimitiveType_Unwrapped () const noexcept {
return std::bit_cast<__PrimitiveType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PrimitiveType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PrimitiveType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PrimitiveType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PrimitiveType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PrimitiveType, "UnityEngine", "PrimitiveType");
