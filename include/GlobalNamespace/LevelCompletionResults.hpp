// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: LevelCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCompletionResults : public ::Il2CppObject/*, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults*>, public System::IComparable*/ {
    public:
    // Nested type: GlobalNamespace::LevelCompletionResults::LevelEndStateType
    struct LevelEndStateType;
    // Nested type: GlobalNamespace::LevelCompletionResults::LevelEndAction
    struct LevelEndAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LevelCompletionResults/LevelEndStateType
    // [TokenAttribute] Offset: FFFFFFFF
    struct LevelEndStateType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LevelEndStateType
      constexpr LevelEndStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LevelCompletionResults/LevelEndStateType None
      static constexpr const int None = 0;
      // Get static field: static public LevelCompletionResults/LevelEndStateType None
      static GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_None();
      // Set static field: static public LevelCompletionResults/LevelEndStateType None
      static void _set_None(GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // static field const value: static public LevelCompletionResults/LevelEndStateType Cleared
      static constexpr const int Cleared = 1;
      // Get static field: static public LevelCompletionResults/LevelEndStateType Cleared
      static GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_Cleared();
      // Set static field: static public LevelCompletionResults/LevelEndStateType Cleared
      static void _set_Cleared(GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // static field const value: static public LevelCompletionResults/LevelEndStateType Failed
      static constexpr const int Failed = 2;
      // Get static field: static public LevelCompletionResults/LevelEndStateType Failed
      static GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_Failed();
      // Set static field: static public LevelCompletionResults/LevelEndStateType Failed
      static void _set_Failed(GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // LevelCompletionResults/LevelEndStateType
    #pragma pack(pop)
    static check_size<sizeof(LevelCompletionResults::LevelEndStateType), 0 + sizeof(int)> __GlobalNamespace_LevelCompletionResults_LevelEndStateTypeSizeCheck;
    static_assert(sizeof(LevelCompletionResults::LevelEndStateType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LevelCompletionResults/LevelEndAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct LevelEndAction/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LevelEndAction
      constexpr LevelEndAction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LevelCompletionResults/LevelEndAction None
      static constexpr const int None = 0;
      // Get static field: static public LevelCompletionResults/LevelEndAction None
      static GlobalNamespace::LevelCompletionResults::LevelEndAction _get_None();
      // Set static field: static public LevelCompletionResults/LevelEndAction None
      static void _set_None(GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // static field const value: static public LevelCompletionResults/LevelEndAction Quit
      static constexpr const int Quit = 1;
      // Get static field: static public LevelCompletionResults/LevelEndAction Quit
      static GlobalNamespace::LevelCompletionResults::LevelEndAction _get_Quit();
      // Set static field: static public LevelCompletionResults/LevelEndAction Quit
      static void _set_Quit(GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // static field const value: static public LevelCompletionResults/LevelEndAction Restart
      static constexpr const int Restart = 2;
      // Get static field: static public LevelCompletionResults/LevelEndAction Restart
      static GlobalNamespace::LevelCompletionResults::LevelEndAction _get_Restart();
      // Set static field: static public LevelCompletionResults/LevelEndAction Restart
      static void _set_Restart(GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // LevelCompletionResults/LevelEndAction
    #pragma pack(pop)
    static check_size<sizeof(LevelCompletionResults::LevelEndAction), 0 + sizeof(int)> __GlobalNamespace_LevelCompletionResults_LevelEndActionSizeCheck;
    static_assert(sizeof(LevelCompletionResults::LevelEndAction) == 0x4);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // public readonly System.Int32 modifiedScore
    // Size: 0x4
    // Offset: 0x18
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 rawScore
    // Size: 0x4
    // Offset: 0x1C
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly RankModel/Rank rank
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::RankModel::Rank rank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // public readonly System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x24
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: leftSaberMovementDistance
    char __padding4[0x3] = {};
    // public readonly System.Single leftSaberMovementDistance
    // Size: 0x4
    // Offset: 0x28
    float leftSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rightSaberMovementDistance
    // Size: 0x4
    // Offset: 0x2C
    float rightSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single leftHandMovementDistance
    // Size: 0x4
    // Offset: 0x30
    float leftHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rightHandMovementDistance
    // Size: 0x4
    // Offset: 0x34
    float rightHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songDuration
    // Size: 0x4
    // Offset: 0x38
    float songDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly LevelCompletionResults/LevelEndStateType levelEndStateType
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults::LevelEndStateType) == 0x4);
    // public readonly LevelCompletionResults/LevelEndAction levelEndAction
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults::LevelEndAction) == 0x4);
    // public readonly System.Single energy
    // Size: 0x4
    // Offset: 0x44
    float energy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 goodCutsCount
    // Size: 0x4
    // Offset: 0x48
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 badCutsCount
    // Size: 0x4
    // Offset: 0x4C
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 missedCount
    // Size: 0x4
    // Offset: 0x50
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 notGoodCount
    // Size: 0x4
    // Offset: 0x54
    int notGoodCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 okCount
    // Size: 0x4
    // Offset: 0x58
    int okCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 averageCutScore
    // Size: 0x4
    // Offset: 0x5C
    int averageCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 maxCutScore
    // Size: 0x4
    // Offset: 0x60
    int maxCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single averageCutDistanceRawScore
    // Size: 0x4
    // Offset: 0x64
    float averageCutDistanceRawScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x68
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single minDirDeviation
    // Size: 0x4
    // Offset: 0x6C
    float minDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single maxDirDeviation
    // Size: 0x4
    // Offset: 0x70
    float maxDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single averageDirDeviation
    // Size: 0x4
    // Offset: 0x74
    float averageDirDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single minTimeDeviation
    // Size: 0x4
    // Offset: 0x78
    float minTimeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single maxTimeDeviation
    // Size: 0x4
    // Offset: 0x7C
    float maxTimeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single averageTimeDeviation
    // Size: 0x4
    // Offset: 0x80
    float averageTimeDeviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single endSongTime
    // Size: 0x4
    // Offset: 0x84
    float endSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: LevelCompletionResults
    LevelCompletionResults(GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, int modifiedScore_ = {}, int rawScore_ = {}, GlobalNamespace::RankModel::Rank rank_ = {}, bool fullCombo_ = {}, float leftSaberMovementDistance_ = {}, float rightSaberMovementDistance_ = {}, float leftHandMovementDistance_ = {}, float rightHandMovementDistance_ = {}, float songDuration_ = {}, GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType_ = {}, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction_ = {}, float energy_ = {}, int goodCutsCount_ = {}, int badCutsCount_ = {}, int missedCount_ = {}, int notGoodCount_ = {}, int okCount_ = {}, int averageCutScore_ = {}, int maxCutScore_ = {}, float averageCutDistanceRawScore_ = {}, int maxCombo_ = {}, float minDirDeviation_ = {}, float maxDirDeviation_ = {}, float averageDirDeviation_ = {}, float minTimeDeviation_ = {}, float maxTimeDeviation_ = {}, float averageTimeDeviation_ = {}, float endSongTime_ = {}) noexcept : gameplayModifiers{gameplayModifiers_}, modifiedScore{modifiedScore_}, rawScore{rawScore_}, rank{rank_}, fullCombo{fullCombo_}, leftSaberMovementDistance{leftSaberMovementDistance_}, rightSaberMovementDistance{rightSaberMovementDistance_}, leftHandMovementDistance{leftHandMovementDistance_}, rightHandMovementDistance{rightHandMovementDistance_}, songDuration{songDuration_}, levelEndStateType{levelEndStateType_}, levelEndAction{levelEndAction_}, energy{energy_}, goodCutsCount{goodCutsCount_}, badCutsCount{badCutsCount_}, missedCount{missedCount_}, notGoodCount{notGoodCount_}, okCount{okCount_}, averageCutScore{averageCutScore_}, maxCutScore{maxCutScore_}, averageCutDistanceRawScore{averageCutDistanceRawScore_}, maxCombo{maxCombo_}, minDirDeviation{minDirDeviation_}, maxDirDeviation{maxDirDeviation_}, averageDirDeviation{averageDirDeviation_}, minTimeDeviation{minTimeDeviation_}, maxTimeDeviation{maxTimeDeviation_}, averageTimeDeviation{averageTimeDeviation_}, endSongTime{endSongTime_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults*>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults*>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::LevelCompletionResults*>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Get instance field: public readonly GameplayModifiers gameplayModifiers
    GlobalNamespace::GameplayModifiers* _get_gameplayModifiers();
    // Set instance field: public readonly GameplayModifiers gameplayModifiers
    void _set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // Get instance field: public readonly System.Int32 modifiedScore
    int _get_modifiedScore();
    // Set instance field: public readonly System.Int32 modifiedScore
    void _set_modifiedScore(int value);
    // Get instance field: public readonly System.Int32 rawScore
    int _get_rawScore();
    // Set instance field: public readonly System.Int32 rawScore
    void _set_rawScore(int value);
    // Get instance field: public readonly RankModel/Rank rank
    GlobalNamespace::RankModel::Rank _get_rank();
    // Set instance field: public readonly RankModel/Rank rank
    void _set_rank(GlobalNamespace::RankModel::Rank value);
    // Get instance field: public readonly System.Boolean fullCombo
    bool _get_fullCombo();
    // Set instance field: public readonly System.Boolean fullCombo
    void _set_fullCombo(bool value);
    // Get instance field: public readonly System.Single leftSaberMovementDistance
    float _get_leftSaberMovementDistance();
    // Set instance field: public readonly System.Single leftSaberMovementDistance
    void _set_leftSaberMovementDistance(float value);
    // Get instance field: public readonly System.Single rightSaberMovementDistance
    float _get_rightSaberMovementDistance();
    // Set instance field: public readonly System.Single rightSaberMovementDistance
    void _set_rightSaberMovementDistance(float value);
    // Get instance field: public readonly System.Single leftHandMovementDistance
    float _get_leftHandMovementDistance();
    // Set instance field: public readonly System.Single leftHandMovementDistance
    void _set_leftHandMovementDistance(float value);
    // Get instance field: public readonly System.Single rightHandMovementDistance
    float _get_rightHandMovementDistance();
    // Set instance field: public readonly System.Single rightHandMovementDistance
    void _set_rightHandMovementDistance(float value);
    // Get instance field: public readonly System.Single songDuration
    float _get_songDuration();
    // Set instance field: public readonly System.Single songDuration
    void _set_songDuration(float value);
    // Get instance field: public readonly LevelCompletionResults/LevelEndStateType levelEndStateType
    GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_levelEndStateType();
    // Set instance field: public readonly LevelCompletionResults/LevelEndStateType levelEndStateType
    void _set_levelEndStateType(GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
    // Get instance field: public readonly LevelCompletionResults/LevelEndAction levelEndAction
    GlobalNamespace::LevelCompletionResults::LevelEndAction _get_levelEndAction();
    // Set instance field: public readonly LevelCompletionResults/LevelEndAction levelEndAction
    void _set_levelEndAction(GlobalNamespace::LevelCompletionResults::LevelEndAction value);
    // Get instance field: public readonly System.Single energy
    float _get_energy();
    // Set instance field: public readonly System.Single energy
    void _set_energy(float value);
    // Get instance field: public readonly System.Int32 goodCutsCount
    int _get_goodCutsCount();
    // Set instance field: public readonly System.Int32 goodCutsCount
    void _set_goodCutsCount(int value);
    // Get instance field: public readonly System.Int32 badCutsCount
    int _get_badCutsCount();
    // Set instance field: public readonly System.Int32 badCutsCount
    void _set_badCutsCount(int value);
    // Get instance field: public readonly System.Int32 missedCount
    int _get_missedCount();
    // Set instance field: public readonly System.Int32 missedCount
    void _set_missedCount(int value);
    // Get instance field: public readonly System.Int32 notGoodCount
    int _get_notGoodCount();
    // Set instance field: public readonly System.Int32 notGoodCount
    void _set_notGoodCount(int value);
    // Get instance field: public readonly System.Int32 okCount
    int _get_okCount();
    // Set instance field: public readonly System.Int32 okCount
    void _set_okCount(int value);
    // Get instance field: public readonly System.Int32 averageCutScore
    int _get_averageCutScore();
    // Set instance field: public readonly System.Int32 averageCutScore
    void _set_averageCutScore(int value);
    // Get instance field: public readonly System.Int32 maxCutScore
    int _get_maxCutScore();
    // Set instance field: public readonly System.Int32 maxCutScore
    void _set_maxCutScore(int value);
    // Get instance field: public readonly System.Single averageCutDistanceRawScore
    float _get_averageCutDistanceRawScore();
    // Set instance field: public readonly System.Single averageCutDistanceRawScore
    void _set_averageCutDistanceRawScore(float value);
    // Get instance field: public readonly System.Int32 maxCombo
    int _get_maxCombo();
    // Set instance field: public readonly System.Int32 maxCombo
    void _set_maxCombo(int value);
    // Get instance field: public readonly System.Single minDirDeviation
    float _get_minDirDeviation();
    // Set instance field: public readonly System.Single minDirDeviation
    void _set_minDirDeviation(float value);
    // Get instance field: public readonly System.Single maxDirDeviation
    float _get_maxDirDeviation();
    // Set instance field: public readonly System.Single maxDirDeviation
    void _set_maxDirDeviation(float value);
    // Get instance field: public readonly System.Single averageDirDeviation
    float _get_averageDirDeviation();
    // Set instance field: public readonly System.Single averageDirDeviation
    void _set_averageDirDeviation(float value);
    // Get instance field: public readonly System.Single minTimeDeviation
    float _get_minTimeDeviation();
    // Set instance field: public readonly System.Single minTimeDeviation
    void _set_minTimeDeviation(float value);
    // Get instance field: public readonly System.Single maxTimeDeviation
    float _get_maxTimeDeviation();
    // Set instance field: public readonly System.Single maxTimeDeviation
    void _set_maxTimeDeviation(float value);
    // Get instance field: public readonly System.Single averageTimeDeviation
    float _get_averageTimeDeviation();
    // Set instance field: public readonly System.Single averageTimeDeviation
    void _set_averageTimeDeviation(float value);
    // Get instance field: public readonly System.Single endSongTime
    float _get_endSongTime();
    // Set instance field: public readonly System.Single endSongTime
    void _set_endSongTime(float value);
    // public System.Void .ctor(GameplayModifiers gameplayModifiers, System.Int32 modifiedScore, System.Int32 rawScore, RankModel/Rank rank, System.Boolean fullCombo, System.Single leftSaberMovementDistance, System.Single rightSaberMovementDistance, System.Single leftHandMovementDistance, System.Single rightHandMovementDistance, System.Single songDuration, LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction, System.Single energy, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 notGoodCount, System.Int32 okCount, System.Int32 averageCutScore, System.Int32 maxCutScore, System.Single averageCutDistanceRawScore, System.Int32 maxCombo, System.Single minDirDeviation, System.Single maxDirDeviation, System.Single averageDirDeviation, System.Single minTimeDeviation, System.Single maxTimeDeviation, System.Single averageTimeDeviation, System.Single endSongTime)
    // Offset: 0x2379F50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCompletionResults* New_ctor(GlobalNamespace::GameplayModifiers* gameplayModifiers, int modifiedScore, int rawScore, GlobalNamespace::RankModel::Rank rank, bool fullCombo, float leftSaberMovementDistance, float rightSaberMovementDistance, float leftHandMovementDistance, float rightHandMovementDistance, float songDuration, GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction, float energy, int goodCutsCount, int badCutsCount, int missedCount, int notGoodCount, int okCount, int averageCutScore, int maxCutScore, float averageCutDistanceRawScore, int maxCombo, float minDirDeviation, float maxDirDeviation, float averageDirDeviation, float minTimeDeviation, float maxTimeDeviation, float averageTimeDeviation, float endSongTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCompletionResults*, creationType>(gameplayModifiers, modifiedScore, rawScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, songDuration, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, averageCutScore, maxCutScore, averageCutDistanceRawScore, maxCombo, minDirDeviation, maxDirDeviation, averageDirDeviation, minTimeDeviation, maxTimeDeviation, averageTimeDeviation, endSongTime)));
    }
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x237A0CC
    int CompareTo(::Il2CppObject* obj);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x237A1E8
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // private LevelCompletionResults LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237A4D0
    GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public LevelCompletionResults CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237A4D8
    static GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x2379F48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCompletionResults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCompletionResults*, creationType>()));
    }
  }; // LevelCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(LevelCompletionResults), 132 + sizeof(float)> __GlobalNamespace_LevelCompletionResultsSizeCheck;
  static_assert(sizeof(LevelCompletionResults) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCompletionResults::LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCompletionResults::LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LevelCompletionResults::*)(::Il2CppObject*)>(&GlobalNamespace::LevelCompletionResults::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCompletionResults::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::LevelCompletionResults::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData
// Il2CppName: LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (GlobalNamespace::LevelCompletionResults::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
