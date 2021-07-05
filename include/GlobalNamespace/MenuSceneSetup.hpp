// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: FlowCoordinator
  class FlowCoordinator;
  // Forward declaring type: HierarchyManager
  class HierarchyManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MenuSceneSetup
  class MenuSceneSetup : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MenuSceneSetup::$Start$d__3
    class $Start$d__3;
    // private HMUI.FlowCoordinator _rootFlowCoordinator
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator* rootFlowCoordinator;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xE29004
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE29014
    // private readonly HMUI.HierarchyManager _hierarchyManager
    // Size: 0x8
    // Offset: 0x28
    HMUI::HierarchyManager* hierarchyManager;
    // Field size check
    static_assert(sizeof(HMUI::HierarchyManager*) == 0x8);
    // Creating value type constructor for type: MenuSceneSetup
    MenuSceneSetup(HMUI::FlowCoordinator* rootFlowCoordinator_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, HMUI::HierarchyManager* hierarchyManager_ = {}) noexcept : rootFlowCoordinator{rootFlowCoordinator_}, gameScenesManager{gameScenesManager_}, hierarchyManager{hierarchyManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x2407EA8
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x2407F44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuSceneSetup*, creationType>()));
    }
  }; // MenuSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(MenuSceneSetup), 40 + sizeof(HMUI::HierarchyManager*)> __GlobalNamespace_MenuSceneSetupSizeCheck;
  static_assert(sizeof(MenuSceneSetup) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuSceneSetup*, "", "MenuSceneSetup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuSceneSetup::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MenuSceneSetup::*)()>(&GlobalNamespace::MenuSceneSetup::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuSceneSetup*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
