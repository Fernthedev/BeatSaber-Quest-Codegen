// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScriptableObjectInstallerBase
#include "Zenject/ScriptableObjectInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableObjectInstaller : public Zenject::ScriptableObjectInstallerBase {
    public:
    // Creating value type constructor for type: ScriptableObjectInstaller
    ScriptableObjectInstaller() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x171D438
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScriptableObjectInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstaller*, creationType>()));
    }
  }; // Zenject.ScriptableObjectInstaller
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstaller*, "Zenject", "ScriptableObjectInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
