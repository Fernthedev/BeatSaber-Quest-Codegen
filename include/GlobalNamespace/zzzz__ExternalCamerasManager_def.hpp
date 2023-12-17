#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ExternalCamerasManager)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OculusMRCManager;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class ExternalCamerasManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExternalCamerasManager);
// Type: ::ExternalCamerasManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15281))
// CS Name: ::ExternalCamerasManager*
class CORDL_TYPE ExternalCamerasManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _oculusMRCManager offset 0x18
 __declspec(property(get=__get__oculusMRCManager, put=__set__oculusMRCManager)) ::GlobalNamespace::OculusMRCManager*  _oculusMRCManager;

/// @brief Field _mrcBackgroundCameraPrefab offset 0x20
 __declspec(property(get=__get__mrcBackgroundCameraPrefab, put=__set__mrcBackgroundCameraPrefab)) ::UnityEngine::Camera*  _mrcBackgroundCameraPrefab;

/// @brief Field _mrcForegroundCameraPrefab offset 0x28
 __declspec(property(get=__get__mrcForegroundCameraPrefab, put=__set__mrcForegroundCameraPrefab)) ::UnityEngine::Camera*  _mrcForegroundCameraPrefab;

constexpr void __set__oculusMRCManager(::GlobalNamespace::OculusMRCManager*  value) ;

constexpr ::GlobalNamespace::OculusMRCManager* __get__oculusMRCManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusMRCManager*> __get__oculusMRCManager() const;

constexpr void __set__mrcBackgroundCameraPrefab(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__mrcBackgroundCameraPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__mrcBackgroundCameraPrefab() const;

constexpr void __set__mrcForegroundCameraPrefab(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__mrcForegroundCameraPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__mrcForegroundCameraPrefab() const;

/// @brief Method OnEnable addr 0x2807498 size 0xcc virtual false final false
inline void OnEnable() ;

/// @brief Method InstantiateMixedRealityBackgroundCameraGameObject addr 0x2807564 size 0x80 virtual false final false
inline ::UnityEngine::GameObject* InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject*  mainCameraGameObject) ;

/// @brief Method InstantiateMixedRealityForegroundCameraGameObject addr 0x28075e4 size 0x80 virtual false final false
inline ::UnityEngine::GameObject* InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject*  mainCameraGameObject) ;

static inline ::GlobalNamespace::ExternalCamerasManager* New_ctor() ;

/// @brief Method .ctor addr 0x2807664 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalCamerasManager(ExternalCamerasManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalCamerasManager(ExternalCamerasManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExternalCamerasManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExternalCamerasManager, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExternalCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
