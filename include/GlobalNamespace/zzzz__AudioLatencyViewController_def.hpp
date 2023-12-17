#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLatencyViewController)
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class VisualMetronome;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class RangeValuesTextSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLatencyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioLatencyViewController);
// Type: ::AudioLatencyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5612))
// CS Name: ::AudioLatencyViewController*
class CORDL_TYPE AudioLatencyViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _audioLatency offset 0x70
 __declspec(property(get=__get__audioLatency, put=__set__audioLatency)) ::GlobalNamespace::FloatSO*  _audioLatency;

/// @brief Field _overrideAudioLatency offset 0x78
 __declspec(property(get=__get__overrideAudioLatency, put=__set__overrideAudioLatency)) ::GlobalNamespace::BoolSO*  _overrideAudioLatency;

/// @brief Field _setupCanvasGroup offset 0x80
 __declspec(property(get=__get__setupCanvasGroup, put=__set__setupCanvasGroup)) ::UnityEngine::CanvasGroup*  _setupCanvasGroup;

/// @brief Field _overrideAudioLatencyToggle offset 0x88
 __declspec(property(get=__get__overrideAudioLatencyToggle, put=__set__overrideAudioLatencyToggle)) ::UnityEngine::UI::Toggle*  _overrideAudioLatencyToggle;

/// @brief Field _slider offset 0x90
 __declspec(property(get=__get__slider, put=__set__slider)) ::HMUI::RangeValuesTextSlider*  _slider;

/// @brief Field _visualMetronome offset 0x98
 __declspec(property(get=__get__visualMetronome, put=__set__visualMetronome)) ::GlobalNamespace::VisualMetronome*  _visualMetronome;

/// @brief Field _disabledAlpha offset 0xa0
 __declspec(property(get=__get__disabledAlpha, put=__set__disabledAlpha)) float_t  _disabledAlpha;

/// @brief Field _songPreviewPlayer offset 0xa8
 __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer)) ::GlobalNamespace::SongPreviewPlayer*  _songPreviewPlayer;

/// @brief Field _toggleBinder offset 0xb0
 __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder)) ::HMUI::ToggleBinder*  _toggleBinder;

constexpr void __set__audioLatency(::GlobalNamespace::FloatSO*  value) ;

constexpr ::GlobalNamespace::FloatSO* __get__audioLatency() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> __get__audioLatency() const;

constexpr void __set__overrideAudioLatency(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__overrideAudioLatency() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__overrideAudioLatency() const;

constexpr void __set__setupCanvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__setupCanvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__setupCanvasGroup() const;

constexpr void __set__overrideAudioLatencyToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__overrideAudioLatencyToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__overrideAudioLatencyToggle() const;

constexpr void __set__slider(::HMUI::RangeValuesTextSlider*  value) ;

constexpr ::HMUI::RangeValuesTextSlider* __get__slider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::RangeValuesTextSlider*> __get__slider() const;

constexpr void __set__visualMetronome(::GlobalNamespace::VisualMetronome*  value) ;

constexpr ::GlobalNamespace::VisualMetronome* __get__visualMetronome() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VisualMetronome*> __get__visualMetronome() const;

constexpr void __set__disabledAlpha(float_t  value) ;

constexpr float_t& __get__disabledAlpha() ;

constexpr float_t const& __get__disabledAlpha() const;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer*  value) ;

constexpr ::GlobalNamespace::SongPreviewPlayer* __get__songPreviewPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> __get__songPreviewPlayer() const;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder*  value) ;

constexpr ::HMUI::ToggleBinder* __get__toggleBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> __get__toggleBinder() const;

/// @brief Method DidActivate addr 0x22ac5e4 size 0x224 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22ac8f4 size 0x28 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x22ac91c size 0xe4 virtual true final false
inline void OnDestroy() ;

/// @brief Method SliderValueDidChange addr 0x22aca00 size 0x74 virtual false final false
inline void SliderValueDidChange(::HMUI::RangeValuesTextSlider*  slider, float_t  value) ;

/// @brief Method HandleOverrideAudioLatencyToggleValueChanged addr 0x22aca74 size 0x68 virtual false final false
inline void HandleOverrideAudioLatencyToggleValueChanged(bool  isOn) ;

/// @brief Method RefreshVisuals addr 0x22ac808 size 0xec virtual false final false
inline void RefreshVisuals(bool  overrideAudioLatencyIsEnabled) ;

static inline ::GlobalNamespace::AudioLatencyViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22acadc size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLatencyViewController(AudioLatencyViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLatencyViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLatencyViewController(AudioLatencyViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioLatencyViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioLatencyViewController, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioLatencyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
