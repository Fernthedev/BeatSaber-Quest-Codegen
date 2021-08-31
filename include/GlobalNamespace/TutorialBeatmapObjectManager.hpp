// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: TutorialNoteController
#include "GlobalNamespace/TutorialNoteController.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Skipping declaration: NoteController because it is already included!
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
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
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::TutorialBeatmapObjectManager::InitData
    class InitData;
    // private MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* tutorialNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // private TutorialBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialBeatmapObjectManager::InitData*) == 0x8);
    // Creating value type constructor for type: TutorialBeatmapObjectManager
    TutorialBeatmapObjectManager(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* tutorialNotePoolContainer_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* bombNotePoolContainer_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* obstaclePoolContainer_ = {}, GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData_ = {}) noexcept : tutorialNotePoolContainer{tutorialNotePoolContainer_}, bombNotePoolContainer{bombNotePoolContainer_}, obstaclePoolContainer{obstaclePoolContainer_}, initData{initData_} {}
    // Get instance field: private MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* _get__tutorialNotePoolContainer();
    // Set instance field: private MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    void _set__tutorialNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController*>* value);
    // Get instance field: private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* _get__bombNotePoolContainer();
    // Set instance field: private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    void _set__bombNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController*>* value);
    // Get instance field: private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* _get__obstaclePoolContainer();
    // Set instance field: private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    void _set__obstaclePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController*>* value);
    // Get instance field: private TutorialBeatmapObjectManager/InitData _initData
    GlobalNamespace::TutorialBeatmapObjectManager::InitData* _get__initData();
    // Set instance field: private TutorialBeatmapObjectManager/InitData _initData
    void _set__initData(GlobalNamespace::TutorialBeatmapObjectManager::InitData* value);
    // private System.Void Init(TutorialBeatmapObjectManager/InitData initData, TutorialNoteController/Pool tutorialNotePool, BombNoteController/Pool bombNotePool, ObstacleController/Pool obstaclePool)
    // Offset: 0x1098AD0
    void Init(GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData, GlobalNamespace::TutorialNoteController::Pool* tutorialNotePool, GlobalNamespace::BombNoteController::Pool* bombNotePool, GlobalNamespace::ObstacleController::Pool* obstaclePool);
    // public override System.Collections.Generic.List`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x1098A78
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.List`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // public System.Void .ctor()
    // Offset: 0x10998D8
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectManager*, creationType>()));
    }
    // protected override ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1098BB8
    // Implemented from: BeatmapObjectManager
    // Base method: ObstacleController BeatmapObjectManager::SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected override NoteController SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x1098C8C
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected override NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x1098D54
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x1098F3C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x1099030
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public override System.Void DissolveAllObjects()
    // Offset: 0x1099098
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DissolveAllObjects()
    void DissolveAllObjects();
    // public override System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0x1099350
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::HideAllBeatmapObjects(System.Boolean hide)
    void HideAllBeatmapObjects(bool hide);
    // public override System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0x1099614
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::PauseAllBeatmapObjects(System.Boolean pause)
    void PauseAllBeatmapObjects(bool pause);
  }; // TutorialBeatmapObjectManager
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectManager), 128 + sizeof(GlobalNamespace::TutorialBeatmapObjectManager::InitData*)> __GlobalNamespace_TutorialBeatmapObjectManagerSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectManager) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::TutorialBeatmapObjectManager::InitData*, GlobalNamespace::TutorialNoteController::Pool*, GlobalNamespace::BombNoteController::Pool*, GlobalNamespace::ObstacleController::Pool*)>(&GlobalNamespace::TutorialBeatmapObjectManager::Init)> {
  static const MethodInfo* get() {
    static auto* initData = &::il2cpp_utils::GetClassFromName("", "TutorialBeatmapObjectManager/InitData")->byval_arg;
    static auto* tutorialNotePool = &::il2cpp_utils::GetClassFromName("", "TutorialNoteController/Pool")->byval_arg;
    static auto* bombNotePool = &::il2cpp_utils::GetClassFromName("", "BombNoteController/Pool")->byval_arg;
    static auto* obstaclePool = &::il2cpp_utils::GetClassFromName("", "ObstacleController/Pool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initData, tutorialNotePool, bombNotePool, obstaclePool});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers
// Il2CppName: get_activeObstacleControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* (GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "get_activeObstacleControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::SpawnObstacleInternal
// Il2CppName: SpawnObstacleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleController* (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::ObstacleData*, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData, float)>(&GlobalNamespace::TutorialBeatmapObjectManager::SpawnObstacleInternal)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* obstacleSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/ObstacleSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "SpawnObstacleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, obstacleSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::SpawnBombNoteInternal
// Il2CppName: SpawnBombNoteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteController* (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::NoteData*, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData, float)>(&GlobalNamespace::TutorialBeatmapObjectManager::SpawnBombNoteInternal)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/NoteSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "SpawnBombNoteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::SpawnBasicNoteInternal
// Il2CppName: SpawnBasicNoteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteController* (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::NoteData*, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData, float, float)>(&GlobalNamespace::TutorialBeatmapObjectManager::SpawnBasicNoteInternal)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/NoteSpawnData")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "SpawnBasicNoteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteSpawnData, rotation, cutDirectionAngleOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DissolveAllObjects
// Il2CppName: DissolveAllObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&GlobalNamespace::TutorialBeatmapObjectManager::DissolveAllObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DissolveAllObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::HideAllBeatmapObjects
// Il2CppName: HideAllBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(bool)>(&GlobalNamespace::TutorialBeatmapObjectManager::HideAllBeatmapObjects)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "HideAllBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::PauseAllBeatmapObjects
// Il2CppName: PauseAllBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(bool)>(&GlobalNamespace::TutorialBeatmapObjectManager::PauseAllBeatmapObjects)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "PauseAllBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
