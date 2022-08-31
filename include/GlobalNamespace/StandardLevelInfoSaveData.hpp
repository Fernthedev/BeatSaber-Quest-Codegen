// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData*, "", "StandardLevelInfoSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // Nested type: ::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap
    class DifficultyBeatmap;
    // Nested type: ::GlobalNamespace::StandardLevelInfoSaveData::VersionCheck
    class VersionCheck;
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x18
    ::StringW songName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x20
    ::StringW songSubName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x28
    ::StringW songAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x30
    ::StringW levelAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x38
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x3C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x40
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x44
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x48
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x4C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.String _songFilename
    // Size: 0x8
    // Offset: 0x50
    ::StringW songFilename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _coverImageFilename
    // Size: 0x8
    // Offset: 0x58
    ::StringW coverImageFilename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _environmentName
    // Size: 0x8
    // Offset: 0x60
    ::StringW environmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _allDirectionsEnvironmentName
    // Size: 0x8
    // Offset: 0x68
    ::StringW allDirectionsEnvironmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private StandardLevelInfoSaveData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*> difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>) == 0x8);
    public:
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.0";
    // Get static field: static private System.String kCurrentVersion
    static ::StringW _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::StringW value);
    // static field const value: static private System.String kDefaultBeatmapCharacteristicName
    static constexpr const char* kDefaultBeatmapCharacteristicName = "Standard";
    // Get static field: static private System.String kDefaultBeatmapCharacteristicName
    static ::StringW _get_kDefaultBeatmapCharacteristicName();
    // Set static field: static private System.String kDefaultBeatmapCharacteristicName
    static void _set_kDefaultBeatmapCharacteristicName(::StringW value);
    // Get instance field reference: private System.String _version
    [[deprecated("Use field access instead!")]] ::StringW& dyn__version();
    // Get instance field reference: private System.String _songName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songName();
    // Get instance field reference: private System.String _songSubName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songSubName();
    // Get instance field reference: private System.String _songAuthorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songAuthorName();
    // Get instance field reference: private System.String _levelAuthorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelAuthorName();
    // Get instance field reference: private System.Single _beatsPerMinute
    [[deprecated("Use field access instead!")]] float& dyn__beatsPerMinute();
    // Get instance field reference: private System.Single _songTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__songTimeOffset();
    // Get instance field reference: private System.Single _shuffle
    [[deprecated("Use field access instead!")]] float& dyn__shuffle();
    // Get instance field reference: private System.Single _shufflePeriod
    [[deprecated("Use field access instead!")]] float& dyn__shufflePeriod();
    // Get instance field reference: private System.Single _previewStartTime
    [[deprecated("Use field access instead!")]] float& dyn__previewStartTime();
    // Get instance field reference: private System.Single _previewDuration
    [[deprecated("Use field access instead!")]] float& dyn__previewDuration();
    // Get instance field reference: private System.String _songFilename
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songFilename();
    // Get instance field reference: private System.String _coverImageFilename
    [[deprecated("Use field access instead!")]] ::StringW& dyn__coverImageFilename();
    // Get instance field reference: private System.String _environmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__environmentName();
    // Get instance field reference: private System.String _allDirectionsEnvironmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__allDirectionsEnvironmentName();
    // Get instance field reference: private StandardLevelInfoSaveData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>& dyn__difficultyBeatmapSets();
    // public System.String get_version()
    // Offset: 0x14641B0
    ::StringW get_version();
    // public System.String get_songName()
    // Offset: 0x14641B8
    ::StringW get_songName();
    // public System.String get_songSubName()
    // Offset: 0x14641C0
    ::StringW get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x14641C8
    ::StringW get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x14641D0
    ::StringW get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x14641D8
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x14641E0
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x14641E8
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x14641F0
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x14641F8
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x1464200
    float get_previewDuration();
    // public System.String get_songFilename()
    // Offset: 0x1464208
    ::StringW get_songFilename();
    // public System.String get_coverImageFilename()
    // Offset: 0x1464210
    ::StringW get_coverImageFilename();
    // public System.String get_environmentName()
    // Offset: 0x1464218
    ::StringW get_environmentName();
    // public System.String get_allDirectionsEnvironmentName()
    // Offset: 0x1464220
    ::StringW get_allDirectionsEnvironmentName();
    // public StandardLevelInfoSaveData/DifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x1464228
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*> get_difficultyBeatmapSets();
    // public System.Boolean get_hasAllData()
    // Offset: 0x1464328
    bool get_hasAllData();
    // public System.Void .ctor(System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, System.String songFilename, System.String coverImageFilename, System.String environmentName, System.String allDirectionsEnvironmentName, StandardLevelInfoSaveData/DifficultyBeatmapSet[] difficultyBeatmapSets)
    // Offset: 0x1464230
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData* New_ctor(::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, ::StringW songFilename, ::StringW coverImageFilename, ::StringW environmentName, ::StringW allDirectionsEnvironmentName, ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*> difficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelInfoSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData*, creationType>(songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, songFilename, coverImageFilename, environmentName, allDirectionsEnvironmentName, difficultyBeatmapSets)));
    }
    // public System.Void SetSongFilename(System.String songFilename)
    // Offset: 0x146438C
    void SetSongFilename(::StringW songFilename);
    // public System.String SerializeToJSONString()
    // Offset: 0x1464394
    ::StringW SerializeToJSONString();
    // static public StandardLevelInfoSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0x146439C
    static ::GlobalNamespace::StandardLevelInfoSaveData* DeserializeFromJSONString(::StringW stringData);
  }; // StandardLevelInfoSaveData
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData), 112 + sizeof(::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*>)> __GlobalNamespace_StandardLevelInfoSaveDataSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_songFilename
// Il2CppName: get_songFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_songFilename)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_songFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename
// Il2CppName: get_coverImageFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_coverImageFilename)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_coverImageFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_environmentName
// Il2CppName: get_environmentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_environmentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_environmentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName
// Il2CppName: get_allDirectionsEnvironmentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_allDirectionsEnvironmentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_allDirectionsEnvironmentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*> (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_difficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData
// Il2CppName: get_hasAllData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::get_hasAllData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "get_hasAllData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::SetSongFilename
// Il2CppName: SetSongFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelInfoSaveData::*)(::StringW)>(&GlobalNamespace::StandardLevelInfoSaveData::SetSongFilename)> {
  static const MethodInfo* get() {
    static auto* songFilename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "SetSongFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songFilename});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::SerializeToJSONString
// Il2CppName: SerializeToJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::SerializeToJSONString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "SerializeToJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString
// Il2CppName: DeserializeFromJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (*)(::StringW)>(&GlobalNamespace::StandardLevelInfoSaveData::DeserializeFromJSONString)> {
  static const MethodInfo* get() {
    static auto* stringData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData*), "DeserializeFromJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringData});
  }
};
