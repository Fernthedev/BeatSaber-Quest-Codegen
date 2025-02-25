// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionLevelGameplayManager
#include "GlobalNamespace/MissionLevelGameplayManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelGameplayManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelGameplayManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean failOn0Energy
    // Size: 0x1
    // Offset: 0x10
    bool failOn0Energy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool failOn0Energy_ = {}) noexcept : failOn0Energy{failOn0Energy_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return failOn0Energy;
    }
    // Get instance field reference: public readonly System.Boolean failOn0Energy
    bool& dyn_failOn0Energy();
    // public System.Void .ctor(System.Boolean failOn0Energy)
    // Offset: 0x113E23C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelGameplayManager::InitData* New_ctor(bool failOn0Energy) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelGameplayManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelGameplayManager::InitData*, creationType>(failOn0Energy)));
    }
  }; // MissionLevelGameplayManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelGameplayManager::InitData), 16 + sizeof(bool)> __GlobalNamespace_MissionLevelGameplayManager_InitDataSizeCheck;
  static_assert(sizeof(MissionLevelGameplayManager::InitData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager::InitData*, "", "MissionLevelGameplayManager/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
