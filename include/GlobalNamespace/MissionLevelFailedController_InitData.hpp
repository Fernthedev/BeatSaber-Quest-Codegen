// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionLevelFailedController
#include "GlobalNamespace/MissionLevelFailedController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelFailedController/InitData
  class MissionLevelFailedController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x10
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool autoRestart_ = {}) noexcept : autoRestart{autoRestart_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return autoRestart;
    }
    // public System.Void .ctor(System.Boolean autoRestart)
    // Offset: 0x1093B88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelFailedController::InitData* New_ctor(bool autoRestart) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelFailedController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelFailedController::InitData*, creationType>(autoRestart)));
    }
  }; // MissionLevelFailedController/InitData
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelFailedController::InitData), 16 + sizeof(bool)> __GlobalNamespace_MissionLevelFailedController_InitDataSizeCheck;
  static_assert(sizeof(MissionLevelFailedController::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController::InitData*, "", "MissionLevelFailedController/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
