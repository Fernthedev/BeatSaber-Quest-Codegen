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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NoTransitionInstaller
  class NoTransitionInstaller : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: NoTransitionInstaller
    NoTransitionInstaller() noexcept {}
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x16DD35C
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void PostInstall(Zenject.DiContainer container)
    // Offset: 0x16DD360
    void PostInstall(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x16DD364
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::NoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionInstaller*, creationType>()));
    }
  }; // Zenject.NoTransitionInstaller
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoTransitionInstaller*, "Zenject", "NoTransitionInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::NoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NoTransitionInstaller::*)(Zenject::DiContainer*)>(&Zenject::NoTransitionInstaller::InstallBindings)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionInstaller::PostInstall
// Il2CppName: PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NoTransitionInstaller::*)(Zenject::DiContainer*)>(&Zenject::NoTransitionInstaller::PostInstall)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::NoTransitionInstaller*), "PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::NoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
