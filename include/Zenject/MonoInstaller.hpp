// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoInstaller
  class MonoInstaller : public Zenject::MonoInstallerBase {
    public:
    // Creating value type constructor for type: MonoInstaller
    MonoInstaller() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16DCFF0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller*, creationType>()));
    }
  }; // Zenject.MonoInstaller
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstaller*, "Zenject", "MonoInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MonoInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
