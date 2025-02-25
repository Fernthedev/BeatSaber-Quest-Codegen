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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LocalLeaderboardsModel/ScoreData
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalLeaderboardsModel::ScoreData : public ::Il2CppObject {
    public:
    // public System.Int32 _score
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: score and: playerName
    char __padding0[0x4] = {};
    // public System.String _playerName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean _fullCombo
    // Size: 0x1
    // Offset: 0x20
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: timestamp
    char __padding2[0x7] = {};
    // public System.Int64 _timestamp
    // Size: 0x8
    // Offset: 0x28
    int64_t timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: ScoreData
    ScoreData(int score_ = {}, ::Il2CppString* playerName_ = {}, bool fullCombo_ = {}, int64_t timestamp_ = {}) noexcept : score{score_}, playerName{playerName_}, fullCombo{fullCombo_}, timestamp{timestamp_} {}
    // Get instance field reference: public System.Int32 _score
    int& dyn__score();
    // Get instance field reference: public System.String _playerName
    ::Il2CppString*& dyn__playerName();
    // Get instance field reference: public System.Boolean _fullCombo
    bool& dyn__fullCombo();
    // Get instance field reference: public System.Int64 _timestamp
    int64_t& dyn__timestamp();
    // public System.Void .ctor()
    // Offset: 0x1197E94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalLeaderboardsModel::ScoreData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalLeaderboardsModel::ScoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalLeaderboardsModel::ScoreData*, creationType>()));
    }
  }; // LocalLeaderboardsModel/ScoreData
  #pragma pack(pop)
  static check_size<sizeof(LocalLeaderboardsModel::ScoreData), 40 + sizeof(int64_t)> __GlobalNamespace_LocalLeaderboardsModel_ScoreDataSizeCheck;
  static_assert(sizeof(LocalLeaderboardsModel::ScoreData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardsModel::ScoreData*, "", "LocalLeaderboardsModel/ScoreData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalLeaderboardsModel::ScoreData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
