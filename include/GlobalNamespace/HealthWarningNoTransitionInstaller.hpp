// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
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
  // Forward declaring type: HealthWarningScenesTransitionSetupDataSO
  class HealthWarningScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private HealthWarningSceneSetupData _healthWarningSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningSceneSetupData*) == 0x8);
    // private HealthWarningScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: HealthWarningNoTransitionInstaller
    HealthWarningNoTransitionInstaller(GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData_ = {}, GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}) noexcept : healthWarningSceneSetupData{healthWarningSceneSetupData_}, scenesTransitionSetupData{scenesTransitionSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private HealthWarningSceneSetupData _healthWarningSceneSetupData
    GlobalNamespace::HealthWarningSceneSetupData* _get__healthWarningSceneSetupData();
    // Set instance field: private HealthWarningSceneSetupData _healthWarningSceneSetupData
    void _set__healthWarningSceneSetupData(GlobalNamespace::HealthWarningSceneSetupData* value);
    // Get instance field: private HealthWarningScenesTransitionSetupDataSO _scenesTransitionSetupData
    GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* _get__scenesTransitionSetupData();
    // Set instance field: private HealthWarningScenesTransitionSetupDataSO _scenesTransitionSetupData
    void _set__scenesTransitionSetupData(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* value);
    // public System.Void .ctor()
    // Offset: 0x1143574
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningNoTransitionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x1143524
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
  }; // HealthWarningNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningNoTransitionInstaller), 32 + sizeof(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*)> __GlobalNamespace_HealthWarningNoTransitionInstallerSizeCheck;
  static_assert(sizeof(HealthWarningNoTransitionInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningNoTransitionInstaller*, "", "HealthWarningNoTransitionInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningNoTransitionInstaller::*)(Zenject::DiContainer*)>(&GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
