// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelFilterModel
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelFilterModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: GlobalNamespace::BeatmapLevelFilterModel::$FilerBeatmapLevelPackCollectionAsync$d__0
    struct $FilerBeatmapLevelPackCollectionAsync$d__0;
    // Nested type: GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2
    struct $GetAllBeatmapLevelsAsync$d__2;
    // Creating value type constructor for type: BeatmapLevelFilterModel
    BeatmapLevelFilterModel() noexcept {}
    // static public System.Threading.Tasks.Task`1<IBeatmapLevelCollection> FilerBeatmapLevelPackCollectionAsync(IBeatmapLevelPack[] beatmapLevelPacks, LevelFilterParams levelFilterParams, PlayerDataModel playerDataModel, AdditionalContentModel additionalContentModel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10C7758
    static System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection*>* FilerBeatmapLevelPackCollectionAsync(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks, GlobalNamespace::LevelFilterParams* levelFilterParams, GlobalNamespace::PlayerDataModel* playerDataModel, GlobalNamespace::AdditionalContentModel* additionalContentModel, System::Threading::CancellationToken cancellationToken);
    // static private System.Boolean LevelContainsText(IPreviewBeatmapLevel beatmapLevel, System.String[] searchTexts)
    // Offset: 0x10C7890
    static bool LevelContainsText(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::Array<::Il2CppString*>* searchTexts);
    // static private System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> GetAllBeatmapLevelsAsync(IBeatmapLevelPack[] beatmapLevelPacks, SongPackMask songPackMask, System.Boolean onlyOwned, AdditionalContentModel additionalContentModel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10C7AE8
    static System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*>* GetAllBeatmapLevelsAsync(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks, GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, GlobalNamespace::AdditionalContentModel* additionalContentModel, System::Threading::CancellationToken cancellationToken);
  }; // BeatmapLevelFilterModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel*, "", "BeatmapLevelFilterModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync
// Il2CppName: FilerBeatmapLevelPackCollectionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelCollection*>* (*)(::Array<GlobalNamespace::IBeatmapLevelPack*>*, GlobalNamespace::LevelFilterParams*, GlobalNamespace::PlayerDataModel*, GlobalNamespace::AdditionalContentModel*, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelPacks = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack"), 1)->byval_arg;
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    static auto* playerDataModel = &::il2cpp_utils::GetClassFromName("", "PlayerDataModel")->byval_arg;
    static auto* additionalContentModel = &::il2cpp_utils::GetClassFromName("", "AdditionalContentModel")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel*), "FilerBeatmapLevelPackCollectionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelPacks, levelFilterParams, playerDataModel, additionalContentModel, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText
// Il2CppName: LevelContainsText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::IPreviewBeatmapLevel*, ::Array<::Il2CppString*>*)>(&GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* searchTexts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel*), "LevelContainsText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel, searchTexts});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync
// Il2CppName: GetAllBeatmapLevelsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*>* (*)(::Array<GlobalNamespace::IBeatmapLevelPack*>*, GlobalNamespace::SongPackMask, bool, GlobalNamespace::AdditionalContentModel*, System::Threading::CancellationToken)>(&GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelPacks = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack"), 1)->byval_arg;
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    static auto* onlyOwned = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* additionalContentModel = &::il2cpp_utils::GetClassFromName("", "AdditionalContentModel")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel*), "GetAllBeatmapLevelsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelPacks, songPackMask, onlyOwned, additionalContentModel, cancellationToken});
  }
};
