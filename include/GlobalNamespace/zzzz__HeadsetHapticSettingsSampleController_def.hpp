#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadsetHapticSettingsSampleController)
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadsetHapticSettingsSampleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HeadsetHapticSettingsSampleController);
// Type: ::HeadsetHapticSettingsSampleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5604))
// CS Name: ::HeadsetHapticSettingsSampleController*
class CORDL_TYPE HeadsetHapticSettingsSampleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _formattedFloatListSettingsController offset 0x18
 __declspec(property(get=__get__formattedFloatListSettingsController, put=__set__formattedFloatListSettingsController)) ::GlobalNamespace::FormattedFloatListSettingsController*  _formattedFloatListSettingsController;

/// @brief Field _hapticSamplePlayDelay offset 0x20
 __declspec(property(get=__get__hapticSamplePlayDelay, put=__set__hapticSamplePlayDelay)) float_t  _hapticSamplePlayDelay;

/// @brief Field _hapticSampleDuration offset 0x24
 __declspec(property(get=__get__hapticSampleDuration, put=__set__hapticSampleDuration)) float_t  _hapticSampleDuration;

/// @brief Field _headHapticPreset offset 0x28
 __declspec(property(get=__get__headHapticPreset, put=__set__headHapticPreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _headHapticPreset;

/// @brief Field _hapticFeedbackManager offset 0x30
 __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackManager;

/// @brief Field _nextHapticSamplePlayTime offset 0x38
 __declspec(property(get=__get__nextHapticSamplePlayTime, put=__set__nextHapticSamplePlayTime)) float_t  _nextHapticSamplePlayTime;

/// @brief Field _nextHapticSamplePlayTimeEnd offset 0x3c
 __declspec(property(get=__get__nextHapticSamplePlayTimeEnd, put=__set__nextHapticSamplePlayTimeEnd)) float_t  _nextHapticSamplePlayTimeEnd;

constexpr void __set__formattedFloatListSettingsController(::GlobalNamespace::FormattedFloatListSettingsController*  value) ;

constexpr ::GlobalNamespace::FormattedFloatListSettingsController* __get__formattedFloatListSettingsController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> __get__formattedFloatListSettingsController() const;

constexpr void __set__hapticSamplePlayDelay(float_t  value) ;

constexpr float_t& __get__hapticSamplePlayDelay() ;

constexpr float_t const& __get__hapticSamplePlayDelay() const;

constexpr void __set__hapticSampleDuration(float_t  value) ;

constexpr float_t& __get__hapticSampleDuration() ;

constexpr float_t const& __get__hapticSampleDuration() const;

constexpr void __set__headHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__headHapticPreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__headHapticPreset() const;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackManager() const;

constexpr void __set__nextHapticSamplePlayTime(float_t  value) ;

constexpr float_t& __get__nextHapticSamplePlayTime() ;

constexpr float_t const& __get__nextHapticSamplePlayTime() const;

constexpr void __set__nextHapticSamplePlayTimeEnd(float_t  value) ;

constexpr float_t& __get__nextHapticSamplePlayTimeEnd() ;

constexpr float_t const& __get__nextHapticSamplePlayTimeEnd() const;

/// @brief Method Start addr 0x22ab390 size 0x98 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x22ab428 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x22ab4f8 size 0x68 virtual false final false
inline void Update() ;

/// @brief Method HandleHapticSettingValueDidChange addr 0x22ab560 size 0x50 virtual false final false
inline void HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  controller, float_t  newValue) ;

static inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* New_ctor() ;

/// @brief Method .ctor addr 0x22ab5b0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HeadsetHapticSettingsSampleController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadsetHapticSettingsSampleController, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadsetHapticSettingsSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadsetHapticSettingsSampleController*, "", "HeadsetHapticSettingsSampleController");
