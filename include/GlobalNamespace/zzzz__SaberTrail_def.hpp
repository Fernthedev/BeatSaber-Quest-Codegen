#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberTrail)
namespace GlobalNamespace {
class IBladeMovementData;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SaberTrailRenderer;
}
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrail;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTrail);
// Type: ::SaberTrail
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4876))
// CS Name: ::SaberTrail*
class CORDL_TYPE SaberTrail : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kIgnoredFramesCount offset 0x0
static constexpr int32_t  kIgnoredFramesCount{static_cast<int32_t>(0x4)};

/// @brief Field kSnapshotCapacityMargin offset 0x0
static constexpr int32_t  kSnapshotCapacityMargin{static_cast<int32_t>(0x3)};

/// @brief Field kScaleCheckFramesInterval offset 0x0
static constexpr int32_t  kScaleCheckFramesInterval{static_cast<int32_t>(0xa)};

/// @brief Field _trailRendererPrefab offset 0x18
 __declspec(property(get=__get__trailRendererPrefab, put=__set__trailRendererPrefab)) ::GlobalNamespace::SaberTrailRenderer*  _trailRendererPrefab;

/// @brief Field _trailDuration offset 0x20
 __declspec(property(get=__get__trailDuration, put=__set__trailDuration)) float_t  _trailDuration;

/// @brief Field _samplingFrequency offset 0x24
 __declspec(property(get=__get__samplingFrequency, put=__set__samplingFrequency)) int32_t  _samplingFrequency;

/// @brief Field _granularity offset 0x28
 __declspec(property(get=__get__granularity, put=__set__granularity)) int32_t  _granularity;

/// @brief Field _whiteSectionMaxDuration offset 0x2c
 __declspec(property(get=__get__whiteSectionMaxDuration, put=__set__whiteSectionMaxDuration)) float_t  _whiteSectionMaxDuration;

/// @brief Field _colorOverwrite offset 0x30
 __declspec(property(get=__get__colorOverwrite, put=__set__colorOverwrite)) bool  _colorOverwrite;

/// @brief Field _forcedColor offset 0x34
 __declspec(property(get=__get__forcedColor, put=__set__forcedColor)) ::UnityEngine::Color  _forcedColor;

/// @brief Field _color offset 0x44
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _movementData offset 0x58
 __declspec(property(get=__get__movementData, put=__set__movementData)) ::GlobalNamespace::IBladeMovementData*  _movementData;

/// @brief Field _lastTrailElementTime offset 0x60
 __declspec(property(get=__get__lastTrailElementTime, put=__set__lastTrailElementTime)) float_t  _lastTrailElementTime;

/// @brief Field _trailRenderer offset 0x68
 __declspec(property(get=__get__trailRenderer, put=__set__trailRenderer)) ::GlobalNamespace::SaberTrailRenderer*  _trailRenderer;

/// @brief Field _trailElementCollection offset 0x70
 __declspec(property(get=__get__trailElementCollection, put=__set__trailElementCollection)) ::GlobalNamespace::TrailElementCollection*  _trailElementCollection;

/// @brief Field _sampleStep offset 0x78
 __declspec(property(get=__get__sampleStep, put=__set__sampleStep)) float_t  _sampleStep;

/// @brief Field _framesPassed offset 0x7c
 __declspec(property(get=__get__framesPassed, put=__set__framesPassed)) int32_t  _framesPassed;

/// @brief Field _lastZScale offset 0x80
 __declspec(property(get=__get__lastZScale, put=__set__lastZScale)) float_t  _lastZScale;

/// @brief Field _framesToScaleCheck offset 0x84
 __declspec(property(get=__get__framesToScaleCheck, put=__set__framesToScaleCheck)) int32_t  _framesToScaleCheck;

/// @brief Field _inited offset 0x88
 __declspec(property(get=__get__inited, put=__set__inited)) bool  _inited;

constexpr void __set__trailRendererPrefab(::GlobalNamespace::SaberTrailRenderer*  value) ;

constexpr ::GlobalNamespace::SaberTrailRenderer* __get__trailRendererPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrailRenderer*> __get__trailRendererPrefab() const;

constexpr void __set__trailDuration(float_t  value) ;

constexpr float_t& __get__trailDuration() ;

constexpr float_t const& __get__trailDuration() const;

constexpr void __set__samplingFrequency(int32_t  value) ;

constexpr int32_t& __get__samplingFrequency() ;

constexpr int32_t const& __get__samplingFrequency() const;

constexpr void __set__granularity(int32_t  value) ;

constexpr int32_t& __get__granularity() ;

constexpr int32_t const& __get__granularity() const;

constexpr void __set__whiteSectionMaxDuration(float_t  value) ;

constexpr float_t& __get__whiteSectionMaxDuration() ;

constexpr float_t const& __get__whiteSectionMaxDuration() const;

constexpr void __set__colorOverwrite(bool  value) ;

constexpr bool& __get__colorOverwrite() ;

constexpr bool const& __get__colorOverwrite() const;

constexpr void __set__forcedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__forcedColor() ;

constexpr ::UnityEngine::Color const& __get__forcedColor() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__movementData(::GlobalNamespace::IBladeMovementData*  value) ;

constexpr ::GlobalNamespace::IBladeMovementData* __get__movementData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBladeMovementData*> __get__movementData() const;

constexpr void __set__lastTrailElementTime(float_t  value) ;

constexpr float_t& __get__lastTrailElementTime() ;

constexpr float_t const& __get__lastTrailElementTime() const;

constexpr void __set__trailRenderer(::GlobalNamespace::SaberTrailRenderer*  value) ;

constexpr ::GlobalNamespace::SaberTrailRenderer* __get__trailRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrailRenderer*> __get__trailRenderer() const;

constexpr void __set__trailElementCollection(::GlobalNamespace::TrailElementCollection*  value) ;

constexpr ::GlobalNamespace::TrailElementCollection* __get__trailElementCollection() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrailElementCollection*> __get__trailElementCollection() const;

constexpr void __set__sampleStep(float_t  value) ;

constexpr float_t& __get__sampleStep() ;

constexpr float_t const& __get__sampleStep() const;

constexpr void __set__framesPassed(int32_t  value) ;

constexpr int32_t& __get__framesPassed() ;

constexpr int32_t const& __get__framesPassed() const;

constexpr void __set__lastZScale(float_t  value) ;

constexpr float_t& __get__lastZScale() ;

constexpr float_t const& __get__lastZScale() const;

constexpr void __set__framesToScaleCheck(int32_t  value) ;

constexpr int32_t& __get__framesToScaleCheck() ;

constexpr int32_t const& __get__framesToScaleCheck() const;

constexpr void __set__inited(bool  value) ;

constexpr bool& __get__inited() ;

constexpr bool const& __get__inited() const;

/// @brief Method Awake addr 0x239e864 size 0x12c virtual false final false
inline void Awake() ;

/// @brief Method Setup addr 0x239e990 size 0x20 virtual false final false
inline void Setup(::UnityEngine::Color  color, ::GlobalNamespace::IBladeMovementData*  movementData) ;

/// @brief Method Init addr 0x239e9b0 size 0x280 virtual false final false
inline void Init() ;

/// @brief Method ResetTrailData addr 0x239ee64 size 0xd4 virtual false final false
inline void ResetTrailData() ;

/// @brief Method LateUpdate addr 0x239efc8 size 0x3e4 virtual false final false
inline void LateUpdate() ;

/// @brief Method OnEnable addr 0x239f6ac size 0xac virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x239f758 size 0x84 virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x239f7dc size 0xa8 virtual false final false
inline void OnDestroy() ;

/// @brief Method GetTrailWidth addr 0x239ede0 size 0x84 virtual false final false
inline float_t GetTrailWidth(::GlobalNamespace::BladeMovementDataElement  lastAddedData) ;

/// @brief Method OnDrawGizmosSelected addr 0x239f884 size 0x1d4 virtual false final false
inline void OnDrawGizmosSelected() ;

static inline ::GlobalNamespace::SaberTrail* New_ctor() ;

/// @brief Method .ctor addr 0x239fa58 size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberTrail(SaberTrail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberTrail(SaberTrail const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberTrail()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTrail, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTrail);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrail*, "", "SaberTrail");
