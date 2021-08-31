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
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseAppCoreInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseAppCoreInstaller : public Zenject::MonoInstaller {
    public:
    // private NetEaseManager _netEaseManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* netEaseManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // Creating value type constructor for type: NetEaseAppCoreInstaller
    NetEaseAppCoreInstaller(GlobalNamespace::NetEaseManager* netEaseManagerPrefab_ = {}) noexcept : netEaseManagerPrefab{netEaseManagerPrefab_} {}
    // Get instance field: private NetEaseManager _netEaseManagerPrefab
    GlobalNamespace::NetEaseManager* _get__netEaseManagerPrefab();
    // Set instance field: private NetEaseManager _netEaseManagerPrefab
    void _set__netEaseManagerPrefab(GlobalNamespace::NetEaseManager* value);
    // public System.Void .ctor()
    // Offset: 0x103DCE0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseAppCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseAppCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseAppCoreInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x103DC6C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // NetEaseAppCoreInstaller
  #pragma pack(pop)
  static check_size<sizeof(NetEaseAppCoreInstaller), 32 + sizeof(GlobalNamespace::NetEaseManager*)> __GlobalNamespace_NetEaseAppCoreInstallerSizeCheck;
  static_assert(sizeof(NetEaseAppCoreInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseAppCoreInstaller*, "", "NetEaseAppCoreInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppCoreInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetEaseAppCoreInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseAppCoreInstaller::*)()>(&GlobalNamespace::NetEaseAppCoreInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseAppCoreInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
