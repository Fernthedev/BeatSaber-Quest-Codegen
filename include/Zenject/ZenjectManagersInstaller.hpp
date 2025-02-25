// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ZenjectManagersInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectManagersInstaller : public Zenject::Installer_1<Zenject::ZenjectManagersInstaller*> {
    public:
    // Creating value type constructor for type: ZenjectManagersInstaller
    ZenjectManagersInstaller() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23E3380
    // Implemented from: Zenject.Installer`1
    // Base method: System.Void Installer_1::.ctor()
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectManagersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ZenjectManagersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectManagersInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x23E31E4
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ZenjectManagersInstaller
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectManagersInstaller*, "Zenject", "ZenjectManagersInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectManagersInstaller::*)()>(&Zenject::ZenjectManagersInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectManagersInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
