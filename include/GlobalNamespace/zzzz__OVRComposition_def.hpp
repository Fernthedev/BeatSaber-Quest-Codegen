#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRComposition)
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraExtrinsics;
}
namespace GlobalNamespace {
struct OVRPose;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRComposition);
// Type: ::OVRComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7504))
// CS Name: ::OVRComposition*
class CORDL_TYPE OVRComposition : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field cameraInTrackingSpace offset 0x10
 __declspec(property(get=__get_cameraInTrackingSpace, put=__set_cameraInTrackingSpace)) bool  cameraInTrackingSpace;

/// @brief Field cameraRig offset 0x18
 __declspec(property(get=__get_cameraRig, put=__set_cameraRig)) ::GlobalNamespace::OVRCameraRig*  cameraRig;

/// @brief Field usingLastAttachedNodePose offset 0x20
 __declspec(property(get=__get_usingLastAttachedNodePose, put=__set_usingLastAttachedNodePose)) bool  usingLastAttachedNodePose;

/// @brief Field lastAttachedNodePose offset 0x24
 __declspec(property(get=__get_lastAttachedNodePose, put=__set_lastAttachedNodePose)) ::GlobalNamespace::OVRPose  lastAttachedNodePose;

constexpr void __set_cameraInTrackingSpace(bool  value) ;

constexpr bool& __get_cameraInTrackingSpace() ;

constexpr bool const& __get_cameraInTrackingSpace() const;

constexpr void __set_cameraRig(::GlobalNamespace::OVRCameraRig*  value) ;

constexpr ::GlobalNamespace::OVRCameraRig* __get_cameraRig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> __get_cameraRig() const;

constexpr void __set_usingLastAttachedNodePose(bool  value) ;

constexpr bool& __get_usingLastAttachedNodePose() ;

constexpr bool const& __get_usingLastAttachedNodePose() const;

constexpr void __set_lastAttachedNodePose(::GlobalNamespace::OVRPose  value) ;

constexpr ::GlobalNamespace::OVRPose& __get_lastAttachedNodePose() ;

constexpr ::GlobalNamespace::OVRPose const& __get_lastAttachedNodePose() const;

static inline ::GlobalNamespace::OVRComposition* New_ctor(::UnityEngine::GameObject*  parentObject, ::UnityEngine::Camera*  mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration) ;

/// @brief Method .ctor addr 0x270ca9c size 0x34 virtual false final false
inline void _ctor(::UnityEngine::GameObject*  parentObject, ::UnityEngine::Camera*  mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration) ;

/// @brief Method CompositionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__OVRManager__CompositionMethod CompositionMethod() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Camera*  mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*  configuration, ::GlobalNamespace::__OVRManager__TrackingOrigin  trackingOrigin) ;

/// @brief Method Cleanup addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Cleanup() ;

/// @brief Method RecenterPose addr 0x270cc88 size 0x4 virtual true final false
inline void RecenterPose() ;

/// @brief Method RefreshCameraRig addr 0x270cad0 size 0x1b8 virtual false final false
inline void RefreshCameraRig(::UnityEngine::GameObject*  parentObject, ::UnityEngine::Camera*  mainCamera) ;

/// @brief Method ComputeCameraWorldSpacePose addr 0x270cc8c size 0x68 virtual false final false
inline ::GlobalNamespace::OVRPose ComputeCameraWorldSpacePose(::GlobalNamespace::__OVRPlugin__CameraExtrinsics  extrinsics, ::UnityEngine::Camera*  mainCamera) ;

/// @brief Method ComputeCameraTrackingSpacePose addr 0x270ccf4 size 0x288 virtual false final false
inline ::GlobalNamespace::OVRPose ComputeCameraTrackingSpacePose(::GlobalNamespace::__OVRPlugin__CameraExtrinsics  extrinsics) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRComposition(OVRComposition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRComposition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRComposition(OVRComposition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRComposition()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRComposition, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRComposition*, "", "OVRComposition");
