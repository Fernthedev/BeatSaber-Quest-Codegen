// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PlayerLevelStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerLevelStatsData : public ::Il2CppObject {
    public:
    // private System.Int32 _highScore
    // Size: 0x4
    // Offset: 0x10
    int highScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCombo
    // Size: 0x4
    // Offset: 0x14
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _fullCombo
    // Size: 0x1
    // Offset: 0x18
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: maxRank
    char __padding2[0x3] = {};
    // private RankModel/Rank _maxRank
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::RankModel::Rank maxRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // private System.Boolean _validScore
    // Size: 0x1
    // Offset: 0x20
    bool validScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validScore and: playCount
    char __padding4[0x3] = {};
    // private System.Int32 _playCount
    // Size: 0x4
    // Offset: 0x24
    int playCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapDifficulty _difficulty
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: difficulty and: beatmapCharacteristic
    char __padding7[0x4] = {};
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // Creating value type constructor for type: PlayerLevelStatsData
    PlayerLevelStatsData(int highScore_ = {}, int maxCombo_ = {}, bool fullCombo_ = {}, GlobalNamespace::RankModel::Rank maxRank_ = {}, bool validScore_ = {}, int playCount_ = {}, ::Il2CppString* levelID_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}) noexcept : highScore{highScore_}, maxCombo{maxCombo_}, fullCombo{fullCombo_}, maxRank{maxRank_}, validScore{validScore_}, playCount{playCount_}, levelID{levelID_}, difficulty{difficulty_}, beatmapCharacteristic{beatmapCharacteristic_} {}
    // Get instance field reference: private System.Int32 _highScore
    int& dyn__highScore();
    // Get instance field reference: private System.Int32 _maxCombo
    int& dyn__maxCombo();
    // Get instance field reference: private System.Boolean _fullCombo
    bool& dyn__fullCombo();
    // Get instance field reference: private RankModel/Rank _maxRank
    GlobalNamespace::RankModel::Rank& dyn__maxRank();
    // Get instance field reference: private System.Boolean _validScore
    bool& dyn__validScore();
    // Get instance field reference: private System.Int32 _playCount
    int& dyn__playCount();
    // Get instance field reference: private System.String _levelID
    ::Il2CppString*& dyn__levelID();
    // Get instance field reference: private BeatmapDifficulty _difficulty
    GlobalNamespace::BeatmapDifficulty& dyn__difficulty();
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // public System.String get_levelID()
    // Offset: 0x113AAE0
    ::Il2CppString* get_levelID();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x113AAE8
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x113AAF0
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Int32 get_highScore()
    // Offset: 0x113AAF8
    int get_highScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0x113AB00
    int get_maxCombo();
    // public System.Boolean get_fullCombo()
    // Offset: 0x113AB08
    bool get_fullCombo();
    // public RankModel/Rank get_maxRank()
    // Offset: 0x113AB10
    GlobalNamespace::RankModel::Rank get_maxRank();
    // public System.Boolean get_validScore()
    // Offset: 0x113AB18
    bool get_validScore();
    // public System.Int32 get_playCount()
    // Offset: 0x113AB20
    int get_playCount();
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1136148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLevelStatsData*, creationType>(levelID, difficulty, beatmapCharacteristic)));
    }
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Int32 highScore, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank maxRank, System.Boolean validScore, System.Int32 playCount)
    // Offset: 0x1139118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, int highScore, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank maxRank, bool validScore, int playCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLevelStatsData*, creationType>(levelID, difficulty, beatmapCharacteristic, highScore, maxCombo, fullCombo, maxRank, validScore, playCount)));
    }
    // public System.Void UpdateScoreData(System.Int32 score, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank rank)
    // Offset: 0x113AB28
    void UpdateScoreData(int score, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank rank);
    // public System.Void IncreaseNumberOfGameplays()
    // Offset: 0x113646C
    void IncreaseNumberOfGameplays();
  }; // PlayerLevelStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerLevelStatsData), 56 + sizeof(GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_PlayerLevelStatsDataSizeCheck;
  static_assert(sizeof(PlayerLevelStatsData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerLevelStatsData*, "", "PlayerLevelStatsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_highScore
// Il2CppName: get_highScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_highScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_highScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_maxCombo
// Il2CppName: get_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_maxCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_fullCombo
// Il2CppName: get_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_fullCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_maxRank
// Il2CppName: get_maxRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::RankModel::Rank (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_maxRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_maxRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_validScore
// Il2CppName: get_validScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_validScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_validScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::get_playCount
// Il2CppName: get_playCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::get_playCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "get_playCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::UpdateScoreData
// Il2CppName: UpdateScoreData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerLevelStatsData::*)(int, int, bool, GlobalNamespace::RankModel::Rank)>(&GlobalNamespace::PlayerLevelStatsData::UpdateScoreData)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxCombo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fullCombo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rank = &::il2cpp_utils::GetClassFromName("", "RankModel/Rank")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "UpdateScoreData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score, maxCombo, fullCombo, rank});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLevelStatsData::IncreaseNumberOfGameplays
// Il2CppName: IncreaseNumberOfGameplays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerLevelStatsData::*)()>(&GlobalNamespace::PlayerLevelStatsData::IncreaseNumberOfGameplays)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLevelStatsData*), "IncreaseNumberOfGameplays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
