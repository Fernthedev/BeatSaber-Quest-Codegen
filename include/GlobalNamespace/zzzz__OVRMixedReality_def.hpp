#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRMixedReality)
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class OVRComposition;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedReality;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedReality);
// Type: ::OVRMixedReality
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7651))
// CS Name: ::OVRMixedReality*
class CORDL_TYPE OVRMixedReality : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_useFakeExternalCamera(bool  value) ;

static inline bool getStaticF_useFakeExternalCamera() ;

static inline void setStaticF_fakeCameraFloorLevelPosition(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_fakeCameraFloorLevelPosition() ;

static inline void setStaticF_fakeCameraEyeLevelPosition(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_fakeCameraEyeLevelPosition() ;

static inline void setStaticF_fakeCameraRotation(::UnityEngine::Quaternion  value) ;

static inline ::UnityEngine::Quaternion getStaticF_fakeCameraRotation() ;

static inline void setStaticF_fakeCameraFov(float_t  value) ;

static inline float_t getStaticF_fakeCameraFov() ;

static inline void setStaticF_fakeCameraAspect(float_t  value) ;

static inline float_t getStaticF_fakeCameraAspect() ;

static inline void setStaticF_currentComposition(::GlobalNamespace::OVRComposition*  value) ;

static inline ::GlobalNamespace::OVRComposition* getStaticF_currentComposition() ;

/// @brief Method Update addr 0x2744d3c size 0x4e0 virtual false final false
static inline void Update(::UnityEngine::GameObject*  parentObject, ::UnityEngine::Camera*  mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration, ::GlobalNamespace::__OVRManager__TrackingOrigin  trackingOrigin) ;

/// @brief Method Cleanup addr 0x274521c size 0xe8 virtual false final false
static inline void Cleanup() ;

/// @brief Method RecenterPose addr 0x2745c04 size 0x94 virtual false final false
static inline void RecenterPose() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMixedReality(OVRMixedReality && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMixedReality(OVRMixedReality const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMixedReality()  = default;
public:


// Fields

// Static field useFakeExternalCamera

// Static field fakeCameraFloorLevelPosition

// Static field fakeCameraEyeLevelPosition

// Static field fakeCameraRotation

// Static field fakeCameraFov

// Static field fakeCameraAspect

// Static field currentComposition


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedReality, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedReality);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedReality*, "", "OVRMixedReality");
