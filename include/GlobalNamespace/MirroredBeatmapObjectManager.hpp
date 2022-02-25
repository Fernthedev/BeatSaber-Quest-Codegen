// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MirroredCubeNoteController
#include "GlobalNamespace/MirroredCubeNoteController.hpp"
// Including type: MirroredBombNoteController
#include "GlobalNamespace/MirroredBombNoteController.hpp"
// Including type: MirroredObstacleController
#include "GlobalNamespace/MirroredObstacleController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: ICubeNoteMirrorable
  class ICubeNoteMirrorable;
  // Forward declaring type: INoteMirrorable
  class INoteMirrorable;
  // Forward declaring type: ObstacleController
  class ObstacleController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MirroredBeatmapObjectManager
  class MirroredBeatmapObjectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MirroredBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredBeatmapObjectManager*, "", "MirroredBeatmapObjectManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MirroredBeatmapObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredBeatmapObjectManager : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private readonly MemoryPoolContainer`1<MirroredCubeNoteController> _mirroredCubeNotePoolContainer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredCubeNoteController*>* mirroredCubeNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredCubeNoteController*>*) == 0x8);
    // private readonly MemoryPoolContainer`1<MirroredBombNoteController> _mirroredBombNotePoolContainer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredBombNoteController*>* mirroredBombNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredBombNoteController*>*) == 0x8);
    // private readonly MemoryPoolContainer`1<MirroredObstacleController> _mirroredObstaclePoolContainer
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredObstacleController*>* mirroredObstaclePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredObstacleController*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<ICubeNoteMirrorable,MirroredCubeNoteController> _cubeNoteControllersToMirroredCubeNoteControllers
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ICubeNoteMirrorable*, GlobalNamespace::MirroredCubeNoteController*>* cubeNoteControllersToMirroredCubeNoteControllers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ICubeNoteMirrorable*, GlobalNamespace::MirroredCubeNoteController*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<INoteMirrorable,MirroredBombNoteController> _bombNoteControllersToMirroredBombNoteControllers
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<GlobalNamespace::INoteMirrorable*, GlobalNamespace::MirroredBombNoteController*>* bombNoteControllersToMirroredBombNoteControllers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::INoteMirrorable*, GlobalNamespace::MirroredBombNoteController*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<ObstacleController,MirroredObstacleController> _obstacleControllersToMirroredObstacleControllers
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ObstacleController*, GlobalNamespace::MirroredObstacleController*>* obstacleControllersToMirroredObstacleControllers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ObstacleController*, GlobalNamespace::MirroredObstacleController*>*) == 0x8);
    public:
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly MemoryPoolContainer`1<MirroredCubeNoteController> _mirroredCubeNotePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredCubeNoteController*>*& dyn__mirroredCubeNotePoolContainer();
    // Get instance field reference: private readonly MemoryPoolContainer`1<MirroredBombNoteController> _mirroredBombNotePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredBombNoteController*>*& dyn__mirroredBombNotePoolContainer();
    // Get instance field reference: private readonly MemoryPoolContainer`1<MirroredObstacleController> _mirroredObstaclePoolContainer
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::MirroredObstacleController*>*& dyn__mirroredObstaclePoolContainer();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<ICubeNoteMirrorable,MirroredCubeNoteController> _cubeNoteControllersToMirroredCubeNoteControllers
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ICubeNoteMirrorable*, GlobalNamespace::MirroredCubeNoteController*>*& dyn__cubeNoteControllersToMirroredCubeNoteControllers();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<INoteMirrorable,MirroredBombNoteController> _bombNoteControllersToMirroredBombNoteControllers
    System::Collections::Generic::Dictionary_2<GlobalNamespace::INoteMirrorable*, GlobalNamespace::MirroredBombNoteController*>*& dyn__bombNoteControllersToMirroredBombNoteControllers();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<ObstacleController,MirroredObstacleController> _obstacleControllersToMirroredObstacleControllers
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ObstacleController*, GlobalNamespace::MirroredObstacleController*>*& dyn__obstacleControllersToMirroredObstacleControllers();
    // private System.Void .ctor(BeatmapObjectManager beatmapObjectManager, MirroredCubeNoteController/Pool mirroredCubeNotePool, MirroredBombNoteController/Pool mirroredBombNotePool, MirroredObstacleController/Pool mirroredObstaclePool)
    // Offset: 0x2A6A1FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredBeatmapObjectManager* New_ctor(GlobalNamespace::BeatmapObjectManager* beatmapObjectManager, GlobalNamespace::MirroredCubeNoteController::Pool* mirroredCubeNotePool, GlobalNamespace::MirroredBombNoteController::Pool* mirroredBombNotePool, GlobalNamespace::MirroredObstacleController::Pool* mirroredObstaclePool) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredBeatmapObjectManager*, creationType>(beatmapObjectManager, mirroredCubeNotePool, mirroredBombNotePool, mirroredObstaclePool)));
    }
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x2A6A6E0
    void HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasDespawned(NoteController noteController)
    // Offset: 0x2A6A808
    void HandleNoteWasDespawned(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleObstacleWasSpawned(ObstacleController obstacleController)
    // Offset: 0x2A6A93C
    void HandleObstacleWasSpawned(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleWasDespawned(ObstacleController obstacleController)
    // Offset: 0x2A6AAC8
    void HandleObstacleWasDespawned(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleDidHideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0x2A6AB78
    void HandleDidHideAllBeatmapObjects(bool hide);
    // protected override System.Void Finalize()
    // Offset: 0x2A6A4C4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // MirroredBeatmapObjectManager
  #pragma pack(pop)
  static check_size<sizeof(MirroredBeatmapObjectManager), 64 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ObstacleController*, GlobalNamespace::MirroredObstacleController*>*)> __GlobalNamespace_MirroredBeatmapObjectManagerSizeCheck;
  static_assert(sizeof(MirroredBeatmapObjectManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned
// Il2CppName: HandleNoteWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "HandleNoteWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned
// Il2CppName: HandleNoteWasDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "HandleNoteWasDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned
// Il2CppName: HandleObstacleWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "HandleObstacleWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned
// Il2CppName: HandleObstacleWasDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "HandleObstacleWasDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects
// Il2CppName: HandleDidHideAllBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)(bool)>(&GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "HandleDidHideAllBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredBeatmapObjectManager::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredBeatmapObjectManager::*)()>(&GlobalNamespace::MirroredBeatmapObjectManager::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredBeatmapObjectManager*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
