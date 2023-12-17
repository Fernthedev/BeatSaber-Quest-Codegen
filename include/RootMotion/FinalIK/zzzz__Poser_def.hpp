#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Poser)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Poser;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::Poser);
// Type: RootMotion.FinalIK::Poser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12617))
// CS Name: ::RootMotion.FinalIK::Poser*
class CORDL_TYPE Poser : public ::RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::RootMotion::SolverManager)]{};

/// @brief Field poseRoot offset 0x38
 __declspec(property(get=__get_poseRoot, put=__set_poseRoot)) ::UnityEngine::Transform*  poseRoot;

/// @brief Field weight offset 0x40
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field localRotationWeight offset 0x44
 __declspec(property(get=__get_localRotationWeight, put=__set_localRotationWeight)) float_t  localRotationWeight;

/// @brief Field localPositionWeight offset 0x48
 __declspec(property(get=__get_localPositionWeight, put=__set_localPositionWeight)) float_t  localPositionWeight;

/// @brief Field initiated offset 0x4c
 __declspec(property(get=__get_initiated, put=__set_initiated)) bool  initiated;

constexpr void __set_poseRoot(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_poseRoot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_poseRoot() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_localRotationWeight(float_t  value) ;

constexpr float_t& __get_localRotationWeight() ;

constexpr float_t const& __get_localRotationWeight() const;

constexpr void __set_localPositionWeight(float_t  value) ;

constexpr float_t& __get_localPositionWeight() ;

constexpr float_t const& __get_localPositionWeight() const;

constexpr void __set_initiated(bool  value) ;

constexpr bool& __get_initiated() ;

constexpr bool const& __get_initiated() const;

/// @brief Method AutoMapping addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AutoMapping() ;

/// @brief Method UpdateManual addr 0x128d47c size 0xc virtual false final false
inline void UpdateManual() ;

/// @brief Method InitiatePoser addr 0x0 size 0xffffffffffffffff virtual true final false
inline void InitiatePoser() ;

/// @brief Method UpdatePoser addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdatePoser() ;

/// @brief Method FixPoserTransforms addr 0x0 size 0xffffffffffffffff virtual true final false
inline void FixPoserTransforms() ;

/// @brief Method UpdateSolver addr 0x128d488 size 0x44 virtual true final false
inline void UpdateSolver() ;

/// @brief Method InitiateSolver addr 0x128d4cc size 0x2c virtual true final false
inline void InitiateSolver() ;

/// @brief Method FixTransforms addr 0x128d4f8 size 0x18 virtual true final false
inline void FixTransforms() ;

static inline ::RootMotion::FinalIK::Poser* New_ctor() ;

/// @brief Method .ctor addr 0x128cde4 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Poser(Poser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Poser(Poser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Poser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Poser, 0x50>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Poser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Poser*, "RootMotion.FinalIK", "Poser");
