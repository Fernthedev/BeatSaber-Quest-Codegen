// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/GuestPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::GuestPlayer : public ::Il2CppObject {
    public:
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GuestPlayer
    GuestPlayer(::Il2CppString* playerName_ = {}) noexcept : playerName{playerName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return playerName;
    }
    // Get instance field reference: public System.String playerName
    ::Il2CppString*& dyn_playerName();
    // public System.Void .ctor()
    // Offset: 0x11F6E0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::GuestPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::GuestPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::GuestPlayer*, creationType>()));
    }
  }; // PlayerSaveData/GuestPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::GuestPlayer), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayerSaveData_GuestPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveData::GuestPlayer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GuestPlayer*, "", "PlayerSaveData/GuestPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::GuestPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
