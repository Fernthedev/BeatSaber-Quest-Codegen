// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IPreviewBeatmapLevel because it is already included!
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData
    class BeatmapLevelData;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetPreviewAudioClipAsync$d__33
    struct $GetPreviewAudioClipAsync$d__33;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::$GetCoverImageAsync$d__34
    struct $GetCoverImageAsync$d__34;
    // private IPreviewBeatmapLevel _level
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IPreviewBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelFromPreview
    BeatmapLevelFromPreview(GlobalNamespace::IPreviewBeatmapLevel* level_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* beatmapLevelData_ = {}) noexcept : level{level_}, beatmapLevelData{beatmapLevelData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Get instance field reference: private IPreviewBeatmapLevel _level
    GlobalNamespace::IPreviewBeatmapLevel*& dyn__level();
    // Get instance field reference: private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData _beatmapLevelData
    GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*& dyn__beatmapLevelData();
    // public System.String get_levelID()
    // Offset: 0x11EDAB8
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x11EDB68
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x11EDC1C
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x11EDCD0
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x11EDD84
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x11EDE38
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x11EDEEC
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x11EDFA0
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x11EE054
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x11EE108
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x11EE1BC
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x11EE270
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x11EE324
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x11EE3D8
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x11EE48C
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x11EE540
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Void .ctor(IPreviewBeatmapLevel previewLevel)
    // Offset: 0x11ED5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview* New_ctor(GlobalNamespace::IPreviewBeatmapLevel* previewLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*, creationType>(previewLevel)));
    }
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11EE548
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11EE66C
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void LoadData(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, BeatmapLevelDataSO beatmapLevelData)
    // Offset: 0x11ED5FC
    void LoadData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData);
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview), 24 + sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_BeatmapLevelFromPreviewSizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::GetPreviewAudioClipAsync
// Il2CppName: GetPreviewAudioClipAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)(System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::GetPreviewAudioClipAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "GetPreviewAudioClipAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)(System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::*)(GlobalNamespace::BeatmapCharacteristicCollectionSO*, GlobalNamespace::BeatmapLevelDataSO*)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::LoadData)> {
  static const MethodInfo* get() {
    static auto* beatmapCharacteristicCollection = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicCollectionSO")->byval_arg;
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelDataSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapCharacteristicCollection, beatmapLevelData});
  }
};
