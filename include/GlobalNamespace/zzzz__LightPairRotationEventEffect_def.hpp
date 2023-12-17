#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightPairRotationEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class __LightPairRotationEventEffect__RotationData;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class LightPairRotationEventEffect;
}
namespace GlobalNamespace {
class __LightPairRotationEventEffect__RotationData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightPairRotationEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__LightPairRotationEventEffect__RotationData);
// Type: ::RotationData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4949))
// CS Name: ::LightPairRotationEventEffect::RotationData*
class CORDL_TYPE __LightPairRotationEventEffect__RotationData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field enabled offset 0x10
 __declspec(property(get=__get_enabled, put=__set_enabled)) bool  enabled;

/// @brief Field rotationSpeed offset 0x14
 __declspec(property(get=__get_rotationSpeed, put=__set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field startRotation offset 0x18
 __declspec(property(get=__get_startRotation, put=__set_startRotation)) ::UnityEngine::Quaternion  startRotation;

/// @brief Field transform offset 0x28
 __declspec(property(get=__get_transform, put=__set_transform)) ::UnityEngine::Transform*  transform;

/// @brief Field startRotationAngle offset 0x30
 __declspec(property(get=__get_startRotationAngle, put=__set_startRotationAngle)) float_t  startRotationAngle;

/// @brief Field rotationAngle offset 0x34
 __declspec(property(get=__get_rotationAngle, put=__set_rotationAngle)) float_t  rotationAngle;

constexpr void __set_enabled(bool  value) ;

constexpr bool& __get_enabled() ;

constexpr bool const& __get_enabled() const;

constexpr void __set_rotationSpeed(float_t  value) ;

constexpr float_t& __get_rotationSpeed() ;

constexpr float_t const& __get_rotationSpeed() const;

constexpr void __set_startRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_startRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_startRotation() const;

constexpr void __set_transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_transform() const;

constexpr void __set_startRotationAngle(float_t  value) ;

constexpr float_t& __get_startRotationAngle() ;

constexpr float_t const& __get_startRotationAngle() const;

constexpr void __set_rotationAngle(float_t  value) ;

constexpr float_t& __get_rotationAngle() ;

constexpr float_t const& __get_rotationAngle() const;

static inline ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* New_ctor() ;

/// @brief Method .ctor addr 0x23ac504 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__LightPairRotationEventEffect__RotationData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LightPairRotationEventEffect__RotationData(__LightPairRotationEventEffect__RotationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LightPairRotationEventEffect__RotationData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LightPairRotationEventEffect__RotationData(__LightPairRotationEventEffect__RotationData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LightPairRotationEventEffect__RotationData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightPairRotationEventEffect__RotationData, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LightPairRotationEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4950))
// CS Name: ::LightPairRotationEventEffect*
class CORDL_TYPE LightPairRotationEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationData = ::GlobalNamespace::__LightPairRotationEventEffect__RotationData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kSpeedMultiplier offset 0x0
static constexpr float_t  kSpeedMultiplier{20.0};

/// @brief Field _eventL offset 0x18
 __declspec(property(get=__get__eventL, put=__set__eventL)) ::GlobalNamespace::BasicBeatmapEventType  _eventL;

/// @brief Field _eventR offset 0x1c
 __declspec(property(get=__get__eventR, put=__set__eventR)) ::GlobalNamespace::BasicBeatmapEventType  _eventR;

/// @brief Field _switchOverrideRandomValuesEvent offset 0x20
 __declspec(property(get=__get__switchOverrideRandomValuesEvent, put=__set__switchOverrideRandomValuesEvent)) ::GlobalNamespace::BasicBeatmapEventType  _switchOverrideRandomValuesEvent;

/// @brief Field _rotationVector offset 0x24
 __declspec(property(get=__get__rotationVector, put=__set__rotationVector)) ::UnityEngine::Vector3  _rotationVector;

/// @brief Field _overrideRandomValues offset 0x30
 __declspec(property(get=__get__overrideRandomValues, put=__set__overrideRandomValues)) bool  _overrideRandomValues;

/// @brief Field _useZPositionForAngleOffset offset 0x31
 __declspec(property(get=__get__useZPositionForAngleOffset, put=__set__useZPositionForAngleOffset)) bool  _useZPositionForAngleOffset;

/// @brief Field _zPositionAngleOffsetScale offset 0x34
 __declspec(property(get=__get__zPositionAngleOffsetScale, put=__set__zPositionAngleOffsetScale)) float_t  _zPositionAngleOffsetScale;

/// @brief Field _startRotation offset 0x38
 __declspec(property(get=__get__startRotation, put=__set__startRotation)) float_t  _startRotation;

/// @brief Field _transformL offset 0x40
 __declspec(property(get=__get__transformL, put=__set__transformL)) ::UnityEngine::Transform*  _transformL;

/// @brief Field _transformR offset 0x48
 __declspec(property(get=__get__transformR, put=__set__transformR)) ::UnityEngine::Transform*  _transformR;

/// @brief Field _beatmapCallbacksController offset 0x50
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _audioTimeSource offset 0x58
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _rotationDataL offset 0x60
 __declspec(property(get=__get__rotationDataL, put=__set__rotationDataL)) ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  _rotationDataL;

/// @brief Field _rotationDataR offset 0x68
 __declspec(property(get=__get__rotationDataR, put=__set__rotationDataR)) ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  _rotationDataR;

/// @brief Field _randomGenerationFrameNum offset 0x70
 __declspec(property(get=__get__randomGenerationFrameNum, put=__set__randomGenerationFrameNum)) int32_t  _randomGenerationFrameNum;

/// @brief Field _randomStartRotation offset 0x74
 __declspec(property(get=__get__randomStartRotation, put=__set__randomStartRotation)) float_t  _randomStartRotation;

/// @brief Field _randomDirection offset 0x78
 __declspec(property(get=__get__randomDirection, put=__set__randomDirection)) float_t  _randomDirection;

/// @brief Field _beatmapDataCallbackWrapper offset 0x80
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__eventL(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__eventL() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__eventL() const;

constexpr void __set__eventR(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__eventR() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__eventR() const;

constexpr void __set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__switchOverrideRandomValuesEvent() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__switchOverrideRandomValuesEvent() const;

constexpr void __set__rotationVector(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rotationVector() ;

constexpr ::UnityEngine::Vector3 const& __get__rotationVector() const;

constexpr void __set__overrideRandomValues(bool  value) ;

constexpr bool& __get__overrideRandomValues() ;

constexpr bool const& __get__overrideRandomValues() const;

constexpr void __set__useZPositionForAngleOffset(bool  value) ;

constexpr bool& __get__useZPositionForAngleOffset() ;

constexpr bool const& __get__useZPositionForAngleOffset() const;

constexpr void __set__zPositionAngleOffsetScale(float_t  value) ;

constexpr float_t& __get__zPositionAngleOffsetScale() ;

constexpr float_t const& __get__zPositionAngleOffsetScale() const;

constexpr void __set__startRotation(float_t  value) ;

constexpr float_t& __get__startRotation() ;

constexpr float_t const& __get__startRotation() const;

constexpr void __set__transformL(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transformL() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transformL() const;

constexpr void __set__transformR(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transformR() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transformR() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__rotationDataL(::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  value) ;

constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* __get__rotationDataL() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> __get__rotationDataL() const;

constexpr void __set__rotationDataR(::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  value) ;

constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* __get__rotationDataR() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> __get__rotationDataR() const;

constexpr void __set__randomGenerationFrameNum(int32_t  value) ;

constexpr int32_t& __get__randomGenerationFrameNum() ;

constexpr int32_t const& __get__randomGenerationFrameNum() const;

constexpr void __set__randomStartRotation(float_t  value) ;

constexpr float_t& __get__randomStartRotation() ;

constexpr float_t const& __get__randomStartRotation() const;

constexpr void __set__randomDirection(float_t  value) ;

constexpr float_t& __get__randomDirection() ;

constexpr float_t const& __get__randomDirection() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23ac13c size 0x3c8 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x23ac50c size 0x2a4 virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x23ac7b0 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23ac7cc size 0x380 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method UpdateRotationData addr 0x23acb4c size 0x21c virtual false final false
inline void UpdateRotationData(int32_t  beatmapEventDataValue, ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  rotationData, float_t  startRotationOffset, float_t  direction) ;

static inline ::GlobalNamespace::LightPairRotationEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23acd68 size 0x74 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightPairRotationEventEffect(LightPairRotationEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightPairRotationEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightPairRotationEventEffect(LightPairRotationEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightPairRotationEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightPairRotationEventEffect, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightPairRotationEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightPairRotationEventEffect*, "", "LightPairRotationEventEffect");
NEED_NO_BOX(::GlobalNamespace::__LightPairRotationEventEffect__RotationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, "", "LightPairRotationEventEffect/RotationData");
