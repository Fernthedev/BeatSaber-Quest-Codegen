// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerMissionStatsData
  class PlayerSaveDataV1_0_1::PlayerMissionStatsData : public ::Il2CppObject {
    public:
    // public System.String missionId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* missionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean cleared
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerMissionStatsData
    PlayerMissionStatsData(::Il2CppString* missionId_ = {}, bool cleared_ = {}) noexcept : missionId{missionId_}, cleared{cleared_} {}
    // public System.Void .ctor()
    // Offset: 0x1059390
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerMissionStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerMissionStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerMissionStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerMissionStatsData), 24 + sizeof(bool)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerMissionStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerMissionStatsData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*, "", "PlayerSaveDataV1_0_1/PlayerMissionStatsData");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
