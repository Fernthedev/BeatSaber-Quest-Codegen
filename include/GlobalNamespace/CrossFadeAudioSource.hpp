// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioPitchGainEffect
  class AudioPitchGainEffect;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: CrossFadeAudioSource
  // [TokenAttribute] Offset: FFFFFFFF
  class CrossFadeAudioSource : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: audioSource1
    char __padding0[0x4] = {};
    // private UnityEngine.AudioSource _audioSource1
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSource1;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _audioSource2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource2;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private AudioPitchGainEffect _audioPitchGainEffect1
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioPitchGainEffect* audioPitchGainEffect1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // private AudioPitchGainEffect _audioPitchGainEffect2
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AudioPitchGainEffect* audioPitchGainEffect2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xE31C18
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x40
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private UnityEngine.AudioSource _activeAudioSource
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AudioSource* activeAudioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _inactiveAudioSource
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AudioSource* inactiveAudioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private Tweening.Tween`1<System.Single> _volumeDownTween
    // Size: 0x8
    // Offset: 0x58
    Tweening::Tween_1<float>* volumeDownTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _volumeUpTween
    // Size: 0x8
    // Offset: 0x60
    Tweening::Tween_1<float>* volumeUpTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private AudioPitchGainEffect _activePitchGainEffect
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::AudioPitchGainEffect* activePitchGainEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // private AudioPitchGainEffect _inactivePitchGainEffect
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::AudioPitchGainEffect* inactivePitchGainEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // Creating value type constructor for type: CrossFadeAudioSource
    CrossFadeAudioSource(float duration_ = {}, UnityEngine::AudioSource* audioSource1_ = {}, UnityEngine::AudioSource* audioSource2_ = {}, GlobalNamespace::AudioPitchGainEffect* audioPitchGainEffect1_ = {}, GlobalNamespace::AudioPitchGainEffect* audioPitchGainEffect2_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, UnityEngine::AudioSource* activeAudioSource_ = {}, UnityEngine::AudioSource* inactiveAudioSource_ = {}, Tweening::Tween_1<float>* volumeDownTween_ = {}, Tweening::Tween_1<float>* volumeUpTween_ = {}, GlobalNamespace::AudioPitchGainEffect* activePitchGainEffect_ = {}, GlobalNamespace::AudioPitchGainEffect* inactivePitchGainEffect_ = {}) noexcept : duration{duration_}, audioSource1{audioSource1_}, audioSource2{audioSource2_}, audioPitchGainEffect1{audioPitchGainEffect1_}, audioPitchGainEffect2{audioPitchGainEffect2_}, tweeningManager{tweeningManager_}, activeAudioSource{activeAudioSource_}, inactiveAudioSource{inactiveAudioSource_}, volumeDownTween{volumeDownTween_}, volumeUpTween{volumeUpTween_}, activePitchGainEffect{activePitchGainEffect_}, inactivePitchGainEffect{inactivePitchGainEffect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Single _duration
    float _get__duration();
    // Set instance field: private System.Single _duration
    void _set__duration(float value);
    // Get instance field: private UnityEngine.AudioSource _audioSource1
    UnityEngine::AudioSource* _get__audioSource1();
    // Set instance field: private UnityEngine.AudioSource _audioSource1
    void _set__audioSource1(UnityEngine::AudioSource* value);
    // Get instance field: private UnityEngine.AudioSource _audioSource2
    UnityEngine::AudioSource* _get__audioSource2();
    // Set instance field: private UnityEngine.AudioSource _audioSource2
    void _set__audioSource2(UnityEngine::AudioSource* value);
    // Get instance field: private AudioPitchGainEffect _audioPitchGainEffect1
    GlobalNamespace::AudioPitchGainEffect* _get__audioPitchGainEffect1();
    // Set instance field: private AudioPitchGainEffect _audioPitchGainEffect1
    void _set__audioPitchGainEffect1(GlobalNamespace::AudioPitchGainEffect* value);
    // Get instance field: private AudioPitchGainEffect _audioPitchGainEffect2
    GlobalNamespace::AudioPitchGainEffect* _get__audioPitchGainEffect2();
    // Set instance field: private AudioPitchGainEffect _audioPitchGainEffect2
    void _set__audioPitchGainEffect2(GlobalNamespace::AudioPitchGainEffect* value);
    // Get instance field: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager* _get__tweeningManager();
    // Set instance field: private readonly Tweening.TweeningManager _tweeningManager
    void _set__tweeningManager(Tweening::TweeningManager* value);
    // Get instance field: private UnityEngine.AudioSource _activeAudioSource
    UnityEngine::AudioSource* _get__activeAudioSource();
    // Set instance field: private UnityEngine.AudioSource _activeAudioSource
    void _set__activeAudioSource(UnityEngine::AudioSource* value);
    // Get instance field: private UnityEngine.AudioSource _inactiveAudioSource
    UnityEngine::AudioSource* _get__inactiveAudioSource();
    // Set instance field: private UnityEngine.AudioSource _inactiveAudioSource
    void _set__inactiveAudioSource(UnityEngine::AudioSource* value);
    // Get instance field: private Tweening.Tween`1<System.Single> _volumeDownTween
    Tweening::Tween_1<float>* _get__volumeDownTween();
    // Set instance field: private Tweening.Tween`1<System.Single> _volumeDownTween
    void _set__volumeDownTween(Tweening::Tween_1<float>* value);
    // Get instance field: private Tweening.Tween`1<System.Single> _volumeUpTween
    Tweening::Tween_1<float>* _get__volumeUpTween();
    // Set instance field: private Tweening.Tween`1<System.Single> _volumeUpTween
    void _set__volumeUpTween(Tweening::Tween_1<float>* value);
    // Get instance field: private AudioPitchGainEffect _activePitchGainEffect
    GlobalNamespace::AudioPitchGainEffect* _get__activePitchGainEffect();
    // Set instance field: private AudioPitchGainEffect _activePitchGainEffect
    void _set__activePitchGainEffect(GlobalNamespace::AudioPitchGainEffect* value);
    // Get instance field: private AudioPitchGainEffect _inactivePitchGainEffect
    GlobalNamespace::AudioPitchGainEffect* _get__inactivePitchGainEffect();
    // Set instance field: private AudioPitchGainEffect _inactivePitchGainEffect
    void _set__inactivePitchGainEffect(GlobalNamespace::AudioPitchGainEffect* value);
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x10F4FE4
    UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x10F5000
    void set_clip(UnityEngine::AudioClip* value);
    // public System.Void set_pitch(System.Single value)
    // Offset: 0x10F5044
    void set_pitch(float value);
    // public System.Void set_time(System.Single value)
    // Offset: 0x10F5090
    void set_time(float value);
    // public System.Boolean get_isPlaying()
    // Offset: 0x10F50DC
    bool get_isPlaying();
    // protected System.Void Awake()
    // Offset: 0x10F50F8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10F5250
    void OnDestroy();
    // public System.Void PlayPitchGainEffect(System.Single volumeScale)
    // Offset: 0x10F52E8
    void PlayPitchGainEffect(float volumeScale);
    // public System.Void InterruptLastPitchGainEffect()
    // Offset: 0x10F5308
    void InterruptLastPitchGainEffect();
    // public System.Void CrossFade(System.Single toSongTime, System.Single toVolume)
    // Offset: 0x10F5324
    void CrossFade(float toSongTime, float toVolume);
    // public System.Void Play()
    // Offset: 0x10F54F4
    void Play();
    // public System.Void Stop()
    // Offset: 0x10F5510
    void Stop();
    // private System.Void <Awake>b__21_0(System.Single val)
    // Offset: 0x10F5580
    void $Awake$b__21_0(float val);
    // private System.Void <Awake>b__21_1(System.Single val)
    // Offset: 0x10F559C
    void $Awake$b__21_1(float val);
    // private System.Void <CrossFade>b__25_0(System.Single val)
    // Offset: 0x10F55B8
    void $CrossFade$b__25_0(float val);
    // private System.Void <CrossFade>b__25_1(System.Single val)
    // Offset: 0x10F55D4
    void $CrossFade$b__25_1(float val);
    // private System.Void <CrossFade>b__25_2()
    // Offset: 0x10F55F0
    void $CrossFade$b__25_2();
    // public System.Void .ctor()
    // Offset: 0x10F556C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrossFadeAudioSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CrossFadeAudioSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrossFadeAudioSource*, creationType>()));
    }
  }; // CrossFadeAudioSource
  #pragma pack(pop)
  static check_size<sizeof(CrossFadeAudioSource), 112 + sizeof(GlobalNamespace::AudioPitchGainEffect*)> __GlobalNamespace_CrossFadeAudioSourceSizeCheck;
  static_assert(sizeof(CrossFadeAudioSource) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrossFadeAudioSource*, "", "CrossFadeAudioSource");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::set_clip
// Il2CppName: set_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(UnityEngine::AudioClip*)>(&GlobalNamespace::CrossFadeAudioSource::set_clip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "set_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::set_pitch
// Il2CppName: set_pitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::set_pitch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "set_pitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::PlayPitchGainEffect
// Il2CppName: PlayPitchGainEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::PlayPitchGainEffect)> {
  static const MethodInfo* get() {
    static auto* volumeScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "PlayPitchGainEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volumeScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::InterruptLastPitchGainEffect
// Il2CppName: InterruptLastPitchGainEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::InterruptLastPitchGainEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "InterruptLastPitchGainEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::CrossFade
// Il2CppName: CrossFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float, float)>(&GlobalNamespace::CrossFadeAudioSource::CrossFade)> {
  static const MethodInfo* get() {
    static auto* toSongTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "CrossFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toSongTime, toVolume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::$Awake$b__21_0
// Il2CppName: <Awake>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::$Awake$b__21_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "<Awake>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::$Awake$b__21_1
// Il2CppName: <Awake>b__21_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::$Awake$b__21_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "<Awake>b__21_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_0
// Il2CppName: <CrossFade>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "<CrossFade>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_1
// Il2CppName: <CrossFade>b__25_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)(float)>(&GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "<CrossFade>b__25_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_2
// Il2CppName: <CrossFade>b__25_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CrossFadeAudioSource::*)()>(&GlobalNamespace::CrossFadeAudioSource::$CrossFade$b__25_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CrossFadeAudioSource*), "<CrossFade>b__25_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CrossFadeAudioSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
