#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVREyeGaze)
namespace GlobalNamespace {
struct __OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
struct __OVREyeGaze__EyeTrackingMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazesState;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVREyeGaze__EyeId;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVREyeGaze__EyeId;
}
namespace GlobalNamespace {
struct __OVREyeGaze__EyeTrackingMode;
}
namespace GlobalNamespace {
class OVREyeGaze;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVREyeGaze__EyeId);
MARK_VAL_T(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode);
MARK_REF_PTR_T(::GlobalNamespace::OVREyeGaze);
// Type: ::EyeId
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7543))
// CS Name: ::OVREyeGaze::EyeId
struct CORDL_TYPE __OVREyeGaze__EyeId : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVREyeGaze__EyeId_Unwrapped
enum struct ____OVREyeGaze__EyeId_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Left value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVREyeGaze__EyeId const Left;

/// @brief Field Right value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVREyeGaze__EyeId const Right;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVREyeGaze__EyeId_Unwrapped () const noexcept {
return std::bit_cast<____OVREyeGaze__EyeId_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVREyeGaze__EyeId(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVREyeGaze__EyeId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVREyeGaze__EyeId()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVREyeGaze__EyeId, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EyeTrackingMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7544))
// CS Name: ::OVREyeGaze::EyeTrackingMode
struct CORDL_TYPE __OVREyeGaze__EyeTrackingMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVREyeGaze__EyeTrackingMode_Unwrapped
enum struct ____OVREyeGaze__EyeTrackingMode_Unwrapped : int32_t {
__E_HeadSpace = static_cast<int32_t>(0x0),
__E_WorldSpace = static_cast<int32_t>(0x1),
__E_TrackingSpace = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HeadSpace value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const HeadSpace;

/// @brief Field WorldSpace value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const WorldSpace;

/// @brief Field TrackingSpace value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const TrackingSpace;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVREyeGaze__EyeTrackingMode_Unwrapped () const noexcept {
return std::bit_cast<____OVREyeGaze__EyeTrackingMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVREyeGaze__EyeTrackingMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVREyeGaze__EyeTrackingMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVREyeGaze__EyeTrackingMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVREyeGaze
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7679)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7545))
// CS Name: ::OVREyeGaze*
class CORDL_TYPE OVREyeGaze : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EyeTrackingMode = ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode;

using EyeId = ::GlobalNamespace::__OVREyeGaze__EyeId;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field EyeTrackingPermission value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRPermissionsRequester__Permission const EyeTrackingPermission;

/// @brief Field Eye offset 0x18
 __declspec(property(get=__get_Eye, put=__set_Eye)) ::GlobalNamespace::__OVREyeGaze__EyeId  Eye;

/// @brief Field <Confidence>k__BackingField offset 0x1c
 __declspec(property(get=__get__Confidence_k__BackingField, put=__set__Confidence_k__BackingField)) float_t  _Confidence_k__BackingField;

/// @brief Field ConfidenceThreshold offset 0x20
 __declspec(property(get=__get_ConfidenceThreshold, put=__set_ConfidenceThreshold)) float_t  ConfidenceThreshold;

/// @brief Field ApplyPosition offset 0x24
 __declspec(property(get=__get_ApplyPosition, put=__set_ApplyPosition)) bool  ApplyPosition;

/// @brief Field ApplyRotation offset 0x25
 __declspec(property(get=__get_ApplyRotation, put=__set_ApplyRotation)) bool  ApplyRotation;

/// @brief Field _currentEyeGazesState offset 0x28
 __declspec(property(get=__get__currentEyeGazesState, put=__set__currentEyeGazesState)) ::GlobalNamespace::__OVRPlugin__EyeGazesState  _currentEyeGazesState;

/// @brief Field ReferenceFrame offset 0x38
 __declspec(property(get=__get_ReferenceFrame, put=__set_ReferenceFrame)) ::UnityEngine::Transform*  ReferenceFrame;

/// @brief Field TrackingMode offset 0x40
 __declspec(property(get=__get_TrackingMode, put=__set_TrackingMode)) ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  TrackingMode;

/// @brief Field _initialRotationOffset offset 0x44
 __declspec(property(get=__get__initialRotationOffset, put=__set__initialRotationOffset)) ::UnityEngine::Quaternion  _initialRotationOffset;

/// @brief Field _viewTransform offset 0x58
 __declspec(property(get=__get__viewTransform, put=__set__viewTransform)) ::UnityEngine::Transform*  _viewTransform;

/// @brief Field _onPermissionGranted offset 0x60
 __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted)) ::System::Action_1<::StringW>*  _onPermissionGranted;

 __declspec(property(get=get_EyeTrackingEnabled)) bool  EyeTrackingEnabled;

 __declspec(property(get=get_Confidence, put=set_Confidence)) float_t  Confidence;

constexpr void __set_Eye(::GlobalNamespace::__OVREyeGaze__EyeId  value) ;

constexpr ::GlobalNamespace::__OVREyeGaze__EyeId& __get_Eye() ;

constexpr ::GlobalNamespace::__OVREyeGaze__EyeId const& __get_Eye() const;

constexpr void __set__Confidence_k__BackingField(float_t  value) ;

constexpr float_t& __get__Confidence_k__BackingField() ;

constexpr float_t const& __get__Confidence_k__BackingField() const;

constexpr void __set_ConfidenceThreshold(float_t  value) ;

constexpr float_t& __get_ConfidenceThreshold() ;

constexpr float_t const& __get_ConfidenceThreshold() const;

constexpr void __set_ApplyPosition(bool  value) ;

constexpr bool& __get_ApplyPosition() ;

constexpr bool const& __get_ApplyPosition() const;

constexpr void __set_ApplyRotation(bool  value) ;

constexpr bool& __get_ApplyRotation() ;

constexpr bool const& __get_ApplyRotation() const;

constexpr void __set__currentEyeGazesState(::GlobalNamespace::__OVRPlugin__EyeGazesState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState& __get__currentEyeGazesState() ;

constexpr ::GlobalNamespace::__OVRPlugin__EyeGazesState const& __get__currentEyeGazesState() const;

constexpr void __set_ReferenceFrame(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_ReferenceFrame() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_ReferenceFrame() const;

constexpr void __set_TrackingMode(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode  value) ;

constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode& __get_TrackingMode() ;

constexpr ::GlobalNamespace::__OVREyeGaze__EyeTrackingMode const& __get_TrackingMode() const;

constexpr void __set__initialRotationOffset(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__initialRotationOffset() ;

constexpr ::UnityEngine::Quaternion const& __get__initialRotationOffset() const;

constexpr void __set__viewTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__viewTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__viewTransform() const;

constexpr void __set__onPermissionGranted(::System::Action_1<::StringW>*  value) ;

constexpr ::System::Action_1<::StringW>* __get__onPermissionGranted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> __get__onPermissionGranted() const;

static inline void setStaticF__trackingInstanceCount(int32_t  value) ;

static inline int32_t getStaticF__trackingInstanceCount() ;

/// @brief Method get_EyeTrackingEnabled addr 0x271c408 size 0x50 virtual false final false
inline bool get_EyeTrackingEnabled() ;

/// @brief Method get_Confidence addr 0x271c458 size 0x8 virtual false final false
inline float_t get_Confidence() ;

/// @brief Method set_Confidence addr 0x271c460 size 0x8 virtual false final false
inline void set_Confidence(float_t  value) ;

/// @brief Method Awake addr 0x271c468 size 0x7c virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x271c4e4 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x271c76c size 0x78 virtual false final false
inline void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x271c8bc size 0x60 virtual false final false
inline void OnPermissionGranted(::StringW  permissionId) ;

/// @brief Method StartEyeTracking addr 0x271c7e4 size 0xd8 virtual false final false
inline bool StartEyeTracking() ;

/// @brief Method OnDisable addr 0x271c91c size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x271c9a4 size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x271c9b0 size 0x200 virtual false final false
inline void Update() ;

/// @brief Method CalculateEyeRotation addr 0x271cbb0 size 0x1c0 virtual false final false
inline ::UnityEngine::Quaternion CalculateEyeRotation(::UnityEngine::Quaternion  eyeRotation) ;

/// @brief Method PrepareHeadDirection addr 0x271c4e8 size 0x284 virtual false final false
inline void PrepareHeadDirection() ;

static inline ::GlobalNamespace::OVREyeGaze* New_ctor() ;

/// @brief Method .ctor addr 0x271cd70 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVREyeGaze(OVREyeGaze && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVREyeGaze(OVREyeGaze const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVREyeGaze()  = default;
public:


// Fields

// Static field _trackingInstanceCount


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVREyeGaze, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVREyeGaze__EyeId, "", "OVREyeGaze/EyeId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVREyeGaze__EyeTrackingMode, "", "OVREyeGaze/EyeTrackingMode");
NEED_NO_BOX(::GlobalNamespace::OVREyeGaze);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVREyeGaze*, "", "OVREyeGaze");
