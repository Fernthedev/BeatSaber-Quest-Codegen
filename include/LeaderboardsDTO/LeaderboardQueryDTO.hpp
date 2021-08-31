// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardQueryDTO : public ::Il2CppObject {
    public:
    // Nested type: LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope
    struct ScoresScope;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope
    // [TokenAttribute] Offset: FFFFFFFF
    struct ScoresScope/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ScoresScope
      constexpr ScoresScope(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static constexpr const int Global = 0;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Global();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static void _set_Global(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static constexpr const int Friends = 1;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Friends();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static void _set_Friends(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope
    #pragma pack(pop)
    static check_size<sizeof(LeaderboardQueryDTO::ScoresScope), 0 + sizeof(int)> __LeaderboardsDTO_LeaderboardQueryDTO_ScoresScopeSizeCheck;
    static_assert(sizeof(LeaderboardQueryDTO::ScoresScope) == 0x4);
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
    // public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope scope
    // Size: 0x4
    // Offset: 0x20
    LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope;
    // Field size check
    static_assert(sizeof(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope) == 0x4);
    // Padding between fields: scope and: friendsUserIds
    char __padding3[0x4] = {};
    // public System.String[] friendsUserIds
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* friendsUserIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Boolean includedScoreWithModifiers
    // Size: 0x1
    // Offset: 0x30
    bool includedScoreWithModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LeaderboardQueryDTO
    LeaderboardQueryDTO(::Il2CppString* leaderboardId_ = {}, int count_ = {}, int fromRank_ = {}, LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope_ = {}, ::Array<::Il2CppString*>* friendsUserIds_ = {}, bool includedScoreWithModifiers_ = {}) noexcept : leaderboardId{leaderboardId_}, count{count_}, fromRank{fromRank_}, scope{scope_}, friendsUserIds{friendsUserIds_}, includedScoreWithModifiers{includedScoreWithModifiers_} {}
    // Get instance field: public System.String leaderboardId
    ::Il2CppString* _get_leaderboardId();
    // Set instance field: public System.String leaderboardId
    void _set_leaderboardId(::Il2CppString* value);
    // Get instance field: public System.Int32 count
    int _get_count();
    // Set instance field: public System.Int32 count
    void _set_count(int value);
    // Get instance field: public System.Int32 fromRank
    int _get_fromRank();
    // Set instance field: public System.Int32 fromRank
    void _set_fromRank(int value);
    // Get instance field: public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope scope
    LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_scope();
    // Set instance field: public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope scope
    void _set_scope(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
    // Get instance field: public System.String[] friendsUserIds
    ::Array<::Il2CppString*>* _get_friendsUserIds();
    // Set instance field: public System.String[] friendsUserIds
    void _set_friendsUserIds(::Array<::Il2CppString*>* value);
    // Get instance field: public System.Boolean includedScoreWithModifiers
    bool _get_includedScoreWithModifiers();
    // Set instance field: public System.Boolean includedScoreWithModifiers
    void _set_includedScoreWithModifiers(bool value);
    // public System.Void .ctor()
    // Offset: 0x11490C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardQueryDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LeaderboardQueryDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardQueryDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LeaderboardQueryDTO
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardQueryDTO), 48 + sizeof(bool)> __LeaderboardsDTO_LeaderboardQueryDTOSizeCheck;
  static_assert(sizeof(LeaderboardQueryDTO) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO*, "LeaderboardsDTO", "LeaderboardQueryDTO");
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope, "LeaderboardsDTO", "LeaderboardQueryDTO/ScoresScope");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::LeaderboardQueryDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
