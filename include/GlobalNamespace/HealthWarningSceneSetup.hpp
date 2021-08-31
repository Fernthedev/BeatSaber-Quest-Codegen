// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningSceneSetupData
  class HealthWarningSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningSceneSetup : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xE45EC4
    // private readonly HealthWarningSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HealthWarningSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningSceneSetupData*) == 0x8);
    // Creating value type constructor for type: HealthWarningSceneSetup
    HealthWarningSceneSetup(GlobalNamespace::HealthWarningSceneSetupData* sceneSetupData_ = {}) noexcept : sceneSetupData{sceneSetupData_} {}
    // Get instance field reference: private readonly HealthWarningSceneSetupData _sceneSetupData
    GlobalNamespace::HealthWarningSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x1143704
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x114357C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // HealthWarningSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningSceneSetup), 32 + sizeof(GlobalNamespace::HealthWarningSceneSetupData*)> __GlobalNamespace_HealthWarningSceneSetupSizeCheck;
  static_assert(sizeof(HealthWarningSceneSetup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetup*, "", "HealthWarningSceneSetup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningSceneSetup::*)()>(&GlobalNamespace::HealthWarningSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
