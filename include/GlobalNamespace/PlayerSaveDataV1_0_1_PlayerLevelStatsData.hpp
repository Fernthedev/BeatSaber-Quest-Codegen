// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerLevelStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerLevelStatsData : public ::Il2CppObject {
    public:
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatmapDifficulty difficulty
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // public System.Int32 highScore
    // Size: 0x4
    // Offset: 0x1C
    int highScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x20
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x24
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: maxRank
    char __padding4[0x3] = {};
    // public RankModel/Rank maxRank
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::RankModel::Rank maxRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // public System.Boolean validScore
    // Size: 0x1
    // Offset: 0x2C
    bool validScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validScore and: playCount
    char __padding6[0x3] = {};
    // public System.Int32 playCount
    // Size: 0x4
    // Offset: 0x30
    int playCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayerLevelStatsData
    PlayerLevelStatsData(::Il2CppString* levelId_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}, int highScore_ = {}, int maxCombo_ = {}, bool fullCombo_ = {}, GlobalNamespace::RankModel::Rank maxRank_ = {}, bool validScore_ = {}, int playCount_ = {}) noexcept : levelId{levelId_}, difficulty{difficulty_}, highScore{highScore_}, maxCombo{maxCombo_}, fullCombo{fullCombo_}, maxRank{maxRank_}, validScore{validScore_}, playCount{playCount_} {}
    // Get instance field: public System.String levelId
    ::Il2CppString* _get_levelId();
    // Set instance field: public System.String levelId
    void _set_levelId(::Il2CppString* value);
    // Get instance field: public BeatmapDifficulty difficulty
    GlobalNamespace::BeatmapDifficulty _get_difficulty();
    // Set instance field: public BeatmapDifficulty difficulty
    void _set_difficulty(GlobalNamespace::BeatmapDifficulty value);
    // Get instance field: public System.Int32 highScore
    int _get_highScore();
    // Set instance field: public System.Int32 highScore
    void _set_highScore(int value);
    // Get instance field: public System.Int32 maxCombo
    int _get_maxCombo();
    // Set instance field: public System.Int32 maxCombo
    void _set_maxCombo(int value);
    // Get instance field: public System.Boolean fullCombo
    bool _get_fullCombo();
    // Set instance field: public System.Boolean fullCombo
    void _set_fullCombo(bool value);
    // Get instance field: public RankModel/Rank maxRank
    GlobalNamespace::RankModel::Rank _get_maxRank();
    // Set instance field: public RankModel/Rank maxRank
    void _set_maxRank(GlobalNamespace::RankModel::Rank value);
    // Get instance field: public System.Boolean validScore
    bool _get_validScore();
    // Set instance field: public System.Boolean validScore
    void _set_validScore(bool value);
    // Get instance field: public System.Int32 playCount
    int _get_playCount();
    // Set instance field: public System.Int32 playCount
    void _set_playCount(int value);
    // public System.Void .ctor()
    // Offset: 0x113B570
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerLevelStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerLevelStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerLevelStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerLevelStatsData), 48 + sizeof(int)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerLevelStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerLevelStatsData) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*, "", "PlayerSaveDataV1_0_1/PlayerLevelStatsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
