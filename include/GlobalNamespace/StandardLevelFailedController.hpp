// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelFailedController
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelFailedController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::StandardLevelFailedController::InitData
    class InitData;
    // Nested type: GlobalNamespace::StandardLevelFailedController::$LevelFailedCoroutine$d__13
    class $LevelFailedCoroutine$d__13;
    // private LevelFailedTextEffect _levelFailedTextEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFailedTextEffect*) == 0x8);
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE396A4
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0xE396B4
    // private readonly StandardLevelFailedController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::StandardLevelFailedController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelFailedController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE396C4
    // private readonly ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // [InjectAttribute] Offset: 0xE396D4
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xE396E4
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE396F4
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSpawnRotation*) == 0x8);
    // [InjectAttribute] Offset: 0xE39704
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // Creating value type constructor for type: StandardLevelFailedController
    StandardLevelFailedController(GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect_ = {}, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::StandardLevelFailedController::InitData* initData_ = {}, GlobalNamespace::ILevelEndActions* gameplayManager_ = {}, GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}) noexcept : levelFailedTextEffect{levelFailedTextEffect_}, standardLevelSceneSetupData{standardLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, initData{initData_}, gameplayManager{gameplayManager_}, beatmapObjectSpawnController{beatmapObjectSpawnController_}, gameSongController{gameSongController_}, environmentSpawnRotation{environmentSpawnRotation_}, beatmapObjectManager{beatmapObjectManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LevelFailedTextEffect _levelFailedTextEffect
    GlobalNamespace::LevelFailedTextEffect*& dyn__levelFailedTextEffect();
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelSceneSetupData();
    // Get instance field reference: private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private readonly StandardLevelFailedController/InitData _initData
    GlobalNamespace::StandardLevelFailedController::InitData*& dyn__initData();
    // Get instance field reference: private readonly ILevelEndActions _gameplayManager
    GlobalNamespace::ILevelEndActions*& dyn__gameplayManager();
    // Get instance field reference: private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly GameSongController _gameSongController
    GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    GlobalNamespace::EnvironmentSpawnRotation*& dyn__environmentSpawnRotation();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // protected System.Void Start()
    // Offset: 0x1089B7C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1089C64
    void OnDestroy();
    // private System.Void HandleLevelFailed()
    // Offset: 0x1089D5C
    void HandleLevelFailed();
    // private System.Collections.IEnumerator LevelFailedCoroutine()
    // Offset: 0x1089D88
    System::Collections::IEnumerator* LevelFailedCoroutine();
    // public System.Void .ctor()
    // Offset: 0x1089E24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelFailedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelFailedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelFailedController*, creationType>()));
    }
  }; // StandardLevelFailedController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelFailedController), 88 + sizeof(GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_StandardLevelFailedControllerSizeCheck;
  static_assert(sizeof(StandardLevelFailedController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFailedController*, "", "StandardLevelFailedController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFailedController::*)()>(&GlobalNamespace::StandardLevelFailedController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFailedController::*)()>(&GlobalNamespace::StandardLevelFailedController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::HandleLevelFailed
// Il2CppName: HandleLevelFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFailedController::*)()>(&GlobalNamespace::StandardLevelFailedController::HandleLevelFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController*), "HandleLevelFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::LevelFailedCoroutine
// Il2CppName: LevelFailedCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::StandardLevelFailedController::*)()>(&GlobalNamespace::StandardLevelFailedController::LevelFailedCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFailedController*), "LevelFailedCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFailedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
