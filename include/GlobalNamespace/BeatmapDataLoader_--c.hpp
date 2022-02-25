// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapDataLoader::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::$$c*, "", "BeatmapDataLoader/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapDataLoader/<>c <>9
    static GlobalNamespace::BeatmapDataLoader::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapDataLoader/<>c <>9
    static void _set_$$9(GlobalNamespace::BeatmapDataLoader::$$c* value);
    // Get static field: static public System.Comparison`1<BeatmapSaveData/NoteData> <>9__2_0
    static System::Comparison_1<GlobalNamespace::BeatmapSaveData::NoteData*>* _get_$$9__2_0();
    // Set static field: static public System.Comparison`1<BeatmapSaveData/NoteData> <>9__2_0
    static void _set_$$9__2_0(System::Comparison_1<GlobalNamespace::BeatmapSaveData::NoteData*>* value);
    // Get static field: static public System.Comparison`1<BeatmapSaveData/WaypointData> <>9__2_1
    static System::Comparison_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* _get_$$9__2_1();
    // Set static field: static public System.Comparison`1<BeatmapSaveData/WaypointData> <>9__2_1
    static void _set_$$9__2_1(System::Comparison_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* value);
    // Get static field: static public System.Comparison`1<BeatmapSaveData/ObstacleData> <>9__2_2
    static System::Comparison_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* _get_$$9__2_2();
    // Set static field: static public System.Comparison`1<BeatmapSaveData/ObstacleData> <>9__2_2
    static void _set_$$9__2_2(System::Comparison_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B48888
    static void _cctor();
    // System.Int32 <GetBeatmapDataFromBeatmapSaveData>b__2_0(BeatmapSaveData/NoteData x, BeatmapSaveData/NoteData y)
    // Offset: 0x2B488F4
    int $GetBeatmapDataFromBeatmapSaveData$b__2_0(GlobalNamespace::BeatmapSaveData::NoteData* x, GlobalNamespace::BeatmapSaveData::NoteData* y);
    // System.Int32 <GetBeatmapDataFromBeatmapSaveData>b__2_1(BeatmapSaveData/WaypointData x, BeatmapSaveData/WaypointData y)
    // Offset: 0x2B48924
    int $GetBeatmapDataFromBeatmapSaveData$b__2_1(GlobalNamespace::BeatmapSaveData::WaypointData* x, GlobalNamespace::BeatmapSaveData::WaypointData* y);
    // System.Int32 <GetBeatmapDataFromBeatmapSaveData>b__2_2(BeatmapSaveData/ObstacleData x, BeatmapSaveData/ObstacleData y)
    // Offset: 0x2B48954
    int $GetBeatmapDataFromBeatmapSaveData$b__2_2(GlobalNamespace::BeatmapSaveData::ObstacleData* x, GlobalNamespace::BeatmapSaveData::ObstacleData* y);
    // public System.Void .ctor()
    // Offset: 0x2B488EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataLoader::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::$$c*, creationType>()));
    }
  }; // BeatmapDataLoader/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapDataLoader::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_0
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapDataLoader::$$c::*)(GlobalNamespace::BeatmapSaveData::NoteData*, GlobalNamespace::BeatmapSaveData::NoteData*)>(&GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteData")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::$$c*), "<GetBeatmapDataFromBeatmapSaveData>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_1
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapDataLoader::$$c::*)(GlobalNamespace::BeatmapSaveData::WaypointData*, GlobalNamespace::BeatmapSaveData::WaypointData*)>(&GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/WaypointData")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/WaypointData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::$$c*), "<GetBeatmapDataFromBeatmapSaveData>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_2
// Il2CppName: <GetBeatmapDataFromBeatmapSaveData>b__2_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapDataLoader::$$c::*)(GlobalNamespace::BeatmapSaveData::ObstacleData*, GlobalNamespace::BeatmapSaveData::ObstacleData*)>(&GlobalNamespace::BeatmapDataLoader::$$c::$GetBeatmapDataFromBeatmapSaveData$b__2_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ObstacleData")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData/ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::$$c*), "<GetBeatmapDataFromBeatmapSaveData>b__2_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
