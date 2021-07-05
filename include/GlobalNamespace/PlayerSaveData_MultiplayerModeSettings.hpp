// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/MultiplayerModeSettings
  class PlayerSaveData::MultiplayerModeSettings : public ::Il2CppObject {
    public:
    // public System.Int32 createServerNumberOfPlayers
    // Size: 0x4
    // Offset: 0x10
    int createServerNumberOfPlayers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: createServerNumberOfPlayers and: quickPlayDifficulty
    char __padding0[0x4] = {};
    // public System.String quickPlayDifficulty
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* quickPlayDifficulty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Byte[] quickPlaySongPackMask
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* quickPlaySongPackMask;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.String quickPlaySongPackMaskSerializedName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* quickPlaySongPackMaskSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MultiplayerModeSettings
    MultiplayerModeSettings(int createServerNumberOfPlayers_ = {}, ::Il2CppString* quickPlayDifficulty_ = {}, ::Array<uint8_t>* quickPlaySongPackMask_ = {}, ::Il2CppString* quickPlaySongPackMaskSerializedName_ = {}) noexcept : createServerNumberOfPlayers{createServerNumberOfPlayers_}, quickPlayDifficulty{quickPlayDifficulty_}, quickPlaySongPackMask{quickPlaySongPackMask_}, quickPlaySongPackMaskSerializedName{quickPlaySongPackMaskSerializedName_} {}
    // public System.Void .ctor()
    // Offset: 0x1055AE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::MultiplayerModeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::MultiplayerModeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::MultiplayerModeSettings*, creationType>()));
    }
  }; // PlayerSaveData/MultiplayerModeSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::MultiplayerModeSettings), 40 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayerSaveData_MultiplayerModeSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::MultiplayerModeSettings) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::MultiplayerModeSettings*, "", "PlayerSaveData/MultiplayerModeSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::MultiplayerModeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
