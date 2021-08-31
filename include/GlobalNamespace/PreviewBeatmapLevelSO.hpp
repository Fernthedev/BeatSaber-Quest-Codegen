// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: PreviewBeatmapLevelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewBeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IPreviewBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::PreviewBeatmapLevelSO::$GetPreviewAudioClipAsync$d__51
    struct $GetPreviewAudioClipAsync$d__51;
    // Nested type: GlobalNamespace::PreviewBeatmapLevelSO::$GetCoverImageAsync$d__52
    struct $GetCoverImageAsync$d__52;
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* songName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* songSubName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* songAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* levelAuthorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.AudioClip _previewAudioClip
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AudioClip* previewAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x48
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x4C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x50
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x54
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x58
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x5C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songDuration
    // Size: 0x4
    // Offset: 0x60
    float songDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songDuration and: coverImage
    char __padding12[0x4] = {};
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x80
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // public System.Boolean _ignore360MovementBeatmaps
    // Size: 0x1
    // Offset: 0x88
    bool ignore360MovementBeatmaps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignore360MovementBeatmaps and: no360MovementPreviewDifficultyBeatmapSets
    char __padding17[0x7] = {};
    // private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x90
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: PreviewBeatmapLevelSO
    PreviewBeatmapLevelSO(::Il2CppString* levelID_ = {}, ::Il2CppString* songName_ = {}, ::Il2CppString* songSubName_ = {}, ::Il2CppString* songAuthorName_ = {}, ::Il2CppString* levelAuthorName_ = {}, UnityEngine::AudioClip* previewAudioClip_ = {}, float beatsPerMinute_ = {}, float songTimeOffset_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}, float previewStartTime_ = {}, float previewDuration_ = {}, float songDuration_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo_ = {}, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}, bool ignore360MovementBeatmaps_ = {}, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets_ = {}) noexcept : levelID{levelID_}, songName{songName_}, songSubName{songSubName_}, songAuthorName{songAuthorName_}, levelAuthorName{levelAuthorName_}, previewAudioClip{previewAudioClip_}, beatsPerMinute{beatsPerMinute_}, songTimeOffset{songTimeOffset_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_}, previewStartTime{previewStartTime_}, previewDuration{previewDuration_}, songDuration{songDuration_}, coverImage{coverImage_}, environmentInfo{environmentInfo_}, allDirectionsEnvironmentInfo{allDirectionsEnvironmentInfo_}, previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_}, ignore360MovementBeatmaps{ignore360MovementBeatmaps_}, no360MovementPreviewDifficultyBeatmapSets{no360MovementPreviewDifficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IPreviewBeatmapLevel
    operator GlobalNamespace::IPreviewBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.String _levelID
    ::Il2CppString* _get__levelID();
    // Set instance field: private System.String _levelID
    void _set__levelID(::Il2CppString* value);
    // Get instance field: private System.String _songName
    ::Il2CppString* _get__songName();
    // Set instance field: private System.String _songName
    void _set__songName(::Il2CppString* value);
    // Get instance field: private System.String _songSubName
    ::Il2CppString* _get__songSubName();
    // Set instance field: private System.String _songSubName
    void _set__songSubName(::Il2CppString* value);
    // Get instance field: private System.String _songAuthorName
    ::Il2CppString* _get__songAuthorName();
    // Set instance field: private System.String _songAuthorName
    void _set__songAuthorName(::Il2CppString* value);
    // Get instance field: private System.String _levelAuthorName
    ::Il2CppString* _get__levelAuthorName();
    // Set instance field: private System.String _levelAuthorName
    void _set__levelAuthorName(::Il2CppString* value);
    // Get instance field: private UnityEngine.AudioClip _previewAudioClip
    UnityEngine::AudioClip* _get__previewAudioClip();
    // Set instance field: private UnityEngine.AudioClip _previewAudioClip
    void _set__previewAudioClip(UnityEngine::AudioClip* value);
    // Get instance field: private System.Single _beatsPerMinute
    float _get__beatsPerMinute();
    // Set instance field: private System.Single _beatsPerMinute
    void _set__beatsPerMinute(float value);
    // Get instance field: private System.Single _songTimeOffset
    float _get__songTimeOffset();
    // Set instance field: private System.Single _songTimeOffset
    void _set__songTimeOffset(float value);
    // Get instance field: private System.Single _shuffle
    float _get__shuffle();
    // Set instance field: private System.Single _shuffle
    void _set__shuffle(float value);
    // Get instance field: private System.Single _shufflePeriod
    float _get__shufflePeriod();
    // Set instance field: private System.Single _shufflePeriod
    void _set__shufflePeriod(float value);
    // Get instance field: private System.Single _previewStartTime
    float _get__previewStartTime();
    // Set instance field: private System.Single _previewStartTime
    void _set__previewStartTime(float value);
    // Get instance field: private System.Single _previewDuration
    float _get__previewDuration();
    // Set instance field: private System.Single _previewDuration
    void _set__previewDuration(float value);
    // Get instance field: private System.Single _songDuration
    float _get__songDuration();
    // Set instance field: private System.Single _songDuration
    void _set__songDuration(float value);
    // Get instance field: private UnityEngine.Sprite _coverImage
    UnityEngine::Sprite* _get__coverImage();
    // Set instance field: private UnityEngine.Sprite _coverImage
    void _set__coverImage(UnityEngine::Sprite* value);
    // Get instance field: private EnvironmentInfoSO _environmentInfo
    GlobalNamespace::EnvironmentInfoSO* _get__environmentInfo();
    // Set instance field: private EnvironmentInfoSO _environmentInfo
    void _set__environmentInfo(GlobalNamespace::EnvironmentInfoSO* value);
    // Get instance field: private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    GlobalNamespace::EnvironmentInfoSO* _get__allDirectionsEnvironmentInfo();
    // Set instance field: private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    void _set__allDirectionsEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO* value);
    // Get instance field: private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* _get__previewDifficultyBeatmapSets();
    // Set instance field: private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    void _set__previewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);
    // Get instance field: public System.Boolean _ignore360MovementBeatmaps
    bool _get__ignore360MovementBeatmaps();
    // Set instance field: public System.Boolean _ignore360MovementBeatmaps
    void _set__ignore360MovementBeatmaps(bool value);
    // Get instance field: private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* _get__no360MovementPreviewDifficultyBeatmapSets();
    // Set instance field: private PreviewDifficultyBeatmapSet[] _no360MovementPreviewDifficultyBeatmapSets
    void _set__no360MovementPreviewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);
    // public System.String get_levelID()
    // Offset: 0x113F3E0
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x113F3E8
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x113F3F0
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x113F3F8
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x113F400
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x113F408
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x113F410
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x113F418
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x113F420
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x113F428
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x113F430
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x113F438
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x113F440
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x113F448
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x113F450
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // private System.Void InitData()
    // Offset: 0x113F49C
    void InitData();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x113F5D8
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x113F6FC
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x113F820
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewBeatmapLevelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PreviewBeatmapLevelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewBeatmapLevelSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x113F46C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // PreviewBeatmapLevelSO
  #pragma pack(pop)
  static check_size<sizeof(PreviewBeatmapLevelSO), 144 + sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*)> __GlobalNamespace_PreviewBeatmapLevelSOSizeCheck;
  static_assert(sizeof(PreviewBeatmapLevelSO) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelSO*, "", "PreviewBeatmapLevelSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::InitData
// Il2CppName: InitData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::InitData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "InitData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync
// Il2CppName: GetPreviewAudioClipAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetPreviewAudioClipAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
