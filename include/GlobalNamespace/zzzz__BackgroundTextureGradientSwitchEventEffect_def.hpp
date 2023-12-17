#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BackgroundTextureGradientSwitchEventEffect)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class BackgroundTextureGradientSwitchEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
// Type: ::BackgroundTextureGradientSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4897))
// CS Name: ::BackgroundTextureGradientSwitchEventEffect*
class CORDL_TYPE BackgroundTextureGradientSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _defaultTextureGradient offset 0x18
 __declspec(property(get=__get__defaultTextureGradient, put=__set__defaultTextureGradient)) ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  _defaultTextureGradient;

/// @brief Field _boostTextureGradient offset 0x20
 __declspec(property(get=__get__boostTextureGradient, put=__set__boostTextureGradient)) ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  _boostTextureGradient;

/// @brief Field _beatmapCallbacksController offset 0x28
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _beatmapDataCallbackWrapper offset 0x30
 __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _beatmapDataCallbackWrapper;

constexpr void __set__defaultTextureGradient(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  value) ;

constexpr ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* __get__defaultTextureGradient() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*> __get__defaultTextureGradient() const;

constexpr void __set__boostTextureGradient(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  value) ;

constexpr ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* __get__boostTextureGradient() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*> __get__boostTextureGradient() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__beatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__beatmapDataCallbackWrapper() const;

/// @brief Method Start addr 0x23a4f94 size 0xa8 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23a503c size 0x1c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x23a5058 size 0x50 virtual false final false
inline void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData*  eventData) ;

static inline ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23a50a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BackgroundTextureGradientSwitchEventEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BackgroundTextureGradientSwitchEventEffect(BackgroundTextureGradientSwitchEventEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BackgroundTextureGradientSwitchEventEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*, "", "BackgroundTextureGradientSwitchEventEffect");
