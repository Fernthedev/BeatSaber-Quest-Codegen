// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
#include "GlobalNamespace/BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelData
    BeatmapLevelData(UnityEngine::AudioClip* audioClip_ = {}, ::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}) noexcept : audioClip{audioClip_}, difficultyBeatmapSets{difficultyBeatmapSets_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x11CB980
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x11CB988
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(BeatmapLevelDataSO beatmapLevelData, BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, IBeatmapLevel parentLevel)
    // Offset: 0x11CB2F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* New_ctor(GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel* parentLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*, creationType>(beatmapLevelData, beatmapCharacteristicCollection, parentLevel)));
    }
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData), 24 + sizeof(::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview_BeatmapLevelDataSizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::get_audioClip)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmapSet*>* (GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::*)()>(&GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::get_difficultyBeatmapSets)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
