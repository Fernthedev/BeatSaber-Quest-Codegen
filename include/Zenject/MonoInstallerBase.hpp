// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoInstallerBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class MonoInstallerBase : public UnityEngine::MonoBehaviour/*, public Zenject::IInstaller*/ {
    public:
    // private Zenject.DiContainer <Container>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: MonoInstallerBase
    MonoInstallerBase(Zenject::DiContainer* Container_ = {}) noexcept : Container{Container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private Zenject.DiContainer <Container>k__BackingField
    Zenject::DiContainer* _get_$Container$k__BackingField();
    // Set instance field: private Zenject.DiContainer <Container>k__BackingField
    void _set_$Container$k__BackingField(Zenject::DiContainer* value);
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x1713A64
    Zenject::DiContainer* get_Container();
    // protected System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0x1713A6C
    void set_Container(Zenject::DiContainer* value);
    // public System.Boolean get_IsEnabled()
    // Offset: 0x1713A74
    bool get_IsEnabled();
    // public System.Void Start()
    // Offset: 0x1713A7C
    void Start();
    // public System.Void InstallBindings()
    // Offset: 0x1713A80
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1713A5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstallerBase*, creationType>()));
    }
  }; // Zenject.MonoInstallerBase
  #pragma pack(pop)
  static check_size<sizeof(MonoInstallerBase), 24 + sizeof(Zenject::DiContainer*)> __Zenject_MonoInstallerBaseSizeCheck;
  static_assert(sizeof(MonoInstallerBase) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstallerBase*, "Zenject", "MonoInstallerBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::MonoInstallerBase::*)()>(&Zenject::MonoInstallerBase::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstallerBase*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::set_Container
// Il2CppName: set_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoInstallerBase::*)(Zenject::DiContainer*)>(&Zenject::MonoInstallerBase::set_Container)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstallerBase*), "set_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MonoInstallerBase::*)()>(&Zenject::MonoInstallerBase::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstallerBase*), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoInstallerBase::*)()>(&Zenject::MonoInstallerBase::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstallerBase*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MonoInstallerBase::*)()>(&Zenject::MonoInstallerBase::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstallerBase*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MonoInstallerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
