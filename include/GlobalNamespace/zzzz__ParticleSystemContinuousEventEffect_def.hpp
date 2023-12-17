#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ParticleSystemContinuousEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemContinuousEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemContinuousEventEffect);
// Type: ::ParticleSystemContinuousEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4959))
// CS Name: ::ParticleSystemContinuousEventEffect*
class CORDL_TYPE ParticleSystemContinuousEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _beatmapEvent offset 0x18
 __declspec(property(get=__get__beatmapEvent, put=__set__beatmapEvent)) ::GlobalNamespace::BasicBeatmapEventType  _beatmapEvent;

/// @brief Field _particleSystems offset 0x20
 __declspec(property(get=__get__particleSystems, put=__set__particleSystems)) ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  _particleSystems;

/// @brief Field _beatmapCallbacksController offset 0x28
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapDataCallbackWrapper offset 0x30
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType  value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEvent() ;

constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEvent() const;

constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems() ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23aec80 size 0x124 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23aeda4 size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23aedc0 size 0x20 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData) ;

/// @brief Method ToggleEmitting addr 0x23aede0 size 0xb4 virtual false final false
inline void ToggleEmitting(bool  shouldPlay) ;

static inline ::GlobalNamespace::ParticleSystemContinuousEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23aee94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParticleSystemContinuousEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemContinuousEventEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemContinuousEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemContinuousEventEffect*, "", "ParticleSystemContinuousEventEffect");
