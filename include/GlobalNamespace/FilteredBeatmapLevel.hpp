// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class FilteredBeatmapLevel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevel*/ {
    public:
    // Nested type: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData
    class FilteredBeatmapLevelData;
    // private PreviewDifficultyBeatmapSet[] <previewDifficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // private IBeatmapLevelData <beatmapLevelData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // private readonly IBeatmapLevel _beatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapLevel* beatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // Creating value type constructor for type: FilteredBeatmapLevel
    FilteredBeatmapLevel(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}, GlobalNamespace::IBeatmapLevel* beatmapLevel_ = {}) noexcept : previewDifficultyBeatmapSets{previewDifficultyBeatmapSets_}, beatmapLevelData{beatmapLevelData_}, beatmapLevel{beatmapLevel_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevel
    operator GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Get instance field reference: private PreviewDifficultyBeatmapSet[] <previewDifficultyBeatmapSets>k__BackingField
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*& dyn_$previewDifficultyBeatmapSets$k__BackingField();
    // Get instance field reference: private IBeatmapLevelData <beatmapLevelData>k__BackingField
    GlobalNamespace::IBeatmapLevelData*& dyn_$beatmapLevelData$k__BackingField();
    // Get instance field reference: private readonly IBeatmapLevel _beatmapLevel
    GlobalNamespace::IBeatmapLevel*& dyn__beatmapLevel();
    // public System.String get_levelID()
    // Offset: 0x105CD54
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0x105CE04
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0x105CEB8
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x105CF6C
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x105D020
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x105D0D4
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x105D188
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x105D23C
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x105D2F0
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x105D3A4
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x105D458
    float get_previewDuration();
    // public System.Single get_songDuration()
    // Offset: 0x105D50C
    float get_songDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x105D5C0
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x105D674
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0x105D728
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // private System.Void set_previewDifficultyBeatmapSets(PreviewDifficultyBeatmapSet[] value)
    // Offset: 0x105D730
    void set_previewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x105D8C0
    GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // private System.Void set_beatmapLevelData(IBeatmapLevelData value)
    // Offset: 0x105D8C8
    void set_beatmapLevelData(GlobalNamespace::IBeatmapLevelData* value);
    // public System.Boolean get_isEmpty()
    // Offset: 0x105D8D0
    bool get_isEmpty();
    // public System.Void .ctor(IBeatmapLevel beatmapLevel, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0x105D998
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel* New_ctor(GlobalNamespace::IBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FilteredBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel*, creationType>(beatmapLevel, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x105D738
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x105D7FC
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
  }; // FilteredBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(FilteredBeatmapLevel), 32 + sizeof(GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_FilteredBeatmapLevelSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel*, "", "FilteredBeatmapLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::set_previewDifficultyBeatmapSets
// Il2CppName: set_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FilteredBeatmapLevel::*)(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(&GlobalNamespace::FilteredBeatmapLevel::set_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmapSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "set_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::set_beatmapLevelData
// Il2CppName: set_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FilteredBeatmapLevel::*)(GlobalNamespace::IBeatmapLevelData*)>(&GlobalNamespace::FilteredBeatmapLevel::set_beatmapLevelData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "set_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::GetPreviewAudioClipAsync
// Il2CppName: GetPreviewAudioClipAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* (GlobalNamespace::FilteredBeatmapLevel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::FilteredBeatmapLevel::GetPreviewAudioClipAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "GetPreviewAudioClipAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::FilteredBeatmapLevel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::FilteredBeatmapLevel::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
