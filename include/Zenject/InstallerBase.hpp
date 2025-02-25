// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
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
  // Autogenerated type: Zenject.InstallerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class InstallerBase : public ::Il2CppObject/*, public Zenject::IInstaller*/ {
    public:
    // [InjectAttribute] Offset: 0xE038FC
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: InstallerBase
    InstallerBase(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // Get instance field reference: private Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x166A9B8
    Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x166A9C0
    bool get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    void InstallBindings();
    // protected System.Void .ctor()
    // Offset: 0x166A9B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstallerBase*, creationType>()));
    }
  }; // Zenject.InstallerBase
  #pragma pack(pop)
  static check_size<sizeof(InstallerBase), 16 + sizeof(Zenject::DiContainer*)> __Zenject_InstallerBaseSizeCheck;
  static_assert(sizeof(InstallerBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase*, "Zenject", "InstallerBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InstallerBase::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InstallerBase::*)()>(&Zenject::InstallerBase::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::InstallerBase*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::InstallerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
