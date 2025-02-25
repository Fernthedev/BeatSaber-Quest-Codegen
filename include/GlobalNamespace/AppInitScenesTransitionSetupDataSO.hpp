// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AppInitScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Nested type: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
    struct AppInitOverrideStartType;
    // Nested type: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData
    class AppInitSceneSetupData;
    // Creating value type constructor for type: AppInitScenesTransitionSetupDataSO
    AppInitScenesTransitionSetupDataSO() noexcept {}
    // public System.Void Init()
    // Offset: 0x1175D4C
    void Init();
    // public System.Void InitAsAppStart()
    // Offset: 0x1175DC0
    void InitAsAppStart();
    // public System.Void __Init(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType, MockPlayersModel mockPlayersModel)
    // Offset: 0x1175E34
    void __Init(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType, GlobalNamespace::MockPlayersModel* mockPlayersModel);
    // public System.Void .ctor()
    // Offset: 0x1175EB4
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInitScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AppInitScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInitScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // AppInitScenesTransitionSetupDataSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO*, "", "AppInitScenesTransitionSetupDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart
// Il2CppName: InitAsAppStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "InitAsAppStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init
// Il2CppName: __Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType, GlobalNamespace::MockPlayersModel*)>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  static const MethodInfo* get() {
    static auto* appInitOverrideStartType = &::il2cpp_utils::GetClassFromName("", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType")->byval_arg;
    static auto* mockPlayersModel = &::il2cpp_utils::GetClassFromName("", "MockPlayersModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*), "__Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appInitOverrideStartType, mockPlayersModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
