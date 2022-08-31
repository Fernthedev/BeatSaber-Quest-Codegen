// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEnvironmentHelper
  class BeatmapEnvironmentHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEnvironmentHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEnvironmentHelper*, "", "BeatmapEnvironmentHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEnvironmentHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapEnvironmentHelper : public ::Il2CppObject {
    public:
    // static public EnvironmentInfoSO GetEnvironmentInfo(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x152C004
    static ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfo(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // BeatmapEnvironmentHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEnvironmentHelper::GetEnvironmentInfo
// Il2CppName: GetEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::BeatmapEnvironmentHelper::GetEnvironmentInfo)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEnvironmentHelper*), "GetEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
