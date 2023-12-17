#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGazePointer)
namespace GlobalNamespace {
class OVRProgressIndicator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGazePointer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGazePointer);
// Type: ::OVRGazePointer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8086))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8108))
// CS Name: ::OVRGazePointer*
class CORDL_TYPE OVRGazePointer : public ::GlobalNamespace::OVRCursor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::OVRCursor)]{};

/// @brief Field gazeIcon offset 0x18
 __declspec(property(get=__get_gazeIcon, put=__set_gazeIcon)) ::UnityEngine::Transform*  gazeIcon;

/// @brief Field hideByDefault offset 0x20
 __declspec(property(get=__get_hideByDefault, put=__set_hideByDefault)) bool  hideByDefault;

/// @brief Field showTimeoutPeriod offset 0x24
 __declspec(property(get=__get_showTimeoutPeriod, put=__set_showTimeoutPeriod)) float_t  showTimeoutPeriod;

/// @brief Field hideTimeoutPeriod offset 0x28
 __declspec(property(get=__get_hideTimeoutPeriod, put=__set_hideTimeoutPeriod)) float_t  hideTimeoutPeriod;

/// @brief Field dimOnHideRequest offset 0x2c
 __declspec(property(get=__get_dimOnHideRequest, put=__set_dimOnHideRequest)) bool  dimOnHideRequest;

/// @brief Field depthScaleMultiplier offset 0x30
 __declspec(property(get=__get_depthScaleMultiplier, put=__set_depthScaleMultiplier)) float_t  depthScaleMultiplier;

/// @brief Field matchNormalOnPhysicsColliders offset 0x34
 __declspec(property(get=__get_matchNormalOnPhysicsColliders, put=__set_matchNormalOnPhysicsColliders)) bool  matchNormalOnPhysicsColliders;

/// @brief Field rayTransform offset 0x38
 __declspec(property(get=__get_rayTransform, put=__set_rayTransform)) ::UnityEngine::Transform*  rayTransform;

/// @brief Field <hidden>k__BackingField offset 0x40
 __declspec(property(get=__get__hidden_k__BackingField, put=__set__hidden_k__BackingField)) bool  _hidden_k__BackingField;

/// @brief Field <currentScale>k__BackingField offset 0x44
 __declspec(property(get=__get__currentScale_k__BackingField, put=__set__currentScale_k__BackingField)) float_t  _currentScale_k__BackingField;

/// @brief Field depth offset 0x48
 __declspec(property(get=__get_depth, put=__set_depth)) float_t  depth;

/// @brief Field hideUntilTime offset 0x4c
 __declspec(property(get=__get_hideUntilTime, put=__set_hideUntilTime)) float_t  hideUntilTime;

/// @brief Field positionSetsThisFrame offset 0x50
 __declspec(property(get=__get_positionSetsThisFrame, put=__set_positionSetsThisFrame)) int32_t  positionSetsThisFrame;

/// @brief Field lastShowRequestTime offset 0x54
 __declspec(property(get=__get_lastShowRequestTime, put=__set_lastShowRequestTime)) float_t  lastShowRequestTime;

/// @brief Field lastHideRequestTime offset 0x58
 __declspec(property(get=__get_lastHideRequestTime, put=__set_lastHideRequestTime)) float_t  lastHideRequestTime;

/// @brief Field progressIndicator offset 0x60
 __declspec(property(get=__get_progressIndicator, put=__set_progressIndicator)) ::GlobalNamespace::OVRProgressIndicator*  progressIndicator;

 __declspec(property(get=get_hidden, put=set_hidden)) bool  hidden;

 __declspec(property(get=get_currentScale, put=set_currentScale)) float_t  currentScale;

 __declspec(property(get=get_visibilityStrength)) float_t  visibilityStrength;

 __declspec(property(get=get_SelectionProgress, put=set_SelectionProgress)) float_t  SelectionProgress;

constexpr void __set_gazeIcon(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_gazeIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_gazeIcon() const;

constexpr void __set_hideByDefault(bool  value) ;

constexpr bool& __get_hideByDefault() ;

constexpr bool const& __get_hideByDefault() const;

constexpr void __set_showTimeoutPeriod(float_t  value) ;

constexpr float_t& __get_showTimeoutPeriod() ;

constexpr float_t const& __get_showTimeoutPeriod() const;

constexpr void __set_hideTimeoutPeriod(float_t  value) ;

constexpr float_t& __get_hideTimeoutPeriod() ;

constexpr float_t const& __get_hideTimeoutPeriod() const;

constexpr void __set_dimOnHideRequest(bool  value) ;

constexpr bool& __get_dimOnHideRequest() ;

constexpr bool const& __get_dimOnHideRequest() const;

constexpr void __set_depthScaleMultiplier(float_t  value) ;

constexpr float_t& __get_depthScaleMultiplier() ;

constexpr float_t const& __get_depthScaleMultiplier() const;

constexpr void __set_matchNormalOnPhysicsColliders(bool  value) ;

constexpr bool& __get_matchNormalOnPhysicsColliders() ;

constexpr bool const& __get_matchNormalOnPhysicsColliders() const;

constexpr void __set_rayTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_rayTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_rayTransform() const;

constexpr void __set__hidden_k__BackingField(bool  value) ;

constexpr bool& __get__hidden_k__BackingField() ;

constexpr bool const& __get__hidden_k__BackingField() const;

constexpr void __set__currentScale_k__BackingField(float_t  value) ;

constexpr float_t& __get__currentScale_k__BackingField() ;

constexpr float_t const& __get__currentScale_k__BackingField() const;

constexpr void __set_depth(float_t  value) ;

constexpr float_t& __get_depth() ;

constexpr float_t const& __get_depth() const;

constexpr void __set_hideUntilTime(float_t  value) ;

constexpr float_t& __get_hideUntilTime() ;

constexpr float_t const& __get_hideUntilTime() const;

constexpr void __set_positionSetsThisFrame(int32_t  value) ;

constexpr int32_t& __get_positionSetsThisFrame() ;

constexpr int32_t const& __get_positionSetsThisFrame() const;

constexpr void __set_lastShowRequestTime(float_t  value) ;

constexpr float_t& __get_lastShowRequestTime() ;

constexpr float_t const& __get_lastShowRequestTime() const;

constexpr void __set_lastHideRequestTime(float_t  value) ;

constexpr float_t& __get_lastHideRequestTime() ;

constexpr float_t const& __get_lastHideRequestTime() const;

constexpr void __set_progressIndicator(::GlobalNamespace::OVRProgressIndicator*  value) ;

constexpr ::GlobalNamespace::OVRProgressIndicator* __get_progressIndicator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRProgressIndicator*> __get_progressIndicator() const;

static inline void setStaticF__instance(::GlobalNamespace::OVRGazePointer*  value) ;

static inline ::GlobalNamespace::OVRGazePointer* getStaticF__instance() ;

/// @brief Method get_hidden addr 0x27abb04 size 0x8 virtual false final false
inline bool get_hidden() ;

/// @brief Method set_hidden addr 0x27abb0c size 0xc virtual false final false
inline void set_hidden(bool  value) ;

/// @brief Method get_currentScale addr 0x27abb18 size 0x8 virtual false final false
inline float_t get_currentScale() ;

/// @brief Method set_currentScale addr 0x27abb20 size 0x8 virtual false final false
inline void set_currentScale(float_t  value) ;

/// @brief Method get_instance addr 0x27abb28 size 0x214 virtual false final false
static inline ::GlobalNamespace::OVRGazePointer* get_instance() ;

/// @brief Method get_visibilityStrength addr 0x27abd3c size 0x9c virtual false final false
inline float_t get_visibilityStrength() ;

/// @brief Method get_SelectionProgress addr 0x27abdd8 size 0x78 virtual false final false
inline float_t get_SelectionProgress() ;

/// @brief Method set_SelectionProgress addr 0x27abe50 size 0x80 virtual false final false
inline void set_SelectionProgress(float_t  value) ;

/// @brief Method Awake addr 0x27abed0 size 0x170 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x27ac040 size 0x194 virtual false final false
inline void Update() ;

/// @brief Method SetCursorStartDest addr 0x27ac408 size 0x1e0 virtual true final false
inline void SetCursorStartDest(::UnityEngine::Vector3  _, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal) ;

/// @brief Method SetCursorRay addr 0x27ac608 size 0x4 virtual true final false
inline void SetCursorRay(::UnityEngine::Transform*  ray) ;

/// @brief Method LateUpdate addr 0x27ac60c size 0x178 virtual false final false
inline void LateUpdate() ;

/// @brief Method RequestHide addr 0x27ac784 size 0x2c virtual false final false
inline void RequestHide() ;

/// @brief Method RequestShow addr 0x27ac5e8 size 0x20 virtual false final false
inline void RequestShow() ;

/// @brief Method Hide addr 0x27ac1d4 size 0x11c virtual false final false
inline void Hide() ;

/// @brief Method Show addr 0x27ac2f0 size 0x118 virtual false final false
inline void Show() ;

static inline ::GlobalNamespace::OVRGazePointer* New_ctor() ;

/// @brief Method .ctor addr 0x27ac7b0 size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGazePointer(OVRGazePointer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGazePointer(OVRGazePointer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGazePointer()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGazePointer, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGazePointer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGazePointer*, "", "OVRGazePointer");
