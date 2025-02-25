// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoInstaller`6
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
  class MonoInstaller_6 : public Zenject::MonoInstallerBase {
    public:
    // Creating value type constructor for type: MonoInstaller_6
    MonoInstaller_6() noexcept {}
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_6::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5)})));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, container, p1, p2, p3, p4, p5);
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_6::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(resourcePath), ::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5)})));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, resourcePath, container, p1, p2, p3, p4, p5);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*, creationType>()));
    }
  }; // Zenject.MonoInstaller`6
  // Could not write size check! Type: Zenject.MonoInstaller`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_6, "Zenject", "MonoInstaller`6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
