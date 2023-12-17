#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleDissolve)
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class ObstacleControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleDissolve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleDissolve);
// Type: ::ObstacleDissolve
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4794))
// CS Name: ::ObstacleDissolve*
class CORDL_TYPE ObstacleDissolve : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _obstacleController offset 0x18
 __declspec(property(get=__get__obstacleController, put=__set__obstacleController)) ::GlobalNamespace::ObstacleControllerBase*  _obstacleController;

/// @brief Field _cutoutAnimateEffect offset 0x20
 __declspec(property(get=__get__cutoutAnimateEffect, put=__set__cutoutAnimateEffect)) ::GlobalNamespace::CutoutAnimateEffect*  _cutoutAnimateEffect;

constexpr void __set__obstacleController(::GlobalNamespace::ObstacleControllerBase*  value) ;

constexpr ::GlobalNamespace::ObstacleControllerBase* __get__obstacleController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleControllerBase*> __get__obstacleController() const;

constexpr void __set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect*  value) ;

constexpr ::GlobalNamespace::CutoutAnimateEffect* __get__cutoutAnimateEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> __get__cutoutAnimateEffect() const;

/// @brief Method Awake addr 0x238e2c0 size 0xec virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x238e3ac size 0x134 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleObstacleDidInitEvent addr 0x238e4e0 size 0x30 virtual false final false
inline void HandleObstacleDidInitEvent(::GlobalNamespace::ObstacleControllerBase*  obstacleController) ;

/// @brief Method HandleObcstacleDidStartDissolvingEvent addr 0x238e534 size 0x24 virtual false final false
inline void HandleObcstacleDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase*  obstacleController, float_t  duration) ;

static inline ::GlobalNamespace::ObstacleDissolve* New_ctor() ;

/// @brief Method .ctor addr 0x238e5ac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleDissolve(ObstacleDissolve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleDissolve(ObstacleDissolve const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleDissolve()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleDissolve, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleDissolve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleDissolve*, "", "ObstacleDissolve");
