// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass33_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameScenesManager::$$c__DisplayClass33_0 : public ::Il2CppObject {
    public:
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> newSceneNames
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* newSceneNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> emptyTransitionSceneNameList
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppString*>* emptyTransitionSceneNameList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // public GameScenesManager/ScenesStackData scenesStackData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager::ScenesStackData*) == 0x8);
    // public ScenesTransitionSetupDataSO scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> <>9__1
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<Zenject::DiContainer*>* $$9__1;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> <>9__2
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<Zenject::DiContainer*>* $$9__2;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass33_0
    $$c__DisplayClass33_0(GlobalNamespace::GameScenesManager* $$4__this_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* newSceneNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* emptyTransitionSceneNameList_ = {}, GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData_ = {}, GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}, System::Action_1<Zenject::DiContainer*>* finishCallback_ = {}, System::Action_1<Zenject::DiContainer*>* $$9__1_ = {}, System::Action_1<Zenject::DiContainer*>* $$9__2_ = {}) noexcept : $$4__this{$$4__this_}, newSceneNames{newSceneNames_}, emptyTransitionSceneNameList{emptyTransitionSceneNameList_}, scenesStackData{scenesStackData_}, scenesTransitionSetupData{scenesTransitionSetupData_}, finishCallback{finishCallback_}, $$9__1{$$9__1_}, $$9__2{$$9__2_} {}
    // Get instance field reference: public GameScenesManager <>4__this
    GlobalNamespace::GameScenesManager*& dyn_$$4__this();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> newSceneNames
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_newSceneNames();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> emptyTransitionSceneNameList
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_emptyTransitionSceneNameList();
    // Get instance field reference: public GameScenesManager/ScenesStackData scenesStackData
    GlobalNamespace::GameScenesManager::ScenesStackData*& dyn_scenesStackData();
    // Get instance field reference: public ScenesTransitionSetupDataSO scenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_scenesTransitionSetupData();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> finishCallback
    System::Action_1<Zenject::DiContainer*>*& dyn_finishCallback();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> <>9__1
    System::Action_1<Zenject::DiContainer*>*& dyn_$$9__1();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> <>9__2
    System::Action_1<Zenject::DiContainer*>*& dyn_$$9__2();
    // System.Void <ClearAndOpenScenes>b__0(Zenject.DiContainer emptySceneContainer)
    // Offset: 0x12628B4
    void $ClearAndOpenScenes$b__0(Zenject::DiContainer* emptySceneContainer);
    // System.Void <ClearAndOpenScenes>b__1(Zenject.DiContainer container)
    // Offset: 0x12629D0
    void $ClearAndOpenScenes$b__1(Zenject::DiContainer* container);
    // System.Void <ClearAndOpenScenes>b__2(Zenject.DiContainer container)
    // Offset: 0x1262A74
    void $ClearAndOpenScenes$b__2(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x126196C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass33_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass33_0*, creationType>()));
    }
  }; // GameScenesManager/<>c__DisplayClass33_0
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass33_0), 72 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass33_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass33_0) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0*, "", "GameScenesManager/<>c__DisplayClass33_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__0
// Il2CppName: <ClearAndOpenScenes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::*)(Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__0)> {
  static const MethodInfo* get() {
    static auto* emptySceneContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0*), "<ClearAndOpenScenes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emptySceneContainer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__1
// Il2CppName: <ClearAndOpenScenes>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::*)(Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__1)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0*), "<ClearAndOpenScenes>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__2
// Il2CppName: <ClearAndOpenScenes>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::*)(Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::$ClearAndOpenScenes$b__2)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0*), "<ClearAndOpenScenes>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
