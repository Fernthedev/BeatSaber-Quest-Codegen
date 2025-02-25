// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventCallback
  class BeatmapEventCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventCallbackData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEventCallbackData : public ::Il2CppObject {
    public:
    // public readonly BeatmapEventCallback callback
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapEventCallback* callback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventCallback*) == 0x8);
    // public System.Single aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 nextEventIndex
    // Size: 0x4
    // Offset: 0x1C
    int nextEventIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapEventCallbackData
    BeatmapEventCallbackData(GlobalNamespace::BeatmapEventCallback* callback_ = {}, float aheadTime_ = {}, int nextEventIndex_ = {}) noexcept : callback{callback_}, aheadTime{aheadTime_}, nextEventIndex{nextEventIndex_} {}
    // Get instance field reference: public readonly BeatmapEventCallback callback
    GlobalNamespace::BeatmapEventCallback*& dyn_callback();
    // Get instance field reference: public System.Single aheadTime
    float& dyn_aheadTime();
    // Get instance field reference: public System.Int32 nextEventIndex
    int& dyn_nextEventIndex();
    // public System.Void .ctor(BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0x11EB884
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEventCallbackData* New_ctor(GlobalNamespace::BeatmapEventCallback* callback, float aheadTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapEventCallbackData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEventCallbackData*, creationType>(callback, aheadTime)));
    }
  }; // BeatmapEventCallbackData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventCallbackData), 28 + sizeof(int)> __GlobalNamespace_BeatmapEventCallbackDataSizeCheck;
  static_assert(sizeof(BeatmapEventCallbackData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventCallbackData*, "", "BeatmapEventCallbackData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventCallbackData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
