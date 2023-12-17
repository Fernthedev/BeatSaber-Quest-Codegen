#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderHapticFeedbackInteractionEffect)
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class IGamePause;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderHapticFeedbackInteractionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
// Type: ::SliderHapticFeedbackInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4819))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4813))
// CS Name: ::SliderHapticFeedbackInteractionEffect*
class CORDL_TYPE SliderHapticFeedbackInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::SliderInteractionEffect)]{};

/// @brief Field kVibrationSaberInteractionParamThreshold offset 0x0
static constexpr float_t  kVibrationSaberInteractionParamThreshold{0.2};

/// @brief Field _hapticPreset offset 0x20
 __declspec(property(get=__get__hapticPreset, put=__set__hapticPreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _hapticPreset;

/// @brief Field _hapticFeedbackManager offset 0x28
 __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackManager;

/// @brief Field _gamePause offset 0x30
 __declspec(property(get=__get__gamePause, put=__set__gamePause)) ::GlobalNamespace::IGamePause*  _gamePause;

/// @brief Field _saberType offset 0x38
 __declspec(property(get=__get__saberType, put=__set__saberType)) ::GlobalNamespace::SaberType  _saberType;

constexpr void __set__hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__hapticPreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__hapticPreset() const;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackManager() const;

constexpr void __set__gamePause(::GlobalNamespace::IGamePause*  value) ;

constexpr ::GlobalNamespace::IGamePause* __get__gamePause() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> __get__gamePause() const;

constexpr void __set__saberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get__saberType() ;

constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

/// @brief Method Start addr 0x2392c34 size 0x40 virtual true final false
inline void Start() ;

/// @brief Method Update addr 0x2392d7c size 0xd4 virtual false final false
inline void Update() ;

/// @brief Method StartEffect addr 0x2392eac size 0x48 virtual true final false
inline void StartEffect(float_t  saberInteractionParam) ;

/// @brief Method EndEffect addr 0x2392ef4 size 0xc virtual true final false
inline void EndEffect() ;

/// @brief Method Vibrate addr 0x2392e6c size 0x40 virtual false final false
inline void Vibrate() ;

static inline ::GlobalNamespace::SliderHapticFeedbackInteractionEffect* New_ctor() ;

/// @brief Method .ctor addr 0x2392f00 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderHapticFeedbackInteractionEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderHapticFeedbackInteractionEffect, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderHapticFeedbackInteractionEffect*, "", "SliderHapticFeedbackInteractionEffect");
