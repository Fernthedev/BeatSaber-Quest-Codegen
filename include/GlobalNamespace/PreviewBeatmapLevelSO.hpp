// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // public System.String get_levelID()
    // Offset: 0x10A7260
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x10A7268
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x10A7270
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x10A7278
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x10A7280
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x10A7288
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x10A7290
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x10A7298
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x10A72A0
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x10A72A8
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x10A72B0
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x10A72B8
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x10A72C0
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x10A72C8
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x10A72D0
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // private System.Void InitData()
    // Offset: 0x10A731C
    void InitData();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10A7458
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10A757C
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // protected override System.Void OnEnable()
    // Offset: 0x10A72EC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x10A76A0
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
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::InitData
// Il2CppName: InitData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::InitData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "InitData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync
// Il2CppName: GetPreviewAudioClipAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync)> {
  const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetPreviewAudioClipAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync)> {
  const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
