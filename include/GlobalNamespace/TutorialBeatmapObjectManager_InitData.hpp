// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialBeatmapObjectManager
#include "GlobalNamespace/TutorialBeatmapObjectManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single cutAngleTolerance
    // Size: 0x4
    // Offset: 0x10
    float cutAngleTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float cutAngleTolerance_ = {}) noexcept : cutAngleTolerance{cutAngleTolerance_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return cutAngleTolerance;
    }
    // Get instance field reference: public readonly System.Single cutAngleTolerance
    float& dyn_cutAngleTolerance();
    // public System.Void .ctor(System.Single cutAngleTolerance)
    // Offset: 0x10766E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectManager::InitData* New_ctor(float cutAngleTolerance) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialBeatmapObjectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectManager::InitData*, creationType>(cutAngleTolerance)));
    }
  }; // TutorialBeatmapObjectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectManager::InitData), 16 + sizeof(float)> __GlobalNamespace_TutorialBeatmapObjectManager_InitDataSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectManager::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialBeatmapObjectManager::InitData*, "", "TutorialBeatmapObjectManager/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
