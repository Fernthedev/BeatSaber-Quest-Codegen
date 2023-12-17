#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrounderBipedIK)
namespace RootMotion::FinalIK {
class BipedIK;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderBipedIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderBipedIK);
// Type: RootMotion.FinalIK::GrounderBipedIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12519))
// CS Name: ::RootMotion.FinalIK::GrounderBipedIK*
class CORDL_TYPE GrounderBipedIK : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::RootMotion::FinalIK::Grounder)]{};

/// @brief Field ik offset 0x40
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::BipedIK*  ik;

/// @brief Field spineBend offset 0x48
 __declspec(property(get=__get_spineBend, put=__set_spineBend)) float_t  spineBend;

/// @brief Field spineSpeed offset 0x4c
 __declspec(property(get=__get_spineSpeed, put=__set_spineSpeed)) float_t  spineSpeed;

/// @brief Field feet offset 0x50
 __declspec(property(get=__get_feet, put=__set_feet)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  feet;

/// @brief Field footRotations offset 0x58
 __declspec(property(get=__get_footRotations, put=__set_footRotations)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  footRotations;

/// @brief Field animatedPelvisLocalPosition offset 0x60
 __declspec(property(get=__get_animatedPelvisLocalPosition, put=__set_animatedPelvisLocalPosition)) ::UnityEngine::Vector3  animatedPelvisLocalPosition;

/// @brief Field solvedPelvisLocalPosition offset 0x6c
 __declspec(property(get=__get_solvedPelvisLocalPosition, put=__set_solvedPelvisLocalPosition)) ::UnityEngine::Vector3  solvedPelvisLocalPosition;

/// @brief Field spineOffset offset 0x78
 __declspec(property(get=__get_spineOffset, put=__set_spineOffset)) ::UnityEngine::Vector3  spineOffset;

/// @brief Field lastWeight offset 0x84
 __declspec(property(get=__get_lastWeight, put=__set_lastWeight)) float_t  lastWeight;

constexpr void __set_ik(::RootMotion::FinalIK::BipedIK*  value) ;

constexpr ::RootMotion::FinalIK::BipedIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::BipedIK*> __get_ik() const;

constexpr void __set_spineBend(float_t  value) ;

constexpr float_t& __get_spineBend() ;

constexpr float_t const& __get_spineBend() const;

constexpr void __set_spineSpeed(float_t  value) ;

constexpr float_t& __get_spineSpeed() ;

constexpr float_t const& __get_spineSpeed() const;

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

constexpr void __set_spineOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_spineOffset() ;

constexpr ::UnityEngine::Vector3 const& __get_spineOffset() const;

constexpr void __set_lastWeight(float_t  value) ;

constexpr float_t& __get_lastWeight() ;

constexpr float_t const& __get_lastWeight() const;

/// @brief Method OpenUserManual addr 0x12448b0 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x12448f4 size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x1244938 size 0x6c virtual true final false
inline void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x12449a4 size 0xa0 virtual false final false
inline bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x1244a44 size 0x54 virtual false final false
inline void Update() ;

/// @brief Method Initiate addr 0x1244a98 size 0x304 virtual false final false
inline void Initiate() ;

/// @brief Method OnDisable addr 0x1244d9c size 0x40 virtual false final false
inline void OnDisable() ;

/// @brief Method OnSolverUpdate addr 0x1244ddc size 0x460 virtual false final false
inline void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x124523c size 0xc0 virtual false final false
inline void SetLegIK(::RootMotion::FinalIK::IKSolverLimb*  limb, int32_t  index) ;

/// @brief Method OnPostSolverUpdate addr 0x12452fc size 0x1d0 virtual false final false
inline void OnPostSolverUpdate() ;

/// @brief Method OnDestroy addr 0x12454cc size 0x1a8 virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::GrounderBipedIK* New_ctor() ;

/// @brief Method .ctor addr 0x1245674 size 0x108c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrounderBipedIK(GrounderBipedIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrounderBipedIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrounderBipedIK(GrounderBipedIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GrounderBipedIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderBipedIK, 0x88>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderBipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
