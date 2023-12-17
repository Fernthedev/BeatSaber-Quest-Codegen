#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRSceneSampleController)
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGridCube;
}
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
class OVRPlayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneSampleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneSampleController);
// Type: ::OVRSceneSampleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8163))
// CS Name: ::OVRSceneSampleController*
class CORDL_TYPE OVRSceneSampleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field quitKey offset 0x18
 __declspec(property(get=__get_quitKey, put=__set_quitKey)) ::UnityEngine::KeyCode  quitKey;

/// @brief Field fadeInTexture offset 0x20
 __declspec(property(get=__get_fadeInTexture, put=__set_fadeInTexture)) ::UnityEngine::Texture*  fadeInTexture;

/// @brief Field speedRotationIncrement offset 0x28
 __declspec(property(get=__get_speedRotationIncrement, put=__set_speedRotationIncrement)) float_t  speedRotationIncrement;

/// @brief Field playerController offset 0x30
 __declspec(property(get=__get_playerController, put=__set_playerController)) ::GlobalNamespace::OVRPlayerController*  playerController;

/// @brief Field cameraController offset 0x38
 __declspec(property(get=__get_cameraController, put=__set_cameraController)) ::GlobalNamespace::OVRCameraRig*  cameraController;

/// @brief Field layerName offset 0x40
 __declspec(property(get=__get_layerName, put=__set_layerName)) ::StringW  layerName;

/// @brief Field visionMode offset 0x48
 __declspec(property(get=__get_visionMode, put=__set_visionMode)) bool  visionMode;

/// @brief Field gridCube offset 0x50
 __declspec(property(get=__get_gridCube, put=__set_gridCube)) ::GlobalNamespace::OVRGridCube*  gridCube;

constexpr void __set_quitKey(::UnityEngine::KeyCode  value) ;

constexpr ::UnityEngine::KeyCode& __get_quitKey() ;

constexpr ::UnityEngine::KeyCode const& __get_quitKey() const;

constexpr void __set_fadeInTexture(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_fadeInTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_fadeInTexture() const;

constexpr void __set_speedRotationIncrement(float_t  value) ;

constexpr float_t& __get_speedRotationIncrement() ;

constexpr float_t const& __get_speedRotationIncrement() const;

constexpr void __set_playerController(::GlobalNamespace::OVRPlayerController*  value) ;

constexpr ::GlobalNamespace::OVRPlayerController* __get_playerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPlayerController*> __get_playerController() const;

constexpr void __set_cameraController(::GlobalNamespace::OVRCameraRig*  value) ;

constexpr ::GlobalNamespace::OVRCameraRig* __get_cameraController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> __get_cameraController() const;

constexpr void __set_layerName(::StringW  value) ;

constexpr ::StringW& __get_layerName() ;

constexpr ::StringW const& __get_layerName() const;

constexpr void __set_visionMode(bool  value) ;

constexpr bool& __get_visionMode() ;

constexpr bool const& __get_visionMode() const;

constexpr void __set_gridCube(::GlobalNamespace::OVRGridCube*  value) ;

constexpr ::GlobalNamespace::OVRGridCube* __get_gridCube() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGridCube*> __get_gridCube() const;

/// @brief Method Awake addr 0x27bb7dc size 0x194 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x27bb970 size 0xcc virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27bba3c size 0xd4 virtual false final false
inline void Update() ;

/// @brief Method UpdateVisionMode addr 0x27bbbc0 size 0xbc virtual false final false
inline void UpdateVisionMode() ;

/// @brief Method UpdateSpeedAndRotationScaleMultiplier addr 0x27bbc7c size 0xc4 virtual false final false
inline void UpdateSpeedAndRotationScaleMultiplier() ;

/// @brief Method UpdateRecenterPose addr 0x27bbb10 size 0xb0 virtual false final false
inline void UpdateRecenterPose() ;

static inline ::GlobalNamespace::OVRSceneSampleController* New_ctor() ;

/// @brief Method .ctor addr 0x27bbd40 size 0x106c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneSampleController(OVRSceneSampleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneSampleController(OVRSceneSampleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSceneSampleController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneSampleController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
