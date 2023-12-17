#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerDrivenHandPosesSample)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class LineRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRControllerDrivenHandPosesSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerDrivenHandPosesSample);
// Type: ::OVRControllerDrivenHandPosesSample
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7537))
// CS Name: ::OVRControllerDrivenHandPosesSample*
class CORDL_TYPE OVRControllerDrivenHandPosesSample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field buttonOff offset 0x18
 __declspec(property(get=__get_buttonOff, put=__set_buttonOff)) ::UnityEngine::UI::Button*  buttonOff;

/// @brief Field buttonConforming offset 0x20
 __declspec(property(get=__get_buttonConforming, put=__set_buttonConforming)) ::UnityEngine::UI::Button*  buttonConforming;

/// @brief Field buttonNatural offset 0x28
 __declspec(property(get=__get_buttonNatural, put=__set_buttonNatural)) ::UnityEngine::UI::Button*  buttonNatural;

/// @brief Field leftLinePointer offset 0x30
 __declspec(property(get=__get_leftLinePointer, put=__set_leftLinePointer)) ::UnityEngine::LineRenderer*  leftLinePointer;

/// @brief Field rightLinePointer offset 0x38
 __declspec(property(get=__get_rightLinePointer, put=__set_rightLinePointer)) ::UnityEngine::LineRenderer*  rightLinePointer;

/// @brief Field cameraRig offset 0x40
 __declspec(property(get=__get_cameraRig, put=__set_cameraRig)) ::GlobalNamespace::OVRCameraRig*  cameraRig;

constexpr void __set_buttonOff(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_buttonOff() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_buttonOff() const;

constexpr void __set_buttonConforming(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_buttonConforming() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_buttonConforming() const;

constexpr void __set_buttonNatural(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_buttonNatural() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_buttonNatural() const;

constexpr void __set_leftLinePointer(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get_leftLinePointer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get_leftLinePointer() const;

constexpr void __set_rightLinePointer(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get_rightLinePointer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get_rightLinePointer() const;

constexpr void __set_cameraRig(::GlobalNamespace::OVRCameraRig*  value) ;

constexpr ::GlobalNamespace::OVRCameraRig* __get_cameraRig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> __get_cameraRig() const;

/// @brief Method Awake addr 0x271a944 size 0xdc virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x271ac98 size 0x4 virtual false final false
inline void OnDestroy() ;

/// @brief Method OnEnable addr 0x271ac9c size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x271aca0 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method Update addr 0x271aca4 size 0x4 virtual false final false
inline void Update() ;

/// @brief Method UpdateLineRenderer addr 0x271aca8 size 0x50 virtual false final false
inline void UpdateLineRenderer() ;

/// @brief Method UpdateLineRendererForHand addr 0x271acf8 size 0x274 virtual false final false
inline void UpdateLineRendererForHand(bool  isLeft) ;

/// @brief Method LateUpdate addr 0x271af6c size 0x4 virtual false final false
inline void LateUpdate() ;

/// @brief Method SetControllerDrivenHandPosesTypeToNone addr 0x271aa20 size 0xd0 virtual false final false
inline void SetControllerDrivenHandPosesTypeToNone() ;

/// @brief Method SetControllerDrivenHandPosesTypeToControllerConforming addr 0x271aaf0 size 0xd4 virtual false final false
inline void SetControllerDrivenHandPosesTypeToControllerConforming() ;

/// @brief Method SetControllerDrivenHandPosesTypeToNatural addr 0x271abc4 size 0xd4 virtual false final false
inline void SetControllerDrivenHandPosesTypeToNatural() ;

static inline ::GlobalNamespace::OVRControllerDrivenHandPosesSample* New_ctor() ;

/// @brief Method .ctor addr 0x271af70 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerDrivenHandPosesSample", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerDrivenHandPosesSample(OVRControllerDrivenHandPosesSample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerDrivenHandPosesSample", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerDrivenHandPosesSample(OVRControllerDrivenHandPosesSample const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRControllerDrivenHandPosesSample()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerDrivenHandPosesSample, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRControllerDrivenHandPosesSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerDrivenHandPosesSample*, "", "OVRControllerDrivenHandPosesSample");
