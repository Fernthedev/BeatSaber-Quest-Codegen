#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionLookAt)
namespace RootMotion::FinalIK {
class LookAtIK;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionLookAt;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionLookAt);
// Type: RootMotion.FinalIK::InteractionLookAt
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12596))
// CS Name: ::RootMotion.FinalIK::InteractionLookAt*
class CORDL_TYPE InteractionLookAt : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field ik offset 0x10
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::LookAtIK*  ik;

/// @brief Field lerpSpeed offset 0x18
 __declspec(property(get=__get_lerpSpeed, put=__set_lerpSpeed)) float_t  lerpSpeed;

/// @brief Field weightSpeed offset 0x1c
 __declspec(property(get=__get_weightSpeed, put=__set_weightSpeed)) float_t  weightSpeed;

/// @brief Field isPaused offset 0x20
 __declspec(property(get=__get_isPaused, put=__set_isPaused)) bool  isPaused;

/// @brief Field lookAtTarget offset 0x28
 __declspec(property(get=__get_lookAtTarget, put=__set_lookAtTarget)) ::UnityEngine::Transform*  lookAtTarget;

/// @brief Field stopLookTime offset 0x30
 __declspec(property(get=__get_stopLookTime, put=__set_stopLookTime)) float_t  stopLookTime;

/// @brief Field weight offset 0x34
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field firstFBBIKSolve offset 0x38
 __declspec(property(get=__get_firstFBBIKSolve, put=__set_firstFBBIKSolve)) bool  firstFBBIKSolve;

constexpr void __set_ik(::RootMotion::FinalIK::LookAtIK*  value) ;

constexpr ::RootMotion::FinalIK::LookAtIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::LookAtIK*> __get_ik() const;

constexpr void __set_lerpSpeed(float_t  value) ;

constexpr float_t& __get_lerpSpeed() ;

constexpr float_t const& __get_lerpSpeed() const;

constexpr void __set_weightSpeed(float_t  value) ;

constexpr float_t& __get_weightSpeed() ;

constexpr float_t const& __get_weightSpeed() const;

constexpr void __set_isPaused(bool  value) ;

constexpr bool& __get_isPaused() ;

constexpr bool const& __get_isPaused() const;

constexpr void __set_lookAtTarget(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_lookAtTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_lookAtTarget() const;

constexpr void __set_stopLookTime(float_t  value) ;

constexpr float_t& __get_stopLookTime() ;

constexpr float_t const& __get_stopLookTime() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_firstFBBIKSolve(bool  value) ;

constexpr bool& __get_firstFBBIKSolve() ;

constexpr bool const& __get_firstFBBIKSolve() const;

/// @brief Method Look addr 0x1286268 size 0x110 virtual false final false
inline void Look(::UnityEngine::Transform*  target, float_t  time) ;

/// @brief Method OnFixTransforms addr 0x1286378 size 0x98 virtual false final false
inline void OnFixTransforms() ;

/// @brief Method Update addr 0x1286410 size 0x1f0 virtual false final false
inline void Update() ;

/// @brief Method SolveSpine addr 0x1286600 size 0xa8 virtual false final false
inline void SolveSpine() ;

/// @brief Method SolveHead addr 0x12866a8 size 0xac virtual false final false
inline void SolveHead() ;

static inline ::RootMotion::FinalIK::InteractionLookAt* New_ctor() ;

/// @brief Method .ctor addr 0x1286754 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InteractionLookAt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionLookAt(InteractionLookAt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionLookAt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionLookAt(InteractionLookAt const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InteractionLookAt()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionLookAt, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionLookAt);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionLookAt*, "RootMotion.FinalIK", "InteractionLookAt");
