// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AudioPlayerBase
#include "GlobalNamespace/AudioPlayerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x81
  #pragma pack(push, 1)
  // Autogenerated type: SongPreviewPlayer
  class SongPreviewPlayer : public GlobalNamespace::AudioPlayerBase {
    public:
    // Nested type: GlobalNamespace::SongPreviewPlayer::InitData
    class InitData;
    // Nested type: GlobalNamespace::SongPreviewPlayer::AudioSourceParams
    class AudioSourceParams;
    // Nested type: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController
    class AudioSourceVolumeController;
    // Nested type: GlobalNamespace::SongPreviewPlayer::$CrossFadeAfterDelayCoroutine$d__27
    class $CrossFadeAfterDelayCoroutine$d__27;
    // [RangeAttribute] Offset: 0xE15128
    // private System.Int32 _channelsCount
    // Size: 0x4
    // Offset: 0x18
    int channelsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: channelsCount and: audioSourcePrefab
    char __padding0[0x4] = {};
    // private UnityEngine.AudioSource _audioSourcePrefab
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioSource* audioSourcePrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioClip _defaultAudioClip
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AudioClip* defaultAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x30
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _crossFadeToAnotherSongSpeed
    // Size: 0x4
    // Offset: 0x34
    float crossFadeToAnotherSongSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _crossFadeToDefaultSpeed
    // Size: 0x4
    // Offset: 0x38
    float crossFadeToDefaultSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeInSpeed
    // Size: 0x4
    // Offset: 0x3C
    float fadeInSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE151C8
    // private SongPreviewPlayer/AudioSourceParams _defaultAudioSourceParams
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SongPreviewPlayer::AudioSourceParams* defaultAudioSourceParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer::AudioSourceParams*) == 0x8);
    // [SpaceAttribute] Offset: 0xE15214
    // private SongPreviewPlayer/AudioSourceParams _othersAudioSourceParams
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SongPreviewPlayer::AudioSourceParams* othersAudioSourceParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer::AudioSourceParams*) == 0x8);
    // [InjectAttribute] Offset: 0xE1524C
    // private readonly SongPreviewPlayer/InitData _initData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SongPreviewPlayer::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE1525C
    // private readonly AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // private SongPreviewPlayer/AudioSourceVolumeController[] _audioSourceControllers
    // Size: 0x8
    // Offset: 0x60
    ::Array<GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*>* audioSourceControllers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*>*) == 0x8);
    // private System.Int32 _activeChannel
    // Size: 0x4
    // Offset: 0x68
    int activeChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _timeToDefaultAudioTransition
    // Size: 0x4
    // Offset: 0x6C
    float timeToDefaultAudioTransition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _transitionAfterDelay
    // Size: 0x1
    // Offset: 0x70
    bool transitionAfterDelay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: transitionAfterDelay and: volumeScale
    char __padding14[0x3] = {};
    // private System.Single _volumeScale
    // Size: 0x4
    // Offset: 0x74
    float volumeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeSpeed
    // Size: 0x4
    // Offset: 0x78
    float fadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _ambientVolumeScale
    // Size: 0x4
    // Offset: 0x7C
    float ambientVolumeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isActiveChannelPaused
    // Size: 0x1
    // Offset: 0x80
    bool isActiveChannelPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SongPreviewPlayer
    SongPreviewPlayer(int channelsCount_ = {}, UnityEngine::AudioSource* audioSourcePrefab_ = {}, UnityEngine::AudioClip* defaultAudioClip_ = {}, float volume_ = {}, float crossFadeToAnotherSongSpeed_ = {}, float crossFadeToDefaultSpeed_ = {}, float fadeInSpeed_ = {}, GlobalNamespace::SongPreviewPlayer::AudioSourceParams* defaultAudioSourceParams_ = {}, GlobalNamespace::SongPreviewPlayer::AudioSourceParams* othersAudioSourceParams_ = {}, GlobalNamespace::SongPreviewPlayer::InitData* initData_ = {}, GlobalNamespace::AudioManagerSO* audioManager_ = {}, ::Array<GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*>* audioSourceControllers_ = {}, int activeChannel_ = {}, float timeToDefaultAudioTransition_ = {}, bool transitionAfterDelay_ = {}, float volumeScale_ = {}, float fadeSpeed_ = {}, float ambientVolumeScale_ = {}, bool isActiveChannelPaused_ = {}) noexcept : channelsCount{channelsCount_}, audioSourcePrefab{audioSourcePrefab_}, defaultAudioClip{defaultAudioClip_}, volume{volume_}, crossFadeToAnotherSongSpeed{crossFadeToAnotherSongSpeed_}, crossFadeToDefaultSpeed{crossFadeToDefaultSpeed_}, fadeInSpeed{fadeInSpeed_}, defaultAudioSourceParams{defaultAudioSourceParams_}, othersAudioSourceParams{othersAudioSourceParams_}, initData{initData_}, audioManager{audioManager_}, audioSourceControllers{audioSourceControllers_}, activeChannel{activeChannel_}, timeToDefaultAudioTransition{timeToDefaultAudioTransition_}, transitionAfterDelay{transitionAfterDelay_}, volumeScale{volumeScale_}, fadeSpeed{fadeSpeed_}, ambientVolumeScale{ambientVolumeScale_}, isActiveChannelPaused{isActiveChannelPaused_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1156F54
    void Awake();
    // protected System.Void Start()
    // Offset: 0x115715C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x115717C
    void OnEnable();
    // private System.Collections.IEnumerator CrossFadeAfterDelayCoroutine(System.Single delay)
    // Offset: 0x1157290
    System::Collections::IEnumerator* CrossFadeAfterDelayCoroutine(float delay);
    // protected System.Void OnDisable()
    // Offset: 0x115733C
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x1157428
    void Update();
    // public System.Void CrossfadeToDefault()
    // Offset: 0x11578AC
    void CrossfadeToDefault();
    // public System.Void CrossfadeToNewDefault(UnityEngine.AudioClip audioClip)
    // Offset: 0x1157A24
    void CrossfadeToNewDefault(UnityEngine::AudioClip* audioClip);
    // public System.Void CrossfadeTo(UnityEngine.AudioClip audioClip, System.Single musicVolume, System.Single startTime, System.Single duration)
    // Offset: 0x1157B48
    void CrossfadeTo(UnityEngine::AudioClip* audioClip, float musicVolume, float startTime, float duration);
    // private System.Void CrossfadeTo(UnityEngine.AudioClip audioClip, System.Single musicVolume, System.Single startTime, System.Single duration, System.Boolean isDefault)
    // Offset: 0x115762C
    void CrossfadeTo(UnityEngine::AudioClip* audioClip, float musicVolume, float startTime, float duration, bool isDefault);
    // public override UnityEngine.AudioClip get_activeAudioClip()
    // Offset: 0x1156EF4
    // Implemented from: AudioPlayerBase
    // Base method: UnityEngine.AudioClip AudioPlayerBase::get_activeAudioClip()
    UnityEngine::AudioClip* get_activeAudioClip();
    // public override System.Void PauseCurrentChannel()
    // Offset: 0x1157B50
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::PauseCurrentChannel()
    void PauseCurrentChannel();
    // public override System.Void UnPauseCurrentChannel()
    // Offset: 0x1157BD0
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::UnPauseCurrentChannel()
    void UnPauseCurrentChannel();
    // public override System.Void FadeOut(System.Single duration)
    // Offset: 0x1157C4C
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::FadeOut(System.Single duration)
    void FadeOut(float duration);
    // public System.Void .ctor()
    // Offset: 0x1157C68
    // Implemented from: AudioPlayerBase
    // Base method: System.Void AudioPlayerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPreviewPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPreviewPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPreviewPlayer*, creationType>()));
    }
  }; // SongPreviewPlayer
  #pragma pack(pop)
  static check_size<sizeof(SongPreviewPlayer), 128 + sizeof(bool)> __GlobalNamespace_SongPreviewPlayerSizeCheck;
  static_assert(sizeof(SongPreviewPlayer) == 0x81);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayer*, "", "SongPreviewPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine
// Il2CppName: CrossFadeAfterDelayCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::SongPreviewPlayer::*)(float)>(&GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine)> {
  const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "CrossFadeAfterDelayCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault
// Il2CppName: CrossfadeToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "CrossfadeToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault
// Il2CppName: CrossfadeToNewDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)(UnityEngine::AudioClip*)>(&GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault)> {
  const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "CrossfadeToNewDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::CrossfadeTo
// Il2CppName: CrossfadeTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)(UnityEngine::AudioClip*, float, float, float)>(&GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* musicVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "CrossfadeTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, musicVolume, startTime, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::CrossfadeTo
// Il2CppName: CrossfadeTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)(UnityEngine::AudioClip*, float, float, float, bool)>(&GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* musicVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isDefault = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "CrossfadeTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, musicVolume, startTime, duration, isDefault});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::get_activeAudioClip
// Il2CppName: get_activeAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::get_activeAudioClip)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "get_activeAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel
// Il2CppName: PauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "PauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel
// Il2CppName: UnPauseCurrentChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)()>(&GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "UnPauseCurrentChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::*)(float)>(&GlobalNamespace::SongPreviewPlayer::FadeOut)> {
  const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
