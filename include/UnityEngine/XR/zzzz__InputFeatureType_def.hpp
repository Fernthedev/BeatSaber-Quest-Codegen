#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFeatureType)
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputFeatureType);
// Type: UnityEngine.XR::InputFeatureType
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15615))
// CS Name: ::UnityEngine.XR::InputFeatureType
struct CORDL_TYPE InputFeatureType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __InputFeatureType_Unwrapped
enum struct __InputFeatureType_Unwrapped : uint32_t {
__E_Custom = static_cast<uint32_t>(0x3020100u),
__E_Binary = static_cast<uint32_t>(0x4030201u),
__E_DiscreteStates = static_cast<uint32_t>(0x5040302u),
__E_Axis1D = static_cast<uint32_t>(0x6050403u),
__E_Axis2D = static_cast<uint32_t>(0x7060504u),
__E_Axis3D = static_cast<uint32_t>(0x8070605u),
__E_Rotation = static_cast<uint32_t>(0x9080706u),
__E_Hand = static_cast<uint32_t>(0xff090807u),
__E_Bone = static_cast<uint32_t>(0xff0908u),
__E_Eyes = static_cast<uint32_t>(0x100ff09u),
__E_kUnityXRInputFeatureTypeInvalid = static_cast<uint32_t>(0x20100ffu),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Custom value: static_cast<uint32_t>(0x3020100u)
static ::UnityEngine::XR::InputFeatureType const Custom;

/// @brief Field Binary value: static_cast<uint32_t>(0x4030201u)
static ::UnityEngine::XR::InputFeatureType const Binary;

/// @brief Field DiscreteStates value: static_cast<uint32_t>(0x5040302u)
static ::UnityEngine::XR::InputFeatureType const DiscreteStates;

/// @brief Field Axis1D value: static_cast<uint32_t>(0x6050403u)
static ::UnityEngine::XR::InputFeatureType const Axis1D;

/// @brief Field Axis2D value: static_cast<uint32_t>(0x7060504u)
static ::UnityEngine::XR::InputFeatureType const Axis2D;

/// @brief Field Axis3D value: static_cast<uint32_t>(0x8070605u)
static ::UnityEngine::XR::InputFeatureType const Axis3D;

/// @brief Field Rotation value: static_cast<uint32_t>(0x9080706u)
static ::UnityEngine::XR::InputFeatureType const Rotation;

/// @brief Field Hand value: static_cast<uint32_t>(0xff090807u)
static ::UnityEngine::XR::InputFeatureType const Hand;

/// @brief Field Bone value: static_cast<uint32_t>(0xff0908u)
static ::UnityEngine::XR::InputFeatureType const Bone;

/// @brief Field Eyes value: static_cast<uint32_t>(0x100ff09u)
static ::UnityEngine::XR::InputFeatureType const Eyes;

/// @brief Field kUnityXRInputFeatureTypeInvalid value: static_cast<uint32_t>(0x20100ffu)
static ::UnityEngine::XR::InputFeatureType const kUnityXRInputFeatureTypeInvalid;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InputFeatureType_Unwrapped () const noexcept {
return std::bit_cast<__InputFeatureType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InputFeatureType(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputFeatureType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputFeatureType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputFeatureType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputFeatureType, "UnityEngine.XR", "InputFeatureType");
