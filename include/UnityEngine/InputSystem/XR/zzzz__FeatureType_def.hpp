#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureType)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::FeatureType);
// Type: UnityEngine.InputSystem.XR::FeatureType
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6333))
// CS Name: ::UnityEngine.InputSystem.XR::FeatureType
struct CORDL_TYPE FeatureType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FeatureType_Unwrapped
enum struct __FeatureType_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_Binary = static_cast<int32_t>(0x1),
__E_DiscreteStates = static_cast<int32_t>(0x2),
__E_Axis1D = static_cast<int32_t>(0x3),
__E_Axis2D = static_cast<int32_t>(0x4),
__E_Axis3D = static_cast<int32_t>(0x5),
__E_Rotation = static_cast<int32_t>(0x6),
__E_Hand = static_cast<int32_t>(0x7),
__E_Bone = static_cast<int32_t>(0x8),
__E_Eyes = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Custom value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::XR::FeatureType const Custom;

/// @brief Field Binary value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::XR::FeatureType const Binary;

/// @brief Field DiscreteStates value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::XR::FeatureType const DiscreteStates;

/// @brief Field Axis1D value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis1D;

/// @brief Field Axis2D value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis2D;

/// @brief Field Axis3D value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::XR::FeatureType const Axis3D;

/// @brief Field Rotation value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::XR::FeatureType const Rotation;

/// @brief Field Hand value: static_cast<int32_t>(0x7)
static ::UnityEngine::InputSystem::XR::FeatureType const Hand;

/// @brief Field Bone value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::XR::FeatureType const Bone;

/// @brief Field Eyes value: static_cast<int32_t>(0x9)
static ::UnityEngine::InputSystem::XR::FeatureType const Eyes;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FeatureType_Unwrapped () const noexcept {
return std::bit_cast<__FeatureType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FeatureType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FeatureType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FeatureType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::FeatureType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::FeatureType, "UnityEngine.InputSystem.XR", "FeatureType");
