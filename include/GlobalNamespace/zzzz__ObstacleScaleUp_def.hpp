#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleScaleUp)
namespace GlobalNamespace {
class ObstacleControllerBase;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class ObstacleController;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleScaleUp;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleScaleUp);
// Type: ::ObstacleScaleUp
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4796))
// CS Name: ::ObstacleScaleUp*
class CORDL_TYPE ObstacleScaleUp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fullScalePart offset 0x18
 __declspec(property(get=__get__fullScalePart, put=__set__fullScalePart)) float_t  _fullScalePart;

/// @brief Field _targetTransform offset 0x20
 __declspec(property(get=__get__targetTransform, put=__set__targetTransform)) ::UnityEngine::Transform*  _targetTransform;

/// @brief Field _obstacleController offset 0x28
 __declspec(property(get=__get__obstacleController, put=__set__obstacleController)) ::GlobalNamespace::ObstacleController*  _obstacleController;

constexpr void __set__fullScalePart(float_t  value) ;

constexpr float_t& __get__fullScalePart() ;

constexpr float_t const& __get__fullScalePart() const;

constexpr void __set__targetTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__targetTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__targetTransform() const;

constexpr void __set__obstacleController(::GlobalNamespace::ObstacleController*  value) ;

constexpr ::GlobalNamespace::ObstacleController* __get__obstacleController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> __get__obstacleController() const;

/// @brief Method Awake addr 0x238e798 size 0x94 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x238e948 size 0x138 virtual false final false
inline void OnDestroy() ;

/// @brief Method UpdateScale addr 0x238e82c size 0x11c virtual false final false
inline void UpdateScale(float_t  progress) ;

/// @brief Method HandleObstacleControllerDidUpdateProgress addr 0x238ea80 size 0x28 virtual false final false
inline void HandleObstacleControllerDidUpdateProgress(::GlobalNamespace::ObstacleController*  obstacleController, float_t  time) ;

/// @brief Method HandleObstacleControllerDidInit addr 0x238eaa8 size 0xd0 virtual false final false
inline void HandleObstacleControllerDidInit(::GlobalNamespace::ObstacleControllerBase*  obstacleController) ;

static inline ::GlobalNamespace::ObstacleScaleUp* New_ctor() ;

/// @brief Method .ctor addr 0x238eb78 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleScaleUp(ObstacleScaleUp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleScaleUp(ObstacleScaleUp const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleScaleUp()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleScaleUp, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleScaleUp);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleScaleUp*, "", "ObstacleScaleUp");
