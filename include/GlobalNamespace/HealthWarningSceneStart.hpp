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
  // Forward declaring type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: HMUI
namespace HMUI {
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
  // Autogenerated type: HealthWarningSceneStart
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningSceneStart : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::HealthWarningSceneStart::$Start$d__3
    class $Start$d__3;
    // private HealthWarningFlowCoordinator _healthWarninglowCoordinator
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::HealthWarningFlowCoordinator* healthWarninglowCoordinator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0xE4BF30
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE4BF40
    // private HMUI.HierarchyManager _hierarchyManager
    // Size: 0x8
    // Offset: 0x28
    HMUI::HierarchyManager* hierarchyManager;
    // Field size check
    static_assert(sizeof(HMUI::HierarchyManager*) == 0x8);
    // Creating value type constructor for type: HealthWarningSceneStart
    HealthWarningSceneStart(GlobalNamespace::HealthWarningFlowCoordinator* healthWarninglowCoordinator_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, HMUI::HierarchyManager* hierarchyManager_ = {}) noexcept : healthWarninglowCoordinator{healthWarninglowCoordinator_}, gameScenesManager{gameScenesManager_}, hierarchyManager{hierarchyManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HealthWarningFlowCoordinator _healthWarninglowCoordinator
    GlobalNamespace::HealthWarningFlowCoordinator*& dyn__healthWarninglowCoordinator();
    // Get instance field reference: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private HMUI.HierarchyManager _hierarchyManager
    HMUI::HierarchyManager*& dyn__hierarchyManager();
    // public System.Collections.IEnumerator Start()
    // Offset: 0x1186C9C
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x1186D38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningSceneStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningSceneStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningSceneStart*, creationType>()));
    }
  }; // HealthWarningSceneStart
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningSceneStart), 40 + sizeof(HMUI::HierarchyManager*)> __GlobalNamespace_HealthWarningSceneStartSizeCheck;
  static_assert(sizeof(HealthWarningSceneStart) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneStart*, "", "HealthWarningSceneStart");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneStart::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::HealthWarningSceneStart::*)()>(&GlobalNamespace::HealthWarningSceneStart::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningSceneStart*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
