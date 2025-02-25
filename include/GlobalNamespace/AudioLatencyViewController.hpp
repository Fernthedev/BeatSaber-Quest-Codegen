// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: VisualMetronome
  class VisualMetronome;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: RangeValuesTextSlider
  class RangeValuesTextSlider;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: AudioLatencyViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioLatencyViewController : public HMUI::ViewController {
    public:
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private BoolSO _overrideAudioLatency
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BoolSO* overrideAudioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE46D64
    // private UnityEngine.CanvasGroup _setupCanvasGroup
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::CanvasGroup* setupCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.UI.Toggle _overrideAudioLatencyToggle
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Toggle* overrideAudioLatencyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private HMUI.RangeValuesTextSlider _slider
    // Size: 0x8
    // Offset: 0x90
    HMUI::RangeValuesTextSlider* slider;
    // Field size check
    static_assert(sizeof(HMUI::RangeValuesTextSlider*) == 0x8);
    // private VisualMetronome _visualMetronome
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::VisualMetronome* visualMetronome;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VisualMetronome*) == 0x8);
    // [SpaceAttribute] Offset: 0xE46DCC
    // private System.Single _disabledAlpha
    // Size: 0x4
    // Offset: 0xA0
    float disabledAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: disabledAlpha and: songPreviewPlayer
    char __padding6[0x4] = {};
    // [InjectAttribute] Offset: 0xE46E04
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xB0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // Creating value type constructor for type: AudioLatencyViewController
    AudioLatencyViewController(GlobalNamespace::FloatSO* audioLatency_ = {}, GlobalNamespace::BoolSO* overrideAudioLatency_ = {}, UnityEngine::CanvasGroup* setupCanvasGroup_ = {}, UnityEngine::UI::Toggle* overrideAudioLatencyToggle_ = {}, HMUI::RangeValuesTextSlider* slider_ = {}, GlobalNamespace::VisualMetronome* visualMetronome_ = {}, float disabledAlpha_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}) noexcept : audioLatency{audioLatency_}, overrideAudioLatency{overrideAudioLatency_}, setupCanvasGroup{setupCanvasGroup_}, overrideAudioLatencyToggle{overrideAudioLatencyToggle_}, slider{slider_}, visualMetronome{visualMetronome_}, disabledAlpha{disabledAlpha_}, songPreviewPlayer{songPreviewPlayer_}, toggleBinder{toggleBinder_} {}
    // Get instance field reference: private FloatSO _audioLatency
    GlobalNamespace::FloatSO*& dyn__audioLatency();
    // Get instance field reference: private BoolSO _overrideAudioLatency
    GlobalNamespace::BoolSO*& dyn__overrideAudioLatency();
    // Get instance field reference: private UnityEngine.CanvasGroup _setupCanvasGroup
    UnityEngine::CanvasGroup*& dyn__setupCanvasGroup();
    // Get instance field reference: private UnityEngine.UI.Toggle _overrideAudioLatencyToggle
    UnityEngine::UI::Toggle*& dyn__overrideAudioLatencyToggle();
    // Get instance field reference: private HMUI.RangeValuesTextSlider _slider
    HMUI::RangeValuesTextSlider*& dyn__slider();
    // Get instance field reference: private VisualMetronome _visualMetronome
    GlobalNamespace::VisualMetronome*& dyn__visualMetronome();
    // Get instance field reference: private System.Single _disabledAlpha
    float& dyn__disabledAlpha();
    // Get instance field reference: private readonly SongPreviewPlayer _songPreviewPlayer
    GlobalNamespace::SongPreviewPlayer*& dyn__songPreviewPlayer();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    HMUI::ToggleBinder*& dyn__toggleBinder();
    // private System.Void SliderValueDidChange(HMUI.RangeValuesTextSlider slider, System.Single value)
    // Offset: 0x1177920
    void SliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value);
    // private System.Void HandleOverrideAudioLatencyToggleValueChanged(System.Boolean isOn)
    // Offset: 0x117799C
    void HandleOverrideAudioLatencyToggleValueChanged(bool isOn);
    // private System.Void RefreshVisuals(System.Boolean overrideAudioLatencyIsEnabled)
    // Offset: 0x1177718
    void RefreshVisuals(bool overrideAudioLatencyIsEnabled);
    // public System.Void .ctor()
    // Offset: 0x1177A14
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioLatencyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioLatencyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioLatencyViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1177524
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1177814
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1177838
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // AudioLatencyViewController
  #pragma pack(pop)
  static check_size<sizeof(AudioLatencyViewController), 176 + sizeof(HMUI::ToggleBinder*)> __GlobalNamespace_AudioLatencyViewControllerSizeCheck;
  static_assert(sizeof(AudioLatencyViewController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioLatencyViewController*, "", "AudioLatencyViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::SliderValueDidChange
// Il2CppName: SliderValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(HMUI::RangeValuesTextSlider*, float)>(&GlobalNamespace::AudioLatencyViewController::SliderValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "SliderValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged
// Il2CppName: HandleOverrideAudioLatencyToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool)>(&GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "HandleOverrideAudioLatencyToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool)>(&GlobalNamespace::AudioLatencyViewController::RefreshVisuals)> {
  static const MethodInfo* get() {
    static auto* overrideAudioLatencyIsEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideAudioLatencyIsEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool, bool, bool)>(&GlobalNamespace::AudioLatencyViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool, bool)>(&GlobalNamespace::AudioLatencyViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioLatencyViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)()>(&GlobalNamespace::AudioLatencyViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioLatencyViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
