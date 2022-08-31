// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroCountdownTextController
  class MultiplayerIntroCountdownTextController;
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TimeTweeningManager
  class TimeTweeningManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroCountdown
  class MultiplayerIntroCountdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroCountdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroCountdown*, "", "MultiplayerIntroCountdown");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroCountdown
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerIntroCountdown : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerIntroCountdown::$CountdownRoutine$d__23
    class $CountdownRoutine$d__23;
    // Nested type: ::GlobalNamespace::MultiplayerIntroCountdown::$PlayDelayed$d__24
    class $PlayDelayed$d__24;
    // Nested type: ::GlobalNamespace::MultiplayerIntroCountdown::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    // Nested type: ::GlobalNamespace::MultiplayerIntroCountdown::$PhaseRoutine$d__25
    class $PhaseRoutine$d__25;
    public:
    // private System.Single _textAppearDuration
    // Size: 0x4
    // Offset: 0x18
    float textAppearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _textDisappearDuration
    // Size: 0x4
    // Offset: 0x1C
    float textDisappearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _goDisappearDuration
    // Size: 0x4
    // Offset: 0x20
    float goDisappearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _partsDistance
    // Size: 0x4
    // Offset: 0x24
    float partsDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _startLocalPosition
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 startLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _targetLocalPosition
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 targetLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [SpaceAttribute] Offset: 0x10EBB74
    // private UnityEngine.AudioClip _readyClip
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioClip* readyClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _setClip
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AudioClip* setClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _goClip
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AudioClip* goClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioClip _buildUpClip
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AudioClip* buildUpClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // [SpaceAttribute] Offset: 0x10EBBDC
    // private MultiplayerIntroCountdownTextController _textController0
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::MultiplayerIntroCountdownTextController* textController0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerIntroCountdownTextController*) == 0x8);
    // private MultiplayerIntroCountdownTextController _textController1
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::MultiplayerIntroCountdownTextController* textController1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerIntroCountdownTextController*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0x10EBC34
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*) == 0x8);
    // [InjectAttribute] Offset: 0x10EBC6C
    // private readonly Tweening.TimeTweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x80
    ::Tweening::TimeTweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::TimeTweeningManager*) == 0x8);
    // private MultiplayerIntroCountdownTextController _currentTextController
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::MultiplayerIntroCountdownTextController* currentTextController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerIntroCountdownTextController*) == 0x8);
    // private System.Single _fontSize
    // Size: 0x4
    // Offset: 0x90
    float fontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x94
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _textAppearDuration
    [[deprecated("Use field access instead!")]] float& dyn__textAppearDuration();
    // Get instance field reference: private System.Single _textDisappearDuration
    [[deprecated("Use field access instead!")]] float& dyn__textDisappearDuration();
    // Get instance field reference: private System.Single _goDisappearDuration
    [[deprecated("Use field access instead!")]] float& dyn__goDisappearDuration();
    // Get instance field reference: private System.Single _partsDistance
    [[deprecated("Use field access instead!")]] float& dyn__partsDistance();
    // Get instance field reference: private UnityEngine.Vector3 _startLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startLocalPosition();
    // Get instance field reference: private UnityEngine.Vector3 _targetLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__targetLocalPosition();
    // Get instance field reference: private UnityEngine.AudioClip _readyClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__readyClip();
    // Get instance field reference: private UnityEngine.AudioClip _setClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__setClip();
    // Get instance field reference: private UnityEngine.AudioClip _goClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__goClip();
    // Get instance field reference: private UnityEngine.AudioClip _buildUpClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__buildUpClip();
    // Get instance field reference: private MultiplayerIntroCountdownTextController _textController0
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerIntroCountdownTextController*& dyn__textController0();
    // Get instance field reference: private MultiplayerIntroCountdownTextController _textController1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerIntroCountdownTextController*& dyn__textController1();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& dyn__multiplayerOffsetByLocalPlayerPosition();
    // Get instance field reference: private readonly Tweening.TimeTweeningManager _tweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::TimeTweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private MultiplayerIntroCountdownTextController _currentTextController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerIntroCountdownTextController*& dyn__currentTextController();
    // Get instance field reference: private System.Single _fontSize
    [[deprecated("Use field access instead!")]] float& dyn__fontSize();
    // Get instance field reference: private System.Single _alpha
    [[deprecated("Use field access instead!")]] float& dyn__alpha();
    // public System.Single get_textAppearDuration()
    // Offset: 0x142B298
    float get_textAppearDuration();
    // public System.Void .ctor()
    // Offset: 0x142B710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroCountdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerIntroCountdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroCountdown*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x142B2A0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x142B3C8
    void OnDestroy();
    // public System.Void StartCountdown(System.Single seconds, System.Single delay, System.Single durationMultiplier)
    // Offset: 0x142B460
    void StartCountdown(float seconds, float delay, float durationMultiplier);
    // private System.Collections.IEnumerator CountdownRoutine(System.Single seconds, System.Single delay, System.Single durationMultiplier)
    // Offset: 0x142B4DC
    ::System::Collections::IEnumerator* CountdownRoutine(float seconds, float delay, float durationMultiplier);
    // private System.Collections.IEnumerator PlayDelayed(UnityEngine.AudioClip audioClip, System.Single delay)
    // Offset: 0x142B59C
    ::System::Collections::IEnumerator* PlayDelayed(::UnityEngine::AudioClip* audioClip, float delay);
    // private System.Collections.IEnumerator PhaseRoutine(System.String text, System.Single appearDuration, System.Single disappearDuration)
    // Offset: 0x142B654
    ::System::Collections::IEnumerator* PhaseRoutine(::StringW text, float appearDuration, float disappearDuration);
  }; // MultiplayerIntroCountdown
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroCountdown), 148 + sizeof(float)> __GlobalNamespace_MultiplayerIntroCountdownSizeCheck;
  static_assert(sizeof(MultiplayerIntroCountdown) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::get_textAppearDuration
// Il2CppName: get_textAppearDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerIntroCountdown::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::get_textAppearDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "get_textAppearDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::*)()>(&GlobalNamespace::MultiplayerIntroCountdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::StartCountdown
// Il2CppName: StartCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroCountdown::*)(float, float, float)>(&GlobalNamespace::MultiplayerIntroCountdown::StartCountdown)> {
  static const MethodInfo* get() {
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* durationMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "StartCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seconds, delay, durationMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::CountdownRoutine
// Il2CppName: CountdownRoutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerIntroCountdown::*)(float, float, float)>(&GlobalNamespace::MultiplayerIntroCountdown::CountdownRoutine)> {
  static const MethodInfo* get() {
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* durationMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "CountdownRoutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seconds, delay, durationMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::PlayDelayed
// Il2CppName: PlayDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerIntroCountdown::*)(::UnityEngine::AudioClip*, float)>(&GlobalNamespace::MultiplayerIntroCountdown::PlayDelayed)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "PlayDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroCountdown::PhaseRoutine
// Il2CppName: PhaseRoutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerIntroCountdown::*)(::StringW, float, float)>(&GlobalNamespace::MultiplayerIntroCountdown::PhaseRoutine)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* appearDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* disappearDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroCountdown*), "PhaseRoutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, appearDuration, disappearDuration});
  }
};
