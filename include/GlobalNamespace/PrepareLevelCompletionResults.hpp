// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
  // Forward declaring type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder;
  // Forward declaring type: MultiplierValuesRecorder
  class MultiplierValuesRecorder;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PrepareLevelCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class PrepareLevelCompletionResults : public UnityEngine::MonoBehaviour {
    public:
    // private GameplayModifiersModelSO _gameplayModifiersModelSO
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModelSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BDF8
    // private readonly SaberActivityCounter _saberActivityCounter
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE08
    // private readonly BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* beatmapObjectExecutionRatingsRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE18
    // private readonly MultiplierValuesRecorder _multiplierValuesRecorder
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplierValuesRecorder* multiplierValuesRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplierValuesRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE28
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE38
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE48
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE58
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE68
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3BE78
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: PrepareLevelCompletionResults
    PrepareLevelCompletionResults(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModelSO_ = {}, GlobalNamespace::SaberActivityCounter* saberActivityCounter_ = {}, GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* beatmapObjectExecutionRatingsRecorder_ = {}, GlobalNamespace::MultiplierValuesRecorder* multiplierValuesRecorder_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::IReadonlyBeatmapData* beatmapData_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : gameplayModifiersModelSO{gameplayModifiersModelSO_}, saberActivityCounter{saberActivityCounter_}, beatmapObjectExecutionRatingsRecorder{beatmapObjectExecutionRatingsRecorder_}, multiplierValuesRecorder{multiplierValuesRecorder_}, scoreController{scoreController_}, gameEnergyCounter{gameEnergyCounter_}, gameSongController{gameSongController_}, beatmapData{beatmapData_}, audioTimeSyncController{audioTimeSyncController_}, gameplayModifiers{gameplayModifiers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private GameplayModifiersModelSO _gameplayModifiersModelSO
    GlobalNamespace::GameplayModifiersModelSO* _get__gameplayModifiersModelSO();
    // Set instance field: private GameplayModifiersModelSO _gameplayModifiersModelSO
    void _set__gameplayModifiersModelSO(GlobalNamespace::GameplayModifiersModelSO* value);
    // Get instance field: private readonly SaberActivityCounter _saberActivityCounter
    GlobalNamespace::SaberActivityCounter* _get__saberActivityCounter();
    // Set instance field: private readonly SaberActivityCounter _saberActivityCounter
    void _set__saberActivityCounter(GlobalNamespace::SaberActivityCounter* value);
    // Get instance field: private readonly BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* _get__beatmapObjectExecutionRatingsRecorder();
    // Set instance field: private readonly BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    void _set__beatmapObjectExecutionRatingsRecorder(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* value);
    // Get instance field: private readonly MultiplierValuesRecorder _multiplierValuesRecorder
    GlobalNamespace::MultiplierValuesRecorder* _get__multiplierValuesRecorder();
    // Set instance field: private readonly MultiplierValuesRecorder _multiplierValuesRecorder
    void _set__multiplierValuesRecorder(GlobalNamespace::MultiplierValuesRecorder* value);
    // Get instance field: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController* _get__scoreController();
    // Set instance field: private readonly IScoreController _scoreController
    void _set__scoreController(GlobalNamespace::IScoreController* value);
    // Get instance field: private readonly GameEnergyCounter _gameEnergyCounter
    GlobalNamespace::GameEnergyCounter* _get__gameEnergyCounter();
    // Set instance field: private readonly GameEnergyCounter _gameEnergyCounter
    void _set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter* value);
    // Get instance field: private readonly GameSongController _gameSongController
    GlobalNamespace::GameSongController* _get__gameSongController();
    // Set instance field: private readonly GameSongController _gameSongController
    void _set__gameSongController(GlobalNamespace::GameSongController* value);
    // Get instance field: private readonly IReadonlyBeatmapData _beatmapData
    GlobalNamespace::IReadonlyBeatmapData* _get__beatmapData();
    // Set instance field: private readonly IReadonlyBeatmapData _beatmapData
    void _set__beatmapData(GlobalNamespace::IReadonlyBeatmapData* value);
    // Get instance field: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController* _get__audioTimeSyncController();
    // Set instance field: private readonly AudioTimeSyncController _audioTimeSyncController
    void _set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController* value);
    // Get instance field: private readonly GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers* _get__gameplayModifiers();
    // Set instance field: private readonly GameplayModifiers _gameplayModifiers
    void _set__gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public LevelCompletionResults FillLevelCompletionResults(LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction)
    // Offset: 0x113ECAC
    GlobalNamespace::LevelCompletionResults* FillLevelCompletionResults(GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction);
    // public System.Void .ctor()
    // Offset: 0x113F02C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrepareLevelCompletionResults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PrepareLevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrepareLevelCompletionResults*, creationType>()));
    }
  }; // PrepareLevelCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(PrepareLevelCompletionResults), 96 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_PrepareLevelCompletionResultsSizeCheck;
  static_assert(sizeof(PrepareLevelCompletionResults) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrepareLevelCompletionResults*, "", "PrepareLevelCompletionResults");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults
// Il2CppName: FillLevelCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (GlobalNamespace::PrepareLevelCompletionResults::*)(GlobalNamespace::LevelCompletionResults::LevelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction)>(&GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults)> {
  static const MethodInfo* get() {
    static auto* levelEndStateType = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndStateType")->byval_arg;
    static auto* levelEndAction = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrepareLevelCompletionResults*), "FillLevelCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelEndStateType, levelEndAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrepareLevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
