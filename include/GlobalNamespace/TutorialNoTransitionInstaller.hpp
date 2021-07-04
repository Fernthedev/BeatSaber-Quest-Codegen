// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
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
  // Autogenerated type: TutorialNoTransitionInstaller
  class TutorialNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private TutorialScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: TutorialNoTransitionInstaller
    TutorialNoTransitionInstaller(GlobalNamespace::TutorialScenesTransitionSetupDataSO* scenesTransitionSetupData_ = {}) noexcept : scenesTransitionSetupData{scenesTransitionSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x111E324
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x111E5A0
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialNoTransitionInstaller*, creationType>()));
    }
  }; // TutorialNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialNoTransitionInstaller), 24 + sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*)> __GlobalNamespace_TutorialNoTransitionInstallerSizeCheck;
  static_assert(sizeof(TutorialNoTransitionInstaller) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialNoTransitionInstaller*, "", "TutorialNoTransitionInstaller");
// Writing includes for template specializations
#include "Zenject/DiContainer.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoTransitionInstaller::*)(Zenject::DiContainer*)>(&GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
