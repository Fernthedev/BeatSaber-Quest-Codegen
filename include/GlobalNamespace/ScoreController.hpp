// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IScoreController
#include "GlobalNamespace/IScoreController.hpp"
// Including type: GoodCutScoringElement
#include "GlobalNamespace/GoodCutScoringElement.hpp"
// Including type: BadCutScoringElement
#include "GlobalNamespace/BadCutScoringElement.hpp"
// Including type: MissScoringElement
#include "GlobalNamespace/MissScoringElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IGameEnergyCounter
  class IGameEnergyCounter;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Skipping declaration: ScoringElement because it is already included!
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Skipping declaration: ScoreMultiplierCounter because it is already included!
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreController*, "", "ScoreController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: ScoreController
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IScoreController*/ {
    public:
    public:
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED260
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED270
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED280
    // private readonly IGameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IGameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED290
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED2A0
    // private readonly GoodCutScoringElement/Pool _goodCutScoringElementPool
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::GoodCutScoringElement::Pool* goodCutScoringElementPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GoodCutScoringElement::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED2B0
    // private readonly BadCutScoringElement/Pool _badCutScoringElementPool
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BadCutScoringElement::Pool* badCutScoringElementPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BadCutScoringElement::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED2C0
    // private readonly MissScoringElement/Pool _missScoringElementPool
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MissScoringElement::Pool* missScoringElementPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissScoringElement::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x10ED2D0
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // private System.Action`2<System.Int32,System.Int32> scoreDidChangeEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_2<int, int>* scoreDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<int, int>*) == 0x8);
    // private System.Action`2<System.Int32,System.Single> multiplierDidChangeEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_2<int, float>* multiplierDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<int, float>*) == 0x8);
    // private System.Action`1<ScoringElement> scoringForNoteStartedEvent
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteStartedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ScoringElement*>*) == 0x8);
    // private System.Action`1<ScoringElement> scoringForNoteFinishedEvent
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteFinishedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ScoringElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<GameplayModifierParamsSO> _gameplayModifierParams
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* gameplayModifierParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // private System.Int32 _modifiedScore
    // Size: 0x4
    // Offset: 0x88
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multipliedScore
    // Size: 0x4
    // Offset: 0x8C
    int multipliedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _immediateMaxPossibleMultipliedScore
    // Size: 0x4
    // Offset: 0x90
    int immediateMaxPossibleMultipliedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _immediateMaxPossibleModifiedScore
    // Size: 0x4
    // Offset: 0x94
    int immediateMaxPossibleModifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _prevMultiplierFromModifiers
    // Size: 0x4
    // Offset: 0x98
    float prevMultiplierFromModifiers;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: prevMultiplierFromModifiers and: maxScoreMultiplierCounter
    char __padding18[0x4] = {};
    // private readonly ScoreMultiplierCounter _maxScoreMultiplierCounter
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::ScoreMultiplierCounter* maxScoreMultiplierCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreMultiplierCounter*) == 0x8);
    // private readonly ScoreMultiplierCounter _scoreMultiplierCounter
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::ScoreMultiplierCounter* scoreMultiplierCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreMultiplierCounter*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Single> _sortedNoteTimesWithoutScoringElements
    // Size: 0x8
    // Offset: 0xB0
    ::System::Collections::Generic::List_1<float>* sortedNoteTimesWithoutScoringElements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ScoringElement> _sortedScoringElementsWithoutMultiplier
    // Size: 0x8
    // Offset: 0xB8
    ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* sortedScoringElementsWithoutMultiplier;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ScoringElement> _scoringElementsWithMultiplier
    // Size: 0x8
    // Offset: 0xC0
    ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* scoringElementsWithMultiplier;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ScoringElement> _scoringElementsToRemove
    // Size: 0x8
    // Offset: 0xC8
    ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* scoringElementsToRemove;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IScoreController
    operator ::GlobalNamespace::IScoreController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IScoreController*>(this);
    }
    // Creating interface conversion operator: i_IScoreController
    inline ::GlobalNamespace::IScoreController* i_IScoreController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IScoreController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private readonly GameplayModifiers _gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly IGameEnergyCounter _gameEnergyCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGameEnergyCounter*& dyn__gameEnergyCounter();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly GoodCutScoringElement/Pool _goodCutScoringElementPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GoodCutScoringElement::Pool*& dyn__goodCutScoringElementPool();
    // Get instance field reference: private readonly BadCutScoringElement/Pool _badCutScoringElementPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BadCutScoringElement::Pool*& dyn__badCutScoringElementPool();
    // Get instance field reference: private readonly MissScoringElement/Pool _missScoringElementPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissScoringElement::Pool*& dyn__missScoringElementPool();
    // Get instance field reference: private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private System.Action`2<System.Int32,System.Int32> scoreDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<int, int>*& dyn_scoreDidChangeEvent();
    // Get instance field reference: private System.Action`2<System.Int32,System.Single> multiplierDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<int, float>*& dyn_multiplierDidChangeEvent();
    // Get instance field reference: private System.Action`1<ScoringElement> scoringForNoteStartedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ScoringElement*>*& dyn_scoringForNoteStartedEvent();
    // Get instance field reference: private System.Action`1<ScoringElement> scoringForNoteFinishedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ScoringElement*>*& dyn_scoringForNoteFinishedEvent();
    // Get instance field reference: private System.Collections.Generic.List`1<GameplayModifierParamsSO> _gameplayModifierParams
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& dyn__gameplayModifierParams();
    // Get instance field reference: private System.Int32 _modifiedScore
    [[deprecated("Use field access instead!")]] int& dyn__modifiedScore();
    // Get instance field reference: private System.Int32 _multipliedScore
    [[deprecated("Use field access instead!")]] int& dyn__multipliedScore();
    // Get instance field reference: private System.Int32 _immediateMaxPossibleMultipliedScore
    [[deprecated("Use field access instead!")]] int& dyn__immediateMaxPossibleMultipliedScore();
    // Get instance field reference: private System.Int32 _immediateMaxPossibleModifiedScore
    [[deprecated("Use field access instead!")]] int& dyn__immediateMaxPossibleModifiedScore();
    // Get instance field reference: private System.Single _prevMultiplierFromModifiers
    [[deprecated("Use field access instead!")]] float& dyn__prevMultiplierFromModifiers();
    // Get instance field reference: private readonly ScoreMultiplierCounter _maxScoreMultiplierCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreMultiplierCounter*& dyn__maxScoreMultiplierCounter();
    // Get instance field reference: private readonly ScoreMultiplierCounter _scoreMultiplierCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreMultiplierCounter*& dyn__scoreMultiplierCounter();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Single> _sortedNoteTimesWithoutScoringElements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<float>*& dyn__sortedNoteTimesWithoutScoringElements();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ScoringElement> _sortedScoringElementsWithoutMultiplier
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& dyn__sortedScoringElementsWithoutMultiplier();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ScoringElement> _scoringElementsWithMultiplier
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& dyn__scoringElementsWithMultiplier();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ScoringElement> _scoringElementsToRemove
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& dyn__scoringElementsToRemove();
    // public System.Int32 get_multipliedScore()
    // Offset: 0x14B44E0
    int get_multipliedScore();
    // public System.Int32 get_modifiedScore()
    // Offset: 0x14B44E8
    int get_modifiedScore();
    // public System.Int32 get_immediateMaxPossibleMultipliedScore()
    // Offset: 0x14B44F0
    int get_immediateMaxPossibleMultipliedScore();
    // public System.Int32 get_immediateMaxPossibleModifiedScore()
    // Offset: 0x14B44F8
    int get_immediateMaxPossibleModifiedScore();
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x14B3FC0
    void add_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0x14B4064
    void remove_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0x14B4108
    void add_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0x14B41AC
    void remove_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void add_scoringForNoteStartedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0x14B4250
    void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void remove_scoringForNoteStartedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0x14B42F4
    void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void add_scoringForNoteFinishedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0x14B4398
    void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void remove_scoringForNoteFinishedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0x14B443C
    void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void .ctor()
    // Offset: 0x14B563C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreController*, creationType>()));
    }
    // public System.Void SetEnabled(System.Boolean enabled)
    // Offset: 0x14B4500
    void SetEnabled(bool enabled);
    // protected System.Void Start()
    // Offset: 0x14B450C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14B4718
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x14B48C4
    void LateUpdate();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x14B5160
    void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x14B5244
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x14B5450
    void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);
    // private System.Void HandlePlayerHeadDidEnterObstacles()
    // Offset: 0x14B5574
    void HandlePlayerHeadDidEnterObstacles();
    // private System.Void DespawnScoringElement(ScoringElement scoringElement)
    // Offset: 0x14B4F98
    void DespawnScoringElement(::GlobalNamespace::ScoringElement* scoringElement);
  }; // ScoreController
  #pragma pack(pop)
  static check_size<sizeof(ScoreController), 200 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*)> __GlobalNamespace_ScoreControllerSizeCheck;
  static_assert(sizeof(ScoreController) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::get_multipliedScore
// Il2CppName: get_multipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::get_multipliedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "get_multipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::get_modifiedScore
// Il2CppName: get_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::get_modifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "get_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::get_immediateMaxPossibleMultipliedScore
// Il2CppName: get_immediateMaxPossibleMultipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::get_immediateMaxPossibleMultipliedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "get_immediateMaxPossibleMultipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::get_immediateMaxPossibleModifiedScore
// Il2CppName: get_immediateMaxPossibleModifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::get_immediateMaxPossibleModifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "get_immediateMaxPossibleModifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::add_scoreDidChangeEvent
// Il2CppName: add_scoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::ScoreController::add_scoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "add_scoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::remove_scoreDidChangeEvent
// Il2CppName: remove_scoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::ScoreController::remove_scoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "remove_scoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::add_multiplierDidChangeEvent
// Il2CppName: add_multiplierDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_2<int, float>*)>(&GlobalNamespace::ScoreController::add_multiplierDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "add_multiplierDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::remove_multiplierDidChangeEvent
// Il2CppName: remove_multiplierDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_2<int, float>*)>(&GlobalNamespace::ScoreController::remove_multiplierDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "remove_multiplierDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::add_scoringForNoteStartedEvent
// Il2CppName: add_scoringForNoteStartedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::ScoreController::add_scoringForNoteStartedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "add_scoringForNoteStartedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::remove_scoringForNoteStartedEvent
// Il2CppName: remove_scoringForNoteStartedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::ScoreController::remove_scoringForNoteStartedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "remove_scoringForNoteStartedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::add_scoringForNoteFinishedEvent
// Il2CppName: add_scoringForNoteFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::ScoreController::add_scoringForNoteFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "add_scoringForNoteFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::remove_scoringForNoteFinishedEvent
// Il2CppName: remove_scoringForNoteFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::ScoreController::remove_scoringForNoteFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "remove_scoringForNoteFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::SetEnabled
// Il2CppName: SetEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(bool)>(&GlobalNamespace::ScoreController::SetEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "SetEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::HandleNoteWasSpawned
// Il2CppName: HandleNoteWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::ScoreController::HandleNoteWasSpawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "HandleNoteWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::ScoreController::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::ScoreController::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::HandlePlayerHeadDidEnterObstacles
// Il2CppName: HandlePlayerHeadDidEnterObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)()>(&GlobalNamespace::ScoreController::HandlePlayerHeadDidEnterObstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "HandlePlayerHeadDidEnterObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreController::DespawnScoringElement
// Il2CppName: DespawnScoringElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreController::*)(::GlobalNamespace::ScoringElement*)>(&GlobalNamespace::ScoreController::DespawnScoringElement)> {
  static const MethodInfo* get() {
    static auto* scoringElement = &::il2cpp_utils::GetClassFromName("", "ScoringElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreController*), "DespawnScoringElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoringElement});
  }
};
