#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SolverManager)
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class SolverManager;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::SolverManager);
// Type: RootMotion::SolverManager
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12499))
// CS Name: ::RootMotion::SolverManager*
class CORDL_TYPE SolverManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field fixTransforms offset 0x18
 __declspec(property(get=__get_fixTransforms, put=__set_fixTransforms)) bool  fixTransforms;

/// @brief Field animator offset 0x20
 __declspec(property(get=__get_animator, put=__set_animator)) ::UnityEngine::Animator*  animator;

/// @brief Field legacy offset 0x28
 __declspec(property(get=__get_legacy, put=__set_legacy)) ::UnityEngine::Animation*  legacy;

/// @brief Field updateFrame offset 0x30
 __declspec(property(get=__get_updateFrame, put=__set_updateFrame)) bool  updateFrame;

/// @brief Field componentInitiated offset 0x31
 __declspec(property(get=__get_componentInitiated, put=__set_componentInitiated)) bool  componentInitiated;

/// @brief Field skipSolverUpdate offset 0x32
 __declspec(property(get=__get_skipSolverUpdate, put=__set_skipSolverUpdate)) bool  skipSolverUpdate;

 __declspec(property(get=get_animatePhysics)) bool  animatePhysics;

 __declspec(property(get=get_isAnimated)) bool  isAnimated;

constexpr void __set_fixTransforms(bool  value) ;

constexpr bool& __get_fixTransforms() ;

constexpr bool const& __get_fixTransforms() const;

constexpr void __set_animator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get_animator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get_animator() const;

constexpr void __set_legacy(::UnityEngine::Animation*  value) ;

constexpr ::UnityEngine::Animation* __get_legacy() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> __get_legacy() const;

constexpr void __set_updateFrame(bool  value) ;

constexpr bool& __get_updateFrame() ;

constexpr bool const& __get_updateFrame() const;

constexpr void __set_componentInitiated(bool  value) ;

constexpr bool& __get_componentInitiated() ;

constexpr bool const& __get_componentInitiated() const;

constexpr void __set_skipSolverUpdate(bool  value) ;

constexpr bool& __get_skipSolverUpdate() ;

constexpr bool const& __get_skipSolverUpdate() const;

/// @brief Method Disable addr 0x123f2a8 size 0x94 virtual false final false
inline void Disable() ;

/// @brief Method InitiateSolver addr 0x123f33c size 0x4 virtual true final false
inline void InitiateSolver() ;

/// @brief Method UpdateSolver addr 0x123f340 size 0x4 virtual true final false
inline void UpdateSolver() ;

/// @brief Method FixTransforms addr 0x123f344 size 0x4 virtual true final false
inline void FixTransforms() ;

/// @brief Method OnDisable addr 0x123f348 size 0x28 virtual false final false
inline void OnDisable() ;

/// @brief Method Start addr 0x123f3c0 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method get_animatePhysics addr 0x123f3c4 size 0xcc virtual false final false
inline bool get_animatePhysics() ;

/// @brief Method Initiate addr 0x123f370 size 0x50 virtual false final false
inline void Initiate() ;

/// @brief Method Update addr 0x123f648 size 0x3c virtual false final false
inline void Update() ;

/// @brief Method FindAnimatorRecursive addr 0x123f490 size 0x1b8 virtual false final false
inline void FindAnimatorRecursive(::UnityEngine::Transform*  t, bool  findInChildren) ;

/// @brief Method get_isAnimated addr 0x123f684 size 0x98 virtual false final false
inline bool get_isAnimated() ;

/// @brief Method FixedUpdate addr 0x123f71c size 0x4c virtual false final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x123f768 size 0x4c virtual false final false
inline void LateUpdate() ;

/// @brief Method UpdateSolverExternal addr 0x123f7b4 size 0x38 virtual false final false
inline void UpdateSolverExternal() ;

static inline ::RootMotion::SolverManager* New_ctor() ;

/// @brief Method .ctor addr 0x123f7ec size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SolverManager(SolverManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SolverManager(SolverManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SolverManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::SolverManager, 0x38>, "Size mismatch!");

} // namespace end def RootMotion
NEED_NO_BOX(::RootMotion::SolverManager);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::SolverManager*, "RootMotion", "SolverManager");
