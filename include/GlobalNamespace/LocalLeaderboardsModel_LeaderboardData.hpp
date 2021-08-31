// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Autogenerated type: LocalLeaderboardsModel/LeaderboardData
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalLeaderboardsModel::LeaderboardData : public ::Il2CppObject {
    public:
    // public System.String _leaderboardId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> _scores
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>*) == 0x8);
    // Creating value type constructor for type: LeaderboardData
    LeaderboardData(::Il2CppString* leaderboardId_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* scores_ = {}) noexcept : leaderboardId{leaderboardId_}, scores{scores_} {}
    // Get instance field: public System.String _leaderboardId
    ::Il2CppString* _get__leaderboardId();
    // Set instance field: public System.String _leaderboardId
    void _set__leaderboardId(::Il2CppString* value);
    // Get instance field: public System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> _scores
    System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* _get__scores();
    // Set instance field: public System.Collections.Generic.List`1<LocalLeaderboardsModel/ScoreData> _scores
    void _set__scores(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>* value);
    // public System.Void .ctor()
    // Offset: 0x10D653C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardsModel::LeaderboardData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalLeaderboardsModel::LeaderboardData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardsModel::LeaderboardData*, creationType>()));
    }
  }; // LocalLeaderboardsModel/LeaderboardData
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardsModel::LeaderboardData), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::LocalLeaderboardsModel::ScoreData*>*)> __GlobalNamespace_LocalLeaderboardsModel_LeaderboardDataSizeCheck;
  static_assert(sizeof(LocalLeaderboardsModel::LeaderboardData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel::LeaderboardData*, "", "LocalLeaderboardsModel/LeaderboardData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardsModel::LeaderboardData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
