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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenSystem
  class ScreenSystem;
  // Forward declaring type: FlowCoordinator
  class FlowCoordinator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HierarchyManager
  // [TokenAttribute] Offset: FFFFFFFF
  class HierarchyManager : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.ScreenSystem _screenSystem
    // Size: 0x8
    // Offset: 0x18
    HMUI::ScreenSystem* screenSystem;
    // Field size check
    static_assert(sizeof(HMUI::ScreenSystem*) == 0x8);
    // [InjectAttribute] Offset: 0xE16EC4
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private HMUI.FlowCoordinator _rootFlowCoordinator
    // Size: 0x8
    // Offset: 0x28
    HMUI::FlowCoordinator* rootFlowCoordinator;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // Creating value type constructor for type: HierarchyManager
    HierarchyManager(HMUI::ScreenSystem* screenSystem_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, HMUI::FlowCoordinator* rootFlowCoordinator_ = {}) noexcept : screenSystem{screenSystem_}, gameScenesManager{gameScenesManager_}, rootFlowCoordinator{rootFlowCoordinator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HMUI.ScreenSystem _screenSystem
    HMUI::ScreenSystem* _get__screenSystem();
    // Set instance field: private HMUI.ScreenSystem _screenSystem
    void _set__screenSystem(HMUI::ScreenSystem* value);
    // Get instance field: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // Get instance field: private HMUI.FlowCoordinator _rootFlowCoordinator
    HMUI::FlowCoordinator* _get__rootFlowCoordinator();
    // Set instance field: private HMUI.FlowCoordinator _rootFlowCoordinator
    void _set__rootFlowCoordinator(HMUI::FlowCoordinator* value);
    // protected System.Void Start()
    // Offset: 0x13729AC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1372B68
    void OnDestroy();
    // private System.Void HandleSceneTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x1372AAC
    void HandleSceneTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandleBeforeDismissingScenes()
    // Offset: 0x1372C40
    void HandleBeforeDismissingScenes();
    // public System.Void StartWithFlowCoordinator(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0x1372CFC
    void StartWithFlowCoordinator(HMUI::FlowCoordinator* flowCoordinator);
    // public System.Void .ctor()
    // Offset: 0x1372D20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HierarchyManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HierarchyManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HierarchyManager*, creationType>()));
    }
  }; // HMUI.HierarchyManager
  #pragma pack(pop)
  static check_size<sizeof(HierarchyManager), 40 + sizeof(HMUI::FlowCoordinator*)> __HMUI_HierarchyManagerSizeCheck;
  static_assert(sizeof(HierarchyManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HierarchyManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::HandleSceneTransitionDidFinish
// Il2CppName: HandleSceneTransitionDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*)>(&HMUI::HierarchyManager::HandleSceneTransitionDidFinish)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "HandleSceneTransitionDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, container});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::HandleBeforeDismissingScenes
// Il2CppName: HandleBeforeDismissingScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::HandleBeforeDismissingScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "HandleBeforeDismissingScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::StartWithFlowCoordinator
// Il2CppName: StartWithFlowCoordinator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)(HMUI::FlowCoordinator*)>(&HMUI::HierarchyManager::StartWithFlowCoordinator)> {
  static const MethodInfo* get() {
    static auto* flowCoordinator = &::il2cpp_utils::GetClassFromName("HMUI", "FlowCoordinator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "StartWithFlowCoordinator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flowCoordinator});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
