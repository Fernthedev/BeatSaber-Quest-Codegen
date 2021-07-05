// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapLevelDataExtensions
    BeatmapLevelDataExtensions() noexcept {}
    // static public IDifficultyBeatmap GetDifficultyBeatmap(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty difficulty)
    // Offset: 0x11C8C80
    static GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty difficulty);
    // static public IDifficultyBeatmapSet GetDifficultyBeatmapSet(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x11C8E24
    static GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // static public IDifficultyBeatmap GetDifficultyBeatmap(IBeatmapLevelData beatmapLevelData, System.String beatmapCharacteristicName, BeatmapDifficulty difficulty)
    // Offset: 0x11C9050
    static GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::Il2CppString* beatmapCharacteristicName, GlobalNamespace::BeatmapDifficulty difficulty);
    // static public IDifficultyBeatmapSet GetDifficultyBeatmapSet(IBeatmapLevelData beatmapLevelData, System.String beatmapCharacteristicName)
    // Offset: 0x11C91F4
    static GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::Il2CppString* beatmapCharacteristicName);
  }; // BeatmapLevelDataExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataExtensions*, "", "BeatmapLevelDataExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap
// Il2CppName: GetDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (*)(GlobalNamespace::IBeatmapLevelData*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristic, difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet
// Il2CppName: GetDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmapSet* (*)(GlobalNamespace::IBeatmapLevelData*, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap
// Il2CppName: GetDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (*)(GlobalNamespace::IBeatmapLevelData*, ::Il2CppString*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristicName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristicName, difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet
// Il2CppName: GetDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmapSet* (*)(GlobalNamespace::IBeatmapLevelData*, ::Il2CppString*)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristicName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristicName});
  }
};
