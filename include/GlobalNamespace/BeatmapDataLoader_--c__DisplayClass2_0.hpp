// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapDataLoader/BpmChangeData
#include "GlobalNamespace/BeatmapDataLoader_BpmChangeData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BeatmapDataLoader::$$c__DisplayClass2_0/*, public System::ValueType*/ {
    public:
    // public System.Int32 bpmChangesDataIdx
    // Size: 0x4
    // Offset: 0x0
    int bpmChangesDataIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bpmChangesDataIdx and: bpmChangesData
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<BeatmapDataLoader/BpmChangeData> bpmChangesData
    // Size: 0x8
    // Offset: 0x8
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>* bpmChangesData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>*) == 0x8);
    // public BeatmapDataLoader <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapDataLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDataLoader*) == 0x8);
    // public System.Single shuffle
    // Size: 0x4
    // Offset: 0x18
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single shufflePeriod
    // Size: 0x4
    // Offset: 0x1C
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    constexpr $$c__DisplayClass2_0(int bpmChangesDataIdx_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>* bpmChangesData_ = {}, GlobalNamespace::BeatmapDataLoader* $$4__this_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}) noexcept : bpmChangesDataIdx{bpmChangesDataIdx_}, bpmChangesData{bpmChangesData_}, $$4__this{$$4__this_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 bpmChangesDataIdx
    int& dyn_bpmChangesDataIdx();
    // Get instance field reference: public System.Collections.Generic.List`1<BeatmapDataLoader/BpmChangeData> bpmChangesData
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapDataLoader::BpmChangeData>*& dyn_bpmChangesData();
    // Get instance field reference: public BeatmapDataLoader <>4__this
    GlobalNamespace::BeatmapDataLoader*& dyn_$$4__this();
    // Get instance field reference: public System.Single shuffle
    float& dyn_shuffle();
    // Get instance field reference: public System.Single shufflePeriod
    float& dyn_shufflePeriod();
  }; // BeatmapDataLoader/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataLoader::$$c__DisplayClass2_0), 28 + sizeof(float)> __GlobalNamespace_BeatmapDataLoader_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(BeatmapDataLoader::$$c__DisplayClass2_0) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0, "", "BeatmapDataLoader/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
