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
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: MockNoteData
  class MockNoteData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: MockObstacleData
  class MockObstacleData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MockBeatmapDataConverter
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MockBeatmapDataConverter : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MockBeatmapDataConverter::$$c
    class $$c;
    // Creating value type constructor for type: MockBeatmapDataConverter
    MockBeatmapDataConverter() noexcept {}
    // static public MockBeatmapData ToMockBeatmapData(BeatmapData beatmapData)
    // Offset: 0x109D984
    static GlobalNamespace::MockBeatmapData* ToMockBeatmapData(GlobalNamespace::BeatmapData* beatmapData);
    // static public MockNoteData ToMockNoteData(NoteData noteData)
    // Offset: 0x109E290
    static GlobalNamespace::MockNoteData* ToMockNoteData(GlobalNamespace::NoteData* noteData);
    // static public MockObstacleData ToMockObstacleData(ObstacleData obstacleData)
    // Offset: 0x109E32C
    static GlobalNamespace::MockObstacleData* ToMockObstacleData(GlobalNamespace::ObstacleData* obstacleData);
  }; // MockBeatmapDataConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapDataConverter*, "", "MockBeatmapDataConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockBeatmapData
// Il2CppName: ToMockBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockBeatmapData* (*)(GlobalNamespace::BeatmapData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockBeatmapData)> {
  const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockNoteData
// Il2CppName: ToMockNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockNoteData* (*)(GlobalNamespace::NoteData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockNoteData)> {
  const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockBeatmapDataConverter::ToMockObstacleData
// Il2CppName: ToMockObstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockObstacleData* (*)(GlobalNamespace::ObstacleData*)>(&GlobalNamespace::MockBeatmapDataConverter::ToMockObstacleData)> {
  const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockBeatmapDataConverter*), "ToMockObstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData});
  }
};
