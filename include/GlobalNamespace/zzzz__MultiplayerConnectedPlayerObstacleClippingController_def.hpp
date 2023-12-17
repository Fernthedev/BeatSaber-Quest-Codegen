#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerObstacleClippingController)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
// Type: ::MultiplayerConnectedPlayerObstacleClippingController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5140))
// CS Name: ::MultiplayerConnectedPlayerObstacleClippingController*
class CORDL_TYPE MultiplayerConnectedPlayerObstacleClippingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _materialPropertyBlockControllers offset 0x18
 __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  _materialPropertyBlockControllers;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers() ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

static inline void setStaticF__clippingPlanePositionID(int32_t  value) ;

static inline int32_t getStaticF__clippingPlanePositionID() ;

static inline void setStaticF__clippingPlaneNormalID(int32_t  value) ;

static inline int32_t getStaticF__clippingPlaneNormalID() ;

/// @brief Method SetClippingParams addr 0x23d7a5c size 0x14c virtual false final false
inline void SetClippingParams(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* New_ctor() ;

/// @brief Method .ctor addr 0x23d7ba8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerObstacleClippingController()  = default;
public:


// Fields

// Static field _clippingPlanePositionID

// Static field _clippingPlaneNormalID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*, "", "MultiplayerConnectedPlayerObstacleClippingController");
