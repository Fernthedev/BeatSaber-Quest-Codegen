#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrounderIK)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Rigidbody;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderIK);
// Type: RootMotion.FinalIK::GrounderIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12522))
// CS Name: ::RootMotion.FinalIK::GrounderIK*
class CORDL_TYPE GrounderIK : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::RootMotion::FinalIK::Grounder)]{};

/// @brief Field legs offset 0x40
 __declspec(property(get=__get_legs, put=__set_legs)) ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>  legs;

/// @brief Field pelvis offset 0x48
 __declspec(property(get=__get_pelvis, put=__set_pelvis)) ::UnityEngine::Transform*  pelvis;

/// @brief Field characterRoot offset 0x50
 __declspec(property(get=__get_characterRoot, put=__set_characterRoot)) ::UnityEngine::Transform*  characterRoot;

/// @brief Field rootRotationWeight offset 0x58
 __declspec(property(get=__get_rootRotationWeight, put=__set_rootRotationWeight)) float_t  rootRotationWeight;

/// @brief Field rootRotationSpeed offset 0x5c
 __declspec(property(get=__get_rootRotationSpeed, put=__set_rootRotationSpeed)) float_t  rootRotationSpeed;

/// @brief Field maxRootRotationAngle offset 0x60
 __declspec(property(get=__get_maxRootRotationAngle, put=__set_maxRootRotationAngle)) float_t  maxRootRotationAngle;

/// @brief Field feet offset 0x68
 __declspec(property(get=__get_feet, put=__set_feet)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  feet;

/// @brief Field footRotations offset 0x70
 __declspec(property(get=__get_footRotations, put=__set_footRotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  footRotations;

/// @brief Field animatedPelvisLocalPosition offset 0x78
 __declspec(property(get=__get_animatedPelvisLocalPosition, put=__set_animatedPelvisLocalPosition)) ::UnityEngine::Vector3  animatedPelvisLocalPosition;

/// @brief Field solvedPelvisLocalPosition offset 0x84
 __declspec(property(get=__get_solvedPelvisLocalPosition, put=__set_solvedPelvisLocalPosition)) ::UnityEngine::Vector3  solvedPelvisLocalPosition;

/// @brief Field solvedFeet offset 0x90
 __declspec(property(get=__get_solvedFeet, put=__set_solvedFeet)) int32_t  solvedFeet;

/// @brief Field solved offset 0x94
 __declspec(property(get=__get_solved, put=__set_solved)) bool  solved;

/// @brief Field lastWeight offset 0x98
 __declspec(property(get=__get_lastWeight, put=__set_lastWeight)) float_t  lastWeight;

/// @brief Field characterRootRigidbody offset 0xa0
 __declspec(property(get=__get_characterRootRigidbody, put=__set_characterRootRigidbody)) ::UnityEngine::Rigidbody*  characterRootRigidbody;

constexpr void __set_legs(::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>& __get_legs() ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*> const& __get_legs() const;

constexpr void __set_pelvis(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_pelvis() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_pelvis() const;

constexpr void __set_characterRoot(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_characterRoot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_characterRoot() const;

constexpr void __set_rootRotationWeight(float_t  value) ;

constexpr float_t& __get_rootRotationWeight() ;

constexpr float_t const& __get_rootRotationWeight() const;

constexpr void __set_rootRotationSpeed(float_t  value) ;

constexpr float_t& __get_rootRotationSpeed() ;

constexpr float_t const& __get_rootRotationSpeed() const;

constexpr void __set_maxRootRotationAngle(float_t  value) ;

constexpr float_t& __get_maxRootRotationAngle() ;

constexpr float_t const& __get_maxRootRotationAngle() const;

constexpr void __set_feet(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get_feet() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get_feet() const;

constexpr void __set_footRotations(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __get_footRotations() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __get_footRotations() const;

constexpr void __set_animatedPelvisLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_animatedPelvisLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_animatedPelvisLocalPosition() const;

constexpr void __set_solvedPelvisLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_solvedPelvisLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_solvedPelvisLocalPosition() const;

constexpr void __set_solvedFeet(int32_t  value) ;

constexpr int32_t& __get_solvedFeet() ;

constexpr int32_t const& __get_solvedFeet() const;

constexpr void __set_solved(bool  value) ;

constexpr bool& __get_solved() ;

constexpr bool const& __get_solved() const;

constexpr void __set_lastWeight(float_t  value) ;

constexpr float_t& __get_lastWeight() ;

constexpr float_t const& __get_lastWeight() const;

constexpr void __set_characterRootRigidbody(::UnityEngine::Rigidbody*  value) ;

constexpr ::UnityEngine::Rigidbody* __get_characterRootRigidbody() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> __get_characterRootRigidbody() const;

/// @brief Method OpenUserManual addr 0x1247848 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x124788c size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x12478d0 size 0x18 virtual true final false
inline void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x12478e8 size 0x20c virtual false final false
inline bool IsReadyToInitiate() ;

/// @brief Method OnDisable addr 0x1247af4 size 0xe0 virtual false final false
inline void OnDisable() ;

/// @brief Method Update addr 0x1247bd4 size 0x56c virtual false final false
inline void Update() ;

/// @brief Method Initiate addr 0x12482b8 size 0x460 virtual false final false
inline void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x1248718 size 0x1ac virtual false final false
inline void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x12488c4 size 0x388 virtual false final false
inline void SetLegIK(int32_t  index) ;

/// @brief Method OnPostSolverUpdate addr 0x1248c4c size 0x1d8 virtual false final false
inline void OnPostSolverUpdate() ;

/// @brief Method OnDestroy addr 0x1248e24 size 0x204 virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::GrounderIK* New_ctor() ;

/// @brief Method .ctor addr 0x1249028 size 0x90 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrounderIK(GrounderIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrounderIK(GrounderIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GrounderIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderIK, 0xa8>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderIK*, "RootMotion.FinalIK", "GrounderIK");
