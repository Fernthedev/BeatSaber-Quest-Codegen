// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightRotationBaseData
  class LightRotationBaseData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor*, "", "BeatmapDataLoader/LightRotationBaseDataConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/LightRotationBaseDataConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::LightRotationBaseDataConvertor : public ::Il2CppObject {
    public:
    // static public LightRotationBaseData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData saveData)
    // Offset: 0x138D0C8
    static ::GlobalNamespace::LightRotationBaseData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData* saveData);
  }; // BeatmapDataLoader/LightRotationBaseDataConvertor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*)>(&GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* saveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saveData});
  }
};
