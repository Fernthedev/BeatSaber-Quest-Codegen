// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/<>c__DisplayClass31_0
  // [CompilerGeneratedAttribute] Offset: DE3220
  class GameScenesManager::$$c__DisplayClass31_0 : public ::Il2CppObject {
    public:
    // public GameScenesManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameScenesManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> finishCallback
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass31_0
    $$c__DisplayClass31_0(GlobalNamespace::GameScenesManager* $$4__this_ = {}, System::Action_1<Zenject::DiContainer*>* finishCallback_ = {}) noexcept : $$4__this{$$4__this_}, finishCallback{finishCallback_} {}
    // System.Void <PopScenes>b__0(Zenject.DiContainer container)
    // Offset: 0x1248B5C
    void $PopScenes$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x12477C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::$$c__DisplayClass31_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::$$c__DisplayClass31_0*, creationType>()));
    }
  }; // GameScenesManager/<>c__DisplayClass31_0
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::$$c__DisplayClass31_0), 24 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __GlobalNamespace_GameScenesManager_$$c__DisplayClass31_0SizeCheck;
  static_assert(sizeof(GameScenesManager::$$c__DisplayClass31_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0*, "", "GameScenesManager/<>c__DisplayClass31_0");
// Writing includes for template specializations
#include "Zenject/DiContainer.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::$PopScenes$b__0
// Il2CppName: <PopScenes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::*)(Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::$PopScenes$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0*), "<PopScenes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
