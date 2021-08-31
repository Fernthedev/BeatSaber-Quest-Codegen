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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyBeatmapSerializedMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DifficultyBeatmapSerializedMethods : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DifficultyBeatmapSerializedMethods
    DifficultyBeatmapSerializedMethods() noexcept {}
    // static public System.String SerializedName(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10FB0F8
    static ::Il2CppString* SerializedName(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // DifficultyBeatmapSerializedMethods
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSerializedMethods*, "", "DifficultyBeatmapSerializedMethods");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName
// Il2CppName: SerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::DifficultyBeatmapSerializedMethods::SerializedName)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSerializedMethods*), "SerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
