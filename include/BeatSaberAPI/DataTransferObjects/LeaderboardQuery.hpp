// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.ScoresScope
#include "BeatSaberAPI/DataTransferObjects/ScoresScope.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardQuery
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardQuery : public ::Il2CppObject {
    public:
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 fromRank
    // Size: 0x4
    // Offset: 0x1C
    int fromRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public BeatSaberAPI.DataTransferObjects.ScoresScope scope
    // Size: 0x4
    // Offset: 0x20
    BeatSaberAPI::DataTransferObjects::ScoresScope scope;
    // Field size check
    static_assert(sizeof(BeatSaberAPI::DataTransferObjects::ScoresScope) == 0x4);
    // Padding between fields: scope and: friendsUserIds
    char __padding3[0x4] = {};
    // public System.String[] friendsUserIds
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* friendsUserIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean onlyWithSpecificGameplayModifiers
    // Size: 0x1
    // Offset: 0x30
    bool onlyWithSpecificGameplayModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onlyWithSpecificGameplayModifiers and: gameplayModifiers
    char __padding5[0x7] = {};
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*) == 0x8);
    // Creating value type constructor for type: LeaderboardQuery
    LeaderboardQuery(::Il2CppString* leaderboardId_ = {}, int count_ = {}, int fromRank_ = {}, BeatSaberAPI::DataTransferObjects::ScoresScope scope_ = {}, ::Array<::Il2CppString*>* friendsUserIds_ = {}, bool onlyWithSpecificGameplayModifiers_ = {}, ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers_ = {}) noexcept : leaderboardId{leaderboardId_}, count{count_}, fromRank{fromRank_}, scope{scope_}, friendsUserIds{friendsUserIds_}, onlyWithSpecificGameplayModifiers{onlyWithSpecificGameplayModifiers_}, gameplayModifiers{gameplayModifiers_} {}
    // Get instance field reference: public System.String leaderboardId
    ::Il2CppString*& dyn_leaderboardId();
    // Get instance field reference: public System.Int32 count
    int& dyn_count();
    // Get instance field reference: public System.Int32 fromRank
    int& dyn_fromRank();
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.ScoresScope scope
    BeatSaberAPI::DataTransferObjects::ScoresScope& dyn_scope();
    // Get instance field reference: public System.String[] friendsUserIds
    ::Array<::Il2CppString*>*& dyn_friendsUserIds();
    // Get instance field reference: public System.Boolean onlyWithSpecificGameplayModifiers
    bool& dyn_onlyWithSpecificGameplayModifiers();
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] gameplayModifiers
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*& dyn_gameplayModifiers();
    // public System.Void .ctor()
    // Offset: 0x11DEE54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardQuery* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::LeaderboardQuery::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardQuery*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardQuery
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardQuery), 56 + sizeof(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*)> __BeatSaberAPI_DataTransferObjects_LeaderboardQuerySizeCheck;
  static_assert(sizeof(LeaderboardQuery) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardQuery*, "BeatSaberAPI.DataTransferObjects", "LeaderboardQuery");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::LeaderboardQuery::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
