// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioPlayerBase
#include "GlobalNamespace/AudioPlayerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: SimpleAudioPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleAudioPlayer : public GlobalNamespace::AudioPlayerBase {
    public:
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private System.Single _targetVolume
    // Size: 0x4
    // Offset: 0x28
    float targetVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _loop
    // Size: 0x1
    // Offset: 0x2C
    bool loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: loop and: fadeSpeed
    char __padding3[0x3] = {};
    // private System.Single _fadeSpeed
    // Size: 0x4
    // Offset: 0x30
    float fadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fadingIn
    // Size: 0x1
    // Offset: 0x34
    bool fadingIn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SimpleAudioPlayer
    SimpleAudioPlayer(UnityEngine::AudioClip* audioClip_ = {}, UnityEngine::AudioSource* audioSource_ = {}, float targetVolume_ = {}, bool loop_ = {}, float fadeSpeed_ = {}, bool fadingIn_ = {}) noexcept : audioClip{audioClip_}, audioSource{audioSource_}, targetVolume{targetVolume_}, loop{loop_}, fadeSpeed{fadeSpeed_}, fadingIn{fadingIn_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioClip _audioClip
    UnityEngine::AudioClip*& dyn__audioClip();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _targetVolume
    float& dyn__targetVolume();
    // Get instance field reference: private System.Boolean _loop
    bool& dyn__loop();
    // Get instance field reference: private System.Single _fadeSpeed
    float& dyn__fadeSpeed();
    // Get instance field reference: private System.Boolean _fadingIn
    bool& dyn__fadingIn();
    // protected System.Void Start()
    // Offset: 0x1079EF0
    void Start();
    // protected System.Void Update()
    // Offset: 0x1079FC4
    void Update();
    // private System.Void FadeIn(System.Single duration)
    // Offset: 0x1079F7C
    void FadeIn(float duration);
    // public override UnityEngine.AudioClip get_activeAudioClip()
    // Offset: 0x1079EE8
    // Implemented from: AudioPlayerBase
    // Base method: UnityEngine.AudioClip AudioPlayerBase::get_activeAudioClip()
    UnityEngine::AudioClip* get_activeAudioClip();
    // public System.Void .ctor()
    // Offset: 0x107A1A0
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAudioPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleAudioPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAudioPlayer*, creationType>()));
    }
    // public override System.Void FadeOut(System.Single duration)
    // Offset: 0x107A124
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::FadeOut(System.Single duration)
    void FadeOut(float duration);
    // public override System.Void PauseCurrentChannel()
    // Offset: 0x107A168
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::PauseCurrentChannel()
    void PauseCurrentChannel();
    // public override System.Void UnPauseCurrentChannel()
    // Offset: 0x107A184
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::UnPauseCurrentChannel()
    void UnPauseCurrentChannel();
  }; // SimpleAudioPlayer
  #pragma pack(pop)
  static check_size<sizeof(SimpleAudioPlayer), 52 + sizeof(bool)> __GlobalNamespace_SimpleAudioPlayerSizeCheck;
  static_assert(sizeof(SimpleAudioPlayer) == 0x35);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleAudioPlayer*, "", "SimpleAudioPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)()>(&GlobalNamespace::SimpleAudioPlayer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)()>(&GlobalNamespace::SimpleAudioPlayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)(float)>(&GlobalNamespace::SimpleAudioPlayer::FadeIn)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::get_activeAudioClip
// Il2CppName: get_activeAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::SimpleAudioPlayer::*)()>(&GlobalNamespace::SimpleAudioPlayer::get_activeAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "get_activeAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)(float)>(&GlobalNamespace::SimpleAudioPlayer::FadeOut)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::PauseCurrentChannel
// Il2CppName: PauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)()>(&GlobalNamespace::SimpleAudioPlayer::PauseCurrentChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "PauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleAudioPlayer::UnPauseCurrentChannel
// Il2CppName: UnPauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleAudioPlayer::*)()>(&GlobalNamespace::SimpleAudioPlayer::UnPauseCurrentChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleAudioPlayer*), "UnPauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
