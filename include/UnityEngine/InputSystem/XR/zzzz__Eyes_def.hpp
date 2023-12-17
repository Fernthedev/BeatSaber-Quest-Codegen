#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Eyes)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Eyes);
// Type: UnityEngine.InputSystem.XR::Eyes
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6338))
// CS Name: ::UnityEngine.InputSystem.XR::Eyes
struct CORDL_TYPE Eyes : public ::bs_hook::ValueTypeWrapper<0x4c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field <leftEyePosition>k__BackingField offset 0x0
 __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField)) ::UnityEngine::Vector3  _leftEyePosition_k__BackingField;

/// @brief Field <leftEyeRotation>k__BackingField offset 0xc
 __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField)) ::UnityEngine::Quaternion  _leftEyeRotation_k__BackingField;

/// @brief Field <rightEyePosition>k__BackingField offset 0x1c
 __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField)) ::UnityEngine::Vector3  _rightEyePosition_k__BackingField;

/// @brief Field <rightEyeRotation>k__BackingField offset 0x28
 __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField)) ::UnityEngine::Quaternion  _rightEyeRotation_k__BackingField;

/// @brief Field <fixationPoint>k__BackingField offset 0x38
 __declspec(property(get=__get__fixationPoint_k__BackingField, put=__set__fixationPoint_k__BackingField)) ::UnityEngine::Vector3  _fixationPoint_k__BackingField;

/// @brief Field <leftEyeOpenAmount>k__BackingField offset 0x44
 __declspec(property(get=__get__leftEyeOpenAmount_k__BackingField, put=__set__leftEyeOpenAmount_k__BackingField)) float_t  _leftEyeOpenAmount_k__BackingField;

/// @brief Field <rightEyeOpenAmount>k__BackingField offset 0x48
 __declspec(property(get=__get__rightEyeOpenAmount_k__BackingField, put=__set__rightEyeOpenAmount_k__BackingField)) float_t  _rightEyeOpenAmount_k__BackingField;

 __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition)) ::UnityEngine::Vector3  leftEyePosition;

 __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation)) ::UnityEngine::Quaternion  leftEyeRotation;

 __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition)) ::UnityEngine::Vector3  rightEyePosition;

 __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation)) ::UnityEngine::Quaternion  rightEyeRotation;

 __declspec(property(get=get_fixationPoint, put=set_fixationPoint)) ::UnityEngine::Vector3  fixationPoint;

 __declspec(property(get=get_leftEyeOpenAmount, put=set_leftEyeOpenAmount)) float_t  leftEyeOpenAmount;

 __declspec(property(get=get_rightEyeOpenAmount, put=set_rightEyeOpenAmount)) float_t  rightEyeOpenAmount;

constexpr void __set__leftEyePosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__leftEyePosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__leftEyePosition_k__BackingField() const;

constexpr void __set__leftEyeRotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__leftEyeRotation_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __get__leftEyeRotation_k__BackingField() const;

constexpr void __set__rightEyePosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rightEyePosition_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__rightEyePosition_k__BackingField() const;

constexpr void __set__rightEyeRotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__rightEyeRotation_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __get__rightEyeRotation_k__BackingField() const;

constexpr void __set__fixationPoint_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__fixationPoint_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__fixationPoint_k__BackingField() const;

constexpr void __set__leftEyeOpenAmount_k__BackingField(float_t  value) ;

constexpr float_t& __get__leftEyeOpenAmount_k__BackingField() ;

constexpr float_t const& __get__leftEyeOpenAmount_k__BackingField() const;

constexpr void __set__rightEyeOpenAmount_k__BackingField(float_t  value) ;

constexpr float_t& __get__rightEyeOpenAmount_k__BackingField() ;

constexpr float_t const& __get__rightEyeOpenAmount_k__BackingField() const;

/// @brief Method get_leftEyePosition addr 0x2ac8378 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2ac8384 size 0xc virtual false final false
inline void set_leftEyePosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_leftEyeRotation addr 0x2ac8390 size 0xc virtual false final false
inline ::UnityEngine::Quaternion get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2ac839c size 0xc virtual false final false
inline void set_leftEyeRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method get_rightEyePosition addr 0x2ac83a8 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2ac83b4 size 0xc virtual false final false
inline void set_rightEyePosition(::UnityEngine::Vector3  value) ;

/// @brief Method get_rightEyeRotation addr 0x2ac83c0 size 0xc virtual false final false
inline ::UnityEngine::Quaternion get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2ac83cc size 0xc virtual false final false
inline void set_rightEyeRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method get_fixationPoint addr 0x2ac83d8 size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_fixationPoint() ;

/// @brief Method set_fixationPoint addr 0x2ac83e4 size 0xc virtual false final false
inline void set_fixationPoint(::UnityEngine::Vector3  value) ;

/// @brief Method get_leftEyeOpenAmount addr 0x2ac83f0 size 0x8 virtual false final false
inline float_t get_leftEyeOpenAmount() ;

/// @brief Method set_leftEyeOpenAmount addr 0x2ac83f8 size 0x8 virtual false final false
inline void set_leftEyeOpenAmount(float_t  value) ;

/// @brief Method get_rightEyeOpenAmount addr 0x2ac8400 size 0x8 virtual false final false
inline float_t get_rightEyeOpenAmount() ;

/// @brief Method set_rightEyeOpenAmount addr 0x2ac8408 size 0x8 virtual false final false
inline void set_rightEyeOpenAmount(float_t  value) ;

// Ctor Parameters [CppParam { name: "_leftEyePosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_leftEyeRotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_rightEyePosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rightEyeRotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_fixationPoint_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_leftEyeOpenAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_rightEyeOpenAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr Eyes(::UnityEngine::Vector3  _leftEyePosition_k__BackingField, ::UnityEngine::Quaternion  _leftEyeRotation_k__BackingField, ::UnityEngine::Vector3  _rightEyePosition_k__BackingField, ::UnityEngine::Quaternion  _rightEyeRotation_k__BackingField, ::UnityEngine::Vector3  _fixationPoint_k__BackingField, float_t  _leftEyeOpenAmount_k__BackingField, float_t  _rightEyeOpenAmount_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Eyes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Eyes()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Eyes, 0x4c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Eyes, "UnityEngine.InputSystem.XR", "Eyes");
