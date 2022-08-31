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
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataObstaclesMergingTransform
  class BeatmapDataObstaclesMergingTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesMergingTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesMergingTransform*, "", "BeatmapDataObstaclesMergingTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataObstaclesMergingTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataObstaclesMergingTransform : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapDataObstaclesMergingTransform::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x138E070
    static ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static private System.Boolean CanBeMerged(ObstacleData firstObstacle, ObstacleData secondObstacle)
    // Offset: 0x138E20C
    static bool CanBeMerged(::GlobalNamespace::ObstacleData* firstObstacle, ::GlobalNamespace::ObstacleData* secondObstacle);
  }; // BeatmapDataObstaclesMergingTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged
// Il2CppName: CanBeMerged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleData*)>(&GlobalNamespace::BeatmapDataObstaclesMergingTransform::CanBeMerged)> {
  static const MethodInfo* get() {
    static auto* firstObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* secondObstacle = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesMergingTransform*), "CanBeMerged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstObstacle, secondObstacle});
  }
};
